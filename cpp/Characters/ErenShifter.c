// Type: Characters.ErenShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/ErenShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Eren/ErenShifter.cs
// --------------------------------

// Characters.ErenShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_ErenShifter__get_EmoteActions (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x5c19000

System_Collections_Generic_List_string__o *
Characters_ErenShifter__get_EmoteActions(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07547725 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    Il2CppMethodInitialized_07547725 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Nod";
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
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_ErenShifter__get_DefaultRunSpeed (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x5c19140

float Characters_ErenShifter__get_DefaultRunSpeed(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  return 90.0;
}


// Characters.ErenShifter$$CreateCache
// il2cpp: void Characters_ErenShifter__CreateCache (Characters_ErenShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x5c19150

void Characters_ErenShifter__CreateCache
               (Characters_ErenShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_ErenComponentCache_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547726 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenComponentCache);
    Il2CppMethodInitialized_07547726 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ErenComponentCache);
  Characters_ErenComponentCache___ctor(__this_00,owner,method_00);
  (__this->fields).ErenCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ErenCache);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,(Utility_BaseComponentCache_o *)(__this->fields).ErenCache,
             (MethodInfo *)0x0);
  return;
}


// Characters.ErenShifter$$CreateAnimations
// il2cpp: void Characters_ErenShifter__CreateAnimations (Characters_ErenShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x5c191d0

void Characters_ErenShifter__CreateAnimations
               (Characters_ErenShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_ErenAnimations_o *__this_00;
  
  if (Il2CppMethodInitialized_07547727 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenAnimations);
    Il2CppMethodInitialized_07547727 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ErenAnimations);
  Characters_ErenAnimations___ctor(__this_00,(MethodInfo *)animations);
  (__this->fields).ErenAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ErenAnimations);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).ErenAnimations,(MethodInfo *)0x0);
  return;
}


// Characters.ErenShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_ErenShifter__CreateCustomSkinLoader (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x5c19240

CustomSkins_BaseCustomSkinLoader_o *
Characters_ErenShifter__CreateCustomSkinLoader(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547728 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ErenCustomSkinLoader);
    Il2CppMethodInitialized_07547728 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
           UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_353B6A0 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_ErenCustomSkinLoader);
  return pCVar1;
}


// Characters.ErenShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_ErenShifter__GetSkinURL (Characters_ErenShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x5c19290

System_String_o *
Characters_ErenShifter__GetSkinURL
          (Characters_ErenShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547729 = '\x01';
  }
  if ((set == (Settings_ShifterCustomSkinSet_o *)0x0) ||
     (pSVar1 = (set->fields).Eren, pSVar1 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value;
}


// Characters.ErenShifter$$Emote
// il2cpp: void Characters_ErenShifter__Emote (Characters_ErenShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5c192d0

void Characters_ErenShifter__Emote(Characters_ErenShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_ErenAnimations_o *pCVar1;
  bool bVar2;
  System_Collections_IEnumerator_o *routine;
  System_String_o **ppSVar3;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_0754772a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754772a = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._146_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._146_CanEmote.method);
  if (!bVar2) {
    return;
  }
  a = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  bVar2 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).ErenAnimations;
    if (pCVar1 == (Characters_ErenAnimations_o *)0x0) {
label_05c1942f:
      ThrowNullReferenceException();
    }
    ppSVar3 = &(pCVar1->fields).EmoteNod;
  }
  else {
    bVar2 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
    if (!bVar2) goto label_05c193ec;
    if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    }
    routine = Characters_BaseCharacter__WaitAndPlaySound
                        ((Characters_BaseCharacter_o *)__this,
                         TypeInfo_Characters_ShifterSounds->static_fields->ErenRoar,0.9,(MethodInfo *)0x0);
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).ErenAnimations;
    if (pCVar1 == (Characters_ErenAnimations_o *)0x0) goto label_05c1942f;
    ppSVar3 = &(pCVar1->fields).EmoteRoar;
  }
  a = *ppSVar3;
