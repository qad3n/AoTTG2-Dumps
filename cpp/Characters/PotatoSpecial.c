// Type: Characters.PotatoSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/PotatoSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/PotatoSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.PotatoSpecial$$get_ActiveTime
// il2cpp: float Characters_PotatoSpecial__get_ActiveTime (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x3feab50

float Characters_PotatoSpecial__get_ActiveTime
                (Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.PotatoSpecial$$get_GroundedOnly
// il2cpp: bool Characters_PotatoSpecial__get_GroundedOnly (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x3feab60

bool_conflict
Characters_PotatoSpecial__get_GroundedOnly(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.PotatoSpecial$$.ctor
// il2cpp: void Characters_PotatoSpecial___ctor (Characters_PotatoSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7880

void Characters_PotatoSpecial___ctor
               (Characters_PotatoSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 20.0;
  return;
}


// Characters.PotatoSpecial$$Activate
// il2cpp: void Characters_PotatoSpecial__Activate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x3feab70

void Characters_PotatoSpecial__Activate(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_Human_o *pCVar2;
  Characters_Horse_o *pCVar3;
  undefined8 uVar4;
  
  if (DAT_05704175 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05704175 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 != (Characters_Human_o *)0x0) &&
     (pCVar3 = (pCVar2->fields).Horse, pCVar3 != (Characters_Horse_o *)0x0)) {
    fVar1 = (pCVar3->fields)._disableKinematicTimeLeft;
    (__this->fields)._oldSpeed = fVar1;
    (__this->fields)._currentSpeed = fVar1 + 40.0;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar4 = *(undefined8 *)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
    (pCVar2->fields)._oldHeadRotation.fields.x = (float)(int)uVar4;
    (pCVar2->fields)._oldHeadRotation.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
    il2cpp_runtime_glue(&(pCVar2->fields)._oldHeadRotation);
    pCVar2 = (__this->fields)._human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      Characters_Human__EmoteAnimation
                (pCVar2,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.PotatoSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_PotatoSpecial__ActiveFixedUpdate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x3feac30

void Characters_PotatoSpecial__ActiveFixedUpdate
               (Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    (pCVar2->fields)._disableKinematicTimeLeft = (__this->fields)._currentSpeed;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.PotatoSpecial$$Deactivate
// il2cpp: void Characters_PotatoSpecial__Deactivate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x3feac60

void Characters_PotatoSpecial__Deactivate(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_Horse_o *pCVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  undefined8 uVar6;
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar7;
  long lVar8;
  
  if (DAT_05704176 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearWeapon);
    DAT_05704176 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 != (Characters_Human_o *)0x0) &&
     (pCVar3 = (pCVar2->fields).Horse, pCVar3 != (Characters_Horse_o *)0x0)) {
    (pCVar3->fields)._disableKinematicTimeLeft = (__this->fields)._oldSpeed;
    pSVar4 = (pCVar2->fields).crossfadeCache;
    lVar8 = 0x58;
    if (pSVar4 != (System_Object_array *)0x0) {
      pIVar5 = (pSVar4->obj).klass;
      bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      if (bVar1 <= (pIVar5->_2).naturalAligment) {
        lVar8 = (ulong)((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon) * 8 + 0x58;
      }
    }
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar6 = *(undefined8 *)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar8);
    (pCVar2->fields)._oldHeadRotation.fields.x = (float)(int)uVar6;
    (pCVar2->fields)._oldHeadRotation.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
    il2cpp_runtime_glue(&(pCVar2->fields)._oldHeadRotation);
    pCVar2 = (__this->fields)._human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      __this_00 = *(Characters_AnimationHandler_o **)&(pCVar2->fields)._cameraFPS;
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        bVar7 = Characters_AnimationHandler__IsPlaying
                          (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68),
                           (MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        pCVar2 = (__this->fields)._human;
        if (pCVar2 != (Characters_Human_o *)0x0) {
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pCVar2,
                     *(System_String_o **)&(pCVar2->fields)._oldHeadRotation.fields,0.1,0.0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


