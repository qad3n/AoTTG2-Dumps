// Type: Characters.PotatoSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/PotatoSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/PotatoSpecial.cs
// --------------------------------

// Characters.PotatoSpecial$$get_ActiveTime
// il2cpp: float Characters_PotatoSpecial__get_ActiveTime (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x1820b9980

float
Characters_PotatoSpecial__get_ActiveTime(Characters_PotatoSpecial_o* __this, MethodInfo* method)

{
  return 10.0;
}


// Characters.PotatoSpecial$$get_GroundedOnly
// il2cpp: bool Characters_PotatoSpecial__get_GroundedOnly (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_PotatoSpecial__get_GroundedOnly(Characters_PotatoSpecial_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.PotatoSpecial$$.ctor
// il2cpp: void Characters_PotatoSpecial___ctor (Characters_PotatoSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182171940

void Characters_PotatoSpecial___ctor
               (Characters_PotatoSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 20.0;
  return;
}


// Characters.PotatoSpecial$$Activate
// il2cpp: void Characters_PotatoSpecial__Activate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x182171690

void Characters_PotatoSpecial__Activate(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_Human_o *pCVar2;
  Characters_HumanStats_o *pCVar3;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346cf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346cf0 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 != (Characters_Human_o *)0x0) &&
     (pCVar3 = (pCVar2->fields).Stats, pCVar3 != (Characters_HumanStats_o *)0x0)) {
    fVar1 = (pCVar3->fields).RunSpeed;
    pCVar2 = (__this->fields)._human;
    (__this->fields)._oldSpeed = (pCVar3->fields).RunSpeed;
    (__this->fields)._currentSpeed = fVar1 + 40.0;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar2 != (Characters_Human_o *)0x0) {
      value = TypeInfo_Characters_HumanAnimations->static_fields->RunBuffed;
      (pCVar2->fields).RunAnimation = value;
      Il2CppCodeGenWriteBarrier(&(pCVar2->fields).RunAnimation,value);
      pCVar2 = (__this->fields)._human;
      if (pCVar2 != (Characters_Human_o *)0x0) {
        Characters_Human__EmoteAnimation
                  (pCVar2,TypeInfo_Characters_HumanAnimations->static_fields->SpecialSasha,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.PotatoSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_PotatoSpecial__ActiveFixedUpdate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x182171770

void Characters_PotatoSpecial__ActiveFixedUpdate(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    (pCVar2->fields).RunSpeed = (__this->fields)._currentSpeed;
    return;
  }
  ThrowNullReferenceException();
}


// Characters.PotatoSpecial$$Deactivate
// il2cpp: void Characters_PotatoSpecial__Deactivate (Characters_PotatoSpecial_o* __this, const MethodInfo* method);
// 0x1821717a0

void Characters_PotatoSpecial__Deactivate(Characters_PotatoSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_HumanStats_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  Characters_BaseUseable_c *pCVar5;
  Characters_AnimationHandler_o *__this_00;
  bool bVar6;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    Il2CppMethodInitialized_184346cf1 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 == (Characters_Human_o *)0x0) ||
     (pCVar3 = (pCVar2->fields).Stats, pCVar3 == (Characters_HumanStats_o *)0x0)) goto label_18217192f;
  (pCVar3->fields).RunSpeed = (__this->fields)._oldSpeed;
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_18217192f;
  pCVar4 = (pCVar2->fields).Weapon;
  if (pCVar4 == (Characters_BaseUseable_o *)0x0) {
label_18217186c:
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    value = TypeInfo_Characters_HumanAnimations->static_fields->Run;
  }
  else {
    pCVar5 = pCVar4->klass;
    bVar1 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
    if (((pCVar5->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) goto label_18217186c;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    value = TypeInfo_Characters_HumanAnimations->static_fields->RunTS;
  }
  (pCVar2->fields).RunAnimation = value;
  Il2CppCodeGenWriteBarrier(&(pCVar2->fields).RunAnimation,value);
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar2->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      bVar6 = Characters_AnimationHandler__IsPlaying
                        (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->RunBuffed,
                         (MethodInfo *)0x0);
      if (bVar6) {
        pCVar2 = (__this->fields)._human;
        if (pCVar2 == (Characters_Human_o *)0x0) goto label_18217192f;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)(__this->fields)._human,(pCVar2->fields).RunAnimation,0.1,0.0
                   ,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_18217192f:
  ThrowNullReferenceException();
}


