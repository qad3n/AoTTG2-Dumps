// Type: Characters.AnnieShifter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/AnnieShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Annie/AnnieShifter.cs
// --------------------------------

// Characters.AnnieShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_AnnieShifter__get_EmoteActions (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x1821662c0

System_Collections_Generic_List_string__o *
Characters_AnnieShifter__get_EmoteActions(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346d1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    il2cpp_codegen_initialize_runtime_metadata(&"Taunt");
    Il2CppMethodInitialized_184346d1d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar4 = "Salute";
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_1821664e9;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_1821664ef;
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
    if (pSVar3 == (System_String_array *)0x0) goto label_1821664e9;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_1821664ef;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "Taunt";
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_1821664e9;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_1821664ef;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "Wave";
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
label_1821664ef:
      ThrowIndexOutOfRangeException();
    }
  }
label_1821664e9:
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$CreateCache
// il2cpp: void Characters_AnnieShifter__CreateCache (Characters_AnnieShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x182164fc0

void Characters_AnnieShifter__CreateCache
               (Characters_AnnieShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_AnnieComponentCache_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346d1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnnieComponentCache);
    Il2CppMethodInitialized_184346d1e = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnnieComponentCache);
  if (Il2CppMethodInitialized_184346d1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT/Core/Controller_Body/hip/spine/chest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT/Core");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT/Core/Controller_Body/hip/spine/chest/neck");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT/Core/Controller_Body/hip");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Prefabs/TitanSounds");
    Il2CppMethodInitialized_184346d1c = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this_00,owner,(MethodInfo *)0x0);
  pUVar1 = (__this_00->fields).Transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Armature_FemT/Core/Controller_Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
    (__this_00->fields).Head = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Head,pUVar1);
    pUVar1 = (__this_00->fields).Transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Armature_FemT/Core/Controller_Body/hip/spine/chest/neck",(MethodInfo *)0x0);
      (__this_00->fields).Neck = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Neck,pUVar1);
      pUVar1 = (__this_00->fields).Transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"Armature_FemT/Core",(MethodInfo *)0x0);
        (__this_00->fields).Core = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).Core,pUVar1);
        pUVar1 = (__this_00->fields).Transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Armature_FemT/Core/Controller_Body/hip",(MethodInfo *)0x0);
          (__this_00->fields).Hip = pUVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Hip,pUVar1);
          Utility_BaseComponentCache__LoadAudio
                    ((Utility_BaseComponentCache_o *)__this_00,"Shifters/Prefabs/ShifterSounds",(__this_00->fields).Neck,
                     (MethodInfo *)0x0);
          Utility_BaseComponentCache__LoadAudio
                    ((Utility_BaseComponentCache_o *)__this_00,"Titans/Prefabs/TitanSounds",(__this_00->fields).Neck,
                     (MethodInfo *)0x0);
          (__this->fields).AnnieCache = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).AnnieCache,__this_00);
          Characters_BaseTitan__CreateCache
                    ((Characters_BaseTitan_o *)__this,
                     (Utility_BaseComponentCache_o *)(__this->fields).AnnieCache,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$CreateAnimations
// il2cpp: void Characters_AnnieShifter__CreateAnimations (Characters_AnnieShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x182164f40

void Characters_AnnieShifter__CreateAnimations
               (Characters_AnnieShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_AnnieAnimations_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnnieAnimations);
    Il2CppMethodInitialized_184346d1f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnnieAnimations);
  Characters_AnnieAnimations___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).AnnieAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AnnieAnimations,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).AnnieAnimations,(MethodInfo *)0x0);
  return;
}


// Characters.AnnieShifter$$Emote
// il2cpp: void Characters_AnnieShifter__Emote (Characters_AnnieShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x1821652b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182165491: mov rdi, qword ptr [rsp + 0x40]

