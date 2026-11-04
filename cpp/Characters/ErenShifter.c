// Type: Characters.ErenShifter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/ErenShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Eren/ErenShifter.cs
// --------------------------------

// Characters.ErenShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_ErenShifter__get_EmoteActions (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x18216c570

System_Collections_Generic_List_string__o *
Characters_ErenShifter__get_EmoteActions(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346d51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    Il2CppMethodInitialized_184346d51 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar4 = "Nod";
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_18216c6b9;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_18216c6bf;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "Roar";
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pSVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        return __this_00;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
        return __this_00;
      }
label_18216c6bf:
      ThrowIndexOutOfRangeException();
    }
  }
label_18216c6b9:
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_ErenShifter__get_DefaultRunSpeed (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x18216c560

float Characters_ErenShifter__get_DefaultRunSpeed(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  return 90.0;
}


// Characters.ErenShifter$$CreateCache
// il2cpp: void Characters_ErenShifter__CreateCache (Characters_ErenShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x18216bdf0

void Characters_ErenShifter__CreateCache
               (Characters_ErenShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_ErenComponentCache_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346d52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenComponentCache);
    Il2CppMethodInitialized_184346d52 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ErenComponentCache);
  if (Il2CppMethodInitialized_184346d50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2/Core/Controller_Body/hip");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Prefabs/TitanSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2/Core");
    Il2CppMethodInitialized_184346d50 = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this_00,owner,(MethodInfo *)0x0);
  pUVar1 = (__this_00->fields).Transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
    (__this_00->fields).Head = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Head,pUVar1);
    pUVar1 = (__this_00->fields).Transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck",(MethodInfo *)0x0);
      (__this_00->fields).Neck = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Neck,pUVar1);
      pUVar1 = (__this_00->fields).Transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"ErenRig_VER2/Core",(MethodInfo *)0x0);
        (__this_00->fields).Core = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).Core,pUVar1);
        pUVar1 = (__this_00->fields).Transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"ErenRig_VER2/Core/Controller_Body/hip",(MethodInfo *)0x0);
          (__this_00->fields).Hip = pUVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Hip,pUVar1);
          Utility_BaseComponentCache__LoadAudio
                    ((Utility_BaseComponentCache_o *)__this_00,"Shifters/Prefabs/ShifterSounds",(__this_00->fields).Neck,
                     (MethodInfo *)0x0);
          Utility_BaseComponentCache__LoadAudio
                    ((Utility_BaseComponentCache_o *)__this_00,"Titans/Prefabs/TitanSounds",(__this_00->fields).Neck,
                     (MethodInfo *)0x0);
          (__this->fields).ErenCache = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).ErenCache,__this_00);
          Characters_BaseTitan__CreateCache
                    ((Characters_BaseTitan_o *)__this,
                     (Utility_BaseComponentCache_o *)(__this->fields).ErenCache,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$CreateAnimations
// il2cpp: void Characters_ErenShifter__CreateAnimations (Characters_ErenShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x18216bc30

void Characters_ErenShifter__CreateAnimations
               (Characters_ErenShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_ErenAnimations_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenAnimations);
    Il2CppMethodInitialized_184346d53 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ErenAnimations);
  if (Il2CppMethodInitialized_184346d4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_fix_hole");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_combo_full");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_born");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_kick");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_yes");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_walk");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift.001");
    Il2CppMethodInitialized_184346d4f = '\x01';
  }
  (__this_00->fields).AttackCombo = "ErenRig_VER2|et_attack_combo_full";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackCombo,"ErenRig_VER2|et_attack_combo_full");
  (__this_00->fields).AttackKick = "ErenRig_VER2|et_attack_kick";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackKick,"ErenRig_VER2|et_attack_kick");
  (__this_00->fields).EmoteNod = "ErenRig_VER2|et_yes";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).EmoteNod,"ErenRig_VER2|et_yes");
  (__this_00->fields).EmoteRoar = "ErenRig_VER2|et_born";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).EmoteRoar,"ErenRig_VER2|et_born");
  (__this_00->fields).RockLift = "ErenRig_VER2|et_rock_lift";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).RockLift,"ErenRig_VER2|et_rock_lift");
  (__this_00->fields).RockLift001 = "ErenRig_VER2|et_rock_lift.001";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).RockLift001,"ErenRig_VER2|et_rock_lift.001");
  (__this_00->fields).RockWalk = "ErenRig_VER2|et_rock_walk";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).RockWalk,"ErenRig_VER2|et_rock_walk");
  (__this_00->fields).RockFixHole = "ErenRig_VER2|et_rock_fix_hole";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).RockFixHole,"ErenRig_VER2|et_rock_fix_hole");
  Characters_BaseTitanAnimations___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).ErenAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ErenAnimations,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).ErenAnimations,(MethodInfo *)0x0);
  return;
}


