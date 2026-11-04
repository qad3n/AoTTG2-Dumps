// Type: Characters.Horse
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/Horse.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Horse.cs
// --------------------------------

// Characters.Horse.<WaitAndDie>d__61$$.ctor
// il2cpp: void Characters_Horse__WaitAndDie_d__61___ctor (Characters_Horse__WaitAndDie_d__61_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_Horse__WaitAndDie_d__61___ctor(Characters_Horse__WaitAndDie_d__61_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.Horse.<WaitAndDie>d__61$$System.IDisposable.Dispose
// il2cpp: void Characters_Horse__WaitAndDie_d__61__System_IDisposable_Dispose (Characters_Horse__WaitAndDie_d__61_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_Horse__WaitAndDie_d__61__System_IDisposable_Dispose(Characters_Horse__WaitAndDie_d__61_o* __this, MethodInfo* method)

{
  return;
}


// Characters.Horse.<WaitAndDie>d__61$$MoveNext
// il2cpp: bool Characters_Horse__WaitAndDie_d__61__MoveNext (Characters_Horse__WaitAndDie_d__61_o* __this, const MethodInfo* method);
// 0x182160b40

bool Characters_Horse__WaitAndDie_d__61__MoveNext
               (Characters_Horse__WaitAndDie_d__61_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  Characters_Horse_o *__this_00;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *name;
  bool bVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Quaternion_o *pUVar8;
  Il2CppObject *value;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184346c52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184346c52 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
    }
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (Characters_Horse_o *)0x0) {
    bVar6 = (*(((Characters_BaseCharacter_c *)__this_00->klass)->vtable)._74_IsMine.methodPtr)
                      (__this_00,(((Characters_BaseCharacter_c *)__this_00->klass)->vtable)._74_IsMine.method)
    ;
    if (!bVar6) {
      return false;
    }
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pUVar4 = (__this_00->fields).Cache;
    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      name = TypeInfo_Effects_EffectPrefabs->static_fields->Blood2;
      pUVar7 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)&local_48,pUVar5,(MethodInfo *)0x0);
      pUVar4 = (__this_00->fields).Cache;
      if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        fVar3 = (pUVar7->fields).z;
        uVar1._0_4_ = (pUVar7->fields).x;
        uVar1._4_4_ = (pUVar7->fields).y;
        pUVar8 = UnityEngine_Transform__get_rotation
                           ((UnityEngine_Quaternion_o *)local_38,pUVar5,(MethodInfo *)0x0);
        local_38[0].x = (pUVar8->fields).x;
        local_38[0].y = (pUVar8->fields).y;
        local_38[0].z = (pUVar8->fields).z;
        local_38[0].w = (pUVar8->fields).w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        local_48._0_8_ = uVar1;
        local_48.z = fVar3;
        Effects_EffectSpawner__Spawn
                  (name,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)local_38,1.0,true,
                   (System_Object_array *)0x0,(MethodInfo *)0x0);
        value = (Il2CppObject *)
                Characters_BaseCharacter__WaitAndDie
                          ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
        (__this->fields).__2__current = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse.<WaitAndDie>d__61$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_Horse__WaitAndDie_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_Horse__WaitAndDie_d__61_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_Horse__WaitAndDie_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_Horse__WaitAndDie_d__61_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.Horse.<WaitAndDie>d__61$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_Horse__WaitAndDie_d__61__System_Collections_IEnumerator_Reset (Characters_Horse__WaitAndDie_d__61_o* __this, const MethodInfo* method);
// 0x182160d10

void Characters_Horse__WaitAndDie_d__61__System_Collections_IEnumerator_Reset
               (Characters_Horse__WaitAndDie_d__61_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_Horse_WaitAndDie_d__61_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.Horse.<WaitAndDie>d__61$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_Horse__WaitAndDie_d__61__System_Collections_IEnumerator_get_Current (Characters_Horse__WaitAndDie_d__61_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_Horse__WaitAndDie_d__61__System_Collections_IEnumerator_get_Current(Characters_Horse__WaitAndDie_d__61_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.Horse$$get_Controller
// il2cpp: Controllers_HorseController_o* Characters_Horse__get_Controller (Characters_Horse_o* __this, const MethodInfo* method);
// 0x181bd4c80

Controllers_HorseController_o*
Characters_Horse__get_Controller(Characters_Horse_o* __this, MethodInfo* method)

{
  return (__this->fields)._Controller_k__BackingField;
}


// Characters.Horse$$get_AssignedHuman
// il2cpp: Characters_Human_o* Characters_Horse__get_AssignedHuman (Characters_Horse_o* __this, const MethodInfo* method);
// 0x181bd4f90

Characters_Human_o*
Characters_Horse__get_AssignedHuman(Characters_Horse_o* __this, MethodInfo* method)

{
  return (Photon_Voice_AudioUtil_ILevelMeter_o *)(__this->fields)._assignedHuman;
}


// Characters.Horse$$get_Rider
// il2cpp: Characters_Human_o* Characters_Horse__get_Rider (Characters_Horse_o* __this, const MethodInfo* method);
// 0x182150200

Characters_Human_o * Characters_Horse__get_Rider(Characters_Horse_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346c42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c42 = '\x01';
  }
  pCVar1 = (__this->fields)._assignedHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._assignedHuman;
    if (pCVar1 == (Characters_Human_o *)0x0) {
label_1821502c3:
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields).Dead == false) {
      x = (pCVar1->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (bVar2) {
        pCVar1 = (__this->fields)._assignedHuman;
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_1821502c3;
        if ((pCVar1->fields).MountState == 1) {
          return pCVar1;
        }
      }
    }
  }
  return (Characters_Human_o *)0x0;
}


// Characters.Horse$$get_OrderTarget
// il2cpp: Characters_BaseCharacter_o* Characters_Horse__get_OrderTarget (Characters_Horse_o* __this, const MethodInfo* method);
// 0x182150140

Characters_BaseCharacter_o * Characters_Horse__get_OrderTarget(Characters_Horse_o *__this,MethodInfo *method)

{
  int32_t viewID;
  Controllers_HorseController_o *pCVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *pCVar3;
  
  pCVar1 = (__this->fields)._Controller_k__BackingField;
  if (pCVar1 != (Controllers_HorseController_o *)0x0) {
    viewID = (pCVar1->fields)._TargetViewId_k__BackingField;
    if (Il2CppMethodInitialized_184346c46 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184346c46 = '\x01';
    }
    if (viewID < 1) {
      x = (Photon_Pun_PhotonView_o *)0x0;
    }
    else {
      x = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return (Characters_BaseCharacter_o *)0x0;
    }
    if (x != (Photon_Pun_PhotonView_o *)0x0) {
      pCVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)x,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
      return pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$get_DespawnWithAssignedHuman
// il2cpp: bool Characters_Horse__get_DespawnWithAssignedHuman (Characters_Horse_o* __this, const MethodInfo* method);
// 0x181c3f920

bool
Characters_Horse__get_DespawnWithAssignedHuman(Characters_Horse_o* __this, MethodInfo* method)

{
  return (__this->fields)._DespawnWithAssignedHuman_k__BackingField;
}


// Characters.Horse$$set_DespawnWithAssignedHuman
// il2cpp: void Characters_Horse__set_DespawnWithAssignedHuman (Characters_Horse_o* __this, bool value, const MethodInfo* method);
// 0x181c3fa40

void
Characters_Horse__set_DespawnWithAssignedHuman(Characters_Horse_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._DespawnWithAssignedHuman_k__BackingField = value;
  return;
}


// Characters.Horse$$get_RecallEnabled
// il2cpp: bool Characters_Horse__get_RecallEnabled (Characters_Horse_o* __this, const MethodInfo* method);
// 0x1821501f0

bool Characters_Horse__get_RecallEnabled(Characters_Horse_o *__this,MethodInfo *method)

{
  return (__this->fields)._RecallEnabled_k__BackingField;
}


// Characters.Horse$$set_RecallEnabled
// il2cpp: void Characters_Horse__set_RecallEnabled (Characters_Horse_o* __this, bool value, const MethodInfo* method);
// 0x1821503d0

void Characters_Horse__set_RecallEnabled(Characters_Horse_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._RecallEnabled_k__BackingField = value;
  return;
}


// Characters.Horse$$get_RunSpeed
// il2cpp: float Characters_Horse__get_RunSpeed (Characters_Horse_o* __this, const MethodInfo* method);
// 0x1821502d0

float Characters_Horse__get_RunSpeed(Characters_Horse_o *__this,MethodInfo *method)

{
  System_Nullable_float__Fields SVar1;
  Characters_Human_o *pCVar2;
  Characters_HumanStats_o *pCVar3;
  bool bVar4;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184346c43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c43 = '\x01';
  }
  SVar1 = (__this->fields)._runSpeed.fields;
  if (SVar1.hasValue != false) {
    fStackX_c = SVar1.value;
    return fStackX_c;
  }
  pCVar2 = (__this->fields)._assignedHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar2 = (__this->fields)._assignedHuman;
    if ((pCVar2 != (Characters_Human_o *)0x0) &&
       (pCVar3 = (pCVar2->fields).Stats, pCVar3 != (Characters_HumanStats_o *)0x0)) {
      return (pCVar3->fields).HorseSpeed;
    }
    ThrowNullReferenceException();
  }
  return 50.0;
}


// Characters.Horse$$set_RunSpeed
// il2cpp: void Characters_Horse__set_RunSpeed (Characters_Horse_o* __this, float value, const MethodInfo* method);
// 0x1821503e0

void Characters_Horse__set_RunSpeed(Characters_Horse_o *__this,float value,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_float__Fields local_res20;
  
  if (Il2CppMethodInitialized_184346c44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_184346c44 = '\x01';
  }
  bVar1 = Controllers_HorseController__IsFinite(value,(MethodInfo *)0x0);
  if ((bVar1) && (0.0 < value)) {
    local_res20.hasValue = false;
    local_res20._1_3_ = 0;
    local_res20.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_res20,value,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields)._runSpeed.fields = local_res20;
  }
  return;
}


