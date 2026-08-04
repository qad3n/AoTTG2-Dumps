// Type: Characters.BaseHoldAttackSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseHoldAttackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseHoldAttackSpecial.cs
// --------------------------------

// Characters.BaseHoldAttackSpecial$$get_ActiveTime
// il2cpp: float Characters_BaseHoldAttackSpecial__get_ActiveTime (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x42f2c10

float Characters_BaseHoldAttackSpecial__get_ActiveTime
                (Characters_BaseHoldAttackSpecial_o *__this,MethodInfo *method)

{
  return INFINITY;
}


// Characters.BaseHoldAttackSpecial$$.ctor
// il2cpp: void Characters_BaseHoldAttackSpecial___ctor (Characters_BaseHoldAttackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42f2c20

void Characters_BaseHoldAttackSpecial___ctor
               (Characters_BaseHoldAttackSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (g_data_057aded1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057aded1 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._keyIsReset = 1;
  Characters_HoldUseable___ctor((Characters_HoldUseable_o *)__this,owner,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_Human;
  if (owner != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
       ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      (__this->fields)._human = (Characters_Human_o *)owner;
      if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
         ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar2)) goto label_042f2caf;
    }
    il2cpp_runtime_helper_022b2fd0(owner);
  }
  (__this->fields)._human = (Characters_Human_o *)owner;
label_042f2caf:
  il2cpp_runtime_helper_022b4080(&(__this->fields)._human,owner);
  return;
}


// Characters.BaseHoldAttackSpecial$$SetInput
// il2cpp: void Characters_BaseHoldAttackSpecial__SetInput (Characters_BaseHoldAttackSpecial_o* __this, bool key, const MethodInfo* method);
// 0x42f2cd0

void Characters_BaseHoldAttackSpecial__SetInput
               (Characters_BaseHoldAttackSpecial_o *__this,bool_conflict key,MethodInfo *method)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (char)(__this->fields).IsActive;
  if ((byte)key == 0) {
    if (cVar1 != '\0') {
      *(undefined1 *)&(__this->fields).IsActive = 0;
      (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                (__this,(__this->klass->vtable)._10_Deactivate.method);
    }
  }
  else if (cVar1 == '\0') {
    cVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if ((cVar1 != '\0') && ((char)(__this->fields)._keyIsReset != '\0')) {
      *(undefined1 *)&(__this->fields).IsActive = 1;
      fVar2 = (float)(*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)
                               (__this,(__this->klass->vtable)._14_get_ActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar2;
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
    }
  }
  *(byte *)&(__this->fields)._keyIsReset = (byte)key ^ 1;
  return;
}


// Characters.BaseHoldAttackSpecial$$CanUse
// il2cpp: bool Characters_BaseHoldAttackSpecial__CanUse (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x42f2d80

bool_conflict
Characters_BaseHoldAttackSpecial__CanUse(Characters_BaseHoldAttackSpecial_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseHoldAttackSpecial$$Deactivate
// il2cpp: void Characters_BaseHoldAttackSpecial__Deactivate (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x42f2d90

void Characters_BaseHoldAttackSpecial__Deactivate
               (Characters_BaseHoldAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__Idle(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


