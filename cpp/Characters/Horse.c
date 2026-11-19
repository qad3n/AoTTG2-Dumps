// Type: Characters.Horse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/Horse.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Horse.cs
// --------------------------------

// Characters.Horse.<WaitAndDie>d__68$$.ctor
// il2cpp: void Characters_Horse__WaitAndDie_d__68___ctor (Characters_Horse__WaitAndDie_d__68_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bf0c70

void Characters_Horse__WaitAndDie_d__68___ctor
               (Characters_Horse__WaitAndDie_d__68_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.Horse.<WaitAndDie>d__68$$System.IDisposable.Dispose
// il2cpp: void Characters_Horse__WaitAndDie_d__68__System_IDisposable_Dispose (Characters_Horse__WaitAndDie_d__68_o* __this, const MethodInfo* method);
// 0x5bf3020

void Characters_Horse__WaitAndDie_d__68__System_IDisposable_Dispose
               (Characters_Horse__WaitAndDie_d__68_o *__this,MethodInfo *method)

{
  return;
}


// Characters.Horse.<WaitAndDie>d__68$$MoveNext
// il2cpp: bool Characters_Horse__WaitAndDie_d__68__MoveNext (Characters_Horse__WaitAndDie_d__68_o* __this, const MethodInfo* method);
// 0x5bf3030

bool Characters_Horse__WaitAndDie_d__68__MoveNext
               (Characters_Horse__WaitAndDie_d__68_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Horse_o *__this_00;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *name;
  bool bVar4;
  Il2CppObject *pIVar5;
  int32_t iVar6;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_07547622 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_07547622 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar4 = false;
  if (iVar1 == 1) {
    iVar6 = -1;
label_05bf31a6:
    (__this->fields).__1__state = iVar6;
    return bVar4;
  }
  if (iVar1 != 0) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (Characters_Horse_o *)0x0) {
    bVar4 = (*(((Characters_BaseCharacter_c *)__this_00->klass)->vtable)._74_IsMine.methodPtr)
                      (__this_00,(((Characters_BaseCharacter_c *)__this_00->klass)->vtable)._74_IsMine.method)
    ;
    if (!bVar4) {
      return false;
    }
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pUVar2 = (__this_00->fields).Cache;
    if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      name = TypeInfo_Effects_EffectPrefabs->static_fields->Blood2;
      position = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      pUVar2 = (__this_00->fields).Cache;
      if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        rotation = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        iVar6 = 1;
        Effects_EffectSpawner__Spawn
                  (name,position,rotation,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
        pIVar5 = (Il2CppObject *)
                 Characters_BaseCharacter__WaitAndDie
                           ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        bVar4 = true;
        goto label_05bf31a6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse.<WaitAndDie>d__68$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_Horse__WaitAndDie_d__68__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_Horse__WaitAndDie_d__68_o* __this, const MethodInfo* method);
// 0x5bf31c0

Il2CppObject *
Characters_Horse__WaitAndDie_d__68__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_Horse__WaitAndDie_d__68_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.Horse.<WaitAndDie>d__68$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_Horse__WaitAndDie_d__68__System_Collections_IEnumerator_Reset (Characters_Horse__WaitAndDie_d__68_o* __this, const MethodInfo* method);
// 0x5bf31d0

void Characters_Horse__WaitAndDie_d__68__System_Collections_IEnumerator_Reset
               (Characters_Horse__WaitAndDie_d__68_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_Horse_WaitAndDie_d__68_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.Horse.<WaitAndDie>d__68$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_Horse__WaitAndDie_d__68__System_Collections_IEnumerator_get_Current (Characters_Horse__WaitAndDie_d__68_o* __this, const MethodInfo* method);
// 0x5bf3210

Il2CppObject *
Characters_Horse__WaitAndDie_d__68__System_Collections_IEnumerator_get_Current
          (Characters_Horse__WaitAndDie_d__68_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.Horse$$get_Controller
// il2cpp: Controllers_HorseController_o* Characters_Horse__get_Controller (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5befc00

Controllers_HorseController_o *
Characters_Horse__get_Controller(Characters_Horse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Controller_k__BackingField;
}


// Characters.Horse$$get_AssignedHuman
// il2cpp: Characters_Human_o* Characters_Horse__get_AssignedHuman (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5befc10

Characters_Human_o * Characters_Horse__get_AssignedHuman(Characters_Horse_o *__this,MethodInfo *method)

{
  return (__this->fields)._assignedHuman;
}


// Characters.Horse$$get_Rider
// il2cpp: Characters_Human_o* Characters_Horse__get_Rider (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5befc20

Characters_Human_o * Characters_Horse__get_Rider(Characters_Horse_o *__this,MethodInfo *method)

{
  Characters_Horse_o *x;
  Characters_Human_o *pCVar1;
  bool bVar2;
  Characters_Human_o *pCVar3;
  
  if (Il2CppMethodInitialized_07547610 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547610 = '\x01';
  }
  pCVar3 = (__this->fields)._assignedHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pCVar3 = (Characters_Human_o *)0x0;
  if (bVar2) {
    pCVar3 = (__this->fields)._assignedHuman;
    if (pCVar3 == (Characters_Human_o *)0x0) {
label_05befce7:
      ThrowNullReferenceException();
    }
    if ((pCVar3->fields).Dead == false) {
      x = (pCVar3->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      pCVar3 = (Characters_Human_o *)0x0;
      if (bVar2) {
        pCVar1 = (__this->fields)._assignedHuman;
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_05befce7;
        pCVar3 = (Characters_Human_o *)0x0;
        if ((pCVar1->fields).MountState == 1) {
          pCVar3 = pCVar1;
        }
      }
    }
    else {
      pCVar3 = (Characters_Human_o *)0x0;
    }
  }
  return pCVar3;
}


// Characters.Horse$$get_OrderTarget
// il2cpp: Characters_BaseCharacter_o* Characters_Horse__get_OrderTarget (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5befcf0

Characters_BaseCharacter_o * Characters_Horse__get_OrderTarget(Characters_Horse_o *__this,MethodInfo *method)

{
  Controllers_HorseController_o *pCVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  pCVar1 = (__this->fields)._Controller_k__BackingField;
  if (pCVar1 == (Controllers_HorseController_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = Characters_Horse__ResolveCharacter((pCVar1->fields)._TargetViewId_k__BackingField,method);
  return pCVar2;
}


// Characters.Horse$$get_DespawnWithAssignedHuman
// il2cpp: bool Characters_Horse__get_DespawnWithAssignedHuman (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5befdb0

bool Characters_Horse__get_DespawnWithAssignedHuman(Characters_Horse_o *__this,MethodInfo *method)

{
  return (__this->fields)._DespawnWithAssignedHuman_k__BackingField;
}


// Characters.Horse$$set_DespawnWithAssignedHuman
// il2cpp: void Characters_Horse__set_DespawnWithAssignedHuman (Characters_Horse_o* __this, bool value, const MethodInfo* method);
// 0x5befdc0

void Characters_Horse__set_DespawnWithAssignedHuman(Characters_Horse_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._DespawnWithAssignedHuman_k__BackingField = value;
  return;
}


// Characters.Horse$$get_RecallEnabled
// il2cpp: bool Characters_Horse__get_RecallEnabled (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5befdd0

bool Characters_Horse__get_RecallEnabled(Characters_Horse_o *__this,MethodInfo *method)

{
  return (__this->fields)._RecallEnabled_k__BackingField;
}


// Characters.Horse$$set_RecallEnabled
// il2cpp: void Characters_Horse__set_RecallEnabled (Characters_Horse_o* __this, bool value, const MethodInfo* method);
// 0x5befde0

void Characters_Horse__set_RecallEnabled(Characters_Horse_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._RecallEnabled_k__BackingField = value;
  return;
}


// Characters.Horse$$get_RunSpeed
// il2cpp: float Characters_Horse__get_RunSpeed (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5befdf0

float Characters_Horse__get_RunSpeed(Characters_Horse_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547611 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547611 = '\x01';
  }
  if ((__this->fields)._runSpeed.fields.hasValue != false) {
    return (__this->fields)._runSpeed.fields.value;
  }
  pCVar1 = (__this->fields)._assignedHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pCVar1 = (__this->fields)._assignedHuman;
    if ((pCVar1 == (Characters_Human_o *)0x0) ||
       (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) {
      ThrowNullReferenceException();
    }
    return (pCVar2->fields).HorseSpeed;
  }
  return 50.0;
}


// Characters.Horse$$set_RunSpeed
// il2cpp: void Characters_Horse__set_RunSpeed (Characters_Horse_o* __this, float value, const MethodInfo* method);
// 0x5befeb0

void Characters_Horse__set_RunSpeed(Characters_Horse_o *__this,float value,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_float__Fields local_10;
  
  if (Il2CppMethodInitialized_07547612 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_07547612 = '\x01';
  }
  bVar1 = Controllers_HorseController__IsFinite(value,(MethodInfo *)0x0);
  if ((0.0 < value) && (bVar1)) {
    local_10.hasValue = false;
    local_10._1_3_ = 0;
    local_10.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_10,value,
               (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields)._runSpeed.fields = local_10;
  }
  return;
}


// Characters.Horse$$get_MaxFootstepDistance
// il2cpp: float Characters_Horse__get_MaxFootstepDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5beff30

float Characters_Horse__get_MaxFootstepDistance(Characters_Horse_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.Horse$$get_MaxSoundDistance
// il2cpp: float Characters_Horse__get_MaxSoundDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5beff40

float Characters_Horse__get_MaxSoundDistance(Characters_Horse_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.Horse$$get_LODQualityMediumDistance
// il2cpp: float Characters_Horse__get_LODQualityMediumDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5beff50

float Characters_Horse__get_LODQualityMediumDistance(Characters_Horse_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.Horse$$get_LODQualityLowDistance
// il2cpp: float Characters_Horse__get_LODQualityLowDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5beff60

float Characters_Horse__get_LODQualityLowDistance(Characters_Horse_o *__this,MethodInfo *method)

{
  return 200.0;
}


// Characters.Horse$$get_CullShadowsDistance
// il2cpp: float Characters_Horse__get_CullShadowsDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5beff70

float Characters_Horse__get_CullShadowsDistance(Characters_Horse_o *__this,MethodInfo *method)

{
  return 400.0;
}


// Characters.Horse$$get_CullRendererDistance
// il2cpp: float Characters_Horse__get_CullRendererDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5beff80

float Characters_Horse__get_CullRendererDistance(Characters_Horse_o *__this,MethodInfo *method)

{
  return 600.0;
}


// Characters.Horse$$get_CullEffectsDistance
// il2cpp: float Characters_Horse__get_CullEffectsDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5beff90

float Characters_Horse__get_CullEffectsDistance(Characters_Horse_o *__this,MethodInfo *method)

{
  return 600.0;
}


// Characters.Horse$$get_FollowingEnabled
// il2cpp: bool Characters_Horse__get_FollowingEnabled (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5beffa0

bool Characters_Horse__get_FollowingEnabled(Characters_Horse_o *__this,MethodInfo *method)

{
  Controllers_HorseController_o *pCVar1;
  
  pCVar1 = (__this->fields)._Controller_k__BackingField;
  if (pCVar1 == (Controllers_HorseController_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._Order_k__BackingField == 1;
}


// Characters.Horse$$set_FollowingEnabled
// il2cpp: void Characters_Horse__set_FollowingEnabled (Characters_Horse_o* __this, bool value, const MethodInfo* method);
// 0x5beffc0

void Characters_Horse__set_FollowingEnabled(Characters_Horse_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *target;
  MethodInfo *in_RCX;
  undefined7 in_register_00000031;
  
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    Characters_Horse__IssueOrder
              (__this,0,(Characters_BaseCharacter_o *)0x0,
               (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,5.0,
               in_RCX);
    return;
  }
  target = (__this->fields)._assignedHuman;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  Characters_Horse__IssueOrder
            (__this,1,(Characters_BaseCharacter_o *)target,
             (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,5.0,
             in_RCX);
  return;
}


// Characters.Horse$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_Horse__get_Gravity (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0140

UnityEngine_Vector3_o Characters_Horse__get_Gravity(Characters_Horse_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->downVector).fields.x;
  uVar2 = (pUVar3->downVector).fields.y;
  UVar4.fields.x = (float)uVar1 * 30.0;
  UVar4.fields.y = (float)uVar2 * 30.0;
  UVar4.fields.z = (pUVar3->downVector).fields.z * 30.0;
  return (UnityEngine_Vector3_o)UVar4.fields;
}


// Characters.Horse$$get_DefaultMaxHealth
// il2cpp: int32_t Characters_Horse__get_DefaultMaxHealth (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0190

int32_t Characters_Horse__get_DefaultMaxHealth(Characters_Horse_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547613 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547613 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).HorseHealth, pSVar3 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar3->fields)._value;
}


// Characters.Horse$$get_SaddlePosition
// il2cpp: UnityEngine_Vector3_o Characters_Horse__get_SaddlePosition (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0200

UnityEngine_Vector3_o Characters_Horse__get_SaddlePosition(Characters_Horse_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o UVar5;
  float local_18;
  float fStack_14;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      pUVar2 = (pUVar1->fields).Transform;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UVar4 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
        local_18 = UVar3.fields.x;
        fStack_14 = UVar3.fields.y;
        UVar5.fields.x = UVar4.fields.x * 1.95 + local_18;
        UVar5.fields.y = UVar4.fields.y * 1.95 + fStack_14;
        UVar5.fields.z = UVar4.fields.z * 1.95 + UVar3.fields.z;
        return (UnityEngine_Vector3_o)UVar5.fields;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$Init
// il2cpp: void Characters_Horse__Init (Characters_Horse_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5bf0270

void Characters_Horse__Init(Characters_Horse_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547614 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    il2cpp_codegen_initialize_runtime_metadata(&"'s horse");
    Il2CppMethodInitialized_07547614 = '\x01';
  }
  if (human != (Characters_Human_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace((human->fields).VisibleName,(MethodInfo *)0x0);
    if (bVar1) {
      value = "Horse";
    }
    else {
      value = System_String__Concat_52f0320
                        ((human->fields).RichTextName,"'s horse",(MethodInfo *)0x0);
    }
    if (__this != (Characters_Horse_o *)0x0) {
      Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,value,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      Characters_BaseCharacter__Init
                ((Characters_BaseCharacter_o *)__this,true,(human->fields).Team,(MethodInfo *)0x0);
      (__this->fields)._assignedHuman = human;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._assignedHuman);
      (__this->fields)._DespawnWithAssignedHuman_k__BackingField = true;
      (__this->fields)._RecallEnabled_k__BackingField = true;
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      Characters_Horse__IssueOrder
                (__this,1,(Characters_BaseCharacter_o *)human,
                 (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,5.0,
                 method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$Init
// il2cpp: void Characters_Horse__Init (Characters_Horse_o* __this, bool ai, System_String_o* team, const MethodInfo* method);
// 0x5bf0380

void Characters_Horse__Init_5af0380
               (Characters_Horse_o *__this,bool ai,System_String_o *team,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  Characters_BaseCharacter__Init((Characters_BaseCharacter_o *)__this,true,team,(MethodInfo *)0x0);
  (__this->fields)._DespawnWithAssignedHuman_k__BackingField = false;
  (__this->fields)._RecallEnabled_k__BackingField = false;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  Characters_Horse__IssueOrder
            (__this,0,(Characters_BaseCharacter_o *)0x0,
             (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,5.0,
             method_00);
  return;
}


// Characters.Horse$$ResolveCharacter
// il2cpp: Characters_BaseCharacter_o* Characters_Horse__ResolveCharacter (int32_t viewId, const MethodInfo* method);
// 0x5befd10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5befda4: jmp 0x5befd5e

Characters_BaseCharacter_o * Characters_Horse__ResolveCharacter(int32_t viewId,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *pCVar3;
  
  if (Il2CppMethodInitialized_07547615 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547615 = '\x01';
  }
  if (viewId < 1) {
    x = (Photon_Pun_PhotonView_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    x = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    pCVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)x,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    return pCVar3;
  }
  return (Characters_BaseCharacter_o *)0x0;
}


// Characters.Horse$$Follow
// il2cpp: bool Characters_Horse__Follow (Characters_Horse_o* __this, Characters_BaseCharacter_o* target, float distance, const MethodInfo* method);
// 0x5bf0080

bool Characters_Horse__Follow
               (Characters_Horse_o *__this,Characters_BaseCharacter_o *target,float distance,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  bVar1 = Characters_Horse__IssueOrder
                    (__this,1,target,
                     (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                     distance,in_RCX);
  return bVar1;
}


// Characters.Horse$$ComeTo
// il2cpp: bool Characters_Horse__ComeTo (Characters_Horse_o* __this, Characters_BaseCharacter_o* target, float distance, const MethodInfo* method);
// 0x5bf05d0

bool Characters_Horse__ComeTo
               (Characters_Horse_o *__this,Characters_BaseCharacter_o *target,float distance,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  bVar1 = Characters_Horse__IssueOrder
                    (__this,2,target,
                     (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                     distance,in_RCX);
  return bVar1;
}


// Characters.Horse$$MoveTo
// il2cpp: bool Characters_Horse__MoveTo (Characters_Horse_o* __this, UnityEngine_Vector3_o position, float distance, const MethodInfo* method);
// 0x5bf0640

bool Characters_Horse__MoveTo
               (Characters_Horse_o *__this,UnityEngine_Vector3_o position,float distance,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  
  bVar1 = Characters_Horse__IssueOrder(__this,3,(Characters_BaseCharacter_o *)0x0,position,distance,in_RCX);
  return bVar1;
}


// Characters.Horse$$Stay
// il2cpp: bool Characters_Horse__Stay (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf00f0

bool Characters_Horse__Stay(Characters_Horse_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  bVar1 = Characters_Horse__IssueOrder
                    (__this,0,(Characters_BaseCharacter_o *)0x0,
                     (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                     5.0,in_RCX);
  return bVar1;
}


// Characters.Horse$$IssueOrder
// il2cpp: bool Characters_Horse__IssueOrder (Characters_Horse_o* __this, int32_t order, Characters_BaseCharacter_o* target, UnityEngine_Vector3_o position, float distance, const MethodInfo* method);
// 0x5bf03f0

bool Characters_Horse__IssueOrder
               (Characters_Horse_o *__this,int32_t order,Characters_BaseCharacter_o *target,
               UnityEngine_Vector3_o position,float distance,MethodInfo *method)

{
  int iVar1;
  Controllers_HorseController_o *pCVar2;
  bool bVar3;
  bool hasAuthority;
  bool mounted;
  Photon_Pun_PhotonView_o *pPVar4;
  Characters_Human_o *pCVar5;
  bool bVar6;
  int32_t targetViewId;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_07547616 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547616 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetViewId = 0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (target == (Characters_BaseCharacter_o *)0x0) goto label_05bf05c2;
    if ((target->fields).Dead == false) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      targetViewId = 0;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (bVar3) {
        pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)target,(MethodInfo *)0x0);
        if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05bf05c2;
        targetViewId = (pPVar4->fields).viewIdField;
      }
    }
  }
  pCVar2 = (__this->fields)._Controller_k__BackingField;
  if (pCVar2 == (Controllers_HorseController_o *)0x0) {
label_05bf05c2:
    ThrowNullReferenceException();
  }
  iVar1 = (pCVar2->fields)._Revision_k__BackingField;
  pMVar7 = (__this->klass->vtable)._74_IsMine.method;
  hasAuthority = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,pMVar7);
  bVar3 = (__this->fields).Dead;
  pCVar5 = Characters_Horse__get_Rider(__this,pMVar7);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = false;
  mounted = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar7 = (MethodInfo *)(ulong)(uint)order;
  bVar3 = Controllers_HorseController__TrySetOrder
                    (pCVar2,order,targetViewId,position,distance,hasAuthority,bVar3 == false,mounted,
                     (MethodInfo *)0x0);
  if (bVar3) {
    pCVar2 = (__this->fields)._Controller_k__BackingField;
    if (pCVar2 == (Controllers_HorseController_o *)0x0) goto label_05bf05c2;
    bVar6 = true;
    if (iVar1 != (pCVar2->fields)._Revision_k__BackingField) {
      pCVar5 = Characters_Horse__get_Rider(__this,pMVar7);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        (__this->fields).State = 0;
      }
      bVar6 = true;
    }
  }
  return bVar6;
}


// Characters.Horse$$CreateCache
// il2cpp: void Characters_Horse__CreateCache (Characters_Horse_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x5bf0650

void Characters_Horse__CreateCache
               (Characters_Horse_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_HorseComponentCache_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547617 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseComponentCache);
    Il2CppMethodInitialized_07547617 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HorseComponentCache);
  Characters_HorseComponentCache___ctor(__this_00,owner,method_00);
  (__this->fields).HorseCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HorseCache);
  Characters_BaseCharacter__CreateCache
            ((Characters_BaseCharacter_o *)__this,(Utility_BaseComponentCache_o *)(__this->fields).HorseCache,
             (MethodInfo *)0x0);
  return;
}


// Characters.Horse$$Jump
// il2cpp: void Characters_Horse__Jump (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0790

void Characters_Horse__Jump(Characters_Horse_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  UnityEngine_Vector3_o force;
  
  bVar6 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if ((((!bVar6) || ((__this->fields).Dead != false)) || (0.0 < (__this->fields)._jumpCooldownLeft)) ||
     ((__this->fields).Grounded == false)) {
    return;
  }
  pUVar4 = (__this->fields).Cache;
  if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar4->fields).Rigidbody;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar1 = (__this->fields).JumpForce;
      force.fields.z = (pUVar5->upVector).fields.z * fVar1;
      uVar2 = (pUVar5->upVector).fields.x;
      uVar3 = (pUVar5->upVector).fields.y;
      force.fields.x = fVar1 * (float)uVar2;
      force.fields.y = fVar1 * (float)uVar3;
      UnityEngine_Rigidbody__AddForce(__this_00,force,2,(MethodInfo *)0x0);
      (__this->fields)._jumpCooldownLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$ValidTarget
// il2cpp: bool Characters_Horse__ValidTarget (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0860

bool Characters_Horse__ValidTarget(Characters_Horse_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.Horse$$FindSaddledHuman
// il2cpp: Characters_Human_o* Characters_Horse__FindSaddledHuman (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0870
// eh: try 0x5bf09c3..0x5bf0ab2 -> pad 0x5bf0abe (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bf0ad6..0x5bf0adb -> pad 0x5bf0b02 cleanup
// eh: try 0x5bf0b05..0x5bf0b0f -> pad 0x5bf0b17 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bf0ab2: jmp 0x5bf0abe
// asm:   0x5bf0ab4: jmp 0x5bf0abe
// asm:   0x5bf0ab6: jmp 0x5bf0abe
// asm:   0x5bf0ab8: jmp 0x5bf0abe
// asm:   0x5bf0aba: jmp 0x5bf0abe
// asm:   0x5bf0abc: jmp 0x5bf0abe
// asm:   0x5bf0abe: mov rbx, rax
// asm:   0x5bf0ac1: cmp edx, 1
// asm:   0x5bf0ac4: jne 0x5bf0b05
// asm:   0x5bf0ac6: mov rdi, rbx
// asm:   0x5bf0ac9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bf0ace: mov rbx, qword ptr [rax]
// asm:   0x5bf0ad1: mov qword ptr [rsp + 8], rbx
// asm:   0x5bf0ad6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bf0adb: lea rax, [rip + 0x169d386]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5bf0ae2: mov rsi, qword ptr [rax]
// asm:   0x5bf0ae5: lea rdi, [rsp + 0x40]
// asm:   0x5bf0aea: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5bf0aef: test rbx, rbx
// asm:   0x5bf0af2: jne 0x5bf0afa
// asm:   0x5bf0af4: xor ebx, ebx
// asm:   0x5bf0af6: xor ebp, ebp
// asm:   0x5bf0af8: jmp 0x5bf0a88
// asm:   0x5bf0afa: mov rdi, rbx
// asm:   0x5bf0afd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bf0b02: mov rbx, rax
// asm:   0x5bf0b05: lea rdi, [rsp + 8]
// asm:   0x5bf0b0a: call 0x2fd8e60  ; il2cpp_runtime_helper_02fd8e60()
// asm:   0x5bf0b0f: mov rdi, rbx
// asm:   0x5bf0b12: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bf0b17: mov rdi, rax
// asm:   0x5bf0b1a: call 0x2ab61e0  ; __clang_call_terminate()

Characters_Human_o * Characters_Horse__FindSaddledHuman(Characters_Horse_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  GameManagers_InGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  undefined4 uVar4;
  bool bVar5;
  Characters_Human_o *pCVar6;
  Characters_Human_o *x;
  int iVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar9;
  float in_XMM1_Db;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  undefined1 local_80 [16];
  Characters_Human_o *local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07547618 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547618 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar11 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    local_68 = UVar11.fields.z;
    fStack_50 = (float)extraout_XMM0_Dc;
    local_58 = (undefined1  [8])UVar11.fields._0_8_;
    fStack_4c = (float)extraout_XMM0_Dd;
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      fStack_64 = in_XMM1_Db;
      UVar11 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
      pGVar3 = (__this->fields)._inGameManager;
      if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).Humans,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        uVar4 = local_58._0_4_;
        local_58._0_4_ = (float)local_58._4_4_ + UVar11.fields.y * 1.95;
        fStack_50 = (float)local_58._4_4_;
        fStack_4c = (float)local_58._4_4_;
        local_68 = local_68 + UVar11.fields.z * 1.95;
        fStack_60 = fStack_64 + in_XMM1_Db * 0.0;
        fStack_5c = (float)local_58._4_4_ + UVar11.fields.y * 0.0;
        fStack_64 = (float)uVar4 + UVar11.fields.x * 1.95;
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,__this_00,
                   (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
        local_48.fields._current = (Il2CppObject *)local_70;
        local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_80._0_8_;
        local_48.fields._index = local_80._8_4_;
        local_48.fields._version = local_80._12_4_;
        local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_80._8_8_ = &local_48;
        do {
          do {
            do {
              bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (&local_48,
                                 (MethodInfo_4C456D0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
              x = (Characters_Human_o *)local_48.fields._current;
              if (!bVar5) {
                iVar7 = 5;
                x = (Characters_Human_o *)0x0;
                goto label_05bf0a74;
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            } while (!bVar5);
            if (x == (Characters_Human_o *)0x0) {
              ThrowNullReferenceException();
            }
          } while (((Characters_Human_Fields *)((long)x + 0x10))->Dead != false);
          pUVar1 = ((Characters_Human_Fields *)((long)x + 0x10))->Cache;
          if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar2 = (pUVar1->fields).Transform;
          if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar11 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
          fVar8 = UVar11.fields.y - (float)local_58._0_4_;
          fVar9 = UVar11.fields.z - local_68;
          fVar10 = UVar11.fields.x - fStack_64;
        } while (1.0 <= fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
        iVar7 = 4;
label_05bf0a74:
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (&local_48,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
        pCVar6 = (Characters_Human_o *)0x0;
        if (iVar7 == 4) {
          pCVar6 = x;
        }
        return pCVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$GetHitRPC
// il2cpp: void Characters_Horse__GetHitRPC (Characters_Horse_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5bf0b20

void Characters_Horse__GetHitRPC
               (Characters_Horse_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  
  if (Il2CppMethodInitialized_07547619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547619 = '\x01';
  }
  if (0 < viewId) {
    pCVar1 = (__this->fields)._assignedHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields)._assignedHuman;
      if ((pCVar1 == (Characters_Human_o *)0x0) ||
         (pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0),
         pPVar3 == (Photon_Pun_PhotonView_o *)0x0)) {
        ThrowNullReferenceException();
      }
      if ((pPVar3->fields).viewIdField == viewId) {
        return;
      }
    }
  }
  Characters_BaseCharacter__GetHitRPC
            ((Characters_BaseCharacter_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
  return;
}


// Characters.Horse$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_Horse__WaitAndDie (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0c00

System_Collections_IEnumerator_o * Characters_Horse__WaitAndDie(Characters_Horse_o *__this,MethodInfo *method)

{
  Characters_Horse__WaitAndDie_d__68_o *__this_00;
  
  if (Il2CppMethodInitialized_0754761a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse_WaitAndDie_d__68);
    Il2CppMethodInitialized_0754761a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_Horse_WaitAndDie_d__68);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.Horse$$Start
// il2cpp: void Characters_Horse__Start (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0c90

void Characters_Horse__Start(Characters_Horse_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  
  __this_00 = (__this->fields)._inGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  GameManagers_InGameManager__RegisterCharacter
            (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  Characters_BaseCharacter__Start((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.Horse$$Awake
// il2cpp: void Characters_Horse__Awake (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf0cc0

void Characters_Horse__Awake(Characters_Horse_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754761b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    Il2CppMethodInitialized_0754761b = '\x01';
  }
  Characters_BaseCharacter__Awake((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrWhiteSpace((__this->fields).RichTextName,(MethodInfo *)0x0);
  if (bVar1) {
    Characters_BaseCharacter__set_Name
              ((Characters_BaseCharacter_o *)__this,"Horse",(MethodInfo *)0x0);
  }
  bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar1) {
    if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    }
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_HorseAnimations->static_fields->Idle0,
               0.1,0.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.Horse$$ToggleDust
// il2cpp: void Characters_Horse__ToggleDust (Characters_Horse_o* __this, bool toggle, const MethodInfo* method);
// 0x5bf0d80

void Characters_Horse__ToggleDust(Characters_Horse_o *__this,bool toggle,MethodInfo *method)

{
  Characters_HorseComponentCache_o *pCVar1;
  UnityEngine_ParticleSystem_o *system;
  
  pCVar1 = (__this->fields).HorseCache;
  if (pCVar1 == (Characters_HorseComponentCache_o *)0x0) {
    ThrowNullReferenceException();
  }
  system = (pCVar1->fields).Dust;
  if (toggle) {
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,system,(__this->fields).EffectsEnabled != false,
               (MethodInfo *)0x0);
    return;
  }
  Characters_BaseCharacter__ToggleParticles
            ((Characters_BaseCharacter_o *)__this,system,false,(MethodInfo *)0x0);
  return;
}


// Characters.Horse$$RecallTo
// il2cpp: void Characters_Horse__RecallTo (Characters_Horse_o* __this, Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x5bf0dc0

void Characters_Horse__RecallTo
               (Characters_Horse_o *__this,Characters_BaseCharacter_o *target,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Rigidbody_o *pUVar12;
  UnityEngine_Vector3_Fields direction;
  bool bVar13;
  UnityEngine_LayerMask_o UVar14;
  int32_t iVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o end;
  undefined8 local_98;
  undefined8 local_88;
  UnityEngine_RaycastHit_o local_58;
  
  if (Il2CppMethodInitialized_0754761c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_0754761c = '\x01';
  }
  local_58.fields.m_UV.fields.x = 0.0;
  local_58.fields.m_UV.fields.y = 0.0;
  local_58.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_58.fields.m_Normal.fields.y = 0.0;
  local_58.fields.m_Normal.fields.z = 0.0;
  local_58.fields.m_FaceID = 0;
  local_58.fields.m_Distance = 0.0;
  local_58.fields.m_Point.fields.x = 0.0;
  local_58.fields.m_Point.fields.y = 0.0;
  local_58.fields.m_Point.fields.z = 0.0;
  local_58.fields.m_Normal.fields.x = 0.0;
  if (((target == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar10 = (target->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0)) {
label_05bf1220:
    ThrowNullReferenceException();
  }
  UVar21 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07544d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07544d56 = '\x01';
  }
  pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar16->rightVector).fields.x;
  uVar6 = (pUVar16->rightVector).fields.y;
  fVar19 = (pUVar16->rightVector).fields.z;
  fVar17 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72e = '\x01';
  }
  local_88._0_4_ = UVar21.fields.x;
  local_88._4_4_ = UVar21.fields.y;
  pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar3 = (pUVar16->forwardVector).fields.x;
  uVar7 = (pUVar16->forwardVector).fields.y;
  fVar1 = (pUVar16->forwardVector).fields.z;
  fVar18 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
  fVar19 = UVar21.fields.z + fVar19 * fVar17 + fVar1 * fVar18;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  fVar20 = (float)local_88 + fVar17 * (float)uVar2 + fVar18 * (float)uVar3;
  pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar4 = (pUVar16->upVector).fields.x;
  uVar8 = (pUVar16->upVector).fields.y;
  fVar1 = (pUVar16->upVector).fields.z;
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
    pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
  }
  direction = (pUVar16->downVector).fields;
  UVar14 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                     (__this,(__this->klass->vtable)._67_get_GroundMask.method);
  iVar15 = UnityEngine_LayerMask__op_Implicit(UVar14,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  UVar21.fields.z = fVar1 + fVar19;
  UVar21.fields.x = (float)uVar4 + fVar20;
  UVar21.fields.y = (float)uVar8 + local_88._4_4_ + fVar17 * (float)uVar6 + fVar18 * (float)uVar7;
  bVar13 = UnityEngine_Physics__Raycast_69d9950
                     (UVar21,(UnityEngine_Vector3_o)direction,&local_58,1000.0,iVar15,1,(MethodInfo *)0x0);
  if (bVar13) {
    UVar21 = UnityEngine_RaycastHit__get_point(&local_58,(MethodInfo *)0x0);
    fVar17 = UVar21.fields.y + 1.0;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar5 = (pUVar16->upVector).fields.x;
    uVar9 = (pUVar16->upVector).fields.y;
    fVar1 = (pUVar16->upVector).fields.z;
    end.fields.z = fVar1 * 1.4 + fVar19;
    UVar14 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                       (__this,(__this->klass->vtable)._67_get_GroundMask.method);
    iVar15 = UnityEngine_LayerMask__op_Implicit(UVar14,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    start.fields.y = (float)uVar9 * 0.6 + fVar17;
    start.fields.x = (float)uVar5 * 0.6 + fVar20;
    start.fields.z = fVar1 * 0.6 + fVar19;
    end.fields.x = (float)uVar5 * 1.4 + fVar20;
    end.fields.y = (float)uVar9 * 1.4 + fVar17;
    bVar13 = UnityEngine_Physics__CheckCapsule(start,end,0.6,iVar15,1,(MethodInfo *)0x0);
    if (!bVar13) {
      pUVar10 = (__this->fields).Cache;
      if ((pUVar10 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar12 = (pUVar10->fields).Rigidbody, pUVar12 != (UnityEngine_Rigidbody_o *)0x0)) {
        value.fields.z = fVar19;
        value.fields.x = fVar20;
        value.fields.y = fVar17;
        UnityEngine_Rigidbody__set_position(pUVar12,value,(MethodInfo *)0x0);
        pUVar10 = (__this->fields).Cache;
        if ((pUVar10 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar11 = (pUVar10->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
          value_00.fields.z = fVar19;
          value_00.fields.x = fVar20;
          value_00.fields.y = fVar17;
          UnityEngine_Transform__set_position(pUVar11,value_00,(MethodInfo *)0x0);
          pUVar10 = (__this->fields).Cache;
          if (pUVar10 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar12 = (pUVar10->fields).Rigidbody;
            if (Il2CppMethodInitialized_0753e4b6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b6 = '\x01';
            }
            if (pUVar12 != (UnityEngine_Rigidbody_o *)0x0) {
              UnityEngine_Rigidbody__set_linearVelocity
                        (pUVar12,(UnityEngine_Vector3_o)
                                 (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_05bf1220;
    }
  }
  return;
}


// Characters.Horse$$UpdateIdle
// il2cpp: void Characters_Horse__UpdateIdle (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf1230

void Characters_Horse__UpdateIdle(Characters_Horse_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Characters_AnimationHandler_o *pCVar2;
  Settings_SoundSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_0754761d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_0754761d = '\x01';
  }
  fVar8 = (__this->fields)._idleTimeLeft;
  fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar8 = fVar8 - fVar7;
  (__this->fields)._idleTimeLeft = fVar8;
  if (0.0 < fVar8) {
    return;
  }
  pCVar2 = (__this->fields).Animation;
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
    bVar5 = Characters_AnimationHandler__IsPlaying
                      (pCVar2,TypeInfo_Characters_HorseAnimations->static_fields->Idle0,(MethodInfo *)0x0);
    if (!bVar5) {
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_HorseAnimations->static_fields->Idle0,0.1,0.0,(MethodInfo *)0x0);
      fVar8 = UnityEngine_Random__Range(6.0,9.0,(MethodInfo *)0x0);
label_05bf13b4:
      (__this->fields)._idleTimeLeft = fVar8;
      return;
    }
    fVar8 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
    if (0.25 <= fVar8) {
      if (fVar8 < 0.5) {
        if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
        }
        pSVar6 = TypeInfo_Characters_HorseAnimations->static_fields->Idle2;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,(MethodInfo *)0x0);
        pCVar2 = (__this->fields).Animation;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          fVar8 = Characters_AnimationHandler__GetLength(pCVar2,pSVar6,(MethodInfo *)0x0);
          (__this->fields)._idleTimeLeft = fVar8;
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
          if ((pSVar3 != (Settings_SoundSettings_o *)0x0) &&
             (pSVar4 = (pSVar3->fields).HorseSoundEffect, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
            if ((pSVar4->fields)._value == false) {
              return;
            }
            if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
            }
            pSVar6 = TypeInfo_Characters_HorseSounds->static_fields->Idle1;
            goto label_05bf1610;
          }
        }
      }
      else {
        uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
        if (0.75 <= fVar8) {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
          }
          pSVar6 = TypeInfo_Characters_HorseAnimations->static_fields->Crazy;
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,(MethodInfo *)0x0);
          pCVar2 = (__this->fields).Animation;
          if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
            fVar8 = Characters_AnimationHandler__GetLength(pCVar2,pSVar6,(MethodInfo *)0x0);
            (__this->fields)._idleTimeLeft = fVar8;
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
            if ((pSVar3 != (Settings_SoundSettings_o *)0x0) &&
               (pSVar4 = (pSVar3->fields).HorseSoundEffect, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
              if ((pSVar4->fields)._value == false) {
                return;
              }
              if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
              }
              pSVar6 = TypeInfo_Characters_HorseSounds->static_fields->Idle3;
              goto label_05bf1610;
            }
          }
        }
        else {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
          }
          pSVar6 = TypeInfo_Characters_HorseAnimations->static_fields->Idle3;
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,(MethodInfo *)0x0);
          pCVar2 = (__this->fields).Animation;
          if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
            fVar8 = Characters_AnimationHandler__GetLength(pCVar2,pSVar6,(MethodInfo *)0x0);
            (__this->fields)._idleTimeLeft = fVar8;
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
            if ((pSVar3 != (Settings_SoundSettings_o *)0x0) &&
               (pSVar4 = (pSVar3->fields).HorseSoundEffect, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
              if ((pSVar4->fields)._value == false) {
                return;
              }
              if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
              }
              pSVar6 = TypeInfo_Characters_HorseSounds->static_fields->Idle2;
label_05bf1610:
              Characters_BaseCharacter__PlaySound
                        ((Characters_BaseCharacter_o *)__this,pSVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      pSVar6 = TypeInfo_Characters_HorseAnimations->static_fields->Idle1;
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,(MethodInfo *)0x0);
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar8 = Characters_AnimationHandler__GetLength(pCVar2,pSVar6,(MethodInfo *)0x0);
        goto label_05bf13b4;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$IdleOneShot
// il2cpp: void Characters_Horse__IdleOneShot (Characters_Horse_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x5bf1630

void Characters_Horse__IdleOneShot(Characters_Horse_o *__this,System_String_o *animation,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Characters_AnimationHandler__GetLength(__this_00,animation,(MethodInfo *)0x0);
  (__this->fields)._idleTimeLeft = fVar1;
  return;
}


// Characters.Horse$$Update
// il2cpp: void Characters_Horse__Update (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf1680
// fidelity: the machine code has facts this C leaves out:
//   virtual call through vtable slot 105

void Characters_Horse__Update(Characters_Horse_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  bool bVar7;
  bool mounted;
  bool bVar8;
  UnityEngine_GameObject_o *targetGo;
  Characters_Human_o *pCVar9;
  Characters_BaseCharacter_o *target;
  Controllers_HorseController_o *pCVar10;
  int iVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 uVar15;
  undefined4 uVar16;
  UnityEngine_Quaternion_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o velocity;
  System_Nullable_Vector3__o targetPosition;
  UnityEngine_Quaternion_Fields UStack_b8;
  undefined1 auStack_a8 [16];
  UnityEngine_Quaternion_Fields UStack_98;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  
  if (Il2CppMethodInitialized_0754761e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754761e = '\x01';
  }
  method_01 = (__this->klass->vtable)._74_IsMine.method;
  bVar7 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,method_01);
  if (!bVar7) {
    return;
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  auStack_a8._0_4_ = (__this->fields)._jumpCooldownLeft;
  fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._jumpCooldownLeft = (float)auStack_a8._0_4_ - fVar13;
  if ((__this->fields)._DespawnWithAssignedHuman_k__BackingField != false) {
    pCVar9 = (__this->fields)._assignedHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_01 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
label_05bf1770:
      targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__Destroy_56d7e70(targetGo,(MethodInfo *)0x0);
      return;
    }
    pCVar9 = (__this->fields)._assignedHuman;
    if (pCVar9 == (Characters_Human_o *)0x0) goto label_05bf1c06;
    if ((pCVar9->fields).Dead != false) goto label_05bf1770;
  }
  pCVar9 = Characters_Horse__get_Rider(__this,method_01);
  pCVar10 = (__this->fields)._Controller_k__BackingField;
  if (pCVar10 == (Controllers_HorseController_o *)0x0) goto label_05bf1c06;
  target = Characters_Horse__ResolveCharacter((pCVar10->fields)._TargetViewId_k__BackingField,method_01);
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar4 = (pUVar3->fields).Transform, pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05bf1c06;
  pCVar10 = (__this->fields)._Controller_k__BackingField;
  UVar18 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).Cache;
  if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) goto label_05bf1c06;
  auStack_78._0_4_ = UVar18.fields.z;
  auStack_a8._8_4_ = extraout_XMM0_Dc;
  auStack_a8._0_8_ = UVar18.fields._0_8_;
  auStack_a8._12_4_ = extraout_XMM0_Dd;
  pUVar5 = (pUVar3->fields).Rigidbody;
  if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bf1c06;
  UVar18 = UnityEngine_Rigidbody__get_linearVelocity(pUVar5,(MethodInfo *)0x0);
  fStack_58 = UVar18.fields.z;
  auStack_88._8_4_ = extraout_XMM0_Dc_00;
  auStack_88._0_8_ = UVar18.fields._0_8_;
  auStack_88._12_4_ = extraout_XMM0_Dd_00;
  bVar7 = (__this->fields).Grounded;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  uVar12._0_4_ = 0.0;
  uVar12._4_4_ = 0.0;
  auStack_48._0_8_ = pCVar9;
  mounted = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (target == (Characters_BaseCharacter_o *)0x0) goto label_05bf1c06;
    if ((target->fields).Dead == false) {
      pUVar3 = (target->fields).Cache;
      if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar4 = (pUVar3->fields).Transform, pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05bf1c06;
      UVar18 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      UStack_b8.x = 0.0;
      UStack_b8.y = 0.0;
      UStack_b8.z = 0.0;
      UStack_b8.w = 0.0;
      System_Nullable_Vector3____ctor
                ((System_Nullable_Vector3__o *)&UStack_b8,UVar18,
                 (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
      fVar13 = UStack_b8.z;
      fVar14 = UStack_b8.w;
      uVar12 = UStack_b8._0_8_;
      goto label_05bf18f4;
    }
    uStack_68 = 0;
    uVar12._0_4_ = 0.0;
    uVar12._4_4_ = 0.0;
  }
  else {
    fVar13 = 0.0;
    fVar14 = 0.0;
label_05bf18f4:
    uStack_68 = CONCAT44(fVar14,fVar13);
  }
  uStack_60 = 0;
  bVar8 = (__this->fields)._RecallEnabled_k__BackingField;
  fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  if (pCVar10 == (Controllers_HorseController_o *)0x0) goto label_05bf1c06;
  uVar15 = 0;
  uVar16 = 0;
  UVar18.fields.z = (float)auStack_78._0_4_;
  UVar18.fields.x = (float)auStack_a8._0_4_;
  UVar18.fields.y = (float)auStack_a8._4_4_;
  velocity.fields.z = fStack_58;
  velocity.fields.x = (float)auStack_88._0_4_;
  velocity.fields.y = (float)auStack_88._4_4_;
  targetPosition.fields.value.fields.y = (float)(undefined4)uStack_68;
  targetPosition.fields.value.fields.z = (float)uStack_68._4_4_;
  targetPosition.fields._0_8_ = uVar12;
  Controllers_HorseController__Tick
            (pCVar10,UVar18,velocity,bVar7,mounted,targetPosition,bVar8,fVar13,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  uVar12 = auStack_48._0_8_;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)auStack_48._0_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((UnityEngine_Object_o *)uVar12 == (UnityEngine_Object_o *)0x0) goto label_05bf1c06;
    if (*(char *)((long)&((UnityEngine_Object_o *)(uVar12 + 0xd8))->klass + 4) == '\0') {
      (__this->fields).State = 3;
    }
    else {
      pUVar3 = (__this->fields).Cache;
      if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar3->fields).Rigidbody, pUVar5 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05bf1c06;
      UVar17 = UnityEngine_Rigidbody__get_rotation(pUVar5,(MethodInfo *)0x0);
      fVar13 = UVar17.fields.z;
      fVar14 = UVar17.fields.w;
      auStack_a8._8_4_ = extraout_XMM0_Dc_01;
      auStack_a8._0_8_ = UVar17.fields._0_8_;
      auStack_a8._12_4_ = extraout_XMM0_Dd_01;
      auStack_78._8_4_ = uVar15;
      auStack_78._0_8_ = UVar17.fields._8_8_;
      auStack_78._12_4_ = uVar16;
      auStack_88._0_8_ =
           (*(*(UnityEngine_Object_c **)uVar12)[5]._1.interopData)
                     (uVar12,(*(UnityEngine_Object_c **)uVar12)[5]._1.klass);
      auStack_88._8_4_ = extraout_XMM0_Dc_02;
      auStack_88._12_4_ = extraout_XMM0_Dd_02;
      fStack_58 = fVar13;
      fStack_54 = fVar14;
      uStack_50 = uVar15;
      uStack_4c = uVar16;
      fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UStack_b8._0_8_ = auStack_a8._0_8_;
      UStack_b8._8_8_ = auStack_78._0_8_;
      UStack_98._0_8_ = auStack_88._0_8_;
      UStack_98.z = fStack_58;
      UStack_98.w = fStack_54;
      UVar17 = UnityEngine_Quaternion__Internal_Lerp
                         ((UnityEngine_Quaternion_o *)&UStack_b8,(UnityEngine_Quaternion_o *)&UStack_98,
                          fVar13 * 5.0,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__MoveRotation(pUVar5,UVar17,(MethodInfo *)0x0);
      (__this->fields).State =
           *(char *)((long)&(((UnityEngine_Object_o *)(uVar12 + 0x228))->fields).m_CachedPtr + 4) == '\0' ^ 5;
    }
  }
  else {
    pCVar10 = (__this->fields)._Controller_k__BackingField;
    if (pCVar10 == (Controllers_HorseController_o *)0x0) goto label_05bf1c06;
    if ((pCVar10->fields)._Moving_k__BackingField == false) {
      iVar11 = 0;
    }
    else {
      iVar11 = 2 - (uint)((pCVar10->fields)._Running_k__BackingField == false);
    }
    (__this->fields).State = iVar11;
    uVar1 = (pCVar10->fields)._Direction_k__BackingField.fields.x;
    uVar2 = (pCVar10->fields)._Direction_k__BackingField.fields.y;
    fVar13 = (pCVar10->fields)._Direction_k__BackingField.fields.z;
    uVar15 = 0;
    uVar16 = 0;
    if (0.001 < fVar13 * fVar13 + (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1) {
      pUVar3 = (__this->fields).Cache;
      if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar3->fields).Rigidbody, pUVar5 == (UnityEngine_Rigidbody_o *)0x0)) {
label_05bf1c06:
        ThrowNullReferenceException();
      }
      UVar17 = UnityEngine_Rigidbody__get_rotation(pUVar5,(MethodInfo *)0x0);
      pCVar10 = (__this->fields)._Controller_k__BackingField;
      if (pCVar10 == (Controllers_HorseController_o *)0x0) goto label_05bf1c06;
      auStack_78._8_4_ = uVar15;
      auStack_78._0_8_ = UVar17.fields._8_8_;
      auStack_78._12_4_ = uVar16;
      auStack_a8._8_4_ = extraout_XMM0_Dc_03;
      auStack_a8._0_8_ = UVar17.fields._0_8_;
      auStack_a8._12_4_ = extraout_XMM0_Dd_03;
      UStack_b8.x = (pCVar10->fields)._Direction_k__BackingField.fields.x;
      UStack_b8.y = (pCVar10->fields)._Direction_k__BackingField.fields.y;
      UStack_b8.z = (pCVar10->fields)._Direction_k__BackingField.fields.z;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      UStack_98.x = (pUVar6->upVector).fields.x;
      UStack_98.y = (pUVar6->upVector).fields.y;
      UStack_98.z = (pUVar6->upVector).fields.z;
      uVar15 = 0;
      uVar16 = 0;
      UVar17 = UnityEngine_Quaternion__Internal_LookRotation
                         ((UnityEngine_Vector3_o *)&UStack_b8,(UnityEngine_Vector3_o *)&UStack_98,
                          (MethodInfo *)0x0);
      auStack_48._8_4_ = extraout_XMM0_Dc_04;
      auStack_48._0_8_ = UVar17.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd_04;
      auStack_88._8_4_ = uVar15;
      auStack_88._0_8_ = UVar17.fields._8_8_;
      auStack_88._12_4_ = uVar16;
      fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UStack_b8._0_8_ = auStack_a8._0_8_;
      UStack_b8._8_8_ = auStack_78._0_8_;
      UStack_98.z = auStack_88._0_4_;
      UStack_98.w = auStack_88._4_4_;
      UStack_98._0_8_ = auStack_48._0_8_;
      UVar17 = UnityEngine_Quaternion__Internal_Lerp
                         ((UnityEngine_Quaternion_o *)&UStack_b8,(UnityEngine_Quaternion_o *)&UStack_98,
                          fVar13 * 10.0,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__MoveRotation(pUVar5,UVar17,(MethodInfo *)0x0);
      pCVar10 = (__this->fields)._Controller_k__BackingField;
      if (pCVar10 == (Controllers_HorseController_o *)0x0) goto label_05bf1c06;
    }
    if ((pCVar10->fields)._WantsRecall_k__BackingField != false) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        Characters_Horse__RecallTo(__this,target,method_00);
      }
    }
  }
  return;
}


// Characters.Horse$$FixedUpdate
// il2cpp: void Characters_Horse__FixedUpdate (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf1c10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bf1dea: jmp 0x5bf2150

void Characters_Horse__FixedUpdate(Characters_Horse_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar6;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint32_t uVar12;
  int iVar13;
  UnityEngine_Rigidbody_o *pUVar14;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Quaternion_StaticFields *pUVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  Utility_BaseComponentCache_o *pUVar19;
  UnityEngine_Vector3_StaticFields *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  int32_t mode;
  MethodInfo *pMVar22;
  UnityEngine_Rigidbody_o *pUVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [4];
  undefined4 extraout_XMM0_Db;
  undefined4 uVar28;
  undefined8 uVar27;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined8 extraout_XMM1_Qa;
  float fVar36;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  UnityEngine_Quaternion_o UVar41;
  UnityEngine_Quaternion_o UVar42;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_Fields UStack_a8;
  undefined1 auStack_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  float fStack_80;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [8];
  float fStack_6c;
  float fStack_5c;
  UnityEngine_Quaternion_Fields UStack_58;
  float fStack_48;
  float fStack_44;
  UnityEngine_Vector3_Fields UStack_40;
  UnityEngine_Quaternion_o UStack_30;
  
  fStack_80 = 0.0;
  uStack_88 = 0;
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar18 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar18) {
    return;
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  (*(__this->klass->vtable)._107_CheckGround.methodPtr)
            (__this,(__this->klass->vtable)._107_CheckGround.method);
  auVar29._8_8_ = extraout_XMM1_Qb;
  auVar29._0_8_ = extraout_XMM1_Qa;
  pUVar19 = (__this->fields).Cache;
  if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05bf27f4;
  pMVar22 = (MethodInfo *)0x0;
  UnityEngine_Rigidbody__set_angularDamping(pUVar23,6.0,(MethodInfo *)0x0);
  if ((__this->fields).Grounded == false) goto label_05bf2454;
  uVar11 = (__this->fields).State;
  if (uVar11 == 3) {
    pUVar19 = (__this->fields).Cache;
    if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05bf27f4;
    pMVar22 = (MethodInfo *)0x0;
    UVar43 = UnityEngine_Rigidbody__get_linearVelocity(pUVar23,(MethodInfo *)0x0);
    register0x00001244 = auVar29._4_12_;
    auStack_98._0_4_ = UVar43.fields.z;
    UStack_a8.z = (float)extraout_XMM0_Dc;
    UStack_a8._0_8_ = UVar43.fields._0_8_;
    UStack_a8.w = (float)extraout_XMM0_Dd;
label_05bf1ce9:
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar12 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar12 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar12 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar6._0_4_ = (float)auStack_98._0_4_ * (float)auStack_98._0_4_ +
                  UStack_a8.y * UStack_a8.y + UStack_a8.x * UStack_a8.x;
    fStack_48 = (float)uVar6;
    if ((float)uVar6 < 0.0) {
      uVar6._0_4_ = sqrtf((float)uVar6);
    }
    else {
      uVar6._0_4_ = SQRT((float)uVar6);
    }
    auStack_78 = (undefined1  [4])0x3f800000;
    if ((float)uVar6 < 1.0) {
      pUVar19 = (__this->fields).Cache;
      if (pUVar19 == (Utility_BaseComponentCache_o *)0x0) goto label_05bf27f4;
      pUVar23 = (pUVar19->fields).Rigidbody;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
        pUVar19 = (__this->fields).Cache;
        if (pUVar19 == (Utility_BaseComponentCache_o *)0x0) goto label_05bf27f4;
      }
      pUVar14 = (pUVar19->fields).Rigidbody;
      if (pUVar14 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bf27f4;
      pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar20->upVector).fields.x;
      uVar7 = (pUVar20->upVector).fields.y;
      uVar6._0_4_ = (pUVar20->upVector).fields.z;
      UVar43 = UnityEngine_Rigidbody__get_linearVelocity(pUVar14,(MethodInfo *)0x0);
      uVar6._4_4_ = UVar43.fields.y;
      if (pUVar23 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bf27f4;
      value.fields.z = (float)uVar6 * uVar6._4_4_;
      value.fields.y = (float)uVar7 * uVar6._4_4_;
      value.fields.x = (float)uVar2 * uVar6._4_4_;
      auVar29 = ZEXT816(0);
      UnityEngine_Rigidbody__set_linearVelocity(pUVar23,value,(MethodInfo *)0x0);
      goto label_05bf2454;
    }
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    if (fStack_48 < 0.0) {
      fStack_5c = sqrtf(fStack_48);
    }
    else {
      fStack_5c = SQRT(fStack_48);
    }
    if (uVar11 == 3) {
      auStack_78 = (undefined1  [4])0x3f000000;
    }
    else {
      uVar6._0_4_ = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      auStack_78 = (undefined1  [4])((float)auStack_78 / (float)uVar6);
    }
    pUVar19 = (__this->fields).Cache;
    if (pUVar19 == (Utility_BaseComponentCache_o *)0x0) goto label_05bf27f4;
    pUVar23 = (pUVar19->fields).Rigidbody;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      UStack_58.x = 0.0;
      UStack_58.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05bf1f5a;
label_05bf237c:
      UStack_58.x = 0.0;
      UStack_58.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar12 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      UStack_58.x = 0.0;
      UStack_58.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05bf237c;
label_05bf1f5a:
      UStack_58.x = 0.0;
      UStack_58.y = 0.0;
      uVar12 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar12 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar28 = 0;
    if (fStack_48 < 0.0) {
      uVar6._0_4_ = sqrtf(fStack_48);
      uVar28 = extraout_XMM0_Db;
    }
    else {
      uVar6._0_4_ = SQRT(fStack_48);
    }
    if ((float)uVar6 <= 1e-05) {
      pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
      _auStack_98 = ZEXT416((uint)(pUVar20->zeroVector).fields.z);
    }
    else {
      auStack_98._0_4_ = (float)auStack_98._0_4_ / (float)uVar6;
      auVar16._4_4_ = (float)uVar6;
      auVar16._0_4_ = (float)uVar6;
      auVar16._8_4_ = uVar28;
      auVar16._12_4_ = uVar28;
      auVar29 = divps((undefined1  [16])UStack_a8,auVar16);
      UStack_58.x = auVar29._0_4_;
      UStack_58.y = auVar29._4_4_;
      pUVar20 = (UnityEngine_Vector3_StaticFields *)&UStack_58;
    }
    uVar3 = (pUVar20->zeroVector).fields.x;
    uVar8 = (pUVar20->zeroVector).fields.y;
    uVar6._4_4_ = Characters_Horse__get_RunSpeed(__this,pMVar22);
    if (pUVar23 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bf27f4;
    auVar30._0_8_ = auStack_98 ^ 0x8000000080000000;
    auVar30._8_4_ = (uint)fStack_90 ^ 0x80000000;
    auVar30._12_4_ = (uint)fStack_8c ^ 0x80000000;
    if (fStack_5c * (float)auStack_78 <= uVar6._4_4_) {
      uVar6._4_4_ = fStack_5c * (float)auStack_78;
    }
    auVar31._4_12_ = auVar30._4_12_;
    auVar31._0_4_ = -(float)auStack_98._0_4_ * uVar6._4_4_;
    fVar24 = uVar6._4_4_ * -(float)uVar3;
    uVar6._4_4_ = uVar6._4_4_ * -(float)uVar8;
    mode = 5;
label_05bf244d:
    force.fields.y = uVar6._4_4_;
    force.fields.x = fVar24;
    force.fields.z = auVar31._0_4_;
    auVar17._12_4_ = 0;
    auVar17._0_12_ = auVar31._4_12_;
    auVar29 = auVar17 << 0x20;
    UnityEngine_Rigidbody__AddForce(pUVar23,force,mode,(MethodInfo *)0x0);
  }
  else if (uVar11 < 6) {
    if ((0x36U >> (uVar11 & 0x1f) & 1) != 0) {
      uVar6._0_4_ = Characters_Horse__get_RunSpeed(__this,pMVar22);
      iVar13 = (__this->fields).State;
      if (iVar13 == 1) {
        uVar6._4_4_ = (__this->fields).RunCloseSpeed;
        if (uVar6._4_4_ <= (float)uVar6) {
          uVar6._0_4_ = uVar6._4_4_;
        }
      }
      else if ((iVar13 == 5) && (uVar6._4_4_ = (__this->fields).WalkSpeed, uVar6._4_4_ <= (float)uVar6)) {
        uVar6._0_4_ = uVar6._4_4_;
      }
      pUVar19 = (__this->fields).Cache;
      if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar21 = (pUVar19->fields).Transform, pUVar21 == (UnityEngine_Transform_o *)0x0))
      goto label_05bf27f4;
      pUVar23 = (pUVar19->fields).Rigidbody;
      pMVar22 = (MethodInfo *)0x0;
      UVar43 = UnityEngine_Transform__get_forward(pUVar21,(MethodInfo *)0x0);
      auStack_74._4_4_ = extraout_XMM0_Dc_01;
      _auStack_78 = UVar43.fields._0_8_;
      fStack_6c = (float)extraout_XMM0_Dd_01;
      uVar6._4_4_ = Characters_Horse__get_RunSpeed(__this,pMVar22);
      if (pUVar23 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bf27f4;
      UVar43.fields.z = UVar43.fields.z * uVar6._4_4_;
      UVar43.fields.x = uVar6._4_4_ * (float)auStack_78;
      UVar43.fields.y = uVar6._4_4_ * (float)auStack_74._0_4_;
      auVar29 = ZEXT816(0);
      UnityEngine_Rigidbody__AddForce(pUVar23,UVar43,5,(MethodInfo *)0x0);
      pUVar19 = (__this->fields).Cache;
      if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0))
      goto label_05bf27f4;
      UVar43 = UnityEngine_Rigidbody__get_linearVelocity(pUVar23,(MethodInfo *)0x0);
      auVar32._4_12_ = auVar29._4_12_;
      auVar32._0_4_ = UVar43.fields.z;
      uStack_88 = UVar43.fields._0_8_;
      auVar26 = (undefined1  [4])UVar43.fields.x;
      uVar6._4_4_ = UVar43.fields.y;
      uVar28 = extraout_XMM0_Dc_02;
      fVar24 = (float)extraout_XMM0_Dd_02;
      fStack_80 = auVar32._0_4_;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        auStack_74._4_4_ = extraout_XMM0_Dc_02;
        _auStack_78 = uStack_88;
        fStack_6c = (float)extraout_XMM0_Dd_02;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        auVar32 = ZEXT416((uint)auVar32._0_4_);
        Il2CppMethodInitialized_0753e729 = '\x01';
        auVar26 = auStack_78;
        uVar6._4_4_ = (float)auStack_74._0_4_;
        uVar28 = auStack_74._4_4_;
        fVar24 = fStack_6c;
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        auStack_74._0_4_ = uVar6._4_4_;
        auStack_78 = auVar26;
        auStack_74._4_4_ = uVar28;
        fStack_6c = fVar24;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        auVar32 = ZEXT416(auVar32._0_4_);
        auVar26 = auStack_78;
        uVar6._4_4_ = (float)auStack_74._0_4_;
      }
      auVar29._4_12_ = auVar32._4_12_;
      auVar29._0_4_ =
           auVar32._0_4_ * auVar32._0_4_ + uVar6._4_4_ * uVar6._4_4_ + (float)auVar26 * (float)auVar26;
      if (auVar29._0_4_ < 0.0) {
        uVar6._4_4_ = sqrtf(auVar29._0_4_);
      }
      else {
        uVar6._4_4_ = SQRT(auVar29._0_4_);
      }
      if (uVar6._4_4_ < (float)uVar6) goto label_05bf2454;
      pUVar19 = (__this->fields).Cache;
      if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0))
      goto label_05bf27f4;
      pMVar22 = (MethodInfo *)0x0;
      UnityEngine_Rigidbody__set_angularDamping(pUVar23,1.0,(MethodInfo *)0x0);
      uVar6._4_4_ = Characters_Horse__get_RunSpeed(__this,pMVar22);
      pUVar19 = (__this->fields).Cache;
      if (((float)uVar6 != uVar6._4_4_) || (NAN((float)uVar6) || NAN(uVar6._4_4_))) {
        if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05bf27f4;
        UVar43 = UnityEngine_Rigidbody__get_linearVelocity(pUVar23,(MethodInfo *)0x0);
        fStack_80 = UVar43.fields.z;
        uStack_88 = UVar43.fields._0_8_;
        uVar6._4_4_ = (float)il2cpp_runtime_helper_0599adc0(&uStack_88);
        pUVar19 = (__this->fields).Cache;
        if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar14 = (pUVar19->fields).Rigidbody, pUVar14 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05bf27f4;
        uVar6._0_4_ = (float)uVar6 - uVar6._4_4_;
        if ((float)uVar6 <= -1.0) {
          uVar6._0_4_ = -1.0;
        }
        UVar43 = UnityEngine_Rigidbody__get_linearVelocity(pUVar14,(MethodInfo *)0x0);
        fStack_80 = UVar43.fields.z;
        uStack_88 = UVar43.fields._0_8_;
        uVar27 = il2cpp_runtime_helper_059d80e0(&uStack_88,0);
        auVar33._8_8_ = extraout_XMM1_Qb_01;
        auVar33._0_8_ = extraout_XMM1_Qa_01;
      }
      else {
        if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05bf27f4;
        UVar43 = UnityEngine_Rigidbody__get_linearVelocity(pUVar23,(MethodInfo *)0x0);
        fStack_80 = UVar43.fields.z;
        uStack_88 = UVar43.fields._0_8_;
        uVar6._4_4_ = (float)il2cpp_runtime_helper_0599adc0(&uStack_88);
        pUVar19 = (__this->fields).Cache;
        if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar14 = (pUVar19->fields).Rigidbody, pUVar14 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05bf27f4;
        UVar43 = UnityEngine_Rigidbody__get_linearVelocity(pUVar14,(MethodInfo *)0x0);
        fStack_80 = UVar43.fields.z;
        uStack_88 = UVar43.fields._0_8_;
        uVar27 = il2cpp_runtime_helper_059d80e0(&uStack_88,0);
        auVar33._8_8_ = extraout_XMM1_Qb_00;
        auVar33._0_8_ = extraout_XMM1_Qa_00;
        uVar6._0_4_ = (float)uVar6 - uVar6._4_4_;
      }
      fVar24 = (float)uVar27 * (float)uVar6;
      uVar6._4_4_ = (float)((ulong)uVar27 >> 0x20) * (float)uVar6;
      auVar31._4_12_ = auVar33._4_12_;
      auVar31._0_4_ = auVar33._0_4_ * (float)uVar6;
      mode = 2;
      goto label_05bf244d;
    }
    if (uVar11 == 0) {
      pUVar19 = (__this->fields).Cache;
      if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0))
      goto label_05bf27f4;
      pMVar22 = (MethodInfo *)0x0;
      UVar43 = UnityEngine_Rigidbody__get_linearVelocity(pUVar23,(MethodInfo *)0x0);
      register0x00001244 = auVar29._4_12_;
      auStack_98._0_4_ = UVar43.fields.z;
      UStack_a8.z = extraout_XMM0_Dc_00;
      UStack_a8._0_8_ = UVar43.fields._0_8_;
      UStack_a8.w = extraout_XMM0_Dd_00;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar6._0_4_ = (pUVar20->upVector).fields.x;
      uVar6._4_4_ = (pUVar20->upVector).fields.y;
      auVar26 = (undefined1  [4])(pUVar20->upVector).fields.z;
      fVar24 = 0.0;
      fVar36 = 0.0;
      if (g_data_07545e2d == '\0') {
        auStack_78 = auVar26;
        UStack_40.x = 0.0;
        UStack_40.y = 0.0;
        _fStack_48 = uVar6;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        g_data_07545e2d = '\x01';
        auVar26 = auStack_78;
        uVar6._0_4_ = fStack_48;
        uVar6._4_4_ = fStack_44;
        fVar24 = UStack_40.x;
        fVar36 = UStack_40.y;
      }
      fVar25 = (float)auVar26 * (float)auVar26 + uVar6._4_4_ * uVar6._4_4_ + (float)uVar6 * (float)uVar6;
      if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar25) {
        UStack_a8.x = UVar43.fields.x;
        UStack_a8.y = UVar43.fields.y;
        auStack_98._4_4_ = auVar29._4_4_;
        fStack_90 = auVar29._8_4_;
        fStack_8c = auVar29._12_4_;
        fVar25 = ((float)auStack_98._0_4_ * (float)auVar26 +
                 UStack_a8.y * uVar6._4_4_ + UStack_a8.x * (float)uVar6) / fVar25;
        UStack_a8.y = UStack_a8.y - fVar25 * uVar6._4_4_;
        UStack_a8.x = UStack_a8.x - fVar25 * (float)uVar6;
        UStack_a8.z = extraout_XMM0_Dc_00 - fVar25 * fVar24;
        UStack_a8.w = extraout_XMM0_Dd_00 - fVar25 * fVar36;
        auStack_98._0_4_ = (float)auStack_98._0_4_ - (float)auVar26 * fVar25;
      }
      goto label_05bf1ce9;
    }
  }
label_05bf2454:
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar19 = (__this->fields).Cache;
  if ((pUVar19 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (UnityEngine_Component_o *)(pUVar19->fields).Rigidbody,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar27._0_4_ = (pUVar20->upVector).fields.x;
    uVar27._4_4_ = (pUVar20->upVector).fields.y;
    uVar6._0_4_ = (pUVar20->upVector).fields.z;
    pUVar21 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
      UVar43 = UnityEngine_Transform__get_up(pUVar21,(MethodInfo *)0x0);
      auVar34._12_4_ = 0;
      auVar34._0_12_ = auVar29._4_12_;
      auVar34 = auVar34 << 0x20;
      UStack_58.z = (float)uVar6;
      UStack_30.fields.x = UVar43.fields.x;
      UStack_30.fields.y = UVar43.fields.y;
      UStack_30.fields.z = UVar43.fields.z;
      UStack_58._0_8_ = uVar27;
      UVar41 = UnityEngine_Quaternion__Internal_FromToRotation
                         ((UnityEngine_Vector3_o *)&UStack_58,(UnityEngine_Vector3_o *)&UStack_30,
                          (MethodInfo *)0x0);
      register0x00001248 = auVar34._8_8_;
      UVar41.fields._8_8_ = UVar41.fields._8_8_;
      if (Il2CppMethodInitialized_0753e72b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_0753e72b = '\x01';
      }
      pUVar15 = TypeInfo_UnityEngine_Quaternion->static_fields;
      uVar4 = (pUVar15->identityQuaternion).fields.x;
      uVar9 = (pUVar15->identityQuaternion).fields.y;
      uVar5 = (pUVar15->identityQuaternion).fields.z;
      uVar10 = (pUVar15->identityQuaternion).fields.w;
      uVar6._0_4_ = ABS((float)uVar10 * UVar41.fields.w +
                        (float)uVar9 * UVar41.fields.y + (float)uVar4 * UVar41.fields.x +
                        (float)uVar5 * UVar41.fields.z);
      if (1.0 <= (float)uVar6) {
        uVar6._0_4_ = 1.0;
      }
      uVar6._4_4_ = 0.0;
      if ((float)uVar6 <= 0.999999) {
        uVar6._0_4_ = acosf((float)uVar6);
        uVar6._4_4_ = ((float)uVar6 + (float)uVar6) * 57.29578;
      }
      pfVar1 = &(__this->fields).MaxTilt;
      if (*pfVar1 <= uVar6._4_4_ && uVar6._4_4_ != *pfVar1) {
        UStack_58._0_8_ = UVar41.fields._0_8_;
        UStack_58._8_8_ = UVar41.fields._8_8_;
        UVar41 = UnityEngine_Quaternion__Internal_Inverse
                           ((UnityEngine_Quaternion_o *)&UStack_58,(MethodInfo *)0x0);
        auVar35._8_8_ = UVar41._16_8_;
        auVar35._0_8_ = UVar41.fields._8_8_;
        pUVar19 = (__this->fields).Cache;
        if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05bf27f4;
        UVar42 = UnityEngine_Rigidbody__get_rotation(pUVar23,(MethodInfo *)0x0);
        uVar6._0_4_ = UVar42.fields.x;
        uVar6._4_4_ = UVar42.fields.y;
        pUVar19 = (__this->fields).Cache;
        if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05bf27f4;
        UStack_a8.x = UVar41.fields.x;
        UStack_a8.y = UVar41.fields.y;
        fVar24 = UVar42.fields.z;
        fVar36 = UVar42.fields.w;
        fVar25 = auVar35._8_4_;
        fVar37 = auVar35._12_4_;
        auStack_98._0_4_ = UVar41.fields.z;
        auStack_98._4_4_ = UVar41.fields.w;
        fStack_90 = UVar41._16_4_;
        fStack_8c = UVar41._20_4_;
        fVar39 = (float)auStack_98._4_4_ * uVar6._4_4_ + UStack_a8.y * fVar36;
        fVar38 = (fVar39 + (float)auStack_98._0_4_ * (float)uVar6) - UStack_a8.x * fVar24;
        auStack_74._0_4_ = (fVar39 + (float)auStack_98._4_4_ * uVar6._4_4_) - UStack_a8.y * fVar36;
        auStack_78 = (undefined1  [4])fVar38;
        auStack_74._4_4_ = (fVar39 + fStack_90 * extraout_XMM0_Dc_04) - extraout_XMM0_Dc_03 * fVar25;
        fStack_6c = (fVar39 + fStack_8c * extraout_XMM0_Dd_04) - extraout_XMM0_Dd_03 * fVar37;
        fVar39 = (uVar6._4_4_ * UStack_a8.x +
                 fVar36 * (float)auStack_98._0_4_ + (float)auStack_98._4_4_ * fVar24) -
                 UStack_a8.y * (float)uVar6;
        fVar40 = (fVar24 * UStack_a8.y + (float)uVar6 * (float)auStack_98._4_4_ + UStack_a8.x * fVar36) -
                 (float)auStack_98._0_4_ * uVar6._4_4_;
        fStack_44 = fVar40;
        fStack_48 = fVar39;
        UStack_40.y = (extraout_XMM0_Dd_04 * extraout_XMM0_Dd_03 + fVar37 * fStack_8c + fStack_8c * fVar37) -
                      extraout_XMM0_Dd_03 * extraout_XMM0_Dd_04;
        UStack_40.x = (extraout_XMM0_Dc_04 * extraout_XMM0_Dc_03 + fVar25 * fStack_90 + fStack_90 * fVar25) -
                      extraout_XMM0_Dc_03 * extraout_XMM0_Dc_04;
        uVar6._4_4_ = (((float)auStack_98._4_4_ * fVar36 - UStack_a8.x * (float)uVar6) -
                      UStack_a8.y * uVar6._4_4_) - (float)auStack_98._0_4_ * fVar24;
        UStack_30 = UnityEngine_Rigidbody__get_rotation(pUVar23,(MethodInfo *)0x0);
        uVar27 = UStack_30.fields._8_8_;
        uVar6._0_4_ = UStack_30.fields.x;
        fVar24 = UStack_30.fields.y;
        UStack_58.x = fVar40;
        UStack_58.y = fVar38;
        UStack_58.z = fVar39;
        UStack_58.w = uVar6._4_4_;
        uVar6._4_4_ = ABS(UStack_30.fields.w * uVar6._4_4_ +
                          (float)uVar6 * fStack_44 + fVar24 * (float)auStack_78 +
                          UStack_30.fields.z * fStack_48);
        if (1.0 <= uVar6._4_4_) {
          uVar6._4_4_ = 1.0;
        }
        if (uVar6._4_4_ <= 0.999999) {
          auStack_78 = (undefined1  [4])(__this->fields).MaxTilt;
          uVar6._4_4_ = acosf(uVar6._4_4_);
          uVar6._4_4_ = (uVar6._4_4_ + uVar6._4_4_) * 57.29578;
          if ((uVar6._4_4_ != 0.0) || (NAN(uVar6._4_4_))) {
            uVar6._0_4_ = 1.0;
            if ((float)auStack_78 / uVar6._4_4_ <= 1.0) {
              uVar6._0_4_ = (float)auStack_78 / uVar6._4_4_;
            }
            UVar41 = UnityEngine_Quaternion__Internal_SlerpUnclamped
                               ((UnityEngine_Quaternion_o *)&UStack_58,&UStack_30,(float)uVar6,
                                (MethodInfo *)0x0);
            uVar27 = UVar41.fields._8_8_;
            uVar6._0_4_ = UVar41.fields.x;
            fVar24 = UVar41.fields.y;
          }
        }
        pUVar19 = (__this->fields).Cache;
        if ((pUVar19 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar23 = (pUVar19->fields).Rigidbody, pUVar23 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05bf27f4;
        UVar41.fields.y = fVar24;
        UVar41.fields.x = (float)uVar6;
        UVar41.fields.z = (float)(int)uVar27;
        UVar41.fields.w = (float)(int)((ulong)uVar27 >> 0x20);
        UnityEngine_Rigidbody__MoveRotation(pUVar23,UVar41,(MethodInfo *)0x0);
      }
      pUVar19 = (__this->fields).Cache;
      if (pUVar19 != (Utility_BaseComponentCache_o *)0x0) {
        pUVar23 = (pUVar19->fields).Rigidbody;
        UVar43 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                           (__this,(__this->klass->vtable)._58_get_Gravity.method);
        if (pUVar23 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__AddForce(pUVar23,UVar43,5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05bf27f4:
  ThrowNullReferenceException();
}


// Characters.Horse$$LateUpdate
// il2cpp: void Characters_Horse__LateUpdate (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf2800

void Characters_Horse__LateUpdate(Characters_Horse_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  Characters_AnimationHandler_o *__this_00;
  Characters_HorseComponentCache_o *pCVar4;
  Settings_SoundSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  bool bVar8;
  Characters_Human_o *__this_01;
  MethodInfo *pMVar9;
  System_String_o *pSVar10;
  UnityEngine_ParticleSystem_o *system;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  
  if (Il2CppMethodInitialized_0754761f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_0754761f = '\x01';
  }
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  pMVar9 = (__this->klass->vtable)._74_IsMine.method;
  bVar7 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,pMVar9);
  if (bVar7) {
    if ((__this->fields).Dead != false) {
      return;
    }
    __this_01 = Characters_Horse__get_Rider(__this,pMVar9);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = false;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (__this_01 == (Characters_Human_o *)0x0) goto label_05bf2da0;
      bVar7 = (__this_01->fields)._state != 0;
    }
    pUVar2 = (__this->fields).Cache;
    if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar3 = (pUVar2->fields).Rigidbody, pUVar3 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05bf2da0;
    UVar12 = UnityEngine_Rigidbody__get_linearVelocity(pUVar3,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar11 = UVar12.fields.z * UVar12.fields.z +
             UVar12.fields.y * UVar12.fields.y + UVar12.fields.x * UVar12.fields.x;
    if (fVar11 < 0.0) {
      fVar11 = sqrtf(fVar11);
      if (fVar11 <= 8.0) goto label_05bf2971;
label_05bf2ab9:
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_HorseAnimations->static_fields->Run,
                 0.1,0.0,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((!bVar7) && (bVar8)) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        if (__this_01 == (Characters_Human_o *)0x0) goto label_05bf2da0;
        pSVar10 = TypeInfo_Characters_HumanAnimations->static_fields->HorseRun;
label_05bf2c5d:
        Characters_BaseCharacter__CrossFadeIfNotPlaying
                  ((Characters_BaseCharacter_o *)__this_01,pSVar10,0.1,0.0,(MethodInfo *)0x0);
      }
    }
    else {
      if (8.0 < SQRT(fVar11)) goto label_05bf2ab9;
label_05bf2971:
      pUVar2 = (__this->fields).Cache;
      if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar3 = (pUVar2->fields).Rigidbody, pUVar3 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05bf2da0;
      pMVar9 = (MethodInfo *)0x0;
      UVar12 = UnityEngine_Rigidbody__get_linearVelocity(pUVar3,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar11 = UVar12.fields.z * UVar12.fields.z +
               UVar12.fields.y * UVar12.fields.y + UVar12.fields.x * UVar12.fields.x;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      if (fVar11 <= 1.0) {
        Characters_Horse__UpdateIdle(__this,pMVar9);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((!bVar7) && (bVar8)) {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          if (__this_01 == (Characters_Human_o *)0x0) goto label_05bf2da0;
          Characters_BaseCharacter__CrossFadeIfNotPlaying
                    ((Characters_BaseCharacter_o *)__this_01,
                     TypeInfo_Characters_HumanAnimations->static_fields->HorseIdle,0.1,0.0,(MethodInfo *)0x0);
        }
        goto label_05bf2c7d;
      }
      if ((((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_HorseAnimations->static_fields->Walk
                 ,0.1,0.0,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((!bVar7) && (bVar8)) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        if (__this_01 == (Characters_Human_o *)0x0) goto label_05bf2da0;
        pSVar10 = TypeInfo_Characters_HumanAnimations->static_fields->HorseIdle;
        goto label_05bf2c5d;
      }
    }
    (__this->fields)._idleTimeLeft = 0.0;
  }
label_05bf2c7d:
  __this_00 = (__this->fields).Animation;
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_05bf2da0;
  bVar7 = Characters_AnimationHandler__IsPlaying
                    (__this_00,TypeInfo_Characters_HorseAnimations->static_fields->Run,(MethodInfo *)0x0);
  pCVar4 = (__this->fields).HorseCache;
  if (bVar7) {
    if (pCVar4 == (Characters_HorseComponentCache_o *)0x0) goto label_05bf2da0;
    system = (pCVar4->fields).Dust;
    if ((__this->fields).Grounded == false) goto label_05bf2cf9;
    bVar8 = (__this->fields).EffectsEnabled != false;
    bVar7 = true;
  }
  else {
    if (pCVar4 == (Characters_HorseComponentCache_o *)0x0) goto label_05bf2da0;
    system = (pCVar4->fields).Dust;
label_05bf2cf9:
    bVar7 = false;
    bVar8 = false;
  }
  Characters_BaseCharacter__ToggleParticles
            ((Characters_BaseCharacter_o *)__this,system,bVar8,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
    pSVar10 = TypeInfo_Characters_HorseSounds->static_fields->Run;
  }
  else {
    pSVar10 = TypeInfo_Characters_HorseSounds->static_fields->Run;
  }
  if (bVar7) {
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar5 == (Settings_SoundSettings_o *)0x0) ||
       (pSVar6 = (pSVar5->fields).HorseSoundEffect, pSVar6 == (Settings_BoolSetting_o *)0x0)) {
label_05bf2da0:
      ThrowNullReferenceException();
    }
    bVar7 = (pSVar6->fields)._value != false;
  }
  else {
    bVar7 = false;
  }
  (*(__this->klass->vtable)._111_ToggleSoundLocal.methodPtr)
            (__this,pSVar10,bVar7,(__this->klass->vtable)._111_ToggleSoundLocal.method);
  return;
}


// Characters.Horse$$CheckGround
// il2cpp: void Characters_Horse__CheckGround (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf2db0

void Characters_Horse__CheckGround(Characters_Horse_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  bool bVar4;
  int32_t layerMask;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o direction;
  UnityEngine_LayerMask_o aUStack_80 [2];
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  UnityEngine_RaycastHit_o UStack_48;
  
  if (Il2CppMethodInitialized_07547620 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07547620 = '\x01';
  }
  UStack_48.fields.m_UV.fields.x = 0.0;
  UStack_48.fields.m_UV.fields.y = 0.0;
  UStack_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_48.fields.m_Normal.fields.y = 0.0;
  UStack_48.fields.m_Normal.fields.z = 0.0;
  UStack_48.fields.m_FaceID = 0;
  UStack_48.fields.m_Distance = 0.0;
  UStack_48.fields.m_Point.fields.x = 0.0;
  UStack_48.fields.m_Point.fields.y = 0.0;
  UStack_48.fields.m_Point.fields.z = 0.0;
  UStack_48.fields.m_Normal.fields.x = 0.0;
  (__this->fields).JustGrounded = false;
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar3->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar10 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  auStack_78._0_4_ = UVar10.fields.x;
  auStack_78._4_4_ = UVar10.fields.y;
  fStack_70 = extraout_XMM0_Dc;
  fStack_6c = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    auStack_78 = (undefined1  [8])UVar10.fields._0_8_;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar5->upVector).fields.x;
  uVar2 = (pUVar5->upVector).fields.y;
  uStack_58._0_4_ = (pUVar5->upVector).fields.z * 0.8;
  fStack_68 = (float)uVar1 * 0.8;
  fVar7 = (float)uVar2 * 0.8;
  fVar8 = 0.0;
  fVar9 = 0.0;
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    fStack_64 = (float)uVar2 * 0.8;
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar7 = fStack_64;
    fVar8 = fStack_60;
    fVar9 = fStack_5c;
  }
  auStack_78._4_4_ = (float)auStack_78._4_4_ + fVar7;
  auStack_78._0_4_ = (float)auStack_78._0_4_ + fStack_68;
  fStack_70 = fStack_70 + fVar8;
  fStack_6c = fStack_6c + fVar9;
  UVar10.fields.z = UVar10.fields.z + (float)uStack_58;
  uStack_58._0_4_ = (pUVar5->downVector).fields.x;
  uStack_58._4_4_ = (pUVar5->downVector).fields.y;
  uStack_50 = 0;
  fStack_68 = (pUVar5->downVector).fields.z;
  aUStack_80[0] =
       (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                 (__this,(__this->klass->vtable)._67_get_GroundMask.method);
  layerMask = UnityEngine_LayerMask__get_value(aUStack_80,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  bVar6 = false;
  UVar10.fields.x = (float)auStack_78._0_4_;
  UVar10.fields.y = (float)auStack_78._4_4_;
  direction.fields.z = fStack_68;
  direction.fields.x = (float)uStack_58;
  direction.fields.y = (float)uStack_58._4_4_;
  bVar4 = UnityEngine_Physics__SphereCast_69daf70
                    (UVar10,0.6,direction,&UStack_48,0.8,layerMask,(MethodInfo *)0x0);
  if (bVar4) {
    if ((__this->fields).Grounded != false) {
      return;
    }
    (__this->fields).JustGrounded = true;
    bVar6 = true;
  }
  (__this->fields).Grounded = bVar6;
  return;
}


// Characters.Horse$$.ctor
// il2cpp: void Characters_Horse___ctor (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf2f90

void Characters_Horse___ctor(Characters_Horse_o *__this,MethodInfo *method)

{
  Controllers_HorseController_o *__this_00;
  
  if (Il2CppMethodInitialized_07547621 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HorseController);
    Il2CppMethodInitialized_07547621 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HorseController);
  Controllers_HorseController___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._Controller_k__BackingField = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Controller_k__BackingField);
  (__this->fields)._DespawnWithAssignedHuman_k__BackingField = true;
  (__this->fields)._RecallEnabled_k__BackingField = true;
  (__this->fields).WalkSpeed = 15.0;
  (__this->fields).RunCloseSpeed = 20.0;
  (__this->fields).JumpForce = 30.0;
  (__this->fields).MaxTilt = 45.0;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.Horse$$<>n__0
// il2cpp: System_Collections_IEnumerator_o* Characters_Horse____n__0 (Characters_Horse_o* __this, const MethodInfo* method);
// 0x5bf3010

System_Collections_IEnumerator_o * Characters_Horse____n__0(Characters_Horse_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = Characters_BaseCharacter__WaitAndDie((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