// Characters.Horse$$get_MaxFootstepDistance
// il2cpp: float Characters_Horse__get_MaxFootstepDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x181da8af0

float
Characters_Horse__get_MaxFootstepDistance(Characters_Horse_o* __this, MethodInfo* method)

{
  return 100.0;
}


// Characters.Horse$$get_MaxSoundDistance
// il2cpp: float Characters_Horse__get_MaxSoundDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x181da8af0

float
Characters_Horse__get_MaxSoundDistance(Characters_Horse_o* __this, MethodInfo* method)

{
  return 100.0;
}


// Characters.Horse$$get_LODQualityMediumDistance
// il2cpp: float Characters_Horse__get_LODQualityMediumDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x181da8af0

float
Characters_Horse__get_LODQualityMediumDistance(Characters_Horse_o* __this, MethodInfo* method)

{
  return 100.0;
}


// Characters.Horse$$get_LODQualityLowDistance
// il2cpp: float Characters_Horse__get_LODQualityLowDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18210fba0

float
Characters_Horse__get_LODQualityLowDistance(Characters_Horse_o* __this, MethodInfo* method)

{
  return 200.0;
}


// Characters.Horse$$get_CullShadowsDistance
// il2cpp: float Characters_Horse__get_CullShadowsDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x181da8b00

float
Characters_Horse__get_CullShadowsDistance(Characters_Horse_o* __this, MethodInfo* method)

{
  return 400.0;
}


// Characters.Horse$$get_CullRendererDistance
// il2cpp: float Characters_Horse__get_CullRendererDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x1821500a0

float
Characters_Horse__get_CullRendererDistance(Characters_Horse_o* __this, MethodInfo* method)

{
  return 600.0;
}


// Characters.Horse$$get_CullEffectsDistance
// il2cpp: float Characters_Horse__get_CullEffectsDistance (Characters_Horse_o* __this, const MethodInfo* method);
// 0x1821500a0

float
Characters_Horse__get_CullEffectsDistance(Characters_Horse_o* __this, MethodInfo* method)

{
  return 600.0;
}


// Characters.Horse$$get_FollowingEnabled
// il2cpp: bool Characters_Horse__get_FollowingEnabled (Characters_Horse_o* __this, const MethodInfo* method);
// 0x1821500b0

bool Characters_Horse__get_FollowingEnabled(Characters_Horse_o *__this,MethodInfo *method)

{
  Controllers_HorseController_o *pCVar1;
  
  pCVar1 = (__this->fields)._Controller_k__BackingField;
  if (pCVar1 != (Controllers_HorseController_o *)0x0) {
    return (pCVar1->fields)._Order_k__BackingField == 1;
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$set_FollowingEnabled
// il2cpp: void Characters_Horse__set_FollowingEnabled (Characters_Horse_o* __this, bool value, const MethodInfo* method);
// 0x1821503a0

void Characters_Horse__set_FollowingEnabled(Characters_Horse_o *__this,bool value,MethodInfo *method)

{
  if (!value) {
    Characters_Horse__Stay(__this,(MethodInfo *)0x0);
    return;
  }
  Characters_Horse__Follow
            (__this,(Characters_BaseCharacter_o *)(__this->fields)._assignedHuman,5.0,(MethodInfo *)0x0);
  return;
}


// Characters.Horse$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_Horse__get_Gravity (Characters_Horse_o* __this, const MethodInfo* method);
// 0x1821500e0

UnityEngine_Vector3_o *
Characters_Horse__get_Gravity
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_Horse_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  (__return_storage_ptr__->fields).x = (pUVar3->downVector).fields.x * 30.0;
  uVar1 = (pUVar3->downVector).fields.y;
  uVar2 = (pUVar3->downVector).fields.z;
  (__return_storage_ptr__->fields).y = (float)uVar1 * 30.0;
  (__return_storage_ptr__->fields).z = (float)uVar2 * 30.0;
  return __return_storage_ptr__;
}


// Characters.Horse$$Init
// il2cpp: void Characters_Horse__Init (Characters_Horse_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x18214e4b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18214e500: mov rax, qword ptr [rip + 0x1f43e11]  ; "Horse"
// asm:   0x18214e507: jmp 0x18214e51c

void Characters_Horse__Init(Characters_Horse_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346c45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    il2cpp_codegen_initialize_runtime_metadata(&"'s horse");
    Il2CppMethodInitialized_184346c45 = '\x01';
  }
  if (human != (Characters_Human_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace((human->fields).VisibleName,(MethodInfo *)0x0);
    value = "Horse";
    if (!bVar1) {
      value = System_String__Concat_1969e50
                        ((human->fields).RichTextName,"'s horse",(MethodInfo *)0x0);
    }
    if (__this != (Characters_Horse_o *)0x0) {
      Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,value,(MethodInfo *)0x0);
      Characters_BaseCharacter__Init
                ((Characters_BaseCharacter_o *)__this,true,(human->fields).Team,(MethodInfo *)0x0);
      (__this->fields)._assignedHuman = human;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._assignedHuman,human);
      (__this->fields)._DespawnWithAssignedHuman_k__BackingField = true;
      (__this->fields)._RecallEnabled_k__BackingField = true;
      Characters_Horse__Follow(__this,(Characters_BaseCharacter_o *)human,5.0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$Init
// il2cpp: void Characters_Horse__Init (Characters_Horse_o* __this, bool ai, System_String_o* team, const MethodInfo* method);
// 0x18214e590

void Characters_Horse__Init_214e590
               (Characters_Horse_o *__this,bool ai,System_String_o *team,MethodInfo *method)

{
  Characters_BaseCharacter__Init((Characters_BaseCharacter_o *)__this,true,team,(MethodInfo *)0x0);
  (__this->fields)._DespawnWithAssignedHuman_k__BackingField = false;
  (__this->fields)._RecallEnabled_k__BackingField = false;
  Characters_Horse__Stay(__this,(MethodInfo *)0x0);
  return;
}


// Characters.Horse$$ResolveCharacter
// il2cpp: Characters_BaseCharacter_o* Characters_Horse__ResolveCharacter (int32_t viewId, const MethodInfo* method);
// 0x18214f3d0

Characters_BaseCharacter_o * Characters_Horse__ResolveCharacter(int32_t viewId,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346c46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c46 = '\x01';
  }
  if (viewId < 1) {
    x = (Photon_Pun_PhotonView_o *)0x0;
  }
  else {
    x = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (Photon_Pun_PhotonView_o *)0x0) {
      pCVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)x,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
      return pCVar2;
    }
    ThrowNullReferenceException();
  }
  return (Characters_BaseCharacter_o *)0x0;
}


// Characters.Horse$$Follow
// il2cpp: bool Characters_Horse__Follow (Characters_Horse_o* __this, Characters_BaseCharacter_o* target, float distance, const MethodInfo* method);
// 0x18214e2f0

bool Characters_Horse__Follow
               (Characters_Horse_o *__this,Characters_BaseCharacter_o *target,float distance,
               MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_28[0].x = (pUVar1->zeroVector).fields.x;
  local_28[0].y = (pUVar1->zeroVector).fields.y;
  local_28[0].z = (pUVar1->zeroVector).fields.z;
  bVar2 = Characters_Horse__IssueOrder
                    (__this,1,target,(UnityEngine_Vector3_o *)local_28,distance,(MethodInfo *)0x0);
  return bVar2;
}


// Characters.Horse$$ComeTo
// il2cpp: bool Characters_Horse__ComeTo (Characters_Horse_o* __this, Characters_BaseCharacter_o* target, float distance, const MethodInfo* method);
// 0x18214d500

bool Characters_Horse__ComeTo
               (Characters_Horse_o *__this,Characters_BaseCharacter_o *target,float distance,
               MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_28[0].x = (pUVar1->zeroVector).fields.x;
  local_28[0].y = (pUVar1->zeroVector).fields.y;
  local_28[0].z = (pUVar1->zeroVector).fields.z;
  bVar2 = Characters_Horse__IssueOrder
                    (__this,2,target,(UnityEngine_Vector3_o *)local_28,distance,(MethodInfo *)0x0);
  return bVar2;
}


// Characters.Horse$$MoveTo
// il2cpp: bool Characters_Horse__MoveTo (Characters_Horse_o* __this, UnityEngine_Vector3_o position, float distance, const MethodInfo* method);
// 0x18214edf0

bool Characters_Horse__MoveTo
               (Characters_Horse_o *__this,UnityEngine_Vector3_o *position,float distance,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_Fields local_18 [2];
  
  local_18[0].x = (position->fields).x;
  local_18[0].y = (position->fields).y;
  local_18[0].z = (position->fields).z;
  bVar1 = Characters_Horse__IssueOrder
                    (__this,3,(Characters_BaseCharacter_o *)0x0,(UnityEngine_Vector3_o *)local_18,distance,
                     (MethodInfo *)0x0);
  return bVar1;
}


