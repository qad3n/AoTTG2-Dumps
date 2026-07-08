// Type: Characters.DownStrikeSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/DownStrikeSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/DownStrikeSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.DownStrikeSpecial$$.ctor
// il2cpp: void Characters_DownStrikeSpecial___ctor (Characters_DownStrikeSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd78a0

void Characters_DownStrikeSpecial___ctor
               (Characters_DownStrikeSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor((Characters_BaseHoldAttackSpecial_o *)__this,owner,method)
  ;
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.DownStrikeSpecial$$Activate
// il2cpp: void Characters_DownStrikeSpecial__Activate (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x3fe89b0

void Characters_DownStrikeSpecial__Activate
               (Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  Characters_HookUseable_o *__this_01;
  
  if (DAT_05704170 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05704170 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if (*(int *)&(pCVar1->fields).Weapon == 0) {
      *(undefined1 *)((long)&(__this->fields)._keyIsReset + 1) = 1;
      __this_00 = (pCVar1->fields).HumanCache;
    }
    else {
      Characters_Human__Unmount(pCVar1,0,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._human;
      *(undefined1 *)((long)&(__this->fields)._keyIsReset + 1) = 1;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03fe8a9a;
      __this_00 = (pCVar1->fields).HumanCache;
    }
    if (__this_00 != (Characters_HumanComponentCache_o *)0x0) {
      Characters_HookUseable__DisableAnyHook
                ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (__this_01 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
         __this_01 != (Characters_HookUseable_o *)0x0)) {
        Characters_HookUseable__DisableAnyHook(__this_01,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          *(undefined2 *)&(pCVar1->fields)._lastMountedPosition.fields.x = 0x101;
          *(undefined1 *)((long)&(pCVar1->fields)._lastMountedPosition.fields.x + 2) = 1;
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Characters_Human__StartSpecialAttack
                    (pCVar1,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03fe8a9a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DownStrikeSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_DownStrikeSpecial__ActiveFixedUpdate (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x3fe8aa0

void Characters_DownStrikeSpecial__ActiveFixedUpdate
               (Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  Characters_Human_o *pCVar3;
  UnityEngine_Rigidbody_o *pUVar4;
  Characters_HumanComponentCache_o *pCVar5;
  Characters_BaseUseable_o *pCVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  
  if (DAT_05704171 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704171 = '\x01';
  }
  Characters_ExtendedUseable__ActiveFixedUpdate
            ((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  cVar9 = *(char *)((long)&(__this->fields)._keyIsReset + 1);
  if (cVar9 == '\0') {
    cVar9 = '\0';
    pCVar3 = (__this->fields)._human;
  }
  else {
    pCVar3 = (__this->fields)._human;
    if ((pCVar3 == (Characters_Human_o *)0x0) ||
       (lVar7 = *(long *)&(pCVar3->fields).Dead, lVar7 == 0)) goto LAB_03fe8d88;
    pUVar4 = *(UnityEngine_Rigidbody_o **)(lVar7 + 0x18);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03fe8d88;
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    force.fields.x = (float)uVar1 * 10.0;
    force.fields.y = (float)((ulong)uVar1 >> 0x20) * 10.0;
    force.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 10.0;
    UnityEngine_Rigidbody__AddForce(pUVar4,force,1,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._keyIsReset + 1) = 0;
    pCVar3 = (__this->fields)._human;
    if ((pCVar3 == (Characters_Human_o *)0x0) ||
       (lVar7 = *(long *)&(pCVar3->fields).Dead, lVar7 == 0)) goto LAB_03fe8d88;
    pUVar4 = *(UnityEngine_Rigidbody_o **)(lVar7 + 0x18);
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03fe8d88;
    UnityEngine_Rigidbody__set_velocity
              (pUVar4,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
    pCVar3 = (__this->fields)._human;
    if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03fe8d88;
    Characters_Human__ActivateBlades(pCVar3,(MethodInfo *)0x0);
    lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x88), lVar7 == 0)) goto LAB_03fe8d88;
    cVar2 = *(char *)(lVar7 + 0x11);
    pCVar3 = (__this->fields)._human;
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_init_class();
      lVar7 = *(long *)(TypeInfo_HumanSounds + 0xb8);
      if (cVar2 == '\0') goto LAB_03fe8c79;
LAB_03fe8c45:
      lVar8 = 0x68;
    }
    else {
      lVar7 = *(long *)(TypeInfo_HumanSounds + 0xb8);
      if (cVar2 != '\0') goto LAB_03fe8c45;
LAB_03fe8c79:
      lVar8 = 0x60;
    }
    if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03fe8d88;
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)pCVar3,*(System_String_o **)(lVar7 + lVar8),
               (MethodInfo *)0x0);
    pCVar3 = (__this->fields)._human;
  }
  if ((pCVar3 != (Characters_Human_o *)0x0) && (lVar7 = *(long *)&(pCVar3->fields).Dead, lVar7 != 0)
     ) {
    pUVar4 = *(UnityEngine_Rigidbody_o **)(lVar7 + 0x18);
    if (DAT_0570266b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570266b = '\x01';
    }
    if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03fe8d88;
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    force_00.fields.x = (float)uVar1 * 3.0;
    force_00.fields.y = (float)((ulong)uVar1 >> 0x20) * 3.0;
    force_00.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 3.0;
    UnityEngine_Rigidbody__AddForce(pUVar4,force_00,2,(MethodInfo *)0x0);
    pCVar3 = (__this->fields)._human;
    if (cVar9 == '\0') {
      if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03fe8d88;
      if (*(char *)((long)&(pCVar3->fields).Animation + 4) != '\0') goto LAB_03fe8d64;
    }
    else if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03fe8d88;
    pCVar5 = (pCVar3->fields).HumanCache;
    if (pCVar5 != (Characters_HumanComponentCache_o *)0x0) {
      if (*(char *)((long)&(pCVar5->fields).Rigidbody + 4) == '\0') {
        pCVar6 = (pCVar3->fields).Special;
        if (pCVar6 == (Characters_BaseUseable_o *)0x0) goto LAB_03fe8d88;
        if (((char)(pCVar6->fields).IsActive == '\0') && ((pCVar3->fields).FinishSetup != 7)) {
          return;
        }
      }
LAB_03fe8d64:
      *(undefined1 *)&(__this->fields).IsActive = 0;
      (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                (__this,(__this->klass->vtable)._10_Deactivate.method);
      return;
    }
  }
LAB_03fe8d88:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DownStrikeSpecial$$CanUse
// il2cpp: bool Characters_DownStrikeSpecial__CanUse (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x3fe8d90

bool_conflict
Characters_DownStrikeSpecial__CanUse(Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  bool_conflict bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return 0;
  }
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = Characters_Human__CanBladeAttack(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


