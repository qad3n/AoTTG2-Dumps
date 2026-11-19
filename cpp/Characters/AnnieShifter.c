// Type: Characters.AnnieShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AnnieShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Annie/AnnieShifter.cs
// --------------------------------

// Characters.AnnieShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_AnnieShifter__get_EmoteActions (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x5c14190

System_Collections_Generic_List_string__o *
Characters_AnnieShifter__get_EmoteActions(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_075476ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    il2cpp_codegen_initialize_runtime_metadata(&"Taunt");
    Il2CppMethodInitialized_075476ed = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Salute";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      pSVar5 = "Roar";
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        pSVar5 = "Taunt";
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 != (System_String_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          pSVar5 = "Wave";
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 != (System_String_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            return __this_00;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$CreateCache
// il2cpp: void Characters_AnnieShifter__CreateCache (Characters_AnnieShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x5c143a0

void Characters_AnnieShifter__CreateCache
               (Characters_AnnieShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_AnnieComponentCache_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075476ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnnieComponentCache);
    Il2CppMethodInitialized_075476ee = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnnieComponentCache);
  Characters_AnnieComponentCache___ctor(__this_00,owner,method_00);
  (__this->fields).AnnieCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AnnieCache);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,(Utility_BaseComponentCache_o *)(__this->fields).AnnieCache,
             (MethodInfo *)0x0);
  return;
}


// Characters.AnnieShifter$$CreateAnimations
// il2cpp: void Characters_AnnieShifter__CreateAnimations (Characters_AnnieShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x5c14420

void Characters_AnnieShifter__CreateAnimations
               (Characters_AnnieShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_AnnieAnimations_o *__this_00;
  
  if (Il2CppMethodInitialized_075476ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnnieAnimations);
    Il2CppMethodInitialized_075476ef = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnnieAnimations);
  Characters_AnnieAnimations___ctor(__this_00,(MethodInfo *)animations);
  (__this->fields).AnnieAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AnnieAnimations);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).AnnieAnimations,(MethodInfo *)0x0);
  return;
}


// Characters.AnnieShifter$$Emote
// il2cpp: void Characters_AnnieShifter__Emote (Characters_AnnieShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5c14490