// Characters.Horse$$Stay
// il2cpp: bool Characters_Horse__Stay (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214f4b0

bool Characters_Horse__Stay(Characters_Horse_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_18.x = (pUVar1->zeroVector).fields.x;
  local_18.y = (pUVar1->zeroVector).fields.y;
  local_18.z = (pUVar1->zeroVector).fields.z;
  bVar2 = Characters_Horse__IssueOrder
                    (__this,0,(Characters_BaseCharacter_o *)0x0,(UnityEngine_Vector3_o *)&local_18,5.0,
                     (MethodInfo *)0x0);
  return bVar2;
}


// Characters.Horse$$IssueOrder
// il2cpp: bool Characters_Horse__IssueOrder (Characters_Horse_o* __this, int32_t order, Characters_BaseCharacter_o* target, UnityEngine_Vector3_o position, float distance, const MethodInfo* method);
// 0x18214e5c0

bool Characters_Horse__IssueOrder
               (Characters_Horse_o *__this,int32_t order,Characters_BaseCharacter_o *target,
               UnityEngine_Vector3_o *position,float distance,MethodInfo *method)

{
  int iVar1;
  Controllers_HorseController_o *pCVar2;
  bool bVar3;
  bool bVar4;
  bool mounted;
  Photon_Pun_PhotonView_o *pPVar5;
  Characters_Human_o *pCVar6;
  int32_t targetViewId;
  UnityEngine_Vector3_Fields local_38;
  
  if (Il2CppMethodInitialized_184346c47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c47 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) goto label_18214e677;
  if (target == (Characters_BaseCharacter_o *)0x0) goto label_18214e7be;
  if ((target->fields).Dead == false) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (!bVar3) goto label_18214e677;
    pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)target,(MethodInfo *)0x0);
    if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto label_18214e7be;
    targetViewId = (pPVar5->fields).viewIdField;
  }
  else {
label_18214e677:
    targetViewId = 0;
  }
  pCVar2 = (__this->fields)._Controller_k__BackingField;
  if (pCVar2 != (Controllers_HorseController_o *)0x0) {
    iVar1 = (pCVar2->fields)._Revision_k__BackingField;
    bVar4 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    bVar3 = (__this->fields).Dead;
    pCVar6 = Characters_Horse__get_Rider(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    local_38.z = (position->fields).z;
    local_38.x = (position->fields).x;
    local_38.y = (position->fields).y;
    mounted = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    bVar3 = Controllers_HorseController__TrySetOrder
                      (pCVar2,order,targetViewId,(UnityEngine_Vector3_o *)&local_38,distance,bVar4,
                       bVar3 == false,mounted,(MethodInfo *)0x0);
    if (bVar3) {
      pCVar2 = (__this->fields)._Controller_k__BackingField;
      if (pCVar2 == (Controllers_HorseController_o *)0x0) goto label_18214e7be;
      if (iVar1 != (pCVar2->fields)._Revision_k__BackingField) {
        pCVar6 = Characters_Horse__get_Rider(__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          (__this->fields).State = 0;
        }
      }
    }
    return bVar3;
  }
label_18214e7be:
  ThrowNullReferenceException();
}


// Characters.Horse$$CreateCache
// il2cpp: void Characters_Horse__CreateCache (Characters_Horse_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x18214d590

