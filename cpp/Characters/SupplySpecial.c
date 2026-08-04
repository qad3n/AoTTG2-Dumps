// Type: Characters.SupplySpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SupplySpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SupplySpecial.cs
// --------------------------------

// Characters.SupplySpecial$$get_ActiveTime
// il2cpp: float Characters_SupplySpecial__get_ActiveTime (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x42f90f0

float Characters_SupplySpecial__get_ActiveTime(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  return 0.5;
}


// Characters.SupplySpecial$$get_GroundedOnly
// il2cpp: bool Characters_SupplySpecial__get_GroundedOnly (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x42f9100

bool_conflict
Characters_SupplySpecial__get_GroundedOnly(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.SupplySpecial$$.ctor
// il2cpp: void Characters_SupplySpecial___ctor (Characters_SupplySpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42f9110

void Characters_SupplySpecial___ctor
               (Characters_SupplySpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).UsesLeft = -1;
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.SupplySpecial$$Activate
// il2cpp: void Characters_SupplySpecial__Activate (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x42f9150

void Characters_SupplySpecial__Activate(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *name;
  bool_conflict bVar5;
  Characters_BaseEmoteSpecial_o *__this_00;
  Characters_BaseEmoteSpecial_o *pCVar6;
  Characters_BaseEmoteSpecial_o *__this_01;
  float fVar7;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o position;
  undefined8 uStack_68;
  float fStack_54;
  
  if (g_data_057adef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adef2 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  pCVar6 = TypeInfo_HumanAnimations;
  if (*(int *)((long)&TypeInfo_HumanAnimations[3].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar2 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (pCVar2,*(System_String_o **)(*(long *)&TypeInfo_HumanAnimations[2].fields._lastUseTime + 0x240),
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = pCVar6;
  bVar5 = Characters_BaseEmoteSpecial__CanUse(pCVar6,(MethodInfo *)0x0);
  if (((char)bVar5 != '\0') && ((pCVar6->fields)._human == (Characters_Human_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    pCVar6 = __this_00;
    if (g_data_057adef3 == '\0') {
      pCVar6 = (Characters_BaseEmoteSpecial_o *)&TypeInfo_SpawnablePrefabs;
      il2cpp_runtime_helper_023445d0();
      g_data_057adef3 = '\x01';
    }
    pCVar2 = (__this_00->fields)._human;
    if ((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
      pCVar6 = (Characters_BaseEmoteSpecial_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
        fVar7 = UVar8.fields.w;
        UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar8,(MethodInfo *)0x0);
        UVar10.fields.x = UVar9.fields.x * 57.29578;
        UVar10.fields.y = UVar9.fields.y * 57.29578;
        UVar10.fields.z = UVar9.fields.z * 57.29578;
        UVar9 = UnityEngine_Quaternion__Internal_MakePositive(UVar10,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_SpawnablePrefabs[3].monitor + 4) == 0) {
          il2cpp_runtime_helper_02337ed0(UVar9.fields.x,CONCAT44(fVar7,UVar9.fields.z));
        }
        pCVar2 = (__this_00->fields)._human;
        pCVar6 = TypeInfo_SpawnablePrefabs;
        if (((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0))
           && (__this_01 = *(Characters_BaseEmoteSpecial_o **)(lVar3 + 0x10),
              __this_01 != (Characters_BaseEmoteSpecial_o *)0x0)) {
          name = (System_String_o *)**(undefined8 **)&TypeInfo_SpawnablePrefabs[2].fields._lastUseTime;
          UVar10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0)
          ;
          pCVar2 = (__this_00->fields)._human;
          pCVar6 = __this_01;
          if ((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0))
          {
            pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
            pCVar6 = (Characters_BaseEmoteSpecial_o *)0x0;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              UVar11 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
              uStack_68._0_4_ = UVar10.fields.x;
              uStack_68._4_4_ = UVar10.fields.y;
              if (g_data_057a6844 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057a6844 = '\x01';
              }
              uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              fStack_54 = UVar9.fields.y;
              lVar3 = (ulong)(uint)(fStack_54 * 0.017453292) << 0x20;
              UVar9.fields.z = 1.5707964;
              UVar9.fields.x = (float)(int)lVar3;
              UVar9.fields.y = (float)(int)((ulong)lVar3 >> 0x20);
              UVar8 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar9,(MethodInfo *)0x0);
              position.fields.z = UVar10.fields.z + UVar11.fields.z + UVar11.fields.z + fVar7 * 0.5;
              position.fields.x = (float)uStack_68 + UVar11.fields.x + UVar11.fields.x + (float)uVar1 * 0.5;
              position.fields.y =
                   uStack_68._4_4_ + UVar11.fields.y + UVar11.fields.y + (float)((ulong)uVar1 >> 0x20) * 0.5;
              Spawnables_SpawnableSpawner__Spawn
                        (name,position,UVar8,1.0,(System_Object_array *)0x0,(MethodInfo *)0x0);
              (__this_00->fields).UsesLeft = -1;
              Characters_BaseUseable__SetCooldownLeft
                        ((Characters_BaseUseable_o *)__this_00,(__this_00->fields).Cooldown,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    Characters_BaseUseable__Reset((Characters_BaseUseable_o *)pCVar6,(MethodInfo *)0x0);
    Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)pCVar6,0.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.SupplySpecial$$CanUse
// il2cpp: bool Characters_SupplySpecial__CanUse (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x42f91c0

bool_conflict Characters_SupplySpecial__CanUse(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *name;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  Characters_SupplySpecial_o *__this_00;
  Characters_SupplySpecial_o *__this_01;
  Characters_SupplySpecial_o *__this_02;
  uint uVar6;
  float fVar7;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o position;
  undefined8 uStack_50;
  float fStack_3c;
  
  uVar6 = 0;
  __this_00 = __this;
  bVar5 = Characters_BaseEmoteSpecial__CanUse((Characters_BaseEmoteSpecial_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pCVar2 = (__this->fields)._human;
    if (pCVar2 == (Characters_Human_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_01 = __this_00;
      if (g_data_057adef3 == '\0') {
        __this_01 = (Characters_SupplySpecial_o *)&TypeInfo_SpawnablePrefabs;
        il2cpp_runtime_helper_023445d0();
        g_data_057adef3 = '\x01';
      }
      pCVar2 = (__this_00->fields)._human;
      if (((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
         (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), __this_01 = (Characters_SupplySpecial_o *)0x0,
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        UVar8 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
        fVar7 = UVar8.fields.w;
        UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar8,(MethodInfo *)0x0);
        UVar10.fields.x = UVar9.fields.x * 57.29578;
        UVar10.fields.y = UVar9.fields.y * 57.29578;
        UVar10.fields.z = UVar9.fields.z * 57.29578;
        UVar9 = UnityEngine_Quaternion__Internal_MakePositive(UVar10,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_SpawnablePrefabs[3].monitor + 4) == 0) {
          il2cpp_runtime_helper_02337ed0(UVar9.fields.x,CONCAT44(fVar7,UVar9.fields.z));
        }
        pCVar2 = (__this_00->fields)._human;
        __this_01 = TypeInfo_SpawnablePrefabs;
        if (((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0))
           && (__this_02 = *(Characters_SupplySpecial_o **)(lVar3 + 0x10),
              __this_02 != (Characters_SupplySpecial_o *)0x0)) {
          name = (System_String_o *)**(undefined8 **)&TypeInfo_SpawnablePrefabs[2].fields._lastUseTime;
          UVar10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0)
          ;
          pCVar2 = (__this_00->fields)._human;
          __this_01 = __this_02;
          if ((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0))
          {
            pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
            __this_01 = (Characters_SupplySpecial_o *)0x0;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              UVar11 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
              uStack_50._0_4_ = UVar10.fields.x;
              uStack_50._4_4_ = UVar10.fields.y;
              if (g_data_057a6844 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057a6844 = '\x01';
              }
              uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              fStack_3c = UVar9.fields.y;
              lVar3 = (ulong)(uint)(fStack_3c * 0.017453292) << 0x20;
              UVar9.fields.z = 1.5707964;
              UVar9.fields.x = (float)(int)lVar3;
              UVar9.fields.y = (float)(int)((ulong)lVar3 >> 0x20);
              UVar8 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar9,(MethodInfo *)0x0);
              position.fields.z = UVar10.fields.z + UVar11.fields.z + UVar11.fields.z + fVar7 * 0.5;
              position.fields.x = (float)uStack_50 + UVar11.fields.x + UVar11.fields.x + (float)uVar1 * 0.5;
              position.fields.y =
                   uStack_50._4_4_ + UVar11.fields.y + UVar11.fields.y + (float)((ulong)uVar1 >> 0x20) * 0.5;
              Spawnables_SpawnableSpawner__Spawn
                        (name,position,UVar8,1.0,(System_Object_array *)0x0,(MethodInfo *)0x0);
              (__this_00->fields).UsesLeft = -1;
              Characters_BaseUseable__SetCooldownLeft
                        ((Characters_BaseUseable_o *)__this_00,(__this_00->fields).Cooldown,(MethodInfo *)0x0)
              ;
              return extraout_EAX;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      Characters_BaseUseable__Reset((Characters_BaseUseable_o *)__this_01,(MethodInfo *)0x0);
      Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this_01,0.0,(MethodInfo *)0x0);
      return extraout_EAX_00;
    }
    uVar6 = 1;
    if (*(char *)((long)&(pCVar2->fields)._mountedVelocity.fields.x + 1) == '\0') {
      uVar6 = (uint)(*(char *)((long)&(pCVar2->fields).Animation + 4) != '\0');
    }
  }
  return uVar6;
}


// Characters.SupplySpecial$$Deactivate
// il2cpp: void Characters_SupplySpecial__Deactivate (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x42f9210

void Characters_SupplySpecial__Deactivate(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *name;
  Characters_SupplySpecial_o *__this_00;
  Characters_SupplySpecial_o *__this_01;
  float fVar5;
  UnityEngine_Quaternion_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o position;
  undefined8 uStack_38;
  float fStack_24;
  
  __this_00 = __this;
  if (g_data_057adef3 == '\0') {
    __this_00 = (Characters_SupplySpecial_o *)&TypeInfo_SpawnablePrefabs;
    il2cpp_runtime_helper_023445d0();
    g_data_057adef3 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), __this_00 = (Characters_SupplySpecial_o *)0x0,
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    UVar6 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
    fVar5 = UVar6.fields.w;
    UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar6,(MethodInfo *)0x0);
    UVar8.fields.x = UVar7.fields.x * 57.29578;
    UVar8.fields.y = UVar7.fields.y * 57.29578;
    UVar8.fields.z = UVar7.fields.z * 57.29578;
    UVar7 = UnityEngine_Quaternion__Internal_MakePositive(UVar8,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_SpawnablePrefabs[3].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0(UVar7.fields.x,CONCAT44(fVar5,UVar7.fields.z));
    }
    pCVar2 = (__this->fields)._human;
    __this_00 = TypeInfo_SpawnablePrefabs;
    if (((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
       (__this_01 = *(Characters_SupplySpecial_o **)(lVar3 + 0x10),
       __this_01 != (Characters_SupplySpecial_o *)0x0)) {
      name = (System_String_o *)**(undefined8 **)&TypeInfo_SpawnablePrefabs[2].fields._lastUseTime;
      UVar8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._human;
      __this_00 = __this_01;
      if ((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) {
        pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
        __this_00 = (Characters_SupplySpecial_o *)0x0;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar9 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
          uStack_38._0_4_ = UVar8.fields.x;
          uStack_38._4_4_ = UVar8.fields.y;
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057a6844 = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar5 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          fStack_24 = UVar7.fields.y;
          lVar3 = (ulong)(uint)(fStack_24 * 0.017453292) << 0x20;
          UVar7.fields.z = 1.5707964;
          UVar7.fields.x = (float)(int)lVar3;
          UVar7.fields.y = (float)(int)((ulong)lVar3 >> 0x20);
          UVar6 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar7,(MethodInfo *)0x0);
          position.fields.z = UVar8.fields.z + UVar9.fields.z + UVar9.fields.z + fVar5 * 0.5;
          position.fields.x = (float)uStack_38 + UVar9.fields.x + UVar9.fields.x + (float)uVar1 * 0.5;
          position.fields.y =
               uStack_38._4_4_ + UVar9.fields.y + UVar9.fields.y + (float)((ulong)uVar1 >> 0x20) * 0.5;
          Spawnables_SpawnableSpawner__Spawn
                    (name,position,UVar6,1.0,(System_Object_array *)0x0,(MethodInfo *)0x0);
          (__this->fields).UsesLeft = -1;
          Characters_BaseUseable__SetCooldownLeft
                    ((Characters_BaseUseable_o *)__this,(__this->fields).Cooldown,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseUseable__Reset((Characters_BaseUseable_o *)__this_00,(MethodInfo *)0x0);
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this_00,0.0,(MethodInfo *)0x0);
  return;
}


// Characters.SupplySpecial$$Reset
// il2cpp: void Characters_SupplySpecial__Reset (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x42f9420

void Characters_SupplySpecial__Reset(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_BaseUseable__Reset((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,0.0,(MethodInfo *)0x0);
  return;
}


