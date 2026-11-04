// Type: Characters.SupplySpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SupplySpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SupplySpecial.cs
// --------------------------------

// Characters.SupplySpecial$$get_ActiveTime
// il2cpp: float Characters_SupplySpecial__get_ActiveTime (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x1821779b0

float
Characters_SupplySpecial__get_ActiveTime(Characters_SupplySpecial_o* __this, MethodInfo* method)

{
  return 0.5;
}


// Characters.SupplySpecial$$get_GroundedOnly
// il2cpp: bool Characters_SupplySpecial__get_GroundedOnly (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_SupplySpecial__get_GroundedOnly(Characters_SupplySpecial_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.SupplySpecial$$.ctor
// il2cpp: void Characters_SupplySpecial___ctor (Characters_SupplySpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182177970

void Characters_SupplySpecial___ctor
               (Characters_SupplySpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.SupplySpecial$$Activate
// il2cpp: void Characters_SupplySpecial__Activate (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x182177580

void Characters_SupplySpecial__Activate(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_184346cff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346cff = '\x01';
  }
  __this_00 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->EmoteWave,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.SupplySpecial$$CanUse
// il2cpp: bool Characters_SupplySpecial__CanUse (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x182177600

bool Characters_SupplySpecial__CanUse(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  bVar2 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  bVar2 = (*(__this->klass->vtable)._17_get_GroundedOnly.methodPtr)
                    (__this,(__this->klass->vtable)._17_get_GroundedOnly.method);
  if (bVar2) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_182177680;
    if ((pCVar1->fields).Grounded == false) {
      return false;
    }
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_Human__CanEmote(pCVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).InMountedCombat == false) {
        return (pCVar1->fields).Grounded;
      }
      return true;
    }
  }
label_182177680:
  ThrowNullReferenceException();
}


// Characters.SupplySpecial$$Deactivate
// il2cpp: void Characters_SupplySpecial__Deactivate (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x182177690

void Characters_SupplySpecial__Deactivate(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Characters_Human_o *pCVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  System_String_o *name;
  UnityEngine_Vector3_StaticFields *pUVar15;
  UnityEngine_Quaternion_o *pUVar16;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68 [6];
  
  if (Il2CppMethodInitialized_184346d00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Spawnables_SpawnablePrefabs);
    Il2CppMethodInitialized_184346d00 = '\x01';
  }
  pCVar12 = (__this->fields)._human;
  local_68[0].x = 0.0;
  local_68[0].y = 0.0;
  local_68[0].z = 0.0;
  local_68[0].w = 0.0;
  if (((pCVar12 != (Characters_Human_o *)0x0) &&
      (pUVar13 = (pCVar12->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar14 = (pUVar13->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
    pUVar16 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_78,pUVar14,(MethodInfo *)0x0);
    local_68[0].x = (pUVar16->fields).x;
    local_68[0].y = (pUVar16->fields).y;
    local_68[0].z = (pUVar16->fields).z;
    local_68[0].w = (pUVar16->fields).w;
    pUVar17 = UnityEngine_Quaternion__Internal_ToEulerRad
                        ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Quaternion_o *)local_68,
                         (MethodInfo *)0x0);
    uVar4 = (pUVar17->fields).x;
    uVar8 = (pUVar17->fields).y;
    local_88.y = (float)uVar8 * 57.29578;
    local_88.x = (float)uVar4 * 57.29578;
    local_88.z = (pUVar17->fields).z * 57.29578;
    pUVar17 = UnityEngine_Quaternion__Internal_MakePositive
                        ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,
                         (MethodInfo *)0x0);
    fVar1 = (pUVar17->fields).y;
    if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
    }
    pCVar12 = (__this->fields)._human;
    if (((pCVar12 != (Characters_Human_o *)0x0) &&
        (pUVar13 = (pCVar12->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar14 = (pUVar13->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
      name = TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Supply;
      pUVar17 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_78,pUVar14,(MethodInfo *)0x0);
      pCVar12 = (__this->fields)._human;
      if (((pCVar12 != (Characters_Human_o *)0x0) &&
          (pUVar13 = (pCVar12->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar14 = (pUVar13->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
        fVar2 = (pUVar17->fields).z;
        uVar5 = (pUVar17->fields).x;
        uVar9 = (pUVar17->fields).y;
        pUVar17 = UnityEngine_Transform__get_forward
                            ((UnityEngine_Vector3_o *)&local_78,pUVar14,(MethodInfo *)0x0);
        uVar6 = (pUVar17->fields).x;
        uVar10 = (pUVar17->fields).y;
        fVar3 = (pUVar17->fields).z;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        local_88.z = 1.5707964;
        pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_88._0_8_ = (ulonglong)(uint)(fVar1 * 0.017453292) << 0x20;
        fVar1 = (pUVar15->upVector).fields.z;
        uVar7 = (pUVar15->upVector).fields.x;
        uVar11 = (pUVar15->upVector).fields.y;
        pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Quaternion_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,
                             (MethodInfo *)0x0);
        local_78.x = (pUVar16->fields).x;
        local_78.y = (pUVar16->fields).y;
        local_78.z = (pUVar16->fields).z;
        local_78.w = (pUVar16->fields).w;
        local_88.y = (float)uVar11 * 0.5 + (float)uVar10 + (float)uVar10 + (float)uVar9;
        local_88.x = (float)uVar7 * 0.5 + (float)uVar6 + (float)uVar6 + (float)uVar5;
        local_88.z = fVar1 * 0.5 + fVar3 + fVar3 + fVar2;
        Spawnables_SpawnableSpawner__Spawn
                  (name,(UnityEngine_Vector3_o *)&local_88,(UnityEngine_Quaternion_o *)&local_78,1.0,
                   (System_Object_array *)0x0,(MethodInfo *)0x0);
        (__this->fields).UsesLeft = -1;
        Characters_BaseUseable__SetCooldownLeft
                  ((Characters_BaseUseable_o *)__this,(__this->fields).Cooldown,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.SupplySpecial$$Reset
// il2cpp: void Characters_SupplySpecial__Reset (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x182177940

void Characters_SupplySpecial__Reset(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_BaseUseable__Reset((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,0.0,(MethodInfo *)0x0);
  return;
}