void Characters_Horse__CreateCache
               (Characters_Horse_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_HorseComponentCache_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_ParticleSystem_o *value;
  
  if (Il2CppMethodInitialized_184346c48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseComponentCache);
    Il2CppMethodInitialized_184346c48 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HorseComponentCache);
  if (Il2CppMethodInitialized_184346c54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&"Horse/Prefabs/HorseSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Dust");
    Il2CppMethodInitialized_184346c54 = '\x01';
  }
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this_00,owner,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(owner,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Dust",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        value = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar1,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
        (__this_00->fields).Dust = value;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).Dust,value);
        Utility_BaseComponentCache__LoadAudio
                  ((Utility_BaseComponentCache_o *)__this_00,"Horse/Prefabs/HorseSounds",
                   (__this_00->fields).Transform,(MethodInfo *)0x0);
        (__this->fields).HorseCache = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).HorseCache,__this_00);
        Characters_BaseCharacter__CreateCache
                  ((Characters_BaseCharacter_o *)__this,
                   (Utility_BaseComponentCache_o *)(__this->fields).HorseCache,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$Jump
// il2cpp: void Characters_Horse__Jump (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214e7d0

void Characters_Horse__Jump(Characters_Horse_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar4;
  bool bVar5;
  UnityEngine_Vector3_Fields local_18;
  
  bVar5 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if ((((!bVar5) || ((__this->fields).Dead != false)) || (0.0 < (__this->fields)._jumpCooldownLeft)) ||
     ((__this->fields).Grounded == false)) {
    return;
  }
  pUVar3 = (__this->fields).Cache;
  if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar3->fields).Rigidbody;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    local_18.z = (__this->fields).JumpForce;
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar1 = (pUVar4->upVector).fields.x;
    uVar2 = (pUVar4->upVector).fields.y;
    local_18.x = (float)uVar1 * local_18.z;
    local_18.y = (float)uVar2 * local_18.z;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      local_18.z = local_18.z * (pUVar4->upVector).fields.z;
      UnityEngine_Rigidbody__AddForce(__this_00,(UnityEngine_Vector3_o *)&local_18,2,(MethodInfo *)0x0);
      (__this->fields)._jumpCooldownLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$ValidTarget
// il2cpp: bool Characters_Horse__ValidTarget (Characters_Horse_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_Horse__ValidTarget(Characters_Horse_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.Horse$$GetHitRPC
// il2cpp: void Characters_Horse__GetHitRPC (Characters_Horse_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x18214e380

void Characters_Horse__GetHitRPC
               (Characters_Horse_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  
  if (Il2CppMethodInitialized_184346c49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c49 = '\x01';
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
      if (viewId == (pPVar3->fields).viewIdField) {
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
// 0x18214ff90

System_Collections_IEnumerator_o * Characters_Horse__WaitAndDie(Characters_Horse_o *__this,MethodInfo *method)

{
  Characters_Horse__WaitAndDie_d__61_o *__this_00;
  
  if (Il2CppMethodInitialized_184346c4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse_WaitAndDie_d__61);
    Il2CppMethodInitialized_184346c4a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_Horse_WaitAndDie_d__61);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.Horse$$Start
// il2cpp: void Characters_Horse__Start (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214f470

void Characters_Horse__Start(Characters_Horse_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  
  __this_00 = (__this->fields)._inGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    GameManagers_InGameManager__RegisterCharacter
              (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    Characters_BaseCharacter__Start((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$Awake
// il2cpp: void Characters_Horse__Awake (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214d210

void Characters_Horse__Awake(Characters_Horse_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346c4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    Il2CppMethodInitialized_184346c4b = '\x01';
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
  }
  return;
}


// Characters.Horse$$ToggleDust
// il2cpp: void Characters_Horse__ToggleDust (Characters_Horse_o* __this, bool toggle, const MethodInfo* method);
// 0x18214f530

void Characters_Horse__ToggleDust(Characters_Horse_o *__this,bool toggle,MethodInfo *method)

{
  Characters_HorseComponentCache_o *pCVar1;
  char cVar2;
  
  pCVar1 = (__this->fields).HorseCache;
  if (pCVar1 != (Characters_HorseComponentCache_o *)0x0) {
    if (toggle) {
      cVar2 = (__this->fields).EffectsEnabled;
    }
    else {
      cVar2 = '\0';
    }
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).Dust,cVar2 != '\0',(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$RecallTo
// il2cpp: void Characters_Horse__RecallTo (Characters_Horse_o* __this, Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x18214ee30

void Characters_Horse__RecallTo
               (Characters_Horse_o *__this,Characters_BaseCharacter_o *target,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Rigidbody_o *pUVar11;
  bool bVar12;
  int32_t iVar13;
  UnityEngine_LayerMask_o UVar14;
  UnityEngine_Vector3_o *pUVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o local_f8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_RaycastHit_o local_d8 [4];
  
  if (Il2CppMethodInitialized_184346c4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346c4c = '\x01';
  }
  local_d8[0].fields.m_Normal.fields.y = 0.0;
  local_d8[0].fields.m_Normal.fields.z = 0.0;
  local_d8[0].fields.m_FaceID = 0;
  local_d8[0].fields.m_Point.fields.x = 0.0;
  local_d8[0].fields.m_Point.fields.y = 0.0;
  local_d8[0].fields.m_Point.fields.z = 0.0;
  local_d8[0].fields.m_Normal.fields.x = 0.0;
  local_d8[0].fields.m_Distance = 0.0;
  local_d8[0].fields.m_UV.fields.x = 0.0;
  local_d8[0].fields.m_UV.fields.y = 0.0;
  local_d8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  if (((target == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar8 = (target->fields).Cache, pUVar8 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0)) {
label_18214f3bd:
    ThrowNullReferenceException();
  }
  pUVar15 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_e8,pUVar9,(MethodInfo *)0x0);
  fVar18 = (pUVar15->fields).x;
  fVar20 = (pUVar15->fields).y;
  fVar19 = (pUVar15->fields).z;
  if (Il2CppMethodInitialized_1843445b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_1843445b8 = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar1 = (pUVar10->rightVector).fields.x;
  fVar2 = (pUVar10->rightVector).fields.y;
  fVar3 = (pUVar10->rightVector).fields.z;
  fVar16 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433de5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5d = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar10->forwardVector).fields.x;
  fVar5 = (pUVar10->forwardVector).fields.y;
  fVar6 = (pUVar10->forwardVector).fields.z;
  fVar17 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
  fVar18 = fVar4 * fVar17 + fVar1 * fVar16 + fVar18;
  fVar19 = fVar6 * fVar17 + fVar3 * fVar16 + fVar19;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar1 = (pUVar10->upVector).fields.x;
  fVar3 = (pUVar10->upVector).fields.y;
  fVar4 = (pUVar10->upVector).fields.z;
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar7._0_4_ = (pUVar10->downVector).fields.x;
  uVar7._4_4_ = (pUVar10->downVector).fields.y;
  fVar6 = (pUVar10->downVector).fields.z;
  iVar13 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                     (__this,(__this->klass->vtable)._67_get_GroundMask.method);
  UVar14 = UnityEngine_LayerMask__op_Implicit(iVar13,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_f8.fields.x = fVar18 + fVar1;
  local_f8.fields.y = fVar5 * fVar17 + fVar2 * fVar16 + fVar20 + fVar3;
  local_f8.fields.z = fVar19 + fVar4;
  local_e8._0_8_ = uVar7;
  local_e8.z = fVar6;
  bVar12 = UnityEngine_Physics__Raycast_2fe5610
                     (&local_f8,(UnityEngine_Vector3_o *)&local_e8,local_d8,1000.0,
                      (int32_t)UVar14.fields.m_Mask,1,(MethodInfo *)0x0);
  if (bVar12) {
    pUVar15 = UnityEngine_RaycastHit__get_point((UnityEngine_Vector3_o *)&local_e8,local_d8,(MethodInfo *)0x0)
    ;
    fVar20 = (pUVar15->fields).y + 1.0;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar10->upVector).fields.x;
    fVar2 = (pUVar10->upVector).fields.y;
    fVar3 = (pUVar10->upVector).fields.z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar16 = (pUVar10->upVector).fields.x;
    fVar4 = (pUVar10->upVector).fields.y;
    fVar5 = (pUVar10->upVector).fields.z;
    iVar13 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                       (__this,(__this->klass->vtable)._67_get_GroundMask.method);
    UVar14 = UnityEngine_LayerMask__op_Implicit(iVar13,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_e8.y = fVar2 * 0.6 + fVar20;
    local_e8.x = fVar1 * 0.6 + fVar18;
    local_f8.fields.x = fVar16 * 1.4 + fVar18;
    local_f8.fields.y = fVar4 * 1.4 + fVar20;
    local_f8.fields.z = fVar5 * 1.4 + fVar19;
    local_e8.z = fVar3 * 0.6 + fVar19;
    bVar12 = UnityEngine_Physics__CheckCapsule
                       ((UnityEngine_Vector3_o *)&local_e8,&local_f8,0.6,(int32_t)UVar14.fields.m_Mask,1,
                        (MethodInfo *)0x0);
    if (!bVar12) {
      pUVar8 = (__this->fields).Cache;
      if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar11 = (pUVar8->fields).Rigidbody, pUVar11 != (UnityEngine_Rigidbody_o *)0x0)) {
        local_e8.y = fVar20;
        local_e8.x = fVar18;
        local_e8.z = fVar19;
        UnityEngine_Rigidbody__set_position(pUVar11,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
        pUVar8 = (__this->fields).Cache;
        if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar9 = (pUVar8->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
          local_e8.z = fVar19;
          UnityEngine_Transform__set_position(pUVar9,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
          pUVar8 = (__this->fields).Cache;
          if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar11 = (pUVar8->fields).Rigidbody;
            if (Il2CppMethodInitialized_18433dbea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbea = '\x01';
            }
            if (pUVar11 != (UnityEngine_Rigidbody_o *)0x0) {
              pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_e8.x = (pUVar10->zeroVector).fields.x;
              local_e8.y = (pUVar10->zeroVector).fields.y;
              local_e8.z = (pUVar10->zeroVector).fields.z;
              UnityEngine_Rigidbody__set_linearVelocity
                        (pUVar11,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_18214f3bd;
    }
  }
  return;
}


// Characters.Horse$$UpdateIdle
// il2cpp: void Characters_Horse__UpdateIdle (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214f580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18214f734: mov rdi, qword ptr [rsp + 0x60]

void Characters_Horse__UpdateIdle(Characters_Horse_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  System_String_o *sound;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184346c4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346c4d = '\x01';
  }
  fVar5 = (__this->fields)._idleTimeLeft;
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar5 = fVar5 - fVar4;
  (__this->fields)._idleTimeLeft = fVar5;
  if (fVar5 <= 0.0) {
    __this_00 = (__this->fields).Animation;
    if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    }
    if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
label_18214f921:
      ThrowNullReferenceException();
    }
    bVar3 = Characters_AnimationHandler__IsPlaying
                      (__this_00,TypeInfo_Characters_HorseAnimations->static_fields->Idle0,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_HorseAnimations->static_fields->Idle0,0.1,0.0,(MethodInfo *)0x0);
      fVar5 = UnityEngine_Random__Range(6.0,9.0,(MethodInfo *)0x0);
      (__this->fields)._idleTimeLeft = fVar5;
      return;
    }
    fVar5 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
    if (fVar5 < 0.25) {
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_Horse__IdleOneShot
                (__this,TypeInfo_Characters_HorseAnimations->static_fields->Idle1,(MethodInfo *)0x0);
      return;
    }
    if (fVar5 < 0.5) {
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_Horse__IdleOneShot
                (__this,TypeInfo_Characters_HorseAnimations->static_fields->Idle2,(MethodInfo *)0x0);
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).HorseSoundEffect, pSVar2 == (Settings_BoolSetting_o *)0x0))
      goto label_18214f921;
      if ((pSVar2->fields)._value == false) {
        return;
      }
      if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
      }
      sound = TypeInfo_Characters_HorseSounds->static_fields->Idle1;
    }
    else if (fVar5 < 0.75) {
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_Horse__IdleOneShot
                (__this,TypeInfo_Characters_HorseAnimations->static_fields->Idle3,(MethodInfo *)0x0);
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).HorseSoundEffect, pSVar2 == (Settings_BoolSetting_o *)0x0))
      goto label_18214f921;
      if ((pSVar2->fields)._value == false) {
        return;
      }
      if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
      }
      sound = TypeInfo_Characters_HorseSounds->static_fields->Idle2;
    }
    else {
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_Horse__IdleOneShot
                (__this,TypeInfo_Characters_HorseAnimations->static_fields->Crazy,(MethodInfo *)0x0);
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).HorseSoundEffect, pSVar2 == (Settings_BoolSetting_o *)0x0))
      goto label_18214f921;
      if ((pSVar2->fields)._value == false) {
        return;
      }
      if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
      }
      sound = TypeInfo_Characters_HorseSounds->static_fields->Idle3;
    }
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
  }
  return;
}


// Characters.Horse$$IdleOneShot
// il2cpp: void Characters_Horse__IdleOneShot (Characters_Horse_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x18214e450

