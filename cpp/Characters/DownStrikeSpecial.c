// Type: Characters.DownStrikeSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DownStrikeSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DownStrikeSpecial.cs
// --------------------------------

// Characters.DownStrikeSpecial$$.ctor
// il2cpp: void Characters_DownStrikeSpecial___ctor (Characters_DownStrikeSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e4160

void Characters_DownStrikeSpecial___ctor
               (Characters_DownStrikeSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor((Characters_BaseHoldAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.DownStrikeSpecial$$Activate
// il2cpp: void Characters_DownStrikeSpecial__Activate (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x42f5270

void Characters_DownStrikeSpecial__Activate(Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  System_String_o *pSVar3;
  System_String_Fields SVar4;
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar5;
  Characters_BaseMovementSync_o *pCVar6;
  long lVar7;
  Characters_Human_o *__this_01;
  long *__this_02;
  long *__this_03;
  Characters_Human_o *pCVar8;
  Characters_Human_o *__this_04;
  char cVar9;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  
  if (g_data_057adede == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adede = '\x01';
  }
  pCVar8 = (__this->fields)._human;
  __this_01 = (Characters_Human_o *)0x0;
  if (pCVar8 != (Characters_Human_o *)0x0) {
    if (*(int *)&(pCVar8->fields).Weapon == 0) {
      *(undefined1 *)((long)&(__this->fields)._keyIsReset + 1) = 1;
      __this_01 = (Characters_Human_o *)(pCVar8->fields).HumanCache;
    }
    else {
      Characters_Human__Unmount(pCVar8,0,(MethodInfo *)0x0);
      pCVar8 = (__this->fields)._human;
      *(undefined1 *)((long)&(__this->fields)._keyIsReset + 1) = 1;
      __this_01 = (Characters_Human_o *)0x0;
      if (pCVar8 == (Characters_Human_o *)0x0) goto label_042f535a;
      __this_01 = (Characters_Human_o *)(pCVar8->fields).HumanCache;
    }
    if (__this_01 != (Characters_Human_o *)0x0) {
      Characters_HookUseable__DisableAnyHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
      pCVar8 = (__this->fields)._human;
      if ((pCVar8 != (Characters_Human_o *)0x0) &&
         (__this_01 = (Characters_Human_o *)(pCVar8->fields).Special, __this_01 != (Characters_Human_o *)0x0))
      {
        Characters_HookUseable__DisableAnyHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
        pCVar8 = (__this->fields)._human;
        if (pCVar8 != (Characters_Human_o *)0x0) {
          *(undefined2 *)&(pCVar8->fields)._lastMountedPosition.fields.x = 0x101;
          *(undefined1 *)((long)&(pCVar8->fields)._lastMountedPosition.fields.x + 2) = 1;
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_Human__StartSpecialAttack
                    (pCVar8,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_042f535a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adedf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057adedf = '\x01';
  }
  __this_02 = (long *)__this_01;
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)__this_01,(MethodInfo *)0x0);
  cVar9 = *(char *)((long)&(__this_01->fields).VisibleName + 1);
  if (cVar9 == '\0') {
    cVar9 = '\0';
    pSVar3 = (__this_01->fields).RichTextName;
  }
  else {
    pSVar3 = (__this_01->fields).RichTextName;
    pCVar8 = (Characters_Human_o *)__this_02;
    if ((pSVar3 == (System_String_o *)0x0) || (SVar4 = pSVar3[4].fields, SVar4 == (System_String_Fields)0x0))
    goto label_042f5648;
    __this_03 = *(long **)((long)SVar4 + 0x18);
    if (g_data_057a6844 == '\0') {
      __this_02 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6844 = '\x01';
    }
    pCVar8 = (Characters_Human_o *)__this_02;
    if ((Characters_Human_o *)__this_03 == (Characters_Human_o *)0x0) goto label_042f5648;
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    force.fields.x = (float)uVar1 * 10.0;
    force.fields.y = (float)((ulong)uVar1 >> 0x20) * 10.0;
    force.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 10.0;
    UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)__this_03,force,1,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this_01->fields).VisibleName + 1) = 0;
    pSVar3 = (__this_01->fields).RichTextName;
    pCVar8 = (Characters_Human_o *)__this_03;
    if ((pSVar3 == (System_String_o *)0x0) || (SVar4 = pSVar3[4].fields, SVar4 == (System_String_Fields)0x0))
    goto label_042f5648;
    __this_00 = *(UnityEngine_Rigidbody_o **)((long)SVar4 + 0x18);
    if (g_data_057a65d5 == '\0') {
      __this_03 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    pCVar8 = (Characters_Human_o *)__this_03;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_042f5648;
    UnityEngine_Rigidbody__set_velocity
              (__this_00,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
    pCVar8 = (Characters_Human_o *)(__this_01->fields).RichTextName;
    if (pCVar8 == (Characters_Human_o *)0x0) goto label_042f5648;
    Characters_Human__ActivateBlades(pCVar8,(MethodInfo *)0x0);
    lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x88), lVar7 == 0)) goto label_042f5648;
    cVar2 = *(char *)(lVar7 + 0x11);
    __this_02 = (long *)(__this_01->fields).RichTextName;
    if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
      pCVar6 = (TypeInfo_HumanSounds->fields).MovementSync;
      if (cVar2 == '\0') goto label_042f5539;
label_042f5505:
      lVar7 = 0x68;
      pCVar8 = TypeInfo_HumanSounds;
    }
    else {
      pCVar6 = (TypeInfo_HumanSounds->fields).MovementSync;
      if (cVar2 != '\0') goto label_042f5505;
label_042f5539:
      lVar7 = 0x60;
      pCVar8 = TypeInfo_HumanSounds;
    }
    TypeInfo_HumanSounds = pCVar8;
    if ((Characters_Human_o *)__this_02 == (Characters_Human_o *)0x0) goto label_042f5648;
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_02,*(System_String_o **)((long)&pCVar6->klass + lVar7),
               (MethodInfo *)0x0);
    pSVar3 = (__this_01->fields).RichTextName;
  }
  pCVar8 = (Characters_Human_o *)__this_02;
  if ((pSVar3 != (System_String_o *)0x0) && (pSVar3[4].fields != (System_String_Fields)0x0)) {
    __this_04 = *(Characters_Human_o **)((long)pSVar3[4].fields + 0x18);
    if (g_data_057ac31b == '\0') {
      __this_02 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac31b = '\x01';
    }
    pCVar8 = (Characters_Human_o *)__this_02;
    if (__this_04 == (Characters_Human_o *)0x0) goto label_042f5648;
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    force_00.fields.x = (float)uVar1 * 3.0;
    force_00.fields.y = (float)((ulong)uVar1 >> 0x20) * 3.0;
    force_00.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 3.0;
    UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)__this_04,force_00,2,(MethodInfo *)0x0);
    pSVar3 = (__this_01->fields).RichTextName;
    pCVar8 = __this_04;
    if (cVar9 == '\0') {
      if (pSVar3 == (System_String_o *)0x0) goto label_042f5648;
      if (*(char *)((long)&pSVar3[8].klass + 4) != '\0') goto label_042f5624;
    }
    else if (pSVar3 == (System_String_o *)0x0) goto label_042f5648;
    if (pSVar3[0xb].klass != (System_String_c *)0x0) {
      if (*(char *)((long)&((pSVar3[0xb].klass)->_1).namespaze + 4) == '\0') {
        if (pSVar3[0xb].monitor == (void *)0x0) goto label_042f5648;
        if ((*(char *)((long)pSVar3[0xb].monitor + 0x1c) == '\0') && (*(int *)&pSVar3[0xe].monitor != 7)) {
          return;
        }
      }
label_042f5624:
      *(undefined1 *)((long)&(__this_01->fields).m_CancellationTokenSource + 4) = 0;
      (*(__this_01->klass->vtable)._10_unknown.methodPtr)
                (__this_01,(__this_01->klass->vtable)._10_unknown.method);
      return;
    }
  }
