// Type: Characters.PotatoSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/PotatoSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/PotatoSpecial.cs
// --------------------------------

// Characters.PotatoSpecial$$get_ActiveTime
// il2cpp: float Characters_PotatoSpecial__get_ActiveTime (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x42f7410

float Characters_PotatoSpecial__get_ActiveTime(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.PotatoSpecial$$get_GroundedOnly
// il2cpp: bool Characters_PotatoSpecial__get_GroundedOnly (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x42f7420

bool_conflict
Characters_PotatoSpecial__get_GroundedOnly(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.PotatoSpecial$$.ctor
// il2cpp: void Characters_PotatoSpecial___ctor (Characters_PotatoSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e4140

void Characters_PotatoSpecial___ctor
               (Characters_PotatoSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 20.0;
  return;
}


// Characters.PotatoSpecial$$Activate
// il2cpp: void Characters_PotatoSpecial__Activate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x42f7430

void Characters_PotatoSpecial__Activate(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  Characters_Horse_o *pCVar4;
  undefined8 uVar5;
  System_Object_array *pSVar6;
  Il2CppClass *pIVar7;
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar8;
  Characters_PotatoSpecial_o *pCVar9;
  long lVar10;
  
  pCVar9 = __this;
  if (g_data_057adee3 == '\0') {
    pCVar9 = (Characters_PotatoSpecial_o *)&TypeInfo_HumanAnimations;
    il2cpp_runtime_helper_023445d0();
    g_data_057adee3 = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if ((pCVar3 != (Characters_Human_o *)0x0) &&
     (pCVar4 = (pCVar3->fields).Horse, pCVar4 != (Characters_Horse_o *)0x0)) {
    fVar1 = (pCVar4->fields)._disableKinematicTimeLeft;
    (__this->fields)._oldSpeed = fVar1;
    (__this->fields)._currentSpeed = fVar1 + 40.0;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = *(undefined8 *)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
    (pCVar3->fields)._oldHeadRotation.fields.x = (float)(int)uVar5;
    (pCVar3->fields)._oldHeadRotation.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
    il2cpp_runtime_helper_022b4080(&(pCVar3->fields)._oldHeadRotation);
    pCVar3 = (__this->fields)._human;
    pCVar9 = (Characters_PotatoSpecial_o *)0x0;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      Characters_Human__EmoteAnimation
                (pCVar3,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0),(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar3 = (pCVar9->fields)._human;
  if ((pCVar3 != (Characters_Human_o *)0x0) &&
     (pCVar4 = (pCVar3->fields).Horse, pCVar4 != (Characters_Horse_o *)0x0)) {
    (pCVar4->fields)._disableKinematicTimeLeft = (pCVar9->fields)._currentSpeed;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adee4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    g_data_057adee4 = '\x01';
  }
  pCVar3 = (pCVar9->fields)._human;
  if ((pCVar3 != (Characters_Human_o *)0x0) &&
     (pCVar4 = (pCVar3->fields).Horse, pCVar4 != (Characters_Horse_o *)0x0)) {
    (pCVar4->fields)._disableKinematicTimeLeft = (pCVar9->fields)._oldSpeed;
    pSVar6 = (pCVar3->fields).crossfadeCache;
    lVar10 = 0x58;
    if (pSVar6 != (System_Object_array *)0x0) {
      pIVar7 = (pSVar6->obj).klass;
      bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      if (bVar2 <= (pIVar7->_2).naturalAligment) {
        lVar10 = (ulong)((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ThunderspearWeapon) * 8 + 0x58;
      }
    }
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = *(undefined8 *)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar10);
    (pCVar3->fields)._oldHeadRotation.fields.x = (float)(int)uVar5;
    (pCVar3->fields)._oldHeadRotation.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
    il2cpp_runtime_helper_022b4080(&(pCVar3->fields)._oldHeadRotation);
    pCVar3 = (pCVar9->fields)._human;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      __this_00 = *(Characters_AnimationHandler_o **)&(pCVar3->fields)._cameraFPS;
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        bVar8 = Characters_AnimationHandler__IsPlaying
                          (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68),
                           (MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pCVar3 = (pCVar9->fields)._human;
        if (pCVar3 != (Characters_Human_o *)0x0) {
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pCVar3,
                     *(System_String_o **)&(pCVar3->fields)._oldHeadRotation.fields,0.1,0.0,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.PotatoSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_PotatoSpecial__ActiveFixedUpdate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x42f74f0

void Characters_PotatoSpecial__ActiveFixedUpdate(Characters_PotatoSpecial_o *__this,MethodInfo *method)

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
  
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 != (Characters_Human_o *)0x0) &&
     (pCVar3 = (pCVar2->fields).Horse, pCVar3 != (Characters_Horse_o *)0x0)) {
    (pCVar3->fields)._disableKinematicTimeLeft = (__this->fields)._currentSpeed;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adee4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    g_data_057adee4 = '\x01';
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
      il2cpp_runtime_helper_02337ed0();
    }
    uVar6 = *(undefined8 *)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar8);
    (pCVar2->fields)._oldHeadRotation.fields.x = (float)(int)uVar6;
    (pCVar2->fields)._oldHeadRotation.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
    il2cpp_runtime_helper_022b4080(&(pCVar2->fields)._oldHeadRotation);
    pCVar2 = (__this->fields)._human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      __this_00 = *(Characters_AnimationHandler_o **)&(pCVar2->fields)._cameraFPS;
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
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
                     *(System_String_o **)&(pCVar2->fields)._oldHeadRotation.fields,0.1,0.0,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.PotatoSpecial$$Deactivate
// il2cpp: void Characters_PotatoSpecial__Deactivate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x42f7520

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
  
  if (g_data_057adee4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    g_data_057adee4 = '\x01';
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
      il2cpp_runtime_helper_02337ed0();
    }
    uVar6 = *(undefined8 *)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar8);
    (pCVar2->fields)._oldHeadRotation.fields.x = (float)(int)uVar6;
    (pCVar2->fields)._oldHeadRotation.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
    il2cpp_runtime_helper_022b4080(&(pCVar2->fields)._oldHeadRotation);
    pCVar2 = (__this->fields)._human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      __this_00 = *(Characters_AnimationHandler_o **)&(pCVar2->fields)._cameraFPS;
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
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
                     *(System_String_o **)&(pCVar2->fields)._oldHeadRotation.fields,0.1,0.0,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


