// Type: Characters.ArmoredShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ArmoredShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Armored/ArmoredShifter.cs
// --------------------------------

// Characters.ArmoredShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_ArmoredShifter__get_EmoteActions (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x5c15960

System_Collections_Generic_List_string__o *
Characters_ArmoredShifter__get_EmoteActions(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_075476fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075476fe = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  return __this_00;
}


// Characters.ArmoredShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_ArmoredShifter__get_DefaultRunSpeed (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x5c159c0

float Characters_ArmoredShifter__get_DefaultRunSpeed(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  return 110.0;
}


// Characters.ArmoredShifter$$CreateCache
// il2cpp: void Characters_ArmoredShifter__CreateCache (Characters_ArmoredShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x5c159d0

void Characters_ArmoredShifter__CreateCache
               (Characters_ArmoredShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_ArmoredComponentCache_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075476ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ArmoredComponentCache);
    Il2CppMethodInitialized_075476ff = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ArmoredComponentCache);
  Characters_ArmoredComponentCache___ctor(__this_00,owner,method_00);
  (__this->fields).ArmoredCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ArmoredCache);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,(Utility_BaseComponentCache_o *)(__this->fields).ArmoredCache,
             (MethodInfo *)0x0);
  return;
}


// Characters.ArmoredShifter$$CreateAnimations
// il2cpp: void Characters_ArmoredShifter__CreateAnimations (Characters_ArmoredShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x5c15a50

void Characters_ArmoredShifter__CreateAnimations
               (Characters_ArmoredShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_ArmoredAnimations_o *__this_00;
  
  if (Il2CppMethodInitialized_07547700 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ArmoredAnimations);
    Il2CppMethodInitialized_07547700 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ArmoredAnimations);
  Characters_BaseTitanAnimations___ctor((Characters_BaseTitanAnimations_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).ArmoredAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ArmoredAnimations);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).ArmoredAnimations,(MethodInfo *)0x0);
  return;
}


// Characters.ArmoredShifter$$Emote
// il2cpp: void Characters_ArmoredShifter__Emote (Characters_ArmoredShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5c15ac0

void Characters_ArmoredShifter__Emote
               (Characters_ArmoredShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  return;
}


// Characters.ArmoredShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_ArmoredShifter__CreateCustomSkinLoader (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x5c15ad0

CustomSkins_BaseCustomSkinLoader_o *
Characters_ArmoredShifter__CreateCustomSkinLoader(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547701 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AnnieCustomSkinLoader);
    Il2CppMethodInitialized_07547701 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
           UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_353B6A0 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_AnnieCustomSkinLoader);
  return pCVar1;
}


// Characters.ArmoredShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_ArmoredShifter__GetSkinURL (Characters_ArmoredShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x5c15b20

System_String_o *
Characters_ArmoredShifter__GetSkinURL
          (Characters_ArmoredShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547702 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547702 = '\x01';
  }
  if ((set == (Settings_ShifterCustomSkinSet_o *)0x0) ||
     (pSVar1 = (set->fields).Annie, pSVar1 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value;
}


// Characters.ArmoredShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_ArmoredShifter__GetRootMotionAnimations (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x5c15b60

System_Collections_Generic_Dictionary_string__float__o *
Characters_ArmoredShifter__GetRootMotionAnimations(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_07547703 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_07547703 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  return __this_00;
}


// Characters.ArmoredShifter$$UpdateAttack
// il2cpp: void Characters_ArmoredShifter__UpdateAttack (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x5c15bc0

void Characters_ArmoredShifter__UpdateAttack(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_String_o *a;
  Characters_ArmoredComponentCache_o *pCVar1;
  Characters_BaseHitbox_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547704 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07547704 = '\x01';
  }
  fVar4 = (*(__this->klass->vtable)._194_GetAnimationTime.methodPtr)
                    (__this,(__this->klass->vtable)._194_GetAnimationTime.method);
  if ((__this->fields).ArmoredAnimations != (Characters_ArmoredAnimations_o *)0x0) {
    a = (__this->fields)._currentStateAnimation;
    if (Il2CppMethodInitialized_075476fc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|dt_attack_swipe_L");
      Il2CppMethodInitialized_075476fc = '\x01';
    }
    bVar3 = System_String__op_Equality(a,"Amarture_VER2|dt_attack_swipe_L",(MethodInfo *)0x0);
    if (((!bVar3) || (fVar4 <= 0.06)) || ((__this->fields)._currentAttackStage != 0)) {
      return;
    }
    (__this->fields)._currentAttackStage = 1;
    pCVar1 = (__this->fields).ArmoredCache;
    if ((pCVar1 != (Characters_ArmoredComponentCache_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).HandLHitbox, pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
      (*(pCVar2->klass->vtable)._5_Activate.methodPtr)
                (pCVar2,0.0,0.35 / (__this->fields)._currentAttackSpeed,
                 (pCVar2->klass->vtable)._5_Activate.method);
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.ArmoredShifter$$LateUpdate
// il2cpp: void Characters_ArmoredShifter__LateUpdate (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x5c15cf0

void Characters_ArmoredShifter__LateUpdate(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  MethodInfo *method_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07547705 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2");
    Il2CppMethodInitialized_07547705 = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Amarture_VER2",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      value.fields.z = (pUVar3->oneVector).fields.z * 15.0;
      uVar1 = (pUVar3->oneVector).fields.x;
      uVar2 = (pUVar3->oneVector).fields.y;
      value.fields.x = (float)uVar1 * 15.0;
      value.fields.y = (float)uVar2 * 15.0;
      UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      Characters_BaseTitan__LateUpdate((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
      Characters_BaseShifter__UpdateDeathVisuals((Characters_BaseShifter_o *)__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.ArmoredShifter$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_ArmoredShifter__GetCameraAnchor (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x5c15dd0

UnityEngine_Transform_o *
Characters_ArmoredShifter__GetCameraAnchor(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547706 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Anchor");
    Il2CppMethodInitialized_07547706 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_Transform__Find(pUVar1,"Anchor",(MethodInfo *)0x0);
  return pUVar1;
}


// Characters.ArmoredShifter$$.ctor
// il2cpp: void Characters_ArmoredShifter___ctor (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x5c15e20

void Characters_ArmoredShifter___ctor(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  (__this->fields)._needRoar = true;
  (__this->fields).DeathAnimationLength = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