label_042f5648:
  il2cpp_runtime_helper_022b2c90();
  bVar5 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)pCVar8,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pSVar3 = (pCVar8->fields).RichTextName;
  if (pSVar3 != (System_String_o *)0x0) {
    if (g_data_057ade2f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon,0);
      g_data_057ade2f = '\x01';
    }
    SVar4 = pSVar3[10].fields;
    if (SVar4 != (System_String_Fields)0x0) {
      if ((*(byte *)(TypeInfo_BladeWeapon + 0x130) <= *(byte *)(*(long *)SVar4 + 0x130)) &&
         (*(long *)(*(long *)(*(long *)SVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BladeWeapon + 0x130) * 8) ==
          TypeInfo_BladeWeapon)) {
        if (0.0 < *(float *)((long)SVar4 + 0x40)) {
          return;
        }
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.DownStrikeSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_DownStrikeSpecial__ActiveFixedUpdate (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x42f5360

void Characters_DownStrikeSpecial__ActiveFixedUpdate
               (Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  System_String_Fields SVar3;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_Human_o *pCVar4;
  Characters_HumanComponentCache_o *pCVar5;
  Characters_BaseUseable_o *pCVar6;
  System_String_o *pSVar7;
  bool_conflict bVar8;
  Characters_BaseMovementSync_o *pCVar9;
  long lVar10;
  long *__this_01;
  long *__this_02;
  Characters_Human_o *pCVar11;
  Characters_Human_o *pCVar12;
  char cVar13;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  
  if (g_data_057adedf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057adedf = '\x01';
  }
  __this_01 = (long *)__this;
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  cVar13 = *(char *)((long)&(__this->fields)._keyIsReset + 1);
  if (cVar13 == '\0') {
    cVar13 = '\0';
    pCVar12 = (__this->fields)._human;
  }
  else {
    pCVar12 = (__this->fields)._human;
    pCVar11 = (Characters_Human_o *)__this_01;
    if ((pCVar12 == (Characters_Human_o *)0x0) || (lVar10 = *(long *)&(pCVar12->fields).Dead, lVar10 == 0))
    goto label_042f5648;
    __this_02 = *(long **)(lVar10 + 0x18);
    if (g_data_057a6844 == '\0') {
      __this_01 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6844 = '\x01';
    }
    pCVar11 = (Characters_Human_o *)__this_01;
    if ((Characters_Human_o *)__this_02 == (Characters_Human_o *)0x0) goto label_042f5648;
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    force.fields.x = (float)uVar1 * 10.0;
    force.fields.y = (float)((ulong)uVar1 >> 0x20) * 10.0;
    force.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 10.0;
    UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)__this_02,force,1,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._keyIsReset + 1) = 0;
    pCVar12 = (__this->fields)._human;
    pCVar11 = (Characters_Human_o *)__this_02;
    if ((pCVar12 == (Characters_Human_o *)0x0) || (lVar10 = *(long *)&(pCVar12->fields).Dead, lVar10 == 0))
    goto label_042f5648;
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar10 + 0x18);
    if (g_data_057a65d5 == '\0') {
      __this_02 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    pCVar11 = (Characters_Human_o *)__this_02;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_042f5648;
    UnityEngine_Rigidbody__set_velocity
              (__this_00,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
    pCVar11 = (__this->fields)._human;
    if (pCVar11 == (Characters_Human_o *)0x0) goto label_042f5648;
    Characters_Human__ActivateBlades(pCVar11,(MethodInfo *)0x0);
    lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x88), lVar10 == 0)) goto label_042f5648;
    cVar2 = *(char *)(lVar10 + 0x11);
    __this_01 = (long *)(__this->fields)._human;
    if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
      pCVar9 = (TypeInfo_HumanSounds->fields).MovementSync;
      if (cVar2 == '\0') goto label_042f5539;
label_042f5505:
      lVar10 = 0x68;
      pCVar11 = TypeInfo_HumanSounds;
    }
    else {
      pCVar9 = (TypeInfo_HumanSounds->fields).MovementSync;
      if (cVar2 != '\0') goto label_042f5505;
label_042f5539:
      lVar10 = 0x60;
      pCVar11 = TypeInfo_HumanSounds;
    }
    TypeInfo_HumanSounds = pCVar11;
    if ((Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0) goto label_042f5648;
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_01,*(System_String_o **)((long)&pCVar9->klass + lVar10),
               (MethodInfo *)0x0);
    pCVar12 = (__this->fields)._human;
  }
  pCVar11 = (Characters_Human_o *)__this_01;
  if ((pCVar12 != (Characters_Human_o *)0x0) && (lVar10 = *(long *)&(pCVar12->fields).Dead, lVar10 != 0)) {
    pCVar12 = *(Characters_Human_o **)(lVar10 + 0x18);
    if (g_data_057ac31b == '\0') {
      __this_01 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac31b = '\x01';
    }
    pCVar11 = (Characters_Human_o *)__this_01;
    if (pCVar12 == (Characters_Human_o *)0x0) goto label_042f5648;
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    force_00.fields.x = (float)uVar1 * 3.0;
    force_00.fields.y = (float)((ulong)uVar1 >> 0x20) * 3.0;
    force_00.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 3.0;
    UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)pCVar12,force_00,2,(MethodInfo *)0x0);
    pCVar4 = (__this->fields)._human;
    pCVar11 = pCVar12;
    if (cVar13 == '\0') {
      if (pCVar4 == (Characters_Human_o *)0x0) goto label_042f5648;
      if (*(char *)((long)&(pCVar4->fields).Animation + 4) != '\0') goto label_042f5624;
    }
    else if (pCVar4 == (Characters_Human_o *)0x0) goto label_042f5648;
    pCVar5 = (pCVar4->fields).HumanCache;
    if (pCVar5 != (Characters_HumanComponentCache_o *)0x0) {
      if (*(char *)((long)&(pCVar5->fields).Rigidbody + 4) == '\0') {
        pCVar6 = (pCVar4->fields).Special;
        if (pCVar6 == (Characters_BaseUseable_o *)0x0) goto label_042f5648;
        if (((char)(pCVar6->fields).IsActive == '\0') && ((pCVar4->fields).FinishSetup != 7)) {
          return;
        }
      }
label_042f5624:
      *(undefined1 *)&(__this->fields).IsActive = 0;
      (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                (__this,(__this->klass->vtable)._10_Deactivate.method);
      return;
    }
  }