void Characters_Horse__IdleOneShot(Characters_Horse_o *__this,System_String_o *animation,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    fVar1 = Characters_AnimationHandler__GetLength(__this_00,animation,(MethodInfo *)0x0);
    (__this->fields)._idleTimeLeft = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$Update
// il2cpp: void Characters_Horse__Update (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214f930
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18214fea3: xor r8d, r8d
// asm:   0x18214fea6: mov rdx, rbx
// asm:   0x18214fea9: mov rcx, rdi
// asm:   0x18214feac: call 0x18214ee30  ; Characters_Horse__RecallTo()
// asm:   0x18214feb1: jmp 0x18214fa7b

void Characters_Horse__Update(Characters_Horse_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int32_t viewID;
  Controllers_HorseController_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Rigidbody_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool mounted;
  bool bVar13;
  UnityEngine_GameObject_o *targetGo;
  Characters_Human_o *pCVar14;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *target;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Quaternion_o *pUVar16;
  int iVar17;
  float fVar18;
  float deltaTime;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Quaternion_Fields local_98;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_Fields local_78 [4];
  
  if (Il2CppMethodInitialized_184346c4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346c4e = '\x01';
  }
  bVar12 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar12) {
    return;
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  fVar19 = (__this->fields)._jumpCooldownLeft;
  fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._jumpCooldownLeft = fVar19 - fVar18;
  if ((__this->fields)._DespawnWithAssignedHuman_k__BackingField != false) {
    pCVar14 = (__this->fields)._assignedHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
label_18214fa4f:
      targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__Destroy_1d35aa0(targetGo,(MethodInfo *)0x0);
      return;
    }
    pCVar14 = (__this->fields)._assignedHuman;
    if (pCVar14 == (Characters_Human_o *)0x0) goto label_18214ff7e;
    if ((pCVar14->fields).Dead != false) goto label_18214fa4f;
  }
  pCVar14 = Characters_Horse__get_Rider(__this,(MethodInfo *)0x0);
  pCVar3 = (__this->fields)._Controller_k__BackingField;
  if (pCVar3 == (Controllers_HorseController_o *)0x0) goto label_18214ff7e;
  viewID = (pCVar3->fields)._TargetViewId_k__BackingField;
  if (Il2CppMethodInitialized_184346c46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c46 = '\x01';
  }
  if (viewID < 1) {
    x = (Photon_Pun_PhotonView_o *)0x0;
  }
  else {
    x = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    if (x == (Photon_Pun_PhotonView_o *)0x0) goto label_18214ff7e;
    target = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)x,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  }
  else {
    target = (Characters_BaseCharacter_o *)0x0;
  }
  pUVar4 = (__this->fields).Cache;
  if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_18214ff7e;
  pCVar3 = (__this->fields)._Controller_k__BackingField;
  pUVar15 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_88,pUVar5,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).Cache;
  if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar6 = (pUVar4->fields).Rigidbody, pUVar6 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18214ff7e;
  uVar1._0_4_ = (pUVar15->fields).x;
  uVar1._4_4_ = (pUVar15->fields).y;
  fVar19 = (pUVar15->fields).z;
  pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                      ((UnityEngine_Vector3_o *)&local_88,pUVar6,(MethodInfo *)0x0);
  uVar2._0_4_ = (pUVar15->fields).x;
  uVar2._4_4_ = (pUVar15->fields).y;
  fVar18 = (pUVar15->fields).z;
  bVar12 = (__this->fields).Grounded;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  mounted = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    if (target == (Characters_BaseCharacter_o *)0x0) goto label_18214ff7e;
    if ((target->fields).Dead != false) goto label_18214fc7b;
    pUVar4 = (target->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    pUVar15 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_88,pUVar5,(MethodInfo *)0x0)
    ;
    local_98.z = (pUVar15->fields).z;
    local_98.x = (pUVar15->fields).x;
    local_98.y = (pUVar15->fields).y;
    local_78[0].x = 0.0;
    local_78[0].y = 0.0;
    local_78[0].z = 0.0;
    local_78[0].w = 0.0;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)local_78,(UnityEngine_Vector3_o *)&local_98,
               (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
    fVar20 = local_78[0].x;
    fVar21 = local_78[0].y;
    fVar22 = local_78[0].z;
    fVar23 = local_78[0].w;
  }
  else {
label_18214fc7b:
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
  }
  bVar13 = (__this->fields)._RecallEnabled_k__BackingField;
  deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  if (pCVar3 != (Controllers_HorseController_o *)0x0) {
    local_88.z = fVar19;
    iVar17 = 0;
    local_78[0].y = fVar21;
    local_78[0].x = fVar20;
    local_78[0].w = fVar23;
    local_78[0].z = fVar22;
    local_98._0_8_ = uVar2;
    local_98.z = fVar18;
    local_88._0_8_ = uVar1;
    Controllers_HorseController__Tick
              (pCVar3,(UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_98,bVar12,mounted,
               (System_Nullable_Vector3__o *)local_78,bVar13,deltaTime,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      if (pCVar14 != (Characters_Human_o *)0x0) {
        if ((pCVar14->fields).HasDirection == false) {
          (__this->fields).State = 3;
        }
        else {
          pUVar4 = (__this->fields).Cache;
          if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar6 = (pUVar4->fields).Rigidbody, pUVar6 == (UnityEngine_Rigidbody_o *)0x0))
          goto label_18214ff7e;
          pUVar16 = UnityEngine_Rigidbody__get_rotation
                              ((UnityEngine_Quaternion_o *)local_78,pUVar6,(MethodInfo *)0x0);
          uVar10._0_4_ = (pUVar16->fields).x;
          uVar10._4_4_ = (pUVar16->fields).y;
          uVar11._0_4_ = (pUVar16->fields).z;
          uVar11._4_4_ = (pUVar16->fields).w;
          pUVar16 = (*(pCVar14->klass->vtable)._105_GetTargetRotation.methodPtr)
                              ((UnityEngine_Quaternion_o *)local_78,pCVar14,
                               (pCVar14->klass->vtable)._105_GetTargetRotation.method);
          local_78[0].x = (pUVar16->fields).x;
          local_78[0].y = (pUVar16->fields).y;
          local_78[0].z = (pUVar16->fields).z;
          local_78[0].w = (pUVar16->fields).w;
          local_88._0_8_ = uVar10;
          local_88._8_8_ = uVar11;
          fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar16 = UnityEngine_Quaternion__Internal_Lerp
                              ((UnityEngine_Quaternion_o *)&local_98,(UnityEngine_Quaternion_o *)&local_88,
                               (UnityEngine_Quaternion_o *)local_78,fVar19 * 5.0,(MethodInfo *)0x0);
          local_78[0].x = (pUVar16->fields).x;
          local_78[0].y = (pUVar16->fields).y;
          local_78[0].z = (pUVar16->fields).z;
          local_78[0].w = (pUVar16->fields).w;
          UnityEngine_Rigidbody__MoveRotation(pUVar6,(UnityEngine_Quaternion_o *)local_78,(MethodInfo *)0x0);
          (__this->fields).State = ((pCVar14->fields).IsWalk != false) + 4;
        }
        return;
      }
    }
    else {
      pCVar3 = (__this->fields)._Controller_k__BackingField;
      if (pCVar3 != (Controllers_HorseController_o *)0x0) {
        if ((pCVar3->fields)._Moving_k__BackingField != false) {
          iVar17 = ((pCVar3->fields)._Running_k__BackingField != false) + 1;
        }
        (__this->fields).State = iVar17;
        if (pCVar3 != (Controllers_HorseController_o *)0x0) {
          fVar19 = (pCVar3->fields)._Direction_k__BackingField.fields.x;
          fVar18 = (pCVar3->fields)._Direction_k__BackingField.fields.y;
          fVar20 = (pCVar3->fields)._Direction_k__BackingField.fields.z;
          if (0.001 < fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20) {
            pUVar4 = (__this->fields).Cache;
            if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar6 = (pUVar4->fields).Rigidbody, pUVar6 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_18214ff7e;
            pUVar16 = UnityEngine_Rigidbody__get_rotation
                                ((UnityEngine_Quaternion_o *)local_78,pUVar6,(MethodInfo *)0x0);
            pCVar3 = (__this->fields)._Controller_k__BackingField;
            if (pCVar3 == (Controllers_HorseController_o *)0x0) goto label_18214ff7e;
            local_88.x = (pCVar3->fields)._Direction_k__BackingField.fields.x;
            local_88.y = (pCVar3->fields)._Direction_k__BackingField.fields.y;
            uVar8._0_4_ = (pUVar16->fields).x;
            uVar8._4_4_ = (pUVar16->fields).y;
            uVar9._0_4_ = (pUVar16->fields).z;
            uVar9._4_4_ = (pUVar16->fields).w;
            local_88.z = (pCVar3->fields)._Direction_k__BackingField.fields.z;
            local_98.x = 0.0;
            local_98.y = 0.0;
            local_98.z = 0.0;
            if (Il2CppMethodInitialized_18433de5c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5c = '\x01';
            }
            pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_98.x = (pUVar7->upVector).fields.x;
            local_98.y = (pUVar7->upVector).fields.y;
            local_98.z = (pUVar7->upVector).fields.z;
            pUVar16 = UnityEngine_Quaternion__Internal_LookRotation
                                ((UnityEngine_Quaternion_o *)local_78,(UnityEngine_Vector3_o *)&local_88,
                                 (UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
            local_78[0].x = (pUVar16->fields).x;
            local_78[0].y = (pUVar16->fields).y;
            local_78[0].z = (pUVar16->fields).z;
            local_78[0].w = (pUVar16->fields).w;
            local_88._0_8_ = uVar8;
            local_88._8_8_ = uVar9;
            fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            pUVar16 = UnityEngine_Quaternion__Internal_Lerp
                                ((UnityEngine_Quaternion_o *)&local_98,(UnityEngine_Quaternion_o *)&local_88,
                                 (UnityEngine_Quaternion_o *)local_78,fVar19 * 10.0,(MethodInfo *)0x0);
            local_78[0].x = (pUVar16->fields).x;
            local_78[0].y = (pUVar16->fields).y;
            local_78[0].z = (pUVar16->fields).z;
            local_78[0].w = (pUVar16->fields).w;
            UnityEngine_Rigidbody__MoveRotation(pUVar6,(UnityEngine_Quaternion_o *)local_78,(MethodInfo *)0x0)
            ;
          }
          pCVar3 = (__this->fields)._Controller_k__BackingField;
          if (pCVar3 != (Controllers_HorseController_o *)0x0) {
            if ((pCVar3->fields)._WantsRecall_k__BackingField == false) {
              return;
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar12) {
              return;
            }
            Characters_Horse__RecallTo(__this,target,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_18214ff7e:
  ThrowNullReferenceException();
}


// Characters.Horse$$FixedUpdate
// il2cpp: void Characters_Horse__FixedUpdate (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214d6d0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18214da38: jmp 0x18214db1f
// asm:   0x18214dca9: movaps xmm0, xmm6
// asm:   0x18214dcac: movd ecx, xmm7
// asm:   0x18214dcb0: unpcklps xmm0, xmm8

void Characters_Horse__FixedUpdate(Characters_Horse_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  int iVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Rigidbody_o *pUVar10;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar11;
  UnityEngine_Quaternion_StaticFields *pUVar12;
  undefined8 uVar13;
  bool bVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_Quaternion_o *pUVar17;
  UnityEngine_Rigidbody_o *pUVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Quaternion_Fields local_d8;
  UnityEngine_Quaternion_Fields local_c8;
  UnityEngine_Quaternion_o local_b8 [10];
  
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar14 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar14) {
    return;
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  (*(__this->klass->vtable)._107_CheckGround.methodPtr)
            (__this,(__this->klass->vtable)._107_CheckGround.method);
  pUVar9 = (__this->fields).Cache;
  if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar18 = (pUVar9->fields).Rigidbody, pUVar18 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18214e2e0;
  UnityEngine_Rigidbody__set_angularDamping(pUVar18,6.0,(MethodInfo *)0x0);
  if ((__this->fields).Grounded != false) {
    if (((__this->fields).State == 3) || ((__this->fields).State == 0)) {
      pUVar9 = (__this->fields).Cache;
      if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_18214e2e0;
      iVar8 = (__this->fields).State;
      pUVar18 = (pUVar9->fields).Rigidbody;
      if (iVar8 == 3) {
        if (pUVar18 == (UnityEngine_Rigidbody_o *)0x0) goto label_18214e2e0;
        pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                            ((UnityEngine_Vector3_o *)&local_c8,pUVar18,(MethodInfo *)0x0);
        uVar5._0_4_ = (pUVar15->fields).x;
        uVar5._4_4_ = (pUVar15->fields).y;
        fVar20 = (pUVar15->fields).z;
        local_c8._0_8_ = uVar5;
      }
      else {
        if (pUVar18 == (UnityEngine_Rigidbody_o *)0x0) goto label_18214e2e0;
        pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                            ((UnityEngine_Vector3_o *)&local_c8,pUVar18,(MethodInfo *)0x0);
        uVar5._0_4_ = (pUVar15->fields).x;
        uVar5._4_4_ = (pUVar15->fields).y;
        fVar20 = (pUVar15->fields).z;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar22 = (pUVar11->upVector).fields.x;
        fVar19 = (pUVar11->upVector).fields.y;
        fVar21 = (pUVar11->upVector).fields.z;
        if (Il2CppMethodInitialized_18434528c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
          Il2CppMethodInitialized_18434528c = '\x01';
        }
        fVar23 = fVar19 * fVar19 + fVar22 * fVar22 + fVar21 * fVar21;
        if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar23) {
          fVar23 = (fVar19 * uVar5._4_4_ + fVar22 * (float)uVar5 + fVar21 * fVar20) / fVar23;
          uVar5._0_4_ = (float)uVar5 - fVar23 * fVar22;
          uVar5._4_4_ = uVar5._4_4_ - fVar23 * fVar19;
          fVar20 = fVar20 - fVar23 * fVar21;
        }
      }
      local_d8.y = uVar5._4_4_;
      local_d8.x = (float)uVar5;
      local_d8.z = fVar20;
      fVar22 = (float)il2cpp_runtime_helper_180546a40(&local_d8);
      if (fVar22 < 1.0) {
        pUVar9 = (__this->fields).Cache;
        if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_18214e2e0;
        pUVar18 = (pUVar9->fields).Rigidbody;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar9 = (__this->fields).Cache;
        if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar10 = (pUVar9->fields).Rigidbody, pUVar10 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_18214e2e0;
        pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar2 = (pUVar11->upVector).fields.x;
        uVar7 = (pUVar11->upVector).fields.y;
        uVar5._0_4_ = (pUVar11->upVector).fields.z;
        pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                            ((UnityEngine_Vector3_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
        uVar5._4_4_ = (pUVar15->fields).y;
        if (pUVar18 == (UnityEngine_Rigidbody_o *)0x0) goto label_18214e2e0;
        local_d8.z = (float)uVar5 * uVar5._4_4_;
        local_d8.y = (float)uVar7 * uVar5._4_4_;
        local_d8.x = (float)uVar2 * uVar5._4_4_;
        UnityEngine_Rigidbody__set_linearVelocity
                  (pUVar18,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
      }
      else {
        fVar22 = (float)il2cpp_runtime_helper_180546a40();
        if (iVar8 == 3) {
          fVar19 = 0.5;
        }
        else {
          fVar19 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          fVar19 = 1.0 / fVar19;
        }
        pUVar9 = (__this->fields).Cache;
        if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_18214e2e0;
        pUVar18 = (pUVar9->fields).Rigidbody;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar21 = (float)il2cpp_runtime_helper_180546a40(&local_d8);
        if (fVar21 <= 1e-05) {
          pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar5._0_4_ = (pUVar11->zeroVector).fields.x;
          uVar5._4_4_ = (pUVar11->zeroVector).fields.y;
          fVar20 = (pUVar11->zeroVector).fields.z;
        }
        else {
          uVar5._0_4_ = (float)uVar5 / fVar21;
          uVar5._4_4_ = uVar5._4_4_ / fVar21;
          fVar20 = fVar20 / fVar21;
        }
        fVar21 = Characters_Horse__get_RunSpeed(__this,(MethodInfo *)0x0);
        if (fVar22 * fVar19 <= fVar21) {
          fVar21 = fVar22 * fVar19;
        }
        if (pUVar18 == (UnityEngine_Rigidbody_o *)0x0) goto label_18214e2e0;
        local_d8.z = fVar21 * -fVar20;
        local_d8.y = fVar21 * -uVar5._4_4_;
        local_d8.x = fVar21 * -(float)uVar5;
        UnityEngine_Rigidbody__AddForce(pUVar18,(UnityEngine_Vector3_o *)&local_d8,5,(MethodInfo *)0x0);
      }
    }
    else if (((((__this->fields).State == 1) || ((__this->fields).State == 2)) ||
             ((__this->fields).State == 5)) || ((__this->fields).State == 4)) {
      uVar5._0_4_ = Characters_Horse__get_RunSpeed(__this,(MethodInfo *)0x0);
      if ((__this->fields).State == 5) {
        uVar5._4_4_ = (__this->fields).WalkSpeed;
label_18214d82d:
        if (uVar5._4_4_ <= (float)uVar5) {
          uVar5._0_4_ = uVar5._4_4_;
        }
      }
      else if ((__this->fields).State == 1) {
        uVar5._4_4_ = (__this->fields).RunCloseSpeed;
        goto label_18214d82d;
      }
      pUVar9 = (__this->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar16 = (pUVar9->fields).Transform, pUVar16 == (UnityEngine_Transform_o *)0x0))
      goto label_18214e2e0;
      pUVar18 = (pUVar9->fields).Rigidbody;
      pUVar15 = UnityEngine_Transform__get_forward
                          ((UnityEngine_Vector3_o *)&local_c8,pUVar16,(MethodInfo *)0x0);
      uVar5._4_4_ = (pUVar15->fields).x;
      fVar20 = (pUVar15->fields).y;
      fVar22 = (pUVar15->fields).z;
      fVar19 = Characters_Horse__get_RunSpeed(__this,(MethodInfo *)0x0);
      if (pUVar18 == (UnityEngine_Rigidbody_o *)0x0) goto label_18214e2e0;
      local_d8.z = fVar19 * fVar22;
      local_d8.y = fVar19 * fVar20;
      local_d8.x = fVar19 * uVar5._4_4_;
      UnityEngine_Rigidbody__AddForce(pUVar18,(UnityEngine_Vector3_o *)&local_d8,5,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar18 = (pUVar9->fields).Rigidbody, pUVar18 == (UnityEngine_Rigidbody_o *)0x0))
      goto label_18214e2e0;
      pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                          ((UnityEngine_Vector3_o *)&local_c8,pUVar18,(MethodInfo *)0x0);
      local_d8.x = (pUVar15->fields).x;
      local_d8.y = (pUVar15->fields).y;
      local_d8.z = (pUVar15->fields).z;
      uVar5._4_4_ = (float)il2cpp_runtime_helper_180546a40(&local_d8);
      if ((float)uVar5 <= uVar5._4_4_) {
        pUVar9 = (__this->fields).Cache;
        if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar18 = (pUVar9->fields).Rigidbody, pUVar18 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_18214e2e0;
        UnityEngine_Rigidbody__set_angularDamping(pUVar18,1.0,(MethodInfo *)0x0);
        uVar5._4_4_ = Characters_Horse__get_RunSpeed(__this,(MethodInfo *)0x0);
        pUVar9 = (__this->fields).Cache;
        if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_18214e2e0;
        if ((float)uVar5 == uVar5._4_4_) {
          if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar18 = (pUVar9->fields).Rigidbody, pUVar18 == (UnityEngine_Rigidbody_o *)0x0))
          goto label_18214e2e0;
          pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar18,(MethodInfo *)0x0);
          local_d8.x = (pUVar15->fields).x;
          local_d8.y = (pUVar15->fields).y;
          local_d8.z = (pUVar15->fields).z;
          fVar19 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
          pUVar9 = (__this->fields).Cache;
          if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar10 = (pUVar9->fields).Rigidbody, pUVar10 == (UnityEngine_Rigidbody_o *)0x0))
          goto label_18214e2e0;
          pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
          uVar3._0_4_ = (pUVar15->fields).x;
          uVar3._4_4_ = (pUVar15->fields).y;
          uVar5._4_4_ = (pUVar15->fields).z;
          local_d8._0_8_ = uVar3;
          local_d8.z = uVar5._4_4_;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar20 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
          if (fVar20 <= 1e-05) {
            pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar20 = (pUVar11->zeroVector).fields.x;
            fVar22 = (pUVar11->zeroVector).fields.y;
            uVar5._4_4_ = (pUVar11->zeroVector).fields.z;
          }
          else {
            fVar22 = local_d8.y / fVar20;
            uVar5._4_4_ = uVar5._4_4_ / fVar20;
            fVar20 = (float)uVar3 / fVar20;
          }
          uVar5._0_4_ = (float)uVar5 - fVar19;
          if (pUVar18 == (UnityEngine_Rigidbody_o *)0x0) goto label_18214e2e0;
        }
        else {
          pUVar18 = (pUVar9->fields).Rigidbody;
          if (pUVar18 == (UnityEngine_Rigidbody_o *)0x0) goto label_18214e2e0;
          pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar18,(MethodInfo *)0x0);
          local_d8.x = (pUVar15->fields).x;
          local_d8.y = (pUVar15->fields).y;
          local_d8.z = (pUVar15->fields).z;
          uVar5._4_4_ = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
          uVar5._0_4_ = (float)uVar5 - uVar5._4_4_;
          if ((float)uVar5 <= -1.0) {
            uVar5._0_4_ = -1.0;
          }
          pUVar9 = (__this->fields).Cache;
          if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar10 = (pUVar9->fields).Rigidbody, pUVar10 == (UnityEngine_Rigidbody_o *)0x0))
          goto label_18214e2e0;
          pUVar15 = UnityEngine_Rigidbody__get_linearVelocity
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
          uVar4._0_4_ = (pUVar15->fields).x;
          uVar4._4_4_ = (pUVar15->fields).y;
          uVar5._4_4_ = (pUVar15->fields).z;
          local_d8._0_8_ = uVar4;
          local_d8.z = uVar5._4_4_;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar20 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
          if (fVar20 <= 1e-05) {
            pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar20 = (pUVar11->zeroVector).fields.x;
            fVar22 = (pUVar11->zeroVector).fields.y;
            uVar5._4_4_ = (pUVar11->zeroVector).fields.z;
          }
          else {
            fVar22 = local_d8.y / fVar20;
            uVar5._4_4_ = uVar5._4_4_ / fVar20;
            fVar20 = (float)uVar4 / fVar20;
          }
        }
        local_d8.z = (float)uVar5 * uVar5._4_4_;
        local_d8.y = (float)uVar5 * fVar22;
        local_d8.x = (float)uVar5 * fVar20;
        UnityEngine_Rigidbody__AddForce(pUVar18,(UnityEngine_Vector3_o *)&local_d8,2,(MethodInfo *)0x0);
      }
    }
  }
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar9 = (__this->fields).Cache;
  if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (UnityEngine_Component_o *)(pUVar9->fields).Rigidbody,
     __this_00 == (UnityEngine_Component_o *)0x0)) goto label_18214e2e0;
  pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar6._0_4_ = (pUVar11->upVector).fields.x;
  uVar6._4_4_ = (pUVar11->upVector).fields.y;
  uVar5._0_4_ = (pUVar11->upVector).fields.z;
  pUVar16 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_18214e2e0;
  pUVar15 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_c8,pUVar16,(MethodInfo *)0x0);
  local_d8.x = (pUVar15->fields).x;
  local_d8.y = (pUVar15->fields).y;
  local_d8.z = (pUVar15->fields).z;
  local_c8._0_8_ = uVar6;
  local_c8.z = (float)uVar5;
  pUVar17 = UnityEngine_Quaternion__Internal_FromToRotation
                      (local_b8,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_d8,
                       (MethodInfo *)0x0);
  uVar5._0_4_ = (pUVar17->fields).x;
  uVar5._4_4_ = (pUVar17->fields).y;
  uVar13._0_4_ = (pUVar17->fields).x;
  uVar13._4_4_ = (pUVar17->fields).y;
  fVar20 = (pUVar17->fields).z;
  fVar22 = (pUVar17->fields).w;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar12 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar5._0_4_ = ABS(uVar5._4_4_ * (pUVar12->identityQuaternion).fields.y +
                    (float)uVar5 * (pUVar12->identityQuaternion).fields.x +
                    fVar20 * (pUVar12->identityQuaternion).fields.z +
                    fVar22 * (pUVar12->identityQuaternion).fields.w);
  if (1.0 <= (float)uVar5) {
    uVar5._0_4_ = 1.0;
  }
  if ((float)uVar5 <= 0.999999) {
    uVar5._0_4_ = (float)il2cpp_runtime_helper_1804f6310((float)uVar5);
    uVar5._0_4_ = ((float)uVar5 + (float)uVar5) * 57.29578;
  }
  else {
    uVar5._0_4_ = 0.0;
  }
  pfVar1 = &(__this->fields).MaxTilt;
  if (*pfVar1 <= (float)uVar5 && (float)uVar5 != *pfVar1) {
    local_c8._0_8_ = uVar13;
    local_c8.z = fVar20;
    local_c8.w = fVar22;
    pUVar17 = UnityEngine_Quaternion__Internal_Inverse
                        (local_b8,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).Cache;
    if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar18 = (pUVar9->fields).Rigidbody, pUVar18 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18214e2e0;
    uVar5._0_4_ = (pUVar17->fields).x;
    uVar5._4_4_ = (pUVar17->fields).y;
    fVar20 = (pUVar17->fields).z;
    fVar22 = (pUVar17->fields).w;
    pUVar17 = UnityEngine_Rigidbody__get_rotation(local_b8,pUVar18,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).Cache;
    fVar19 = (pUVar17->fields).x;
    fVar21 = (pUVar17->fields).w;
    fVar23 = (pUVar17->fields).y;
    fVar25 = (pUVar17->fields).z;
    if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar18 = (pUVar9->fields).Rigidbody, pUVar18 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18214e2e0;
    fVar24 = (fVar21 * uVar5._4_4_ + fVar23 * fVar22 + fVar19 * fVar20) - fVar25 * (float)uVar5;
    fVar26 = (fVar19 * fVar22 + fVar21 * (float)uVar5 + fVar25 * uVar5._4_4_) - fVar23 * fVar20;
    fVar25 = (fVar21 * fVar20 + (pUVar17->fields).z * fVar22 + fVar23 * (float)uVar5) - fVar19 * uVar5._4_4_;
    uVar5._4_4_ = ((fVar21 * fVar22 - fVar19 * (float)uVar5) - fVar23 * uVar5._4_4_) -
                  (pUVar17->fields).z * fVar20;
    pUVar17 = UnityEngine_Rigidbody__get_rotation(local_b8,pUVar18,(MethodInfo *)0x0);
    local_d8.x = (pUVar17->fields).x;
    local_d8.y = (pUVar17->fields).y;
    local_d8.z = (pUVar17->fields).z;
    local_d8.w = (pUVar17->fields).w;
    local_c8.y = fVar24;
    local_c8.x = fVar26;
    uVar5._0_4_ = ABS((pUVar17->fields).y * fVar24 + (pUVar17->fields).x * fVar26 + local_d8.z * fVar25 +
                      local_d8.w * uVar5._4_4_);
    if (1.0 <= (float)uVar5) {
      uVar5._0_4_ = 1.0;
    }
    local_c8.z = fVar25;
    local_c8.w = uVar5._4_4_;
    if (0.999999 < (float)uVar5) {
label_18214e1fa:
      uVar5._0_4_ = (pUVar17->fields).x;
      uVar5._4_4_ = (pUVar17->fields).y;
      fVar20 = (pUVar17->fields).z;
      fVar22 = (pUVar17->fields).w;
    }
    else {
      uVar5._0_4_ = (float)il2cpp_runtime_helper_1804f6310((float)uVar5);
      uVar5._0_4_ = ((float)uVar5 + (float)uVar5) * 57.29578;
      if ((float)uVar5 == 0.0) goto label_18214e1fa;
      uVar5._0_4_ = (__this->fields).MaxTilt / (float)uVar5;
      uVar5._4_4_ = 1.0;
      if ((float)uVar5 <= 1.0) {
        uVar5._4_4_ = (float)uVar5;
      }
      pUVar17 = UnityEngine_Quaternion__Internal_SlerpUnclamped
                          (local_b8,(UnityEngine_Quaternion_o *)&local_c8,
                           (UnityEngine_Quaternion_o *)&local_d8,uVar5._4_4_,(MethodInfo *)0x0);
      uVar5._0_4_ = (pUVar17->fields).x;
      uVar5._4_4_ = (pUVar17->fields).y;
      fVar20 = (pUVar17->fields).z;
      fVar22 = (pUVar17->fields).w;
    }
    pUVar9 = (__this->fields).Cache;
    if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar18 = (pUVar9->fields).Rigidbody, pUVar18 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18214e2e0;
    local_c8.y = uVar5._4_4_;
    local_c8.x = (float)uVar5;
    local_c8.z = fVar20;
    local_c8.w = fVar22;
    UnityEngine_Rigidbody__MoveRotation(pUVar18,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields).Cache;
  if (pUVar9 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar18 = (pUVar9->fields).Rigidbody;
    pUVar15 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                        ((UnityEngine_Vector3_o *)&local_d8,__this,
                         (__this->klass->vtable)._58_get_Gravity.method);
    if (pUVar18 != (UnityEngine_Rigidbody_o *)0x0) {
      local_c8.x = (pUVar15->fields).x;
      local_c8.y = (pUVar15->fields).y;
      local_c8.z = (pUVar15->fields).z;
      UnityEngine_Rigidbody__AddForce(pUVar18,(UnityEngine_Vector3_o *)&local_c8,5,(MethodInfo *)0x0);
      return;
    }
  }
label_18214e2e0:
  ThrowNullReferenceException();
}