label_05c193ec:
  bVar2 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
  if (bVar2) {
    Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)__this,8,a,0.1,true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.ErenShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_ErenShifter__GetRootMotionAnimations (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x5c19440

System_Collections_Generic_Dictionary_string__float__o *
Characters_ErenShifter__GetRootMotionAnimations(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  Characters_ErenAnimations_o *pCVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_0754772b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_0754772b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  pCVar1 = (__this->fields).ErenAnimations;
  if ((pCVar1 != (Characters_ErenAnimations_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)(pCVar1->fields).AttackCombo,1.0,
               (MethodInfo_4AB5470 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    pCVar1 = (__this->fields).ErenAnimations;
    if (pCVar1 != (Characters_ErenAnimations_o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (Il2CppObject *)(pCVar1->fields).AttackKick,1.0,
                 (MethodInfo_4AB5470 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Characters.ErenShifter$$IsComboAttack
// il2cpp: bool Characters_ErenShifter__IsComboAttack (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x5c19500

bool Characters_ErenShifter__IsComboAttack(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  Characters_ErenAnimations_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).ErenAnimations;
  if (pCVar1 == (Characters_ErenAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__op_Equality
                    ((__this->fields)._currentAttackAnimation,(pCVar1->fields).AttackCombo,(MethodInfo *)0x0);
  return bVar2;
}


// Characters.ErenShifter$$UpdateAttack
// il2cpp: void Characters_ErenShifter__UpdateAttack (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x5c19530

void Characters_ErenShifter__UpdateAttack(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_ErenAnimations_o *pCVar2;
  Characters_ErenComponentCache_o *pCVar3;
  bool bVar4;
  System_String_o **ppSVar5;
  Characters_BaseHitbox_o *pCVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_0754772c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_0754772c = '\x01';
  }
  fVar7 = (*(__this->klass->vtable)._194_GetAnimationTime.methodPtr)
                    (__this,(__this->klass->vtable)._194_GetAnimationTime.method);
  pCVar2 = (__this->fields).ErenAnimations;
  if (pCVar2 == (Characters_ErenAnimations_o *)0x0) goto label_05c197c5;
  bVar4 = System_String__op_Equality
                    ((__this->fields)._currentStateAnimation,(pCVar2->fields).AttackCombo,(MethodInfo *)0x0);
  if (bVar4) {
    iVar1 = (__this->fields)._currentAttackStage;
    if ((fVar7 <= 0.15) || (iVar1 != 0)) {
      if ((fVar7 <= 0.27) || (iVar1 != 1)) {
        if (fVar7 <= 0.56) {
          return;
        }
        if (iVar1 != 2) {
          return;
        }
        (__this->fields)._currentAttackStage = 3;
        pCVar3 = (__this->fields).ErenCache;
        if ((pCVar3 == (Characters_ErenComponentCache_o *)0x0) ||
           (pCVar6 = (pCVar3->fields).HandRHitbox, pCVar6 == (Characters_BaseHitbox_o *)0x0))
        goto label_05c197c5;
        (*(pCVar6->klass->vtable)._5_Activate.methodPtr)
                  (pCVar6,0.0,0.25 / (__this->fields)._currentAttackSpeed,
                   (pCVar6->klass->vtable)._5_Activate.method);
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        ppSVar5 = &TypeInfo_Characters_TitanSounds->static_fields->Swing3;
      }
      else {
        (__this->fields)._currentAttackStage = 2;
        pCVar3 = (__this->fields).ErenCache;
        if ((pCVar3 == (Characters_ErenComponentCache_o *)0x0) ||
           (pCVar6 = (pCVar3->fields).HandLHitbox, pCVar6 == (Characters_BaseHitbox_o *)0x0))
        goto label_05c197c5;
        (*(pCVar6->klass->vtable)._5_Activate.methodPtr)
                  (pCVar6,0.0,0.23 / (__this->fields)._currentAttackSpeed,
                   (pCVar6->klass->vtable)._5_Activate.method);
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        ppSVar5 = &TypeInfo_Characters_TitanSounds->static_fields->Swing2;
      }
      goto label_05c197a9;
    }
    (__this->fields)._currentAttackStage = 1;
    pCVar3 = (__this->fields).ErenCache;
    if ((pCVar3 == (Characters_ErenComponentCache_o *)0x0) ||
       (pCVar6 = (pCVar3->fields).HandRHitbox, pCVar6 == (Characters_BaseHitbox_o *)0x0)) goto label_05c197c5;
    fVar7 = 0.16;
  }
  else {
    pCVar2 = (__this->fields).ErenAnimations;
    if (pCVar2 == (Characters_ErenAnimations_o *)0x0) {
label_05c197c5:
      ThrowNullReferenceException();
    }
    bVar4 = System_String__op_Equality
                      ((__this->fields)._currentStateAnimation,(pCVar2->fields).AttackKick,(MethodInfo *)0x0);
    if (((!bVar4) || (fVar7 <= 0.28)) || ((__this->fields)._currentAttackStage != 0)) {
      return;
    }
    (__this->fields)._currentAttackStage = 1;
    pCVar3 = (__this->fields).ErenCache;
    if ((pCVar3 == (Characters_ErenComponentCache_o *)0x0) ||
       (pCVar6 = (pCVar3->fields).FootRHitbox, pCVar6 == (Characters_BaseHitbox_o *)0x0)) goto label_05c197c5;
    fVar7 = 0.5;
  }
  (*(pCVar6->klass->vtable)._5_Activate.methodPtr)
            (pCVar6,0.0,fVar7 / (__this->fields)._currentAttackSpeed,
             (pCVar6->klass->vtable)._5_Activate.method);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  ppSVar5 = &TypeInfo_Characters_TitanSounds->static_fields->Swing1;
label_05c197a9:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,*ppSVar5,(MethodInfo *)0x0);
  return;
}


// Characters.ErenShifter$$CheckNapeAngle
// il2cpp: bool Characters_ErenShifter__CheckNapeAngle (Characters_ErenShifter_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x5c197d0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1999e: mulss xmm0, xmm4
// asm:   0x5c199a2: xorps xmm4, xmm4
// asm:   0x5c199a5: ucomiss xmm0, xmm4
// asm:   0x5c199a8: jb 0x5c19a6c
// asm:   0x5c199c3: jmp 0x5c19b01

bool Characters_ErenShifter__CheckNapeAngle
               (Characters_ErenShifter_o *__this,UnityEngine_Vector3_o hitPosition,float maxAngle,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseTitanComponentCache_o *pCVar3;
  undefined1 auVar4 [16];
  double dVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  Il2CppClass *klass;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Db;
  float fVar10;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar11;
  undefined4 in_XMM1_Db;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_18;
  
  pCVar3 = (__this->fields).BaseTitanCache;
  if (((pCVar3 == (Characters_BaseTitanComponentCache_o *)0x0) ||
      (pUVar6 = (pCVar3->fields).Head, pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
     pUVar6 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar15 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    uStack_18._0_4_ = 0.0;
    uStack_18._4_4_ = 0.0;
  }
  else {
    uStack_18._0_4_ = 0.0;
    uStack_18._4_4_ = 0.0;
  }
  uStack_18._0_4_ = 0.0;
  uStack_18._4_4_ = 0.0;
  if (g_data_0753e729 == '\0') {
    uStack_18._0_4_ = 0.0;
    uStack_18._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
  }
  fStack_48 = hitPosition.fields.x;
  fStack_44 = hitPosition.fields.y;
  auVar13._0_4_ = fStack_48 - UVar15.fields.x;
  auVar13._4_4_ = fStack_44 - UVar15.fields.y;
  auVar13._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
  auVar13._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
  fVar12 = hitPosition.fields.z - UVar15.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar8 = fVar12 * fVar12 + auVar13._4_4_ * auVar13._4_4_ + auVar13._0_4_ * auVar13._0_4_;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    in_XMM1_Db = extraout_XMM0_Db;
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  if (1e-05 < fVar8) {
    fVar12 = fVar12 / fVar8;
    auVar4._4_4_ = fVar8;
    auVar4._0_4_ = fVar8;
    auVar4._8_4_ = in_XMM1_Db;
    auVar4._12_4_ = in_XMM1_Db;
    auVar13 = divps(auVar13,auVar4);
    uStack_18._0_4_ = auVar13._0_4_;
    uStack_18._4_4_ = auVar13._4_4_;
    pUVar7 = (UnityEngine_Vector3_StaticFields *)&uStack_18;
  }
  else {
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar12 = (pUVar7->zeroVector).fields.z;
  }
  uVar1 = (pUVar7->zeroVector).fields.x;
  uVar2 = (pUVar7->zeroVector).fields.y;
  UVar15 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
  fVar11 = UVar15.fields.z;
  fVar8 = UVar15.fields.x;
  fVar10 = UVar15.fields.y;
  if (Il2CppMethodInitialized_075450a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075450a4 = '\x01';
  }
  fVar14 = fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8;
  fVar9 = fVar12 * fVar12 + (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (0.0 <= fVar9 * fVar14) {
    fVar9 = SQRT(fVar9 * fVar14);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  else {
    fVar9 = sqrtf(fVar9 * fVar14);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  fVar14 = 0.0;
  TypeInfo_System_Math = (System_Math_c *)klass;
  if (1e-15 <= fVar9) {
    fVar9 = (fVar12 * fVar11 + (float)uVar2 * fVar10 + (float)uVar1 * fVar8) / fVar9;
    fVar12 = 1.0;
    if (fVar9 <= 1.0) {
      fVar12 = fVar9;
    }
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    dVar5 = acos((double)(float)(~-(uint)(-1.0 <= fVar9) & 0xbf800000 | (uint)fVar12 & -(uint)(-1.0 <= fVar9))
                 ,(MethodInfo *)klass);
    fVar14 = (float)dVar5 * 57.29578;
  }
  return fVar14 < maxAngle;
}


// Characters.ErenShifter$$.ctor
// il2cpp: void Characters_ErenShifter___ctor (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x5c19b20

void Characters_ErenShifter___ctor(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  (__this->fields)._needRoar = true;
  (__this->fields).DeathAnimationLength = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