void Characters_AnnieShifter__Emote
               (Characters_AnnieShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_AnnieAnimations_o *pCVar1;
  bool bVar2;
  System_Collections_IEnumerator_o *routine;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184346d20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    il2cpp_codegen_initialize_runtime_metadata(&"Taunt");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346d20 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._146_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._146_CanEmote.method);
  if (bVar2) {
    a = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    bVar2 = System_String__op_Equality(emote,"Salute",(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).AnnieAnimations;
      if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) {
label_1821654a1:
        ThrowNullReferenceException();
      }
      a = (pCVar1->fields).EmoteSalute;
    }
    else {
      bVar2 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
      if (bVar2) {
        pCVar1 = (__this->fields).AnnieAnimations;
        if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) goto label_1821654a1;
        a = (pCVar1->fields).EmoteRoar;
        if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
        }
        routine = Characters_BaseCharacter__WaitAndPlaySound
                            ((Characters_BaseCharacter_o *)__this,
                             TypeInfo_Characters_ShifterSounds->static_fields->AnnieRoar,0.1,(MethodInfo *)0x0
                            );
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      }
      else {
        bVar2 = System_String__op_Equality(emote,"Taunt",(MethodInfo *)0x0);
        if (bVar2) {
          pCVar1 = (__this->fields).AnnieAnimations;
          if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) goto label_1821654a1;
          a = (pCVar1->fields).EmoteTaunt;
        }
        else {
          bVar2 = System_String__op_Equality(emote,"Wave",(MethodInfo *)0x0);
          if (bVar2) {
            pCVar1 = (__this->fields).AnnieAnimations;
            if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) goto label_1821654a1;
            a = (pCVar1->fields).EmoteWave;
          }
        }
      }
    }
    bVar2 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
    if (bVar2) {
      Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)__this,8,a,0.1,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.AnnieShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_AnnieShifter__CreateCustomSkinLoader (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x182165190

CustomSkins_BaseCustomSkinLoader_o *
Characters_AnnieShifter__CreateCustomSkinLoader(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346d21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AnnieCustomSkinLoader);
    Il2CppMethodInitialized_184346d21 = '\x01';
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


// Characters.AnnieShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_AnnieShifter__GetSkinURL (Characters_AnnieShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x182165550

System_String_o *
Characters_AnnieShifter__GetSkinURL
          (Characters_AnnieShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346d22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346d22 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Annie, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_AnnieShifter__GetRootMotionAnimations (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x1821654b0

System_Collections_Generic_Dictionary_string__float__o *
Characters_AnnieShifter__GetRootMotionAnimations(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  Characters_AnnieAnimations_o *pCVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_184346d23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_184346d23 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  pCVar1 = (__this->fields).AnnieAnimations;
  if ((pCVar1 != (Characters_AnnieAnimations_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)(pCVar1->fields).AttackCombo,0.95,
               (MethodInfo_147AAD0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$IsComboAttack
// il2cpp: bool Characters_AnnieShifter__IsComboAttack (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x1821655a0

bool Characters_AnnieShifter__IsComboAttack(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  Characters_AnnieAnimations_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).AnnieAnimations;
  if (pCVar1 != (Characters_AnnieAnimations_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((__this->fields)._currentAttackAnimation,(pCVar1->fields).AttackCombo,(MethodInfo *)0x0
                      );
    if (bVar2) {
      return true;
    }
    pCVar1 = (__this->fields).AnnieAnimations;
    if (pCVar1 != (Characters_AnnieAnimations_o *)0x0) {
      bVar2 = System_String__op_Equality
                        ((__this->fields)._currentAttackAnimation,(pCVar1->fields).AttackComboBlind,
                         (MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$get_BasicAttacksStunOnly
// il2cpp: bool Characters_AnnieShifter__get_BasicAttacksStunOnly (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Characters_AnnieShifter__get_BasicAttacksStunOnly(Characters_AnnieShifter_o* __this, MethodInfo* method)

{
  return true;
}


// Characters.AnnieShifter$$UpdateAttack
// il2cpp: void Characters_AnnieShifter__UpdateAttack (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x182165600

void Characters_AnnieShifter__UpdateAttack(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Characters_AnnieAnimations_o *pCVar4;
  Characters_BaseTitanComponentCache_o *pCVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Quaternion_o *pUVar11;
  Characters_AnnieComponentCache_o *pCVar12;
  System_String_o *pSVar13;
  Characters_BaseHitbox_o *pCVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Quaternion_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_184346d24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346d24 = '\x01';
  }
  fVar16 = (*(__this->klass->vtable)._193_GetAnimationTime.methodPtr)
                     (__this,(__this->klass->vtable)._193_GetAnimationTime.method);
  pCVar4 = (__this->fields).AnnieAnimations;
  if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
  bVar8 = System_String__op_Equality
                    ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackCombo,(MethodInfo *)0x0);
  if (bVar8) {
    if (((__this->fields)._currentAttackStage != 0) || (fVar16 <= 0.155)) {
      if (((__this->fields)._currentAttackStage != 1) || (fVar16 <= 0.32)) {
        if ((__this->fields)._currentAttackStage != 2) {
          return;
        }
        if (fVar16 <= 0.59) {
          return;
        }
        pCVar12 = (__this->fields).AnnieCache;
        (__this->fields)._currentAttackStage = 3;
        if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
        fVar16 = 0.05;
label_182166115:
        pCVar14 = (pCVar12->fields).FootRHitbox;
        fVar16 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                           (__this,fVar16,(__this->klass->vtable)._194_GetHitboxTime.method);
        if (pCVar14 == (Characters_BaseHitbox_o *)0x0) goto label_182166296;
        Characters_BaseHitbox__Activate(pCVar14,0.0,fVar16,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        pSVar13 = TypeInfo_Characters_TitanSounds->static_fields->Swing3;
        goto label_1821660b0;
      }
      pCVar12 = (__this->fields).AnnieCache;
      (__this->fields)._currentAttackStage = 2;
      if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
      pCVar14 = (pCVar12->fields).FootLHitbox;
      fVar16 = 0.06;
label_182166056:
      fVar16 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                         (__this,fVar16,(__this->klass->vtable)._194_GetHitboxTime.method);
      if (pCVar14 == (Characters_BaseHitbox_o *)0x0) goto label_182166296;
      Characters_BaseHitbox__Activate(pCVar14,0.0,fVar16,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      pSVar13 = TypeInfo_Characters_TitanSounds->static_fields->Swing2;
      goto label_1821660b0;
    }
    pCVar12 = (__this->fields).AnnieCache;
    (__this->fields)._currentAttackStage = 1;
    if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
    fVar16 = 0.07;
label_1821661b7:
    pCVar14 = (pCVar12->fields).FootRHitbox;
  }
  else {
    pCVar4 = (__this->fields).AnnieAnimations;
    if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
    bVar8 = System_String__op_Equality
                      ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackComboBlind,
                       (MethodInfo *)0x0);
    if (bVar8) {
      if (((__this->fields)._currentAttackStage != 0) || (fVar16 <= 0.222)) {
        if (((__this->fields)._currentAttackStage != 1) || (fVar16 <= 0.386)) {
          if ((__this->fields)._currentAttackStage != 2) {
            return;
          }
          if (fVar16 <= 0.612) {
            return;
          }
          pCVar12 = (__this->fields).AnnieCache;
          (__this->fields)._currentAttackStage = 3;
          if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
          fVar16 = 0.04;
          goto label_182166115;
        }
        pCVar12 = (__this->fields).AnnieCache;
        (__this->fields)._currentAttackStage = 2;
        if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
        pCVar14 = (pCVar12->fields).HandRHitbox;
        fVar16 = 0.07;
        goto label_182166056;
      }
      pCVar12 = (__this->fields).AnnieCache;
      (__this->fields)._currentAttackStage = 1;
      if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
      pCVar14 = (pCVar12->fields).HandRHitbox;
      fVar16 = 0.04;
    }
    else {
      pCVar4 = (__this->fields).AnnieAnimations;
      if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
      bVar8 = System_String__op_Equality
                        ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackKick,
                         (MethodInfo *)0x0);
      if (bVar8) {
        if ((__this->fields)._currentAttackStage != 0) {
          return;
        }
        if (fVar16 <= 0.395) {
          return;
        }
        pCVar12 = (__this->fields).AnnieCache;
        (__this->fields)._currentAttackStage = 1;
        if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
        fVar16 = 0.12;
        goto label_1821661b7;
      }
      pCVar4 = (__this->fields).AnnieAnimations;
      if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
      bVar8 = System_String__op_Equality
                        ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackSwing,
                         (MethodInfo *)0x0);
      if (bVar8) {
        if ((__this->fields)._currentAttackStage != 0) {
          return;
        }
        bVar8 = fVar16 == 0.47;
        bVar15 = fVar16 < 0.47;
label_182165b86:
        if (bVar15 || bVar8) {
          return;
        }
        pCVar12 = (__this->fields).AnnieCache;
        (__this->fields)._currentAttackStage = 1;
        if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
        pCVar14 = (pCVar12->fields).HandRHitbox;
        fVar16 = 0.09;
      }
      else {
        pCVar4 = (__this->fields).AnnieAnimations;
        if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
        bVar8 = System_String__op_Equality
                          ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackStomp,
                           (MethodInfo *)0x0);
        if (bVar8) {
          if (((__this->fields)._currentAttackStage != 0) || (fVar16 <= 0.24)) {
            if ((__this->fields)._currentAttackStage != 1) {
              return;
            }
            if (fVar16 <= 0.33) {
              return;
            }
            pCVar5 = (__this->fields).BaseTitanCache;
            if (((pCVar5 != (Characters_BaseTitanComponentCache_o *)0x0) &&
                (pCVar14 = (pCVar5->fields).FootLHitbox, pCVar14 != (Characters_BaseHitbox_o *)0x0)) &&
               (pUVar9 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pCVar14,(MethodInfo *)0x0),
               pUVar9 != (UnityEngine_Transform_o *)0x0)) {
              pUVar10 = UnityEngine_Transform__get_position(&local_68,pUVar9,(MethodInfo *)0x0);
              pCVar5 = (__this->fields).BaseTitanCache;
              fVar16 = (pUVar10->fields).x;
              fVar3 = (pUVar10->fields).z;
              if ((pCVar5 != (Characters_BaseTitanComponentCache_o *)0x0) &&
                 (pUVar9 = (pCVar5->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                pUVar10 = UnityEngine_Transform__get_position(&local_68,pUVar9,(MethodInfo *)0x0);
                fVar1 = (pUVar10->fields).y;
                if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                }
                pCVar5 = (__this->fields).BaseTitanCache;
                if ((pCVar5 != (Characters_BaseTitanComponentCache_o *)0x0) &&
                   (pUVar9 = (pCVar5->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                  pSVar13 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom5;
                  pUVar11 = UnityEngine_Transform__get_rotation
                                      ((UnityEngine_Quaternion_o *)local_58,pUVar9,(MethodInfo *)0x0);
                  fVar2 = (__this->fields).Size;
                  uVar6._0_4_ = (pUVar11->fields).x;
                  uVar6._4_4_ = (pUVar11->fields).y;
                  uVar7._0_4_ = (pUVar11->fields).z;
                  uVar7._4_4_ = (pUVar11->fields).w;
                  fVar17 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)(__this);
                  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                  }
                  local_68.fields.x = fVar16;
                  local_68.fields.y = fVar1;
                  local_68.fields.z = fVar3;
                  local_58[0]._0_8_ = uVar6;
                  local_58[0]._8_8_ = uVar7;
                  Effects_EffectSpawner__Spawn
                            (pSVar13,&local_68,(UnityEngine_Quaternion_o *)local_58,fVar17 * fVar2,true,
                             (System_Object_array *)0x0,(MethodInfo *)0x0);
                  local_68.fields.x = fVar16;
                  local_68.fields.y = fVar1;
                  local_68.fields.z = fVar3;
                  (*(__this->klass->vtable)._200_SpawnShatter.methodPtr)
                            (__this,&local_68,(__this->klass->vtable)._200_SpawnShatter.method);
                  (__this->fields)._currentAttackStage = 2;
                  return;
                }
              }
            }
            goto label_182166296;
          }
          pCVar12 = (__this->fields).AnnieCache;
          (__this->fields)._currentAttackStage = 1;
          if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
          pCVar14 = (pCVar12->fields).FootLHitbox;
          fVar16 = 0.09;
label_1821659f9:
          fVar16 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                             (__this,fVar16,(__this->klass->vtable)._194_GetHitboxTime.method);
          if (pCVar14 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Activate(pCVar14,0.0,fVar16,(MethodInfo *)0x0);
            return;
          }
          goto label_182166296;
        }
        pCVar4 = (__this->fields).AnnieAnimations;
        if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
        bVar8 = System_String__op_Equality
                          ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackHead,
                           (MethodInfo *)0x0);
        if (bVar8) {
          if ((__this->fields)._currentAttackStage != 0) {
            return;
          }
          if (fVar16 <= 0.26) {
            return;
          }
          pCVar12 = (__this->fields).AnnieCache;
          (__this->fields)._currentAttackStage = 1;
          if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
          pCVar14 = (pCVar12->fields).HandLHitbox;
          fVar16 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                             (__this,0.08,(__this->klass->vtable)._194_GetHitboxTime.method);
          if (pCVar14 == (Characters_BaseHitbox_o *)0x0) goto label_182166296;
          Characters_BaseHitbox__Activate(pCVar14,0.0,fVar16,(MethodInfo *)0x0);
          pCVar12 = (__this->fields).AnnieCache;
          if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
          pCVar14 = (pCVar12->fields).HandRHitbox;
          fVar16 = 0.08;
        }
        else {
          pCVar4 = (__this->fields).AnnieAnimations;
          if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
          bVar8 = System_String__op_Equality
                            ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackBite,
                             (MethodInfo *)0x0);
          if (bVar8) {
            if ((__this->fields)._currentAttackStage != 0) {
              return;
            }
            if (fVar16 <= 0.27) {
              return;
            }
            pCVar12 = (__this->fields).AnnieCache;
            (__this->fields)._currentAttackStage = 1;
            if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
            pCVar14 = (pCVar12->fields).MouthHitbox;
            fVar16 = 0.12;
            goto label_1821659f9;
          }
          pCVar4 = (__this->fields).AnnieAnimations;
          if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
          bVar8 = System_String__op_Equality
                            ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackBrushBack,
                             (MethodInfo *)0x0);
          if (bVar8) {
            if ((__this->fields)._currentAttackStage != 0) {
              return;
            }
            bVar8 = fVar16 == 0.41;
            bVar15 = fVar16 < 0.41;
          }
          else {
            pCVar4 = (__this->fields).AnnieAnimations;
            if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
            bVar8 = System_String__op_Equality
                              ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackBrushFrontL,
                               (MethodInfo *)0x0);
            if (!bVar8) {
              pCVar4 = (__this->fields).AnnieAnimations;
              if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
              bVar8 = System_String__op_Equality
                                ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackBrushFrontR,
                                 (MethodInfo *)0x0);
              if (bVar8) {
                if ((__this->fields)._currentAttackStage != 0) {
                  return;
                }
                if (fVar16 <= 0.45) {
                  return;
                }
                pCVar12 = (__this->fields).AnnieCache;
                (__this->fields)._currentAttackStage = 1;
                if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
                pCVar14 = (pCVar12->fields).HandLHitbox;
                fVar16 = 0.18;
              }
              else {
                pCVar4 = (__this->fields).AnnieAnimations;
                if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                bVar8 = System_String__op_Equality
                                  ((__this->fields)._currentAttackAnimation,(pCVar4->fields).AttackBrushHeadL,
                                   (MethodInfo *)0x0);
                if (!bVar8) {
                  pCVar4 = (__this->fields).AnnieAnimations;
                  if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                  bVar8 = System_String__op_Equality
                                    ((__this->fields)._currentAttackAnimation,
                                     (pCVar4->fields).AttackBrushHeadR,(MethodInfo *)0x0);
                  if (bVar8) {
                    if ((__this->fields)._currentAttackStage != 0) {
                      return;
                    }
                    bVar8 = fVar16 == 0.42;
                    bVar15 = fVar16 < 0.42;
                    goto label_182165b86;
                  }
                  pCVar4 = (__this->fields).AnnieAnimations;
                  if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                  bVar8 = System_String__op_Equality
                                    ((__this->fields)._currentAttackAnimation,
                                     (pCVar4->fields).AttackGrabBottomLeft,(MethodInfo *)0x0);
                  if (bVar8) {
                    if ((__this->fields)._currentAttackStage != 0) {
                      return;
                    }
                    if (fVar16 <= 0.31) {
                      return;
                    }
                    pCVar12 = (__this->fields).AnnieCache;
                    (__this->fields)._currentAttackStage = 1;
                    if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
                    pCVar14 = (pCVar12->fields).HandRHitbox;
                    fVar16 = 0.04;
                  }
                  else {
                    pCVar4 = (__this->fields).AnnieAnimations;
                    if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                    bVar8 = System_String__op_Equality
                                      ((__this->fields)._currentAttackAnimation,
                                       (pCVar4->fields).AttackGrabBottomRight,(MethodInfo *)0x0);
                    if (bVar8) {
                      if ((__this->fields)._currentAttackStage != 0) {
                        return;
                      }
                      if (fVar16 <= 0.31) {
                        return;
                      }
                      pCVar12 = (__this->fields).AnnieCache;
                      (__this->fields)._currentAttackStage = 1;
                      if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
                      pCVar14 = (pCVar12->fields).HandLHitbox;
                      fVar16 = 0.04;
                    }
                    else {
                      pCVar4 = (__this->fields).AnnieAnimations;
                      if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                      bVar8 = System_String__op_Equality
                                        ((__this->fields)._currentAttackAnimation,
                                         (pCVar4->fields).AttackGrabMidLeft,(MethodInfo *)0x0);
                      if (bVar8) {
                        if ((__this->fields)._currentAttackStage != 0) {
                          return;
                        }
                        bVar8 = fVar16 == 0.31;
                        bVar15 = fVar16 < 0.31;
label_1821659ca:
                        if (bVar15 || bVar8) {
                          return;
                        }
                        pCVar12 = (__this->fields).AnnieCache;
                        (__this->fields)._currentAttackStage = 1;
                        if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
                        pCVar14 = (pCVar12->fields).HandRHitbox;
                      }
                      else {
                        pCVar4 = (__this->fields).AnnieAnimations;
                        if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                        bVar8 = System_String__op_Equality
                                          ((__this->fields)._currentAttackAnimation,
                                           (pCVar4->fields).AttackGrabMidRight,(MethodInfo *)0x0);
                        if (bVar8) {
                          if ((__this->fields)._currentAttackStage != 0) {
                            return;
                          }
                          bVar8 = fVar16 == 0.31;
                          bVar15 = fVar16 < 0.31;
                        }
                        else {
                          pCVar4 = (__this->fields).AnnieAnimations;
                          if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                          bVar8 = System_String__op_Equality
                                            ((__this->fields)._currentAttackAnimation,
                                             (pCVar4->fields).AttackGrabUp,(MethodInfo *)0x0);
                          if (bVar8) {
                            if ((__this->fields)._currentAttackStage != 0) {
                              return;
                            }
                            if (fVar16 <= 0.27) {
                              return;
                            }
                            pCVar12 = (__this->fields).AnnieCache;
                            (__this->fields)._currentAttackStage = 1;
                            if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
                            pCVar14 = (pCVar12->fields).HandLHitbox;
                            fVar16 = 0.1;
                            goto label_1821659f9;
                          }
                          pCVar4 = (__this->fields).AnnieAnimations;
                          if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                          bVar8 = System_String__op_Equality
                                            ((__this->fields)._currentAttackAnimation,
                                             (pCVar4->fields).AttackGrabUpLeft,(MethodInfo *)0x0);
                          if (!bVar8) {
                            pCVar4 = (__this->fields).AnnieAnimations;
                            if (pCVar4 == (Characters_AnnieAnimations_o *)0x0) goto label_182166296;
                            bVar8 = System_String__op_Equality
                                              ((__this->fields)._currentAttackAnimation,
                                               (pCVar4->fields).AttackGrabUpRight,(MethodInfo *)0x0);
                            if (!bVar8) {
                              return;
                            }
                            if ((__this->fields)._currentAttackStage != 0) {
                              return;
                            }
                            bVar8 = fVar16 == 0.28;
                            bVar15 = fVar16 < 0.28;
                            goto label_1821659ca;
                          }
                          if ((__this->fields)._currentAttackStage != 0) {
                            return;
                          }
                          bVar8 = fVar16 == 0.28;
                          bVar15 = fVar16 < 0.28;
                        }
                        if (bVar15 || bVar8) {
                          return;
                        }
                        pCVar12 = (__this->fields).AnnieCache;
                        (__this->fields)._currentAttackStage = 1;
                        if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
                        pCVar14 = (pCVar12->fields).HandLHitbox;
                      }
                      fVar16 = 0.05;
                    }
                  }
                  goto label_1821659f9;
                }
                if ((__this->fields)._currentAttackStage != 0) {
                  return;
                }
                if (fVar16 <= 0.42) {
                  return;
                }
                pCVar12 = (__this->fields).AnnieCache;
                (__this->fields)._currentAttackStage = 1;
                if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
                pCVar14 = (pCVar12->fields).HandLHitbox;
                fVar16 = 0.09;
              }
              goto label_1821661be;
            }
            if ((__this->fields)._currentAttackStage != 0) {
              return;
            }
            bVar8 = fVar16 == 0.45;
            bVar15 = fVar16 < 0.45;
          }
          if (bVar15 || bVar8) {
            return;
          }
          pCVar12 = (__this->fields).AnnieCache;
          (__this->fields)._currentAttackStage = 1;
          if (pCVar12 == (Characters_AnnieComponentCache_o *)0x0) goto label_182166296;
          pCVar14 = (pCVar12->fields).HandRHitbox;
          fVar16 = 0.18;
        }
      }
    }
  }
label_1821661be:
  fVar16 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                     (__this,fVar16,(__this->klass->vtable)._194_GetHitboxTime.method);
  if (pCVar14 == (Characters_BaseHitbox_o *)0x0) {
label_182166296:
    ThrowNullReferenceException();
  }
  Characters_BaseHitbox__Activate(pCVar14,0.0,fVar16,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  pSVar13 = TypeInfo_Characters_TitanSounds->static_fields->Swing1;
label_1821660b0:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,pSVar13,(MethodInfo *)0x0);
  return;
}


// Characters.AnnieShifter$$DamagedGrunt
// il2cpp: void Characters_AnnieShifter__DamagedGrunt (Characters_AnnieShifter_o* __this, float chance, const MethodInfo* method);
// 0x1821651e0

void Characters_AnnieShifter__DamagedGrunt(Characters_AnnieShifter_o *__this,float chance,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346d25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346d25 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).TitanVocalEffect, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value != false) {
      bVar3 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,
                   TypeInfo_Characters_ShifterSounds->static_fields->AnnieHurt,(MethodInfo *)0x0);
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$Blind
// il2cpp: void Characters_AnnieShifter__Blind (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x182164e80

void Characters_AnnieShifter__Blind(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  Characters_AnnieAnimations_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184346d26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackComboBlind");
    Il2CppMethodInitialized_184346d26 = '\x01';
  }
  pCVar1 = (__this->fields).AnnieAnimations;
  if (pCVar1 != (Characters_AnnieAnimations_o *)0x0) {
    bVar2 = System_String__op_Inequality
                      ((__this->fields)._currentAttackAnimation,(pCVar1->fields).AttackComboBlind,
                       (MethodInfo *)0x0);
    if ((bVar2) && ((__this->fields)._disableCooldownLeft <= 0.0)) {
      (*(__this->klass->vtable)._195_DamagedGrunt.methodPtr)
                (__this,1.0,(__this->klass->vtable)._195_DamagedGrunt.method);
      (*(__this->klass->vtable)._150_Attack.methodPtr)
                (__this,"AttackComboBlind",(__this->klass->vtable)._150_Attack.method);
      fVar3 = (*(__this->klass->vtable)._135_get_DisableCooldown.methodPtr)
                        (__this,(__this->klass->vtable)._135_get_DisableCooldown.method);
      (__this->fields)._disableCooldownLeft = fVar3 + 2.0;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$.ctor
// il2cpp: void Characters_AnnieShifter___ctor (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x1821662a0

void
Characters_AnnieShifter___ctor(Characters_AnnieShifter_o* __this, MethodInfo* method)

{
  (__this->fields)._needRoar = true;
  (__this->fields).DeathAnimationLength = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