// Characters.Horse$$LateUpdate
// il2cpp: void Characters_Horse__LateUpdate (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214e8d0

void Characters_Horse__LateUpdate(Characters_Horse_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  Characters_AnimationHandler_o *__this_00;
  Characters_HorseComponentCache_o *pCVar3;
  Settings_SoundSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  bool bVar6;
  bool bVar7;
  Characters_Human_o *__this_01;
  UnityEngine_Vector3_o *pUVar8;
  Characters_Horse_c *pCVar9;
  System_String_o *animation;
  Characters_HorseSounds_StaticFields *pCVar10;
  MethodInfo *pMVar11;
  float fVar12;
  undefined8 local_28;
  float local_20;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346c4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346c4f = '\x01';
  }
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar6 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar6) {
    if ((__this->fields).Dead != false) {
      return;
    }
    __this_01 = Characters_Horse__get_Rider(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (__this_01 == (Characters_Human_o *)0x0) goto label_18214ede3;
      bVar6 = (__this_01->fields)._state != 0;
    }
    else {
      bVar6 = false;
    }
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar2 = (pUVar1->fields).Rigidbody, pUVar2 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18214ede3;
    pUVar8 = UnityEngine_Rigidbody__get_linearVelocity(&local_18,pUVar2,(MethodInfo *)0x0);
    local_28._0_4_ = (pUVar8->fields).x;
    local_28._4_4_ = (pUVar8->fields).y;
    local_20 = (pUVar8->fields).z;
    fVar12 = (float)il2cpp_runtime_helper_180546a40(&local_28,0);
    if (8.0 < fVar12) {
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_HorseAnimations->static_fields->Run,
                 0.1,0.0,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar7) && (!bVar6)) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        if (__this_01 == (Characters_Human_o *)0x0) goto label_18214ede3;
        animation = TypeInfo_Characters_HumanAnimations->static_fields->HorseRun;
