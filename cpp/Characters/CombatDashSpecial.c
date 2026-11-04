// Type: Characters.CombatDashSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CombatDashSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CombatDashSpecial.cs
// --------------------------------

// Characters.CombatDashSpecial$$get_ActiveTime
// il2cpp: float Characters_CombatDashSpecial__get_ActiveTime (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x181d9f790

float
Characters_CombatDashSpecial__get_ActiveTime(Characters_CombatDashSpecial_o* __this, MethodInfo* method)

{
  return 2.0;
}


// Characters.CombatDashSpecial$$get_GroundedOnly
// il2cpp: bool Characters_CombatDashSpecial__get_GroundedOnly (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_CombatDashSpecial__get_GroundedOnly(Characters_CombatDashSpecial_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.CombatDashSpecial$$.ctor
// il2cpp: void Characters_CombatDashSpecial___ctor (Characters_CombatDashSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x18216a690

void Characters_CombatDashSpecial___ctor
               (Characters_CombatDashSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 200.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.CombatDashSpecial$$Activate
// il2cpp: void Characters_CombatDashSpecial__Activate (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x18216a4c0

void Characters_CombatDashSpecial__Activate(Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_Human_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_48 [5];
  
  if (Il2CppMethodInitialized_184346ce5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346ce5 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (pCVar5 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (pCVar5,TypeInfo_Characters_HumanAnimations->static_fields->Dash,(MethodInfo *)0x0);
    pCVar5 = (__this->fields)._human;
    if (pCVar5 != (Characters_Human_o *)0x0) {
      pUVar8 = (*(pCVar5->klass->vtable)._76_GetAimPoint.methodPtr)
                         ((UnityEngine_Vector3_o *)local_48,pCVar5,
                          (pCVar5->klass->vtable)._76_GetAimPoint.method);
      pCVar5 = (__this->fields)._human;
      if (((pCVar5 != (Characters_Human_o *)0x0) &&
          (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
         (__this_00 = (pUVar6->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
        uVar1 = (pUVar8->fields).x;
        uVar3 = (pUVar8->fields).y;
        fVar11 = (pUVar8->fields).z;
        pUVar8 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)local_48,__this_00,(MethodInfo *)0x0);
        uVar2 = (pUVar8->fields).x;
        uVar4 = (pUVar8->fields).y;
        fVar11 = fVar11 - (pUVar8->fields).z;
        local_48[0].y = (float)uVar3 - (float)uVar4;
        local_48[0].x = (float)uVar1 - (float)uVar2;
        local_48[0].z = fVar11;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar9 = (float)il2cpp_runtime_helper_180546a40(local_48,0);
        if (fVar9 <= 1e-05) {
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar10 = (pUVar7->zeroVector).fields.x;
          fVar12 = (pUVar7->zeroVector).fields.y;
          fVar11 = (pUVar7->zeroVector).fields.z;
        }
        else {
          fVar10 = ((float)uVar1 - (float)uVar2) / fVar9;
          fVar12 = ((float)uVar3 - (float)uVar4) / fVar9;
          fVar11 = fVar11 / fVar9;
        }
        pCVar5 = (__this->fields)._human;
        if (((pCVar5 != (Characters_Human_o *)0x0) &&
            (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
           (__this_01 = (pUVar6->fields).Rigidbody, __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
          local_48[0].z = fVar11 * 100.0;
          local_48[0].y = fVar12 * 100.0;
          local_48[0].x = fVar10 * 100.0;
          UnityEngine_Rigidbody__set_linearVelocity
                    (__this_01,(UnityEngine_Vector3_o *)local_48,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.CombatDashSpecial$$Deactivate
// il2cpp: void Characters_CombatDashSpecial__Deactivate (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_CombatDashSpecial__Deactivate(Characters_CombatDashSpecial_o* __this, MethodInfo* method)

{
  return;
}


