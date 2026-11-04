// Type: Characters.SwitchbackSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SwitchbackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SwitchbackSpecial.cs
// --------------------------------

// Characters.SwitchbackSpecial$$get_ActiveTime
// il2cpp: float Characters_SwitchbackSpecial__get_ActiveTime (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x18210fb70

float
Characters_SwitchbackSpecial__get_ActiveTime(Characters_SwitchbackSpecial_o* __this, MethodInfo* method)

{
  return 0.3;
}


// Characters.SwitchbackSpecial$$.ctor
// il2cpp: void Characters_SwitchbackSpecial___ctor (Characters_SwitchbackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182177dc0

void Characters_SwitchbackSpecial___ctor
               (Characters_SwitchbackSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 2.0;
  return;
}


// Characters.SwitchbackSpecial$$RegisterCollision
// il2cpp: bool Characters_SwitchbackSpecial__RegisterCollision (Characters_SwitchbackSpecial_o* __this, Characters_Human_o* human, UnityEngine_Collision_o* collision, float speed, const MethodInfo* method);
// 0x182177ad0

bool Characters_SwitchbackSpecial__RegisterCollision
               (Characters_SwitchbackSpecial_o *__this,Characters_Human_o *human,
               UnityEngine_Collision_o *collision,float speed,MethodInfo *method)

{
  undefined8 uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_ContactPoint_array *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184346d01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184346d01 = '\x01';
  }
  if ((__this->fields).IsActive == false) {
    return false;
  }
  if (((human != (Characters_Human_o *)0x0) &&
      (pUVar2 = (human->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (collision != (UnityEngine_Collision_o *)0x0)) {
    __this_00 = (pUVar2->fields).Rigidbody;
    pUVar4 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_ContactPoint_array *)0x0) {
      if ((int)pUVar4->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pUVar5 = UnityEngine_RaycastHit__get_normal
                         (local_38,(UnityEngine_RaycastHit_o *)pUVar4->m_Items,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar5->fields).x;
      uVar1._4_4_ = (pUVar5->fields).y;
      fVar8 = (pUVar5->fields).z;
      local_48._0_8_ = uVar1;
      local_48.z = fVar8;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar6 = (float)il2cpp_runtime_helper_180546a40(&local_48,0);
      if (fVar6 <= 1e-05) {
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar6 = (pUVar3->zeroVector).fields.x;
        fVar7 = (pUVar3->zeroVector).fields.y;
        fVar8 = (pUVar3->zeroVector).fields.z;
      }
      else {
        fVar7 = local_48.y / fVar6;
        fVar8 = fVar8 / fVar6;
        fVar6 = (float)uVar1 / fVar6;
      }
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        if (speed <= 20.0) {
          speed = 20.0;
        }
        local_48.z = fVar8 * speed;
        local_48.y = fVar7 * speed;
        local_48.x = fVar6 * speed;
        UnityEngine_Rigidbody__set_linearVelocity
                  (__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
        (__this->fields)._activeTimeLeft = 0.0;
        (__this->fields).IsActive = false;
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)human,
                   TypeInfo_Characters_HumanSounds->static_fields->Switchback,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                  (__this,(__this->klass->vtable)._10_Deactivate.method);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.SwitchbackSpecial$$SetInput
// il2cpp: void Characters_SwitchbackSpecial__SetInput (Characters_SwitchbackSpecial_o* __this, bool key, const MethodInfo* method);
// 0x182177cb0

void Characters_SwitchbackSpecial__SetInput
               (Characters_SwitchbackSpecial_o *__this,bool key,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  Characters_SwitchbackSpecial_c *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346d02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346d02 = '\x01';
  }
  if (key) {
    bVar3 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if ((bVar3) && ((__this->fields).IsActive == false)) {
      __this_00 = (Characters_Human_o *)(__this->fields)._owner;
      if (__this_00 == (Characters_Human_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_Human)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Characters_Human);
      }
      if ((__this_00->fields).MountState != 0) {
        Characters_Human__Unmount(__this_00,false,(MethodInfo *)0x0);
      }
      pCVar2 = __this->klass;
      (__this->fields).IsActive = true;
      fVar4 = (float)(*(pCVar2->vtable)._15_GetActiveTime.methodPtr)
                               (__this,(pCVar2->vtable)._15_GetActiveTime.method);
      pCVar2 = __this->klass;
      (__this->fields)._activeTimeLeft = fVar4;
      (*(pCVar2->vtable)._9_Activate.methodPtr)(__this,(pCVar2->vtable)._9_Activate.method);
      (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
    }
  }
  return;
}


// Characters.SwitchbackSpecial$$Activate
// il2cpp: void Characters_SwitchbackSpecial__Activate (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x1821779c0

void Characters_SwitchbackSpecial__Activate(Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346d03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346d03 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pCVar2 + 0x210)) + 4) = 0x3f000000;
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
  }
  ThrowNullReferenceException();
}


// Characters.SwitchbackSpecial$$Deactivate
// il2cpp: void Characters_SwitchbackSpecial__Deactivate (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x182177a50

void Characters_SwitchbackSpecial__Deactivate(Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346d04 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human
       )) {
      Characters_Human__DodgeWall(__this_00,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Characters_Human);
  }
  ThrowNullReferenceException();
}