label_18214ec39:
        Characters_BaseCharacter__CrossFadeIfNotPlaying
                  ((Characters_BaseCharacter_o *)__this_01,animation,0.1,0.0,(MethodInfo *)0x0);
      }
    }
    else {
      pUVar1 = (__this->fields).Cache;
      if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar2 = (pUVar1->fields).Rigidbody, pUVar2 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18214ede3;
      pUVar8 = UnityEngine_Rigidbody__get_linearVelocity(&local_18,pUVar2,(MethodInfo *)0x0);
      local_28._0_4_ = (pUVar8->fields).x;
      local_28._4_4_ = (pUVar8->fields).y;
      local_20 = (pUVar8->fields).z;
      fVar12 = (float)il2cpp_runtime_helper_180546a40(&local_28);
      if (fVar12 <= 1.0) {
        Characters_Horse__UpdateIdle(__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar7) && (!bVar6)) {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          if (__this_01 == (Characters_Human_o *)0x0) goto label_18214ede3;
          Characters_BaseCharacter__CrossFadeIfNotPlaying
                    ((Characters_BaseCharacter_o *)__this_01,
                     TypeInfo_Characters_HumanAnimations->static_fields->HorseIdle,0.1,0.0,(MethodInfo *)0x0);
        }
        goto label_18214ec57;
      }
      if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_HorseAnimations->static_fields->Walk
                 ,0.1,0.0,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar7) && (!bVar6)) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        if (__this_01 == (Characters_Human_o *)0x0) goto label_18214ede3;
        animation = TypeInfo_Characters_HumanAnimations->static_fields->HorseIdle;
        goto label_18214ec39;
      }
    }
    (__this->fields)._idleTimeLeft = 0.0;
  }
