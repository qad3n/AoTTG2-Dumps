// Type: Characters.SupplySpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/SupplySpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SupplySpecial.cs
// --------------------------------

// Characters.SupplySpecial$$get_ActiveTime
// il2cpp: float Characters_SupplySpecial__get_ActiveTime (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x5c0f6a0

float Characters_SupplySpecial__get_ActiveTime(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  return 0.5;
}


// Characters.SupplySpecial$$get_GroundedOnly
// il2cpp: bool Characters_SupplySpecial__get_GroundedOnly (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x5c0f6b0

bool Characters_SupplySpecial__get_GroundedOnly(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.SupplySpecial$$.ctor
// il2cpp: void Characters_SupplySpecial___ctor (Characters_SupplySpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0f6c0

void Characters_SupplySpecial___ctor
               (Characters_SupplySpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.SupplySpecial$$Activate
// il2cpp: void Characters_SupplySpecial__Activate (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x5c0f700

void Characters_SupplySpecial__Activate(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476cf = '\x01';
  }
  __this_00 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__EmoteAnimation
            (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->EmoteWave,(MethodInfo *)0x0);
  return;
}


// Characters.SupplySpecial$$CanUse
// il2cpp: bool Characters_SupplySpecial__CanUse (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x5c0f770

bool Characters_SupplySpecial__CanUse(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = false;
  bVar2 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = (*(__this->klass->vtable)._17_get_GroundedOnly.methodPtr)
                      (__this,(__this->klass->vtable)._17_get_GroundedOnly.method);
    pCVar1 = (__this->fields)._human;
    if (bVar2) {
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_05c0f7f1;
      if ((pCVar1->fields).Grounded == false) {
        return false;
      }
    }
    else if (pCVar1 == (Characters_Human_o *)0x0) goto label_05c0f7f1;
    bVar3 = false;
    bVar2 = Characters_Human__CanEmote(pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields)._human;
      if (pCVar1 == (Characters_Human_o *)0x0) {
label_05c0f7f1:
        ThrowNullReferenceException();
      }
      bVar3 = true;
      if ((pCVar1->fields).InMountedCombat == false) {
        bVar3 = (pCVar1->fields).Grounded != false;
      }
    }
  }
  return bVar3;
}


// Characters.SupplySpecial$$Deactivate
// il2cpp: void Characters_SupplySpecial__Deactivate (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x5c0f800

void Characters_SupplySpecial__Deactivate(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Characters_Human_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  System_String_o *name;
  UnityEngine_Vector3_StaticFields *pUVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar10;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar11;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UStack_68;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  UnityEngine_Quaternion_o UStack_28;
  
  if (Il2CppMethodInitialized_075476d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Spawnables_SpawnablePrefabs);
    Il2CppMethodInitialized_075476d0 = '\x01';
  }
  pCVar4 = (__this->fields)._human;
  if (((pCVar4 != (Characters_Human_o *)0x0) &&
      (pUVar5 = (pCVar4->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    UStack_28 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
    UVar12 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_28,(MethodInfo *)0x0);
    UVar13.fields.x = UVar12.fields.x * 57.29578;
    UVar13.fields.y = UVar12.fields.y * 57.29578;
    UVar13.fields.z = UVar12.fields.z * 57.29578;
    UVar12 = UnityEngine_Quaternion__Internal_MakePositive(UVar13,(MethodInfo *)0x0);
    auStack_38._8_4_ = extraout_XMM0_Dc;
    auStack_38._0_8_ = UVar12.fields._0_8_;
    auStack_38._12_4_ = extraout_XMM0_Dd;
    if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
    }
    pCVar4 = (__this->fields)._human;
    if (((pCVar4 != (Characters_Human_o *)0x0) &&
        (pUVar5 = (pCVar4->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      name = TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Supply;
      UVar12 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 != (Characters_Human_o *)0x0) &&
         (pUVar5 = (pCVar4->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) {
        fStack_50 = (float)extraout_XMM0_Dc_00;
        auStack_58 = (undefined1  [8])UVar12.fields._0_8_;
        fStack_4c = (float)extraout_XMM0_Dd_00;
        pUVar6 = (pUVar5->fields).Transform;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UVar13 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
          fVar8 = UVar13.fields.x;
          fVar9 = UVar13.fields.y;
          fVar10 = extraout_XMM0_Dc_01;
          fVar11 = extraout_XMM0_Dd_01;
          if (g_data_0753e72c == '\0') {
            fStack_40 = extraout_XMM0_Dc_01;
            auStack_48 = UVar13.fields._0_8_;
            fStack_3c = extraout_XMM0_Dd_01;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            g_data_0753e72c = '\x01';
            fVar8 = (float)auStack_48._0_4_;
            fVar9 = (float)auStack_48._4_4_;
            fVar10 = fStack_40;
            fVar11 = fStack_3c;
          }
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar2 = (pUVar7->upVector).fields.x;
          uVar3 = (pUVar7->upVector).fields.y;
          fVar1 = (pUVar7->upVector).fields.z;
          auStack_58._4_4_ = (float)uVar3 * 0.5 + (float)auStack_58._4_4_ + fVar9 + fVar9;
          auStack_58._0_4_ = (float)uVar2 * 0.5 + (float)auStack_58._0_4_ + fVar8 + fVar8;
          fStack_50 = fStack_50 + fVar10 + fVar10 + 0.0;
          fStack_4c = fStack_4c + fVar11 + fVar11 + 0.0;
          UStack_68.fields.x = 0.0;
          UStack_68.fields.y = (float)auStack_38._4_4_ * 0.017453292;
          UStack_68.fields.z = 1.5707964;
          rotation = UnityEngine_Quaternion__Internal_FromEulerRad(&UStack_68,(MethodInfo *)0x0);
          UVar12.fields.z = fVar1 * 0.5 + UVar12.fields.z + UVar13.fields.z + UVar13.fields.z;
          UVar12.fields.x = (float)auStack_58._0_4_;
          UVar12.fields.y = (float)auStack_58._4_4_;
          Spawnables_SpawnableSpawner__Spawn
                    (name,UVar12,rotation,1.0,(System_Object_array *)0x0,(MethodInfo *)0x0);
          (__this->fields).UsesLeft = -1;
          Characters_BaseUseable__SetCooldownLeft
                    ((Characters_BaseUseable_o *)__this,(__this->fields).Cooldown,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.SupplySpecial$$Reset
// il2cpp: void Characters_SupplySpecial__Reset (Characters_SupplySpecial_o* __this, const MethodInfo* method);
// 0x5c0fa30

void Characters_SupplySpecial__Reset(Characters_SupplySpecial_o *__this,MethodInfo *method)

{
  Characters_BaseUseable__Reset((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,0.0,(MethodInfo *)0x0);
  return;
}