// Characters.ErenShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_ErenShifter__CreateCustomSkinLoader (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x18216bfc0

CustomSkins_BaseCustomSkinLoader_o *
Characters_ErenShifter__CreateCustomSkinLoader(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346d54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ErenCustomSkinLoader);
    Il2CppMethodInitialized_184346d54 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_ErenCustomSkinLoader);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_ErenShifter__GetSkinURL (Characters_ErenShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x18216c250

System_String_o *
Characters_ErenShifter__GetSkinURL
          (Characters_ErenShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346d55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346d55 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Eren, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$Emote
// il2cpp: void Characters_ErenShifter__Emote (Characters_ErenShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x18216c010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216c166: mov rdi, qword ptr [rsp + 0x40]

void Characters_ErenShifter__Emote(Characters_ErenShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_ErenAnimations_o *pCVar1;
  bool bVar2;
  System_Collections_IEnumerator_o *routine;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184346d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346d56 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._146_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._146_CanEmote.method);
  if (bVar2) {
    a = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    bVar2 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).ErenAnimations;
      if (pCVar1 == (Characters_ErenAnimations_o *)0x0) {
label_18216c176:
        ThrowNullReferenceException();
      }
      a = (pCVar1->fields).EmoteNod;
    }
    else {
      bVar2 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
        }
        routine = Characters_BaseCharacter__WaitAndPlaySound
                            ((Characters_BaseCharacter_o *)__this,
                             TypeInfo_Characters_ShifterSounds->static_fields->ErenRoar,0.9,(MethodInfo *)0x0)
        ;
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        pCVar1 = (__this->fields).ErenAnimations;
        if (pCVar1 == (Characters_ErenAnimations_o *)0x0) goto label_18216c176;
        a = (pCVar1->fields).EmoteRoar;
      }
    }
    bVar2 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
    if (bVar2) {
      Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)__this,8,a,0.1,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.ErenShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_ErenShifter__GetRootMotionAnimations (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x18216c180

System_Collections_Generic_Dictionary_string__float__o *
Characters_ErenShifter__GetRootMotionAnimations(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  Characters_ErenAnimations_o *pCVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_184346d57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_184346d57 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  pCVar1 = (__this->fields).ErenAnimations;
  if ((pCVar1 != (Characters_ErenAnimations_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)(pCVar1->fields).AttackCombo,1.0,
               (MethodInfo_147AAD0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    pCVar1 = (__this->fields).ErenAnimations;
    if (pCVar1 != (Characters_ErenAnimations_o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (Il2CppObject *)(pCVar1->fields).AttackKick,1.0,
                 (MethodInfo_147AAD0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$IsComboAttack
// il2cpp: bool Characters_ErenShifter__IsComboAttack (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x18216c2a0

bool Characters_ErenShifter__IsComboAttack(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  Characters_ErenAnimations_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).ErenAnimations;
  if (pCVar1 != (Characters_ErenAnimations_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((__this->fields)._currentAttackAnimation,(pCVar1->fields).AttackCombo,(MethodInfo *)0x0
                      );
    return bVar2;
  }
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$UpdateAttack
// il2cpp: void Characters_ErenShifter__UpdateAttack (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x18216c2d0

void Characters_ErenShifter__UpdateAttack(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  Characters_ErenAnimations_o *pCVar1;
  Characters_ErenComponentCache_o *pCVar2;
  bool bVar3;
  Characters_BaseHitbox_o *pCVar4;
  System_String_o *sound;
  float fVar5;
  
  if (Il2CppMethodInitialized_184346d58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346d58 = '\x01';
  }
  fVar5 = (*(__this->klass->vtable)._193_GetAnimationTime.methodPtr)
                    (__this,(__this->klass->vtable)._193_GetAnimationTime.method);
  pCVar1 = (__this->fields).ErenAnimations;
  if (pCVar1 == (Characters_ErenAnimations_o *)0x0) goto label_18216c556;
  bVar3 = System_String__op_Equality
                    ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackCombo,(MethodInfo *)0x0);
  if (bVar3) {
    if (((__this->fields)._currentAttackStage != 0) || (fVar5 <= 0.15)) {
      if (((__this->fields)._currentAttackStage != 1) || (fVar5 <= 0.27)) {
        if ((__this->fields)._currentAttackStage != 2) {
          return;
        }
        if (fVar5 <= 0.56) {
          return;
        }
        pCVar2 = (__this->fields).ErenCache;
        (__this->fields)._currentAttackStage = 3;
        if ((pCVar2 == (Characters_ErenComponentCache_o *)0x0) ||
           (pCVar4 = (pCVar2->fields).HandRHitbox, pCVar4 == (Characters_BaseHitbox_o *)0x0))
        goto label_18216c556;
        Characters_BaseHitbox__Activate
                  (pCVar4,0.0,0.25 / (__this->fields)._currentAttackSpeed,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        sound = TypeInfo_Characters_TitanSounds->static_fields->Swing3;
      }
      else {
        pCVar2 = (__this->fields).ErenCache;
        (__this->fields)._currentAttackStage = 2;
        if ((pCVar2 == (Characters_ErenComponentCache_o *)0x0) ||
           (pCVar4 = (pCVar2->fields).HandLHitbox, pCVar4 == (Characters_BaseHitbox_o *)0x0))
        goto label_18216c556;
        Characters_BaseHitbox__Activate
                  (pCVar4,0.0,0.23 / (__this->fields)._currentAttackSpeed,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        sound = TypeInfo_Characters_TitanSounds->static_fields->Swing2;
      }
      goto label_18216c3eb;
    }
    pCVar2 = (__this->fields).ErenCache;
    (__this->fields)._currentAttackStage = 1;
    if ((pCVar2 == (Characters_ErenComponentCache_o *)0x0) ||
       (pCVar4 = (pCVar2->fields).HandRHitbox, pCVar4 == (Characters_BaseHitbox_o *)0x0)) goto label_18216c556;
    fVar5 = 0.16;
  }
  else {
    pCVar1 = (__this->fields).ErenAnimations;
    if (pCVar1 == (Characters_ErenAnimations_o *)0x0) {
label_18216c556:
      ThrowNullReferenceException();
    }
    bVar3 = System_String__op_Equality
                      ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackKick,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    if (fVar5 <= 0.28) {
      return;
    }
    pCVar2 = (__this->fields).ErenCache;
    (__this->fields)._currentAttackStage = 1;
    if ((pCVar2 == (Characters_ErenComponentCache_o *)0x0) ||
       (pCVar4 = (pCVar2->fields).FootRHitbox, pCVar4 == (Characters_BaseHitbox_o *)0x0)) goto label_18216c556;
    fVar5 = 0.5;
  }
  Characters_BaseHitbox__Activate(pCVar4,0.0,fVar5 / (__this->fields)._currentAttackSpeed,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  sound = TypeInfo_Characters_TitanSounds->static_fields->Swing1;
label_18216c3eb:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
  return;
}


// Characters.ErenShifter$$CheckNapeAngle
// il2cpp: bool Characters_ErenShifter__CheckNapeAngle (Characters_ErenShifter_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x18216bac0

bool Characters_ErenShifter__CheckNapeAngle
               (Characters_ErenShifter_o *__this,UnityEngine_Vector3_o *hitPosition,float maxAngle,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_BaseTitanComponentCache_o *pCVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_78;
  float local_70;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_o local_58 [6];
  
  pCVar5 = (__this->fields).BaseTitanCache;
  if ((pCVar5 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (pUVar7 = (pCVar5->fields).Head, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)&local_68,pUVar7,(MethodInfo *)0x0);
      uVar1 = (hitPosition->fields).x;
      uVar3 = (hitPosition->fields).y;
      uVar2 = (pUVar8->fields).x;
      uVar4 = (pUVar8->fields).y;
      fVar10 = (hitPosition->fields).z - (pUVar8->fields).z;
      local_78 = CONCAT44((float)uVar3 - (float)uVar4,(float)uVar1 - (float)uVar2);
      local_70 = fVar10;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      local_70 = (float)il2cpp_runtime_helper_180546a40(&local_78,0);
      if (local_70 <= 1e-05) {
        pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar9 = (pUVar6->zeroVector).fields.x;
        fVar11 = (pUVar6->zeroVector).fields.y;
        local_70 = (pUVar6->zeroVector).fields.z;
      }
      else {
        fVar9 = ((float)uVar1 - (float)uVar2) / local_70;
        fVar11 = ((float)uVar3 - (float)uVar4) / local_70;
        local_70 = fVar10 / local_70;
      }
      local_78 = CONCAT44(fVar11,fVar9);
      pUVar8 = UnityEngine_Transform__get_forward(local_58,pUVar7,(MethodInfo *)0x0);
      local_68.x = (pUVar8->fields).x;
      local_68.y = (pUVar8->fields).y;
      local_68.z = (pUVar8->fields).z;
      fVar10 = (float)il2cpp_runtime_helper_181d9e200(&local_68,&local_78,0);
      return fVar10 < maxAngle;
    }
  }
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$.ctor
// il2cpp: void Characters_ErenShifter___ctor (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x1821662a0

void Characters_ErenShifter___ctor(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  (__this->fields)._needRoar = true;
  (__this->fields).DeathAnimationLength = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