label_18214ec57:
  __this_00 = (__this->fields).Animation;
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    bVar6 = Characters_AnimationHandler__IsPlaying
                      (__this_00,TypeInfo_Characters_HorseAnimations->static_fields->Run,(MethodInfo *)0x0);
    if ((bVar6) && ((__this->fields).Grounded != false)) {
      pCVar3 = (__this->fields).HorseCache;
      if (pCVar3 != (Characters_HorseComponentCache_o *)0x0) {
        Characters_BaseCharacter__ToggleParticles
                  ((Characters_BaseCharacter_o *)__this,(pCVar3->fields).Dust,
                   (__this->fields).EffectsEnabled != false,(MethodInfo *)0x0);
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar4 != (Settings_SoundSettings_o *)0x0) &&
           (pSVar5 = (pSVar4->fields).HorseSoundEffect, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar5->fields)._value == false) {
            return;
          }
          if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
          }
          pCVar9 = __this->klass;
          bVar6 = true;
          pCVar10 = TypeInfo_Characters_HorseSounds->static_fields;
          pMVar11 = (pCVar9->vtable)._111_ToggleSoundLocal.method;
label_18214ed3f:
          (*(pCVar9->vtable)._111_ToggleSoundLocal.methodPtr)(__this,pCVar10->Run,bVar6,pMVar11);
          return;
        }
      }
    }
    else {
      pCVar3 = (__this->fields).HorseCache;
      if (pCVar3 != (Characters_HorseComponentCache_o *)0x0) {
        Characters_BaseCharacter__ToggleParticles
                  ((Characters_BaseCharacter_o *)__this,(pCVar3->fields).Dust,false,(MethodInfo *)0x0);
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar4 != (Settings_SoundSettings_o *)0x0) &&
           (pSVar5 = (pSVar4->fields).HorseSoundEffect, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar5->fields)._value == false) {
            return;
          }
          if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
          }
          pCVar9 = __this->klass;
          bVar6 = false;
          pCVar10 = TypeInfo_Characters_HorseSounds->static_fields;
          pMVar11 = (pCVar9->vtable)._111_ToggleSoundLocal.method;
          goto label_18214ed3f;
        }
      }
    }
  }
label_18214ede3:
  ThrowNullReferenceException();
}


// Characters.Horse$$CheckGround
// il2cpp: void Characters_Horse__CheckGround (Characters_Horse_o* __this, const MethodInfo* method);
// 0x18214d2d0

void Characters_Horse__CheckGround(Characters_Horse_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar5;
  float fVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar10;
  bool bVar11;
  int32_t layerMask;
  UnityEngine_Vector3_o *pUVar12;
  int32_t local_res8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_RaycastHit_o local_78 [2];
  
  if (Il2CppMethodInitialized_184346c50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346c50 = '\x01';
  }
  local_res8 = 0;
  (__this->fields).JustGrounded = false;
  pUVar9 = (__this->fields).Cache;
  local_78[0].fields.m_Normal.fields.y = 0.0;
  local_78[0].fields.m_Normal.fields.z = 0.0;
  local_78[0].fields.m_FaceID = 0;
  local_78[0].fields.m_Point.fields.x = 0.0;
  local_78[0].fields.m_Point.fields.y = 0.0;
  local_78[0].fields.m_Point.fields.z = 0.0;
  local_78[0].fields.m_Normal.fields.x = 0.0;
  local_78[0].fields.m_Distance = 0.0;
  local_78[0].fields.m_UV.fields.x = 0.0;
  local_78[0].fields.m_UV.fields.y = 0.0;
  local_78[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  if ((pUVar9 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar9->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar12 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_88,__this_00,(MethodInfo *)0x0);
    uVar3 = (pUVar12->fields).x;
    uVar6 = (pUVar12->fields).y;
    fVar1 = (pUVar12->fields).z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar4 = (pUVar10->upVector).fields.x;
    uVar7 = (pUVar10->upVector).fields.y;
    fVar2 = (pUVar10->upVector).fields.z;
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar5._0_4_ = (pUVar10->downVector).fields.x;
    uVar5._4_4_ = (pUVar10->downVector).fields.y;
    fVar8 = (pUVar10->downVector).fields.z;
    local_res8 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                           (__this,(__this->klass->vtable)._67_get_GroundMask.method);
    layerMask = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_88.y = (float)uVar7 * 0.8 + (float)uVar6;
    local_88.x = (float)uVar4 * 0.8 + (float)uVar3;
    local_98._0_8_ = uVar5;
    local_98.z = fVar8;
    local_88.z = fVar2 * 0.8 + fVar1;
    bVar11 = UnityEngine_Physics__SphereCast_2fe64a0
                       ((UnityEngine_Vector3_o *)&local_88,0.6,(UnityEngine_Vector3_o *)&local_98,local_78,0.8
                        ,layerMask,(MethodInfo *)0x0);
    if (bVar11) {
      if ((__this->fields).Grounded == false) {
        (__this->fields).Grounded = true;
        (__this->fields).JustGrounded = true;
        return;
      }
    }
    else {
      (__this->fields).Grounded = false;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.Horse$$.ctor
// il2cpp: void Characters_Horse___ctor (Characters_Horse_o* __this, const MethodInfo* method);
// 0x182150000

void Characters_Horse___ctor(Characters_Horse_o *__this,MethodInfo *method)

{
  Controllers_HorseController_o *__this_00;
  
  if (Il2CppMethodInitialized_184346c51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HorseController);
    Il2CppMethodInitialized_184346c51 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HorseController);
  Controllers_HorseController___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._Controller_k__BackingField = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Controller_k__BackingField,__this_00);
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
// 0x18214f570

System_Collections_IEnumerator_o * Characters_Horse____n__0(Characters_Horse_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = Characters_BaseCharacter__WaitAndDie((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


