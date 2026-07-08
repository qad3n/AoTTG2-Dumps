// Type: Characters.SupplySpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/SupplySpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/SupplySpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.SupplySpecial$$get_ActiveTime
// il2cpp: float Characters_SupplySpecial__get_ActiveTime (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x3fec830

float Characters_SupplySpecial__get_ActiveTime
                (Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  return 0.5;
}


// Characters.SupplySpecial$$get_GroundedOnly
// il2cpp: bool Characters_SupplySpecial__get_GroundedOnly (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x3fec840

bool_conflict
Characters_SupplySpecial__get_GroundedOnly(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.SupplySpecial$$.ctor
// il2cpp: void Characters_SupplySpecial___ctor (Characters_SupplySpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fec850

void Characters_SupplySpecial___ctor
               (Characters_SupplySpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  Characters_BaseEmoteSpecial___ctor
            ((Characters_BaseEmoteSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).UsesLeft = -1;
  Characters_BaseUseable__SetCooldownLeft
            ((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.SupplySpecial$$Activate
// il2cpp: void Characters_SupplySpecial__Activate (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x3fec890

void Characters_SupplySpecial__Activate(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (DAT_05704184 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05704184 = '\x01';
  }
  __this_00 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.SupplySpecial$$CanUse
// il2cpp: bool Characters_SupplySpecial__CanUse (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x3fec900

bool_conflict
Characters_SupplySpecial__CanUse(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar2 = Characters_BaseEmoteSpecial__CanUse
                    ((Characters_BaseEmoteSpecial_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = 1;
    if (*(char *)((long)&(pCVar1->fields)._mountedVelocity.fields.x + 1) == '\0') {
      uVar3 = (uint)(*(char *)((long)&(pCVar1->fields).Animation + 4) != '\0');
    }
  }
  return uVar3;
}


// Characters.SupplySpecial$$Deactivate
// il2cpp: void Characters_SupplySpecial__Deactivate (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x3fec950

void Characters_SupplySpecial__Deactivate(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *name;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o UVar9;
  undefined8 local_38;
  float fStack_24;
  
  if (DAT_05704185 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpawnablePrefabs);
    DAT_05704185 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (((pCVar2 != (Characters_Human_o *)0x0) &&
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar4 != (UnityEngine_Transform_o *)0x0
     )) {
    UVar9 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
    fVar5 = UVar9.fields.w;
    UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar9,(MethodInfo *)0x0);
    UVar7.fields.x = UVar6.fields.x * 57.29578;
    UVar7.fields.y = UVar6.fields.y * 57.29578;
    UVar7.fields.z = UVar6.fields.z * 57.29578;
    UVar6 = UnityEngine_Quaternion__Internal_MakePositive(UVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_SpawnablePrefabs + 0xe4) == 0) {
      il2cpp_init_class(UVar6.fields.x,CONCAT44(fVar5,UVar6.fields.z));
    }
    pCVar2 = (__this->fields)._human;
    if (((pCVar2 != (Characters_Human_o *)0x0) &&
        (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
       (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      name = (System_String_o *)**(undefined8 **)(TypeInfo_SpawnablePrefabs + 0xb8);
      UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._human;
      if ((pCVar2 != (Characters_Human_o *)0x0) &&
         (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) {
        pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
          local_38._0_4_ = UVar7.fields.x;
          local_38._4_4_ = UVar7.fields.y;
          if (DAT_056fde1f == '\0') {
            il2cpp_init_method_metadata();
            DAT_056fde1f = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar5 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          fStack_24 = UVar6.fields.y;
          lVar3 = (ulong)(uint)(fStack_24 * 0.017453292) << 0x20;
          UVar6.fields.z = 1.5707964;
          UVar6.fields.x = (float)(int)lVar3;
          UVar6.fields.y = (float)(int)((ulong)lVar3 >> 0x20);
          UVar9 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar6,(MethodInfo *)0x0);
          position.fields.z = UVar7.fields.z + UVar8.fields.z + UVar8.fields.z + fVar5 * 0.5;
          position.fields.x = (float)local_38 + UVar8.fields.x + UVar8.fields.x + (float)uVar1 * 0.5
          ;
          position.fields.y =
               local_38._4_4_ + UVar8.fields.y + UVar8.fields.y +
               (float)((ulong)uVar1 >> 0x20) * 0.5;
          Spawnables_SpawnableSpawner__Spawn
                    (name,position,UVar9,1.0,(System_Object_array *)0x0,(MethodInfo *)0x0);
          (__this->fields).UsesLeft = -1;
          Characters_BaseUseable__SetCooldownLeft
                    ((Characters_BaseUseable_o *)__this,(__this->fields).Cooldown,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.SupplySpecial$$Reset
// il2cpp: void Characters_SupplySpecial__Reset (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x3fecb60

void Characters_SupplySpecial__Reset(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_BaseUseable__Reset((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,0.0,(MethodInfo *)0x0);
  return;
}