void Characters_AnnieShifter__Emote
               (Characters_AnnieShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_AnnieAnimations_o *pCVar1;
  bool bVar2;
  System_Collections_IEnumerator_o *routine;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_075476f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    il2cpp_codegen_initialize_runtime_metadata(&"Taunt");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075476f0 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._146_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._146_CanEmote.method);
  if (bVar2) {
    a = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    bVar2 = System_String__op_Equality(emote,"Salute",(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).AnnieAnimations;
      if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) {
label_05c1466b:
        ThrowNullReferenceException();
      }
      a = (pCVar1->fields).EmoteSalute;
    }
    else {
      bVar2 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
      if (bVar2) {
        pCVar1 = (__this->fields).AnnieAnimations;
        if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) goto label_05c1466b;
        a = (pCVar1->fields).EmoteRoar;
        if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
        }
        routine = Characters_BaseCharacter__WaitAndPlaySound
                            ((Characters_BaseCharacter_o *)__this,
                             TypeInfo_Characters_ShifterSounds->static_fields->AnnieRoar,0.1,(MethodInfo *)0x0
                            );
        UnityEngine_MonoBehaviour__StartCoroutine_691c390
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      }
      else {
        bVar2 = System_String__op_Equality(emote,"Taunt",(MethodInfo *)0x0);
        if (bVar2) {
          pCVar1 = (__this->fields).AnnieAnimations;
          if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) goto label_05c1466b;
          a = (pCVar1->fields).EmoteTaunt;
        }
        else {
          bVar2 = System_String__op_Equality(emote,"Wave",(MethodInfo *)0x0);
          if (bVar2) {
            pCVar1 = (__this->fields).AnnieAnimations;
            if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) goto label_05c1466b;
            a = (pCVar1->fields).EmoteWave;
          }
        }
      }
    }
    bVar2 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
    if (bVar2) {
      Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)__this,8,a,0.1,true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.AnnieShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_AnnieShifter__CreateCustomSkinLoader (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x5c14670

CustomSkins_BaseCustomSkinLoader_o *
Characters_AnnieShifter__CreateCustomSkinLoader(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (Il2CppMethodInitialized_075476f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AnnieCustomSkinLoader);
    Il2CppMethodInitialized_075476f1 = '\x01';
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


// Characters.AnnieShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_AnnieShifter__GetSkinURL (Characters_AnnieShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x5c146c0

System_String_o *
Characters_AnnieShifter__GetSkinURL
          (Characters_AnnieShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_075476f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075476f2 = '\x01';
  }
  if ((set == (Settings_ShifterCustomSkinSet_o *)0x0) ||
     (pSVar1 = (set->fields).Annie, pSVar1 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value;
}


// Characters.AnnieShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_AnnieShifter__GetRootMotionAnimations (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x5c14700

System_Collections_Generic_Dictionary_string__float__o *
Characters_AnnieShifter__GetRootMotionAnimations(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  Characters_AnnieAnimations_o *pCVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_075476f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_075476f3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  pCVar1 = (__this->fields).AnnieAnimations;
  if ((pCVar1 == (Characters_AnnieAnimations_o *)0x0) ||
     (__this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__float___Add
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (Il2CppObject *)(pCVar1->fields).AttackCombo,0.95,
             (MethodInfo_4AB5470 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
  return __this_00;
}


// Characters.AnnieShifter$$IsComboAttack
// il2cpp: bool Characters_AnnieShifter__IsComboAttack (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x5c147a0

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
// 0x5c147f0

bool Characters_AnnieShifter__get_BasicAttacksStunOnly(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  return true;
}


// Characters.AnnieShifter$$UpdateAttack
// il2cpp: void Characters_AnnieShifter__UpdateAttack (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x5c14800
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c149b8: jmp 0x5c15501
// asm:   0x5c14a9f: jmp 0x5c15501
// asm:   0x5c150a0: jmp 0x5c154f7
// asm:   0x5c15236: jmp 0x5c154f7
// asm:   0x5c153c9: jmp 0x5c154f7

void Characters_AnnieShifter__UpdateAttack(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_AnnieAnimations_o *pCVar2;
  Characters_AnnieComponentCache_o *pCVar3;
  Characters_BaseTitanComponentCache_o *pCVar4;
  bool bVar5;
  UnityEngine_Transform_o *pUVar6;
  Characters_AnnieShifter_c *pCVar7;
  Characters_BaseHitbox_o *pCVar8;
  System_String_o *pSVar9;
  MethodInfo *pMVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  undefined8 local_58;
  float local_38;
  
  if (Il2CppMethodInitialized_075476f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_075476f4 = '\x01';
  }
  fVar11 = (*(__this->klass->vtable)._194_GetAnimationTime.methodPtr)
                     (__this,(__this->klass->vtable)._194_GetAnimationTime.method);
  pCVar2 = (__this->fields).AnnieAnimations;
  if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
  bVar5 = System_String__op_Equality
                    ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackCombo,(MethodInfo *)0x0);
  if (bVar5) {
    iVar1 = (__this->fields)._currentAttackStage;
    if ((fVar11 <= 0.155) || (iVar1 != 0)) {
      if ((fVar11 <= 0.32) || (iVar1 != 1)) {
        if (fVar11 <= 0.59) {
          return;
        }
        if (iVar1 != 2) {
          return;
        }
        (__this->fields)._currentAttackStage = 3;
        pCVar3 = (__this->fields).AnnieCache;
        if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
        pCVar8 = (pCVar3->fields).FootRHitbox;
        fVar11 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                           (__this,0.05,(__this->klass->vtable)._195_GetHitboxTime.method);
joined_r0x05c14c7c:
        if (pCVar8 != (Characters_BaseHitbox_o *)0x0) {
          (*(pCVar8->klass->vtable)._5_Activate.methodPtr)
                    (pCVar8,0.0,fVar11,(pCVar8->klass->vtable)._5_Activate.method);
          if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
          }
          pSVar9 = TypeInfo_Characters_TitanSounds->static_fields->Swing3;
          goto label_05c14c13;
        }
        goto label_05c15501;
      }
      (__this->fields)._currentAttackStage = 2;
      pCVar3 = (__this->fields).AnnieCache;
      if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
      pCVar8 = (pCVar3->fields).FootLHitbox;
      fVar11 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                         (__this,0.06,(__this->klass->vtable)._195_GetHitboxTime.method);
joined_r0x05c14afa:
      if (pCVar8 != (Characters_BaseHitbox_o *)0x0) {
        (*(pCVar8->klass->vtable)._5_Activate.methodPtr)
                  (pCVar8,0.0,fVar11,(pCVar8->klass->vtable)._5_Activate.method);
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        pSVar9 = TypeInfo_Characters_TitanSounds->static_fields->Swing2;
        goto label_05c14c13;
      }
      goto label_05c15501;
    }
    (__this->fields)._currentAttackStage = 1;
    pCVar3 = (__this->fields).AnnieCache;
    if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
    pCVar8 = (pCVar3->fields).FootRHitbox;
    pCVar7 = __this->klass;
    pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
    fVar11 = 0.07;
  }
  else {
    pCVar2 = (__this->fields).AnnieAnimations;
    if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
    bVar5 = System_String__op_Equality
                      ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackComboBlind,
                       (MethodInfo *)0x0);
    if (bVar5) {
      iVar1 = (__this->fields)._currentAttackStage;
      if ((fVar11 <= 0.222) || (iVar1 != 0)) {
        if ((fVar11 <= 0.386) || (iVar1 != 1)) {
          if (fVar11 <= 0.612) {
            return;
          }
          if (iVar1 != 2) {
            return;
          }
          (__this->fields)._currentAttackStage = 3;
          pCVar3 = (__this->fields).AnnieCache;
          if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
          pCVar8 = (pCVar3->fields).FootRHitbox;
          fVar11 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                             (__this,0.04,(__this->klass->vtable)._195_GetHitboxTime.method);
          goto joined_r0x05c14c7c;
        }
        (__this->fields)._currentAttackStage = 2;
        pCVar3 = (__this->fields).AnnieCache;
        if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
        pCVar8 = (pCVar3->fields).HandRHitbox;
        fVar11 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                           (__this,0.07,(__this->klass->vtable)._195_GetHitboxTime.method);
        goto joined_r0x05c14afa;
      }
      (__this->fields)._currentAttackStage = 1;
      pCVar3 = (__this->fields).AnnieCache;
      if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
      pCVar8 = (pCVar3->fields).HandRHitbox;
      pCVar7 = __this->klass;
      pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
      fVar11 = 0.04;
    }
    else {
      pCVar2 = (__this->fields).AnnieAnimations;
      if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
      bVar5 = System_String__op_Equality
                        ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackKick,
                         (MethodInfo *)0x0);
      if (bVar5) {
        if (fVar11 <= 0.395) {
          return;
        }
        if ((__this->fields)._currentAttackStage != 0) {
          return;
        }
        (__this->fields)._currentAttackStage = 1;
        pCVar3 = (__this->fields).AnnieCache;
        if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
        pCVar8 = (pCVar3->fields).FootRHitbox;
        pCVar7 = __this->klass;
        pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
        fVar11 = 0.12;
      }
      else {
        pCVar2 = (__this->fields).AnnieAnimations;
        if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
        bVar5 = System_String__op_Equality
                          ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackSwing,
                           (MethodInfo *)0x0);
        if (bVar5) {
          if (fVar11 <= 0.47) {
            return;
          }
label_05c14b80:
          if ((__this->fields)._currentAttackStage != 0) {
            return;
          }
          (__this->fields)._currentAttackStage = 1;
          pCVar3 = (__this->fields).AnnieCache;
          if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
          pCVar8 = (pCVar3->fields).HandRHitbox;
label_05c14bb0:
          pCVar7 = __this->klass;
          pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
          fVar11 = 0.09;
        }
        else {
          pCVar2 = (__this->fields).AnnieAnimations;
          if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
          bVar5 = System_String__op_Equality
                            ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackStomp,
                             (MethodInfo *)0x0);
          if (bVar5) {
            iVar1 = (__this->fields)._currentAttackStage;
            if ((fVar11 <= 0.24) || (iVar1 != 0)) {
              if (fVar11 <= 0.33) {
                return;
              }
              if (iVar1 != 1) {
                return;
              }
              pCVar4 = (__this->fields).BaseTitanCache;
              if (((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
                  (pCVar8 = (pCVar4->fields).FootLHitbox, pCVar8 != (Characters_BaseHitbox_o *)0x0)) &&
                 (pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                UVar13 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                pCVar4 = (__this->fields).BaseTitanCache;
                if ((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
                   (pUVar6 = (pCVar4->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                  UVar14 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                  }
                  pCVar4 = (__this->fields).BaseTitanCache;
                  if ((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
                     (pUVar6 = (pCVar4->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                    local_38 = UVar13.fields.x;
                    pSVar9 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom5;
                    rotation = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
                    fVar11 = (__this->fields).Size;
                    fVar12 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                                       (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
                    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                    }
                    UVar13.fields.x = local_38;
                    UVar13.fields.y = UVar14.fields.y;
                    Effects_EffectSpawner__Spawn
                              (pSVar9,UVar13,rotation,fVar11 * fVar12,true,(System_Object_array *)0x0,
                               (MethodInfo *)0x0);
                    UVar15.fields.z = UVar13.fields.z;
                    UVar15.fields.x = local_38;
                    UVar15.fields.y = UVar14.fields.y;
                    (*(__this->klass->vtable)._201_SpawnShatter.methodPtr)
                              (__this,UVar15,(__this->klass->vtable)._201_SpawnShatter.method);
                    (__this->fields)._currentAttackStage = 2;
                    return;
                  }
                }
              }
              goto label_05c15501;
            }
            (__this->fields)._currentAttackStage = 1;
            pCVar3 = (__this->fields).AnnieCache;
            if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
            pCVar8 = (pCVar3->fields).FootLHitbox;
            pCVar7 = __this->klass;
            pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
            fVar11 = 0.09;
label_05c15035:
            fVar11 = (*(pCVar7->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar11,pMVar10);
            if (pCVar8 != (Characters_BaseHitbox_o *)0x0) {
              (*(pCVar8->klass->vtable)._5_Activate.methodPtr)
                        (pCVar8,0.0,fVar11,(pCVar8->klass->vtable)._5_Activate.method);
              return;
            }
            goto label_05c15501;
          }
          pCVar2 = (__this->fields).AnnieAnimations;
          if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
          bVar5 = System_String__op_Equality
                            ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackHead,
                             (MethodInfo *)0x0);
          if (bVar5) {
            if (fVar11 <= 0.26) {
              return;
            }
            if ((__this->fields)._currentAttackStage != 0) {
              return;
            }
            (__this->fields)._currentAttackStage = 1;
            pCVar3 = (__this->fields).AnnieCache;
            if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
            pCVar8 = (pCVar3->fields).HandLHitbox;
            fVar11 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                               (__this,0.08,(__this->klass->vtable)._195_GetHitboxTime.method);
            if (pCVar8 == (Characters_BaseHitbox_o *)0x0) goto label_05c15501;
            (*(pCVar8->klass->vtable)._5_Activate.methodPtr)
                      (pCVar8,0.0,fVar11,(pCVar8->klass->vtable)._5_Activate.method);
            pCVar3 = (__this->fields).AnnieCache;
            if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
            pCVar8 = (pCVar3->fields).HandRHitbox;
            pCVar7 = __this->klass;
            pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
            fVar11 = 0.08;
            goto label_05c14bc2;
          }
          pCVar2 = (__this->fields).AnnieAnimations;
          if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
          bVar5 = System_String__op_Equality
                            ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackBite,
                             (MethodInfo *)0x0);
          if (bVar5) {
            if (fVar11 <= 0.27) {
              return;
            }
            if ((__this->fields)._currentAttackStage != 0) {
              return;
            }
            (__this->fields)._currentAttackStage = 1;
            pCVar3 = (__this->fields).AnnieCache;
            if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
            pCVar8 = (pCVar3->fields).MouthHitbox;
            pCVar7 = __this->klass;
            pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
            fVar11 = 0.12;
            goto label_05c15035;
          }
          pCVar2 = (__this->fields).AnnieAnimations;
          if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
          bVar5 = System_String__op_Equality
                            ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackBrushBack,
                             (MethodInfo *)0x0);
          if (bVar5) {
            if (fVar11 <= 0.41) {
              return;
            }
label_05c150dd:
            if ((__this->fields)._currentAttackStage != 0) {
              return;
            }
            (__this->fields)._currentAttackStage = 1;
            pCVar3 = (__this->fields).AnnieCache;
            if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
            pCVar8 = (pCVar3->fields).HandRHitbox;
          }
          else {
            pCVar2 = (__this->fields).AnnieAnimations;
            if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
            bVar5 = System_String__op_Equality
                              ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackBrushFrontL,
                               (MethodInfo *)0x0);
            if (bVar5) {
              if (fVar11 <= 0.45) {
                return;
              }
              goto label_05c150dd;
            }
            pCVar2 = (__this->fields).AnnieAnimations;
            if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
            bVar5 = System_String__op_Equality
                              ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackBrushFrontR,
                               (MethodInfo *)0x0);
            if (!bVar5) {
              pCVar2 = (__this->fields).AnnieAnimations;
              if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
              bVar5 = System_String__op_Equality
                                ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackBrushHeadL,
                                 (MethodInfo *)0x0);
              if (bVar5) {
                if (fVar11 <= 0.42) {
                  return;
                }
                if ((__this->fields)._currentAttackStage != 0) {
                  return;
                }
                (__this->fields)._currentAttackStage = 1;
                pCVar3 = (__this->fields).AnnieCache;
                if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
                pCVar8 = (pCVar3->fields).HandLHitbox;
                goto label_05c14bb0;
              }
              pCVar2 = (__this->fields).AnnieAnimations;
              if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
              bVar5 = System_String__op_Equality
                                ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackBrushHeadR,
                                 (MethodInfo *)0x0);
              if (bVar5) {
                if (fVar11 <= 0.42) {
                  return;
                }
                goto label_05c14b80;
              }
              pCVar2 = (__this->fields).AnnieAnimations;
              if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
              bVar5 = System_String__op_Equality
                                ((__this->fields)._currentAttackAnimation,
                                 (pCVar2->fields).AttackGrabBottomLeft,(MethodInfo *)0x0);
              if (bVar5) {
                if (fVar11 <= 0.31) {
                  return;
                }
                if ((__this->fields)._currentAttackStage != 0) {
                  return;
                }
                (__this->fields)._currentAttackStage = 1;
                pCVar3 = (__this->fields).AnnieCache;
                if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
                pCVar8 = (pCVar3->fields).HandRHitbox;
              }
              else {
                pCVar2 = (__this->fields).AnnieAnimations;
                if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
                bVar5 = System_String__op_Equality
                                  ((__this->fields)._currentAttackAnimation,
                                   (pCVar2->fields).AttackGrabBottomRight,(MethodInfo *)0x0);
                if (!bVar5) {
                  pCVar2 = (__this->fields).AnnieAnimations;
                  if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
                  bVar5 = System_String__op_Equality
                                    ((__this->fields)._currentAttackAnimation,
                                     (pCVar2->fields).AttackGrabMidLeft,(MethodInfo *)0x0);
                  if (bVar5) {
                    if (fVar11 <= 0.31) {
                      return;
                    }
label_05c1535c:
                    if ((__this->fields)._currentAttackStage != 0) {
                      return;
                    }
                    (__this->fields)._currentAttackStage = 1;
                    pCVar3 = (__this->fields).AnnieCache;
                    if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
                    pCVar8 = (pCVar3->fields).HandRHitbox;
                  }
                  else {
                    pCVar2 = (__this->fields).AnnieAnimations;
                    if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
                    bVar5 = System_String__op_Equality
                                      ((__this->fields)._currentAttackAnimation,
                                       (pCVar2->fields).AttackGrabMidRight,(MethodInfo *)0x0);
                    if (bVar5) {
                      if (fVar11 <= 0.31) {
                        return;
                      }
                    }
                    else {
                      pCVar2 = (__this->fields).AnnieAnimations;
                      if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
                      bVar5 = System_String__op_Equality
                                        ((__this->fields)._currentAttackAnimation,
                                         (pCVar2->fields).AttackGrabUp,(MethodInfo *)0x0);
                      if (bVar5) {
                        if (fVar11 <= 0.27) {
                          return;
                        }
                        if ((__this->fields)._currentAttackStage != 0) {
                          return;
                        }
                        (__this->fields)._currentAttackStage = 1;
                        pCVar3 = (__this->fields).AnnieCache;
                        if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
                        pCVar8 = (pCVar3->fields).HandLHitbox;
                        pCVar7 = __this->klass;
                        pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
                        fVar11 = 0.1;
                        goto label_05c15035;
                      }
                      pCVar2 = (__this->fields).AnnieAnimations;
                      if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
                      bVar5 = System_String__op_Equality
                                        ((__this->fields)._currentAttackAnimation,
                                         (pCVar2->fields).AttackGrabUpLeft,(MethodInfo *)0x0);
                      if (!bVar5) {
                        pCVar2 = (__this->fields).AnnieAnimations;
                        if (pCVar2 == (Characters_AnnieAnimations_o *)0x0) goto label_05c15501;
                        bVar5 = System_String__op_Equality
                                          ((__this->fields)._currentAttackAnimation,
                                           (pCVar2->fields).AttackGrabUpRight,(MethodInfo *)0x0);
                        if (!bVar5) {
                          return;
                        }
                        if (fVar11 <= 0.28) {
                          return;
                        }
                        goto label_05c1535c;
                      }
                      if (fVar11 <= 0.28) {
                        return;
                      }
                    }
                    if ((__this->fields)._currentAttackStage != 0) {
                      return;
                    }
                    (__this->fields)._currentAttackStage = 1;
                    pCVar3 = (__this->fields).AnnieCache;
                    if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
                    pCVar8 = (pCVar3->fields).HandLHitbox;
                  }
                  pCVar7 = __this->klass;
                  pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
                  fVar11 = 0.05;
                  goto label_05c15035;
                }
                if (fVar11 <= 0.31) {
                  return;
                }
                if ((__this->fields)._currentAttackStage != 0) {
                  return;
                }
                (__this->fields)._currentAttackStage = 1;
                pCVar3 = (__this->fields).AnnieCache;
                if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
                pCVar8 = (pCVar3->fields).HandLHitbox;
              }
              pCVar7 = __this->klass;
              pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
              fVar11 = 0.04;
              goto label_05c15035;
            }
            if (fVar11 <= 0.45) {
              return;
            }
            if ((__this->fields)._currentAttackStage != 0) {
              return;
            }
            (__this->fields)._currentAttackStage = 1;
            pCVar3 = (__this->fields).AnnieCache;
            if (pCVar3 == (Characters_AnnieComponentCache_o *)0x0) goto label_05c15501;
            pCVar8 = (pCVar3->fields).HandLHitbox;
          }
          pCVar7 = __this->klass;
          pMVar10 = (pCVar7->vtable)._195_GetHitboxTime.method;
          fVar11 = 0.18;
        }
      }
    }
  }
label_05c14bc2:
  fVar11 = (*(pCVar7->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar11,pMVar10);
  if (pCVar8 != (Characters_BaseHitbox_o *)0x0) {
    (*(pCVar8->klass->vtable)._5_Activate.methodPtr)
              (pCVar8,0.0,fVar11,(pCVar8->klass->vtable)._5_Activate.method);
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    pSVar9 = TypeInfo_Characters_TitanSounds->static_fields->Swing1;
label_05c14c13:
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,pSVar9,(MethodInfo *)0x0);
    return;
  }
label_05c15501:
  ThrowNullReferenceException();
}


// Characters.AnnieShifter$$DamagedGrunt
// il2cpp: void Characters_AnnieShifter__DamagedGrunt (Characters_AnnieShifter_o* __this, float chance, const MethodInfo* method);
// 0x5c15510

void Characters_AnnieShifter__DamagedGrunt(Characters_AnnieShifter_o *__this,float chance,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075476f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075476f5 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).TitanVocalEffect, pSVar2 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pSVar2->fields)._value != false) {
    bVar3 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_ShifterSounds->static_fields->AnnieHurt,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.AnnieShifter$$Blind
// il2cpp: void Characters_AnnieShifter__Blind (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x5c155e0

void Characters_AnnieShifter__Blind(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  Characters_AnnieAnimations_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075476f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackComboBlind");
    Il2CppMethodInitialized_075476f6 = '\x01';
  }
  pCVar1 = (__this->fields).AnnieAnimations;
  if (pCVar1 == (Characters_AnnieAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__op_Inequality
                    ((__this->fields)._currentAttackAnimation,(pCVar1->fields).AttackComboBlind,
                     (MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._disableCooldownLeft <= 0.0)) {
    (*(__this->klass->vtable)._196_DamagedGrunt.methodPtr)
              (__this,1.0,(__this->klass->vtable)._196_DamagedGrunt.method);
    (*(__this->klass->vtable)._150_Attack.methodPtr)
              (__this,"AttackComboBlind",(__this->klass->vtable)._150_Attack.method);
    fVar3 = (*(__this->klass->vtable)._135_get_DisableCooldown.methodPtr)
                      (__this,(__this->klass->vtable)._135_get_DisableCooldown.method);
    (__this->fields)._disableCooldownLeft = fVar3 + 2.0;
  }
  return;
}


// Characters.AnnieShifter$$.ctor
// il2cpp: void Characters_AnnieShifter___ctor (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x5c15690

void Characters_AnnieShifter___ctor(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  (__this->fields)._needRoar = true;
  (__this->fields).DeathAnimationLength = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


