// Type: Characters.ArmoredShifter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ArmoredShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Armored/ArmoredShifter.cs
// --------------------------------

// Characters.ArmoredShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_ArmoredShifter__get_EmoteActions (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x182166d40

System_Collections_Generic_List_string__o *
Characters_ArmoredShifter__get_EmoteActions(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346d2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184346d2e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  return __this_00;
}


// Characters.ArmoredShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_ArmoredShifter__get_DefaultRunSpeed (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x182166d30

float Characters_ArmoredShifter__get_DefaultRunSpeed(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  return 110.0;
}


// Characters.ArmoredShifter$$CreateCache
// il2cpp: void Characters_ArmoredShifter__CreateCache (Characters_ArmoredShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x182166800

void Characters_ArmoredShifter__CreateCache
               (Characters_ArmoredShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_ArmoredComponentCache_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346d2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ArmoredComponentCache);
    Il2CppMethodInitialized_184346d2f = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ArmoredComponentCache);
  if (Il2CppMethodInitialized_184346d2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Prefabs/TitanSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip");
    Il2CppMethodInitialized_184346d2d = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this_00,owner,(MethodInfo *)0x0);
  pUVar1 = (__this_00->fields).Transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
    (__this_00->fields).Head = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Head,pUVar1);
    pUVar1 = (__this_00->fields).Transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck",(MethodInfo *)0x0);
      (__this_00->fields).Neck = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Neck,pUVar1);
      pUVar1 = (__this_00->fields).Transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core",(MethodInfo *)0x0);
        (__this_00->fields).Core = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).Core,pUVar1);
        pUVar1 = (__this_00->fields).Transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core/Controller.Body/hip",(MethodInfo *)0x0);
          (__this_00->fields).Hip = pUVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Hip,pUVar1);
          Utility_BaseComponentCache__LoadAudio
                    ((Utility_BaseComponentCache_o *)__this_00,"Shifters/Prefabs/ShifterSounds",(__this_00->fields).Neck,
                     (MethodInfo *)0x0);
          Utility_BaseComponentCache__LoadAudio
                    ((Utility_BaseComponentCache_o *)__this_00,"Titans/Prefabs/TitanSounds",(__this_00->fields).Neck,
                     (MethodInfo *)0x0);
          (__this->fields).ArmoredCache = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).ArmoredCache,__this_00);
          Characters_BaseTitan__CreateCache
                    ((Characters_BaseTitan_o *)__this,
                     (Utility_BaseComponentCache_o *)(__this->fields).ArmoredCache,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ArmoredShifter$$CreateAnimations
// il2cpp: void Characters_ArmoredShifter__CreateAnimations (Characters_ArmoredShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x182166780

void Characters_ArmoredShifter__CreateAnimations
               (Characters_ArmoredShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_ArmoredAnimations_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ArmoredAnimations);
    Il2CppMethodInitialized_184346d30 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ArmoredAnimations);
  Characters_BaseTitanAnimations___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).ArmoredAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ArmoredAnimations,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).ArmoredAnimations,(MethodInfo *)0x0);
  return;
}


// Characters.ArmoredShifter$$Emote
// il2cpp: void Characters_ArmoredShifter__Emote (Characters_ArmoredShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x180547020

void
Characters_ArmoredShifter__Emote(Characters_ArmoredShifter_o* __this, System_String_o* emote, MethodInfo* method)

{
  return;
}


// Characters.ArmoredShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_ArmoredShifter__CreateCustomSkinLoader (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x1821669d0

CustomSkins_BaseCustomSkinLoader_o *
Characters_ArmoredShifter__CreateCustomSkinLoader(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346d31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AnnieCustomSkinLoader);
    Il2CppMethodInitialized_184346d31 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_AnnieCustomSkinLoader);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// Characters.ArmoredShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_ArmoredShifter__GetSkinURL (Characters_ArmoredShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x182166ae0

System_String_o *
Characters_ArmoredShifter__GetSkinURL
          (Characters_ArmoredShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346d32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346d32 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Annie, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// Characters.ArmoredShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_ArmoredShifter__GetRootMotionAnimations (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x182166a80

System_Collections_Generic_Dictionary_string__float__o *
Characters_ArmoredShifter__GetRootMotionAnimations(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_184346d33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_184346d33 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  return __this_00;
}


// Characters.ArmoredShifter$$UpdateAttack
// il2cpp: void Characters_ArmoredShifter__UpdateAttack (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x182166c00

void Characters_ArmoredShifter__UpdateAttack(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_String_o *a;
  Characters_ArmoredComponentCache_o *pCVar1;
  Characters_BaseHitbox_o *__this_00;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184346d34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346d34 = '\x01';
  }
  fVar3 = (*(__this->klass->vtable)._193_GetAnimationTime.methodPtr)
                    (__this,(__this->klass->vtable)._193_GetAnimationTime.method);
  if ((__this->fields).ArmoredAnimations != (Characters_ArmoredAnimations_o *)0x0) {
    a = (__this->fields)._currentStateAnimation;
    if (Il2CppMethodInitialized_184346d2c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|dt_attack_swipe_L");
      Il2CppMethodInitialized_184346d2c = '\x01';
    }
    bVar2 = System_String__op_Equality(a,"Amarture_VER2|dt_attack_swipe_L",(MethodInfo *)0x0);
    if (((bVar2) && ((__this->fields)._currentAttackStage == 0)) && (0.06 < fVar3)) {
      pCVar1 = (__this->fields).ArmoredCache;
      (__this->fields)._currentAttackStage = 1;
      if ((pCVar1 == (Characters_ArmoredComponentCache_o *)0x0) ||
         (__this_00 = (pCVar1->fields).HandLHitbox, __this_00 == (Characters_BaseHitbox_o *)0x0))
      goto label_182166d24;
      Characters_BaseHitbox__Activate
                (__this_00,0.0,0.35 / (__this->fields)._currentAttackSpeed,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_182166d24:
  ThrowNullReferenceException();
}


// Characters.ArmoredShifter$$LateUpdate
// il2cpp: void Characters_ArmoredShifter__LateUpdate (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x182166b30

void Characters_ArmoredShifter__LateUpdate(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346d35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2");
    Il2CppMethodInitialized_184346d35 = '\x01';
  }
  Characters_BaseTitan__LateUpdate((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Amarture_VER2",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar1 = (pUVar3->oneVector).fields.x;
    uVar2 = (pUVar3->oneVector).fields.y;
    local_18.x = (float)uVar1 * 15.0;
    local_18.y = (float)uVar2 * 15.0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      local_18.z = (pUVar3->oneVector).fields.z * 15.0;
      UnityEngine_Transform__set_localScale(pUVar4,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.ArmoredShifter$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_ArmoredShifter__GetCameraAnchor (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x182166a20

UnityEngine_Transform_o *
Characters_ArmoredShifter__GetCameraAnchor(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346d36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Anchor");
    Il2CppMethodInitialized_184346d36 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Anchor",(MethodInfo *)0x0);
    return pUVar1;
  }
  ThrowNullReferenceException();
}


// Characters.ArmoredShifter$$.ctor
// il2cpp: void Characters_ArmoredShifter___ctor (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x1821662a0

void
Characters_ArmoredShifter___ctor(Characters_ArmoredShifter_o* __this, MethodInfo* method)

{
  (__this->fields)._needRoar = true;
  (__this->fields).DeathAnimationLength = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