label_042f5648:
  il2cpp_runtime_helper_022b2c90();
  bVar8 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)pCVar11,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pSVar7 = (pCVar11->fields).RichTextName;
  if (pSVar7 != (System_String_o *)0x0) {
    if (g_data_057ade2f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon,0);
      g_data_057ade2f = '\x01';
    }
    SVar3 = pSVar7[10].fields;
    if (SVar3 != (System_String_Fields)0x0) {
      if ((*(byte *)(TypeInfo_BladeWeapon + 0x130) <= *(byte *)(*(long *)SVar3 + 0x130)) &&
         (*(long *)(*(long *)(*(long *)SVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BladeWeapon + 0x130) * 8) ==
          TypeInfo_BladeWeapon)) {
        if (0.0 < *(float *)((long)SVar3 + 0x40)) {
          return;
        }
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.DownStrikeSpecial$$CanUse
// il2cpp: bool Characters_DownStrikeSpecial__CanUse (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x42f5650

bool_conflict Characters_DownStrikeSpecial__CanUse(Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Object_array *pSVar2;
  Il2CppClass *pIVar3;
  Characters_Human_o *pCVar4;
  bool_conflict bVar5;
  
  bVar5 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return 0;
  }
  pCVar4 = (__this->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    if (g_data_057ade2f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon,0);
      g_data_057ade2f = '\x01';
    }
    pSVar2 = (pCVar4->fields).crossfadeCache;
    if (pSVar2 != (System_Object_array *)0x0) {
      pIVar3 = (pSVar2->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
         ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        if (0.0 < *(float *)(pSVar2->m_Items + 4)) {
          return (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),(pCVar4->fields).FinishSetup == 0);
        }
        return 0;
      }
    }
    return 0;
  }
  bVar5 = il2cpp_runtime_helper_022b2c90();
  return bVar5;
}


