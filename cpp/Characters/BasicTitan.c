// Type: Characters.BasicTitan
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BasicTitan.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitan.cs
// --------------------------------

// Characters.BasicTitan.<PlayDecapitationBlood>d__156$$.ctor
// il2cpp: void Characters_BasicTitan__PlayDecapitationBlood_d__156___ctor (Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BasicTitan__PlayDecapitationBlood_d__156___ctor(Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__156$$System.IDisposable.Dispose
// il2cpp: void Characters_BasicTitan__PlayDecapitationBlood_d__156__System_IDisposable_Dispose (Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BasicTitan__PlayDecapitationBlood_d__156__System_IDisposable_Dispose(Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__156$$MoveNext
// il2cpp: bool Characters_BasicTitan__PlayDecapitationBlood_d__156__MoveNext (Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, const MethodInfo* method);
// 0x1821b7b40

bool Characters_BasicTitan__PlayDecapitationBlood_d__156__MoveNext
               (Characters_BasicTitan__PlayDecapitationBlood_d__156_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BasicTitan_o *pCVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  
  if (Il2CppMethodInitialized_184346e20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346e20 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pCVar2 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (((pCVar2 != (Characters_BasicTitan_o *)0x0) &&
        (pCVar3 = (pCVar2->fields).BasicCache, pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
       (pUVar4 = (pCVar3->fields).DecapitationBlood, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UnityEngine_ParticleSystem__Play_2fca570(pUVar4,(MethodInfo *)0x0);
      __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_00,3.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
label_1821b7c39:
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (((pCVar2 == (Characters_BasicTitan_o *)0x0) ||
        (pCVar3 = (pCVar2->fields).BasicCache, pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0)) ||
       (pUVar4 = (pCVar3->fields).DecapitationBlood, pUVar4 == (UnityEngine_ParticleSystem_o *)0x0))
    goto label_1821b7c39;
    UnityEngine_ParticleSystem__Stop(pUVar4,true,1,(MethodInfo *)0x0);
  }
  return false;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__156$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__PlayDecapitationBlood_d__156__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BasicTitan__PlayDecapitationBlood_d__156__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__156$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BasicTitan__PlayDecapitationBlood_d__156__System_Collections_IEnumerator_Reset (Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, const MethodInfo* method);
// 0x1821b7c40

void Characters_BasicTitan__PlayDecapitationBlood_d__156__System_Collections_IEnumerator_Reset
               (Characters_BasicTitan__PlayDecapitationBlood_d__156_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Characters_BasicTitan_PlayDecapitationBlood_d__156_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__156$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__PlayDecapitationBlood_d__156__System_Collections_IEnumerator_get_Current (Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BasicTitan__PlayDecapitationBlood_d__156__System_Collections_IEnumerator_get_Current(Characters_BasicTitan__PlayDecapitationBlood_d__156_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan.<WaitAndDie>d__132$$.ctor
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__132___ctor (Characters_BasicTitan__WaitAndDie_d__132_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BasicTitan__WaitAndDie_d__132___ctor(Characters_BasicTitan__WaitAndDie_d__132_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BasicTitan.<WaitAndDie>d__132$$System.IDisposable.Dispose
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__132__System_IDisposable_Dispose (Characters_BasicTitan__WaitAndDie_d__132_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BasicTitan__WaitAndDie_d__132__System_IDisposable_Dispose(Characters_BasicTitan__WaitAndDie_d__132_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BasicTitan.<WaitAndDie>d__132$$MoveNext
// il2cpp: bool Characters_BasicTitan__WaitAndDie_d__132__MoveNext (Characters_BasicTitan__WaitAndDie_d__132_o* __this, const MethodInfo* method);
// 0x1821b7d30

bool Characters_BasicTitan__WaitAndDie_d__132__MoveNext
               (Characters_BasicTitan__WaitAndDie_d__132_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BasicTitan_o *__this_00;
  Characters_TitanDeathDissolve_o *__this_01;
  Characters_BasicTitanAnimations_o *pCVar2;
  Characters_BasicTitan_c *pCVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_GameObject_o *targetGo;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar6;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_184346e21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346e21 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 != (Characters_BasicTitan_o *)0x0) {
        pSVar7 = (__this_00->fields)._currentStateAnimation;
        (__this->fields)._dieAnimation_5__2 = pSVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._dieAnimation_5__2,pSVar7);
        pPVar6 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pPVar6,1.4,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pPVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar6);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
    else if (iVar1 == 2) {
      (__this->fields).__1__state = -1;
      if ((__this_00 != (Characters_BasicTitan_o *)0x0) &&
         (pCVar2 = (__this_00->fields).BasicAnimations, pCVar2 != (Characters_BasicTitanAnimations_o *)0x0)) {
        bVar4 = System_String__op_Inequality
                          ((__this->fields)._dieAnimation_5__2,(pCVar2->fields).DieGround,(MethodInfo *)0x0);
        if (bVar4) {
          pCVar2 = (__this_00->fields).BasicAnimations;
          if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821b80ff;
          bVar4 = System_String__op_Inequality
                            ((__this->fields)._dieAnimation_5__2,(pCVar2->fields).DieCrawler,(MethodInfo *)0x0
                            );
          if (bVar4) {
            if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
            }
            Characters_BaseCharacter__PlaySound
                      ((Characters_BaseCharacter_o *)__this_00,
                       TypeInfo_Characters_TitanSounds->static_fields->DeathFall,(MethodInfo *)0x0);
          }
        }
        pPVar6 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pPVar6,7.6,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pPVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar6);
        (__this->fields).__1__state = 3;
        return true;
      }
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 == 4) {
          (__this->fields).__1__state = -1;
          if (__this_00 == (Characters_BasicTitan_o *)0x0) goto label_1821b80ff;
          targetGo = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          Photon_Pun_PhotonNetwork__Destroy_1d35aa0(targetGo,(MethodInfo *)0x0);
        }
        return false;
      }
      (__this->fields).__1__state = -1;
      if (__this_00 != (Characters_BasicTitan_o *)0x0) {
        __this_01 = (__this_00->fields)._deathDissolve;
        if (__this_01 != (Characters_TitanDeathDissolve_o *)0x0) {
          Characters_TitanDeathDissolve__Finish(__this_01,(MethodInfo *)0x0);
        }
        pPVar6 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pPVar6,1.25,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pPVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar6);
        (__this->fields).__1__state = 4;
        return true;
      }
    }
label_1821b80ff:
    ThrowNullReferenceException();
  }
  (__this->fields).__1__state = -1;
  if ((__this_00 == (Characters_BasicTitan_o *)0x0) ||
     (pCVar2 = (__this_00->fields).BasicAnimations, pCVar2 == (Characters_BasicTitanAnimations_o *)0x0))
  goto label_1821b80ff;
  pSVar7 = (pCVar2->fields).DieFront;
  (__this->fields)._dieAnimation_5__2 = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dieAnimation_5__2,pSVar7);
  if ((__this_00->fields).State == 0xd) {
    pCVar2 = (__this_00->fields).BasicAnimations;
    if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821b80ff;
    pSVar7 = (pCVar2->fields).DieBack;
    (__this->fields)._dieAnimation_5__2 = pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._dieAnimation_5__2,pSVar7);
  }
  if ((__this_00->fields).IsCrawler == false) {
    bVar4 = Characters_BasicTitan__get_IsBellyFlopping(__this_00,(MethodInfo *)0x0);
    if (bVar4) {
      pCVar2 = (__this_00->fields).BasicAnimations;
      if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821b80ff;
      pSVar7 = (pCVar2->fields).DieGround;
      goto label_1821b8061;
    }
    bVar4 = Characters_BaseTitan__get_IsSitting((Characters_BaseTitan_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar4) goto label_1821b806e;
    pCVar2 = (__this_00->fields).BasicAnimations;
    if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821b80ff;
    pSVar7 = (*(pCVar2->klass->vtable)._13_get_DieSit.methodPtr)
                       (pCVar2,(pCVar2->klass->vtable)._13_get_DieSit.method);
    (__this->fields)._dieAnimation_5__2 = pSVar7;
  }
  else {
    pCVar2 = (__this_00->fields).BasicAnimations;
    if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821b80ff;
    pSVar7 = (pCVar2->fields).DieCrawler;
label_1821b8061:
    (__this->fields)._dieAnimation_5__2 = pSVar7;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dieAnimation_5__2,pSVar7);
label_1821b806e:
  pSVar7 = (__this->fields)._dieAnimation_5__2;
  (__this_00->fields)._pendingDeathAnimation = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pendingDeathAnimation,pSVar7);
  if ((__this_00->fields)._launched == false) {
    iVar5 = ((__this_00->fields)._decapitated != false) + 1;
  }
  else {
    iVar5 = 3;
  }
  (__this_00->fields)._pendingDeathType = iVar5;
  pCVar3 = __this_00->klass;
  (__this_00->fields).State = 0xf;
  (*(pCVar3->vtable)._173_Ungrab.methodPtr)(__this_00,(pCVar3->vtable)._173_Ungrab.method);
  (*(__this_00->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
            (__this_00,(__this_00->klass->vtable)._189_DeactivateAllHitboxes.method);
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
  (__this->fields).__1__state = 1;
  return true;
}


// Characters.BasicTitan.<WaitAndDie>d__132$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__WaitAndDie_d__132__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BasicTitan__WaitAndDie_d__132_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BasicTitan__WaitAndDie_d__132__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BasicTitan__WaitAndDie_d__132_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan.<WaitAndDie>d__132$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__132__System_Collections_IEnumerator_Reset (Characters_BasicTitan__WaitAndDie_d__132_o* __this, const MethodInfo* method);
// 0x1821b8110

void Characters_BasicTitan__WaitAndDie_d__132__System_Collections_IEnumerator_Reset
               (Characters_BasicTitan__WaitAndDie_d__132_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_BasicTitan_WaitAndDie_d__132_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BasicTitan.<WaitAndDie>d__132$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__WaitAndDie_d__132__System_Collections_IEnumerator_get_Current (Characters_BasicTitan__WaitAndDie_d__132_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BasicTitan__WaitAndDie_d__132__System_Collections_IEnumerator_get_Current(Characters_BasicTitan__WaitAndDie_d__132_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan$$get_ArmEffectOffset
// il2cpp: UnityEngine_Vector3_o Characters_BasicTitan__get_ArmEffectOffset (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821924f0

UnityEngine_Vector3_o *
Characters_BasicTitan__get_ArmEffectOffset
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  fVar4 = (__this->fields).Size * 0.1;
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  (__return_storage_ptr__->fields).x = fVar4 * (pUVar3->downVector).fields.x;
  uVar1 = (pUVar3->downVector).fields.y;
  uVar2 = (pUVar3->downVector).fields.z;
  (__return_storage_ptr__->fields).y = (float)uVar1 * fVar4;
  (__return_storage_ptr__->fields).z = (float)uVar2 * fVar4;
  return __return_storage_ptr__;
}


// Characters.BasicTitan$$get_CanSprint
// il2cpp: bool Characters_BasicTitan__get_CanSprint (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Characters_BasicTitan__get_CanSprint(Characters_BasicTitan_o* __this, MethodInfo* method)

{
  return true;
}


// Characters.BasicTitan$$get_CanWallClimb
// il2cpp: bool Characters_BasicTitan__get_CanWallClimb (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Characters_BasicTitan__get_CanWallClimb(Characters_BasicTitan_o* __this, MethodInfo* method)

{
  return true;
}


// Characters.BasicTitan$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_BasicTitan__get_EmoteActions (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182192570

System_Collections_Generic_List_string__o *
Characters_BasicTitan__get_EmoteActions(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346dde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    Il2CppMethodInitialized_184346dde = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar4 = "Laugh";
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182192809;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_18219280f;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "Nod";
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182192809;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_18219280f;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "Shake";
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182192809;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_18219280f;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "Roar1";
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182192809;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_18219280f;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "Roar2";
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
label_18219280f:
      ThrowIndexOutOfRangeException();
    }
  }
label_182192809:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Init
// il2cpp: void Characters_BasicTitan__Init (Characters_BasicTitan_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, Settings_TitanCustomSet_o* customSet, int32_t skinSlot, const MethodInfo* method);
// 0x1821875a0

void Characters_BasicTitan__Init
               (Characters_BasicTitan_o *__this,bool ai,System_String_o *team,SimpleJSONFixed_JSONNode_o *data
               ,Settings_TitanCustomSet_o *customSet,int32_t skinSlot,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  System_String_array *pSVar3;
  Utility_BaseComponentCache_o *pUVar4;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_AnimationHandler_o *__this_01;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UnityEngine_GameObject_o *__this_02;
  Controllers_BaseTitanAIController_o *pCVar8;
  System_String_o *pSVar9;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  System_Object_array *parameters;
  Il2CppObject *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 local_res10 [8];
  
  if (Il2CppMethodInitialized_184346ddf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanPlayerController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCrawlerRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"RunAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCrawler");
    Il2CppMethodInitialized_184346ddf = '\x01';
  }
  (__this->fields)._customSet = customSet;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customSet,customSet);
  (__this->fields)._skinSlot = skinSlot;
  __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (ai) {
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_182187984;
    pCVar8 = UnityEngine_GameObject__AddComponent_object_
                       (__this_02,
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController);
    if (pCVar8 == (Controllers_BaseTitanAIController_o *)0x0) goto label_182187984;
    (*(pCVar8->klass->vtable)._11_Init.methodPtr)(pCVar8,data,(pCVar8->klass->vtable)._11_Init.method);
    if (data == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182187984;
    pSVar10 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"Name");
    if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182187984;
    pSVar1 = pSVar10->klass;
    pSVar9 = (System_String_o *)
             (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar10,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar1);
    Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,pSVar9,(MethodInfo *)0x0);
    pSVar10 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"IsCrawler");
    if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182187984;
    bVar5 = (bool)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[39].methodPtr)(pSVar10);
    (__this->fields).IsCrawler = bVar5;
  }
  else {
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_182187984;
    UnityEngine_GameObject__AddComponent_object_
              (__this_02,
               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanPlayerController)
    ;
  }
  if ((__this->fields).IsCrawler != false) {
    pCVar2 = (__this->fields).BasicAnimations;
    if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_182187984;
    pSVar9 = (pCVar2->fields).RunCrawler;
    goto label_182187852;
  }
  iVar6 = 1;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(data,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (data == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182187984;
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"RunAnimation");
    if (bVar5) {
      pSVar10 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"RunAnimation");
      if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182187984;
      iVar6 = (*(code *)((Il2CppClass *)pSVar10->klass)->vtable[35].methodPtr)
                        (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[35].method);
    }
  }
  pCVar2 = (__this->fields).BasicAnimations;
  if (pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) {
    pSVar3 = (pCVar2->fields).Runs;
    if (iVar6 == 0) {
      if (pSVar3 == (System_String_array *)0x0) goto label_182187984;
      uVar7 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar3->max_length,(MethodInfo *)0x0);
      if ((uint)pSVar3->max_length <= uVar7) goto label_18218798a;
      pSVar9 = pSVar3->m_Items[(int)uVar7];
    }
    else {
      if (pSVar3 == (System_String_array *)0x0) goto label_182187984;
      if ((uint)pSVar3->max_length <= iVar6 - 1U) {
label_18218798a:
        ThrowIndexOutOfRangeException();
      }
      pSVar9 = pSVar3->m_Items[(longlong)iVar6 + -1];
    }
label_182187852:
    (__this->fields)._runAnimation = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._runAnimation,pSVar9);
    pUVar4 = (__this->fields).Cache;
    if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
      __this_00 = (pUVar4->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res10[0] = (__this->fields).IsCrawler;
      pIVar11 = il2cpp_value_box(g_data_184354de8,local_res10);
      if (parameters != (System_Object_array *)0x0) {
        if (pIVar11 != (Il2CppObject *)0x0) {
          pIVar12 = il2cpp_vm_Object_IsInst(pIVar11,(((parameters->obj).klass)->_1).element_class);
          if (pIVar12 == (Il2CppObject *)0x0) {
            pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
          }
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar11;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar11);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetCrawlerRPC",3,parameters,(MethodInfo *)0x0);
          (__this->fields).CurrentWardedWeakSpot = 0;
          Characters_BaseTitan__Init((Characters_BaseTitan_o *)__this,ai,team,data,(MethodInfo *)0x0);
          pCVar2 = (__this->fields).BasicAnimations;
          if ((pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) &&
             (__this_01 = (__this->fields).Animation, __this_01 != (Characters_AnimationHandler_o *)0x0)) {
            Characters_AnimationHandler__SetSpeed(__this_01,(pCVar2->fields).CoverNape,1.2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
label_182187984:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetWarded
// il2cpp: void Characters_BasicTitan__SetWarded (Characters_BasicTitan_o* __this, bool warded, const MethodInfo* method);
// 0x18218c060

void Characters_BasicTitan__SetWarded(Characters_BasicTitan_o *__this,bool warded,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined1 local_res8 [8];
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184346de0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WardedWeakSpot);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWardedRPC");
    Il2CppMethodInitialized_184346de0 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  if (warded) {
    iVar3 = UnityEngine_Random__RandomRangeInt(1,5,(MethodInfo *)0x0);
  }
  else {
    iVar3 = 0;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    local_res8[0] = warded;
    pIVar4 = il2cpp_value_box(g_data_184354de8,local_res8);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar4);
        local_res20[0] = iVar3;
        pIVar4 = il2cpp_value_box((Il2CppClass *)TypeInfo_Characters_WardedWeakSpot,local_res20);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar4;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar4);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"SetWardedRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_18218c1dc;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18218c1dc:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$OnPlayerEnteredRoom
// il2cpp: void Characters_BasicTitan__OnPlayerEnteredRoom (Characters_BasicTitan_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18218b0c0

void Characters_BasicTitan__OnPlayerEnteredRoom
               (Characters_BasicTitan_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined1 local_res8 [8];
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184346de1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WardedWeakSpot);
    il2cpp_codegen_initialize_runtime_metadata(&"DisableWardedEffectsRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetWardedRPC");
    Il2CppMethodInitialized_184346de1 = '\x01';
  }
  Characters_BaseTitan__OnPlayerEnteredRoom((Characters_BaseTitan_o *)__this,player,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
label_18218b2a9:
    ThrowNullReferenceException();
  }
  if ((pPVar2->fields)._IsMine_k__BackingField == false) {
    return;
  }
  if ((__this->fields).isWarded == false) {
    return;
  }
  pPVar2 = (((__this->fields).Cache)->fields).PhotonView;
  pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_res8[0] = (__this->fields).isWarded;
  pIVar4 = il2cpp_value_box(g_data_184354de8,local_res8);
  if (pSVar3 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) {
    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
  }
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = pIVar4;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
    local_res10[0] = (__this->fields).LastWardedWeakSpot;
    pIVar4 = il2cpp_value_box((Il2CppClass *)TypeInfo_Characters_WardedWeakSpot,local_res10);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if (1 < (uint)pSVar3->max_length) {
      pSVar3->m_Items[1] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pIVar4);
      Photon_Pun_PhotonView__RPC_1d4d8d0(pPVar2,"SetWardedRPC",player,pSVar3,(MethodInfo *)0x0);
      if ((__this->fields).CurrentWardedWeakSpot != 0) {
        return;
      }
      pUVar1 = (__this->fields).Cache;
      if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
        pPVar2 = (pUVar1->fields).PhotonView;
        pSVar3 = (System_Object_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_object);
        if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_1d4d8d0(pPVar2,"DisableWardedEffectsRPC",player,pSVar3,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_18218b2a9;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.BasicTitan$$IsGrabAttack
// il2cpp: bool Characters_BasicTitan__IsGrabAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821879b0

bool Characters_BasicTitan__IsGrabAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  System_String_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346de2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrab");
    Il2CppMethodInitialized_184346de2 = '\x01';
  }
  __this_00 = (__this->fields)._currentAttack;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(__this_00,"AttackGrab",(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_BasicTitan__GetRootMotionAnimations (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182187290

System_Collections_Generic_Dictionary_string__float__o *
Characters_BasicTitan__GetRootMotionAnimations(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_184346de3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_184346de3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  pCVar1 = (__this->fields).BasicAnimations;
  if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)(pCVar1->fields).AttackBellyFlop,1.0,
               (MethodInfo_147AAD0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (Il2CppObject *)(pCVar1->fields).AttackBellyFlopGetup,1.0,
                 (MethodInfo_147AAD0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (Il2CppObject *)(pCVar1->fields).AttackPunch,1.0,
                   (MethodInfo_147AAD0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
        pCVar1 = (__this->fields).BasicAnimations;
        if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)(pCVar1->fields).AttackPunchCombo,1.0,
                     (MethodInfo_147AAD0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetSizeParticles
// il2cpp: void Characters_BasicTitan__SetSizeParticles (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x18218ba80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18218bb0e: nop 
// asm:   0x18218bbed: nop dword ptr [rax]

void Characters_BasicTitan__SetSizeParticles(Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_BasicTitanComponentCache_o *pCVar5;
  Il2CppClass *pIVar6;
  UnityEngine_ParticleSystem_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_Object_array *pSVar9;
  UnityEngine_ParticleSystem_NoiseModule_o main;
  Il2CppObject *pIVar10;
  UnityEngine_Transform_o *pUVar11;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346de4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_ParticleSystem_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    Il2CppMethodInitialized_184346de4 = '\x01';
  }
  if (Il2CppMethodInitialized_184346dbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346dbe = '\x01';
  }
  pSVar9 = UnityEngine_Component__GetComponentsInChildren_object__665370
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_665370 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
  if (pSVar9 != (System_Object_array *)0x0) {
    for (uVar12 = 0; (int)uVar12 < (int)pSVar9->max_length; uVar12 = uVar12 + 1) {
      if ((uint)pSVar9->max_length <= uVar12) goto label_18218bd99;
      if ((UnityEngine_ParticleSystem_o *)pSVar9->m_Items[(int)uVar12] == (UnityEngine_ParticleSystem_o *)0x0)
      goto label_18218bd93;
      main = UnityEngine_ParticleSystem__get_noise
                       ((UnityEngine_ParticleSystem_o *)pSVar9->m_Items[(int)uVar12],(MethodInfo *)0x0);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      Utility_Util__ScaleParticleStartSize
                ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,size,(MethodInfo *)0x0)
      ;
      Utility_Util__ScaleParticleStartSpeed
                ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,size,(MethodInfo *)0x0)
      ;
    }
    pIVar10 = SZArrayNew(TypeInfo_UnityEngine_ParticleSystem_array,2);
    pCVar5 = (__this->fields).BasicCache;
    if ((pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) && (pIVar10 != (Il2CppObject *)0x0)) {
      if (*(int *)&pIVar10[1].monitor == 0) {
label_18218bd99:
        ThrowIndexOutOfRangeException();
      }
      pIVar6 = (Il2CppClass *)(pCVar5->fields).ForearmSmokeL;
      pIVar10[2].klass = pIVar6;
      Il2CppCodeGenWriteBarrier(&pIVar10[2].klass,pIVar6);
      pCVar5 = (__this->fields).BasicCache;
      if (pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) {
        if (*(uint *)&pIVar10[1].monitor < 2) goto label_18218bd99;
        pUVar7 = (pCVar5->fields).ForearmSmokeR;
        pIVar10[2].monitor = pUVar7;
        Il2CppCodeGenWriteBarrier(&pIVar10[2].monitor,pUVar7);
        for (uVar12 = 0; (int)uVar12 < *(int *)&pIVar10[1].monitor; uVar12 = uVar12 + 1) {
          if (*(uint *)&pIVar10[1].monitor <= uVar12) goto label_18218bd99;
          pIVar6 = (&pIVar10[2].klass)[(int)uVar12];
          if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
          }
          Characters_TitanSteamEffect__ConfigureRegrowth
                    ((UnityEngine_ParticleSystem_o *)pIVar6,size,(MethodInfo *)0x0);
        }
        pCVar5 = (__this->fields).BasicCache;
        if ((pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar7 = (pCVar5->fields).ForearmSmokeL, pUVar7 != (UnityEngine_ParticleSystem_o *)0x0)) {
          pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          fVar13 = (__this->fields).Size;
          pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar1 = (pUVar8->oneVector).fields.x;
          uVar3 = (pUVar8->oneVector).fields.y;
          uVar14._0_4_ = (float)uVar1 * fVar13;
          uVar14._4_4_ = (float)uVar3 * fVar13;
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            local_28[0].z = fVar13 * (pUVar8->oneVector).fields.z;
            local_28[0]._0_8_ = uVar14;
            UnityEngine_Transform__set_localScale(pUVar11,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0)
            ;
            pCVar5 = (__this->fields).BasicCache;
            if ((pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) &&
               (pUVar7 = (pCVar5->fields).ForearmSmokeR, pUVar7 != (UnityEngine_ParticleSystem_o *)0x0)) {
              pUVar11 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433dbeb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433dbeb = '\x01';
              }
              fVar13 = (__this->fields).Size;
              pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar2 = (pUVar8->oneVector).fields.x;
              uVar4 = (pUVar8->oneVector).fields.y;
              uVar15._0_4_ = (float)uVar2 * fVar13;
              uVar15._4_4_ = (float)uVar4 * fVar13;
              if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                local_28[0].z = fVar13 * (pUVar8->oneVector).fields.z;
                local_28[0]._0_8_ = uVar15;
                UnityEngine_Transform__set_localScale
                          (pUVar11,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
                fVar13 = Characters_BasicTitan__GetHeadSize(__this,size,(MethodInfo *)0x0);
                (__this->fields).HeadSize = fVar13;
                return;
              }
            }
          }
        }
      }
    }
  }
label_18218bd93:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetSizeAnimations
// il2cpp: void Characters_BasicTitan__SetSizeAnimations (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x18218b980

void Characters_BasicTitan__SetSizeAnimations(Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  System_String_array *pSVar1;
  Characters_AnimationHandler_o *__this_00;
  uint uVar2;
  float fVar3;
  float multiplier;
  
  if (Il2CppMethodInitialized_184346de5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_184346de5 = '\x01';
  }
  if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
  }
  fVar3 = 1.4 - (size - 0.7) * 0.15;
  multiplier = 0.9;
  if ((0.9 <= fVar3) && (multiplier = 1.5, fVar3 <= 1.5)) {
    multiplier = fVar3;
  }
  pSVar1 = TypeInfo_Characters_BasicTitan->static_fields->SizeScaledAnimations;
  if (pSVar1 != (System_String_array *)0x0) {
    uVar2 = 0;
    while( true ) {
      if ((int)pSVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pSVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (__this->fields).Animation;
      if (__this_00 == (Characters_AnimationHandler_o *)0x0) break;
      Characters_AnimationHandler__SetSpeedMultiplier
                (__this_00,pSVar1->m_Items[(int)uVar2],multiplier,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetSizeSpeedMultiplier
// il2cpp: float Characters_BasicTitan__GetSizeSpeedMultiplier (float size, const MethodInfo* method);
// 0x1821874b0

float Characters_BasicTitan__GetSizeSpeedMultiplier(float size,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.4 - (size - 0.7) * 0.15;
  if (fVar1 < 0.9) {
    fVar1 = 0.9;
  }
  else if (1.5 < fVar1) {
    return 1.5;
  }
  return fVar1;
}


// Characters.BasicTitan$$GetHeadSize
// il2cpp: float Characters_BasicTitan__GetHeadSize (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x182186c50
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182186de9: movaps xmm1, xmm0
// asm:   0x182186dec: subss xmm6, xmm7
// asm:   0x182186df0: mulss xmm6, xmm1
// asm:   0x182186df4: addss xmm6, xmm7
// asm:   0x182186df8: movaps xmm0, xmm6
// asm:   0x182186dfb: jmp 0x182186d22
// asm:   0x182186e03: subss xmm6, xmm7
// asm:   0x182186e07: mulss xmm6, xmm1
// asm:   0x182186e0b: addss xmm6, xmm7
// asm:   0x182186e0f: movaps xmm0, xmm6
// asm:   0x182186e12: jmp 0x182186d22

float Characters_BasicTitan__GetHeadSize(Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  float *pfVar1;
  int32_t Seed;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  Utility_BaseComponentCache_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  UnityEngine_Object_o *pUVar9;
  System_Random_o *__this_00;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (Il2CppMethodInitialized_184346de6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346de6 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanHeadMode, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar4->fields)._value != 1) {
      fVar11 = (float)il2cpp_runtime_helper_1804f6b50(2.0 / size,0x3eb33333);
      fVar12 = 0.75;
      if ((0.75 <= fVar11) && (fVar12 = 1.25, fVar11 <= 1.25)) {
        fVar12 = fVar11;
      }
      return fVar12;
    }
    pSVar5 = (pSVar3->fields).TitanHeadRandomMin;
    if ((pSVar5 != (Settings_FloatSetting_o *)0x0) &&
       (pSVar6 = (pSVar3->fields).TitanHeadRandomMax, pSVar6 != (Settings_FloatSetting_o *)0x0)) {
      fVar12 = (pSVar5->fields)._value;
      pfVar1 = &(pSVar6->fields)._value;
      lVar10 = 0xa8;
      if (*pfVar1 <= fVar12 && fVar12 != *pfVar1) {
        lVar10 = 0xa0;
      }
      pUVar7 = (__this->fields).Cache;
      if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
         (pPVar8 = (pUVar7->fields).PhotonView, pPVar8 != (Photon_Pun_PhotonView_o *)0x0)) {
        Seed = (pPVar8->fields).viewIdField;
        fVar11 = *(float *)(*(longlong *)((longlong)&pSVar3->klass + lVar10) + 0x1c);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
        System_Random___ctor_1b47f40(__this_00,Seed,(MethodInfo *)0x0);
        if (__this_00 != (System_Random_o *)0x0) {
          pUVar9 = (*(__this_00->klass->vtable)._8_NextDouble.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._8_NextDouble.method);
          fVar13 = (float)(double)pUVar9;
          if (fVar13 < 0.0) {
            fVar13 = 0.0;
          }
          else if (1.0 < fVar13) {
            return (fVar11 - fVar12) * 1.0 + fVar12;
          }
          return (fVar11 - fVar12) * fVar13 + fVar12;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetCrawlerRPC
// il2cpp: void Characters_BasicTitan__SetCrawlerRPC (Characters_BasicTitan_o* __this, bool crawler, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18218b680

void Characters_BasicTitan__SetCrawlerRPC
               (Characters_BasicTitan_o *__this,bool crawler,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_AnimationHandler_o *pCVar4;
  Characters_BasicTitanComponentCache_o *pCVar5;
  UnityEngine_CapsuleCollider_o *pUVar6;
  float fVar7;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346de7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    Il2CppMethodInitialized_184346de7 = '\x01';
  }
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar3->fields)._Owner_k__BackingField) {
      return;
    }
    pCVar4 = (__this->fields).Animation;
    (__this->fields).IsCrawler = crawler;
    if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
      (pCVar4->fields).LegacyCrossFadeTiming = !crawler;
      pCVar5 = (__this->fields).BasicCache;
      if ((pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar6 = (UnityEngine_CapsuleCollider_o *)(pCVar5->fields).Movebox,
         pUVar6 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar6,TypeInfo_UnityEngine_CapsuleCollider);
        }
        if (!crawler) {
          fVar7 = UnityEngine_CapsuleCollider__get_radius(pUVar6,(MethodInfo *)0x0);
          (__this->fields)._originalCapsuleValue = fVar7;
          return;
        }
        UnityEngine_CapsuleCollider__set_direction(pUVar6,2,(MethodInfo *)0x0);
        fVar7 = UnityEngine_CapsuleCollider__get_radius(pUVar6,(MethodInfo *)0x0);
        UnityEngine_CapsuleCollider__set_radius(pUVar6,fVar7 * 0.5,(MethodInfo *)0x0);
        local_18.fields.x = 0.0;
        local_18.fields.y = UnityEngine_CapsuleCollider__get_radius(pUVar6,(MethodInfo *)0x0);
        local_18.fields.z = 0.0;
        UnityEngine_CapsuleCollider__set_center(pUVar6,&local_18,(MethodInfo *)0x0);
        fVar7 = UnityEngine_CapsuleCollider__get_height(pUVar6,(MethodInfo *)0x0);
        (__this->fields)._originalCapsuleValue = fVar7;
        pCVar5 = (__this->fields).BasicCache;
        if ((pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar6 = (UnityEngine_CapsuleCollider_o *)(pCVar5->fields).NapeHurtbox,
           pUVar6 != (UnityEngine_CapsuleCollider_o *)0x0)) {
          bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
          if ((bVar1 <= (pUVar6->klass->_2).typeHierarchyDepth) &&
             ((pUVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
            fVar7 = UnityEngine_CapsuleCollider__get_radius(pUVar6,(MethodInfo *)0x0);
            UnityEngine_CapsuleCollider__set_radius(pUVar6,fVar7,(MethodInfo *)0x0);
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(pUVar6,TypeInfo_UnityEngine_CapsuleCollider);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetWardedRPC
// il2cpp: void Characters_BasicTitan__SetWardedRPC (Characters_BasicTitan_o* __this, bool warded, int32_t wardedWeakSpot, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18218beb0

void Characters_BasicTitan__SetWardedRPC
               (Characters_BasicTitan_o *__this,bool warded,int32_t wardedWeakSpot,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_ParticleSystem_o *pUVar4;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    pCVar3 = (__this->fields).BasicCache;
    (__this->fields).isWarded = warded;
    (__this->fields).CurrentWardedWeakSpot = wardedWeakSpot;
    (__this->fields).LastWardedWeakSpot = wardedWeakSpot;
    if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar4 = (pCVar3->fields).WardedWeakSpotForearmL, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UnityEngine_ParticleSystem__Stop_2fca8b0(pUVar4,true,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).BasicCache;
      if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar4 = (pCVar3->fields).WardedWeakSpotForearmR, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UnityEngine_ParticleSystem__Stop_2fca8b0(pUVar4,true,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).BasicCache;
        if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar4 = (pCVar3->fields).WardedWeakSpotLegL, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
          UnityEngine_ParticleSystem__Stop_2fca8b0(pUVar4,true,(MethodInfo *)0x0);
          pCVar3 = (__this->fields).BasicCache;
          if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar4 = (pCVar3->fields).WardedWeakSpotLegR, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
            UnityEngine_ParticleSystem__Stop_2fca8b0(pUVar4,true,(MethodInfo *)0x0);
            __this_00 = (__this->fields).hardenedNape;
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_00,warded,(MethodInfo *)0x0);
              if (wardedWeakSpot == 1) {
                pCVar3 = (__this->fields).BasicCache;
                if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218c052;
                pUVar4 = (pCVar3->fields).WardedWeakSpotForearmL;
              }
              else if (wardedWeakSpot == 2) {
                pCVar3 = (__this->fields).BasicCache;
                if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218c052;
                pUVar4 = (pCVar3->fields).WardedWeakSpotForearmR;
              }
              else if (wardedWeakSpot == 3) {
                pCVar3 = (__this->fields).BasicCache;
                if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218c052;
                pUVar4 = (pCVar3->fields).WardedWeakSpotLegL;
              }
              else {
                if (wardedWeakSpot != 4) {
                  return;
                }
                pCVar3 = (__this->fields).BasicCache;
                if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218c052;
                pUVar4 = (pCVar3->fields).WardedWeakSpotLegR;
              }
              if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
                UnityEngine_ParticleSystem__Play(pUVar4,true,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_18218c052:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$DisableWardedEffectsRPC
// il2cpp: void Characters_BasicTitan__DisableWardedEffectsRPC (Characters_BasicTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182185d70

void Characters_BasicTitan__DisableWardedEffectsRPC
               (Characters_BasicTitan_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    pCVar3 = (__this->fields).BasicCache;
    (__this->fields).CurrentWardedWeakSpot = 0;
    if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar4 = (pCVar3->fields).WardedWeakSpotForearmL, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UnityEngine_ParticleSystem__Stop_2fca8b0(pUVar4,true,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).BasicCache;
      if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar4 = (pCVar3->fields).WardedWeakSpotForearmR, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UnityEngine_ParticleSystem__Stop_2fca8b0(pUVar4,true,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).BasicCache;
        if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar4 = (pCVar3->fields).WardedWeakSpotLegL, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
          UnityEngine_ParticleSystem__Stop_2fca8b0(pUVar4,true,(MethodInfo *)0x0);
          pCVar3 = (__this->fields).BasicCache;
          if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar4 = (pCVar3->fields).WardedWeakSpotLegR, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
            UnityEngine_ParticleSystem__Stop_2fca8b0(pUVar4,true,(MethodInfo *)0x0);
            __this_00 = (__this->fields).hardenedNape;
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$ClearRockRPC
// il2cpp: void Characters_BasicTitan__ClearRockRPC (Characters_BasicTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182184f30

void Characters_BasicTitan__ClearRockRPC
               (Characters_BasicTitan_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  Characters_BaseHitbox_o *__this_00;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *obj;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184346de8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rock1Spawnable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346de8 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    pCVar3 = (__this->fields).BasicCache;
    if (((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
        (__this_00 = (pCVar3->fields).HandRHitbox, __this_00 != (Characters_BaseHitbox_o *)0x0)) &&
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object__665370
                           ((UnityEngine_Component_o *)__this_00,
                            (MethodInfo_665370 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rock1Spawnable),
       pSVar4 != (System_Object_array *)0x0)) {
      uVar5 = 0;
      while( true ) {
        if ((int)pSVar4->max_length <= (int)uVar5) {
          return;
        }
        if ((uint)pSVar4->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Component_o *)pSVar4->m_Items[(int)uVar5] == (UnityEngine_Component_o *)0x0) break;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pSVar4->m_Items[(int)uVar5],(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BasicTitan__GetCameraAnchor (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18210a580

UnityEngine_Transform_o *
Characters_BasicTitan__GetCameraAnchor(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    return (pUVar1->fields).Transform;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Start
// il2cpp: void Characters_BasicTitan__Start (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218c7b0

void Characters_BasicTitan__Start(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  GameManagers_InGameManager_o *__this_00;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Characters_BasicTitan_c *pCVar8;
  Settings_TitanCustomSet_o *pSVar9;
  Photon_Pun_PhotonView_o *__this_01;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o *routine;
  UnityEngine_Vector3_o *pUVar13;
  System_String_o *pSVar14;
  System_Object_array *parameters;
  Il2CppObject *pIVar15;
  UnityEngine_Quaternion_o *pUVar16;
  float fVar17;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Quaternion_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_184346de9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetupRPC");
    Il2CppMethodInitialized_184346de9 = '\x01';
  }
  __this_00 = (__this->fields)._inGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_18218cb85;
  GameManagers_InGameManager__RegisterCharacter
            (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346dc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    Il2CppMethodInitialized_184346dc2 = '\x01';
  }
  Characters_BaseCharacter__Start((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar12 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar12) {
    bVar12 = Characters_BaseCharacter__IsMainCharacter((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if (bVar12) {
      bVar3 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if (((__this->klass->_2).typeHierarchyDepth < bVar3) ||
         ((__this->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_BaseShifter)) goto label_18218c8b4;
    }
    else {
label_18218c8b4:
      if (Il2CppMethodInitialized_184346dc3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__220);
        Il2CppMethodInitialized_184346dc3 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__220);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = (Characters_BaseTitan_o *)__this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      (routine->fields).time = 2.0;
      (routine->fields).maxSpeed = 20.0;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
    (*(__this->klass->vtable)._162_Idle.methodPtr)(__this,(__this->klass->vtable)._162_Idle.method);
  }
  pUVar6 = (__this->fields).Cache;
  if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar7 = (pUVar6->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    pUVar13 = UnityEngine_Transform__get_position(&local_68,pUVar7,(MethodInfo *)0x0);
    fVar4 = (pUVar13->fields).z;
    fVar5 = (pUVar13->fields).y;
    pCVar8 = __this->klass;
    (__this->fields)._startPosition.fields.x = (pUVar13->fields).x;
    (__this->fields)._startPosition.fields.y = fVar5;
    (__this->fields)._startPosition.fields.z = fVar4;
    bVar12 = (*(pCVar8->vtable)._74_IsMine.methodPtr)(__this,(pCVar8->vtable)._74_IsMine.method);
    if (!bVar12) {
      return;
    }
    pSVar9 = (__this->fields)._customSet;
    if (pSVar9 != (Settings_TitanCustomSet_o *)0x0) {
      pSVar14 = (*(pSVar9->klass->vtable)._8_SerializeToJsonString.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._8_SerializeToJsonString.method);
      pUVar6 = (__this->fields).Cache;
      if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
        __this_01 = (pUVar6->fields).PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (parameters != (System_Object_array *)0x0) {
          if ((pSVar14 != (System_String_o *)0x0) &&
             (pIVar15 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pSVar14,(((parameters->obj).klass)->_1).element_class),
             pIVar15 == (Il2CppObject *)0x0)) {
            pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar14;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar14);
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"SetupRPC",3,parameters,(MethodInfo *)0x0);
            Characters_BasicTitan__LoadSkin(__this,(MethodInfo *)0x0);
            if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
            }
            pUVar6 = (__this->fields).Cache;
            if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar7 = (pUVar6->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
              pSVar14 = TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn;
              pUVar13 = UnityEngine_Transform__get_position(&local_68,pUVar7,(MethodInfo *)0x0);
              uVar1 = (pUVar13->fields).x;
              uVar2 = (pUVar13->fields).y;
              fVar5 = (pUVar13->fields).z;
              local_68.fields.x = -1.5707964;
              local_68.fields.y = 0.0;
              local_68.fields.z = 0.0;
              pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                                  ((UnityEngine_Quaternion_o *)local_58,&local_68,(MethodInfo *)0x0);
              fVar4 = (__this->fields).Size;
              uVar10._0_4_ = (pUVar16->fields).x;
              uVar10._4_4_ = (pUVar16->fields).y;
              uVar11._0_4_ = (pUVar16->fields).z;
              uVar11._4_4_ = (pUVar16->fields).w;
              fVar17 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                                 (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
              }
              local_68.fields.x = (float)uVar1;
              local_68.fields.y = (float)uVar2;
              local_68.fields.z = fVar5;
              local_58[0]._0_8_ = uVar10;
              local_58[0]._8_8_ = uVar11;
              Effects_EffectSpawner__Spawn
                        (pSVar14,&local_68,(UnityEngine_Quaternion_o *)local_58,fVar17 * fVar4,true,
                         (System_Object_array *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_18218cb85:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetupRPC
// il2cpp: void Characters_BasicTitan__SetupRPC (Characters_BasicTitan_o* __this, System_String_o* json, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18218c210

void Characters_BasicTitan__SetupRPC
               (Characters_BasicTitan_o *__this,System_String_o *json,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanSetup_o *__this_00;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Transform_o *__this_01;
  Settings_TitanCustomSet_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  
  if (Il2CppMethodInitialized_184346dea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    Il2CppMethodInitialized_184346dea = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSet);
    Settings_TitanCustomSet___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Settings_TitanCustomSet_o *)0x0) {
      (*(__this_02->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                (__this_02,json,(__this_02->klass->vtable)._9_DeserializeFromJsonString.method);
      __this_00 = (__this->fields).Setup;
      if (__this_00 != (Characters_BasicTitanSetup_o *)0x0) {
        Characters_BasicTitanSetup__Load(__this_00,__this_02,(MethodInfo *)0x0);
        if ((__this->fields)._hairCut == false) {
          return;
        }
        pCVar3 = (__this->fields).BasicCache;
        if (((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
            (__this_01 = (pCVar3->fields).HairSocket, __this_01 != (UnityEngine_Transform_o *)0x0)) &&
           (__this_03 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_03 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_03,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$IsHaircutHit
// il2cpp: bool Characters_BasicTitan__IsHaircutHit (Characters_BasicTitan_o* __this, UnityEngine_Collider_o* collider, UnityEngine_Vector3_o bladePosition, const MethodInfo* method);
// 0x182187a00

bool Characters_BasicTitan__IsHaircutHit
               (Characters_BasicTitan_o *__this,UnityEngine_Collider_o *collider,
               UnityEngine_Vector3_o *bladePosition,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *y;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CapsuleCollider_o *__this_01;
  bool bVar2;
  UnityEngine_Vector3_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_o local_88 [10];
  
  if (Il2CppMethodInitialized_184346deb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346deb = '\x01';
  }
  if ((((__this->fields).Dead != false) || ((__this->fields)._headDetached != false)) ||
     ((__this->fields)._hairCut != false)) {
    return false;
  }
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
    y = (UnityEngine_Object_o *)(pCVar1->fields).HeadCollider;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)collider,y,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
    pCVar1 = (__this->fields).BasicCache;
    if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (collider != (UnityEngine_Collider_o *)0x0)) {
      __this_00 = (pCVar1->fields).Head;
      local_98.x = (bladePosition->fields).x;
      local_98.y = (bladePosition->fields).y;
      local_98.z = (bladePosition->fields).z;
      pUVar3 = UnityEngine_Collider__ClosestPoint
                         (local_88,collider,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        local_98.x = (pUVar3->fields).x;
        local_98.y = (pUVar3->fields).y;
        local_98.z = (pUVar3->fields).z;
        pUVar3 = UnityEngine_Transform__InverseTransformPoint
                           (local_88,__this_00,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
        pCVar1 = (__this->fields).BasicCache;
        if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (__this_01 = (pCVar1->fields).HeadCollider, __this_01 != (UnityEngine_CapsuleCollider_o *)0x0)) {
          fVar8 = (pUVar3->fields).y;
          fVar10 = (pUVar3->fields).x;
          fVar11 = (pUVar3->fields).z;
          pUVar3 = UnityEngine_CapsuleCollider__get_center(local_88,__this_01,(MethodInfo *)0x0);
          fVar6 = (pUVar3->fields).x;
          fVar7 = (pUVar3->fields).z;
          fVar8 = fVar8 - (pUVar3->fields).y;
          fVar4 = UnityEngine_CapsuleCollider__get_height(__this_01,(MethodInfo *)0x0);
          fVar5 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
          fVar9 = fVar4 * 0.5;
          if (fVar4 * 0.5 <= fVar5) {
            fVar9 = fVar5;
          }
          if (fVar9 * 0.5 <= fVar8) {
            fVar10 = fVar10 - fVar6;
            fVar11 = fVar11 - fVar7;
            fVar6 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
            fVar7 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
            return fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11 <= fVar7 * fVar6 + fVar9 * fVar9;
          }
          return false;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$IsTopOfHead
// il2cpp: bool Characters_BasicTitan__IsTopOfHead (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o localHitPoint, const MethodInfo* method);
// 0x182187e60

bool Characters_BasicTitan__IsTopOfHead
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *localHitPoint,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_CapsuleCollider_o *__this_00;
  bool bVar2;
  UnityEngine_Vector3_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o local_78 [9];
  
  pCVar1 = (__this->fields).BasicCache;
  if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HeadCollider, __this_00 != (UnityEngine_CapsuleCollider_o *)0x0)) {
    pUVar3 = UnityEngine_CapsuleCollider__get_center(local_78,__this_00,(MethodInfo *)0x0);
    fVar6 = (pUVar3->fields).x;
    fVar7 = (pUVar3->fields).z;
    fVar8 = (localHitPoint->fields).y - (pUVar3->fields).y;
    fVar4 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
    fVar5 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
    fVar9 = fVar4 * 0.5;
    if (fVar4 * 0.5 <= fVar5) {
      fVar9 = fVar5;
    }
    if (fVar9 * 0.5 <= fVar8) {
      fVar6 = (localHitPoint->fields).x - fVar6;
      fVar7 = (localHitPoint->fields).z - fVar7;
      fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
      fVar5 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
      bVar2 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 <= fVar5 * fVar4 + fVar9 * fVar9;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$ApplyHaircutRPC
// il2cpp: void Characters_BasicTitan__ApplyHaircutRPC (Characters_BasicTitan_o* __this, int32_t attackerViewId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1821832b0

void Characters_BasicTitan__ApplyHaircutRPC
               (Characters_BasicTitan_o *__this,int32_t attackerViewId,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  Utility_BaseComponentCache_o *pUVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  Characters_BasicTitanComponentCache_o *pCVar6;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  bool bVar8;
  Characters_BaseCharacter_o *pCVar9;
  UnityEngine_Bounds_o *pUVar10;
  UnityEngine_GameObject_o *__this_01;
  Characters_BaseCharacter_o *x;
  float fVar11;
  UnityEngine_Bounds_o local_38 [2];
  
  if (Il2CppMethodInitialized_184346dec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HaircutEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346dec = '\x01';
  }
  if ((__this->fields)._hairCut == false) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pCVar9 = Utility_Util__FindCharacterByViewId(attackerViewId,(MethodInfo *)0x0);
    x = (Characters_BaseCharacter_o *)0x0;
    if (pCVar9 != (Characters_BaseCharacter_o *)0x0) {
      bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar9->klass->_2).typeHierarchyDepth < bVar3) ||
         (bVar8 = true,
         (pCVar9->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
      {
        bVar8 = false;
      }
      if (bVar8) {
        x = pCVar9;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      if (((x != (Characters_BaseCharacter_o *)0x0) &&
          (pUVar4 = (x->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pPVar5 = (pUVar4->fields).PhotonView, pPVar5 != (Photon_Pun_PhotonView_o *)0x0)) {
        if ((pPVar5->fields)._Owner_k__BackingField != (info->fields).Sender) {
          return;
        }
        (__this->fields)._hairCut = true;
        if (((__this->fields).EffectsEnabled != false) && ((__this->fields)._headDetached == false)) {
          pCVar6 = (__this->fields).BasicCache;
          if ((pCVar6 == (Characters_BasicTitanComponentCache_o *)0x0) ||
             (__this_00 = (UnityEngine_Collider_o *)(pCVar6->fields).HeadCollider,
             __this_00 == (UnityEngine_Collider_o *)0x0)) goto label_1821834c6;
          pUVar7 = (pCVar6->fields).HairSocket;
          pUVar10 = UnityEngine_Collider__get_bounds(local_38,__this_00,(MethodInfo *)0x0);
          uVar1 = (pUVar10->fields).m_Extents.fields.x;
          uVar2 = (pUVar10->fields).m_Extents.fields.y;
          local_38[0].fields.m_Center.fields.z = (pUVar10->fields).m_Extents.fields.z;
          local_38[0].fields.m_Center.fields.x = (float)uVar1 + (float)uVar1;
          local_38[0].fields.m_Center.fields.y = (float)uVar2 + (float)uVar2;
          local_38[0].fields.m_Center.fields.z =
               local_38[0].fields.m_Center.fields.z + local_38[0].fields.m_Center.fields.z;
          fVar11 = (float)il2cpp_runtime_helper_180546a40(local_38);
          if ((TypeInfo_Characters_HaircutEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HaircutEffect);
          }
          Characters_HaircutEffect__Play(pUVar7,fVar11 * 0.25,(MethodInfo *)0x0);
        }
        pCVar6 = (__this->fields).BasicCache;
        if (((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
            (pUVar7 = (pCVar6->fields).HairSocket, pUVar7 != (UnityEngine_Transform_o *)0x0)) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          return;
        }
      }
label_1821834c6:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BasicTitan$$LoadSkin
// il2cpp: void Characters_BasicTitan__LoadSkin (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218a410

void Characters_BasicTitan__LoadSkin(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t slotIndex;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *__this_00;
  Settings_BoolSetting_o *pSVar3;
  Settings_TitanCustomSet_o *pSVar4;
  Utility_BaseComponentCache_o *pUVar5;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar6;
  int32_t body;
  int32_t head;
  Settings_TitanCustomSkinSet_o *skinSet;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  
  if (Il2CppMethodInitialized_184346ded == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadSkinRPC");
    Il2CppMethodInitialized_184346ded = '\x01';
  }
  bVar6 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar6) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
      (__this_00 = (pSVar2->fields).Titan,
      __this_00 != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0)) &&
     (pSVar3 = (__this_00->fields).SkinsEnabled, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == false) {
      return;
    }
    skinSet = (Settings_TitanCustomSkinSet_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet
                        ((Settings_SetSettingsContainer_T__o *)__this_00,
                         (MethodInfo_C8EAF0 *)
                         MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet);
    pSVar4 = (__this->fields)._customSet;
    if (pSVar4 != (Settings_TitanCustomSet_o *)0x0) {
      slotIndex = (__this->fields)._skinSlot;
      body = Settings_TitanCustomSet__GetBody(pSVar4,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._customSet;
      if (pSVar4 != (Settings_TitanCustomSet_o *)0x0) {
        head = Settings_TitanCustomSet__GetHead(pSVar4,(MethodInfo *)0x0);
        if (skinSet != (Settings_TitanCustomSkinSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSkinSet->_2).typeHierarchyDepth;
          if (((skinSet->klass->_2).typeHierarchyDepth < bVar1) ||
             ((skinSet->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(skinSet);
          }
        }
        obj = CustomSkins_TitanSkinPicker__GetSkinUrls
                        (skinSet,slotIndex,body,head,(__this->fields).AI,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).Cache;
        if (pUVar5 != (Utility_BaseComponentCache_o *)0x0) {
          __this_01 = (pUVar5->fields).PhotonView;
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (parameters != (System_Object_array *)0x0) {
            if ((obj != (System_String_o *)0x0) &&
               (pIVar7 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class),
               pIVar7 == (Il2CppObject *)0x0)) {
              pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
            }
            if ((int)parameters->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            parameters->m_Items[0] = (Il2CppObject *)obj;
            Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
            if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_01,"LoadSkinRPC",3,parameters,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$LoadSkinRPC
// il2cpp: void Characters_BasicTitan__LoadSkinRPC (Characters_BasicTitan_o* __this, System_String_o* url, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18218a220

void Characters_BasicTitan__LoadSkinRPC
               (Characters_BasicTitan_o *__this,System_String_o *url,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomSkins_TitanCustomSkinLoader_o *pCVar3;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  System_Object_array *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184346dee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346dee = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_18218a3ea;
  if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
    pCVar3 = (__this->fields)._customSkinLoader;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar7) && (bVar7 = System_String__IsNullOrEmpty(url,(MethodInfo *)0x0), !bVar7)) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if ((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
         ((pSVar5 = (pSVar4->fields).Titan,
          pSVar5 != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0 &&
          (pSVar6 = (pSVar5->fields).SkinsEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)))) {
        if ((pSVar6->fields)._value == false) {
          return;
        }
        pSVar6 = (pSVar5->fields).SkinsLocal;
        if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
          if ((pSVar6->fields)._value != false) {
            pUVar1 = (__this->fields).Cache;
            if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0))
            goto label_18218a3ea;
            if ((pPVar2->fields)._IsMine_k__BackingField == false) {
              return;
            }
          }
          pCVar3 = (__this->fields)._customSkinLoader;
          pSVar8 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (pSVar8 != (System_Object_array *)0x0) {
            if ((url != (System_String_o *)0x0) &&
               (pIVar9 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)url,(((pSVar8->obj).klass)->_1).element_class),
               pIVar9 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if ((int)pSVar8->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            pSVar8->m_Items[0] = (Il2CppObject *)url;
            Il2CppCodeGenWriteBarrier(pSVar8->m_Items,url);
            if (pCVar3 != (CustomSkins_TitanCustomSkinLoader_o *)0x0) {
              routine = (*(pCVar3->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                                  (pCVar3,pSVar8,(pCVar3->klass->vtable)._7_LoadSkinsFromRPC.method);
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_18218a3ea:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BasicTitan$$CreateCache
// il2cpp: void Characters_BasicTitan__CreateCache (Characters_BasicTitan_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x1821851c0

void Characters_BasicTitan__CreateCache
               (Characters_BasicTitan_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_GameObject_o *owner;
  Characters_BasicTitanComponentCache_o *__this_01;
  UnityEngine_AudioSource_o *__this_02;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346def == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346def = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  Characters_BasicTitanComponentCache___ctor(__this_01,owner,(MethodInfo *)0x0);
  (__this->fields).BasicCache = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BasicCache,__this_01);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,(Utility_BaseComponentCache_o *)(__this->fields).BasicCache,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Steam,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
      if (__this_02 != (UnityEngine_AudioSource_o *)0x0) {
        fVar2 = UnityEngine_AudioSource__get_volume(__this_02,(MethodInfo *)0x0);
        (__this->fields)._steamSoundVolume = fVar2;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$CreateAnimations
// il2cpp: void Characters_BasicTitan__CreateAnimations (Characters_BasicTitan_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x182185140

void Characters_BasicTitan__CreateAnimations
               (Characters_BasicTitan_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *__this_00;
  
  if (Il2CppMethodInitialized_184346df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanAnimations);
    Il2CppMethodInitialized_184346df0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BasicTitanAnimations);
  Characters_BasicTitanAnimations___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).BasicAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BasicAnimations,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).BasicAnimations,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$Emote
// il2cpp: void Characters_BasicTitan__Emote (Characters_BasicTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x182186140
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821863c5: mov rdi, qword ptr [rsp + 0x40]

void Characters_BasicTitan__Emote(Characters_BasicTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  bool bVar2;
  System_String_o *sound;
  System_Collections_IEnumerator_o *routine;
  System_String_o *a;
  float delay;
  
  if (Il2CppMethodInitialized_184346df1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    Il2CppMethodInitialized_184346df1 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._146_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._146_CanEmote.method);
  if (!bVar2) {
    return;
  }
  a = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  bVar2 = System_String__op_Equality(emote,"Laugh",(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
label_1821863d5:
      ThrowNullReferenceException();
    }
    a = (pCVar1->fields).EmoteLaugh;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    sound = Characters_TitanSounds__GetRandomLaugh((MethodInfo *)0x0);
    delay = 0.5;
  }
  else {
    bVar2 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821863d5;
      a = (pCVar1->fields).EmoteNod;
      goto label_18218637f;
    }
    bVar2 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821863d5;
      a = (pCVar1->fields).EmoteShake;
      goto label_18218637f;
    }
    bVar2 = System_String__op_Equality(emote,"Roar1",(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821863d5;
      a = (pCVar1->fields).EmoteRoar;
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      delay = 1.4;
      sound = TypeInfo_Characters_TitanSounds->static_fields->Roar1;
    }
    else {
      bVar2 = System_String__op_Equality(emote,"Roar2",(MethodInfo *)0x0);
      if (!bVar2) goto label_18218637f;
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821863d5;
      a = (pCVar1->fields).EmoteRoar;
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      delay = 1.4;
      sound = TypeInfo_Characters_TitanSounds->static_fields->Roar2;
    }
  }
  routine = Characters_BaseCharacter__WaitAndPlaySound
                      ((Characters_BaseCharacter_o *)__this,sound,delay,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
label_18218637f:
  bVar2 = System_String__op_Inequality
                    (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)__this,8,a,0.1,true,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BasicTitan$$CoverNape
// il2cpp: void Characters_BasicTitan__CoverNape (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182185030

void Characters_BasicTitan__CoverNape(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_String_o *name;
  bool bVar3;
  float fVar4;
  
  bVar3 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  if (!bVar3) {
    return;
  }
  pCVar1 = (__this->fields).BasicAnimations;
  if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
     (pCVar2 = (__this->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
    name = (pCVar1->fields).CoverNape;
    fVar4 = Characters_AnimationHandler__GetTotalTime(pCVar2,name,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = true;
    pCVar2 = (__this->fields).Animation;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,name,0.1,0.0,(MethodInfo *)0x0)
      ;
      (__this->fields).State = 0x1a;
      (__this->fields)._currentStateAnimation = name;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,name);
      (__this->fields)._stateTimeLeft = fVar4;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UncoverNape
// il2cpp: void Characters_BasicTitan__UncoverNape (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218d090

void Characters_BasicTitan__UncoverNape(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  if ((__this->fields).State == 0x1a) {
    (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,0.3,(__this->klass->vtable)._163_Idle.method);
    return;
  }
  return;
}


// Characters.BasicTitan$$DisableArm
// il2cpp: void Characters_BasicTitan__DisableArm (Characters_BasicTitan_o* __this, bool left, const MethodInfo* method);
// 0x182185a60

void Characters_BasicTitan__DisableArm(Characters_BasicTitan_o *__this,bool left,MethodInfo *method)

{
  Characters_BasicTitan__DisableLimb(__this,left,false,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$DisableHand
// il2cpp: void Characters_BasicTitan__DisableHand (Characters_BasicTitan_o* __this, bool left, const MethodInfo* method);
// 0x182185ab0

void Characters_BasicTitan__DisableHand(Characters_BasicTitan_o *__this,bool left,MethodInfo *method)

{
  Characters_BasicTitan__DisableLimb(__this,left,true,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$DisableLimb
// il2cpp: void Characters_BasicTitan__DisableLimb (Characters_BasicTitan_o* __this, bool left, bool hand, const MethodInfo* method);
// 0x182185ac0

void Characters_BasicTitan__DisableLimb
               (Characters_BasicTitan_o *__this,bool left,bool hand,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_Human_o *x;
  Characters_BasicTitanAnimations_o *pCVar2;
  bool bVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  undefined1 local_res8 [8];
  
  if (Il2CppMethodInitialized_184346df2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"DisableHandRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"DisableArmRPC");
    Il2CppMethodInitialized_184346df2 = '\x01';
  }
  if ((((__this->fields).AI == false) || ((&(__this->fields).LeftArmDisabled)[!left] != false)) ||
     ((hand && ((&(__this->fields).LeftHandDisabled)[!left] != false)))) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    pSVar6 = "DisableArmRPC";
    if (hand) {
      pSVar6 = "DisableHandRPC";
    }
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res8[0] = left;
    pIVar4 = il2cpp_value_box(g_data_184354de8,local_res8);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar4);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,pSVar6,0,parameters,(MethodInfo *)0x0);
        x = (__this->fields).HoldHuman;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar3) && ((__this->fields).HoldHumanLeft == left)) {
          (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        }
        if ((((((((__this->fields).State != 0x14) && ((__this->fields).State != 0x15)) &&
               ((__this->fields).State != 0x13)) &&
              (((__this->fields).State != 0x16 && ((__this->fields).State != 7)))) &&
             (((__this->fields).State != 6 &&
              (((__this->fields).State != 4 && ((__this->fields).State != 0x12)))))) &&
            ((__this->fields).State != 0x11)) &&
           (((__this->fields).State != 5 &&
            (bVar3 = Characters_BasicTitan__get_IsBellyFlopping(__this,(MethodInfo *)0x0), !bVar3)))) {
          pCVar2 = (__this->fields).BasicAnimations;
          if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_182185d44;
          if (left) {
            pSVar6 = (pCVar2->fields).ArmHurtL;
          }
          else {
            pSVar6 = (pCVar2->fields).ArmHurtR;
          }
          Characters_BaseTitan__StateAction
                    ((Characters_BaseTitan_o *)__this,0xb,pSVar6,0.1,true,(MethodInfo *)0x0);
        }
        (*(__this->klass->vtable)._195_DamagedGrunt.methodPtr)
                  (__this,1.0,(__this->klass->vtable)._195_DamagedGrunt.method);
        return;
      }
    }
    ThrowNullReferenceException();
  }
label_182185d44:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$get_IsBellyFlopping
// il2cpp: bool Characters_BasicTitan__get_IsBellyFlopping (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182192820

bool Characters_BasicTitan__get_IsBellyFlopping(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackBellyFlop,
                       (MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      bVar2 = System_String__op_Equality
                        ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackBellyFlopGetup,
                         (MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$CanAttack
// il2cpp: bool Characters_BasicTitan__CanAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18217abf0

bool Characters_BasicTitan__CanAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  return bVar1;
}


// Characters.BasicTitan$$DisableArmRPC
// il2cpp: void Characters_BasicTitan__DisableArmRPC (Characters_BasicTitan_o* __this, bool left, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182185a20

void Characters_BasicTitan__DisableArmRPC
               (Characters_BasicTitan_o *__this,bool left,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
      Characters_BasicTitan__ApplyDisabledLimb(__this,left,false,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$DisableHandRPC
// il2cpp: void Characters_BasicTitan__DisableHandRPC (Characters_BasicTitan_o* __this, bool left, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182185a70

void Characters_BasicTitan__DisableHandRPC
               (Characters_BasicTitan_o *__this,bool left,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
      Characters_BasicTitan__ApplyDisabledLimb(__this,left,true,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$ApplyDisabledLimb
// il2cpp: void Characters_BasicTitan__ApplyDisabledLimb (Characters_BasicTitan_o* __this, bool left, bool hand, const MethodInfo* method);
// 0x182182cc0

void Characters_BasicTitan__ApplyDisabledLimb
               (Characters_BasicTitan_o *__this,bool left,bool hand,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool handDisabled;
  Characters_TitanLimbMesh_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  Characters_BasicTitanComponentCache_o *pCVar13;
  System_Object_array *pSVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Quaternion_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  uint uVar18;
  UnityEngine_ParticleSystem_o *__this_01;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_ParticleSystem_o *local_98 [2];
  UnityEngine_ParticleSystem_MainModule_o local_88 [2];
  UnityEngine_Vector3_o local_78;
  UnityEngine_Quaternion_Fields local_68 [4];
  
  if (Il2CppMethodInitialized_184346df3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem_40ac078);
    Il2CppMethodInitialized_184346df3 = '\x01';
  }
  local_88[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if (((&(__this->fields).LeftArmDisabled)[!left] != false) ||
     ((hand && ((&(__this->fields).LeftHandDisabled)[!left] != false)))) {
    return;
  }
  if (((__this->fields).EffectsEnabled != false) && ((__this->fields).Dead == false)) {
    Characters_BasicTitan__EnsureLimbMesh(__this,(MethodInfo *)0x0);
    fVar22 = (&(__this->fields)._leftArmDisabledTimeLeft)[!left];
    if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    }
    fVar22 = 6.5 - fVar22;
    if (fVar22 < 0.0) {
      fVar22 = 0.0;
    }
    else if (6.5 < fVar22) {
      fVar22 = 6.5;
    }
    __this_00 = (__this->fields)._limbMesh;
    handDisabled = (&(__this->fields).LeftHandDisabled)[!left];
    pUVar12 = Characters_BaseCharacter__GetVelocity
                        ((UnityEngine_Vector3_o *)local_98,(Characters_BaseCharacter_o *)__this,
                         (MethodInfo *)0x0);
    if (__this_00 == (Characters_TitanLimbMesh_o *)0x0) goto label_18218329f;
    uVar1 = (pUVar12->fields).x;
    uVar6 = (pUVar12->fields).y;
    local_78.fields.z = (pUVar12->fields).z;
    local_78.fields.x = (float)uVar1;
    local_78.fields.y = (float)uVar6;
    Characters_TitanLimbMesh__Detach
              (__this_00,left,!hand,handDisabled,fVar22 / 6.5,&local_78,(MethodInfo *)0x0);
  }
  pCVar13 = (__this->fields).BasicCache;
  if (pCVar13 != (Characters_BasicTitanComponentCache_o *)0x0) {
    if (left) {
      __this_01 = (pCVar13->fields).ForearmBloodL;
      pCVar13 = (__this->fields).BasicCache;
      local_98[0] = (pCVar13->fields).ForearmSmokeL;
    }
    else {
      local_98[0] = (pCVar13->fields).ForearmSmokeR;
      __this_01 = (pCVar13->fields).ForearmBloodR;
      if (pCVar13 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218329f;
    }
    if (hand) {
      if (left) {
        pUVar17 = (pCVar13->fields).HandL;
      }
      else {
        pUVar17 = (pCVar13->fields).HandR;
      }
    }
    else if (left) {
      pUVar17 = (pCVar13->fields).ForearmL;
    }
    else {
      pUVar17 = (pCVar13->fields).ForearmR;
    }
    if (__this_01 != (UnityEngine_ParticleSystem_o *)0x0) {
      UnityEngine_ParticleSystem__Stop(__this_01,true,0,(MethodInfo *)0x0);
      pSVar14 = UnityEngine_Component__GetComponentsInChildren_object_
                          ((UnityEngine_Component_o *)__this_01,true,
                           (MethodInfo_665440 *)
                           MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem_40ac078);
      if (pSVar14 != (System_Object_array *)0x0) {
        for (uVar18 = 0; (int)uVar18 < (int)pSVar14->max_length; uVar18 = uVar18 + 1) {
          if ((uint)pSVar14->max_length <= uVar18) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_ParticleSystem_o *)pSVar14->m_Items[(int)uVar18] ==
              (UnityEngine_ParticleSystem_o *)0x0) goto label_18218329f;
          local_88[0].fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_MainModule_Fields)
               UnityEngine_ParticleSystem__get_noise
                         ((UnityEngine_ParticleSystem_o *)pSVar14->m_Items[(int)uVar18],(MethodInfo *)0x0);
          UnityEngine_ParticleSystem_MainModule__set_duration(local_88,4.0,(MethodInfo *)0x0);
        }
        if (local_98[0] != (UnityEngine_ParticleSystem_o *)0x0) {
          UnityEngine_ParticleSystem__Stop(local_98[0],true,0,(MethodInfo *)0x0);
          pUVar15 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar15,pUVar17,false,(MethodInfo *)0x0);
            pUVar15 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433dbea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbea = '\x01';
            }
            if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
              pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar2 = (pUVar11->zeroVector).fields.x;
              uVar7 = (pUVar11->zeroVector).fields.y;
              local_78.fields.z = (pUVar11->zeroVector).fields.z;
              local_78.fields.x = (float)uVar2;
              local_78.fields.y = (float)uVar7;
              UnityEngine_Transform__set_localPosition(pUVar15,&local_78,(MethodInfo *)0x0);
              pUVar15 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              local_78.fields.x = -1.5707964;
              local_78.fields.y = 0.0;
              local_78.fields.z = 0.0;
              pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                                  ((UnityEngine_Quaternion_o *)local_68,&local_78,(MethodInfo *)0x0);
              if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                local_68[0].x = (pUVar16->fields).x;
                local_68[0].y = (pUVar16->fields).y;
                local_68[0].z = (pUVar16->fields).z;
                local_68[0].w = (pUVar16->fields).w;
                UnityEngine_Transform__set_localRotation
                          (pUVar15,(UnityEngine_Quaternion_o *)local_68,(MethodInfo *)0x0);
                pUVar15 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433dbeb == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433dbeb = '\x01';
                }
                pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar3 = (pUVar11->oneVector).fields.x;
                uVar8 = (pUVar11->oneVector).fields.y;
                if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                  local_78.fields.z = (pUVar11->oneVector).fields.z * 0.01;
                  local_78.fields.x = (float)uVar3 * 0.01;
                  local_78.fields.y = (float)uVar8 * 0.01;
                  UnityEngine_Transform__set_localScale(pUVar15,&local_78,(MethodInfo *)0x0);
                  pUVar15 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                    pUVar12 = UnityEngine_Transform__get_position
                                        ((UnityEngine_Vector3_o *)local_68,pUVar17,(MethodInfo *)0x0);
                    uVar4 = (pUVar12->fields).x;
                    uVar9 = (pUVar12->fields).y;
                    fVar22 = (pUVar12->fields).z;
                    local_78.fields.x = (float)uVar4;
                    local_78.fields.y = (float)uVar9;
                    if (hand) {
                      if (Il2CppMethodInitialized_18433dbea == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                        Il2CppMethodInitialized_18433dbea = '\x01';
                      }
                      pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
                      fVar20 = (pUVar11->zeroVector).fields.x;
                      fVar21 = (pUVar11->zeroVector).fields.y;
                      fVar19 = (pUVar11->zeroVector).fields.z;
                    }
                    else {
                      if (Il2CppMethodInitialized_18434494b == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                        Il2CppMethodInitialized_18434494b = '\x01';
                      }
                      fVar19 = (__this->fields).Size * 0.1;
                      pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
                      fVar20 = fVar19 * (pUVar11->downVector).fields.x;
                      fVar21 = fVar19 * (pUVar11->downVector).fields.y;
                      fVar19 = fVar19 * (pUVar11->downVector).fields.z;
                    }
                    if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                      local_78.fields.x = fVar20 + (float)uVar4;
                      local_78.fields.y = fVar21 + local_78.fields.y;
                      local_78.fields.z = fVar19 + fVar22;
                      UnityEngine_Transform__set_position(pUVar15,&local_78,(MethodInfo *)0x0);
                      pUVar17 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)local_98[0],(MethodInfo *)0x0);
                      pUVar15 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                      if ((pUVar15 != (UnityEngine_Transform_o *)0x0) &&
                         (pUVar12 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)local_68,pUVar15,(MethodInfo *)0x0),
                         pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                        uVar5 = (pUVar12->fields).x;
                        uVar10 = (pUVar12->fields).y;
                        local_78.fields.z = (pUVar12->fields).z;
                        local_78.fields.x = (float)uVar5;
                        local_78.fields.y = (float)uVar10;
                        UnityEngine_Transform__set_position(pUVar17,&local_78,(MethodInfo *)0x0);
                        if ((__this->fields).EffectsEnabled != false) {
                          UnityEngine_ParticleSystem__Play(__this_01,true,(MethodInfo *)0x0);
                        }
                        fVar22 = (__this->fields).ArmDisableTime;
                        if (left) {
                          (__this->fields)._leftArmDisabledTimeLeft = fVar22;
                        }
                        else {
                          (__this->fields)._rightArmDisabledTimeLeft = fVar22;
                        }
                        Characters_BasicTitan__SetLimbDisabled(__this,left,!hand,hand,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_18218329f:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetLimbDisabled
// il2cpp: void Characters_BasicTitan__SetLimbDisabled (Characters_BasicTitan_o* __this, bool left, bool arm, bool hand, const MethodInfo* method);
// 0x18218b870

void Characters_BasicTitan__SetLimbDisabled
               (Characters_BasicTitan_o *__this,bool left,bool arm,bool hand,MethodInfo *method)

{
  Characters_TitanColliderToggler_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  bool bVar3;
  bool bVar4;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Collider_o *__this_01;
  
  if (left) {
    (__this->fields).LeftArmDisabled = arm;
    (__this->fields).LeftHandDisabled = hand;
  }
  else {
    (__this->fields).RightArmDisabled = arm;
    (__this->fields).RightHandDisabled = hand;
  }
  pCVar1 = (__this->fields).TitanColliderToggler;
  if ((pCVar1 != (Characters_TitanColliderToggler_o *)0x0) &&
     (pCVar2 = (__this->fields).BasicCache, pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) {
    if (left) {
      __this_01 = (pCVar2->fields).ForearmLHurtbox;
      __this_00 = (pCVar2->fields).HandLHurtbox;
    }
    else {
      __this_01 = (pCVar2->fields).ForearmRHurtbox;
      __this_00 = (pCVar2->fields).HandRHurtbox;
    }
    bVar4 = (pCVar1->fields)._enabled;
    if (bVar4 == false) {
      bVar3 = false;
    }
    else {
      bVar3 = (*(__this->klass->vtable)._179_IsToggleColliderActive.methodPtr)
                        (__this,__this_00,(__this->klass->vtable)._179_IsToggleColliderActive.method);
    }
    if (__this_00 != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__set_enabled(__this_00,bVar3 != false,(MethodInfo *)0x0);
      if (bVar4 == false) {
        bVar4 = false;
      }
      else {
        bVar4 = (*(__this->klass->vtable)._179_IsToggleColliderActive.methodPtr)
                          (__this,__this_01,(__this->klass->vtable)._179_IsToggleColliderActive.method);
      }
      if (__this_01 != (UnityEngine_Collider_o *)0x0) {
        UnityEngine_Collider__set_enabled(__this_01,bVar4 != false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$IsToggleColliderActive
// il2cpp: bool Characters_BasicTitan__IsToggleColliderActive (Characters_BasicTitan_o* __this, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x182187c80

bool Characters_BasicTitan__IsToggleColliderActive
               (Characters_BasicTitan_o *__this,UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346df4 = '\x01';
  }
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).HandLHurtbox;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,pUVar2,(MethodInfo *)0x0);
    if (bVar3) {
      if ((__this->fields).LeftArmDisabled != false) {
        return false;
      }
      return (__this->fields).LeftHandDisabled == false;
    }
    pCVar1 = (__this->fields).BasicCache;
    if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).HandRHurtbox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,pUVar2,(MethodInfo *)0x0);
      if (bVar3) {
        if ((__this->fields).RightArmDisabled != false) {
          return false;
        }
        return (__this->fields).RightHandDisabled == false;
      }
      pCVar1 = (__this->fields).BasicCache;
      if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).ForearmLHurtbox;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,pUVar2,(MethodInfo *)0x0);
        if (bVar3) {
          return (__this->fields).LeftArmDisabled == false;
        }
        pCVar1 = (__this->fields).BasicCache;
        if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
          pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).ForearmRHurtbox;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,pUVar2,(MethodInfo *)0x0);
          if (bVar3) {
            return (__this->fields).RightArmDisabled == false;
          }
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Laugh
// il2cpp: void Characters_BasicTitan__Laugh (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x18218a0c0

void Characters_BasicTitan__Laugh
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  UnityEngine_Transform_o *__this_01;
  System_Object_array *parameters;
  UnityEngine_Vector3_o *pUVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined8 local_28;
  float local_20;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346df5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"LaughRPC");
    Il2CppMethodInitialized_184346df5 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if ((character != (Characters_BaseCharacter_o *)0x0) &&
       ((pUVar1 = (character->fields).Cache, pUVar1 != (Utility_BaseComponentCache_o *)0x0 &&
        (__this_01 = (pUVar1->fields).Transform, __this_01 != (UnityEngine_Transform_o *)0x0)))) {
      pUVar2 = UnityEngine_Transform__get_position(&local_18,__this_01,(MethodInfo *)0x0);
      local_28._0_4_ = (pUVar2->fields).x;
      local_28._4_4_ = (pUVar2->fields).y;
      local_20 = (pUVar2->fields).z;
      pIVar3 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_28);
      if (parameters != (System_Object_array *)0x0) {
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (__this_00,"LaughRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Distract
// il2cpp: void Characters_BasicTitan__Distract (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x182185f30

void Characters_BasicTitan__Distract
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346df6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DistractRPC");
    Il2CppMethodInitialized_184346df6 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if ((character != (Characters_BaseCharacter_o *)0x0) &&
       ((pUVar1 = (character->fields).Cache, pUVar1 != (Utility_BaseComponentCache_o *)0x0 &&
        (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)))) {
      local_res8[0] = (pPVar2->fields).viewIdField;
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
      if (parameters != (System_Object_array *)0x0) {
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (__this_00,"DistractRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$LaughRPC
// il2cpp: void Characters_BasicTitan__LaughRPC (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o source, const MethodInfo* method);
// 0x182189ee0

void Characters_BasicTitan__LaughRPC
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *source,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Utility_BaseComponentCache_o *pUVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_68;
  float local_60;
  UnityEngine_Vector3_Fields local_58 [6];
  
  if (Il2CppMethodInitialized_184346df7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    Il2CppMethodInitialized_184346df7 = '\x01';
  }
  if ((__this->fields).AI == false) {
    return;
  }
  pUVar6 = (__this->fields).Cache;
  if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar7 = (pUVar6->fields).PhotonView, pPVar7 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((pPVar7->fields)._IsMine_k__BackingField == false) {
      return;
    }
    pUVar8 = (pUVar6->fields).Transform;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pUVar10 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_58,pUVar8,(MethodInfo *)0x0)
      ;
      pUVar6 = (__this->fields).Cache;
      if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar8 = (pUVar6->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        fVar11 = (pUVar10->fields).z;
        uVar3._0_4_ = (pUVar10->fields).x;
        uVar3._4_4_ = (pUVar10->fields).y;
        pUVar10 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)local_58,pUVar8,(MethodInfo *)0x0);
        uVar1 = (source->fields).x;
        uVar4 = (source->fields).y;
        uVar2 = (pUVar10->fields).x;
        uVar5 = (pUVar10->fields).y;
        fVar13 = (source->fields).z - (pUVar10->fields).z;
        local_68 = CONCAT44((float)uVar4 - (float)uVar5,(float)uVar1 - (float)uVar2);
        local_60 = fVar13;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        local_60 = (float)il2cpp_runtime_helper_180546a40(&local_68,0);
        if (local_60 <= 1e-05) {
          pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar12 = (pUVar9->zeroVector).fields.x;
          fVar14 = (pUVar9->zeroVector).fields.y;
          local_60 = (pUVar9->zeroVector).fields.z;
        }
        else {
          fVar12 = ((float)uVar1 - (float)uVar2) / local_60;
          fVar14 = ((float)uVar4 - (float)uVar5) / local_60;
          local_60 = fVar13 / local_60;
        }
        local_68 = CONCAT44(fVar14,fVar12);
        local_58[0]._0_8_ = uVar3;
        local_58[0].z = fVar11;
        fVar11 = (float)il2cpp_runtime_helper_181d9e200(local_58,&local_68,0);
        if (80.0 <= fVar11) {
          return;
        }
        (*(__this->klass->vtable)._80_Emote.methodPtr)
                  (__this,"Laugh",(__this->klass->vtable)._80_Emote.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$DistractRPC
// il2cpp: void Characters_BasicTitan__DistractRPC (Characters_BasicTitan_o* __this, int32_t viewId, const MethodInfo* method);
// 0x182185e70

void Characters_BasicTitan__DistractRPC(Characters_BasicTitan_o *__this,int32_t viewId,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BaseCharacter_o *enemy;
  Controllers_BaseTitanAIController_o *__this_00;
  
  if (Il2CppMethodInitialized_184346df8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346df8 = '\x01';
  }
  if ((__this->fields).AI != false) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
label_182185f1e:
      ThrowNullReferenceException();
    }
    if ((pPVar2->fields)._IsMine_k__BackingField != false) {
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      enemy = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_6651A0 *)
                             MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
      if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto label_182185f1e;
      Controllers_BaseTitanAIController__SetEnemy
                (__this_00,(Characters_ITargetable_o *)enemy,10.0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.BasicTitan$$UpdateDisableArm
// il2cpp: void Characters_BasicTitan__UpdateDisableArm (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182190750
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821908d1: movaps xmm6, xmm7

void Characters_BasicTitan__UpdateDisableArm(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_ParticleSystem_o *pUVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((__this->fields).Dead != false) {
    return;
  }
  if (((__this->fields).LeftArmDisabled != false) || ((__this->fields).LeftHandDisabled != false)) {
    fVar6 = (__this->fields)._leftArmDisabledTimeLeft;
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar6 = Characters_BasicTitan__UpdateDisabledLimb(__this,true,fVar6 - fVar5,(MethodInfo *)0x0);
    (__this->fields)._leftArmDisabledTimeLeft = fVar6;
  }
  if (((__this->fields).RightArmDisabled != false) || ((__this->fields).RightHandDisabled != false)) {
    fVar6 = (__this->fields)._rightArmDisabledTimeLeft;
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar6 = Characters_BasicTitan__UpdateDisabledLimb(__this,false,fVar6 - fVar5,(MethodInfo *)0x0);
    (__this->fields)._rightArmDisabledTimeLeft = fVar6;
  }
  pCVar2 = (__this->fields).BasicCache;
  if ((pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) ||
     (pUVar3 = (pCVar2->fields).ForearmSmokeL, pUVar3 == (UnityEngine_ParticleSystem_o *)0x0)) {
label_18219090c:
    ThrowNullReferenceException();
  }
  bVar4 = UnityEngine_ParticleSystem__get_isEmitting(pUVar3,(MethodInfo *)0x0);
  fVar6 = 1.0;
  if (!bVar4) {
    pCVar2 = (__this->fields).BasicCache;
    if ((pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar3 = (pCVar2->fields).ForearmSmokeR, pUVar3 == (UnityEngine_ParticleSystem_o *)0x0))
    goto label_18219090c;
    bVar4 = UnityEngine_ParticleSystem__get_isEmitting(pUVar3,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((__this->fields)._limbSteamSoundFade <= 0.0) {
        return;
      }
      fVar8 = 0.5;
      fVar5 = 0.0;
      goto label_18219087d;
    }
  }
  fVar8 = 0.3;
  fVar5 = 1.0;
label_18219087d:
  fVar1 = (__this->fields)._limbSteamSoundFade;
  fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  if (fVar7 / fVar8 < ABS(fVar5 - fVar1)) {
    if (fVar5 - fVar1 < 0.0) {
      fVar6 = -1.0;
    }
    fVar5 = fVar6 * (fVar7 / fVar8) + fVar1;
  }
  (__this->fields)._limbSteamSoundFade = fVar5;
  Characters_BasicTitan__SetSteamVolume(__this,fVar5,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$SetSteamVolume
// il2cpp: void Characters_BasicTitan__SetSteamVolume (Characters_BasicTitan_o* __this, float fade, const MethodInfo* method);
// 0x18218bda0

void Characters_BasicTitan__SetSteamVolume(Characters_BasicTitan_o *__this,float fade,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_AudioSource_o *__this_01;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346df9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346df9 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    fVar2 = (__this->fields)._steamSoundVolume;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Steam,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
      if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
        fVar2 = fVar2 * fade;
        UnityEngine_AudioSource__set_volume(__this_01,fVar2,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._111_ToggleSoundLocal.methodPtr)
                  (__this,TypeInfo_Characters_TitanSounds->static_fields->Steam,0.0 < fVar2,
                   (__this->klass->vtable)._111_ToggleSoundLocal.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateDisabledLimb
// il2cpp: float Characters_BasicTitan__UpdateDisabledLimb (Characters_BasicTitan_o* __this, bool left, float timeLeft, const MethodInfo* method);
// 0x182190920

float Characters_BasicTitan__UpdateDisabledLimb
                (Characters_BasicTitan_o *__this,bool left,float timeLeft,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  UnityEngine_ParticleSystem_o *pUVar6;
  UnityEngine_ParticleSystem_o *__this_01;
  undefined1 local_res10 [8];
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184346dfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WardedWeakSpot);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWardedRPC");
    Il2CppMethodInitialized_184346dfa = '\x01';
  }
  if (timeLeft <= (__this->fields).ArmDisableTime - 4.0) {
    pCVar1 = (__this->fields).BasicCache;
    if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182190bcc;
    if (left) {
      pUVar6 = (pCVar1->fields).ForearmSmokeL;
      __this_01 = (pCVar1->fields).ForearmBloodL;
    }
    else {
      pUVar6 = (pCVar1->fields).ForearmSmokeR;
      __this_01 = (pCVar1->fields).ForearmBloodR;
    }
    if (__this_01 == (UnityEngine_ParticleSystem_o *)0x0) goto label_182190bcc;
    bVar3 = UnityEngine_ParticleSystem__IsAlive(__this_01,true,(MethodInfo *)0x0);
    if (bVar3) {
      UnityEngine_ParticleSystem__Stop(__this_01,true,1,(MethodInfo *)0x0);
    }
    else if ((__this->fields).EffectsEnabled != false) {
      if (pUVar6 == (UnityEngine_ParticleSystem_o *)0x0) goto label_182190bcc;
      bVar3 = UnityEngine_ParticleSystem__get_isPlaying(pUVar6,(MethodInfo *)0x0);
      if (!bVar3) {
        UnityEngine_ParticleSystem__Play_2fca570(pUVar6,(MethodInfo *)0x0);
      }
    }
  }
  if (0.0 < timeLeft) {
    return timeLeft;
  }
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if ((bVar3) && ((&(__this->fields).LeftArmDisabled)[!left] != false)) {
    bVar3 = (__this->fields).LastWardedWeakSpot == !left + 1;
  }
  else {
    bVar3 = false;
  }
  Characters_BasicTitan__SetLimbDisabled(__this,left,false,false,(MethodInfo *)0x0);
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
    if (left) {
      pUVar6 = (pCVar1->fields).ForearmSmokeL;
    }
    else {
      pUVar6 = (pCVar1->fields).ForearmSmokeR;
    }
    if (pUVar6 != (UnityEngine_ParticleSystem_o *)0x0) {
      UnityEngine_ParticleSystem__Stop_2fca820(pUVar6,(MethodInfo *)0x0);
      if (!bVar3) {
        return timeLeft;
      }
      pUVar2 = (__this->fields).Cache;
      if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
        __this_00 = (pUVar2->fields).PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        local_res10[0] = (__this->fields).isWarded;
        pIVar4 = il2cpp_value_box(g_data_184354de8,local_res10);
        if (parameters != (System_Object_array *)0x0) {
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length != 0) {
            parameters->m_Items[0] = pIVar4;
            Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar4);
            local_res18[0] = (__this->fields).LastWardedWeakSpot;
            pIVar4 = il2cpp_value_box((Il2CppClass *)TypeInfo_Characters_WardedWeakSpot,local_res18);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
               pIVar5 == (Il2CppObject *)0x0)) {
              pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
            }
            if (1 < (uint)parameters->max_length) {
              parameters->m_Items[1] = pIVar4;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar4);
              if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(__this_00,"SetWardedRPC",0,parameters,(MethodInfo *)0x0);
                return timeLeft;
              }
              goto label_182190bf8;
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
label_182190bf8:
      ThrowNullReferenceException();
    }
  }
label_182190bcc:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateLimbParticles
// il2cpp: void Characters_BasicTitan__UpdateLimbParticles (Characters_BasicTitan_o* __this, bool left, float timeLeft, const MethodInfo* method);
// 0x182191060
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821910f2: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x1821910f7: mov rsi, qword ptr [rsp + 0x38]

void Characters_BasicTitan__UpdateLimbParticles
               (Characters_BasicTitan_o *__this,bool left,float timeLeft,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  bool bVar2;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_ParticleSystem_o *__this_01;
  
  if ((__this->fields).ArmDisableTime - 4.0 < timeLeft) {
    return;
  }
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
    if (left) {
      __this_00 = (pCVar1->fields).ForearmSmokeL;
      __this_01 = (pCVar1->fields).ForearmBloodL;
    }
    else {
      __this_00 = (pCVar1->fields).ForearmSmokeR;
      __this_01 = (pCVar1->fields).ForearmBloodR;
    }
    if (__this_01 != (UnityEngine_ParticleSystem_o *)0x0) {
      bVar2 = UnityEngine_ParticleSystem__IsAlive(__this_01,true,(MethodInfo *)0x0);
      if (bVar2) {
        UnityEngine_ParticleSystem__Stop(__this_01,true,1,(MethodInfo *)0x0);
        return;
      }
      if ((__this->fields).EffectsEnabled != false) {
        if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto label_182191126;
        bVar2 = UnityEngine_ParticleSystem__get_isPlaying(__this_00,(MethodInfo *)0x0);
        if (!bVar2) {
          UnityEngine_ParticleSystem__Play_2fca570(__this_00,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
label_182191126:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Run
// il2cpp: void Characters_BasicTitan__Run (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218b510

void Characters_BasicTitan__Run(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  Characters_BasicTitanComponentCache_o *pCVar1;
  Characters_BaseHitbox_o *pCVar2;
  bool bVar3;
  
  (__this->fields)._stepPhase = 0;
  (__this->fields)._needFreshCore = true;
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    animation = (__this->fields)._runAnimation;
    Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,animation,0.5,0.0,(MethodInfo *)0x0);
    (__this->fields).State = 1;
    (__this->fields)._currentStateAnimation = animation;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
    (__this->fields)._stateTimeLeft = 0.0;
    if ((__this->fields).IsCrawler == false) {
      return;
    }
    pCVar1 = (__this->fields).BasicCache;
    if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).MouthHitbox, pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
      bVar3 = Characters_BaseHitbox__IsActive(pCVar2,(MethodInfo *)0x0);
      if (!bVar3) {
        pCVar1 = (__this->fields).BasicCache;
        if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (pCVar2 = (pCVar1->fields).MouthHitbox, pCVar2 == (Characters_BaseHitbox_o *)0x0))
        goto label_18218b676;
        Characters_BaseHitbox__Activate(pCVar2,0.0,0.0,(MethodInfo *)0x0);
      }
      pCVar1 = (__this->fields).BasicCache;
      if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).CrawlerHitbox, pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
        bVar3 = Characters_BaseHitbox__IsActive(pCVar2,(MethodInfo *)0x0);
        if (bVar3) {
          return;
        }
        pCVar1 = (__this->fields).BasicCache;
        if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pCVar2 = (pCVar1->fields).CrawlerHitbox, pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
          Characters_BaseHitbox__Activate(pCVar2,0.0,0.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_18218b676:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$WallClimb
// il2cpp: void Characters_BasicTitan__WallClimb (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182191d80

void Characters_BasicTitan__WallClimb(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_String_o *animation;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  
  bVar2 = (*(__this->klass->vtable)._122_get_CanWallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._122_get_CanWallClimb.method);
  if ((bVar2) && ((__this->fields)._climbCooldownLeft <= 0.0)) {
    (__this->fields)._climbCooldownLeft = (__this->fields).ClimbCooldown;
    pCVar1 = (__this->fields).BasicAnimations;
    (__this->fields)._stepPhase = 0;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      animation = (pCVar1->fields).RunCrawler;
      (__this->fields)._needFreshCore = true;
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 0x19;
        (__this->fields)._currentStateAnimation = animation;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
        (__this->fields)._stateTimeLeft = 0.0;
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Characters.BasicTitan$$Jump
// il2cpp: void Characters_BasicTitan__Jump (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x182188020

void Characters_BasicTitan__Jump
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *direction,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  Characters_BaseTitanAnimations_o *pCVar3;
  float fVar4;
  System_String_o *pSVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346dfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346dfb = '\x01';
  }
  fVar4 = (direction->fields).y;
  pCVar1 = (__this->fields).BasicAnimations;
  fVar6 = (direction->fields).z;
  (__this->fields)._jumpDirection.fields.x = (direction->fields).x;
  (__this->fields)._jumpDirection.fields.y = fVar4;
  (__this->fields)._jumpDirection.fields.z = fVar6;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    if ((__this->fields).IsCrawler == false) {
      pCVar2 = (__this->fields).Animation;
      pSVar5 = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar6 = Characters_AnimationHandler__GetLength(pCVar2,pSVar5,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).BaseTitanAnimations;
        if (pCVar3 != (Characters_BaseTitanAnimations_o *)0x0) {
          pSVar5 = (*(pCVar3->klass->vtable)._8_get_Jump.methodPtr)
                             (pCVar3,(pCVar3->klass->vtable)._8_get_Jump.method);
          (__this->fields)._needFreshCore = true;
          pCVar2 = (__this->fields).Animation;
          if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._173_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._173_Ungrab.method);
            (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,pSVar5,0.1,0.0,(MethodInfo *)0x0);
            (__this->fields).State = 4;
            (__this->fields)._currentStateAnimation = pSVar5;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,pSVar5);
            (__this->fields)._stateTimeLeft = fVar6 * 0.5;
            if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
            }
            Characters_BaseCharacter__PlaySound
                      ((Characters_BaseCharacter_o *)__this,
                       TypeInfo_Characters_TitanSounds->static_fields->TitanJump,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        pSVar5 = (pCVar1->fields).JumpCrawler;
        fVar6 = Characters_AnimationHandler__GetLength(pCVar2,pSVar5,(MethodInfo *)0x0);
        (__this->fields)._needFreshCore = true;
        pCVar2 = (__this->fields).Animation;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
          (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar5,0.1,0.0,(MethodInfo *)0x0);
          (__this->fields).State = 4;
          (__this->fields)._currentStateAnimation = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,pSVar5);
          (__this->fields)._stateTimeLeft = fVar6;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$StunDirectional
// il2cpp: void Characters_BasicTitan__StunDirectional (Characters_BasicTitan_o* __this, bool left, float time, bool refresh, const MethodInfo* method);
// 0x18218cbb0

void Characters_BasicTitan__StunDirectional
               (Characters_BasicTitan_o *__this,bool left,float time,bool refresh,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  System_String_o *animation;
  
  bVar2 = (*(__this->klass->vtable)._147_CanStun.methodPtr)
                    (__this,(__this->klass->vtable)._147_CanStun.method);
  if ((!bVar2) &&
     ((((!refresh || ((__this->fields).State != 0xd)) || ((__this->fields).Dead != false)) ||
      ((__this->fields).EnableAI == false)))) {
    return;
  }
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    if (left) {
      animation = (pCVar1->fields).StunLeft;
    }
    else {
      animation = (pCVar1->fields).StunRight;
    }
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 0xd;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
      (__this->fields)._stateTimeLeft = time;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$StartJump
// il2cpp: void Characters_BasicTitan__StartJump (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218c670

void Characters_BasicTitan__StartJump(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  Characters_BaseHitbox_o *__this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o local_18;
  
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Cache;
  (__this->fields).State = 5;
  (__this->fields)._stateTimeLeft = 0.2;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).Rigidbody;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar4 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields)._jumpDirection,0);
    if (fVar4 <= 1e-05) {
      pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar5 = (pUVar2->zeroVector).fields.x;
      fVar6 = (pUVar2->zeroVector).fields.y;
      fVar4 = (pUVar2->zeroVector).fields.z;
    }
    else {
      fVar5 = (__this->fields)._jumpDirection.fields.x / fVar4;
      fVar6 = (__this->fields)._jumpDirection.fields.y / fVar4;
      fVar4 = (__this->fields)._jumpDirection.fields.z / fVar4;
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      local_18.fields.z = (__this->fields).JumpForce;
      local_18.fields.x = fVar5 * local_18.fields.z;
      local_18.fields.y = fVar6 * local_18.fields.z;
      local_18.fields.z = fVar4 * local_18.fields.z;
      UnityEngine_Rigidbody__AddForce(__this_00,&local_18,2,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).BasicCache;
      if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (__this_01 = (pCVar3->fields).MouthHitbox, __this_01 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__Activate(__this_01,0.0,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$JumpImmediate
// il2cpp: void Characters_BasicTitan__JumpImmediate (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182187fb0

void Characters_BasicTitan__JumpImmediate(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_String_o *animation;
  
  (*(__this->klass->vtable)._149_StartJump.methodPtr)(__this,(__this->klass->vtable)._149_StartJump.method);
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,animation,0.1,0.85,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Eat
// il2cpp: void Characters_BasicTitan__Eat (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182186070

void Characters_BasicTitan__Eat(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  Characters_BasicTitanAnimations_o *pCVar1;
  bool bVar2;
  System_String_o *animation;
  
  if (Il2CppMethodInitialized_184346dfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346dfc = '\x01';
  }
  x = (__this->fields).HoldHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((__this->fields).HoldHumanLeft == false) {
      animation = (pCVar1->fields).AttackEatR;
    }
    else {
      animation = (pCVar1->fields).AttackEatL;
    }
    Characters_BaseTitan__StateAction
              ((Characters_BaseTitan_o *)__this,0x17,animation,0.1,true,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._196_GrabGrunt.methodPtr)
              (__this,1.0,(__this->klass->vtable)._196_GrabGrunt.method);
  }
  return;
}


// Characters.BasicTitan$$Land
// il2cpp: void Characters_BasicTitan__Land (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821882d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182188358: jmp 0x18218837e

void Characters_BasicTitan__Land(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Characters_BaseTitanAnimations_o *pCVar8;
  Characters_BasicTitanAnimations_o *pCVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  System_String_o *pSVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Quaternion_o *pUVar16;
  Characters_AnimationHandler_o *pCVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Quaternion_Fields local_88 [8];
  
  if (Il2CppMethodInitialized_184346dfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184346dfd = '\x01';
  }
  if ((__this->fields).IsCrawler == false) {
    pCVar8 = (__this->fields).BaseTitanAnimations;
    if (pCVar8 == (Characters_BaseTitanAnimations_o *)0x0) goto label_1821885f4;
    pSVar14 = (*(pCVar8->klass->vtable)._10_get_Land.methodPtr)
                        (pCVar8,(pCVar8->klass->vtable)._10_get_Land.method);
    pCVar17 = (__this->fields).Animation;
    if (pCVar17 == (Characters_AnimationHandler_o *)0x0) goto label_1821885f4;
  }
  else {
    pCVar9 = (__this->fields).BasicAnimations;
    if ((pCVar9 == (Characters_BasicTitanAnimations_o *)0x0) ||
       (pCVar17 = (__this->fields).Animation, pCVar17 == (Characters_AnimationHandler_o *)0x0))
    goto label_1821885f4;
    pSVar14 = (pCVar9->fields).LandCrawler;
  }
  fVar18 = Characters_AnimationHandler__GetLength(pCVar17,pSVar14,(MethodInfo *)0x0);
  (__this->fields)._needFreshCore = true;
  pCVar17 = (__this->fields).Animation;
  if (pCVar17 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(pCVar17,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,pSVar14,0.1,0.0,(MethodInfo *)0x0);
    (__this->fields).State = 9;
    (__this->fields)._currentStateAnimation = pSVar14;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,pSVar14);
    (__this->fields)._stateTimeLeft = fVar18;
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pUVar10 = (__this->fields).Cache;
    if ((pUVar10 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar10->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pSVar14 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
      pUVar15 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_98,__this_00,(MethodInfo *)0x0);
      uVar4 = (pUVar15->fields).x;
      uVar6 = (pUVar15->fields).y;
      fVar18 = (pUVar15->fields).z;
      if (Il2CppMethodInitialized_18434494b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18434494b = '\x01';
      }
      fVar1 = (__this->fields)._currentGroundDistance;
      local_98.x = 4.712389;
      local_98.y = 0.0;
      local_98.z = 0.0;
      pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar2 = (pUVar11->downVector).fields.z;
      uVar5 = (pUVar11->downVector).fields.x;
      uVar7 = (pUVar11->downVector).fields.y;
      pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Quaternion_o *)local_88,(UnityEngine_Vector3_o *)&local_98,
                           (MethodInfo *)0x0);
      fVar3 = (__this->fields).Size;
      uVar12._0_4_ = (pUVar16->fields).x;
      uVar12._4_4_ = (pUVar16->fields).y;
      uVar13._0_4_ = (pUVar16->fields).z;
      uVar13._4_4_ = (pUVar16->fields).w;
      fVar19 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                         (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      local_98.y = (float)uVar7 * fVar1 + (float)uVar6;
      local_98.x = (float)uVar5 * fVar1 + (float)uVar4;
      local_98.z = fVar1 * fVar2 + fVar18;
      local_88[0]._0_8_ = uVar12;
      local_88[0]._8_8_ = uVar13;
      Effects_EffectSpawner__Spawn
                (pSVar14,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)local_88,
                 fVar19 * fVar3,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_1821885f4:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Fall
// il2cpp: void Characters_BasicTitan__Fall (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821865e0

void Characters_BasicTitan__Fall(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  Characters_BasicTitanAnimations_o *pCVar3;
  System_String_o *animation;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      animation = (*(pCVar1->klass->vtable)._9_get_Fall.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._9_get_Fall.method);
      (__this->fields)._needFreshCore = true;
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
label_182186698:
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 7;
        (__this->fields)._currentStateAnimation = animation;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
        (__this->fields)._stateTimeLeft = 0.0;
        return;
      }
    }
  }
  else {
    pCVar3 = (__this->fields).BasicAnimations;
    if (pCVar3 != (Characters_BasicTitanAnimations_o *)0x0) {
      animation = (pCVar3->fields).FallCrawler;
      (__this->fields)._needFreshCore = true;
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        goto label_182186698;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Idle
// il2cpp: void Characters_BasicTitan__Idle (Characters_BasicTitan_o* __this, float fadeTime, const MethodInfo* method);
// 0x1821874f0

void Characters_BasicTitan__Idle(Characters_BasicTitan_o *__this,float fadeTime,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_String_o *animation;
  
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields).IsCrawler == false) {
    animation = (*(pCVar1->klass->vtable)._4_get_Idle.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._4_get_Idle.method);
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this,0,animation,0.0,fadeTime,true,0.0,(MethodInfo *)0x0);
    return;
  }
  Characters_BaseTitan__StateActionWithTime
            ((Characters_BaseTitan_o *)__this,0,(pCVar1->fields).IdleCrawler,0.0,fadeTime,true,0.0,
             (MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$Turn
// il2cpp: void Characters_BasicTitan__Turn (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x18218cda0
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18218cf72: movaps xmm6, xmm8
// asm:   0x18218d041: movsd xmm0, qword ptr [rdi]
// asm:   0x18218d045: xor r8d, r8d
// asm:   0x18218d048: mov eax, dword ptr [rdi + 8]
// asm:   0x18218d04b: mov rdx, rsi
// asm:   0x18218d04e: movsd qword ptr [rsp + 0x40], xmm0
// asm:   0x18218d054: mov dword ptr [rsp + 0x48], eax
// asm:   0x18218d058: call 0x182107440  ; Characters_AnimationHandler__GetTotalTime()
// asm:   0x18218d05d: mulss xmm0, dword ptr [rip + 0x12b320f]
// asm:   0x18218d065: lea rdx, [rsp + 0x40]
// asm:   0x18218d06a: mov r8, rsi
// asm:   0x18218d06d: mov qword ptr [rsp + 0x20], 0
// asm:   0x18218d076: mov rcx, rbx
// asm:   0x18218d079: movaps xmm3, xmm0
// asm:   0x18218d07c: call 0x182180b40  ; Characters_BaseTitan__StartTurn()
// asm:   0x18218d081: jmp 0x18218cfeb

void Characters_BasicTitan__Turn
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *targetDirection,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_BaseTitanAnimations_c *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  Characters_AnimationHandler_o *pCVar4;
  Characters_BasicTitanAnimations_o *pCVar5;
  float fVar6;
  bool bVar7;
  System_String_o *pSVar8;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Quaternion_o *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_o local_48 [4];
  
  if (Il2CppMethodInitialized_184346dfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_184346dfe = '\x01';
  }
  bVar7 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  if (!bVar7) {
    return;
  }
  local_58.x = (targetDirection->fields).x;
  local_58.y = (targetDirection->fields).y;
  local_58.z = (targetDirection->fields).z;
  fVar11 = Characters_BaseCharacter__GetAngleToTarget
                     ((Characters_BaseCharacter_o *)__this,(UnityEngine_Vector3_o *)&local_58,
                      (MethodInfo *)0x0);
  if ((__this->fields).IsCrawler == false) {
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pCVar2 = pCVar1->klass;
      if (fVar11 <= 0.0) {
        pSVar8 = (*(pCVar2->vtable)._19_get_Turn90L.methodPtr)(pCVar1,(pCVar2->vtable)._19_get_Turn90L.method)
        ;
      }
      else {
        pSVar8 = (*(pCVar2->vtable)._20_get_Turn90R.methodPtr)(pCVar1,(pCVar2->vtable)._20_get_Turn90R.method)
        ;
      }
      fVar13 = -120.0;
      if ((-120.0 <= fVar11) && (fVar13 = 120.0, fVar11 <= 120.0)) {
        fVar13 = fVar11;
      }
      pUVar3 = (__this->fields).Cache;
      (__this->fields)._turnDegrees = fVar13;
      if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
         (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
        pUVar9 = UnityEngine_Transform__get_eulerAngles
                           ((UnityEngine_Vector3_o *)local_48,__this_00,(MethodInfo *)0x0);
        local_58.z = 0.0;
        local_58._0_8_ =
             (ulonglong)(uint)(((pUVar9->fields).y + (__this->fields)._turnDegrees) * 0.017453292) << 0x20;
        pUVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                            (local_48,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        bVar7 = (__this->fields).SizeScaledTurnSpeed;
        fVar11 = (__this->fields).TurnSpeed;
        fVar13 = (pUVar10->fields).y;
        fVar12 = (pUVar10->fields).z;
        fVar6 = (pUVar10->fields).w;
        (__this->fields)._turnTargetRotation.fields.x = (pUVar10->fields).x;
        (__this->fields)._turnTargetRotation.fields.y = fVar13;
        (__this->fields)._turnTargetRotation.fields.z = fVar12;
        (__this->fields)._turnTargetRotation.fields.w = fVar6;
        if (bVar7 != false) {
          fVar13 = (__this->fields).Size;
          if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
          }
          fVar12 = 1.4 - (fVar13 - 0.7) * 0.15;
          fVar13 = 0.9;
          if ((0.9 <= fVar12) && (fVar13 = 1.5, fVar12 <= 1.5)) {
            fVar13 = fVar12;
          }
          fVar11 = fVar13 * fVar11;
        }
        if (fVar11 <= 0.0) {
          pCVar4 = (__this->fields).Animation;
          if (pCVar4 == (Characters_AnimationHandler_o *)0x0) goto label_18218d086;
          fVar11 = Characters_AnimationHandler__GetSpeed(pCVar4,pSVar8,(MethodInfo *)0x0);
        }
        pCVar4 = (__this->fields).Animation;
        if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
          fVar13 = Characters_AnimationHandler__GetLength(pCVar4,pSVar8,(MethodInfo *)0x0);
          Characters_BaseTitan__StateActionWithTime
                    ((Characters_BaseTitan_o *)__this,0x18,pSVar8,fVar13 / fVar11,0.0,true,fVar11,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    pCVar5 = (__this->fields).BasicAnimations;
    if (pCVar5 != (Characters_BasicTitanAnimations_o *)0x0) {
      if (fVar11 <= 0.0) {
        pSVar8 = (pCVar5->fields).Turn90LCrawler;
      }
      else {
        pSVar8 = (pCVar5->fields).Turn90RCrawler;
      }
      pCVar4 = (__this->fields).Animation;
      if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
        local_58.x = (targetDirection->fields).x;
        local_58.y = (targetDirection->fields).y;
        local_58.z = (targetDirection->fields).z;
        fVar11 = Characters_AnimationHandler__GetTotalTime(pCVar4,pSVar8,(MethodInfo *)0x0);
        Characters_BaseTitan__StartTurn
                  ((Characters_BaseTitan_o *)__this,(UnityEngine_Vector3_o *)&local_58,pSVar8,fVar11 * 0.71,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_18218d086:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateTurn
// il2cpp: void Characters_BasicTitan__UpdateTurn (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182191b70
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182191ccb: movups xmm0, xmmword ptr [rax]
// asm:   0x182191cce: xor r8d, r8d
// asm:   0x182191cd1: lea rdx, [rsp + 0x40]
// asm:   0x182191cd6: mov rcx, rbx
// asm:   0x182191cd9: movaps xmmword ptr [rsp + 0x40], xmm0
// asm:   0x182191cde: call 0x182f5c560  ; UnityEngine_Transform__set_rotation()
// asm:   0x182191ce3: jmp 0x182191c33

void Characters_BasicTitan__UpdateTurn(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UnityEngine_Quaternion_o *pUVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_Fields local_58;
  UnityEngine_Quaternion_Fields local_48;
  UnityEngine_Quaternion_o local_38 [3];
  
  if ((__this->fields).IsCrawler == false) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      pUVar7 = UnityEngine_Transform__get_rotation
                         ((UnityEngine_Quaternion_o *)&local_48,pUVar2,(MethodInfo *)0x0);
      uVar3._0_4_ = (__this->fields)._turnTargetRotation.fields.x;
      uVar3._4_4_ = (__this->fields)._turnTargetRotation.fields.y;
      uVar4._0_4_ = (__this->fields)._turnTargetRotation.fields.z;
      uVar4._4_4_ = (__this->fields)._turnTargetRotation.fields.w;
      uVar5._0_4_ = (pUVar7->fields).x;
      uVar5._4_4_ = (pUVar7->fields).y;
      uVar6._0_4_ = (pUVar7->fields).z;
      uVar6._4_4_ = (pUVar7->fields).w;
      fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      local_58._0_8_ = uVar3;
      local_58._8_8_ = uVar4;
      local_48._0_8_ = uVar5;
      local_48._8_8_ = uVar6;
      pUVar7 = UnityEngine_Quaternion__Internal_Lerp
                         (local_38,(UnityEngine_Quaternion_o *)&local_48,(UnityEngine_Quaternion_o *)&local_58
                          ,ABS((__this->fields)._turnDegrees) * fVar8 * 0.015,(MethodInfo *)0x0);
      local_48.x = (pUVar7->fields).x;
      local_48.y = (pUVar7->fields).y;
      local_48.z = (pUVar7->fields).z;
      local_48.w = (pUVar7->fields).w;
      UnityEngine_Transform__set_rotation(pUVar2,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    fVar8 = (__this->fields)._currentTurnTime;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pUVar1 = (__this->fields).Cache;
    fVar9 = fVar9 + fVar8;
    (__this->fields)._currentTurnTime = fVar9;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      fVar9 = fVar9 / (__this->fields)._maxTurnTime;
      pUVar2 = (pUVar1->fields).Transform;
      fVar8 = 0.0;
      if ((0.0 <= fVar9) && (fVar8 = 1.0, fVar9 <= 1.0)) {
        fVar8 = fVar9;
      }
      local_48.x = (__this->fields)._turnTargetRotation.fields.x;
      local_48.y = (__this->fields)._turnTargetRotation.fields.y;
      local_48.z = (__this->fields)._turnTargetRotation.fields.z;
      local_48.w = (__this->fields)._turnTargetRotation.fields.w;
      local_58.x = (__this->fields)._turnStartRotation.fields.x;
      local_58.y = (__this->fields)._turnStartRotation.fields.y;
      local_58.z = (__this->fields)._turnStartRotation.fields.z;
      local_58.w = (__this->fields)._turnStartRotation.fields.w;
      pUVar7 = UnityEngine_Quaternion__Internal_Slerp
                         (local_38,(UnityEngine_Quaternion_o *)&local_58,(UnityEngine_Quaternion_o *)&local_48
                          ,fVar8,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        local_48.x = (pUVar7->fields).x;
        local_48.y = (pUVar7->fields).y;
        local_48.z = (pUVar7->fields).z;
        local_48.w = (pUVar7->fields).w;
        UnityEngine_Transform__set_rotation(pUVar2,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$MarkDeadRPC
// il2cpp: void Characters_BasicTitan__MarkDeadRPC (Characters_BasicTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18218a640

void Characters_BasicTitan__MarkDeadRPC
               (Characters_BasicTitan_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Characters_AnimationHandler_o *__this_01;
  Settings_GraphicsSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Characters_BasicTitanComponentCache_o *pCVar5;
  UnityEngine_ParticleSystem_o *__this_02;
  UnityEngine_AudioSource_o *__this_03;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_184346dff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346dff = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    if ((__this->fields).Dead != false) {
      return;
    }
    (__this->fields).Dead = true;
    fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    dVar7 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
    dVar8 = Photon_Pun_PhotonMessageInfo__get_SentServerTime(info,(MethodInfo *)0x0);
    fVar9 = 0.0;
    if (0.0 <= (float)(dVar7 - dVar8)) {
      fVar9 = (float)(dVar7 - dVar8);
    }
    pUVar1 = (__this->fields).Cache;
    (__this->fields)._deathVisualStartTime = fVar6 - fVar9;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_03 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this_00,
                                 (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathFall,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item)
         , __this_03 != (UnityEngine_AudioSource_o *)0x0)) {
        fVar6 = UnityEngine_AudioSource__get_volume(__this_03,(MethodInfo *)0x0);
        __this_01 = (__this->fields).Animation;
        (__this->fields)._deathFallSoundVolume = fVar6;
        if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(__this_01,true,(MethodInfo *)0x0);
          if ((__this->fields).EffectsEnabled != false) {
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
            if ((pSVar3 == (Settings_GraphicsSettings_o *)0x0) ||
               (pSVar4 = (pSVar3->fields).NapeBloodEnabled, pSVar4 == (Settings_BoolSetting_o *)0x0))
            goto label_18218a81d;
            if ((pSVar4->fields)._value != false) {
              pCVar5 = (__this->fields).BasicCache;
              if ((pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) ||
                 (__this_02 = (pCVar5->fields).NapeBlood, __this_02 == (UnityEngine_ParticleSystem_o *)0x0))
              goto label_18218a81d;
              UnityEngine_ParticleSystem__Play(__this_02,true,(MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
  }
label_18218a81d:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$TakeDamage
// il2cpp: void Characters_BasicTitan__TakeDamage (Characters_BasicTitan_o* __this, int32_t damage, const MethodInfo* method);
// 0x18218cce0

void Characters_BasicTitan__TakeDamage(Characters_BasicTitan_o *__this,int32_t damage,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346e00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346e00 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar1 != (Settings_InGameSet_o *)0x0) {
    if ((((__this->fields).Dead == false) && (0 < damage)) && ((__this->fields).CurrentHealth <= damage)) {
      pSVar2 = (pSVar1->fields).Titan;
      if ((pSVar2 == (Settings_InGameTitanSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).TitanDecapitationEnabled, pSVar3 == (Settings_BoolSetting_o *)0x0))
      goto label_18218cd96;
      if ((pSVar3->fields)._value != false) {
        pSVar4 = (pSVar2->fields).TitanDecapitationMinDamage;
        if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_18218cd96;
        if ((pSVar4->fields)._value <= damage) {
          (__this->fields)._decapitated = true;
        }
      }
    }
    Characters_BaseCharacter__TakeDamage((Characters_BaseCharacter_o *)__this,damage,(MethodInfo *)0x0);
    return;
  }
label_18218cd96:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Die
// il2cpp: void Characters_BasicTitan__Die (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182185a10

void Characters_BasicTitan__Die(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  if ((__this->fields).Dead == false) {
    Characters_BaseCharacter__Die((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.BasicTitan$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BasicTitan__WaitAndDie (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182191d10

System_Collections_IEnumerator_o *
Characters_BasicTitan__WaitAndDie(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184346e01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan_WaitAndDie_d__132);
    Il2CppMethodInitialized_184346e01 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BasicTitan_WaitAndDie_d__132);
  Characters_BasicTitan__WaitAndDie_d__132___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$StartDeathAnimation
// il2cpp: void Characters_BasicTitan__StartDeathAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218c310

void Characters_BasicTitan__StartDeathAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  Characters_BasicTitanAnimations_o *pCVar6;
  Characters_AnimationHandler_o *__this_00;
  Utility_BaseComponentCache_o *pUVar7;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar8;
  System_Object_array *parameters;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  float fVar11;
  longlong lVar12;
  System_String_o *a;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if ((__this->fields)._pendingDeathAnimation == (System_String_o *)0x0) {
    return;
  }
  a = (__this->fields)._pendingDeathAnimation;
  (__this->fields)._pendingDeathAnimation = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingDeathAnimation,(void *)0x0);
  if ((__this->fields).DeathType == 0) {
    fVar1 = (__this->fields)._finisherDeathVelocity.fields.x;
    fVar3 = (__this->fields)._finisherDeathVelocity.fields.y;
    lVar12 = 0x3d0;
    fVar11 = (__this->fields)._finisherDeathVelocity.fields.z;
  }
  else {
    uVar2 = (__this->fields).DeathVelocity.fields.x;
    uVar4 = (__this->fields).DeathVelocity.fields.y;
    lVar12 = 0x29c;
    fVar11 = (__this->fields).DeathVelocity.fields.z;
    fVar1 = (float)uVar2;
    fVar3 = (float)uVar4;
  }
  iVar5 = *(int *)((longlong)&__this->klass + lVar12);
  pCVar6 = (__this->fields).BasicAnimations;
  (__this->fields)._launched = iVar5 == 3;
  (__this->fields)._decapitated = iVar5 == 2;
  if (pCVar6 == (Characters_BasicTitanAnimations_o *)0x0) goto label_18218c645;
  bVar8 = System_String__op_Equality(a,(pCVar6->fields).DieFront,(MethodInfo *)0x0);
  if (bVar8) {
label_18218c3f1:
    if ((__this->fields)._launched == false) {
      if ((__this->fields)._decapitated != false) {
        pCVar6 = (__this->fields).BasicAnimations;
        if (pCVar6 == (Characters_BasicTitanAnimations_o *)0x0) goto label_18218c645;
        a = (pCVar6->fields).DieHeadOff;
      }
    }
    else {
      pCVar6 = (__this->fields).BasicAnimations;
      if (pCVar6 == (Characters_BasicTitanAnimations_o *)0x0) goto label_18218c645;
      a = (pCVar6->fields).DieBlow;
    }
  }
  else {
    pCVar6 = (__this->fields).BasicAnimations;
    if (pCVar6 == (Characters_BasicTitanAnimations_o *)0x0) goto label_18218c645;
    bVar8 = System_String__op_Equality(a,(pCVar6->fields).DieBack,(MethodInfo *)0x0);
    if (bVar8) goto label_18218c3f1;
  }
  (__this->fields)._needFreshCore = true;
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(__this_00,true,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,a,0.05,0.0,(MethodInfo *)0x0);
    (__this->fields).State = 0xf;
    (__this->fields)._currentStateAnimation = a;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,a);
    (__this->fields)._stateTimeLeft = 0.0;
    if (iVar5 == 3) {
      local_28[0].y = fVar3;
      local_28[0].x = fVar1;
      local_28[0].z = fVar11;
      fVar1 = (*(__this->klass->vtable)._127_get_LaunchTime.methodPtr)
                        (__this,(__this->klass->vtable)._127_get_LaunchTime.method);
      Characters_BaseTitan__SetLaunchVelocity
                ((Characters_BaseTitan_o *)__this,(UnityEngine_Vector3_o *)local_28,fVar1,(MethodInfo *)0x0);
    }
    else if (iVar5 == 2) {
      if (Il2CppMethodInitialized_184346e0d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        il2cpp_codegen_initialize_runtime_metadata(&"DetachHeadRPC");
        Il2CppMethodInitialized_184346e0d = '\x01';
      }
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_TitanSounds->static_fields->Decapitate,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).Cache;
      if (pUVar7 != (Utility_BaseComponentCache_o *)0x0) {
        __this_01 = (pUVar7->fields).PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        local_28[0].z = (__this->fields)._headLaunchVelocity.fields.z;
        local_28[0].x = (__this->fields)._headLaunchVelocity.fields.x;
        local_28[0].y = (__this->fields)._headLaunchVelocity.fields.y;
        pIVar9 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,local_28);
        if (parameters != (System_Object_array *)0x0) {
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((parameters->obj).klass)->_1).element_class),
             pIVar10 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = pIVar9;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar9);
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"DetachHeadRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
    return;
  }
label_18218c645:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Awake
// il2cpp: void Characters_BasicTitan__Awake (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182184690

void Characters_BasicTitan__Awake(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  Characters_BasicTitan_c *pCVar3;
  Characters_AnimationHandler_o *pCVar4;
  Characters_BasicTitanAnimations_o *pCVar5;
  Characters_TitanColliderToggler_o *value;
  UnityEngine_GameObject_o *pUVar6;
  Characters_BasicTitanSetup_o *value_00;
  CustomSkins_TitanCustomSkinLoader_o *value_01;
  System_String_o *name;
  float fVar7;
  
  if (Il2CppMethodInitialized_184346e02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanCustomSkinLoader);
    Il2CppMethodInitialized_184346e02 = '\x01';
  }
  Characters_BaseCharacter__Awake((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._176_CreateAnimations.methodPtr)
            (__this,(Characters_BaseTitanAnimations_o *)0x0,
             (__this->klass->vtable)._176_CreateAnimations.method);
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Rigidbody, pUVar2 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_freezeRotation(pUVar2,true,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).Rigidbody, pUVar2 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity(pUVar2,false,(MethodInfo *)0x0);
      value = Characters_TitanColliderToggler__Create((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
      (__this->fields).TitanColliderToggler = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).TitanColliderToggler,value);
      fVar7 = (*(__this->klass->vtable)._130_get_DefaultRunSpeed.methodPtr)
                        (__this,(__this->klass->vtable)._130_get_DefaultRunSpeed.method);
      pCVar3 = __this->klass;
      (__this->fields).RunSpeedBase = fVar7;
      fVar7 = (*(pCVar3->vtable)._131_get_DefaultWalkSpeed.methodPtr)
                        (__this,(pCVar3->vtable)._131_get_DefaultWalkSpeed.method);
      pCVar3 = __this->klass;
      (__this->fields).WalkSpeedBase = fVar7;
      fVar7 = (*(pCVar3->vtable)._132_get_DefaultJumpForce.methodPtr)
                        (__this,(pCVar3->vtable)._132_get_DefaultJumpForce.method);
      pCVar3 = __this->klass;
      (__this->fields).JumpForce = fVar7;
      fVar7 = (*(pCVar3->vtable)._133_get_DefaultRotateSpeed.methodPtr)
                        (__this,(pCVar3->vtable)._133_get_DefaultRotateSpeed.method);
      pCVar4 = (__this->fields).Animation;
      (__this->fields).RotateSpeed = fVar7;
      if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar4,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._190_ScaleSounds.methodPtr)
                  (__this,1.0,(__this->klass->vtable)._190_ScaleSounds.method);
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          value_00 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar6,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanSetup);
          (__this->fields).Setup = value_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Setup,value_00);
          pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            value_01 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar6,(MethodInfo_6F4D60 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_TitanCustomSkinLoader)
            ;
            (__this->fields)._customSkinLoader = value_01;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._customSkinLoader,value_01);
            pCVar5 = (__this->fields).BasicAnimations;
            if (pCVar5 != (Characters_BasicTitanAnimations_o *)0x0) {
              pCVar4 = (__this->fields).Animation;
              name = (*(pCVar5->klass->vtable)._8_get_Jump.methodPtr)
                               (pCVar5,(pCVar5->klass->vtable)._8_get_Jump.method);
              if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
                Characters_AnimationHandler__SetSpeed(pCVar4,name,2.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetHitRPC
// il2cpp: void Characters_BasicTitan__GetHitRPC (Characters_BasicTitan_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x182186e20

void Characters_BasicTitan__GetHitRPC
               (Characters_BasicTitan_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  bool bVar1;
  
  Characters_BasicTitan__ApplyHit(__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
  bVar1 = UnityEngine_Time__get_inFixedTimeStep((MethodInfo *)0x0);
  if (!bVar1) {
    Characters_BasicTitan__StartDeathAnimation(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.BasicTitan$$ApplyHit
// il2cpp: void Characters_BasicTitan__ApplyHit (Characters_BasicTitan_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x1821834d0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182183cb6: movaps xmm8, xmm0
// asm:   0x182183ee6: xor r12d, r12d
// asm:   0x182183ee9: mov qword ptr [rsp + 0x30], r12
// asm:   0x182183eee: mov r9d, ebp
// asm:   0x182183ef1: mov qword ptr [rsp + 0x28], rsi
// asm:   0x182183ef6: mov r8, r15
// asm:   0x182183ef9: mov edx, r13d
// asm:   0x182183efc: mov qword ptr [rsp + 0x20], rbx
// asm:   0x182183f01: mov rcx, rdi
// asm:   0x182183f04: call 0x18217d070  ; Characters_BaseTitan__GetMeleeHit()
// asm:   0x182183f09: jmp 0x182183baa

void Characters_BasicTitan__ApplyHit
               (Characters_BasicTitan_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  int iVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Characters_BaseTitanComponentCache_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_BoolSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Characters_BasicTitanComponentCache_o *pCVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  Utility_BaseComponentCache_o *pUVar11;
  UnityEngine_Transform_o *__this_01;
  bool bVar12;
  bool bVar13;
  System_String_o *pSVar14;
  System_Object_array *parameters;
  Characters_BasicTitan_c *pCVar15;
  Characters_BaseCharacter_o *x;
  UnityEngine_Vector3_o *pUVar16;
  UnityEngine_Object_o *pUVar17;
  MethodInfo *pMVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Vector3_o local_78 [6];
  
  if (Il2CppMethodInitialized_184346e03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"DisableWardedEffectsRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    Il2CppMethodInitialized_184346e03 = '\x01';
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar2 == (Settings_InGameSet_o *)0x0) goto label_182183f0e;
  pSVar3 = (pSVar2->fields).Titan;
  if ((__this->fields).isWarded != false) {
    if ((__this->fields).CurrentWardedWeakSpot != 0) {
      pCVar4 = (__this->fields).BaseTitanCache;
      if ((pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) ||
         (pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).NapeHurtbox,
         pUVar17 == (UnityEngine_Object_o *)0x0)) goto label_182183f0e;
      pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
      bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
      if (bVar12) {
        damage = 0;
      }
    }
    if (((__this->fields).isWarded != false) && ((__this->fields).CurrentWardedWeakSpot != 0)) {
      iVar1 = (__this->fields).CurrentWardedWeakSpot;
      if (iVar1 == 1) {
        pCVar8 = (__this->fields).BasicCache;
        if (pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182183f0e;
        pUVar17 = (UnityEngine_Object_o *)(pCVar8->fields).ForearmLHurtbox;
      }
      else if (iVar1 == 2) {
        pCVar8 = (__this->fields).BasicCache;
        if (pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182183f0e;
        pUVar17 = (UnityEngine_Object_o *)(pCVar8->fields).ForearmRHurtbox;
      }
      else if (iVar1 == 3) {
        pCVar4 = (__this->fields).BaseTitanCache;
        if (pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_182183f0e;
        pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).LegLHurtbox;
      }
      else {
        if (iVar1 != 4) goto label_18218372e;
        pCVar4 = (__this->fields).BaseTitanCache;
        if (pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_182183f0e;
        pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).LegRHurtbox;
      }
      if (pUVar17 == (UnityEngine_Object_o *)0x0) goto label_182183f0e;
      pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
      bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
      if (bVar12) {
        pUVar5 = (__this->fields).Cache;
        if ((pUVar5 == (Utility_BaseComponentCache_o *)0x0) ||
           (__this_00 = (pUVar5->fields).PhotonView, __this_00 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_182183f0e;
        if ((__this_00->fields)._IsMine_k__BackingField != false) {
          parameters = (System_Object_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_object);
          Photon_Pun_PhotonView__RPC(__this_00,"DisableWardedEffectsRPC",0,parameters,(MethodInfo *)0x0);
        }
      }
    }
  }
label_18218372e:
  bVar12 = System_String__op_Equality(type,"CannonBall",(MethodInfo *)0x0);
  if ((bVar12) || (bVar12 = System_String__op_Equality(type,"Rock",(MethodInfo *)0x0), bVar12))
  goto label_182183b1d;
  if ((pSVar3 == (Settings_InGameTitanSettings_o *)0x0) ||
     (pSVar6 = (pSVar3->fields).TitanArmorEnabled, pSVar6 == (Settings_BoolSetting_o *)0x0))
  goto label_182183f0e;
  if ((pSVar6->fields)._value != false) {
    if ((__this->fields).IsCrawler != false) {
      pSVar6 = (pSVar3->fields).TitanArmorCrawlerEnabled;
      if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_182183f0e;
      if ((pSVar6->fields)._value == false) goto label_1821837bf;
    }
    pSVar7 = (pSVar3->fields).TitanArmor;
    if (pSVar7 == (Settings_IntSetting_o *)0x0) goto label_182183f0e;
    if (damage < (pSVar7->fields)._value) {
      damage = 0;
    }
  }
label_1821837bf:
  if (Il2CppMethodInitialized_184346da4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    Il2CppMethodInitialized_184346da4 = '\x01';
  }
  bVar12 = Characters_BaseTitan__HasMeleeReaction(type,"Stun",(MethodInfo *)0x0);
  if (!bVar12) {
    if (Il2CppMethodInitialized_184346da1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ComboStun");
      Il2CppMethodInitialized_184346da1 = '\x01';
    }
    bVar12 = Characters_BaseTitan__HasMeleeReaction(type,"ComboStun",(MethodInfo *)0x0);
    if (!bVar12) {
      if (Il2CppMethodInitialized_184346da2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
        Il2CppMethodInitialized_184346da2 = '\x01';
      }
      bVar12 = Characters_BaseTitan__HasMeleeReaction(type,"Finisher",(MethodInfo *)0x0);
      if (!bVar12) {
        if (Il2CppMethodInitialized_184346da3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
          Il2CppMethodInitialized_184346da3 = '\x01';
        }
        bVar12 = Characters_BaseTitan__HasMeleeReaction(type,"Knockback",(MethodInfo *)0x0);
        if (!bVar12) {
          pCVar4 = (__this->fields).BaseTitanCache;
          if (pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) {
            pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).EyesHurtbox;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar12 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar12) {
              pCVar4 = (__this->fields).BaseTitanCache;
              if ((pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) ||
                 (pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).EyesHurtbox,
                 pUVar17 == (UnityEngine_Object_o *)0x0)) goto label_182183f0e;
              pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
              bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
              if (bVar12) {
                (*(__this->klass->vtable)._168_Blind.methodPtr)
                          (__this,(__this->klass->vtable)._168_Blind.method);
                return;
              }
            }
            pCVar4 = (__this->fields).BaseTitanCache;
            if (pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) {
              pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).LegLHurtbox;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar12 = UnityEngine_Object__op_Inequality
                                 (pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar12) {
                pCVar4 = (__this->fields).BaseTitanCache;
                if ((pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) ||
                   (pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).LegLHurtbox,
                   pUVar17 == (UnityEngine_Object_o *)0x0)) goto label_182183f0e;
                pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
                bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
                if (bVar12) {
label_1821839d8:
                  (*(__this->klass->vtable)._169_Cripple.methodPtr)
                            (__this,0.0,(__this->klass->vtable)._169_Cripple.method);
                  return;
                }
                pCVar4 = (__this->fields).BaseTitanCache;
                if ((pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) ||
                   (pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).LegRHurtbox,
                   pUVar17 == (UnityEngine_Object_o *)0x0)) goto label_182183f0e;
                pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
                bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
                if (bVar12) goto label_1821839d8;
              }
              pCVar8 = (__this->fields).BasicCache;
              if ((pCVar8 != (Characters_BasicTitanComponentCache_o *)0x0) &&
                 (pUVar17 = (UnityEngine_Object_o *)(pCVar8->fields).ForearmLHurtbox,
                 pUVar17 != (UnityEngine_Object_o *)0x0)) {
                pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
                bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
                if (bVar12) {
                  pCVar15 = __this->klass;
                  if ((__this->fields).IsCrawler == false) {
                    pMVar18 = (pCVar15->vtable)._178_DisableArm.method;
                    bVar12 = true;
label_182183ba4:
                    (*(pCVar15->vtable)._178_DisableArm.methodPtr)(__this,bVar12,pMVar18);
                    return;
                  }
                }
                else {
                  pCVar8 = (__this->fields).BasicCache;
                  if ((pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) ||
                     (pUVar17 = (UnityEngine_Object_o *)(pCVar8->fields).ForearmRHurtbox,
                     pUVar17 == (UnityEngine_Object_o *)0x0)) goto label_182183f0e;
                  pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
                  bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
                  if (bVar12) {
                    pCVar15 = __this->klass;
                    if ((__this->fields).IsCrawler == false) {
                      pMVar18 = (pCVar15->vtable)._178_DisableArm.method;
                      bVar12 = false;
                      goto label_182183ba4;
                    }
                    goto label_182183b7a;
                  }
                  pCVar8 = (__this->fields).BasicCache;
                  if ((pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) ||
                     (pUVar17 = (UnityEngine_Object_o *)(pCVar8->fields).HandLHurtbox,
                     pUVar17 == (UnityEngine_Object_o *)0x0)) goto label_182183f0e;
                  pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
                  bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
                  if (bVar12) {
                    if ((__this->fields).IsCrawler == false) {
                      Characters_BasicTitan__DisableLimb(__this,true,true,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  else {
                    pCVar8 = (__this->fields).BasicCache;
                    if ((pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) ||
                       (pUVar17 = (UnityEngine_Object_o *)(pCVar8->fields).HandRHurtbox,
                       pUVar17 == (UnityEngine_Object_o *)0x0)) goto label_182183f0e;
                    pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
                    bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
                    if (!bVar12) {
                      pCVar4 = (__this->fields).BaseTitanCache;
                      if ((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
                         (pUVar17 = (UnityEngine_Object_o *)(pCVar4->fields).NapeHurtbox,
                         pUVar17 != (UnityEngine_Object_o *)0x0)) {
                        pSVar14 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
                        bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
                        if (!bVar12) {
                          return;
                        }
label_182183b1d:
                        Characters_BaseCharacter__GetHitRPC
                                  ((Characters_BaseCharacter_o *)__this,viewId,name,damage,type,collider,
                                   (MethodInfo *)0x0);
                        return;
                      }
                      goto label_182183f0e;
                    }
                    if ((__this->fields).IsCrawler == false) {
                      Characters_BasicTitan__DisableLimb(__this,false,true,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  pCVar15 = __this->klass;
                }
label_182183b7a:
                (*(pCVar15->vtable)._169_Cripple.methodPtr)(__this,0.0,(pCVar15->vtable)._169_Cripple.method);
                return;
              }
            }
          }
          goto label_182183f0e;
        }
      }
    }
  }
  if ((__this->fields).IsCrawler == false) {
    if (Il2CppMethodInitialized_184346da1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ComboStun");
      Il2CppMethodInitialized_184346da1 = '\x01';
    }
    bVar12 = Characters_BaseTitan__HasMeleeReaction(type,"ComboStun",(MethodInfo *)0x0);
    if (bVar12) {
      fVar19 = (*(__this->klass->vtable)._124_get_ComboStunTime.methodPtr)
                         (__this,(__this->klass->vtable)._124_get_ComboStunTime.method);
    }
    else {
      if (Il2CppMethodInitialized_184346da3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
        Il2CppMethodInitialized_184346da3 = '\x01';
      }
      bVar12 = Characters_BaseTitan__HasMeleeReaction(type,"Knockback",(MethodInfo *)0x0);
      if (bVar12) {
        fVar19 = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)
                           (__this,(__this->klass->vtable)._129_get_PushTime.method);
      }
      else {
        fVar19 = (__this->fields).StunTime;
      }
    }
    bVar12 = Characters_BaseTitan__IsComboStunType(type,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar13) {
      if (((x != (Characters_BaseCharacter_o *)0x0) &&
          (pUVar5 = (x->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar9 = (pUVar5->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
        pUVar16 = UnityEngine_Transform__get_position(&local_88,pUVar9,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).Cache;
        if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar9 = (pUVar5->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
          fVar22 = (pUVar16->fields).x;
          fVar23 = (pUVar16->fields).z;
          pUVar16 = UnityEngine_Transform__get_position(&local_88,pUVar9,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).Cache;
          fVar22 = fVar22 - (pUVar16->fields).x;
          fVar23 = fVar23 - (pUVar16->fields).z;
          local_88.fields.y = 0.0;
          local_88.fields.x = fVar22;
          local_88.fields.z = fVar23;
          if (pUVar5 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar9 = (pUVar5->fields).Transform;
            if (Il2CppMethodInitialized_18433de5f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5f = '\x01';
            }
            fVar20 = (float)il2cpp_runtime_helper_180546a40(&local_88,0);
            if (fVar20 <= 1e-05) {
              pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar22 = (pUVar10->zeroVector).fields.x;
              fVar21 = (pUVar10->zeroVector).fields.y;
              fVar23 = (pUVar10->zeroVector).fields.z;
            }
            else {
              fVar21 = 0.0 / fVar20;
              fVar22 = fVar22 / fVar20;
              fVar23 = fVar23 / fVar20;
            }
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              local_88.fields.y = fVar21;
              local_88.fields.x = fVar22;
              local_88.fields.z = fVar23;
              UnityEngine_Transform__set_forward(pUVar9,&local_88,(MethodInfo *)0x0);
              pUVar5 = (__this->fields).Cache;
              if (((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
                  (pUVar11 = (x->fields).Cache, pUVar11 != (Utility_BaseComponentCache_o *)0x0)) &&
                 (pUVar9 = (pUVar11->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                __this_01 = (pUVar5->fields).Transform;
                pUVar16 = UnityEngine_Transform__get_position(local_78,pUVar9,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  local_88.fields.x = (pUVar16->fields).x;
                  local_88.fields.y = (pUVar16->fields).y;
                  local_88.fields.z = (pUVar16->fields).z;
                  pUVar16 = UnityEngine_Transform__InverseTransformPoint
                                      (local_78,__this_01,&local_88,(MethodInfo *)0x0);
                  (*(__this->klass->vtable)._206_StunDirectional.methodPtr)
                            (__this,(pUVar16->fields).x <= 0.0 && (pUVar16->fields).x != 0.0,fVar19,bVar12,
                             (__this->klass->vtable)._206_StunDirectional.method);
                  goto label_182183ee9;
                }
              }
            }
          }
        }
      }
label_182183f0e:
      ThrowNullReferenceException();
    }
    (*(__this->klass->vtable)._206_StunDirectional.methodPtr)
              (__this,true,fVar19,bVar12,(__this->klass->vtable)._206_StunDirectional.method);
  }
label_182183ee9:
  Characters_BaseTitan__GetMeleeHit
            ((Characters_BaseTitan_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$Kick
// il2cpp: void Characters_BasicTitan__Kick (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182188280

void Characters_BasicTitan__Kick(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346e04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_184346e04 = '\x01';
  }
  (*(__this->klass->vtable)._150_Attack.methodPtr)
            (__this,"AttackKick",(__this->klass->vtable)._150_Attack.method);
  return;
}


// Characters.BasicTitan$$Attack
// il2cpp: void Characters_BasicTitan__Attack (Characters_BasicTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x182183f20
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182184533: mov r9, qword ptr [rdi]
// asm:   0x182184536: lea rdx, [rbp - 0x39]
// asm:   0x18218453a: mov rcx, rdi
// asm:   0x18218453d: mov r8, qword ptr [r9 + 0xa80]
// asm:   0x182184544: call qword ptr [r9 + 0xa78]  ; vtable slot 148
// asm:   0x18218454b: jmp 0x182184412
// asm:   0x18218461a: movss xmm2, dword ptr [rip + 0x11d500e]
// asm:   0x182184622: mov r9b, 1
// asm:   0x182184625: mov rdx, qword ptr [rdi + 0x218]
// asm:   0x18218462c: mov rcx, rdi
// asm:   0x18218462f: mov qword ptr [rsp + 0x20], rsi
// asm:   0x182184634: call 0x182181080  ; Characters_BaseTitan__StateAttack()
// asm:   0x182184639: jmp 0x182184412
// asm:   0x18218463e: movss xmm1, dword ptr [rip + 0x11d4fea]
// asm:   0x182184646: xorps xmm0, xmm0
// asm:   0x182184649: movss xmm3, dword ptr [rdi + 0x318]
// asm:   0x182184651: mov r8, rcx
// asm:   0x182184654: mov qword ptr [rsp + 0x38], rsi
// asm:   0x182184659: mov edx, 0xa
// asm:   0x18218465e: movss dword ptr [rsp + 0x30], xmm0
// asm:   0x182184664: mov rcx, rdi
// asm:   0x182184667: mov byte ptr [rsp + 0x28], 1
// asm:   0x18218466c: movss dword ptr [rsp + 0x20], xmm1
// asm:   0x182184672: call 0x182180ea0  ; Characters_BaseTitan__StateActionWithTime()
// asm:   0x182184677: jmp 0x182184412

void Characters_BasicTitan__Attack(Characters_BasicTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Rigidbody_o *pUVar10;
  Characters_BasicTitanAnimations_o *pCVar11;
  System_String_o *pSVar12;
  Characters_BasicTitanComponentCache_o *pCVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  bool bVar15;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  UnityEngine_Vector3_o *pUVar17;
  System_String_o *b;
  void *pvVar18;
  UnityEngine_Vector3_Fields *__return_storage_ptr__;
  UnityEngine_Transform_o *pUVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  Il2CppObject *local_res8 [4];
  undefined8 local_a8;
  float local_a0;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88 [8];
  
  if (Il2CppMethodInitialized_184346e05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_184346e05 = '\x01';
  }
  local_res8[0] = (Il2CppObject *)0x0;
  if (((((__this->fields).LeftArmDisabled != false) || ((__this->fields).RightArmDisabled != false)) ||
      ((__this->fields).LeftHandDisabled != false)) || ((__this->fields).RightHandDisabled != false)) {
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Characters_CharacterData->static_fields->TitanAttackInfos;
    if ((pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar16,(Il2CppObject *)"Titan",
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_get_Item
                            ), pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
    goto label_18218467c;
    bVar15 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       (pSVar16,(Il2CppObject *)attack,local_res8,
                        (MethodInfo_14769C0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_TryGetValue);
    if (bVar15) {
      if (local_res8[0] == (Il2CppObject *)0x0) goto label_18218467c;
      if (*(char *)((longlong)&local_res8[0][1].klass + 3) != '\0') {
        if ((__this->fields).LeftArmDisabled != false) {
          return;
        }
        if ((__this->fields).LeftHandDisabled != false) {
          return;
        }
      }
      if (*(char *)((longlong)&local_res8[0][1].klass + 4) != '\0') {
        if ((__this->fields).RightArmDisabled != false) {
          return;
        }
        if ((__this->fields).RightHandDisabled != false) {
          return;
        }
      }
    }
  }
  if ((__this->fields).Grounded == false) {
    bVar15 = System_String__op_Equality(attack,"AttackBellyFlop",(MethodInfo *)0x0);
    if (bVar15) {
      return;
    }
    bVar15 = System_String__op_Equality(attack,"AttackRockThrow",(MethodInfo *)0x0);
    if (bVar15) {
      return;
    }
  }
  if ((__this->fields).AI == false) {
    pUVar9 = (__this->fields).Cache;
    if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar10 = (pUVar9->fields).Rigidbody, pUVar10 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18218467c;
    pUVar17 = UnityEngine_Rigidbody__get_linearVelocity
                        ((UnityEngine_Vector3_o *)&local_98,pUVar10,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).Cache;
    if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar10 = (pUVar9->fields).Rigidbody, pUVar10 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18218467c;
    fVar22 = (pUVar17->fields).x;
    pUVar17 = UnityEngine_Rigidbody__get_linearVelocity
                        ((UnityEngine_Vector3_o *)&local_98,pUVar10,(MethodInfo *)0x0);
    (__this->fields)._attackVelocity.fields.z = (pUVar17->fields).z;
    (__this->fields)._attackVelocity.fields.x = fVar22;
    (__this->fields)._attackVelocity.fields.y = 0.0;
  }
  (*(__this->klass->vtable)._152_ResetAttackState.methodPtr)
            (__this,attack,(__this->klass->vtable)._152_ResetAttackState.method);
  pCVar11 = (__this->fields).BasicAnimations;
  if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) {
label_18218467c:
    ThrowNullReferenceException();
  }
  bVar15 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar11->fields).AttackBellyFlop,
                      (MethodInfo *)0x0);
  pSVar12 = (__this->fields)._currentAttackAnimation;
  if (bVar15) {
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this,10,pSVar12,(__this->fields).BellyFlopTime,0.1,true,0.0,
               (MethodInfo *)0x0);
    return;
  }
  pCVar11 = (__this->fields).BasicAnimations;
  if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_18218467c;
  bVar15 = System_String__op_Equality(pSVar12,(pCVar11->fields).AttackRockThrow,(MethodInfo *)0x0);
  if (bVar15) {
    if ((__this->fields).AI == false) {
      pUVar17 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                          ((UnityEngine_Vector3_o *)local_88,__this,
                           (__this->klass->vtable)._76_GetAimPoint.method);
      fVar20 = (pUVar17->fields).y;
      fVar22 = (pUVar17->fields).z;
      (__this->fields)._rockThrowTarget.fields.x = (pUVar17->fields).x;
      (__this->fields)._rockThrowTarget.fields.y = fVar20;
      (__this->fields)._rockThrowTarget.fields.z = fVar22;
    }
    else {
      (__this->fields)._rockThrowTargetCharacter = (Characters_BaseCharacter_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rockThrowTargetCharacter,(void *)0x0);
      pUVar9 = (__this->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar19 = (pUVar9->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
      goto label_18218467c;
      pUVar17 = UnityEngine_Transform__get_forward
                          ((UnityEngine_Vector3_o *)local_88,pUVar19,(MethodInfo *)0x0);
      fVar20 = (pUVar17->fields).y;
      fVar22 = (pUVar17->fields).z;
      (__this->fields)._rockThrowForward.fields.x = (pUVar17->fields).x;
      (__this->fields)._rockThrowForward.fields.y = fVar20;
      (__this->fields)._rockThrowForward.fields.z = fVar22;
      (__this->fields)._rockThrowWillHitSelf = false;
    }
label_18218461a:
    Characters_BaseTitan__StateAttack
              ((Characters_BaseTitan_o *)__this,(__this->fields)._currentAttackAnimation,0.1,true,
               (MethodInfo *)0x0);
    return;
  }
  pCVar11 = (__this->fields).BasicAnimations;
  if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_18218467c;
  pSVar12 = (__this->fields)._currentAttackAnimation;
  b = (*(pCVar11->klass->vtable)._8_get_Jump.methodPtr)(pCVar11,(pCVar11->klass->vtable)._8_get_Jump.method);
  bVar15 = System_String__op_Equality(pSVar12,b,(MethodInfo *)0x0);
  if (bVar15) {
    if ((__this->fields).AI == false) {
      pUVar17 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                          ((UnityEngine_Vector3_o *)local_88,__this,
                           (__this->klass->vtable)._76_GetAimPoint.method);
      pCVar13 = (__this->fields).BasicCache;
      if ((pCVar13 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar19 = (pCVar13->fields).Head, pUVar19 == (UnityEngine_Transform_o *)0x0)) goto label_18218467c;
      __return_storage_ptr__ = local_88;
    }
    else {
      if (((__this->fields).TargetEnemy == (Characters_ITargetable_o *)0x0) ||
         (pvVar18 = InterfaceInvoker0_Invoke
                              (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                               (Il2CppObject *)(__this->fields).TargetEnemy), (char)pvVar18 == '\0')) {
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_98.x = (pUVar14->upVector).fields.x;
        local_98.y = (pUVar14->upVector).fields.y;
        local_98.z = (pUVar14->upVector).fields.z;
        goto label_182184533;
      }
      if ((__this->fields).TargetEnemy == (Characters_ITargetable_o *)0x0) goto label_18218467c;
      pUVar17 = (UnityEngine_Vector3_o *)il2cpp_runtime_helper_180027220(local_88,1);
      pCVar13 = (__this->fields).BasicCache;
      if ((pCVar13 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar19 = (pCVar13->fields).Head, pUVar19 == (UnityEngine_Transform_o *)0x0)) goto label_18218467c;
      __return_storage_ptr__ = local_88;
    }
  }
  else {
    pCVar11 = (__this->fields).BasicAnimations;
    if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_18218467c;
    bVar15 = System_String__op_Equality
                       ((__this->fields)._currentAttackAnimation,(pCVar11->fields).JumpCrawler,
                        (MethodInfo *)0x0);
    if (!bVar15) goto label_18218461a;
    if (((__this->fields).TargetEnemy == (Characters_ITargetable_o *)0x0) ||
       (pvVar18 = InterfaceInvoker0_Invoke
                            (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                             (Il2CppObject *)(__this->fields).TargetEnemy), (char)pvVar18 == '\0')) {
      pUVar9 = (__this->fields).Cache;
      if ((pUVar9 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar19 = (pUVar9->fields).Transform, pUVar19 != (UnityEngine_Transform_o *)0x0)) {
        pUVar17 = UnityEngine_Transform__get_forward
                            ((UnityEngine_Vector3_o *)local_88,pUVar19,(MethodInfo *)0x0);
        uVar3 = (pUVar17->fields).x;
        uVar7 = (pUVar17->fields).y;
        local_98.z = (pUVar17->fields).z;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar4 = (pUVar14->upVector).fields.x;
        uVar8 = (pUVar14->upVector).fields.y;
        local_98.z = local_98.z + (pUVar14->upVector).fields.z;
        local_98.x = (float)uVar4 + (float)uVar3;
        local_98.y = (float)uVar8 + (float)uVar7;
        (*(__this->klass->vtable)._148_Jump.methodPtr)
                  (__this,(UnityEngine_Vector3_o *)&local_98,(__this->klass->vtable)._148_Jump.method);
        return;
      }
      goto label_18218467c;
    }
    if ((__this->fields).TargetEnemy == (Characters_ITargetable_o *)0x0) goto label_18218467c;
    pUVar17 = (UnityEngine_Vector3_o *)il2cpp_runtime_helper_180027220(&local_98,1);
    pCVar13 = (__this->fields).BasicCache;
    if ((pCVar13 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar19 = (pCVar13->fields).Head, pUVar19 == (UnityEngine_Transform_o *)0x0)) goto label_18218467c;
    __return_storage_ptr__ = &local_98;
  }
  uVar1 = (pUVar17->fields).x;
  uVar5 = (pUVar17->fields).y;
  fVar22 = (pUVar17->fields).z;
  pUVar17 = UnityEngine_Transform__get_position
                      ((UnityEngine_Vector3_o *)__return_storage_ptr__,pUVar19,(MethodInfo *)0x0);
  uVar2 = (pUVar17->fields).x;
  uVar6 = (pUVar17->fields).y;
  fVar22 = fVar22 - (pUVar17->fields).z;
  local_98.y = (float)uVar5 - (float)uVar6;
  local_98.x = (float)uVar1 - (float)uVar2;
  local_98.z = fVar22;
  fVar20 = (float)il2cpp_runtime_helper_180546a40(&local_98,0);
  fVar20 = fVar20 / (__this->fields).JumpForce;
  pUVar17 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                      ((UnityEngine_Vector3_o *)local_88,__this,(__this->klass->vtable)._58_get_Gravity.method
                      );
  local_a8._0_4_ = (pUVar17->fields).x;
  local_a8._4_4_ = (pUVar17->fields).y;
  local_a0 = (pUVar17->fields).z;
  fVar21 = (float)il2cpp_runtime_helper_180546a40(&local_a8,0);
  fVar20 = fVar21 * 0.5 * fVar20 * fVar20 + ((float)uVar5 - (float)uVar6);
  local_98.y = fVar20;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  local_98.z = (float)il2cpp_runtime_helper_180546a40(&local_98,0);
  if (local_98.z <= 1e-05) {
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar21 = (pUVar14->zeroVector).fields.x;
    fVar20 = (pUVar14->zeroVector).fields.y;
    local_98.z = (pUVar14->zeroVector).fields.z;
  }
  else {
    fVar21 = ((float)uVar1 - (float)uVar2) / local_98.z;
    fVar20 = fVar20 / local_98.z;
    local_98.z = fVar22 / local_98.z;
  }
  local_98.y = fVar20;
  local_98.x = fVar21;
label_182184533:
  (*(__this->klass->vtable)._148_Jump.methodPtr)
            (__this,(UnityEngine_Vector3_o *)&local_98,(__this->klass->vtable)._148_Jump.method);
  return;
}


// Characters.BasicTitan$$UpdateAttack
// il2cpp: void Characters_BasicTitan__UpdateAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218d120
// asm: 158 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18218d79c: mov rbx, r14
// asm:   0x18218d79f: jmp 0x18218d7dd
// asm:   0x18218dd71: movss dword ptr [rbp + 0xc8], xmm7
// asm:   0x18218dd79: movaps xmm0, xmm10
// asm:   0x18218dd7d: movaps xmm1, xmm7
// asm:   0x18218e194: movss xmm15, dword ptr [rip + 0x11caba7]
// asm:   0x18218ea6a: movaps xmm1, xmm6
// asm:   0x18218ea6d: xor r9d, r9d
// asm:   0x18218ea70: movaps xmm2, xmm0
// asm:   0x18218ea73: mov rcx, rbx
// asm:   0x18218ea76: call 0x182111190  ; Characters_BaseHitbox__Activate()
// asm:   0x18218ea7b: jmp 0x18218e5e4
// asm:   0x18218eb16: jmp 0x18218ea6a
// asm:   0x18218f0b3: xor ecx, ecx
// asm:   0x18218f0b5: call 0x1821cd7e0  ; Characters_TitanSounds__GetRandomBite()
// asm:   0x18218f0ba: mov rdx, rax
// asm:   0x18218f0bd: xor r8d, r8d
// asm:   0x18218f0c0: mov rcx, rsi
// asm:   0x18218f0c3: call 0x18210e430  ; Characters_BaseCharacter__PlaySound()
// asm:   0x18218f0c8: mov dword ptr [rsi + 0x234], 2
// asm:   0x18218f0d2: jmp 0x18218e5e4
// asm:   0x18218f1b1: movaps xmm1, xmm7
// asm:   0x18218f1b4: jmp 0x182190012
// asm:   0x18218f2c2: xor r14d, r14d
// asm:   0x18218f2c5: movss dword ptr [rsp + 0x54], xmm6
// asm:   0x18218f2cb: mov qword ptr [rsp + 0x30], r14
// asm:   0x18218f2d0: lea r8, [rbp - 0x80]
// asm:   0x18218f2d4: mov qword ptr [rsp + 0x28], r14
// asm:   0x18218f2d9: lea rdx, [rsp + 0x50]
// asm:   0x18218f2de: movaps xmm3, xmm7
// asm:   0x18218f2e1: mov byte ptr [rsp + 0x20], 1
// asm:   0x18218f2e6: mov rcx, r15
// asm:   0x18218f2e9: movdqa xmmword ptr [rbp - 0x80], xmm10
// asm:   0x18218f2ef: mov dword ptr [rsp + 0x50], ebx
// asm:   0x18218f2f3: mov dword ptr [rsp + 0x58], edi
// asm:   0x18218f2f7: call 0x181e658a0  ; Effects_EffectSpawner__Spawn()
// asm:   0x18218f2fc: mov rax, qword ptr [rsi]
// asm:   0x18218f2ff: lea rdx, [rsp + 0x50]
// asm:   0x18218f304: mov rcx, rsi
// asm:   0x18218f307: movss dword ptr [rsp + 0x54], xmm6
// asm:   0x18218f30d: mov dword ptr [rsp + 0x50], ebx
// asm:   0x18218f311: mov dword ptr [rsp + 0x58], edi
// asm:   0x18218f315: mov r8, qword ptr [rax + 0xdc0]
// asm:   0x18218f31c: call qword ptr [rax + 0xdb8]  ; vtable slot 200
// asm:   0x18218f322: mov dword ptr [rsi + 0x234], 2
// asm:   0x18218f32c: jmp 0x18218e5e4
// asm:   0x18218f455: movdqa xmmword ptr [rbp - 0x80], xmm10
// asm:   0x18218f45b: movaps xmm3, xmm7
// asm:   0x18218f45e: jmp 0x18218f5a8
// asm:   0x18218f59f: movdqa xmmword ptr [rbp - 0x80], xmm7
// asm:   0x18218f5a4: movaps xmm3, xmm8
// asm:   0x18218f5a8: xor r14d, r14d
// asm:   0x18218f5ab: movss dword ptr [rsp + 0x54], xmm6
// asm:   0x18218f5b1: mov qword ptr [rsp + 0x30], r14
// asm:   0x18218f5b6: lea r8, [rbp - 0x80]
// asm:   0x18218f5ba: mov qword ptr [rsp + 0x28], r14
// asm:   0x18218f5bf: lea rdx, [rsp + 0x50]
// asm:   0x18218f5c4: mov rcx, r15
// asm:   0x18218f5c7: mov byte ptr [rsp + 0x20], 1
// asm:   0x18218f5cc: mov dword ptr [rsp + 0x58], edi
// asm:   0x18218f5d0: mov dword ptr [rsp + 0x50], ebx
// asm:   0x18218f5d4: call 0x181e658a0  ; Effects_EffectSpawner__Spawn()
// asm:   0x18218f5d9: mov rax, qword ptr [rsi]
// asm:   0x18218f5dc: lea rdx, [rsp + 0x50]
// asm:   0x18218f5e1: mov rcx, rsi
// asm:   0x18218f5e4: movss dword ptr [rsp + 0x54], xmm6
// asm:   0x18218f5ea: mov dword ptr [rsp + 0x50], ebx
// asm:   0x18218f5ee: mov dword ptr [rsp + 0x58], edi
// asm:   0x18218f5f2: mov r8, qword ptr [rax + 0xdc0]
// asm:   0x18218f5f9: call qword ptr [rax + 0xdb8]  ; vtable slot 200
// asm:   0x18218f5ff: jmp 0x18218e5e4
// asm:   0x18218f8b3: xorps xmm1, xmm1
// asm:   0x18218f8b6: xor r9d, r9d
// asm:   0x18218f8b9: movaps xmm2, xmm0
// asm:   0x18218f8bc: mov rcx, rbx
// asm:   0x18218f8bf: call 0x182111190  ; Characters_BaseHitbox__Activate()
// asm:   0x18218f8c4: jmp 0x18218e5e4
// asm:   0x18218fa6d: xor r14d, r14d
// asm:   0x18218fa70: movsd qword ptr [rsp + 0x60], xmm6
// asm:   0x18218fa76: mov qword ptr [rsp + 0x30], r14
// asm:   0x18218fa7b: lea r8, [rbp - 0x80]
// asm:   0x18218fa7f: mov qword ptr [rsp + 0x28], r14
// asm:   0x18218fa84: lea rdx, [rsp + 0x60]
// asm:   0x18218fa89: mov rcx, rbx
// asm:   0x18218fa8c: mov byte ptr [rsp + 0x20], 1
// asm:   0x18218fa91: call 0x181e658a0  ; Effects_EffectSpawner__Spawn()
// asm:   0x18218fa96: jmp 0x18218e5e4
// asm:   0x18218fad7: movss xmm2, dword ptr [rip + 0x11c9b51]
// asm:   0x18218fadf: xor r14d, r14d
// asm:   0x18218fae2: mov rdx, qword ptr [rdx + 0xa0]
// asm:   0x18218fae9: xorps xmm3, xmm3
// asm:   0x18218faec: mov rcx, rsi
// asm:   0x18218faef: mov qword ptr [rsp + 0x20], r14
// asm:   0x18218faf4: call 0x182109a80  ; Characters_BaseCharacter__CrossFade()
// asm:   0x18218faf9: jmp 0x18218e5e4
// asm:   0x18218fcf8: xor r14d, r14d
// asm:   0x18218fcfb: movss dword ptr [rsp + 0x68], xmm9
// asm:   0x18218fd02: mov qword ptr [rsp + 0x30], r14
// asm:   0x18218fd07: lea r8, [rbp - 0x80]
// asm:   0x18218fd0b: mov qword ptr [rsp + 0x28], r14
// asm:   0x18218fd10: lea rdx, [rsp + 0x60]
// asm:   0x18218fd15: movaps xmm3, xmm7
// asm:   0x18218fd18: mov byte ptr [rsp + 0x20], 1
// asm:   0x18218fd1d: mov rcx, rbx
// asm:   0x18218fd20: movdqa xmmword ptr [rbp - 0x80], xmm10
// asm:   0x18218fd26: movsd qword ptr [rsp + 0x60], xmm6
// asm:   0x18218fd2c: call 0x181e658a0  ; Effects_EffectSpawner__Spawn()
// asm:   0x18218fd31: mov rax, qword ptr [rsi]
// asm:   0x18218fd34: lea rdx, [rsp + 0x60]
// asm:   0x18218fd39: xorps xmm0, xmm0
// asm:   0x18218fd3c: movss dword ptr [rsp + 0x68], xmm9
// asm:   0x18218fd43: movsd xmm0, xmm8
// asm:   0x18218fd48: mov rcx, rsi
// asm:   0x18218fd4b: movsd qword ptr [rsp + 0x60], xmm0
// asm:   0x18218fd51: mov r8, qword ptr [rax + 0xdc0]
// asm:   0x18218fd58: call qword ptr [rax + 0xdb8]  ; vtable slot 200
// asm:   0x18218fd5e: mov dword ptr [rsi + 0x234], 2
// asm:   0x18218fd68: jmp 0x18218e5e4
// asm:   0x18219000f: movaps xmm1, xmm6
// asm:   0x182190012: xor r9d, r9d
// asm:   0x182190015: movaps xmm2, xmm0
// asm:   0x182190018: mov rcx, rbx
// asm:   0x18219001b: call 0x182111190  ; Characters_BaseHitbox__Activate()
// asm:   0x182190020: mov dword ptr [rsi + 0x234], 1
// asm:   0x18219002a: jmp 0x18218e5e4
// asm:   0x1821900d8: movaps xmm1, xmm6
// asm:   0x1821900e9: mov dword ptr [rsi + 0x234], 2
// asm:   0x1821900f3: jmp 0x18218e5e4
// asm:   0x1821901ff: xor r9d, r9d
// asm:   0x182190202: movaps xmm2, xmm0
// asm:   0x182190205: movaps xmm1, xmm7
// asm:   0x182190208: mov rcx, rbx
// asm:   0x18219020b: call 0x182111190  ; Characters_BaseHitbox__Activate()
// asm:   0x182190210: mov dword ptr [rsi + 0x234], 3
// asm:   0x18219021a: jmp 0x18218e5e4
// asm:   0x182190322: xor r14d, r14d
// asm:   0x182190325: movss dword ptr [rsp + 0x68], xmm9
// asm:   0x18219032c: mov qword ptr [rsp + 0x30], r14
// asm:   0x182190331: lea r8, [rbp - 0x80]
// asm:   0x182190335: mov qword ptr [rsp + 0x28], r14
// asm:   0x18219033a: lea rdx, [rsp + 0x60]
// asm:   0x18219033f: movaps xmm3, xmm7
// asm:   0x182190342: mov byte ptr [rsp + 0x20], 1
// asm:   0x182190347: mov rcx, rbx
// asm:   0x18219034a: movdqa xmmword ptr [rbp - 0x80], xmm10
// asm:   0x182190350: movsd qword ptr [rsp + 0x60], xmm6
// asm:   0x182190356: call 0x181e658a0  ; Effects_EffectSpawner__Spawn()
// asm:   0x18219035b: mov rax, qword ptr [rsi]
// asm:   0x18219035e: lea rdx, [rsp + 0x60]
// asm:   0x182190363: xorps xmm0, xmm0
// asm:   0x182190366: movss dword ptr [rsp + 0x68], xmm9
// asm:   0x18219036d: movsd xmm0, xmm8
// asm:   0x182190372: mov rcx, rsi
// asm:   0x182190375: movsd qword ptr [rsp + 0x60], xmm0
// asm:   0x18219037b: mov r8, qword ptr [rax + 0xdc0]
// asm:   0x182190382: call qword ptr [rax + 0xdb8]  ; vtable slot 200
// asm:   0x182190388: mov dword ptr [rsi + 0x234], 4
// asm:   0x182190392: jmp 0x18218e5e4

void Characters_BasicTitan__UpdateAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar17;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  byte bVar32;
  int iVar33;
  Characters_BasicTitanAnimations_o *pCVar34;
  UnityEngine_Quaternion_StaticFields *pUVar35;
  Utility_BaseComponentCache_o *pUVar36;
  Photon_Pun_PhotonView_o *pPVar37;
  Characters_BaseCharacter_o *pCVar38;
  UnityEngine_Vector3_StaticFields *pUVar39;
  UnityEngine_Transform_o *__this_00;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  bool bVar49;
  bool bVar50;
  int32_t iVar51;
  UnityEngine_Quaternion_o *pUVar52;
  UnityEngine_Transform_o *pUVar53;
  UnityEngine_Vector3_o *pUVar54;
  System_Object_array *pSVar55;
  Il2CppObject *pIVar56;
  Il2CppObject *pIVar57;
  Controllers_BaseTitanAIController_o *__this_01;
  Characters_BaseCharacter_o *pCVar58;
  undefined8 *puVar59;
  Characters_BasicTitan_c *pCVar60;
  System_String_o *pSVar61;
  Characters_BasicTitanComponentCache_o *pCVar62;
  Characters_BaseHitbox_o *pCVar63;
  MethodInfo *pMVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float local_res8 [2];
  float local_res18 [2];
  float local_res20;
  UnityEngine_Vector3_Fields local_158;
  UnityEngine_Quaternion_Fields local_148;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Quaternion_Fields local_128;
  UnityEngine_Quaternion_Fields local_118;
  UnityEngine_Quaternion_Fields local_108;
  float local_f8;
  UnityEngine_Quaternion_Fields local_f0 [11];
  
  if (Il2CppMethodInitialized_184346e06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Spawnables_SpawnablePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlap");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrab");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrush");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearRockRPC");
    Il2CppMethodInitialized_184346e06 = '\x01';
  }
  local_f0[0].x = 0.0;
  local_f0[0].y = 0.0;
  local_f0[0].z = 0.0;
  local_f0[0].w = 0.0;
  fVar65 = (*(__this->klass->vtable)._193_GetAnimationTime.methodPtr)
                     (__this,(__this->klass->vtable)._193_GetAnimationTime.method);
  local_138.x = 4.712389;
  local_138.y = 0.0;
  local_138.z = 0.0;
  pUVar52 = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Quaternion_o *)&local_128,(UnityEngine_Vector3_o *)&local_138,
                       (MethodInfo *)0x0);
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
  uVar46._0_4_ = (pUVar52->fields).x;
  uVar46._4_4_ = (pUVar52->fields).y;
  uVar47._0_4_ = (pUVar52->fields).z;
  uVar47._4_4_ = (pUVar52->fields).w;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar34->fields).AttackPunchCombo,
                      (MethodInfo *)0x0);
  if (bVar49) {
    if (((__this->fields)._currentAttackStage == 0) && (0.115 < fVar65)) {
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
      pCVar62 = (__this->fields).BasicCache;
      if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
      pCVar63 = (pCVar62->fields).HandRHitbox;
      fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                         (__this,0.005,(__this->klass->vtable)._194_GetHitboxTime.method);
      fVar72 = 0.025;
label_18218fff0:
      fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                         (__this,fVar72,(__this->klass->vtable)._194_GetHitboxTime.method);
joined_r0x000182190009:
      if (pCVar63 != (Characters_BaseHitbox_o *)0x0) goto label_182190012;
      goto label_1821903eb;
    }
    if (((__this->fields)._currentAttackStage != 1) || (fVar65 <= 0.265)) {
      if (((__this->fields)._currentAttackStage != 2) || (fVar65 <= 0.48)) {
        if ((__this->fields)._currentAttackStage != 3) {
          return;
        }
        if (fVar65 <= 0.52) {
          return;
        }
        pCVar62 = (__this->fields).BasicCache;
        if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar53 = (pCVar62->fields).Transform, pUVar53 != (UnityEngine_Transform_o *)0x0)) {
          pUVar54 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
          pCVar62 = (__this->fields).BasicCache;
          if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar53 = (pCVar62->fields).Transform, pUVar53 != (UnityEngine_Transform_o *)0x0)) {
            uVar14 = (pUVar54->fields).x;
            uVar30 = (pUVar54->fields).y;
            fVar65 = (pUVar54->fields).z;
            pUVar54 = UnityEngine_Transform__get_forward
                                ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
            fVar72 = (__this->fields).Size;
            uVar15 = (pUVar54->fields).x;
            uVar31 = (pUVar54->fields).y;
            fVar8 = fVar72 * (float)uVar15 * 7.0 + (float)uVar14;
            fVar24 = fVar72 * (float)uVar31 * 7.0 + (float)uVar30;
            fVar65 = fVar72 * (pUVar54->fields).z * 7.0 + fVar65;
            if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
            }
            fVar72 = (__this->fields).Size;
            pSVar61 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
            if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
            }
            local_148.y = fVar24;
            local_148.x = fVar8;
            local_128._0_8_ = uVar46;
            local_128._8_8_ = uVar47;
            local_148.z = fVar65;
            Effects_EffectSpawner__Spawn
                      (pSVar61,(UnityEngine_Vector3_o *)&local_148,(UnityEngine_Quaternion_o *)&local_128,
                       fVar72,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
            local_148.z = fVar65;
            (*(__this->klass->vtable)._200_SpawnShatter.methodPtr)
                      (__this,(UnityEngine_Vector3_o *)&local_148,
                       (__this->klass->vtable)._200_SpawnShatter.method);
            (__this->fields)._currentAttackStage = 4;
            return;
          }
        }
      }
      else {
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing3
                   ,(MethodInfo *)0x0);
        pCVar62 = (__this->fields).BasicCache;
        if (pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) {
          pCVar63 = (pCVar62->fields).HandLHitbox;
          fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                             (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
          fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                             (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
          if (pCVar63 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Activate(pCVar63,fVar65,fVar72,(MethodInfo *)0x0);
            pCVar62 = (__this->fields).BasicCache;
            if (pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) {
              pCVar63 = (pCVar62->fields).HandRHitbox;
              fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                                 (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
              fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                                 (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
              if (pCVar63 != (Characters_BaseHitbox_o *)0x0) {
                Characters_BaseHitbox__Activate(pCVar63,fVar65,fVar72,(MethodInfo *)0x0);
                (__this->fields)._currentAttackStage = 3;
                return;
              }
            }
          }
        }
      }
      goto label_1821903eb;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing2,
               (MethodInfo *)0x0);
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar63 = (pCVar62->fields).HandLHitbox;
    fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.005,(__this->klass->vtable)._194_GetHitboxTime.method);
    fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.025,(__this->klass->vtable)._194_GetHitboxTime.method);
    if (pCVar63 == (Characters_BaseHitbox_o *)0x0) goto label_1821903eb;
label_1821900db:
    Characters_BaseHitbox__Activate(pCVar63,fVar65,fVar72,(MethodInfo *)0x0);
    goto label_1821900e9;
  }
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar34->fields).AttackPunch,(MethodInfo *)0x0
                     );
  if (bVar49) {
    iVar33 = (__this->fields)._currentAttackStage;
    if ((__this->fields).AI == false) {
      if ((iVar33 != 0) || (fVar65 <= 0.2)) {
        if ((__this->fields)._currentAttackStage != 1) {
          return;
        }
        if (fVar65 <= 0.49) {
          return;
        }
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing2
                   ,(MethodInfo *)0x0);
        pCVar62 = (__this->fields).BasicCache;
        if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
        fVar65 = 0.06;
label_18218fe5b:
        pCVar63 = (pCVar62->fields).HandLHitbox;
        fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                           (__this,fVar65,(__this->klass->vtable)._194_GetHitboxTime.method);
        if (pCVar63 == (Characters_BaseHitbox_o *)0x0) goto label_1821903eb;
        fVar65 = 0.0;
        goto label_1821900db;
      }
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
      pCVar62 = (__this->fields).BasicCache;
      if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
      pCVar63 = (pCVar62->fields).HandRHitbox;
      pCVar60 = __this->klass;
      fVar72 = 0.06;
      pMVar64 = (pCVar60->vtable)._194_GetHitboxTime.method;
    }
    else {
      if ((iVar33 != 0) || (fVar65 <= 0.22)) {
        if ((__this->fields)._currentAttackStage != 1) {
          return;
        }
        if (fVar65 <= 0.505) {
          return;
        }
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing2
                   ,(MethodInfo *)0x0);
        pCVar62 = (__this->fields).BasicCache;
        if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
        fVar65 = 0.04;
        goto label_18218fe5b;
      }
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
      pCVar62 = (__this->fields).BasicCache;
      if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
      pCVar63 = (pCVar62->fields).HandRHitbox;
      pCVar60 = __this->klass;
      fVar72 = 0.04;
      pMVar64 = (pCVar60->vtable)._194_GetHitboxTime.method;
    }
label_18218eea4:
    fVar72 = (*(pCVar60->vtable)._194_GetHitboxTime.methodPtr)(__this,fVar72,pMVar64);
    if (pCVar63 != (Characters_BaseHitbox_o *)0x0) {
      fVar65 = 0.0;
label_182190012:
      Characters_BaseHitbox__Activate(pCVar63,fVar65,fVar72,(MethodInfo *)0x0);
      (__this->fields)._currentAttackStage = 1;
      return;
    }
label_1821903eb:
    ThrowNullReferenceException();
  }
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar34->fields).AttackSlam,(MethodInfo *)0x0)
  ;
  if (bVar49) {
    if (((__this->fields)._currentAttackStage != 0) || (fVar65 <= 0.42)) {
      if ((__this->fields)._currentAttackStage != 1) {
        return;
      }
      if (fVar65 <= 0.45) {
        return;
      }
      pCVar62 = (__this->fields).BasicCache;
      if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar53 = (pCVar62->fields).Transform, pUVar53 != (UnityEngine_Transform_o *)0x0)) {
        pUVar54 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
        pCVar62 = (__this->fields).BasicCache;
        if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar53 = (pCVar62->fields).Transform, pUVar53 != (UnityEngine_Transform_o *)0x0)) {
          uVar12 = (pUVar54->fields).x;
          uVar28 = (pUVar54->fields).y;
          fVar65 = (pUVar54->fields).z;
          pUVar54 = UnityEngine_Transform__get_forward
                              ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
          fVar72 = (__this->fields).Size;
          uVar13 = (pUVar54->fields).x;
          uVar29 = (pUVar54->fields).y;
          fVar8 = fVar72 * (float)uVar13 * 7.0 + (float)uVar12;
          fVar24 = fVar72 * (float)uVar29 * 7.0 + (float)uVar28;
          fVar65 = fVar72 * (pUVar54->fields).z * 7.0 + fVar65;
          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
          }
          fVar72 = (__this->fields).Size;
          pSVar61 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
          }
          local_148.y = fVar24;
          local_148.x = fVar8;
          local_128._0_8_ = uVar46;
          local_128._8_8_ = uVar47;
          local_148.z = fVar65;
          Effects_EffectSpawner__Spawn
                    (pSVar61,(UnityEngine_Vector3_o *)&local_148,(UnityEngine_Quaternion_o *)&local_128,fVar72
                     ,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
          local_148.z = fVar65;
          (*(__this->klass->vtable)._200_SpawnShatter.methodPtr)
                    (__this,(UnityEngine_Vector3_o *)&local_148,
                     (__this->klass->vtable)._200_SpawnShatter.method);
          (__this->fields)._currentAttackStage = 2;
          return;
        }
      }
      goto label_1821903eb;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing3,
               (MethodInfo *)0x0);
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar63 = (pCVar62->fields).HandLHitbox;
    fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
    fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.01,(__this->klass->vtable)._194_GetHitboxTime.method);
    if (pCVar63 == (Characters_BaseHitbox_o *)0x0) goto label_1821903eb;
    Characters_BaseHitbox__Activate(pCVar63,fVar65,fVar72,(MethodInfo *)0x0);
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar63 = (pCVar62->fields).HandRHitbox;
    fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
    fVar72 = 0.01;
    goto label_18218fff0;
  }
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar34->fields).AttackBellyFlop,
                      (MethodInfo *)0x0);
  if (bVar49) {
    if (((__this->fields)._currentAttackStage != 0) || (fVar65 <= 0.65)) {
      if (((__this->fields)._currentAttackStage != 1) || (fVar65 <= 0.805)) {
        if ((__this->fields)._currentAttackStage != 2) {
          return;
        }
        pfVar1 = &(__this->fields)._stateTimeLeft;
        if (1.1 < *pfVar1 || *pfVar1 == 1.1) {
          return;
        }
        pCVar34 = (__this->fields).BasicAnimations;
        (__this->fields)._currentAttackStage = 3;
        if (pCVar34 != (Characters_BasicTitanAnimations_o *)0x0) {
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,(pCVar34->fields).AttackBellyFlopGetup,0.1,0.0,
                     (MethodInfo *)0x0);
          return;
        }
        goto label_1821903eb;
      }
      pUVar36 = (__this->fields).Cache;
      (__this->fields)._currentAttackStage = 2;
      if ((pUVar36 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar53 = (pUVar36->fields).Transform, pUVar53 == (UnityEngine_Transform_o *)0x0))
      goto label_1821903eb;
      pUVar54 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
      pUVar36 = (__this->fields).Cache;
      if ((pUVar36 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar53 = (pUVar36->fields).Transform, pUVar53 == (UnityEngine_Transform_o *)0x0))
      goto label_1821903eb;
      uVar9 = (pUVar54->fields).x;
      uVar25 = (pUVar54->fields).y;
      fVar65 = (pUVar54->fields).z;
      pUVar54 = UnityEngine_Transform__get_forward
                          ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
      uVar10 = (pUVar54->fields).x;
      uVar26 = (pUVar54->fields).y;
      fVar72 = (pUVar54->fields).z;
      fVar8 = (float)uVar10 * 5.0 + (float)uVar9;
      fVar24 = (float)uVar26 * 5.0 + (float)uVar25;
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pUVar36 = (__this->fields).Cache;
      if ((pUVar36 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar53 = (pUVar36->fields).Transform, pUVar53 == (UnityEngine_Transform_o *)0x0))
      goto label_1821903eb;
      pSVar61 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom4;
      pUVar52 = UnityEngine_Transform__get_rotation
                          ((UnityEngine_Quaternion_o *)&local_128,pUVar53,(MethodInfo *)0x0);
      local_f0[0].x = (pUVar52->fields).x;
      local_f0[0].y = (pUVar52->fields).y;
      local_f0[0].z = (pUVar52->fields).z;
      local_f0[0].w = (pUVar52->fields).w;
      pUVar54 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_118,(UnityEngine_Quaternion_o *)local_f0,
                           (MethodInfo *)0x0);
      local_158.x = 4.712389;
      uVar11 = (pUVar54->fields).x;
      uVar27 = (pUVar54->fields).y;
      local_148.y = (float)uVar27 * 57.29578;
      local_148.x = (float)uVar11 * 57.29578;
      local_148.z = (pUVar54->fields).z * 57.29578;
      pUVar54 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_118,(UnityEngine_Vector3_o *)&local_148,
                           (MethodInfo *)0x0);
      local_158.z = 0.0;
      local_158.y = (pUVar54->fields).y * 0.017453292;
      pUVar52 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Quaternion_o *)&local_128,(UnityEngine_Vector3_o *)&local_158,
                           (MethodInfo *)0x0);
      fVar68 = (__this->fields).Size;
      local_128.x = (pUVar52->fields).x;
      local_128.y = (pUVar52->fields).y;
      local_128.z = (pUVar52->fields).z;
      local_128.w = (pUVar52->fields).w;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      local_148.z = fVar72 * 5.0 + fVar65;
      goto label_18218fa6d;
    }
    pCVar62 = (__this->fields).BasicCache;
    (__this->fields)._currentAttackStage = 1;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar63 = (pCVar62->fields).BodyHitbox;
    fVar65 = 0.155;
label_18218f897:
    fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,fVar65,(__this->klass->vtable)._194_GetHitboxTime.method);
    if (pCVar63 != (Characters_BaseHitbox_o *)0x0) {
      Characters_BaseHitbox__Activate(pCVar63,0.0,fVar65,(MethodInfo *)0x0);
      return;
    }
    goto label_1821903eb;
  }
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackHitBack,
                      (MethodInfo *)0x0);
  if (bVar49) {
label_18218f755:
    if (((__this->fields)._currentAttackStage != 0) || (fVar65 <= 0.635)) {
      if ((__this->fields)._currentAttackStage != 1) {
        return;
      }
      if (fVar65 <= 0.68) {
        return;
      }
      (__this->fields)._currentAttackStage = 2;
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pCVar62 = (__this->fields).BasicCache;
      if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pCVar63 = (pCVar62->fields).HandRHitbox, pCVar63 != (Characters_BaseHitbox_o *)0x0)) {
        pSVar61 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom3;
        pUVar53 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar63,(MethodInfo *)0x0);
        if (pUVar53 != (UnityEngine_Transform_o *)0x0) {
          pUVar54 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
          fVar68 = (__this->fields).Size;
          fVar8 = (pUVar54->fields).x;
          fVar24 = (pUVar54->fields).y;
          local_148.z = (pUVar54->fields).z;
          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
          }
          local_128._0_8_ = uVar46;
          local_128._8_8_ = uVar47;
label_18218fa6d:
          local_148.y = fVar24;
          local_148.x = fVar8;
          Effects_EffectSpawner__Spawn
                    (pSVar61,(UnityEngine_Vector3_o *)&local_148,(UnityEngine_Quaternion_o *)&local_128,fVar68
                     ,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_1821903eb;
    }
    pCVar62 = (__this->fields).BasicCache;
    (__this->fields)._currentAttackStage = 1;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    fVar65 = 0.055;
    pCVar63 = (pCVar62->fields).HandRHitbox;
    goto label_18218f897;
  }
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackHitFace,
                      (MethodInfo *)0x0);
  if (bVar49) goto label_18218f755;
  pSVar61 = (__this->fields)._currentAttack;
  if (pSVar61 == (System_String_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__StartsWith(pSVar61,"AttackSlap",(MethodInfo *)0x0);
  if (bVar49) {
    if ((__this->fields).AI == false) {
      fVar8 = 0.3;
      fVar72 = 0.2;
    }
    else {
      fVar72 = 0.14;
      fVar8 = 0.33;
    }
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    if (fVar65 <= fVar8) {
      return;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
               (MethodInfo *)0x0);
    pCVar34 = (__this->fields).BasicAnimations;
    if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
    bVar49 = System_String__op_Equality
                       ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackSlapL,
                        (MethodInfo *)0x0);
    if (!bVar49) {
      pCVar34 = (__this->fields).BasicAnimations;
      if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
      bVar49 = System_String__op_Equality
                         ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackSlapHighL,
                          (MethodInfo *)0x0);
      if (!bVar49) {
        pCVar34 = (__this->fields).BasicAnimations;
        if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
        bVar49 = System_String__op_Equality
                           ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackSlapLowL,
                            (MethodInfo *)0x0);
        if (!bVar49) {
          pCVar62 = (__this->fields).BasicCache;
          if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
          pCVar60 = __this->klass;
          pCVar63 = (pCVar62->fields).HandRHitbox;
          pMVar64 = (pCVar60->vtable)._194_GetHitboxTime.method;
          goto label_18218eea4;
        }
      }
    }
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar60 = __this->klass;
    pCVar63 = (pCVar62->fields).HandLHitbox;
    pMVar64 = (pCVar60->vtable)._194_GetHitboxTime.method;
    goto label_18218eea4;
  }
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar34->fields).AttackKick,(MethodInfo *)0x0)
  ;
  if (bVar49) {
    if (((__this->fields)._currentAttackStage != 0) || (fVar65 <= 0.39)) {
      if ((__this->fields)._currentAttackStage != 1) {
        return;
      }
      if (fVar65 <= 0.43) {
        return;
      }
      pCVar62 = (__this->fields).BasicCache;
      (__this->fields)._currentAttackStage = 2;
      if (((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
          (pCVar63 = (pCVar62->fields).FootLHitbox, pCVar63 != (Characters_BaseHitbox_o *)0x0)) &&
         (pUVar53 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar63,(MethodInfo *)0x0)
         , pUVar53 != (UnityEngine_Transform_o *)0x0)) {
        pUVar54 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
        pCVar62 = (__this->fields).BasicCache;
        fVar65 = (pUVar54->fields).x;
        fVar72 = (pUVar54->fields).z;
        if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar53 = (pCVar62->fields).Transform, pUVar53 != (UnityEngine_Transform_o *)0x0)) {
          pUVar54 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
          fVar8 = (pUVar54->fields).y;
          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
          }
          pCVar62 = (__this->fields).BasicCache;
          if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar53 = (pCVar62->fields).Transform, pUVar53 != (UnityEngine_Transform_o *)0x0)) {
            pSVar61 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom5;
            pUVar52 = UnityEngine_Transform__get_rotation
                                ((UnityEngine_Quaternion_o *)&local_128,pUVar53,(MethodInfo *)0x0);
            fVar24 = (__this->fields).Size;
            local_128.x = (pUVar52->fields).x;
            local_128.y = (pUVar52->fields).y;
            local_128.z = (pUVar52->fields).z;
            local_128.w = (pUVar52->fields).w;
            if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
            }
label_18218f5a8:
            local_158.y = fVar8;
            local_158.x = fVar65;
            local_158.z = fVar72;
            Effects_EffectSpawner__Spawn
                      (pSVar61,(UnityEngine_Vector3_o *)&local_158,(UnityEngine_Quaternion_o *)&local_128,
                       fVar24,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
            local_158.z = fVar72;
            (*(__this->klass->vtable)._200_SpawnShatter.methodPtr)
                      (__this,(UnityEngine_Vector3_o *)&local_158,
                       (__this->klass->vtable)._200_SpawnShatter.method);
            return;
          }
        }
      }
      goto label_1821903eb;
    }
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar63 = (pCVar62->fields).FootLHitbox;
label_18218ef60:
    pCVar60 = __this->klass;
    fVar72 = 0.09;
    pMVar64 = (pCVar60->vtable)._194_GetHitboxTime.method;
    goto label_18218eea4;
  }
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar34->fields).AttackStomp,(MethodInfo *)0x0
                     );
  if (bVar49) {
    if (((__this->fields)._currentAttackStage != 0) || (fVar65 <= 0.38)) {
      if ((__this->fields)._currentAttackStage != 1) {
        return;
      }
      if (fVar65 <= 0.43) {
        return;
      }
      pCVar62 = (__this->fields).BasicCache;
      (__this->fields)._currentAttackStage = 2;
      if (((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
          (pCVar63 = (pCVar62->fields).FootLHitbox, pCVar63 != (Characters_BaseHitbox_o *)0x0)) &&
         (pUVar53 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar63,(MethodInfo *)0x0)
         , pUVar53 != (UnityEngine_Transform_o *)0x0)) {
        pUVar54 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
        pCVar62 = (__this->fields).BasicCache;
        fVar65 = (pUVar54->fields).x;
        fVar72 = (pUVar54->fields).z;
        if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar53 = (pCVar62->fields).Transform, pUVar53 != (UnityEngine_Transform_o *)0x0)) {
          pUVar54 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
          fVar8 = (pUVar54->fields).y;
          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
          }
          fVar24 = (__this->fields).Size;
          pSVar61 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
          local_128._0_8_ = uVar46;
          local_128._8_8_ = uVar47;
          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
          }
          goto label_18218f5a8;
        }
      }
      goto label_1821903eb;
    }
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar63 = (pCVar62->fields).FootLHitbox;
    pCVar60 = __this->klass;
    fVar72 = 0.06;
    pMVar64 = (pCVar60->vtable)._194_GetHitboxTime.method;
    goto label_18218eea4;
  }
  pSVar61 = (__this->fields)._currentAttack;
  if (pSVar61 == (System_String_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__StartsWith(pSVar61,"AttackSwing",(MethodInfo *)0x0);
  if (bVar49) {
    if (((__this->fields)._currentAttackStage != 0) || (fVar65 <= 0.41)) {
      if ((__this->fields)._currentAttackStage != 1) {
        return;
      }
      if (fVar65 <= 0.45) {
        return;
      }
      pCVar34 = (__this->fields).BasicAnimations;
      if (pCVar34 != (Characters_BasicTitanAnimations_o *)0x0) {
        bVar49 = System_String__op_Equality
                           ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackSwingL,
                            (MethodInfo *)0x0);
        pCVar62 = (__this->fields).BasicCache;
        if (pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) {
          if (bVar49) {
            pCVar63 = (pCVar62->fields).HandLHitbox;
          }
          else {
            pCVar63 = (pCVar62->fields).HandRHitbox;
          }
          if ((pCVar63 != (Characters_BaseHitbox_o *)0x0) &&
             (pUVar53 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar63,(MethodInfo *)0x0),
             pUVar53 != (UnityEngine_Transform_o *)0x0)) {
            pUVar54 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
            pCVar62 = (__this->fields).BasicCache;
            fVar65 = (pUVar54->fields).z;
            fVar72 = (pUVar54->fields).x;
            if ((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
               (pUVar53 = (pCVar62->fields).Transform, pUVar53 != (UnityEngine_Transform_o *)0x0)) {
              pUVar54 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
              fVar8 = (pUVar54->fields).y;
              if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
              }
              fVar24 = (__this->fields).Size;
              pSVar61 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
              }
              local_158.y = fVar8;
              local_158.x = fVar72;
              local_158.z = fVar65;
              local_128._0_8_ = uVar46;
              local_128._8_8_ = uVar47;
              Effects_EffectSpawner__Spawn
                        (pSVar61,(UnityEngine_Vector3_o *)&local_158,(UnityEngine_Quaternion_o *)&local_128,
                         fVar24,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
              local_158.z = fVar65;
              (*(__this->klass->vtable)._200_SpawnShatter.methodPtr)
                        (__this,(UnityEngine_Vector3_o *)&local_158,
                         (__this->klass->vtable)._200_SpawnShatter.method);
              (__this->fields)._currentAttackStage = 2;
              return;
            }
          }
        }
      }
      goto label_1821903eb;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
               (MethodInfo *)0x0);
    pCVar34 = (__this->fields).BasicAnimations;
    if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
    bVar49 = System_String__op_Equality
                       ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackSwingL,
                        (MethodInfo *)0x0);
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    if (bVar49) {
      pCVar63 = (pCVar62->fields).HandLHitbox;
    }
    else {
      pCVar63 = (pCVar62->fields).HandRHitbox;
    }
    fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
    fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
    goto joined_r0x000182190009;
  }
  pSVar61 = (__this->fields)._currentAttack;
  if (pSVar61 == (System_String_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__StartsWith(pSVar61,"AttackBite",(MethodInfo *)0x0);
  if (bVar49) {
    pCVar34 = (__this->fields).BasicAnimations;
    if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
    bVar50 = System_String__op_Equality
                       ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackBiteF,
                        (MethodInfo *)0x0);
    bVar49 = (__this->fields).AI;
    if (bVar50) {
      if (bVar49 == false) {
        fVar8 = 0.47;
        fVar72 = 0.63;
      }
      else {
        fVar72 = 0.62;
        fVar8 = 0.53;
      }
    }
    else if (bVar49 == false) {
      fVar8 = 0.28;
      fVar72 = 0.43;
    }
    else {
      fVar72 = 0.42;
      fVar8 = 0.33;
    }
    if (((__this->fields)._currentAttackStage != 0) || (fVar65 <= fVar8)) {
      if ((__this->fields)._currentAttackStage != 1) {
        return;
      }
      if (fVar65 <= fVar72) {
        return;
      }
      pCVar62 = (__this->fields).BasicCache;
      if (((pCVar62 != (Characters_BasicTitanComponentCache_o *)0x0) &&
          (pCVar63 = (pCVar62->fields).MouthHitbox, pCVar63 != (Characters_BaseHitbox_o *)0x0)) &&
         (pUVar53 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar63,(MethodInfo *)0x0)
         , pUVar53 != (UnityEngine_Transform_o *)0x0)) {
        pUVar54 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
        uVar6 = (pUVar54->fields).x;
        uVar22 = (pUVar54->fields).y;
        fVar65 = (pUVar54->fields).z;
        pUVar54 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0)
        ;
        fVar72 = (__this->fields).Size;
        uVar7 = (pUVar54->fields).x;
        uVar23 = (pUVar54->fields).y;
        fVar8 = (pUVar54->fields).z;
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        fVar24 = (__this->fields).Size;
        pSVar61 = TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        local_148.z = fVar72 * fVar8 + fVar65;
        local_148.y = fVar72 * (float)uVar23 + (float)uVar22;
        local_148.x = fVar72 * (float)uVar7 + (float)uVar6;
        local_128._0_8_ = uVar46;
        local_128._8_8_ = uVar47;
        Effects_EffectSpawner__Spawn
                  (pSVar61,(UnityEngine_Vector3_o *)&local_148,(UnityEngine_Quaternion_o *)&local_128,fVar24,
                   true,(System_Object_array *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        pSVar61 = Characters_TitanSounds__GetRandomBite((MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,pSVar61,(MethodInfo *)0x0);
        (__this->fields)._currentAttackStage = 2;
        return;
      }
      goto label_1821903eb;
    }
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar63 = (pCVar62->fields).MouthHitbox;
    goto label_18218ef60;
  }
  pSVar61 = (__this->fields)._currentAttack;
  if (pSVar61 == (System_String_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__StartsWith(pSVar61,"AttackBrush",(MethodInfo *)0x0);
  if (bVar49) {
    if ((__this->fields).AI == false) {
      fVar8 = 0.37;
      fVar72 = 0.28;
    }
    else {
      fVar72 = 0.1;
      fVar8 = 0.55;
    }
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    if (fVar65 <= fVar8) {
      return;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
               (MethodInfo *)0x0);
    pCVar34 = (__this->fields).BasicAnimations;
    if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
    bVar49 = System_String__op_Equality
                       ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackBrushChestL,
                        (MethodInfo *)0x0);
    pCVar62 = (__this->fields).BasicCache;
    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
    pCVar60 = __this->klass;
    pMVar64 = (pCVar60->vtable)._194_GetHitboxTime.method;
    if (bVar49) {
      pCVar63 = (pCVar62->fields).HandLHitbox;
    }
    else {
      pCVar63 = (pCVar62->fields).HandRHitbox;
    }
    goto label_18218eea4;
  }
  pSVar61 = (__this->fields)._currentAttack;
  if (pSVar61 == (System_String_o *)0x0) goto label_1821903eb;
  bVar49 = System_String__StartsWith(pSVar61,"AttackGrab",(MethodInfo *)0x0);
  if (bVar49) {
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    pCVar34 = (__this->fields).BasicAnimations;
    (__this->fields)._currentAttackStage = 1;
    if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
    bVar49 = System_String__op_Equality
                       ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackGrabCoreL,
                        (MethodInfo *)0x0);
    if (bVar49) {
      pCVar62 = (__this->fields).BasicCache;
      if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
      pCVar63 = (pCVar62->fields).HandLHitbox;
label_18218ed92:
      fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                         (__this,0.41,(__this->klass->vtable)._194_GetHitboxTime.method);
      fVar72 = 0.12;
    }
    else {
      pCVar34 = (__this->fields).BasicAnimations;
      if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
      bVar49 = System_String__op_Equality
                         ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackGrabCoreR,
                          (MethodInfo *)0x0);
      if (bVar49) {
        pCVar62 = (__this->fields).BasicCache;
        if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
        pCVar63 = (pCVar62->fields).HandRHitbox;
        goto label_18218ed92;
      }
      pCVar34 = (__this->fields).BasicAnimations;
      if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
      bVar49 = System_String__op_Equality
                         ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackGrabBackL,
                          (MethodInfo *)0x0);
      if (bVar49) {
        pCVar62 = (__this->fields).BasicCache;
        if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
        pCVar63 = (pCVar62->fields).HandLHitbox;
        fVar65 = 0.32;
label_18218ebe7:
        fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                           (__this,fVar65,(__this->klass->vtable)._194_GetHitboxTime.method);
        fVar72 = 0.16;
      }
      else {
        pCVar34 = (__this->fields).BasicAnimations;
        if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
        bVar49 = System_String__op_Equality
                           ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackGrabBackR,
                            (MethodInfo *)0x0);
        if (bVar49) {
          pCVar62 = (__this->fields).BasicCache;
          if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
          pCVar63 = (pCVar62->fields).HandRHitbox;
          fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                             (__this,0.38,(__this->klass->vtable)._194_GetHitboxTime.method);
          fVar72 = 0.3;
        }
        else {
          pCVar34 = (__this->fields).BasicAnimations;
          if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
          bVar49 = System_String__op_Equality
                             ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackGrabStomachL,
                              (MethodInfo *)0x0);
          if (bVar49) {
            pCVar62 = (__this->fields).BasicCache;
            if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
            pCVar63 = (pCVar62->fields).HandLHitbox;
          }
          else {
            pCVar34 = (__this->fields).BasicAnimations;
            if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
            bVar49 = System_String__op_Equality
                               ((__this->fields)._currentStateAnimation,(pCVar34->fields).AttackGrabStomachR,
                                (MethodInfo *)0x0);
            if (!bVar49) {
              pCVar34 = (__this->fields).BasicAnimations;
              if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
              bVar49 = System_String__op_Equality
                                 ((__this->fields)._currentStateAnimation,
                                  (pCVar34->fields).AttackGrabHeadBackL,(MethodInfo *)0x0);
              if (bVar49) {
                pCVar62 = (__this->fields).BasicCache;
                if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
                pCVar63 = (pCVar62->fields).HandRHitbox;
                fVar65 = 0.46;
              }
              else {
                pCVar34 = (__this->fields).BasicAnimations;
                if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                bVar49 = System_String__op_Equality
                                   ((__this->fields)._currentStateAnimation,
                                    (pCVar34->fields).AttackGrabHeadBackR,(MethodInfo *)0x0);
                if (!bVar49) {
                  pCVar34 = (__this->fields).BasicAnimations;
                  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                  bVar49 = System_String__op_Equality
                                     ((__this->fields)._currentStateAnimation,
                                      (pCVar34->fields).AttackGrabHeadFrontL,(MethodInfo *)0x0);
                  if (bVar49) {
                    pCVar62 = (__this->fields).BasicCache;
                    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
                    pCVar63 = (pCVar62->fields).HandLHitbox;
                  }
                  else {
                    pCVar34 = (__this->fields).BasicAnimations;
                    if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                    bVar49 = System_String__op_Equality
                                       ((__this->fields)._currentStateAnimation,
                                        (pCVar34->fields).AttackGrabHeadFrontR,(MethodInfo *)0x0);
                    if (!bVar49) {
                      pCVar34 = (__this->fields).BasicAnimations;
                      if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                      bVar49 = System_String__op_Equality
                                         ((__this->fields)._currentStateAnimation,
                                          (pCVar34->fields).AttackGrabGroundFrontL,(MethodInfo *)0x0);
                      if (bVar49) {
                        pCVar62 = (__this->fields).BasicCache;
                        if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
                        pCVar63 = (pCVar62->fields).HandLHitbox;
                      }
                      else {
                        pCVar34 = (__this->fields).BasicAnimations;
                        if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                        bVar49 = System_String__op_Equality
                                           ((__this->fields)._currentStateAnimation,
                                            (pCVar34->fields).AttackGrabGroundFrontR,(MethodInfo *)0x0);
                        if (!bVar49) {
                          pCVar34 = (__this->fields).BasicAnimations;
                          if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                          bVar49 = System_String__op_Equality
                                             ((__this->fields)._currentStateAnimation,
                                              (pCVar34->fields).AttackGrabGroundBackL,(MethodInfo *)0x0);
                          if (bVar49) {
                            pCVar62 = (__this->fields).BasicCache;
                            if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
                            pCVar63 = (pCVar62->fields).HandLHitbox;
                          }
                          else {
                            pCVar34 = (__this->fields).BasicAnimations;
                            if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                            bVar49 = System_String__op_Equality
                                               ((__this->fields)._currentStateAnimation,
                                                (pCVar34->fields).AttackGrabGroundBackR,(MethodInfo *)0x0);
                            if (!bVar49) {
                              pCVar34 = (__this->fields).BasicAnimations;
                              if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                              bVar49 = System_String__op_Equality
                                                 ((__this->fields)._currentStateAnimation,
                                                  (pCVar34->fields).AttackGrabAirL,(MethodInfo *)0x0);
                              if (bVar49) {
                                pCVar62 = (__this->fields).BasicCache;
                                if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0)
                                goto label_1821903eb;
                                pCVar63 = (pCVar62->fields).HandLHitbox;
                                fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                                                   (__this,0.3,
                                                    (__this->klass->vtable)._194_GetHitboxTime.method);
                                fVar72 = 0.15;
                              }
                              else {
                                pCVar34 = (__this->fields).BasicAnimations;
                                if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                                bVar49 = System_String__op_Equality
                                                   ((__this->fields)._currentStateAnimation,
                                                    (pCVar34->fields).AttackGrabAirR,(MethodInfo *)0x0);
                                if (bVar49) {
                                  pCVar62 = (__this->fields).BasicCache;
                                  if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0)
                                  goto label_1821903eb;
                                  pCVar63 = (pCVar62->fields).HandRHitbox;
                                }
                                else {
                                  pCVar34 = (__this->fields).BasicAnimations;
                                  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903eb;
                                  bVar49 = System_String__op_Equality
                                                     ((__this->fields)._currentStateAnimation,
                                                      (pCVar34->fields).AttackGrabAirFarL,(MethodInfo *)0x0);
                                  if (!bVar49) {
                                    pCVar34 = (__this->fields).BasicAnimations;
                                    if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0)
                                    goto label_1821903eb;
                                    bVar49 = System_String__op_Equality
                                                       ((__this->fields)._currentStateAnimation,
                                                        (pCVar34->fields).AttackGrabAirFarR,(MethodInfo *)0x0)
                                    ;
                                    if (bVar49) {
                                      pCVar62 = (__this->fields).BasicCache;
                                      if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0)
                                      goto label_1821903eb;
                                      pCVar63 = (pCVar62->fields).HandRHitbox;
                                      fVar65 = 0.38;
                                    }
                                    else {
                                      pCVar34 = (__this->fields).BasicAnimations;
                                      if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0)
                                      goto label_1821903e5;
                                      bVar49 = System_String__op_Equality
                                                         ((__this->fields)._currentStateAnimation,
                                                          (pCVar34->fields).AttackGrabHighL,(MethodInfo *)0x0)
                                      ;
                                      if (bVar49) {
                                        pCVar62 = (__this->fields).BasicCache;
                                        if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0)
                                        goto label_1821903e5;
                                        pCVar63 = (pCVar62->fields).HandLHitbox;
                                      }
                                      else {
                                        pCVar34 = (__this->fields).BasicAnimations;
                                        if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0)
                                        goto label_1821903e5;
                                        bVar49 = System_String__op_Equality
                                                           ((__this->fields)._currentStateAnimation,
                                                            (pCVar34->fields).AttackGrabHighR,
                                                            (MethodInfo *)0x0);
                                        if (!bVar49) {
                                          return;
                                        }
                                        pCVar62 = (__this->fields).BasicCache;
                                        if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0)
                                        goto label_1821903e5;
                                        pCVar63 = (pCVar62->fields).HandRHitbox;
                                      }
                                      fVar65 = 0.3;
                                    }
                                    fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                                                       (__this,fVar65,
                                                        (__this->klass->vtable)._194_GetHitboxTime.method);
                                    fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                                                       (__this,0.17,
                                                        (__this->klass->vtable)._194_GetHitboxTime.method);
                                    if (pCVar63 == (Characters_BaseHitbox_o *)0x0) goto label_1821903e5;
                                    goto label_18218ea6a;
                                  }
                                  pCVar62 = (__this->fields).BasicCache;
                                  if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0)
                                  goto label_1821903eb;
                                  pCVar63 = (pCVar62->fields).HandLHitbox;
                                }
                                fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                                                   (__this,0.38,
                                                    (__this->klass->vtable)._194_GetHitboxTime.method);
                                fVar72 = 0.17;
                              }
                              goto label_18218eaf7;
                            }
                            pCVar62 = (__this->fields).BasicCache;
                            if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
                            pCVar63 = (pCVar62->fields).HandRHitbox;
                          }
                          fVar65 = 0.35;
                          goto label_18218eb8f;
                        }
                        pCVar62 = (__this->fields).BasicCache;
                        if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
                        pCVar63 = (pCVar62->fields).HandRHitbox;
                      }
                      fVar65 = 0.42;
                      goto label_18218ebe7;
                    }
                    pCVar62 = (__this->fields).BasicCache;
                    if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
                    pCVar63 = (pCVar62->fields).HandRHitbox;
                  }
                  fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                                     (__this,0.42,(__this->klass->vtable)._194_GetHitboxTime.method);
                  fVar72 = 0.25;
                  goto label_18218eaf7;
                }
                pCVar62 = (__this->fields).BasicCache;
                if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
                pCVar63 = (pCVar62->fields).HandLHitbox;
                fVar65 = 0.46;
              }
label_18218eb8f:
              fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                                 (__this,fVar65,(__this->klass->vtable)._194_GetHitboxTime.method);
              fVar72 = 0.05;
              goto label_18218eaf7;
            }
            pCVar62 = (__this->fields).BasicCache;
            if (pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_1821903eb;
            pCVar63 = (pCVar62->fields).HandRHitbox;
          }
          fVar65 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                             (__this,0.35,(__this->klass->vtable)._194_GetHitboxTime.method);
          fVar72 = 0.19;
        }
      }
    }
label_18218eaf7:
    fVar72 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,fVar72,(__this->klass->vtable)._194_GetHitboxTime.method);
    if (pCVar63 != (Characters_BaseHitbox_o *)0x0) {
label_18218ea6a:
      Characters_BaseHitbox__Activate(pCVar63,fVar65,fVar72,(MethodInfo *)0x0);
      return;
    }
    goto label_1821903eb;
  }
  pCVar34 = (__this->fields).BasicAnimations;
  if (pCVar34 == (Characters_BasicTitanAnimations_o *)0x0) goto label_1821903e5;
  bVar49 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar34->fields).AttackRockThrow,
                      (MethodInfo *)0x0);
  if (!bVar49) {
    return;
  }
  pCVar62 = (__this->fields).BasicCache;
  if (((pCVar62 == (Characters_BasicTitanComponentCache_o *)0x0) ||
      (pCVar63 = (pCVar62->fields).HandRHitbox, pCVar63 == (Characters_BaseHitbox_o *)0x0)) ||
     (pUVar53 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar63,(MethodInfo *)0x0),
     pUVar53 == (UnityEngine_Transform_o *)0x0)) goto label_1821903e5;
  pUVar54 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0)
  ;
  pCVar58 = (Characters_BaseCharacter_o *)0x0;
  uVar16._0_4_ = (pUVar54->fields).x;
  uVar16._4_4_ = (pUVar54->fields).y;
  fVar72 = (pUVar54->fields).z;
  local_128.y = uVar16._4_4_;
  local_128.x = uVar16._4_4_;
  local_128.w = uVar16._4_4_;
  local_128.z = uVar16._4_4_;
  fVar8 = uVar16._4_4_;
  local_res8[0] = fVar72;
  if ((__this->fields).AI == false) {
    pUVar54 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                        ((UnityEngine_Vector3_o *)&local_148,__this,
                         (__this->klass->vtable)._76_GetAimPoint.method);
    fVar68 = (pUVar54->fields).y;
    fVar24 = (pUVar54->fields).z;
    (__this->fields)._rockThrowTarget.fields.x = (pUVar54->fields).x;
    (__this->fields)._rockThrowTarget.fields.y = fVar68;
    (__this->fields)._rockThrowTarget.fields.z = fVar24;
    if (((__this->fields)._currentAttackStage == 0) && (0.1 < fVar65)) {
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_TitanSounds->static_fields->RockPickup,(MethodInfo *)0x0);
      (__this->fields)._currentAttackStage = 1;
      if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
      }
      pSVar61 = TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Rock1;
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      fVar24 = (__this->fields).Size;
      pUVar35 = TypeInfo_UnityEngine_Quaternion->static_fields;
      uVar40._0_4_ = (pUVar35->identityQuaternion).fields.x;
      uVar40._4_4_ = (pUVar35->identityQuaternion).fields.y;
      uVar41._0_4_ = (pUVar35->identityQuaternion).fields.z;
      uVar41._4_4_ = (pUVar35->identityQuaternion).fields.w;
      pSVar55 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      pUVar36 = (__this->fields).Cache;
      if ((pUVar36 == (Utility_BaseComponentCache_o *)0x0) ||
         (pPVar37 = (pUVar36->fields).PhotonView, pPVar37 == (Photon_Pun_PhotonView_o *)0x0)) {
label_1821903ad:
        ThrowNullReferenceException();
      }
      local_res18[0] = (float)(pPVar37->fields).viewIdField;
      pIVar56 = il2cpp_value_box(g_data_184354e08,local_res18);
      if (pSVar55 == (System_Object_array *)0x0) goto label_1821903ad;
      if ((pIVar56 != (Il2CppObject *)0x0) &&
         (pIVar57 = il2cpp_vm_Object_IsInst(pIVar56,(((pSVar55->obj).klass)->_1).element_class),
         pIVar57 == (Il2CppObject *)0x0)) {
        pIVar56 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar56,(MethodInfo *)0x0);
      }
      if ((int)pSVar55->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar55->m_Items[0] = pIVar56;
      Il2CppCodeGenWriteBarrier(pSVar55->m_Items,pIVar56);
      local_158._0_8_ = uVar16;
      local_158.z = fVar72;
      local_148._0_8_ = uVar40;
      local_148._8_8_ = uVar41;
      Spawnables_SpawnableSpawner__Spawn
                (pSVar61,(UnityEngine_Vector3_o *)&local_158,(UnityEngine_Quaternion_o *)&local_148,
                 fVar24 * 1.5,pSVar55,(MethodInfo *)0x0);
    }
  }
  else {
    if (((__this->fields)._currentAttackStage == 0) && (0.1 < fVar65)) {
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_6651A0 *)
                             MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
      pCVar38 = (Characters_BaseCharacter_o *)(__this->fields).TargetEnemy;
      if (pCVar38 != (Characters_BaseCharacter_o *)0x0) {
        bVar32 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
        if (((pCVar38->klass->_2).typeHierarchyDepth < bVar32) ||
           (bVar49 = true,
           (pCVar38->klass->_2).typeHierarchy[(ulonglong)bVar32 - 1] !=
           (Il2CppClass *)TypeInfo_Characters_BaseCharacter)) {
          bVar49 = false;
        }
        if (bVar49) {
          pCVar58 = pCVar38;
        }
      }
      if (__this_01 == (Controllers_BaseTitanAIController_o *)0x0) goto label_1821903e5;
      local_138._0_8_ = uVar16;
      local_138.z = fVar72;
      bVar49 = Controllers_BaseTitanAIController__HasRockThrowLineOfSight
                         (__this_01,(UnityEngine_Vector3_o *)&local_138,pCVar58,(MethodInfo *)0x0);
      if (bVar49) {
        (__this->fields)._rockThrowTargetCharacter = pCVar58;
      }
      else {
        local_138._0_8_ = uVar16;
        local_138.z = fVar72;
        pCVar58 = Controllers_BaseTitanAIController__FindRockThrowTarget
                            (__this_01,(UnityEngine_Vector3_o *)&local_138,true,(MethodInfo *)0x0);
        (__this->fields)._rockThrowTargetCharacter = pCVar58;
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rockThrowTargetCharacter,pCVar58);
      pCVar58 = (__this->fields)._rockThrowTargetCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar49 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar58,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar49) {
        local_138._0_8_ = uVar16;
        local_138.z = fVar72;
        pCVar58 = Controllers_BaseTitanAIController__FindRockThrowTarget
                            (__this_01,(UnityEngine_Vector3_o *)&local_138,false,(MethodInfo *)0x0);
        (__this->fields)._rockThrowTargetCharacter = pCVar58;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._rockThrowTargetCharacter,pCVar58);
      }
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_TitanSounds->static_fields->RockPickup,(MethodInfo *)0x0);
      (__this->fields)._currentAttackStage = 1;
      if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
      }
      pSVar61 = TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Rock1;
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      fVar24 = (__this->fields).Size;
      pUVar35 = TypeInfo_UnityEngine_Quaternion->static_fields;
      uVar42._0_4_ = (pUVar35->identityQuaternion).fields.x;
      uVar42._4_4_ = (pUVar35->identityQuaternion).fields.y;
      uVar43._0_4_ = (pUVar35->identityQuaternion).fields.z;
      uVar43._4_4_ = (pUVar35->identityQuaternion).fields.w;
      pSVar55 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      pUVar36 = (__this->fields).Cache;
      if ((pUVar36 == (Utility_BaseComponentCache_o *)0x0) ||
         (pPVar37 = (pUVar36->fields).PhotonView, pPVar37 == (Photon_Pun_PhotonView_o *)0x0)) {
label_1821903c9:
        ThrowNullReferenceException();
      }
      local_res18[0] = (float)(pPVar37->fields).viewIdField;
      pIVar56 = il2cpp_value_box(g_data_184354e08,local_res18);
      if (pSVar55 == (System_Object_array *)0x0) goto label_1821903c9;
      if ((pIVar56 != (Il2CppObject *)0x0) &&
         (pIVar57 = il2cpp_vm_Object_IsInst(pIVar56,(((pSVar55->obj).klass)->_1).element_class),
         pIVar57 == (Il2CppObject *)0x0)) {
        pIVar56 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar56,(MethodInfo *)0x0);
      }
      if ((int)pSVar55->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar55->m_Items[0] = pIVar56;
      Il2CppCodeGenWriteBarrier(pSVar55->m_Items,pIVar56);
      local_158._0_8_ = uVar16;
      local_158.z = fVar72;
      local_148._0_8_ = uVar42;
      local_148._8_8_ = uVar43;
      Spawnables_SpawnableSpawner__Spawn
                (pSVar61,(UnityEngine_Vector3_o *)&local_158,(UnityEngine_Quaternion_o *)&local_148,
                 fVar24 * 1.5,pSVar55,(MethodInfo *)0x0);
    }
    pCVar58 = (__this->fields)._rockThrowTargetCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar49 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar58,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar49) {
      pCVar58 = (__this->fields)._rockThrowTargetCharacter;
      if (pCVar58 == (Characters_BaseCharacter_o *)0x0) goto label_1821903e5;
      bVar49 = (*(pCVar58->klass->vtable)._73_ValidTarget.methodPtr)
                         (pCVar58,(pCVar58->klass->vtable)._73_ValidTarget.method);
      if (bVar49) {
        pCVar58 = (__this->fields)._rockThrowTargetCharacter;
        if (pCVar58 == (Characters_BaseCharacter_o *)0x0) goto label_1821903e5;
        pUVar54 = (*(pCVar58->klass->vtable)._72_GetPosition.methodPtr)
                            ((UnityEngine_Vector3_o *)&local_148,pCVar58,
                             (pCVar58->klass->vtable)._72_GetPosition.method);
        local_158.x = (pUVar54->fields).x;
        local_158.y = (pUVar54->fields).y;
        local_158.z = (pUVar54->fields).z;
        local_138._0_8_ = uVar16;
        local_138.z = fVar72;
        fVar72 = (float)il2cpp_runtime_helper_180562c80(&local_138,&local_158,0);
        fVar8 = fVar72 / (__this->fields).RockThrow1Speed;
        fVar72 = fVar72 / 120.0;
        if (fVar72 < 0.0) {
          fVar72 = 0.0;
        }
        else if (1.0 < fVar72) {
          fVar72 = 1.0;
        }
        pCVar58 = (__this->fields)._rockThrowTargetCharacter;
        if (pCVar58 == (Characters_BaseCharacter_o *)0x0) goto label_1821903e5;
        pUVar54 = (*(pCVar58->klass->vtable)._72_GetPosition.methodPtr)
                            ((UnityEngine_Vector3_o *)&local_148,pCVar58,
                             (pCVar58->klass->vtable)._72_GetPosition.method);
        pCVar58 = (__this->fields)._rockThrowTargetCharacter;
        if (pCVar58 == (Characters_BaseCharacter_o *)0x0) goto label_1821903e5;
        uVar2 = (pUVar54->fields).x;
        uVar18 = (pUVar54->fields).y;
        fVar24 = (pUVar54->fields).z;
        pUVar54 = Characters_BaseCharacter__GetVelocity
                            ((UnityEngine_Vector3_o *)&local_148,pCVar58,(MethodInfo *)0x0);
        uVar3 = (pUVar54->fields).x;
        uVar19 = (pUVar54->fields).y;
        (__this->fields)._rockThrowTarget.fields.z = fVar8 * (pUVar54->fields).z * fVar72 + fVar24;
        (__this->fields)._rockThrowTarget.fields.x = (float)uVar3 * fVar8 * fVar72 + (float)uVar2;
        (__this->fields)._rockThrowTarget.fields.y = (float)uVar19 * fVar8 * fVar72 + (float)uVar18;
        fVar8 = local_128.x;
        fVar72 = local_res8[0];
      }
    }
  }
  if ((__this->fields).AI == false) {
label_18218dc26:
    pUVar36 = (__this->fields).Cache;
    if ((pUVar36 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar53 = (pUVar36->fields).Transform, pUVar53 == (UnityEngine_Transform_o *)0x0)) goto label_1821903e5;
    pUVar54 = UnityEngine_Transform__get_forward
                        ((UnityEngine_Vector3_o *)&local_148,pUVar53,(MethodInfo *)0x0);
    local_108.x = (pUVar54->fields).x;
    local_108.y = (pUVar54->fields).y;
    fVar24 = (pUVar54->fields).z;
label_18218dc59:
    uVar4 = (__this->fields)._rockThrowTarget.fields.x;
    uVar20 = (__this->fields)._rockThrowTarget.fields.y;
    fVar68 = (float)uVar4 - (float)uVar16;
    fVar69 = (float)uVar20 - uVar16._4_4_;
    fVar8 = (__this->fields)._rockThrowTarget.fields.z - fVar72;
    local_158.y = fVar69;
    local_158.x = fVar68;
    local_158.z = fVar8;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar39 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar72 = (pUVar39->upVector).fields.x;
    fVar70 = (pUVar39->upVector).fields.y;
    fVar66 = (pUVar39->upVector).fields.z;
    if (Il2CppMethodInitialized_18434528c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_18434528c = '\x01';
    }
    fVar67 = fVar70 * fVar70 + fVar72 * fVar72 + fVar66 * fVar66;
    local_res18[0] = fVar69;
    fVar71 = fVar68;
    local_res20 = fVar8;
    if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar67) {
      fVar67 = (fVar70 * fVar69 + fVar72 * fVar68 + fVar66 * fVar8) / fVar67;
      local_res18[0] = fVar69 - fVar70 * fVar67;
      fVar71 = fVar68 - fVar72 * fVar67;
      local_res20 = fVar8 - fVar66 * fVar67;
    }
    local_138.y = local_res18[0];
    local_138.x = fVar71;
    local_138.z = local_res20;
    if ((__this->fields).AI == false) {
      bVar49 = false;
      fVar8 = local_128.x;
      fVar72 = local_res8[0];
    }
    else {
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      local_118.z = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
      fVar72 = local_res8[0];
      if (local_118.z <= 1e-05) {
        pUVar39 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar68 = (pUVar39->zeroVector).fields.x;
        fVar70 = (pUVar39->zeroVector).fields.y;
        local_118.z = (pUVar39->zeroVector).fields.z;
      }
      else {
        fVar70 = fVar69 / local_118.z;
        fVar68 = fVar68 / local_118.z;
        local_118.z = fVar8 / local_118.z;
      }
      fVar8 = local_128.x;
      local_148.y = local_128.x;
      local_148.x = (float)uVar16;
      local_148.z = local_res8[0];
      local_118.y = fVar70;
      local_118.x = fVar68;
      fVar68 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
      bVar49 = Characters_BasicTitan__WouldRockHitSelf
                         (__this,(UnityEngine_Vector3_o *)&local_148,(UnityEngine_Vector3_o *)&local_118,
                          fVar68,(MethodInfo *)0x0);
    }
    (__this->fields)._rockThrowWillHitSelf = bVar49;
    if (bVar49 == false) {
      local_f8 = (__this->fields).RockThrowCloseAimAngle;
      fVar72 = (__this->fields).Size;
      fVar8 = (__this->fields).RockThrowMaxAimAngle;
      fVar68 = (__this->fields).RockThrowCloseAimDistance;
      fVar70 = (__this->fields).RockThrowFullAimDistance;
      fVar66 = (float)il2cpp_runtime_helper_180546a40(&local_138,0);
      fVar70 = fVar72 * fVar70;
      fVar72 = fVar72 * fVar68;
      if ((fVar72 == fVar70) || (fVar72 = (fVar66 - fVar72) / (fVar70 - fVar72), fVar72 < 0.0)) {
        fVar72 = 0.0;
      }
      else if (1.0 < fVar72) {
        fVar72 = 1.0;
      }
      if (fVar72 < 0.0) {
        fVar72 = 0.0;
      }
      else if (1.0 < fVar72) {
        fVar72 = 1.0;
      }
      fVar72 = (fVar8 - local_f8) * fVar72 + local_f8;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_138,0);
      if (fVar8 <= 1e-05) {
        pUVar39 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar71 = (pUVar39->zeroVector).fields.x;
        fVar68 = (pUVar39->zeroVector).fields.y;
        fVar70 = (pUVar39->zeroVector).fields.z;
      }
      else {
        fVar68 = local_res18[0] / fVar8;
        fVar70 = local_res20 / fVar8;
        fVar71 = fVar71 / fVar8;
      }
      local_148.z = fVar70;
      local_148.y = fVar68;
      local_148.x = fVar71;
      local_118.x = local_108.x;
      local_118.y = local_108.y;
      local_118.z = fVar24;
      pUVar54 = UnityEngine_Vector3__Internal_RotateTowards
                          ((UnityEngine_Vector3_o *)&local_158,(UnityEngine_Vector3_o *)&local_118,
                           (UnityEngine_Vector3_o *)&local_148,fVar72 * 0.017453292,0.0,(MethodInfo *)0x0);
      fVar24 = (pUVar54->fields).z;
      fVar68 = (pUVar54->fields).x;
      fVar70 = (pUVar54->fields).y;
      uVar48._0_4_ = (pUVar54->fields).x;
      uVar48._4_4_ = (pUVar54->fields).y;
      local_res18[0] = fVar24;
      fVar66 = (float)il2cpp_runtime_helper_180546a40(&local_138,0);
      fVar72 = local_res8[0];
      fVar8 = local_128.x;
      fVar70 = fVar70 * fVar66 + local_128.x;
      fVar24 = fVar24 * fVar66 + local_res8[0];
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar39 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar71 = (pUVar39->upVector).fields.z;
      fVar67 = (pUVar39->upVector).fields.x;
      pUVar36 = (__this->fields).Cache;
      (__this->fields)._rockThrowTarget.fields.y = fVar69 * (pUVar39->upVector).fields.y + fVar70;
      (__this->fields)._rockThrowTarget.fields.z = fVar69 * fVar71 + fVar24;
      (__this->fields)._rockThrowTarget.fields.x = fVar69 * fVar67 + fVar68 * fVar66 + (float)uVar16;
      if ((pUVar36 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar53 = (pUVar36->fields).Transform, pUVar53 == (UnityEngine_Transform_o *)0x0))
      goto label_1821903e5;
      __this_00 = (pUVar36->fields).Transform;
      pUVar52 = UnityEngine_Transform__get_rotation
                          ((UnityEngine_Quaternion_o *)&local_128,pUVar53,(MethodInfo *)0x0);
      uVar44._0_4_ = (pUVar52->fields).x;
      uVar44._4_4_ = (pUVar52->fields).y;
      uVar45._0_4_ = (pUVar52->fields).z;
      uVar45._4_4_ = (pUVar52->fields).w;
      local_158.z = local_res18[0];
      local_138.x = 0.0;
      local_138.y = 0.0;
      local_138.z = 0.0;
      local_158._0_8_ = uVar48;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar39 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_138.x = (pUVar39->upVector).fields.x;
      local_138.y = (pUVar39->upVector).fields.y;
      local_138.z = (pUVar39->upVector).fields.z;
      pUVar52 = UnityEngine_Quaternion__Internal_LookRotation
                          ((UnityEngine_Quaternion_o *)&local_128,(UnityEngine_Vector3_o *)&local_158,
                           (UnityEngine_Vector3_o *)&local_138,(MethodInfo *)0x0);
      local_128.x = (pUVar52->fields).x;
      local_128.y = (pUVar52->fields).y;
      local_128.z = (pUVar52->fields).z;
      local_128.w = (pUVar52->fields).w;
      local_148._0_8_ = uVar44;
      local_148._8_8_ = uVar45;
      fVar24 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      pUVar52 = UnityEngine_Quaternion__Internal_Lerp
                          ((UnityEngine_Quaternion_o *)&local_118,(UnityEngine_Quaternion_o *)&local_148,
                           (UnityEngine_Quaternion_o *)&local_128,fVar24 * 5.0,(MethodInfo *)0x0);
      local_128.x = (pUVar52->fields).x;
      local_128.y = (pUVar52->fields).y;
      local_128.z = (pUVar52->fields).z;
      local_128.w = (pUVar52->fields).w;
      UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_128,(MethodInfo *)0x0);
    }
  }
  else {
    pCVar58 = (__this->fields)._rockThrowTargetCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar49 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar58,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar49) {
      if ((__this->fields).AI == false) goto label_18218dc26;
      local_108.x = (__this->fields)._rockThrowForward.fields.x;
      local_108.y = (__this->fields)._rockThrowForward.fields.y;
      fVar24 = (__this->fields)._rockThrowForward.fields.z;
      goto label_18218dc59;
    }
  }
  if ((__this->fields)._currentAttackStage != 1) {
    return;
  }
  if (fVar65 <= 0.61) {
    return;
  }
  pUVar36 = (__this->fields).Cache;
  if (pUVar36 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar37 = (pUVar36->fields).PhotonView;
    pSVar55 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (pPVar37 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(pPVar37,"ClearRockRPC",0,pSVar55,(MethodInfo *)0x0);
      if ((__this->fields).AI != false) {
        pCVar58 = (__this->fields)._rockThrowTargetCharacter;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar49 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pCVar58,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar49) {
label_1821900e9:
          (__this->fields)._currentAttackStage = 2;
          return;
        }
        pCVar58 = (__this->fields)._rockThrowTargetCharacter;
        if (pCVar58 == (Characters_BaseCharacter_o *)0x0) goto label_1821903e5;
        bVar49 = (*(pCVar58->klass->vtable)._73_ValidTarget.methodPtr)
                           (pCVar58,(pCVar58->klass->vtable)._73_ValidTarget.method);
        if (!bVar49) goto label_1821900e9;
      }
      iVar51 = UnityEngine_Random__RandomRangeInt(0,2,(MethodInfo *)0x0);
      if (iVar51 == 0) {
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        pSVar61 = TypeInfo_Characters_TitanSounds->static_fields->RockThrow1;
      }
      else {
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        pSVar61 = TypeInfo_Characters_TitanSounds->static_fields->RockThrow2;
      }
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,pSVar61,(MethodInfo *)0x0);
      uVar5 = (__this->fields)._rockThrowTarget.fields.x;
      uVar21 = (__this->fields)._rockThrowTarget.fields.y;
      fVar65 = (__this->fields)._rockThrowTarget.fields.z - fVar72;
      (__this->fields)._currentAttackStage = 2;
      local_148.y = (float)uVar21 - uVar16._4_4_;
      local_148.x = (float)uVar5 - (float)uVar16;
      local_148.z = fVar65;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar24 = (float)il2cpp_runtime_helper_180546a40(&local_148,0);
      if (fVar24 <= 1e-05) {
        pUVar39 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar68 = (pUVar39->zeroVector).fields.x;
        fVar69 = (pUVar39->zeroVector).fields.y;
        fVar65 = (pUVar39->zeroVector).fields.z;
      }
      else {
        fVar68 = ((float)uVar5 - (float)uVar16) / fVar24;
        fVar69 = ((float)uVar21 - uVar16._4_4_) / fVar24;
        fVar65 = fVar65 / fVar24;
      }
      if ((__this->fields).AI != false) {
        if ((__this->fields)._rockThrowWillHitSelf == false) {
          local_148.x = (__this->fields)._rockThrowTarget.fields.x;
          local_148.y = (__this->fields)._rockThrowTarget.fields.y;
          local_148.z = (__this->fields)._rockThrowTarget.fields.z;
          local_158.y = fVar8;
          local_158.x = (float)uVar16;
          local_138.y = fVar69;
          local_138.x = fVar68;
          local_108.y = fVar8;
          local_108.x = (float)uVar16;
          local_158.z = fVar72;
          local_138.z = fVar65;
          local_108.z = fVar72;
          fVar24 = (float)il2cpp_runtime_helper_180562c80(&local_158,&local_148,0);
          bVar49 = Characters_BasicTitan__WouldRockHitSelf
                             (__this,(UnityEngine_Vector3_o *)&local_108,(UnityEngine_Vector3_o *)&local_138,
                              fVar24,(MethodInfo *)0x0);
          if (!bVar49) goto label_18218e417;
        }
        (*(__this->klass->vtable)._154_Stun.methodPtr)(__this,(__this->klass->vtable)._154_Stun.method);
        return;
      }
label_18218e417:
      if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
      }
      local_158.y = fVar69;
      local_158.x = fVar68;
      pSVar61 = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1;
      local_158.z = fVar65;
      puVar59 = (undefined8 *)il2cpp_runtime_helper_181db9340(&local_128,&local_158,0);
      fVar24 = (__this->fields).RockThrow1Speed;
      uVar46 = *puVar59;
      uVar47 = puVar59[1];
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar36 = (__this->fields).Cache;
      if ((pUVar36 != (Utility_BaseComponentCache_o *)0x0) &&
         (pPVar37 = (pUVar36->fields).PhotonView, pPVar37 != (Photon_Pun_PhotonView_o *)0x0)) {
        iVar51 = (pPVar37->fields).viewIdField;
        pUVar39 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar17._0_4_ = (pUVar39->zeroVector).fields.x;
        uVar17._4_4_ = (pUVar39->zeroVector).fields.y;
        fVar70 = (pUVar39->zeroVector).fields.z;
        pSVar55 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        local_res8[0] = (__this->fields).Size * 1.5;
        pIVar56 = il2cpp_value_box(g_data_184354e38,local_res8);
        if (pSVar55 != (System_Object_array *)0x0) {
          if ((pIVar56 != (Il2CppObject *)0x0) &&
             (pIVar57 = il2cpp_vm_Object_IsInst(pIVar56,(((pSVar55->obj).klass)->_1).element_class),
             pIVar57 == (Il2CppObject *)0x0)) {
            pIVar56 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar56,(MethodInfo *)0x0);
          }
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar55,0,pIVar56);
          local_148.z = fVar70;
          local_158.z = fVar65 * fVar24;
          local_158.y = fVar69 * fVar24;
          local_158.x = fVar68 * fVar24;
          local_118.y = fVar8;
          local_118.x = (float)uVar16;
          local_148._0_8_ = uVar17;
          local_128._0_8_ = uVar46;
          local_128._8_8_ = uVar47;
          local_118.z = fVar72;
          Projectiles_ProjectileSpawner__Spawn
                    (pSVar61,(UnityEngine_Vector3_o *)&local_118,(UnityEngine_Quaternion_o *)&local_128,
                     (UnityEngine_Vector3_o *)&local_158,(UnityEngine_Vector3_o *)&local_148,10.0,iVar51,
                     "",pSVar55,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_1821903e5:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$WouldRockHitSelf
// il2cpp: bool Characters_BasicTitan__WouldRockHitSelf (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o hand, UnityEngine_Vector3_o direction, float distance, const MethodInfo* method);
// 0x182191e90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182192187: mov al, 1
// asm:   0x182192189: jmp 0x1821920bd

bool Characters_BasicTitan__WouldRockHitSelf
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *hand,UnityEngine_Vector3_o *direction,
               float distance,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  Characters_BasicTitanComponentCache_o *pCVar7;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_CapsuleCollider_o *__this_01;
  Utility_BaseComponentCache_o *pUVar8;
  bool bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Ray_o local_c8;
  UnityEngine_RaycastHit_o local_a8 [3];
  
  if (Il2CppMethodInitialized_184346e07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346e07 = '\x01';
  }
  pCVar7 = (__this->fields).BasicCache;
  local_a8[0].fields.m_Normal.fields.y = 0.0;
  local_a8[0].fields.m_Normal.fields.z = 0.0;
  local_a8[0].fields.m_FaceID = 0;
  local_a8[0].fields.m_Distance = 0.0;
  local_a8[0].fields.m_UV.fields.x = 0.0;
  local_a8[0].fields.m_UV.fields.y = 0.0;
  local_a8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_a8[0].fields.m_Point.fields.x = 0.0;
  local_a8[0].fields.m_Point.fields.y = 0.0;
  local_a8[0].fields.m_Point.fields.z = 0.0;
  local_a8[0].fields.m_Normal.fields.x = 0.0;
  if (pCVar7 != (Characters_BasicTitanComponentCache_o *)0x0) {
    __this_00 = (pCVar7->fields).Movebox;
    local_c8.fields.m_Origin.fields.x = (hand->fields).x;
    local_c8.fields.m_Origin.fields.y = (hand->fields).y;
    fVar15 = (direction->fields).x;
    fVar13 = (direction->fields).y;
    fVar14 = (direction->fields).z;
    local_c8.fields.m_Direction.fields.y = (direction->fields).y;
    local_c8.fields.m_Direction.fields.z = (direction->fields).z;
    local_c8.fields.m_Direction.fields.x = fVar15;
    local_c8.fields.m_Origin.fields.z = (hand->fields).z;
    fVar12 = (float)il2cpp_runtime_helper_180546a40(&local_c8.fields.m_Direction,0);
    if (1e-05 < fVar12) {
      fVar13 = fVar13 / fVar12;
      local_c8.fields.m_Direction.fields.x = fVar15 / fVar12;
      fVar14 = fVar14 / fVar12;
    }
    else {
      fVar13 = 0.0;
      local_c8.fields._8_8_ = local_c8.fields._8_8_ & 0xffffffff;
      fVar14 = 0.0;
    }
    if (__this_00 != (UnityEngine_Collider_o *)0x0) {
      local_c8.fields.m_Direction.fields.z = fVar14;
      local_c8.fields.m_Direction.fields.y = fVar13;
      bVar9 = UnityEngine_Collider__Raycast_2fdcc50(__this_00,&local_c8,local_a8,distance,(MethodInfo *)0x0);
      if (bVar9) {
        return true;
      }
      pCVar7 = (__this->fields).BasicCache;
      if (pCVar7 != (Characters_BasicTitanComponentCache_o *)0x0) {
        __this_01 = (UnityEngine_CapsuleCollider_o *)(pCVar7->fields).Movebox;
        if (__this_01 != (UnityEngine_CapsuleCollider_o *)0x0) {
          bVar6 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar6) ||
             ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar6 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
        }
        uVar2 = (direction->fields).x;
        uVar4 = (direction->fields).y;
        uVar3 = (hand->fields).x;
        uVar5 = (hand->fields).y;
        fVar15 = (float)uVar4 * distance + (float)uVar5;
        if (__this_01 != (UnityEngine_CapsuleCollider_o *)0x0) {
          fVar13 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
          pUVar10 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            pUVar11 = UnityEngine_Transform__get_lossyScale
                                ((UnityEngine_Vector3_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
            fVar14 = (pUVar11->fields).x;
            pUVar10 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              pUVar11 = UnityEngine_Transform__get_lossyScale
                                  ((UnityEngine_Vector3_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
              if (fVar15 < (hand->fields).y) {
                pUVar8 = (__this->fields).Cache;
                if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar10 = (pUVar8->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
                goto label_18219218e;
                fVar12 = (pUVar11->fields).z;
                if (fVar14 <= fVar12) {
                  fVar14 = fVar12;
                }
                fVar12 = (direction->fields).z;
                fVar1 = (hand->fields).z;
                pUVar11 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
                local_d8.x = (pUVar11->fields).x;
                local_d8.y = (pUVar11->fields).y;
                local_d8.z = (pUVar11->fields).z;
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                local_c8.fields.m_Origin.fields.z = distance * fVar12 + fVar1;
                local_c8.fields.m_Origin.fields.y = fVar15;
                local_c8.fields.m_Origin.fields.x = (float)uVar2 * distance + (float)uVar3;
                fVar15 = Utility_Util__DistanceIgnoreY
                                   ((UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_d8,
                                    (MethodInfo *)0x0);
                bVar9 = fVar15 <= fVar14 * fVar13 * 1.5;
              }
              else {
                bVar9 = false;
              }
              return bVar9;
            }
          }
        }
      }
    }
  }
label_18219218e:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateEat
// il2cpp: void Characters_BasicTitan__UpdateEat (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182190c00

void Characters_BasicTitan__UpdateEat(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184346e08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"TitanEat");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346e08 = '\x01';
  }
  if ((__this->fields).State != 0x1b) {
    pCVar1 = (__this->fields).HoldHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar2) && (4.72 < (__this->fields)._stateTimeLeft)) {
      (*(__this->klass->vtable)._164_IdleWait.methodPtr)
                (__this,0.5,(__this->klass->vtable)._164_IdleWait.method);
      return;
    }
  }
  if (((__this->fields).State != 0x1b) && ((__this->fields)._stateTimeLeft <= 4.72)) {
    pCVar1 = (__this->fields).HoldHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      iVar3 = 100;
      if ((__this->fields).CustomDamageEnabled != false) {
        iVar3 = (__this->fields).CustomDamage;
      }
      pCVar1 = (__this->fields).HoldHuman;
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_182190de6;
      il2cpp_runtime_helper_18017a990(0x5f,pCVar1,__this,iVar3,"TitanEat","");
    }
  }
  if ((__this->fields).AI == false) {
    pCVar1 = (__this->fields).HoldHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).HoldHuman;
      if (pCVar1 == (Characters_Human_o *)0x0) {
label_182190de6:
        ThrowNullReferenceException();
      }
      if (((pCVar1->fields).Dead == false) && ((__this->fields).HoldHumanLeft == false)) {
        bVar2 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
        if ((bVar2) || ((__this->fields).State == 0x1b)) {
          Characters_BasicTitan__UpdateThrowHuman(__this,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Characters.BasicTitan$$UpdateThrowHuman
// il2cpp: void Characters_BasicTitan__UpdateThrowHuman (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821915a0

void Characters_BasicTitan__UpdateThrowHuman(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_BasicTitanAnimations_o *pCVar5;
  Characters_AnimationHandler_o *pCVar6;
  System_String_o *name;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  Characters_BasicTitanComponentCache_o *pCVar9;
  Characters_BaseHitbox_o *__this_00;
  Characters_Human_o *__this_01;
  Photon_Realtime_Player_o *targetPlayer;
  undefined8 uVar10;
  ulonglong uVar11;
  bool bVar12;
  UnityEngine_Vector3_o *pUVar13;
  UnityEngine_Quaternion_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  Photon_Pun_PhotonView_o *pPVar16;
  UnityEngine_Object_o *x;
  Photon_Pun_PhotonView_o *pPVar17;
  System_Object_array *parameters;
  Il2CppObject *pIVar18;
  Il2CppObject *pIVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_88;
  float local_80;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68;
  UnityEngine_Quaternion_o local_58 [5];
  
  if (Il2CppMethodInitialized_184346e09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"BlowAwayRPC");
    Il2CppMethodInitialized_184346e09 = '\x01';
  }
  if ((__this->fields).State != 0x1b) {
    pCVar5 = (__this->fields).BasicAnimations;
    if ((pCVar5 == (Characters_BasicTitanAnimations_o *)0x0) ||
       (pCVar6 = (__this->fields).Animation, pCVar6 == (Characters_AnimationHandler_o *)0x0))
    goto label_182191b4a;
    name = (pCVar5->fields).AttackRockThrow;
    fVar20 = Characters_AnimationHandler__GetLength(pCVar6,name,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = true;
    pCVar6 = (__this->fields).Animation;
    if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto label_182191b4a;
    Characters_AnimationHandler__SetCullingType(pCVar6,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,name,0.1,0.0,(MethodInfo *)0x0);
    (__this->fields).State = 0x1b;
    (__this->fields)._currentStateAnimation = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,name);
    (__this->fields)._stateTimeLeft = fVar20;
  }
  pUVar13 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                      ((UnityEngine_Vector3_o *)&local_68,__this,
                       (__this->klass->vtable)._76_GetAimPoint.method);
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar15 = (pUVar7->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
    fVar20 = (pUVar13->fields).x;
    fVar22 = (pUVar13->fields).z;
    pUVar13 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_68,pUVar15,(MethodInfo *)0x0);
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar15 = (pUVar7->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
      fVar23 = (pUVar13->fields).y;
      pUVar13 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_68,pUVar15,(MethodInfo *)0x0);
      fVar20 = fVar20 - (pUVar13->fields).x;
      fVar23 = fVar23 - (pUVar13->fields).y;
      fVar22 = fVar22 - (pUVar13->fields).z;
      local_88 = CONCAT44(fVar23,fVar20);
      local_80 = fVar22;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar21 = (float)il2cpp_runtime_helper_180546a40(&local_88,0);
      if (fVar21 <= 1e-05) {
        pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar20 = (pUVar8->zeroVector).fields.x;
        fVar23 = (pUVar8->zeroVector).fields.y;
        fVar22 = (pUVar8->zeroVector).fields.z;
      }
      else {
        fVar20 = fVar20 / fVar21;
        fVar23 = fVar23 / fVar21;
        fVar22 = fVar22 / fVar21;
      }
      pUVar7 = (__this->fields).Cache;
      if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar15 = (pUVar7->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
        pUVar14 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)&local_68,pUVar15,(MethodInfo *)0x0);
        uVar10._0_4_ = (pUVar14->fields).x;
        uVar10._4_4_ = (pUVar14->fields).y;
        uVar11._0_4_ = (pUVar14->fields).z;
        uVar11._4_4_ = (pUVar14->fields).w;
        local_68.z = fVar22;
        local_68.y = fVar23;
        local_68.x = fVar20;
        local_78.x = 0.0;
        local_78.y = 0.0;
        local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_78.x = (pUVar8->upVector).fields.x;
        local_78.y = (pUVar8->upVector).fields.y;
        local_78.z = (pUVar8->upVector).fields.z;
        pUVar14 = UnityEngine_Quaternion__Internal_LookRotation
                            (local_58,(UnityEngine_Vector3_o *)&local_68,(UnityEngine_Vector3_o *)&local_78,
                             (MethodInfo *)0x0);
        local_68.x = (pUVar14->fields).x;
        local_68.y = (pUVar14->fields).y;
        local_68.z = (pUVar14->fields).z;
        local_68.w = (pUVar14->fields).w;
        local_78._0_8_ = uVar10;
        local_78._8_8_ = uVar11;
        fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        pUVar14 = UnityEngine_Quaternion__Internal_Lerp
                            (local_58,(UnityEngine_Quaternion_o *)&local_78,
                             (UnityEngine_Quaternion_o *)&local_68,fVar20 * 5.0,(MethodInfo *)0x0);
        local_68.x = (pUVar14->fields).x;
        local_68.y = (pUVar14->fields).y;
        local_68.z = (pUVar14->fields).z;
        local_68.w = (pUVar14->fields).w;
        UnityEngine_Transform__set_rotation(pUVar15,(UnityEngine_Quaternion_o *)&local_68,(MethodInfo *)0x0);
        fVar20 = (*(__this->klass->vtable)._193_GetAnimationTime.methodPtr)
                           (__this,(__this->klass->vtable)._193_GetAnimationTime.method);
        if (fVar20 <= 0.61) {
          return;
        }
        pCVar9 = (__this->fields).BasicCache;
        if ((pCVar9 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (__this_00 = (pCVar9->fields).HandRHitbox, __this_00 != (Characters_BaseHitbox_o *)0x0)) {
          __this_01 = (__this->fields).HoldHuman;
          pUVar15 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
            pUVar13 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_68,pUVar15,(MethodInfo *)0x0);
            uVar1 = (pUVar13->fields).x;
            uVar3 = (pUVar13->fields).y;
            fVar20 = (pUVar13->fields).z;
            pUVar13 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                                ((UnityEngine_Vector3_o *)&local_68,__this,
                                 (__this->klass->vtable)._76_GetAimPoint.method);
            uVar2 = (pUVar13->fields).x;
            uVar4 = (pUVar13->fields).y;
            fVar20 = (pUVar13->fields).z - fVar20;
            local_88 = CONCAT44((float)uVar4 - (float)uVar3,(float)uVar2 - (float)uVar1);
            local_80 = fVar20;
            if (Il2CppMethodInitialized_18433de5f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5f = '\x01';
            }
            fVar22 = (float)il2cpp_runtime_helper_180546a40(&local_88,0);
            if (fVar22 <= 1e-05) {
              pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar23 = (pUVar8->zeroVector).fields.x;
              fVar21 = (pUVar8->zeroVector).fields.y;
              fVar20 = (pUVar8->zeroVector).fields.z;
            }
            else {
              fVar23 = ((float)uVar2 - (float)uVar1) / fVar22;
              fVar21 = ((float)uVar4 - (float)uVar3) / fVar22;
              fVar20 = fVar20 / fVar22;
            }
            (*(__this->klass->vtable)._173_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._173_Ungrab.method);
            if ((__this_01 != (Characters_Human_o *)0x0) &&
               (pPVar16 = Photon_Pun_MonoBehaviourPun__get_photonView
                                    ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0),
               pPVar16 != (Photon_Pun_PhotonView_o *)0x0)) {
              x = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar16,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (!bVar12) {
                return;
              }
              pPVar16 = Photon_Pun_MonoBehaviourPun__get_photonView
                                  ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0);
              pPVar17 = Photon_Pun_MonoBehaviourPun__get_photonView
                                  ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0);
              if (pPVar17 != (Photon_Pun_PhotonView_o *)0x0) {
                targetPlayer = (pPVar17->fields)._Owner_k__BackingField;
                parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
                local_78.y = fVar21 * 150.0;
                local_78.x = fVar23 * 150.0;
                local_78.z = fVar20 * 150.0;
                pIVar18 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_78);
                if (parameters != (System_Object_array *)0x0) {
                  if ((pIVar18 != (Il2CppObject *)0x0) &&
                     (pIVar19 = il2cpp_vm_Object_IsInst(pIVar18,(((parameters->obj).klass)->_1).element_class)
                     , pIVar19 == (Il2CppObject *)0x0)) {
                    pIVar18 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar18,(MethodInfo *)0x0);
                  }
                  if ((int)parameters->max_length == 0) {
                    ThrowIndexOutOfRangeException();
                  }
                  parameters->m_Items[0] = pIVar18;
                  Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar18);
                  if (pPVar16 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC_1d4d8d0
                              (pPVar16,"BlowAwayRPC",targetPlayer,parameters,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              ThrowNullReferenceException();
            }
          }
        }
      }
    }
  }
label_182191b4a:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Blind
// il2cpp: void Characters_BasicTitan__Blind (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821848a0

void Characters_BasicTitan__Blind(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackBellyFlop,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_182184983;
      bVar2 = System_String__op_Equality
                        ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackBellyFlopGetup,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        if ((__this->fields).IsCrawler == false) {
          Characters_BaseTitan__Blind((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
          return;
        }
        if (((__this->fields).State != 0x10) && ((__this->fields).AI != false)) {
          pCVar1 = (__this->fields).BasicAnimations;
          if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
            Characters_BaseTitan__StateAction
                      ((Characters_BaseTitan_o *)__this,0x10,(pCVar1->fields).BlindCrawler,0.1,true,
                       (MethodInfo *)0x0);
            (*(__this->klass->vtable)._195_DamagedGrunt.methodPtr)
                      (__this,1.0,(__this->klass->vtable)._195_DamagedGrunt.method);
            return;
          }
          goto label_182184983;
        }
      }
    }
    return;
  }
label_182184983:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetSitIdleAniamtion
// il2cpp: System_String_o* Characters_BasicTitan__GetSitIdleAniamtion (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182187410

System_String_o *
Characters_BasicTitan__GetSitIdleAniamtion(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  System_String_o *pSVar3;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar1->klass->vtable)._14_get_SitIdle.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._14_get_SitIdle.method);
      return pSVar3;
    }
  }
  else {
    pCVar2 = (__this->fields).BasicAnimations;
    if (pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) {
      return (pCVar2->fields).SitIdleCrawler;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetSitFallAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetSitFallAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821873c0

System_String_o *
Characters_BasicTitan__GetSitFallAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  System_String_o *pSVar3;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar1->klass->vtable)._17_get_SitFall.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._17_get_SitFall.method);
      return pSVar3;
    }
  }
  else {
    pCVar2 = (__this->fields).BasicAnimations;
    if (pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) {
      return (pCVar2->fields).SitFallCrawler;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetSitUpAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetSitUpAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182187460

System_String_o * Characters_BasicTitan__GetSitUpAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  System_String_o *pSVar3;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar1->klass->vtable)._16_get_SitUp.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._16_get_SitUp.method);
      return pSVar3;
    }
  }
  else {
    pCVar2 = (__this->fields).BasicAnimations;
    if (pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) {
      return (pCVar2->fields).SitUpCrawler;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Cripple
// il2cpp: void Characters_BasicTitan__Cripple (Characters_BasicTitan_o* __this, float time, const MethodInfo* method);
// 0x1821852e0

void Characters_BasicTitan__Cripple(Characters_BasicTitan_o *__this,float time,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  Characters_BaseTitanAnimations_o *pCVar3;
  bool bVar4;
  System_String_o *pSVar5;
  float fVar6;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar2 = (__this->fields).BasicAnimations;
    if (pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) {
      bVar4 = System_String__op_Equality
                        ((__this->fields)._currentStateAnimation,(pCVar2->fields).AttackBellyFlop,
                         (MethodInfo *)0x0);
      if (!bVar4) {
        pCVar2 = (__this->fields).BasicAnimations;
        if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_182185520;
        bVar4 = System_String__op_Equality
                          ((__this->fields)._currentStateAnimation,(pCVar2->fields).AttackBellyFlopGetup,
                           (MethodInfo *)0x0);
        if (!bVar4) {
          if (Il2CppMethodInitialized_184346dad == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"");
            Il2CppMethodInitialized_184346dad = '\x01';
          }
          pCVar3 = (__this->fields).BaseTitanAnimations;
          if (pCVar3 == (Characters_BaseTitanAnimations_o *)0x0) goto label_182185520;
          pSVar5 = (*(pCVar3->klass->vtable)._17_get_SitFall.methodPtr)
                             (pCVar3,(pCVar3->klass->vtable)._17_get_SitFall.method);
          bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
          if ((((bVar4) && ((__this->fields).State != 0x11)) && ((__this->fields).AI != false)) &&
             ((__this->fields)._disableCooldownLeft <= 0.0)) {
            if (time <= 0.0) {
              time = (*(__this->klass->vtable)._121_get_DefaultCrippleTime.methodPtr)
                               (__this,(__this->klass->vtable)._121_get_DefaultCrippleTime.method);
            }
            (__this->fields)._currentCrippleTime = time;
            pCVar3 = (__this->fields).BaseTitanAnimations;
            if (pCVar3 == (Characters_BaseTitanAnimations_o *)0x0) goto label_182185520;
            pSVar5 = (*(pCVar3->klass->vtable)._17_get_SitFall.methodPtr)
                               (pCVar3,(pCVar3->klass->vtable)._17_get_SitFall.method);
            Characters_BaseTitan__StateAction
                      ((Characters_BaseTitan_o *)__this,0x13,pSVar5,0.1,true,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._195_DamagedGrunt.methodPtr)
                      (__this,1.0,(__this->klass->vtable)._195_DamagedGrunt.method);
            fVar1 = (__this->fields)._currentCrippleTime;
            fVar6 = (*(__this->klass->vtable)._135_get_DisableCooldown.methodPtr)
                              (__this,(__this->klass->vtable)._135_get_DisableCooldown.method);
            (__this->fields)._disableCooldownLeft = fVar6 + fVar1;
          }
        }
      }
      return;
    }
  }
  else {
    if ((__this->fields).State == 0x11) {
      return;
    }
    if ((__this->fields).AI == false) {
      return;
    }
    if (time <= 0.0) {
      time = (*(__this->klass->vtable)._121_get_DefaultCrippleTime.methodPtr)
                       (__this,(__this->klass->vtable)._121_get_DefaultCrippleTime.method);
    }
    (__this->fields)._currentCrippleTime = time;
    pCVar2 = (__this->fields).BasicAnimations;
    if (pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) {
      Characters_BaseTitan__StateAction
                ((Characters_BaseTitan_o *)__this,0x13,(pCVar2->fields).SitFallCrawler,0.1,true,
                 (MethodInfo *)0x0);
      (*(__this->klass->vtable)._195_DamagedGrunt.methodPtr)
                (__this,1.0,(__this->klass->vtable)._195_DamagedGrunt.method);
      return;
    }
  }
label_182185520:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$RegenerateWardedWeakSpot
// il2cpp: void Characters_BasicTitan__RegenerateWardedWeakSpot (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218b350

void Characters_BasicTitan__RegenerateWardedWeakSpot(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [8];
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184346e0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WardedWeakSpot);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWardedRPC");
    Il2CppMethodInitialized_184346e0a = '\x01';
  }
  if ((((__this->fields).isWarded == false) || ((__this->fields).CurrentWardedWeakSpot != 0)) ||
     (((__this->fields).LastWardedWeakSpot != 3 && ((__this->fields).LastWardedWeakSpot != 4)))) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    local_res8[0] = (__this->fields).isWarded;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
        local_res18[0] = (__this->fields).LastWardedWeakSpot;
        pIVar2 = il2cpp_value_box((Il2CppClass *)TypeInfo_Characters_WardedWeakSpot,local_res18);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar2);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"SetWardedRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_18218b4d5;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18218b4d5:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$OnHit
// il2cpp: void Characters_BasicTitan__OnHit (Characters_BasicTitan_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x18218aa40
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18218acf2: mov rsi, rdi
// asm:   0x18218acf5: jmp 0x18218acf9
// asm:   0x18218aeda: movzx eax, byte ptr [rsp + 0xa8]
// asm:   0x18218aee2: mov r9, r15
// asm:   0x18218aee5: mov qword ptr [rsp + 0x30], 0
// asm:   0x18218aeee: mov r8, rsi
// asm:   0x18218aef1: mov byte ptr [rsp + 0x28], al
// asm:   0x18218aef5: mov rdx, rbp
// asm:   0x18218aef8: mov rcx, rbx
// asm:   0x18218aefb: mov dword ptr [rsp + 0x20], r14d
// asm:   0x18218af00: call 0x18217ee90  ; Characters_BaseTitan__OnHitTitan()
// asm:   0x18218af05: jmp 0x18218ae54

void Characters_BasicTitan__OnHit
               (Characters_BasicTitan_o *__this,Characters_BaseHitbox_o *hitbox,Il2CppObject *victim,
               UnityEngine_Collider_o *collider,System_String_o *type,bool firstHit,MethodInfo *method)

{
  byte bVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *pCVar3;
  Il2CppClass *pIVar4;
  Characters_Human_o *x;
  UI_InGameMenu_o *__this_00;
  bool bVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Characters_BaseTitan_o *victim_00;
  int32_t score;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28;
  
  if (Il2CppMethodInitialized_184346e0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GrabRight");
    il2cpp_codegen_initialize_runtime_metadata(&"GrabLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_184346e0b = '\x01';
  }
  pCVar2 = (__this->fields).BasicCache;
  if (pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218afd9;
  pCVar3 = (pCVar2->fields).HandLHitbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)hitbox,(UnityEngine_Object_o *)pCVar3,(MethodInfo *)0x0);
  if (bVar5) {
    if ((__this->fields).LeftArmDisabled != false) {
      return;
    }
    if ((__this->fields).LeftHandDisabled != false) {
      return;
    }
  }
  pCVar2 = (__this->fields).BasicCache;
  if (pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218afd9;
  pCVar3 = (pCVar2->fields).HandRHitbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)hitbox,(UnityEngine_Object_o *)pCVar3,(MethodInfo *)0x0);
  if (bVar5) {
    if ((__this->fields).RightArmDisabled != false) {
      return;
    }
    if ((__this->fields).RightHandDisabled != false) {
      return;
    }
  }
  score = 100;
  if ((__this->fields).CustomDamageEnabled != false) {
    score = (__this->fields).CustomDamage;
  }
  if (victim == (Il2CppObject *)0x0) {
    victim_00 = (Characters_BaseTitan_o *)0x0;
  }
  else {
    pIVar4 = victim->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar4->_2).typeHierarchyDepth) &&
       ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
      if (hitbox != (Characters_BaseHitbox_o *)0x0) {
        pSVar8 = (__this->fields).RichTextName;
        __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = UnityEngine_Transform__get_position(&local_28,__this_01,(MethodInfo *)0x0);
          pIVar4 = victim->klass;
          bVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
          if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
             ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
            il2cpp_codegen_raise_invalid_cast_exception
                      (victim,TypeInfo_CustomLogic_CustomLogicCollisionHandler);
          }
          local_38.x = (pUVar6->fields).x;
          local_38.y = (pUVar6->fields).y;
          local_38.z = (pUVar6->fields).z;
          bVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
          if ((bVar1 <= (pIVar4->_2).typeHierarchyDepth) &&
             ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      ((CustomLogic_CustomLogicCollisionHandler_o *)victim,
                       (Characters_BaseCharacter_o *)__this,pSVar8,score,type,
                       (UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(victim,TypeInfo_CustomLogic_CustomLogicCollisionHandler)
          ;
        }
      }
      goto label_18218afd9;
    }
    bVar1 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
    if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
       (victim_00 = (Characters_BaseTitan_o *)victim,
       (pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseCharacter))
    {
      il2cpp_codegen_raise_invalid_cast_exception(victim);
    }
  }
  if (((__this->fields).State == 10) &&
     (bVar5 = (*(__this->klass->vtable)._139_IsGrabAttack.methodPtr)
                        (__this,(__this->klass->vtable)._139_IsGrabAttack.method), bVar5)) {
    if (victim != (Il2CppObject *)0x0) {
      pIVar4 = victim->klass;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar4->_2).typeHierarchyDepth) &&
         ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
          il2cpp_codegen_raise_invalid_cast_exception(victim);
        }
        x = (__this->fields).HoldHuman;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!firstHit || !bVar5) {
          return;
        }
        if (*(char *)&victim[7].klass != '\0') {
          return;
        }
        pCVar2 = (__this->fields).BasicCache;
        if (pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218afd9;
        pCVar3 = (pCVar2->fields).HandLHitbox;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)hitbox,(UnityEngine_Object_o *)pCVar3,(MethodInfo *)0x0);
        (__this->fields).HoldHumanLeft = bVar5;
        if (collider == (UnityEngine_Collider_o *)0x0) goto label_18218afd9;
        if (bVar5) {
          pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
          pSVar8 = "GrabLeft";
        }
        else {
          pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
          pSVar8 = "GrabRight";
        }
        score = 0;
        victim_00 = (Characters_BaseTitan_o *)victim;
        goto label_18218ae4f;
      }
label_18218ae7e:
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (victim->klass->_2).typeHierarchyDepth) &&
         ((victim->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        if (victim_00 != (Characters_BaseTitan_o *)0x0) {
          bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
          if (((victim_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((victim_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
            il2cpp_codegen_raise_invalid_cast_exception(victim_00);
          }
        }
        Characters_BaseTitan__OnHitTitan
                  ((Characters_BaseTitan_o *)__this,hitbox,victim_00,collider,score,firstHit,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
  else if (victim != (Il2CppObject *)0x0) goto label_18218ae7e;
  if (!firstHit) {
    return;
  }
  if (victim_00 != (Characters_BaseTitan_o *)0x0) {
    if ((victim_00->fields).Dead != false) {
      return;
    }
    bVar5 = Characters_BaseCharacter__IsMainCharacter((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if (bVar5) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_18218afd9;
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
      }
      UI_InGameMenu__ShowKillScore(__this_00,score,false,(MethodInfo *)0x0);
    }
    if (collider != (UnityEngine_Collider_o *)0x0) {
      pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
      pSVar8 = "Titan";
label_18218ae4f:
      il2cpp_runtime_helper_18017a990(0x5f,victim_00,__this,score,pSVar8,pSVar7);
      return;
    }
  }
label_18218afd9:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$OnNotifyDie
// il2cpp: void Characters_BasicTitan__OnNotifyDie (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* killer, const MethodInfo* method);
// 0x18218b020

void Characters_BasicTitan__OnNotifyDie
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *killer,MethodInfo *method)

{
  byte bVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_ParticleSystem_o *__this_00;
  
  if (Il2CppMethodInitialized_184346e0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184346e0c = '\x01';
  }
  if (killer != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (killer->klass->_2).typeHierarchyDepth) &&
       ((killer->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      pCVar2 = (__this->fields).BasicCache;
      if ((pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (__this_00 = (pCVar2->fields).NapeBlood, __this_00 == (UnityEngine_ParticleSystem_o *)0x0)) {
        ThrowNullReferenceException();
      }
      UnityEngine_ParticleSystem__Stop(__this_00,true,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.BasicTitan$$get_TreatAsSmall
// il2cpp: bool Characters_BasicTitan__get_TreatAsSmall (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182192890

bool
Characters_BasicTitan__get_TreatAsSmall(Characters_BasicTitan_o* __this, MethodInfo* method)

{
  return (__this->fields).IsCrawler;
}


// Characters.BasicTitan$$OnFinisherKill
// il2cpp: void Characters_BasicTitan__OnFinisherKill (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o direction, bool launch, bool decapitate, const MethodInfo* method);
// 0x18218a9a0

void Characters_BasicTitan__OnFinisherKill
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *direction,bool launch,bool decapitate,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (launch) {
    fVar5 = (*(__this->klass->vtable)._126_get_LaunchForce.methodPtr)
                      (__this,(__this->klass->vtable)._126_get_LaunchForce.method);
    fVar5 = fVar5 / (__this->fields).Size;
    uVar1 = (direction->fields).x;
    uVar3 = (direction->fields).y;
    (__this->fields)._finisherDeathVelocity.fields.z = fVar5 * (direction->fields).z;
    (__this->fields)._finisherDeathVelocity.fields.x = (float)uVar1 * fVar5;
    (__this->fields)._finisherDeathVelocity.fields.y = (float)uVar3 * fVar5;
  }
  if (decapitate) {
    uVar2 = (direction->fields).x;
    uVar4 = (direction->fields).y;
    (__this->fields)._headLaunchVelocity.fields.x = (float)uVar2 * 45.0;
    (__this->fields)._headLaunchVelocity.fields.y = (float)uVar4 * 45.0;
    (__this->fields)._headLaunchVelocity.fields.z = (direction->fields).z * 45.0;
  }
  return;
}


// Characters.BasicTitan$$DetachHead
// il2cpp: void Characters_BasicTitan__DetachHead (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821858b0

void Characters_BasicTitan__DetachHead(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_184346e0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"DetachHeadRPC");
    Il2CppMethodInitialized_184346e0d = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Decapitate,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_10 = (__this->fields)._headLaunchVelocity.fields.z;
    local_18._0_4_ = (__this->fields)._headLaunchVelocity.fields.x;
    local_18._4_4_ = (__this->fields)._headLaunchVelocity.fields.y;
    pIVar2 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"DetachHeadRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$DetachHeadRPC
// il2cpp: void Characters_BasicTitan__DetachHeadRPC (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o launch, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182185530
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18218570d: mov rbp, rbx
// asm:   0x182185710: movaps xmm8, xmm3

void Characters_BasicTitan__DetachHeadRPC
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *launch,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Utility_BaseComponentCache_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  Characters_BasicTitanComponentCache_o *pCVar9;
  Settings_GraphicsSettings_o *pSVar10;
  Settings_BoolSetting_o *pSVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_SkinnedMeshRenderer_o *source;
  UnityEngine_Vector3_o *pUVar13;
  System_Object_array *pSVar14;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  uint uVar15;
  UnityEngine_ParticleSystem_o *pUVar16;
  char cVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_184346e0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    Il2CppMethodInitialized_184346e0e = '\x01';
  }
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar8 = (pUVar7->fields).PhotonView, pPVar8 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar8->fields)._Owner_k__BackingField) {
      return;
    }
    if ((__this->fields)._headDetached != false) {
      return;
    }
    pCVar9 = (__this->fields).BasicCache;
    (__this->fields)._headDetached = true;
    if ((pCVar9 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar16 = (pCVar9->fields).NapeBlood, pUVar16 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UnityEngine_ParticleSystem__Stop(pUVar16,true,0,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).Cache;
      if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
         ((pUVar12 = (pUVar7->fields).Transform, pUVar12 != (UnityEngine_Transform_o *)0x0 &&
          (pUVar12 = UnityEngine_Transform__Find(pUVar12,"Head",(MethodInfo *)0x0),
          pUVar12 != (UnityEngine_Transform_o *)0x0)))) {
        source = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar12,
                            (MethodInfo_6651A0 *)
                            MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
        if ((__this->fields).EffectsEnabled == false) {
          cVar17 = '\0';
        }
        else {
          pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
          if (((pSVar10 == (Settings_GraphicsSettings_o *)0x0) ||
              (pSVar11 = (pSVar10->fields).NapeBloodEnabled, pSVar11 == (Settings_BoolSetting_o *)0x0)) ||
             (pCVar9 = (__this->fields).BasicCache, pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0))
          goto label_18218589b;
          cVar17 = (pSVar11->fields)._value;
          pUVar12 = (pCVar9->fields).Head;
          pUVar13 = Characters_BaseCharacter__GetVelocity
                              ((UnityEngine_Vector3_o *)local_58,(Characters_BaseCharacter_o *)__this,
                               (MethodInfo *)0x0);
          uVar3 = (launch->fields).x;
          uVar5 = (launch->fields).y;
          pUVar16 = (UnityEngine_ParticleSystem_o *)0x0;
          fVar1 = (launch->fields).z;
          uVar4 = (pUVar13->fields).x;
          uVar6 = (pUVar13->fields).y;
          fVar2 = (pUVar13->fields).z;
          if ((bool)cVar17 != false) {
            pCVar9 = (__this->fields).BasicCache;
            if (pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_18218589b;
            pUVar16 = (pCVar9->fields).DecapitationBlood;
          }
          fVar19 = (__this->fields)._deathVisualStartTime;
          fVar18 = UnityEngine_Time__get_time((MethodInfo *)0x0);
          fVar18 = (fVar19 + 3.0) - fVar18;
          fVar19 = 0.0;
          if (0.0 <= fVar18) {
            fVar19 = fVar18;
          }
          if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
          }
          local_58[0].y = (float)uVar5 + (float)uVar6;
          local_58[0].x = (float)uVar3 + (float)uVar4;
          local_58[0].z = fVar1 + fVar2;
          Characters_TitanLimbFallEffect__PlayHead
                    (source,pUVar12,(UnityEngine_Vector3_o *)local_58,pUVar16,fVar19,(MethodInfo *)0x0);
        }
        uVar15 = 0;
        if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)source,false,(MethodInfo *)0x0);
          pCVar9 = (__this->fields).BasicCache;
          if (((pCVar9 != (Characters_BasicTitanComponentCache_o *)0x0) &&
              (pUVar12 = (pCVar9->fields).Head, pUVar12 != (UnityEngine_Transform_o *)0x0)) &&
             (pSVar14 = UnityEngine_Component__GetComponentsInChildren_object__665370
                                  ((UnityEngine_Component_o *)pUVar12,
                                   (MethodInfo_665370 *)
                                   MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer),
             pSVar14 != (System_Object_array *)0x0)) {
            for (; (int)uVar15 < (int)pSVar14->max_length; uVar15 = uVar15 + 1) {
              if ((uint)pSVar14->max_length <= uVar15) {
                ThrowIndexOutOfRangeException();
              }
              if ((UnityEngine_Renderer_o *)pSVar14->m_Items[(int)uVar15] == (UnityEngine_Renderer_o *)0x0)
              goto label_18218589b;
              UnityEngine_Renderer__set_enabled
                        ((UnityEngine_Renderer_o *)pSVar14->m_Items[(int)uVar15],false,(MethodInfo *)0x0);
            }
            if (cVar17 != '\0') {
              if (Il2CppMethodInitialized_184346e0f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Characters_BasicTitan_PlayDecapitationBlood_d__156);
                Il2CppMethodInitialized_184346e0f = '\x01';
              }
              __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_Characters_BasicTitan_PlayDecapitationBlood_d__156);
              Characters_BasicTitan__PlayDecapitationBlood_d__156___ctor(__this_00,0,(MethodInfo *)0x0);
              if (__this_00 == (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0)
              goto label_18218589b;
              (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                         (MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
label_18218589b:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$PlayDecapitationBlood
// il2cpp: System_Collections_IEnumerator_o* Characters_BasicTitan__PlayDecapitationBlood (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218b2e0

System_Collections_IEnumerator_o *
Characters_BasicTitan__PlayDecapitationBlood(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184346e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan_PlayDecapitationBlood_d__156);
    Il2CppMethodInitialized_184346e0f = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BasicTitan_PlayDecapitationBlood_d__156);
  Characters_BasicTitan__PlayDecapitationBlood_d__156___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetLookAngle
// il2cpp: UnityEngine_Vector2_o Characters_BasicTitan__GetLookAngle (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x182186f40

UnityEngine_Vector2_o
Characters_BasicTitan__GetLookAngle
          (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *target,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Characters_BasicTitanComponentCache_o *pCVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Quaternion_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Quaternion_Fields local_58;
  UnityEngine_Quaternion_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184346e10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346e10 = '\x01';
  }
  pUVar5 = (__this->fields).Cache;
  local_48[0].x = 0.0;
  local_48[0].y = 0.0;
  local_48[0].z = 0.0;
  local_48[0].w = 0.0;
  if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    pUVar8 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_58,pUVar6,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).Cache;
    if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      fVar10 = (target->fields).z;
      fVar12 = (pUVar8->fields).z;
      pUVar9 = UnityEngine_Transform__get_rotation
                         ((UnityEngine_Quaternion_o *)&local_58,pUVar6,(MethodInfo *)0x0);
      local_48[0].x = (pUVar9->fields).x;
      local_48[0].y = (pUVar9->fields).y;
      local_48[0].z = (pUVar9->fields).z;
      local_48[0].w = (pUVar9->fields).w;
      pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                         ((UnityEngine_Vector3_o *)&local_58,(UnityEngine_Quaternion_o *)local_48,
                          (MethodInfo *)0x0);
      uVar2 = (pUVar8->fields).x;
      uVar4 = (pUVar8->fields).y;
      local_68.z = (pUVar8->fields).z * 57.29578;
      local_68.y = (float)uVar4 * 57.29578;
      local_68.x = (float)uVar2 * 57.29578;
      pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                         ((UnityEngine_Vector3_o *)&local_58,(UnityEngine_Vector3_o *)&local_68,
                          (MethodInfo *)0x0);
      fVar11 = (pUVar8->fields).y;
      fVar10 = (float)il2cpp_runtime_helper_1804f3c50(fVar10 - fVar12);
      fVar12 = (fVar11 - 90.0) - -fVar10 * 57.29578;
      fVar10 = (float)il2cpp_runtime_helper_1804f4110(fVar12 / 360.0);
      fVar12 = fVar12 - fVar10 * 360.0;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      else if (360.0 < fVar12) {
        fVar12 = 360.0;
      }
      if (180.0 < fVar12) {
        fVar12 = fVar12 - 360.0;
      }
      pCVar7 = (__this->fields).BasicCache;
      if ((pCVar7 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar6 = (pCVar7->fields).Neck, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        pUVar8 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)&local_58,pUVar6,(MethodInfo *)0x0);
        pCVar7 = (__this->fields).BasicCache;
        if ((pCVar7 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar6 = (pCVar7->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          fVar10 = (pUVar8->fields).y;
          pUVar8 = UnityEngine_Transform__get_position
                             ((UnityEngine_Vector3_o *)&local_58,pUVar6,(MethodInfo *)0x0);
          uVar3._0_4_ = (pUVar8->fields).x;
          uVar3._4_4_ = (pUVar8->fields).y;
          fVar11 = (pUVar8->fields).z;
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          local_58.x = (target->fields).x;
          local_58.y = (target->fields).y;
          local_58.z = (target->fields).z;
          fVar1 = (target->fields).y;
          local_68._0_8_ = uVar3;
          local_68.z = fVar11;
          fVar11 = Utility_Util__DistanceIgnoreY
                             ((UnityEngine_Vector3_o *)&local_58,(UnityEngine_Vector3_o *)&local_68,
                              (MethodInfo *)0x0);
          fVar10 = (float)il2cpp_runtime_helper_1804f3c50(fVar10 - fVar1,fVar11);
          return (UnityEngine_Vector2_o)
                 (UnityEngine_Vector2_Fields)(CONCAT44(fVar12,fVar10 * 57.29578) ^ 0x8000000000000000);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$LateUpdateHeadPosition
// il2cpp: void Characters_BasicTitan__LateUpdateHeadPosition (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x182188600

void Characters_BasicTitan__LateUpdateHeadPosition
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  Cameras_BaseCamera_o *pCVar15;
  UnityEngine_Camera_o *pUVar16;
  Characters_BasicTitanComponentCache_o *pCVar17;
  UnityEngine_Transform_o *pUVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  System_Nullable_Quaternion__o *pSVar21;
  UnityEngine_Vector3_o *pUVar22;
  UnityEngine_Vector2_Fields UVar23;
  UnityEngine_Transform_o *pUVar24;
  UnityEngine_Quaternion_o *pUVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStackX_c;
  UnityEngine_Quaternion_Fields local_e8;
  UnityEngine_Quaternion_Fields local_d8;
  UnityEngine_Quaternion_Fields local_c8;
  UnityEngine_Quaternion_Fields local_b8;
  System_Nullable_Vector4__Fields local_a8 [8];
  
  if (Il2CppMethodInitialized_184346e11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346e11 = '\x01';
  }
  pUVar13 = (__this->fields).Cache;
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_b8.z = 0.0;
  local_b8.w = 0.0;
  if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar24 = (pUVar13->fields).Transform, pUVar24 == (UnityEngine_Transform_o *)0x0)) {
label_182188cda:
    ThrowNullReferenceException();
  }
  pUVar22 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_d8,pUVar24,(MethodInfo *)0x0);
  local_e8.x = (position->fields).x;
  local_e8.y = (position->fields).y;
  uVar5 = (pUVar22->fields).x;
  uVar9 = (pUVar22->fields).y;
  fVar29 = (position->fields).z - (pUVar22->fields).z;
  local_e8.z = (position->fields).z;
  fVar27 = local_e8.x - (float)uVar5;
  fVar28 = local_e8.y - (float)uVar9;
  local_d8.z = fVar29;
  local_d8.y = fVar28;
  local_d8.x = fVar27;
  UVar23 = (UnityEngine_Vector2_Fields)
           Characters_BasicTitan__GetLookAngle(__this,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
  fStackX_c = UVar23.y;
  if (50.0 < fStackX_c && fStackX_c < 120.0 || -120.0 < fStackX_c && fStackX_c < -50.0) {
    pfVar1 = &(__this->fields).LastGoodHeadAngle.fields.y;
    if ((*pfVar1 <= -50.0 && *pfVar1 != -50.0) || (50.0 < (__this->fields).LastGoodHeadAngle.fields.y)) {
      pCVar15 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((pCVar15 == (Cameras_BaseCamera_o *)0x0) ||
         ((pUVar16 = (pCVar15->fields).Camera, pUVar16 == (UnityEngine_Camera_o *)0x0 ||
          (pUVar24 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
          pUVar24 == (UnityEngine_Transform_o *)0x0)))) goto label_182188cda;
      pUVar22 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_e8,pUVar24,(MethodInfo *)0x0);
      local_d8.x = (pUVar22->fields).x;
      local_d8.y = (pUVar22->fields).y;
      local_d8.z = (pUVar22->fields).z;
      UVar23 = (UnityEngine_Vector2_Fields)
               Characters_BasicTitan__GetLookAngle
                         (__this,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
    }
    fStackX_c = (__this->fields).LastGoodHeadAngle.fields.y;
  }
  else {
    pUVar13 = (__this->fields).Cache;
    if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar24 = (pUVar13->fields).Transform, pUVar24 == (UnityEngine_Transform_o *)0x0)) goto label_182188cda;
    pUVar22 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)&local_e8,pUVar24,(MethodInfo *)0x0)
    ;
    fVar2 = (pUVar22->fields).x;
    fVar3 = (pUVar22->fields).y;
    fVar4 = (pUVar22->fields).z;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar26 = (float)il2cpp_runtime_helper_180546a40(&local_d8);
    if (fVar26 <= 1e-05) {
      pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar27 = (pUVar14->zeroVector).fields.x;
      fVar28 = (pUVar14->zeroVector).fields.y;
      fVar29 = (pUVar14->zeroVector).fields.z;
    }
    else {
      fVar27 = fVar27 / fVar26;
      fVar28 = fVar28 / fVar26;
      fVar29 = fVar29 / fVar26;
    }
    if (fVar28 * fVar3 + fVar27 * fVar2 + fVar29 * fVar4 < 0.0) {
      pCVar15 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (((pCVar15 == (Cameras_BaseCamera_o *)0x0) ||
          (pUVar16 = (pCVar15->fields).Camera, pUVar16 == (UnityEngine_Camera_o *)0x0)) ||
         (pUVar24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0)
         , pUVar24 == (UnityEngine_Transform_o *)0x0)) goto label_182188cda;
      pUVar22 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_e8,pUVar24,(MethodInfo *)0x0);
      local_d8.x = (pUVar22->fields).x;
      local_d8.y = (pUVar22->fields).y;
      local_d8.z = (pUVar22->fields).z;
      UVar23 = (UnityEngine_Vector2_Fields)
               Characters_BasicTitan__GetLookAngle
                         (__this,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
      fStackX_c = UVar23.y;
      (__this->fields).LastGoodHeadAngle.fields.y = fStackX_c;
      fVar27 = UVar23.x;
      goto label_182188951;
    }
    (__this->fields).LastGoodHeadAngle.fields.y = fStackX_c;
  }
  fVar27 = UVar23.x;
label_182188951:
  fVar28 = UVar23.x;
  (__this->fields).LastGoodHeadAngle.fields.x = fVar27;
  if (fVar28 < -80.0) {
    fVar27 = -80.0;
  }
  else {
    fVar27 = 30.0;
    if (fVar28 <= 30.0) {
      fVar27 = fVar28;
    }
  }
  fVar28 = -80.0;
  if ((-80.0 <= fStackX_c) && (fVar28 = 80.0, fStackX_c <= 80.0)) {
    fVar28 = fStackX_c;
  }
  pCVar17 = (__this->fields).BasicCache;
  if ((pCVar17 != (Characters_BasicTitanComponentCache_o *)0x0) &&
     (pUVar24 = (pCVar17->fields).Head, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
    pUVar25 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_c8,pUVar24,(MethodInfo *)0x0);
    local_b8.x = (pUVar25->fields).x;
    local_b8.y = (pUVar25->fields).y;
    local_b8.z = (pUVar25->fields).z;
    local_b8.w = (pUVar25->fields).w;
    pUVar22 = UnityEngine_Quaternion__Internal_ToEulerRad
                        ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Quaternion_o *)&local_b8,
                         (MethodInfo *)0x0);
    uVar6 = (pUVar22->fields).x;
    uVar10 = (pUVar22->fields).y;
    local_d8.x = (float)uVar6 * 57.29578;
    local_d8.y = (float)uVar10 * 57.29578;
    local_d8.z = (pUVar22->fields).z * 57.29578;
    pUVar22 = UnityEngine_Quaternion__Internal_MakePositive
                        ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Vector3_o *)&local_d8,
                         (MethodInfo *)0x0);
    pCVar17 = (__this->fields).BasicCache;
    if ((pCVar17 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar18 = (pCVar17->fields).Head, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
      fVar29 = (pUVar22->fields).x;
      pUVar25 = UnityEngine_Transform__get_rotation
                          ((UnityEngine_Quaternion_o *)&local_c8,pUVar18,(MethodInfo *)0x0);
      local_b8.x = (pUVar25->fields).x;
      local_b8.y = (pUVar25->fields).y;
      local_b8.z = (pUVar25->fields).z;
      local_b8.w = (pUVar25->fields).w;
      pUVar22 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Quaternion_o *)&local_b8,
                           (MethodInfo *)0x0);
      uVar7 = (pUVar22->fields).x;
      uVar11 = (pUVar22->fields).y;
      local_d8.x = (float)uVar7 * 57.29578;
      local_d8.y = (float)uVar11 * 57.29578;
      local_d8.z = (pUVar22->fields).z * 57.29578;
      pUVar22 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Vector3_o *)&local_d8,
                           (MethodInfo *)0x0);
      pCVar17 = (__this->fields).BasicCache;
      if ((pCVar17 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar18 = (pCVar17->fields).Head, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
        fVar2 = (pUVar22->fields).y;
        pUVar25 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)&local_c8,pUVar18,(MethodInfo *)0x0);
        local_b8.x = (pUVar25->fields).x;
        local_b8.y = (pUVar25->fields).y;
        local_b8.z = (pUVar25->fields).z;
        local_b8.w = (pUVar25->fields).w;
        pUVar22 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Quaternion_o *)&local_b8,
                             (MethodInfo *)0x0);
        uVar8 = (pUVar22->fields).x;
        uVar12 = (pUVar22->fields).y;
        local_d8.x = (float)uVar8 * 57.29578;
        local_d8.y = (float)uVar12 * 57.29578;
        local_d8.z = (pUVar22->fields).z * 57.29578;
        local_e8.y = (fVar2 + fVar28) * 0.017453292;
        local_e8.x = (fVar29 + fVar27) * 0.017453292;
        pUVar22 = UnityEngine_Quaternion__Internal_MakePositive
                            ((UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_d8,
                             (MethodInfo *)0x0);
        local_e8.z = (pUVar22->fields).z * 0.017453292;
        pUVar25 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Quaternion_o *)&local_c8,(UnityEngine_Vector3_o *)&local_e8,
                             (MethodInfo *)0x0);
        local_c8.x = (pUVar25->fields).x;
        local_c8.y = (pUVar25->fields).y;
        local_c8.z = (pUVar25->fields).z;
        local_c8.w = (pUVar25->fields).w;
        UnityEngine_Transform__set_rotation(pUVar24,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0);
        pCVar17 = (__this->fields).BasicCache;
        if ((pCVar17 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar24 = (pCVar17->fields).Head, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
          uVar19._0_4_ = (__this->fields)._oldHeadRotation.fields.x;
          uVar19._4_4_ = (__this->fields)._oldHeadRotation.fields.y;
          uVar20._0_4_ = (__this->fields)._oldHeadRotation.fields.z;
          uVar20._4_4_ = (__this->fields)._oldHeadRotation.fields.w;
          pUVar25 = UnityEngine_Transform__get_localRotation
                              ((UnityEngine_Quaternion_o *)&local_c8,pUVar24,(MethodInfo *)0x0);
          local_c8.x = (pUVar25->fields).x;
          local_c8.y = (pUVar25->fields).y;
          local_c8.z = (pUVar25->fields).z;
          local_c8.w = (pUVar25->fields).w;
          local_d8._0_8_ = uVar19;
          local_d8._8_8_ = uVar20;
          fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar25 = UnityEngine_Quaternion__Internal_Lerp
                              ((UnityEngine_Quaternion_o *)&local_e8,(UnityEngine_Quaternion_o *)&local_d8,
                               (UnityEngine_Quaternion_o *)&local_c8,fVar27 * 10.0,(MethodInfo *)0x0);
          local_c8.x = (pUVar25->fields).x;
          local_c8.y = (pUVar25->fields).y;
          local_c8.z = (pUVar25->fields).z;
          local_c8.w = (pUVar25->fields).w;
          UnityEngine_Transform__set_localRotation
                    (pUVar24,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0);
          pCVar17 = (__this->fields).BasicCache;
          if ((pCVar17 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar24 = (pCVar17->fields).Head, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
            pUVar25 = UnityEngine_Transform__get_localRotation
                                ((UnityEngine_Quaternion_o *)&local_c8,pUVar24,(MethodInfo *)0x0);
            pCVar17 = (__this->fields).BasicCache;
            fVar27 = (pUVar25->fields).y;
            fVar28 = (pUVar25->fields).z;
            fVar29 = (pUVar25->fields).w;
            (__this->fields)._oldHeadRotation.fields.x = (pUVar25->fields).x;
            (__this->fields)._oldHeadRotation.fields.y = fVar27;
            (__this->fields)._oldHeadRotation.fields.z = fVar28;
            (__this->fields)._oldHeadRotation.fields.w = fVar29;
            if ((pCVar17 != (Characters_BasicTitanComponentCache_o *)0x0) &&
               (pUVar24 = (pCVar17->fields).Head, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
              pUVar25 = UnityEngine_Transform__get_rotation
                                  ((UnityEngine_Quaternion_o *)&local_c8,pUVar24,(MethodInfo *)0x0);
              local_c8.x = (pUVar25->fields).x;
              local_c8.y = (pUVar25->fields).y;
              local_c8.z = (pUVar25->fields).z;
              local_c8.w = (pUVar25->fields).w;
              local_a8[0].hasValue = false;
              local_a8[0]._1_3_ = 0;
              local_a8[0].value.fields.x = 0.0;
              local_a8[0].value.fields.y = 0.0;
              local_a8[0].value.fields.z = 0.0;
              local_a8[0].value.fields.w = 0.0;
              System_Nullable_Vector4____ctor
                        ((System_Nullable_Vector4__o *)local_a8,(UnityEngine_Vector4_o *)&local_c8,
                         (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Quaternion_ctor);
              (__this->fields).LateUpdateHeadRotation.fields.hasValue = local_a8[0].hasValue;
              *(undefined3 *)&(__this->fields).LateUpdateHeadRotation.fields.field_0x1 = local_a8[0]._1_3_;
              (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = local_a8[0].value.fields.x;
              pSVar21 = &(__this->fields).LateUpdateHeadRotation;
              (pSVar21->fields).value.fields.y = local_a8[0].value.fields.y;
              (pSVar21->fields).value.fields.z = local_a8[0].value.fields.z;
              (__this->fields).LateUpdateHeadRotation.fields.value.fields.w = local_a8[0].value.fields.w;
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$LateUpdateHead
// il2cpp: void Characters_BasicTitan__LateUpdateHead (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x182188cf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182189351: movups xmm6, xmmword ptr [rsp + 0x74]
// asm:   0x182189356: jmp 0x182189385

void Characters_BasicTitan__LateUpdateHead
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *target,MethodInfo *method)

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
  byte bVar10;
  Utility_BaseComponentCache_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  Characters_BaseCharacter_c *pCVar13;
  Characters_BasicTitanComponentCache_o *pCVar14;
  UnityEngine_Transform_o *pUVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  System_Nullable_Quaternion__o *pSVar20;
  bool bVar21;
  UnityEngine_Vector3_o *pUVar22;
  UnityEngine_Quaternion_o *pUVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Quaternion_Fields local_e8;
  UnityEngine_Quaternion_Fields local_d8;
  UnityEngine_Quaternion_Fields local_c8;
  UnityEngine_Quaternion_Fields local_b8;
  System_Nullable_Vector4__Fields local_a8 [8];
  
  if (Il2CppMethodInitialized_184346e12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346e12 = '\x01';
  }
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_b8.z = 0.0;
  local_b8.w = 0.0;
  if ((__this->fields).Dead != false) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar21 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar21) {
    if (((target == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar11 = (target->fields).Cache, pUVar11 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar12 = (pUVar11->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    pUVar22 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
    pCVar13 = target->klass;
    fVar27 = (pUVar22->fields).y;
    bVar10 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar10 <= (pCVar13->_2).typeHierarchyDepth) &&
       ((pCVar13->_2).typeHierarchy[(ulonglong)bVar10 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      bVar10 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if (((pCVar13->_2).typeHierarchyDepth < bVar10) ||
         ((pCVar13->_2).typeHierarchy[(ulonglong)bVar10 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan))
      {
        il2cpp_codegen_raise_invalid_cast_exception(target);
      }
      if (((*(uint64_t *)((char *)target + 0x100)) == (void *)0x0) ||
         (pUVar12 = *(UnityEngine_Transform_o **)((longlong)(*(uint64_t *)((char *)target + 0x100)) + 0x38),
         pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
      pUVar22 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
      fVar27 = (pUVar22->fields).y;
    }
    pUVar11 = (target->fields).Cache;
    if ((pUVar11 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar12 = (pUVar11->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    pUVar22 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
    pUVar11 = (__this->fields).Cache;
    if ((pUVar11 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar12 = (pUVar11->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    fVar24 = (pUVar22->fields).x;
    fVar28 = (pUVar22->fields).z;
    pUVar22 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
    pUVar11 = (__this->fields).Cache;
    if ((pUVar11 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar12 = (pUVar11->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    fVar26 = (pUVar22->fields).x;
    fVar25 = (pUVar22->fields).z;
    pUVar23 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_c8,pUVar12,(MethodInfo *)0x0);
    local_b8.x = (pUVar23->fields).x;
    local_b8.y = (pUVar23->fields).y;
    local_b8.z = (pUVar23->fields).z;
    local_b8.w = (pUVar23->fields).w;
    pUVar22 = UnityEngine_Quaternion__Internal_ToEulerRad
                        ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Quaternion_o *)&local_b8,
                         (MethodInfo *)0x0);
    uVar2 = (pUVar22->fields).x;
    uVar6 = (pUVar22->fields).y;
    local_e8.z = (pUVar22->fields).z * 57.29578;
    local_e8.y = (float)uVar6 * 57.29578;
    local_e8.x = (float)uVar2 * 57.29578;
    pUVar22 = UnityEngine_Quaternion__Internal_MakePositive
                        ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_e8,
                         (MethodInfo *)0x0);
    fVar1 = (pUVar22->fields).y;
    fVar24 = (float)il2cpp_runtime_helper_1804f3c50(fVar28 - fVar25,fVar24 - fVar26);
    fVar24 = UnityEngine_Mathf__DeltaAngle(-fVar24 * 57.29578,fVar1 - 90.0,(MethodInfo *)0x0);
    fVar24 = -fVar24;
    if (fVar24 < -40.0) {
      fVar28 = -40.0;
    }
    else {
      fVar28 = 40.0;
      if (fVar24 <= 40.0) {
        fVar28 = fVar24;
      }
    }
    pCVar14 = (__this->fields).BasicCache;
    if ((pCVar14 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar12 = (pCVar14->fields).Neck, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    pUVar22 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
    pUVar11 = (target->fields).Cache;
    if ((pUVar11 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar12 = (pUVar11->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    fVar24 = (pUVar22->fields).y;
    fVar26 = (__this->fields).Size;
    pUVar22 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
    pCVar14 = (__this->fields).BasicCache;
    if ((pCVar14 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar12 = (pCVar14->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    fVar25 = (pUVar22->fields).z;
    uVar16._0_4_ = (pUVar22->fields).x;
    uVar16._4_4_ = (pUVar22->fields).y;
    pUVar22 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
    uVar17._0_4_ = (pUVar22->fields).x;
    uVar17._4_4_ = (pUVar22->fields).y;
    fVar1 = (pUVar22->fields).z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_e8._0_8_ = uVar17;
    local_e8.z = fVar1;
    local_d8._0_8_ = uVar16;
    local_d8.z = fVar25;
    fVar25 = Utility_Util__DistanceIgnoreY
                       ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_e8,
                        (MethodInfo *)0x0);
    fVar24 = (float)il2cpp_runtime_helper_1804f3c50((fVar26 + fVar26 + fVar24) - fVar27,fVar25);
    fVar24 = fVar24 * 57.29578;
    fVar27 = -40.0;
    if ((-40.0 <= fVar24) && (fVar27 = 30.0, fVar24 <= 30.0)) {
      fVar27 = fVar24;
    }
    pCVar14 = (__this->fields).BasicCache;
    if ((pCVar14 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar12 = (pCVar14->fields).Head, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    pUVar23 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_c8,pUVar12,(MethodInfo *)0x0);
    local_b8.x = (pUVar23->fields).x;
    local_b8.y = (pUVar23->fields).y;
    local_b8.z = (pUVar23->fields).z;
    local_b8.w = (pUVar23->fields).w;
    pUVar22 = UnityEngine_Quaternion__Internal_ToEulerRad
                        ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Quaternion_o *)&local_b8,
                         (MethodInfo *)0x0);
    uVar3 = (pUVar22->fields).x;
    uVar7 = (pUVar22->fields).y;
    local_d8.y = (float)uVar7 * 57.29578;
    local_d8.x = (float)uVar3 * 57.29578;
    local_d8.z = (pUVar22->fields).z * 57.29578;
    pUVar22 = UnityEngine_Quaternion__Internal_MakePositive
                        ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Vector3_o *)&local_d8,
                         (MethodInfo *)0x0);
    pCVar14 = (__this->fields).BasicCache;
    if ((pCVar14 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar15 = (pCVar14->fields).Head, pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    fVar24 = (pUVar22->fields).x;
    pUVar23 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_c8,pUVar15,(MethodInfo *)0x0);
    local_b8.x = (pUVar23->fields).x;
    local_b8.y = (pUVar23->fields).y;
    local_b8.z = (pUVar23->fields).z;
    local_b8.w = (pUVar23->fields).w;
    pUVar22 = UnityEngine_Quaternion__Internal_ToEulerRad
                        ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Quaternion_o *)&local_b8,
                         (MethodInfo *)0x0);
    uVar4 = (pUVar22->fields).x;
    uVar8 = (pUVar22->fields).y;
    local_d8.y = (float)uVar8 * 57.29578;
    local_d8.x = (float)uVar4 * 57.29578;
    local_d8.z = (pUVar22->fields).z * 57.29578;
    pUVar22 = UnityEngine_Quaternion__Internal_MakePositive
                        ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Vector3_o *)&local_d8,
                         (MethodInfo *)0x0);
    pCVar14 = (__this->fields).BasicCache;
    if ((pCVar14 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar15 = (pCVar14->fields).Head, pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
    fVar26 = (pUVar22->fields).y;
    pUVar23 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_c8,pUVar15,(MethodInfo *)0x0);
    local_b8.x = (pUVar23->fields).x;
    local_b8.y = (pUVar23->fields).y;
    local_b8.z = (pUVar23->fields).z;
    local_b8.w = (pUVar23->fields).w;
    pUVar22 = UnityEngine_Quaternion__Internal_ToEulerRad
                        ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Quaternion_o *)&local_b8,
                         (MethodInfo *)0x0);
    uVar5 = (pUVar22->fields).x;
    uVar9 = (pUVar22->fields).y;
    local_d8.y = (float)uVar9 * 57.29578;
    local_d8.x = (float)uVar5 * 57.29578;
    local_d8.z = (pUVar22->fields).z * 57.29578;
    local_e8.y = (fVar26 + fVar28) * 0.017453292;
    local_e8.x = (fVar24 + fVar27) * 0.017453292;
    pUVar22 = UnityEngine_Quaternion__Internal_MakePositive
                        ((UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_d8,
                         (MethodInfo *)0x0);
    local_e8.z = (pUVar22->fields).z * 0.017453292;
    pUVar23 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)&local_c8,(UnityEngine_Vector3_o *)&local_e8,
                         (MethodInfo *)0x0);
    local_c8.x = (pUVar23->fields).x;
    local_c8.y = (pUVar23->fields).y;
    local_c8.z = (pUVar23->fields).z;
    local_c8.w = (pUVar23->fields).w;
    UnityEngine_Transform__set_rotation(pUVar12,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0);
  }
  bVar21 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar21) {
    if ((((__this->fields).State == 10) || ((__this->fields).State == 0xd)) ||
       ((__this->fields).State == 0x10)) {
      bVar21 = true;
    }
    else {
      bVar21 = (__this->fields).State == 0x12;
    }
  }
  else {
    bVar21 = false;
  }
  pCVar14 = (__this->fields).BasicCache;
  if (pCVar14 != (Characters_BasicTitanComponentCache_o *)0x0) {
    uVar16 = *(undefined8 *)&(__this->fields)._aiHeadRotation.fields.field_0x1;
    uVar17 = *(undefined8 *)((longlong)&(__this->fields)._aiHeadRotation.fields.value.fields.y + 1);
    pUVar12 = (pCVar14->fields).Head;
    local_d8.w = (__this->fields)._aiHeadRotation.fields.value.fields.w;
    local_a8[0]._1_3_ = (undefined3)uVar16;
    local_a8[0].value.fields.x = (float)((ulonglong)uVar16 >> 0x18);
    local_a8[0].value.fields.y._0_1_ = (undefined1)((ulonglong)uVar16 >> 0x38);
    local_a8[0].value.fields.y._1_3_ = (undefined3)uVar17;
    local_a8[0].value.fields.z = (float)((ulonglong)uVar17 >> 0x18);
    fVar27 = local_a8[0].value.fields.x;
    fVar24 = local_a8[0].value.fields.y;
    fVar28 = local_a8[0].value.fields.z;
    local_a8[0].value.fields.w = local_d8.w;
    if ((__this->fields)._aiHeadRotation.fields.hasValue == false) {
      pCVar14 = (__this->fields).BasicCache;
      if ((pCVar14 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar15 = (pCVar14->fields).Head, pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_1821894dd;
      pUVar23 = UnityEngine_Transform__get_rotation
                          ((UnityEngine_Quaternion_o *)&local_c8,pUVar15,(MethodInfo *)0x0);
      local_d8.w = (pUVar23->fields).w;
      fVar27 = (pUVar23->fields).x;
      fVar24 = (pUVar23->fields).y;
      fVar28 = (pUVar23->fields).z;
    }
    pCVar14 = (__this->fields).BasicCache;
    if ((pCVar14 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar15 = (pCVar14->fields).Head, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
      pUVar23 = UnityEngine_Transform__get_rotation
                          ((UnityEngine_Quaternion_o *)&local_c8,pUVar15,(MethodInfo *)0x0);
      uVar18._0_4_ = (pUVar23->fields).x;
      uVar18._4_4_ = (pUVar23->fields).y;
      uVar19._0_4_ = (pUVar23->fields).z;
      uVar19._4_4_ = (pUVar23->fields).w;
      fVar26 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      if (bVar21) {
        fVar25 = 20.0;
      }
      else {
        fVar25 = 10.0;
      }
      local_d8.y = fVar24;
      local_d8.x = fVar27;
      local_d8.z = fVar28;
      local_c8._0_8_ = uVar18;
      local_c8._8_8_ = uVar19;
      pUVar23 = UnityEngine_Quaternion__Internal_Lerp
                          ((UnityEngine_Quaternion_o *)&local_e8,(UnityEngine_Quaternion_o *)&local_d8,
                           (UnityEngine_Quaternion_o *)&local_c8,fVar26 * fVar25,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        local_c8.x = (pUVar23->fields).x;
        local_c8.y = (pUVar23->fields).y;
        local_c8.z = (pUVar23->fields).z;
        local_c8.w = (pUVar23->fields).w;
        UnityEngine_Transform__set_rotation(pUVar12,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0);
        pCVar14 = (__this->fields).BasicCache;
        if ((pCVar14 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar12 = (pCVar14->fields).Head, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
          pUVar23 = UnityEngine_Transform__get_rotation
                              ((UnityEngine_Quaternion_o *)&local_c8,pUVar12,(MethodInfo *)0x0);
          local_c8.x = (pUVar23->fields).x;
          local_c8.y = (pUVar23->fields).y;
          local_c8.z = (pUVar23->fields).z;
          local_c8.w = (pUVar23->fields).w;
          local_a8[0].hasValue = false;
          local_a8[0]._1_3_ = 0;
          local_a8[0].value.fields.x = 0.0;
          local_a8[0].value.fields.y = 0.0;
          local_a8[0].value.fields.z = 0.0;
          local_a8[0].value.fields.w = 0.0;
          System_Nullable_Vector4____ctor
                    ((System_Nullable_Vector4__o *)local_a8,(UnityEngine_Vector4_o *)&local_c8,
                     (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Quaternion_ctor);
          (__this->fields)._aiHeadRotation.fields.hasValue = (bool)(char)local_a8[0]._0_4_;
          *(int3 *)&(__this->fields)._aiHeadRotation.fields.field_0x1 = SUB43(local_a8[0]._0_4_,1);
          (__this->fields)._aiHeadRotation.fields.value.fields.x = local_a8[0].value.fields.x;
          pSVar20 = &(__this->fields)._aiHeadRotation;
          (pSVar20->fields).value.fields.y = local_a8[0].value.fields.y;
          (pSVar20->fields).value.fields.z = local_a8[0].value.fields.z;
          (__this->fields)._aiHeadRotation.fields.value.fields.w = local_a8[0].value.fields.w;
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_1821894dd:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Update
// il2cpp: void Characters_BasicTitan__Update (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182191cf0

void Characters_BasicTitan__Update(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitan__StartDeathAnimation(__this,(MethodInfo *)0x0);
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$FixedUpdate
// il2cpp: void Characters_BasicTitan__FixedUpdate (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182186710

void Characters_BasicTitan__FixedUpdate(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_Collider_o *pUVar3;
  Characters_BaseHitbox_o *pCVar4;
  bool bVar5;
  System_String_o *__this_00;
  bool grabbing;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346e13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.");
    Il2CppMethodInitialized_184346e13 = '\x01';
  }
  if (((__this->fields)._deathDissolve != (Characters_TitanDeathDissolve_o *)0x0) &&
     ((((__this->fields)._deathDissolve)->fields)._CollidersDisabled_k__BackingField != false)) {
    return;
  }
  Characters_BaseTitan__FixedUpdate((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields).Dead == false) {
    pCVar1 = (__this->fields).Animation;
    if ((pCVar1 == (Characters_AnimationHandler_o *)0x0) ||
       (__this_00 = Characters_AnimationHandler__GetCurrentAnimation(pCVar1,(MethodInfo *)0x0),
       __this_00 == (System_String_o *)0x0)) goto label_1821868f0;
    bVar5 = System_String__StartsWith_19722c0(__this_00,"Amarture_VER2|grab.",4,(MethodInfo *)0x0);
    if (!bVar5) goto label_1821867e4;
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 == (Characters_AnimationHandler_o *)0x0) goto label_1821868f0;
    fVar6 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar1,(MethodInfo *)0x0);
    bVar5 = fVar6 < 1.0;
  }
  else {
label_1821867e4:
    bVar5 = false;
  }
  pCVar2 = (__this->fields).BasicCache;
  if (pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0) {
    pUVar3 = (pCVar2->fields).HandLHurtbox;
    fVar6 = (pCVar2->fields).HandLHurtboxRadius;
    pCVar4 = (pCVar2->fields).HandLHitbox;
    if ((bVar5) && ((__this->fields).LeftArmDisabled == false)) {
      grabbing = (__this->fields).LeftHandDisabled == false;
    }
    else {
      grabbing = false;
    }
    if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    }
    Characters_BasicTitan__UpdateHandHurtbox(pUVar3,pCVar4,fVar6,grabbing,(MethodInfo *)0x0);
    pCVar2 = (__this->fields).BasicCache;
    if (pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0) {
      pUVar3 = (pCVar2->fields).HandRHurtbox;
      pCVar4 = (pCVar2->fields).HandRHitbox;
      fVar6 = (pCVar2->fields).HandRHurtboxRadius;
      if ((bVar5) && ((__this->fields).RightArmDisabled == false)) {
        bVar5 = (__this->fields).RightHandDisabled == false;
      }
      else {
        bVar5 = false;
      }
      if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
      }
      Characters_BasicTitan__UpdateHandHurtbox(pUVar3,pCVar4,fVar6,bVar5,(MethodInfo *)0x0);
      return;
    }
  }
label_1821868f0:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateHandHurtbox
// il2cpp: void Characters_BasicTitan__UpdateHandHurtbox (UnityEngine_Collider_o* hurtbox, Characters_BaseHitbox_o* hitbox, float normalRadius, bool grabbing, const MethodInfo* method);
// 0x182190df0

void Characters_BasicTitan__UpdateHandHurtbox
               (UnityEngine_Collider_o *hurtbox,Characters_BaseHitbox_o *hitbox,float normalRadius,
               bool grabbing,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_SphereCollider_o *__this;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346e14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_184346e14 = '\x01';
  }
  if (hurtbox != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (hurtbox->klass->_2).typeHierarchyDepth) &&
       ((hurtbox->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
      if (hitbox == (Characters_BaseHitbox_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this = (UnityEngine_SphereCollider_o *)(hitbox->fields)._collider;
      if (__this != (UnityEngine_SphereCollider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
           ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
          if (grabbing) {
            normalRadius = UnityEngine_SphereCollider__get_radius(__this,(MethodInfo *)0x0);
          }
          fVar2 = UnityEngine_SphereCollider__get_radius
                            ((UnityEngine_SphereCollider_o *)hurtbox,(MethodInfo *)0x0);
          if (fVar2 != normalRadius) {
            UnityEngine_SphereCollider__set_radius
                      ((UnityEngine_SphereCollider_o *)hurtbox,normalRadius,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  return;
}


// Characters.BasicTitan$$LateUpdate
// il2cpp: void Characters_BasicTitan__LateUpdate (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182189500
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182189b07: mov rdx, r9
// asm:   0x182189b0a: jmp 0x182189b57
// asm:   0x182189b3f: mov rdx, r9
// asm:   0x182189b42: jmp 0x182189b57

void Characters_BasicTitan__LateUpdate(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  undefined4 uVar7;
  byte bVar8;
  float fVar9;
  int32_t viewId;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Characters_BasicTitanComponentCache_o *pCVar12;
  Characters_ITargetable_o *pCVar13;
  Characters_ITargetable_c *pCVar14;
  longlong lVar15;
  UnityEngine_Quaternion_StaticFields *pUVar16;
  UnityEngine_Vector3_StaticFields *pUVar17;
  Characters_BasicTitanAnimations_o *pCVar18;
  Characters_AnimationHandler_o *__this_00;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  System_Nullable_Quaternion__o *pSVar28;
  float fVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  UnityEngine_Quaternion_o *pUVar33;
  UnityEngine_Vector3_o *pUVar34;
  Characters_BaseCharacter_o *target;
  void *pvVar35;
  undefined8 *puVar36;
  UnityEngine_Transform_o *pUVar37;
  float fVar38;
  UnityEngine_Quaternion_o local_58;
  UnityEngine_Quaternion_Fields local_48;
  UnityEngine_Quaternion_o local_38 [3];
  
  if (Il2CppMethodInitialized_184346e15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346e15 = '\x01';
  }
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar30 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (((bVar30) &&
      (((((__this->fields).State == 1 || ((__this->fields).State == 3)) || ((__this->fields).State == 2)) ||
       (((__this->fields).State == 6 || ((__this->fields).State == 7)))))) &&
     ((__this->fields).HasDirection != false)) {
    pUVar10 = (__this->fields).Cache;
    if ((pUVar10 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar37 = (pUVar10->fields).Transform, pUVar37 == (UnityEngine_Transform_o *)0x0)) goto label_182189ebc;
    pUVar11 = (pUVar10->fields).Transform;
    pUVar33 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_48,pUVar37,(MethodInfo *)0x0);
    uVar19 = (pUVar33->fields).x;
    uVar20 = (pUVar33->fields).y;
    uVar21 = (pUVar33->fields).z;
    uVar22 = (pUVar33->fields).w;
    pUVar33 = (*(__this->klass->vtable)._105_GetTargetRotation.methodPtr)
                        ((UnityEngine_Quaternion_o *)&local_48,__this,
                         (__this->klass->vtable)._105_GetTargetRotation.method);
    uVar4._0_4_ = (pUVar33->fields).x;
    uVar4._4_4_ = (pUVar33->fields).y;
    uVar23._0_4_ = (pUVar33->fields).z;
    uVar23._4_4_ = (pUVar33->fields).w;
    fVar38 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    local_58.fields.x = (float)uVar19;
    local_58.fields.y = (float)uVar20;
    local_58.fields.z = (float)uVar21;
    local_58.fields.w = (float)uVar22;
    local_48._0_8_ = uVar4;
    local_48._8_8_ = uVar23;
    pUVar33 = UnityEngine_Quaternion__Internal_Lerp
                        (local_38,&local_58,(UnityEngine_Quaternion_o *)&local_48,
                         fVar38 * (__this->fields).RotateSpeed,(MethodInfo *)0x0);
    local_48.x = (pUVar33->fields).x;
    local_48.y = (pUVar33->fields).y;
    local_48.z = (pUVar33->fields).z;
    local_48.w = (pUVar33->fields).w;
    UnityEngine_Transform__set_rotation(pUVar11,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
  }
  if ((__this->fields)._headDetached != false) goto label_182189e90;
  if ((__this->fields)._headScale.fields.x != (__this->fields).HeadSize) {
    fVar38 = (__this->fields).HeadSize;
    fVar9 = (__this->fields).HeadSize;
    (__this->fields)._headScale.fields.y = fVar38;
    (__this->fields)._headScale.fields.x = fVar38;
    (__this->fields)._headScale.fields.z = fVar9;
  }
  pCVar12 = (__this->fields).BasicCache;
  if ((pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) ||
     (pUVar37 = (pCVar12->fields).Head, pUVar37 == (UnityEngine_Transform_o *)0x0)) goto label_182189ebc;
  pUVar34 = UnityEngine_Transform__get_localScale
                      ((UnityEngine_Vector3_o *)&local_48,pUVar37,(MethodInfo *)0x0);
  if ((pUVar34->fields).x != (__this->fields)._headScale.fields.x) {
    pCVar12 = (__this->fields).BasicCache;
    if ((pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar37 = (pCVar12->fields).Head, pUVar37 == (UnityEngine_Transform_o *)0x0)) goto label_182189ebc;
    uVar1 = (__this->fields)._headScale.fields.x;
    uVar5 = (__this->fields)._headScale.fields.y;
    local_58.fields.z = (__this->fields)._headScale.fields.z;
    local_58.fields.x = (float)uVar1;
    local_58.fields.y = (float)uVar5;
    UnityEngine_Transform__set_localScale(pUVar37,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
  }
  if ((((__this->fields).State == 0) || ((__this->fields).State == 1)) || ((__this->fields).State == 3)) {
    bVar30 = true;
  }
  else {
    bVar30 = (__this->fields).State == 0x18;
  }
  bVar31 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  bVar32 = (__this->fields).AI;
  if (bVar31) {
    if (bVar32 == false) {
      if (bVar30 == false) {
        (__this->fields).LateUpdateHeadRotation.fields.hasValue = false;
        *(undefined3 *)&(__this->fields).LateUpdateHeadRotation.fields.field_0x1 = 0;
        (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = 0.0;
        pSVar28 = &(__this->fields).LateUpdateHeadRotation;
        (pSVar28->fields).value.fields.y = 0.0;
        (pSVar28->fields).value.fields.z = 0.0;
        (__this->fields).LateUpdateHeadRotation.fields.value.fields.w = 0.0;
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182189ebc;
        pUVar37 = (pCVar12->fields).Head;
        goto label_182189871;
      }
      pUVar34 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                          ((UnityEngine_Vector3_o *)&local_48,__this,
                           (__this->klass->vtable)._76_GetAimPoint.method);
      uVar2 = (pUVar34->fields).x;
      uVar6 = (pUVar34->fields).y;
      local_58.fields.z = (pUVar34->fields).z;
      local_58.fields.x = (float)uVar2;
      local_58.fields.y = (float)uVar6;
      Characters_BasicTitan__LateUpdateHeadPosition
                (__this,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      goto label_182189b62;
    }
    if ((((__this->fields).TargetEnemy == (Characters_ITargetable_o *)0x0) ||
        (pvVar35 = InterfaceInvoker0_Invoke
                             (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                              (Il2CppObject *)(__this->fields).TargetEnemy), (char)pvVar35 == '\0')) ||
       (pCVar13 = (__this->fields).TargetEnemy, pCVar13 == (Characters_ITargetable_o *)0x0)) {
label_182189b44:
      (__this->fields).TargetViewId = -1;
    }
    else {
      pCVar14 = pCVar13->klass;
      bVar8 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
      if (((pCVar14->_2).typeHierarchyDepth < bVar8) ||
         ((pCVar14->_2).typeHierarchy[(ulonglong)bVar8 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_BaseCharacter)) goto label_182189b44;
      pCVar13 = (__this->fields).TargetEnemy;
      if (pCVar13 == (Characters_ITargetable_o *)0x0) goto label_182189ebc;
      bVar8 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
      if (((pCVar13->klass->_2).typeHierarchyDepth < bVar8) ||
         ((pCVar13->klass->_2).typeHierarchy[(ulonglong)bVar8 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_BaseCharacter)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar13);
      }
      if (((*(uint64_t *)((char *)pCVar13 + 0x7f)) == (void *)0x0) ||
         (lVar15 = *(longlong *)((longlong)(*(uint64_t *)((char *)pCVar13 + 0x7f)) + 0x20), lVar15 == 0)) goto label_182189ebc;
      (__this->fields).TargetViewId = *(int32_t *)(lVar15 + 0x94);
      if ((__this->fields).IsCrawler == false) {
        if ((__this->fields).TargetEnemy == (Characters_ITargetable_o *)0x0) goto label_182189ebc;
        puVar36 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_48,1);
        pCVar12 = (__this->fields).BasicCache;
        if ((pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (pUVar37 = (pCVar12->fields).Transform, pUVar37 == (UnityEngine_Transform_o *)0x0))
        goto label_182189ebc;
        uVar4 = *puVar36;
        fVar38 = *(float *)(puVar36 + 1);
        pUVar34 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_48,pUVar37,(MethodInfo *)0x0);
        uVar3 = (pUVar34->fields).x;
        uVar7 = (pUVar34->fields).y;
        fVar9 = (pUVar34->fields).z;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        local_48.z = fVar38;
        local_58.fields.x = (float)uVar3;
        local_58.fields.y = (float)uVar7;
        local_58.fields.z = fVar9;
        local_48._0_8_ = uVar4;
        fVar38 = Utility_Util__DistanceIgnoreY
                           ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                            (MethodInfo *)0x0);
        bVar32 = fVar38 < 100.0;
      }
      else {
        bVar32 = false;
      }
      if ((bVar32 & bVar30) != 0) {
        target = (Characters_BaseCharacter_o *)(__this->fields).TargetEnemy;
        (__this->fields).LookAtTarget = true;
        if (target != (Characters_BaseCharacter_o *)0x0) {
          bVar8 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
          if (((target->klass->_2).typeHierarchyDepth < bVar8) ||
             ((target->klass->_2).typeHierarchy[(ulonglong)bVar8 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BaseCharacter)) {
            il2cpp_codegen_raise_invalid_cast_exception(target);
          }
        }
        goto label_182189b57;
      }
    }
    (__this->fields).LookAtTarget = false;
label_182189b55:
    target = (Characters_BaseCharacter_o *)0x0;
label_182189b57:
    Characters_BasicTitan__LateUpdateHead(__this,target,(MethodInfo *)0x0);
  }
  else {
    if (bVar32 != false) {
      if (((__this->fields).LookAtTarget == false) || ((__this->fields).TargetViewId < 0)) goto label_182189b55;
      viewId = (__this->fields).TargetViewId;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      target = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
      goto label_182189b57;
    }
    if (((__this->fields).LateUpdateHeadRotationRecv.fields.hasValue & bVar30) != 0) {
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182189ebc;
      pUVar37 = (pCVar12->fields).Head;
      System_Nullable_Vector4___get_Value
                ((UnityEngine_Vector4_o *)&local_48,
                 (System_Nullable_Vector4__o *)&(__this->fields).LateUpdateHeadRotationRecv,
                 (MethodInfo_AE2AC0 *)MethodInfo_System_Nullable_Quaternion_get_Value);
      if (pUVar37 == (UnityEngine_Transform_o *)0x0) goto label_182189ebc;
      UnityEngine_Transform__set_rotation(pUVar37,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
      pCVar12 = (__this->fields).BasicCache;
      if ((pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar37 = (pCVar12->fields).Head, pUVar37 == (UnityEngine_Transform_o *)0x0)) goto label_182189ebc;
      pUVar11 = (pCVar12->fields).Head;
      uVar24 = (__this->fields)._oldHeadRotation.fields.x;
      uVar25 = (__this->fields)._oldHeadRotation.fields.y;
      uVar26 = (__this->fields)._oldHeadRotation.fields.z;
      uVar27 = (__this->fields)._oldHeadRotation.fields.w;
      pUVar33 = UnityEngine_Transform__get_localRotation(local_38,pUVar37,(MethodInfo *)0x0);
      local_48.x = (pUVar33->fields).x;
      local_48.y = (pUVar33->fields).y;
      local_48.z = (pUVar33->fields).z;
      local_48.w = (pUVar33->fields).w;
      local_58.fields.x = (float)uVar24;
      local_58.fields.y = (float)uVar25;
      local_58.fields.z = (float)uVar26;
      local_58.fields.w = (float)uVar27;
      fVar38 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      pUVar33 = UnityEngine_Quaternion__Internal_Lerp
                          (local_38,&local_58,(UnityEngine_Quaternion_o *)&local_48,fVar38 * 10.0,
                           (MethodInfo *)0x0);
      local_48.x = (pUVar33->fields).x;
      local_48.y = (pUVar33->fields).y;
      local_48.z = (pUVar33->fields).z;
      local_48.w = (pUVar33->fields).w;
      UnityEngine_Transform__set_localRotation
                (pUVar11,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182189ebc;
      pUVar37 = (pCVar12->fields).Head;
label_182189871:
      if (pUVar37 == (UnityEngine_Transform_o *)0x0) goto label_182189ebc;
      pUVar33 = UnityEngine_Transform__get_localRotation(local_38,pUVar37,(MethodInfo *)0x0);
      fVar38 = (pUVar33->fields).y;
      fVar9 = (pUVar33->fields).z;
      fVar29 = (pUVar33->fields).w;
      (__this->fields)._oldHeadRotation.fields.x = (pUVar33->fields).x;
      (__this->fields)._oldHeadRotation.fields.y = fVar38;
      (__this->fields)._oldHeadRotation.fields.z = fVar9;
      (__this->fields)._oldHeadRotation.fields.w = fVar29;
    }
  }
label_182189b62:
  if (((__this->fields).LeftArmDisabled == false) || ((__this->fields)._leftArmDisabledTimeLeft < 6.5)) {
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182189ebc;
    pUVar37 = (pCVar12->fields).ForearmL;
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    if (pUVar37 == (UnityEngine_Transform_o *)0x0) goto label_182189ebc;
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_48.x = (pUVar17->oneVector).fields.x;
    local_48.y = (pUVar17->oneVector).fields.y;
    local_48.z = (pUVar17->oneVector).fields.z;
    UnityEngine_Transform__set_localScale(pUVar37,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
  }
  else {
    pCVar12 = (__this->fields).BasicCache;
    if ((pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar37 = (pCVar12->fields).ForearmL, pUVar37 == (UnityEngine_Transform_o *)0x0)) goto label_182189ebc;
    local_58.fields.x = 0.01;
    local_58.fields.y = 0.01;
    local_58.fields.z = 0.01;
    UnityEngine_Transform__set_localScale(pUVar37,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182189ebc;
    pUVar37 = (pCVar12->fields).ForearmL;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    if (pUVar37 == (UnityEngine_Transform_o *)0x0) goto label_182189ebc;
    pUVar16 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_48.x = (pUVar16->identityQuaternion).fields.x;
    local_48.y = (pUVar16->identityQuaternion).fields.y;
    local_48.z = (pUVar16->identityQuaternion).fields.z;
    local_48.w = (pUVar16->identityQuaternion).fields.w;
    UnityEngine_Transform__set_localRotation(pUVar37,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
  }
  if (((__this->fields).RightArmDisabled == false) || ((__this->fields)._rightArmDisabledTimeLeft < 6.5)) {
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182189ebc;
    pUVar37 = (pCVar12->fields).ForearmR;
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    if (pUVar37 == (UnityEngine_Transform_o *)0x0) goto label_182189ebc;
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_48.x = (pUVar17->oneVector).fields.x;
    local_48.y = (pUVar17->oneVector).fields.y;
    local_48.z = (pUVar17->oneVector).fields.z;
    UnityEngine_Transform__set_localScale(pUVar37,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
  }
  else {
    pCVar12 = (__this->fields).BasicCache;
    if ((pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar37 = (pCVar12->fields).ForearmR, pUVar37 == (UnityEngine_Transform_o *)0x0)) goto label_182189ebc;
    local_58.fields.x = 0.01;
    local_58.fields.y = 0.01;
    local_58.fields.z = 0.01;
    UnityEngine_Transform__set_localScale(pUVar37,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182189ebc;
    pUVar37 = (pCVar12->fields).ForearmR;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    if (pUVar37 == (UnityEngine_Transform_o *)0x0) goto label_182189ebc;
    pUVar16 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_48.x = (pUVar16->identityQuaternion).fields.x;
    local_48.y = (pUVar16->identityQuaternion).fields.y;
    local_48.z = (pUVar16->identityQuaternion).fields.z;
    local_48.w = (pUVar16->identityQuaternion).fields.w;
    UnityEngine_Transform__set_localRotation(pUVar37,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
  }
  Characters_BasicTitan__UpdateLimbCuts(__this,(MethodInfo *)0x0);
  if ((__this->fields).AI == false) {
    pCVar18 = (__this->fields).BasicAnimations;
    if ((pCVar18 != (Characters_BasicTitanAnimations_o *)0x0) &&
       (__this_00 = (__this->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
      bVar30 = Characters_AnimationHandler__IsPlaying
                         (__this_00,(pCVar18->fields).RunCrawler,(MethodInfo *)0x0);
      if (!bVar30) goto label_182189e90;
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pUVar37 = (pCVar12->fields).Body;
        local_58.fields.x = -1.5707964;
        local_58.fields.y = 0.0;
        local_58.fields.z = 0.0;
        pUVar33 = UnityEngine_Quaternion__Internal_FromEulerRad
                            (local_38,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        if (pUVar37 != (UnityEngine_Transform_o *)0x0) {
          local_48.x = (pUVar33->fields).x;
          local_48.y = (pUVar33->fields).y;
          local_48.z = (pUVar33->fields).z;
          local_48.w = (pUVar33->fields).w;
          UnityEngine_Transform__set_localRotation
                    (pUVar37,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
          pCVar12 = (__this->fields).BasicCache;
          if ((pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar37 = (pCVar12->fields).Core, pUVar37 != (UnityEngine_Transform_o *)0x0)) {
            local_58.fields.x = 0.0;
            local_58.fields.y = -0.05;
            local_58.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition
                      (pUVar37,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
            goto label_182189e90;
          }
        }
      }
    }
label_182189ebc:
    ThrowNullReferenceException();
  }
label_182189e90:
  Characters_BasicTitan__UpdateDeathDissolve(__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$EnsureLimbMesh
// il2cpp: void Characters_BasicTitan__EnsureLimbMesh (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821863e0

void Characters_BasicTitan__EnsureLimbMesh(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  System_String_o *path;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Transform_o *rightHand;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_SkinnedMeshRenderer_o *renderer;
  UnityEngine_Material_o *woundMaterial;
  Characters_TitanLimbMesh_o *__this_00;
  
  if (Il2CppMethodInitialized_184346e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Bodies/Materials/TitanWound");
    Il2CppMethodInitialized_184346e16 = '\x01';
  }
  if ((__this->fields)._limbMesh == (Characters_TitanLimbMesh_o *)0x0) {
    pUVar2 = (__this->fields).Cache;
    if (((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
        (pUVar4 = (pUVar2->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
       (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Body",(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      renderer = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_6651A0 *)
                            MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      woundMaterial =
           (UnityEngine_Material_o *)
           ApplicationManagers_ResourceManager__LoadAsset(path,"Titans/Bodies/Materials/TitanWound",true,(MethodInfo *)0x0);
      if (woundMaterial != (UnityEngine_Material_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
        if (((woundMaterial->klass->_2).typeHierarchyDepth < bVar1) ||
           ((woundMaterial->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
          il2cpp_codegen_raise_invalid_cast_exception(woundMaterial);
        }
      }
      pCVar3 = (__this->fields).BasicCache;
      if (pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pUVar4 = (pCVar3->fields).HandL;
        rightHand = (((__this->fields).BasicCache)->fields).HandR;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
        Characters_TitanLimbMesh___ctor(__this_00,renderer,pUVar4,rightHand,woundMaterial,(MethodInfo *)0x0);
        (__this->fields)._limbMesh = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._limbMesh,__this_00);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Characters.BasicTitan$$UpdateLimbCuts
// il2cpp: void Characters_BasicTitan__UpdateLimbCuts (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182190ee0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219103d: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x182191042: movaps xmm6, xmmword ptr [rsp + 0x40]

void Characters_BasicTitan__UpdateLimbCuts(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float *pfVar1;
  Characters_TitanLimbMesh_o *__this_00;
  char cVar2;
  bool rightRegrowing;
  bool leftRegrowing;
  char cVar3;
  
  if ((__this->fields)._deathDissolve == (Characters_TitanDeathDissolve_o *)0x0) {
    cVar3 = '\x01';
    cVar2 = '\x01';
    if ((__this->fields).LeftHandDisabled == false) {
      cVar2 = (__this->fields).LeftArmDisabled;
    }
    if ((__this->fields).RightHandDisabled == false) {
      cVar3 = (__this->fields).RightArmDisabled;
    }
    if (cVar2 == '\0') {
      if (cVar3 == '\0') {
        if ((__this->fields)._limbCutsVisible == false) {
          return;
        }
        (__this->fields)._limbCutsVisible = false;
        Characters_BasicTitan__EnsureLimbMesh(__this,(MethodInfo *)0x0);
        leftRegrowing = false;
      }
      else {
        (__this->fields)._limbCutsVisible = true;
        Characters_BasicTitan__EnsureLimbMesh(__this,(MethodInfo *)0x0);
        leftRegrowing = false;
      }
    }
    else {
      (__this->fields)._limbCutsVisible = true;
      Characters_BasicTitan__EnsureLimbMesh(__this,(MethodInfo *)0x0);
      pfVar1 = &(__this->fields)._leftArmDisabledTimeLeft;
      leftRegrowing = *pfVar1 <= 6.5 && *pfVar1 != 6.5;
    }
    __this_00 = (__this->fields)._limbMesh;
    if (cVar3 == '\0') {
      rightRegrowing = false;
    }
    else {
      pfVar1 = &(__this->fields)._rightArmDisabledTimeLeft;
      rightRegrowing = *pfVar1 <= 6.5 && *pfVar1 != 6.5;
    }
    if (__this_00 == (Characters_TitanLimbMesh_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_TitanLimbMesh__SetDisabled
              (__this_00,(__this->fields).LeftHandDisabled,(__this->fields).RightHandDisabled,
               (__this->fields).LeftArmDisabled,(__this->fields).RightArmDisabled,leftRegrowing,rightRegrowing
               ,(MethodInfo *)0x0);
    Characters_BasicTitan__UpdateLimbRegrowth
              (__this,true,(__this->fields).LeftArmDisabled,(__this->fields).LeftHandDisabled,
               (__this->fields)._leftArmDisabledTimeLeft,(MethodInfo *)0x0);
    Characters_BasicTitan__UpdateLimbRegrowth
              (__this,false,(__this->fields).RightArmDisabled,(__this->fields).RightHandDisabled,
               (__this->fields)._rightArmDisabledTimeLeft,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BasicTitan$$GetLimbRegrowthProgress
// il2cpp: float Characters_BasicTitan__GetLimbRegrowthProgress (float timeLeft, bool arm, const MethodInfo* method);
// 0x182186e70

float Characters_BasicTitan__GetLimbRegrowthProgress(float timeLeft,bool arm,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 6.5 - timeLeft;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (6.5 < fVar1) {
    fVar1 = 6.5;
  }
  if (arm) {
    if (3.5 < fVar1) {
      fVar1 = (float)il2cpp_runtime_helper_1804f6b50(1.0 - (fVar1 - 3.5) / 3.0,0x3fc00000);
      fVar1 = 1.0 - fVar1;
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
      else if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
      return fVar1 * 0.36363637 + 0.6363636;
    }
    return fVar1 / 5.5;
  }
  return fVar1 / 6.5;
}


// Characters.BasicTitan$$UpdateLimbRegrowth
// il2cpp: void Characters_BasicTitan__UpdateLimbRegrowth (Characters_BasicTitan_o* __this, bool left, bool armDisabled, bool handDisabled, float timeLeft, const MethodInfo* method);
// 0x182191130
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219124b: mov rdx, rsi
// asm:   0x18219124e: jmp 0x18219125c
// asm:   0x182191250: test rdi, rdi
// asm:   0x182191259: mov rdx, rdi

void Characters_BasicTitan__UpdateLimbRegrowth
               (Characters_BasicTitan_o *__this,bool left,bool armDisabled,bool handDisabled,float timeLeft,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Characters_BasicTitanComponentCache_o *pCVar12;
  Characters_TitanLimbMesh_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar13;
  UnityEngine_Vector3_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_ParticleSystem_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_ParticleSystem_o *__this_03;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_o local_98 [10];
  
  if (Il2CppMethodInitialized_184346e17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_184346e17 = '\x01';
  }
  pCVar12 = (__this->fields).BasicCache;
  if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
    if (left) {
      __this_03 = (pCVar12->fields).ForearmSmokeL;
      pUVar16 = (pCVar12->fields).ForearmL;
      __this_02 = (pCVar12->fields).HandL;
    }
    else {
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182191598;
      __this_03 = (pCVar12->fields).ForearmSmokeR;
      pUVar16 = (pCVar12->fields).ForearmR;
      __this_02 = (pCVar12->fields).HandR;
    }
    if (armDisabled || handDisabled) {
      if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
      }
      fVar17 = Characters_BasicTitan__GetLimbRegrowthProgress(timeLeft,armDisabled,(MethodInfo *)0x0);
    }
    else {
      fVar17 = 0.0;
    }
    pUVar15 = pUVar16;
    if (handDisabled) {
      pUVar15 = __this_02;
    }
    if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
      pUVar14 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_a8,pUVar15,(MethodInfo *)0x0);
      uVar7._0_4_ = (pUVar14->fields).x;
      uVar7._4_4_ = (pUVar14->fields).y;
      __this_00 = (__this->fields)._limbMesh;
      if (__this_00 != (Characters_TitanLimbMesh_o *)0x0) {
        local_a8._0_8_ = uVar7;
        local_a8.z = (pUVar14->fields).z;
        pUVar14 = Characters_TitanLimbMesh__UpdateRegrowth
                            (local_98,__this_00,left,armDisabled,fVar17,(UnityEngine_Vector3_o *)&local_a8,
                             (__this->fields).EffectsEnabled,(MethodInfo *)0x0);
        fVar17 = (pUVar14->fields).x;
        fVar1 = (pUVar14->fields).y;
        fVar2 = (pUVar14->fields).z;
        if (armDisabled) {
          pCVar12 = (__this->fields).BasicCache;
          if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_182191598;
          if (left) {
            __this_01 = (pCVar12->fields).ForearmBloodL;
          }
          else {
            __this_01 = (pCVar12->fields).ForearmBloodR;
          }
          if ((__this_01 == (UnityEngine_ParticleSystem_o *)0x0) ||
             (pUVar15 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
             pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182191598;
          pUVar14 = UnityEngine_Transform__get_position(local_98,pUVar16,(MethodInfo *)0x0);
          uVar3 = (pUVar14->fields).x;
          uVar8 = (pUVar14->fields).y;
          fVar22 = (pUVar14->fields).z;
          if (Il2CppMethodInitialized_18434494b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18434494b = '\x01';
          }
          fVar19 = (__this->fields).Size * 0.1;
          pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar4 = (pUVar13->downVector).fields.x;
          uVar9 = (pUVar13->downVector).fields.y;
          uVar20._0_4_ = (float)uVar4 * fVar19 + (float)uVar3;
          uVar20._4_4_ = (float)uVar9 * fVar19 + (float)uVar8;
          if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_182191598;
          local_a8.z = fVar19 * (pUVar13->downVector).fields.z + fVar22;
          local_a8._0_8_ = uVar20;
          UnityEngine_Transform__set_position(pUVar15,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
        }
        if ((__this_02 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar14 = UnityEngine_Transform__get_position(local_98,__this_02,(MethodInfo *)0x0),
           pUVar16 != (UnityEngine_Transform_o *)0x0)) {
          uVar5 = (pUVar14->fields).x;
          uVar10 = (pUVar14->fields).y;
          fVar22 = (pUVar14->fields).z;
          pUVar14 = UnityEngine_Transform__get_position(local_98,pUVar16,(MethodInfo *)0x0);
          uVar6 = (pUVar14->fields).x;
          uVar11 = (pUVar14->fields).y;
          fVar22 = fVar22 - (pUVar14->fields).z;
          local_a8.y = (float)uVar10 - (float)uVar11;
          local_a8.x = (float)uVar5 - (float)uVar6;
          local_a8.z = fVar22;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar19 = (float)il2cpp_runtime_helper_180546a40(&local_a8);
          if (fVar19 <= 1e-05) {
            pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar21 = (pUVar13->zeroVector).fields.x;
            fVar23 = (pUVar13->zeroVector).fields.y;
            fVar22 = (pUVar13->zeroVector).fields.z;
          }
          else {
            fVar21 = ((float)uVar5 - (float)uVar6) / fVar19;
            fVar23 = ((float)uVar10 - (float)uVar11) / fVar19;
            fVar22 = fVar22 / fVar19;
          }
          if (__this_03 != (UnityEngine_ParticleSystem_o *)0x0) {
            pUVar16 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            fVar19 = (__this->fields).Size * 0.15;
            if (Il2CppMethodInitialized_18434494b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18434494b = '\x01';
            }
            fVar18 = (__this->fields).Size * 0.2;
            if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
              pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_a8.z = fVar18 * (pUVar13->downVector).fields.z + fVar22 * fVar19 + fVar2;
              local_a8.y = fVar18 * (pUVar13->downVector).fields.y + fVar23 * fVar19 + fVar1;
              local_a8.x = fVar18 * (pUVar13->downVector).fields.x + fVar21 * fVar19 + fVar17;
              UnityEngine_Transform__set_position
                        (pUVar16,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_182191598:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateAnimationColliders
// il2cpp: void Characters_BasicTitan__UpdateAnimationColliders (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218d0c0

void Characters_BasicTitan__UpdateAnimationColliders(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (((__this->fields)._deathDissolve != (Characters_TitanDeathDissolve_o *)0x0) &&
     ((((__this->fields)._deathDissolve)->fields)._CollidersDisabled_k__BackingField != false)) {
    return;
  }
  bVar1 = (*(__this->klass->vtable)._199_IsPlayingSitAnimation.methodPtr)
                    (__this,(__this->klass->vtable)._199_IsPlayingSitAnimation.method);
  (*(__this->klass->vtable)._197_ToggleSitPushbox.methodPtr)
            (__this,bVar1,(__this->klass->vtable)._197_ToggleSitPushbox.method);
  return;
}


// Characters.BasicTitan$$UpdateDeathDissolve
// il2cpp: void Characters_BasicTitan__UpdateDeathDissolve (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182190400
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182190598: movaps xmm6, xmmword ptr [rsp + 0x30]
// asm:   0x18219059d: movaps xmm7, xmmword ptr [rsp + 0x20]

void Characters_BasicTitan__UpdateDeathDissolve(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  Outline_o *pOVar3;
  bool bVar4;
  Characters_TitanDeathDissolve_o *pCVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346e18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    Il2CppMethodInitialized_184346e18 = '\x01';
  }
  if ((__this->fields).Dead != false) {
    fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar6 = (fVar6 - (__this->fields)._deathVisualStartTime) - 3.0;
    Characters_BasicTitan__UpdateDeathSounds(__this,fVar6,(MethodInfo *)0x0);
    if (fVar6 < 0.0) {
      return;
    }
    if ((__this->fields)._deathDissolve == (Characters_TitanDeathDissolve_o *)0x0) {
      Characters_BasicTitan__UpdateLimbCuts(__this,(MethodInfo *)0x0);
      pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
      Characters_TitanDeathDissolve___ctor(pCVar5,__this,(MethodInfo *)0x0);
      (__this->fields)._deathDissolve = pCVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._deathDissolve,pCVar5);
      pCVar1 = (__this->fields).BasicCache;
      if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar2 = (pCVar1->fields).ForearmSmokeL, pUVar2 == (UnityEngine_ParticleSystem_o *)0x0))
      goto label_1821905a8;
      UnityEngine_ParticleSystem__Stop_2fca820(pUVar2,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).BasicCache;
      if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar2 = (pCVar1->fields).ForearmSmokeR, pUVar2 == (UnityEngine_ParticleSystem_o *)0x0))
      goto label_1821905a8;
      UnityEngine_ParticleSystem__Stop_2fca820(pUVar2,(MethodInfo *)0x0);
      pOVar3 = (__this->fields).OutlineComponent;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pOVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pOVar3 = (__this->fields).OutlineComponent;
        if (pOVar3 == (Outline_o *)0x0) goto label_1821905a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar3,false,(MethodInfo *)0x0);
      }
    }
    fVar6 = fVar6 / 6.0;
    pCVar5 = (__this->fields)._deathDissolve;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    if (pCVar5 == (Characters_TitanDeathDissolve_o *)0x0) {
label_1821905a8:
      ThrowNullReferenceException();
    }
    Characters_TitanDeathDissolve__Update(pCVar5,fVar6,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BasicTitan$$UpdateDeathSounds
// il2cpp: void Characters_BasicTitan__UpdateDeathSounds (Characters_BasicTitan_o* __this, float dissolveElapsed, const MethodInfo* method);
// 0x1821905b0

void Characters_BasicTitan__UpdateDeathSounds
               (Characters_BasicTitan_o *__this,float dissolveElapsed,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  UnityEngine_AudioSource_o *__this_01;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346e19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346e19 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,
                             (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathFall,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
      if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
        bVar2 = UnityEngine_AudioSource__get_isPlaying(__this_01,(MethodInfo *)0x0);
        if (bVar2) {
          fVar3 = UnityEngine_AudioSource__get_time(__this_01,(MethodInfo *)0x0);
          fVar3 = (1.2 - fVar3) / 0.2;
          if (fVar3 < 0.0) {
            fVar3 = 0.0;
          }
          else if (1.0 < fVar3) {
            fVar3 = 1.0;
          }
          UnityEngine_AudioSource__set_volume
                    (__this_01,fVar3 * (__this->fields)._deathFallSoundVolume,(MethodInfo *)0x0);
          if ((fVar3 <= 0.0) || (0.0 <= dissolveElapsed)) {
            UnityEngine_AudioSource__Stop_2eb4660(__this_01,(MethodInfo *)0x0);
          }
        }
        fVar3 = dissolveElapsed + dissolveElapsed;
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        fVar4 = 6.25 - dissolveElapsed;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        else if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
        Characters_BasicTitan__SetSteamVolume(__this,fVar4 * fVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$OnDestroy
// il2cpp: void Characters_BasicTitan__OnDestroy (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x18218a830

void Characters_BasicTitan__OnDestroy(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_TitanDeathDissolve_o *__this_00;
  Characters_TitanLimbMesh_o *__this_01;
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  bool bVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (Il2CppMethodInitialized_184346e1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e1a = '\x01';
  }
  __this_00 = (__this->fields)._deathDissolve;
  if (__this_00 != (Characters_TitanDeathDissolve_o *)0x0) {
    Characters_TitanDeathDissolve__Dispose(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._limbMesh;
  if (__this_01 != (Characters_TitanLimbMesh_o *)0x0) {
    Characters_TitanLimbMesh__Dispose(__this_01,(MethodInfo *)0x0);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
    pUVar2 = (pCVar1->fields).ForearmSmokeL;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pCVar1 = (__this->fields).BasicCache;
      if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar2 = (pCVar1->fields).ForearmSmokeL, pUVar2 == (UnityEngine_ParticleSystem_o *)0x0))
      goto label_18218a995;
      pUVar4 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar4,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields).BasicCache;
    if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
      pUVar2 = (pCVar1->fields).ForearmSmokeR;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar1 = (__this->fields).BasicCache;
        if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).ForearmSmokeR, pUVar2 == (UnityEngine_ParticleSystem_o *)0x0))
        goto label_18218a995;
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar4,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_18218a995:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetFootstepPhase
// il2cpp: int32_t Characters_BasicTitan__GetFootstepPhase (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182186900
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821869e9: mov edi, ebp
// asm:   0x1821869eb: mov eax, ebp
// asm:   0x1821869ed: nop dword ptr [rax]
// asm:   0x182186a2b: mov r14, qword ptr [rip + 0x1ef84f6]  ; ""
// asm:   0x182186a32: jmp 0x182186a38

int32_t Characters_BasicTitan__GetFootstepPhase(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_String_array *pSVar3;
  bool bVar4;
  bool bVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  uint uVar8;
  MethodInfo *pMVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_184346e1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346e1b = '\x01';
  }
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
label_182186c3e:
    ThrowNullReferenceException();
  }
  pCVar2 = (__this->fields).Animation;
  pSVar7 = (*(pCVar1->klass->vtable)._7_get_Walk.methodPtr)(pCVar1,(pCVar1->klass->vtable)._7_get_Walk.method)
  ;
  if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_182186c3e;
  pMVar9 = (MethodInfo *)0x0;
  bVar4 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar7,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar2 = (__this->fields).Animation;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_182186c3e;
    fVar10 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
    fVar10 = il2cpp_runtime_helper_1804f41a0(fVar10,1.0,pMVar9);
    if (0.1 <= fVar10) {
      bVar4 = fVar10 < 0.6;
label_182186be6:
      return (uint)bVar4;
    }
    goto label_182186bab;
  }
  if (Il2CppMethodInitialized_184346e1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346e1c = '\x01';
  }
  pCVar1 = (__this->fields).BasicAnimations;
  if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
     (pCVar2 = (__this->fields).Animation, pCVar2 == (Characters_AnimationHandler_o *)0x0))
  goto label_182186c3e;
  bVar4 = Characters_AnimationHandler__IsPlaying(pCVar2,(pCVar1->fields).RunCrawler,(MethodInfo *)0x0);
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_182186c3e;
  uVar8 = 0;
  if (bVar4) {
    pSVar7 = (pCVar1->fields).RunCrawler;
  }
  else {
    pSVar3 = (pCVar1->fields).Runs;
    if (pSVar3 == (System_String_array *)0x0) goto label_182186c3e;
    for (; pSVar7 = "", (int)uVar8 < (int)pSVar3->max_length; uVar8 = uVar8 + 1) {
      if ((uint)pSVar3->max_length <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_182186c3e;
      pSVar7 = pSVar3->m_Items[(int)uVar8];
      bVar4 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar7,(MethodInfo *)0x0);
      if (bVar4) break;
    }
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar4 = System_String__op_Inequality(pSVar7,"",(MethodInfo *)0x0);
  pCVar2 = (__this->fields).Animation;
  if (bVar4) {
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_182186c3e;
    fVar10 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
    fVar10 = il2cpp_runtime_helper_1804f41a0(fVar10,1.0,pMVar9);
    if (0.0 <= fVar10) {
      bVar4 = 0.5 <= fVar10;
      goto label_182186be6;
    }
label_182186b9e:
    iVar6 = 1;
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
       (pSVar7 = (*(pCVar1->klass->vtable)._19_get_Turn90L.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._19_get_Turn90L.method),
       pCVar2 == (Characters_AnimationHandler_o *)0x0)) goto label_182186c3e;
    bVar4 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar7,(MethodInfo *)0x0);
    if (bVar4) {
      bVar4 = true;
    }
    else {
      pCVar1 = (__this->fields).BasicAnimations;
      if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
         (pCVar2 = (__this->fields).Animation, pCVar2 == (Characters_AnimationHandler_o *)0x0))
      goto label_182186c3e;
      bVar4 = Characters_AnimationHandler__IsPlaying(pCVar2,(pCVar1->fields).Turn90LCrawler,(MethodInfo *)0x0)
      ;
      if (!bVar4) {
        pCVar1 = (__this->fields).BasicAnimations;
        if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_182186c3e;
        pCVar2 = (__this->fields).Animation;
        pSVar7 = (*(pCVar1->klass->vtable)._20_get_Turn90R.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._20_get_Turn90R.method);
        if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_182186c3e;
        bVar5 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar7,(MethodInfo *)0x0);
        if (!bVar5) {
          pCVar1 = (__this->fields).BasicAnimations;
          if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
             (pCVar2 = (__this->fields).Animation, pCVar2 == (Characters_AnimationHandler_o *)0x0))
          goto label_182186c3e;
          bVar5 = Characters_AnimationHandler__IsPlaying
                            (pCVar2,(pCVar1->fields).Turn90RCrawler,(MethodInfo *)0x0);
          if (!bVar5) {
            return (__this->fields)._stepPhase;
          }
        }
      }
    }
    pCVar2 = (__this->fields).Animation;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_182186c3e;
    fVar10 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
    if (fVar10 < 0.4) {
      (__this->fields)._stepPhase = 0;
    }
    else {
      if (bVar4 == false) {
        fVar11 = 0.8;
      }
      else {
        fVar11 = 0.85;
      }
      if (fVar10 < fVar11) goto label_182186b9e;
    }
label_182186bab:
    iVar6 = 0;
  }
  return iVar6;
}


// Characters.BasicTitan$$GetPlayingRunAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetPlayingRunAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821871a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182187253: mov rax, rbp
// asm:   0x18218726b: mov rax, qword ptr [rip + 0x1ef7cb6]  ; ""
// asm:   0x182187272: jmp 0x182187256

System_String_o *
Characters_BasicTitan__GetPlayingRunAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_String_array *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184346e1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346e1c = '\x01';
  }
  pCVar1 = (__this->fields).BasicAnimations;
  if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
     (pCVar2 = (__this->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
    bVar4 = Characters_AnimationHandler__IsPlaying(pCVar2,(pCVar1->fields).RunCrawler,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      if (bVar4) {
        pSVar5 = (pCVar1->fields).RunCrawler;
      }
      else {
        pSVar3 = (pCVar1->fields).Runs;
        if (pSVar3 == (System_String_array *)0x0) goto label_18218727a;
        for (uVar6 = 0; pSVar5 = "", (int)uVar6 < (int)pSVar3->max_length;
            uVar6 = uVar6 + 1) {
          if ((uint)pSVar3->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          pCVar2 = (__this->fields).Animation;
          if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_18218727a;
          pSVar5 = pSVar3->m_Items[(int)uVar6];
          bVar4 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar5,(MethodInfo *)0x0);
          if (bVar4) {
            return pSVar5;
          }
        }
      }
      return pSVar5;
    }
  }
label_18218727a:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$CheckGround
// il2cpp: void Characters_BasicTitan__CheckGround (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x182184990

void Characters_BasicTitan__CheckGround(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar6;
  byte bVar11;
  Characters_BaseTitanComponentCache_o *pCVar12;
  UnityEngine_CapsuleCollider_o *__this_00;
  UnityEngine_Component_o *pUVar13;
  Utility_BaseComponentCache_o *pUVar14;
  UnityEngine_Vector3_StaticFields *pUVar15;
  bool bVar16;
  int32_t layerMask;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Vector3_o *pUVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int32_t local_res8;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Touch_Fields local_c8 [2];
  
  if (Il2CppMethodInitialized_184346e1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346e1d = '\x01';
  }
  pCVar12 = (__this->fields).BaseTitanCache;
  local_res8 = 0;
  local_c8[0].m_RawPosition.fields.y = 0.0;
  local_c8[0].m_PositionDelta.fields.x = 0.0;
  local_c8[0].m_PositionDelta.fields.y = 0.0;
  local_c8[0].m_FingerId = 0;
  local_c8[0].m_Position.fields.x = 0.0;
  local_c8[0].m_Position.fields.y = 0.0;
  local_c8[0].m_RawPosition.fields.x = 0.0;
  local_c8[0].m_TimeDelta = 0.0;
  local_c8[0].m_TapCount = 0;
  local_c8[0].m_Phase = 0;
  local_c8[0].m_Type = 0;
  if (pCVar12 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_182184f1b;
  __this_00 = (UnityEngine_CapsuleCollider_o *)(pCVar12->fields).Movebox;
  if (__this_00 != (UnityEngine_CapsuleCollider_o *)0x0) {
    bVar11 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar11) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  if (((__this->fields).State == 6) || ((__this->fields).State == 5)) {
    if (__this_00 == (UnityEngine_CapsuleCollider_o *)0x0) goto label_182184f1b;
    fVar19 = (__this->fields)._originalCapsuleValue * 0.7;
    if ((__this->fields).IsCrawler == false) {
      UnityEngine_CapsuleCollider__set_radius(__this_00,fVar19,(MethodInfo *)0x0);
    }
    else {
label_182184ae0:
      UnityEngine_CapsuleCollider__set_height(__this_00,fVar19,(MethodInfo *)0x0);
    }
  }
  else {
    if (__this_00 == (UnityEngine_CapsuleCollider_o *)0x0) goto label_182184f1b;
    if ((__this->fields).IsCrawler == false) {
      fVar19 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
      if (fVar19 != (__this->fields)._originalCapsuleValue) {
        UnityEngine_CapsuleCollider__set_radius
                  (__this_00,(__this->fields)._originalCapsuleValue,(MethodInfo *)0x0);
      }
    }
    else {
      fVar19 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
      if (fVar19 != (__this->fields)._originalCapsuleValue) {
        fVar19 = (__this->fields)._originalCapsuleValue;
        goto label_182184ae0;
      }
    }
  }
  if ((__this->fields).IsCrawler == false) {
    Characters_BaseTitan__CheckGround((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
    return;
  }
  pCVar12 = (__this->fields).BaseTitanCache;
  if (((pCVar12 != (Characters_BaseTitanComponentCache_o *)0x0) &&
      (pUVar13 = (UnityEngine_Component_o *)(pCVar12->fields).Movebox,
      pUVar13 != (UnityEngine_Component_o *)0x0)) &&
     (pUVar17 = UnityEngine_Component__get_transform(pUVar13,(MethodInfo *)0x0),
     pUVar17 != (UnityEngine_Transform_o *)0x0)) {
    pUVar18 = UnityEngine_Transform__get_lossyScale
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar17,(MethodInfo *)0x0);
    fVar19 = (pUVar18->fields).x;
    fVar20 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
    pCVar12 = (__this->fields).BaseTitanCache;
    if (((pCVar12 != (Characters_BaseTitanComponentCache_o *)0x0) &&
        (pUVar13 = (UnityEngine_Component_o *)(pCVar12->fields).Movebox,
        pUVar13 != (UnityEngine_Component_o *)0x0)) &&
       (pUVar17 = UnityEngine_Component__get_transform(pUVar13,(MethodInfo *)0x0),
       pUVar17 != (UnityEngine_Transform_o *)0x0)) {
      fVar20 = fVar20 * fVar19;
      pUVar18 = UnityEngine_Transform__get_lossyScale
                          ((UnityEngine_Vector3_o *)&local_d8,pUVar17,(MethodInfo *)0x0);
      fVar19 = (pUVar18->fields).x;
      fVar21 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
      pUVar14 = (__this->fields).Cache;
      if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar17 = (pUVar14->fields).Transform, pUVar17 != (UnityEngine_Transform_o *)0x0)) {
        pUVar18 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_d8,pUVar17,(MethodInfo *)0x0);
        uVar2 = (pUVar18->fields).x;
        uVar7 = (pUVar18->fields).y;
        fVar26 = (pUVar18->fields).z;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar14 = (__this->fields).Cache;
        fVar25 = fVar20 + 1.0;
        pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar3 = (pUVar15->upVector).fields.x;
        uVar8 = (pUVar15->upVector).fields.y;
        fVar23 = (float)uVar3 * fVar25 + (float)uVar2;
        fVar24 = (float)uVar8 * fVar25 + (float)uVar7;
        if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar17 = (pUVar14->fields).Transform, pUVar17 != (UnityEngine_Transform_o *)0x0)) {
          fVar1 = (pUVar15->upVector).fields.z;
          fVar19 = (fVar21 * fVar19 - (fVar20 + fVar20)) * 0.5;
          pUVar18 = UnityEngine_Transform__get_forward
                              ((UnityEngine_Vector3_o *)&local_d8,pUVar17,(MethodInfo *)0x0);
          pUVar14 = (__this->fields).Cache;
          uVar4 = (pUVar18->fields).x;
          uVar9 = (pUVar18->fields).y;
          if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar17 = (pUVar14->fields).Transform, pUVar17 != (UnityEngine_Transform_o *)0x0)) {
            fVar21 = (pUVar18->fields).z;
            fVar26 = fVar1 * fVar25 + fVar26;
            pUVar18 = UnityEngine_Transform__get_forward
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar17,(MethodInfo *)0x0);
            uVar5 = (pUVar18->fields).x;
            uVar10 = (pUVar18->fields).y;
            fVar25 = (pUVar18->fields).z;
            (__this->fields).JustGrounded = false;
            if (Il2CppMethodInitialized_18434494b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18434494b = '\x01';
            }
            pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar6._0_4_ = (pUVar15->downVector).fields.x;
            uVar6._4_4_ = (pUVar15->downVector).fields.y;
            fVar1 = (pUVar15->downVector).fields.z;
            fVar22 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                               (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
            local_res8 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                                   (__this,(__this->klass->vtable)._67_get_GroundMask.method);
            layerMask = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
            }
            local_e8.y = (float)uVar10 * fVar19 + fVar24;
            local_e8.x = (float)uVar5 * fVar19 + fVar23;
            local_d8.y = fVar24 - (float)uVar9 * fVar19;
            local_d8.x = fVar23 - (float)uVar4 * fVar19;
            local_f8._0_8_ = uVar6;
            local_f8.z = fVar1;
            local_e8.z = fVar19 * fVar25 + fVar26;
            local_d8.z = fVar26 - fVar19 * fVar21;
            bVar16 = UnityEngine_Physics__CapsuleCast_2fe1ad0
                               ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_e8,fVar20,
                                (UnityEngine_Vector3_o *)&local_f8,(UnityEngine_RaycastHit_o *)local_c8,
                                fVar22 + 1.0,layerMask,(MethodInfo *)0x0);
            if (bVar16) {
              if ((__this->fields).Grounded == false) {
                (__this->fields).Grounded = true;
                (__this->fields).JustGrounded = true;
              }
              fVar20 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_c8,(MethodInfo *)0x0);
              fVar19 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                                 (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
              fVar20 = fVar20 - 1.0;
              if (fVar20 < 0.0) {
                fVar19 = 0.0;
              }
              else if (fVar20 <= fVar19) {
                fVar19 = fVar20;
              }
            }
            else {
              (__this->fields).Grounded = false;
              fVar19 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                                 (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
            }
            (__this->fields)._currentGroundDistance = fVar19;
            return;
          }
        }
      }
    }
  }
label_182184f1b:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$.ctor
// il2cpp: void Characters_BasicTitan___ctor (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x1821922f0

void Characters_BasicTitan___ctor(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  System_Nullable_Quaternion__o *pSVar4;
  float fVar5;
  UnityEngine_Vector4_Fields local_48;
  System_Nullable_Vector4__Fields local_38;
  System_Nullable_Vector4__Fields local_20;
  
  if (Il2CppMethodInitialized_184346e1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    Il2CppMethodInitialized_184346e1e = '\x01';
  }
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
  local_48.x = (pUVar2->identityQuaternion).fields.x;
  local_48.y = (pUVar2->identityQuaternion).fields.y;
  local_48.z = (pUVar2->identityQuaternion).fields.z;
  local_48.w = (pUVar2->identityQuaternion).fields.w;
  local_38.value.fields.w = 0.0;
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value.fields.x = 0.0;
  local_38.value.fields.y = 0.0;
  local_38.value.fields.z = 0.0;
  System_Nullable_Vector4____ctor
            ((System_Nullable_Vector4__o *)&local_38,(UnityEngine_Vector4_o *)&local_48,
             (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Quaternion_ctor);
  (__this->fields).LateUpdateHeadRotation.fields.hasValue = local_38.hasValue;
  *(undefined3 *)&(__this->fields).LateUpdateHeadRotation.fields.field_0x1 = local_38._1_3_;
  (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = local_38.value.fields.x;
  pSVar4 = &(__this->fields).LateUpdateHeadRotation;
  (pSVar4->fields).value.fields.y = local_38.value.fields.y;
  (pSVar4->fields).value.fields.z = local_38.value.fields.z;
  (__this->fields).LateUpdateHeadRotation.fields.value.fields.w = local_38.value.fields.w;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
  local_48.x = (pUVar2->identityQuaternion).fields.x;
  local_48.y = (pUVar2->identityQuaternion).fields.y;
  local_48.z = (pUVar2->identityQuaternion).fields.z;
  local_48.w = (pUVar2->identityQuaternion).fields.w;
  local_20.value.fields.w = 0.0;
  local_20.hasValue = false;
  local_20._1_3_ = 0;
  local_20.value.fields.x = 0.0;
  local_20.value.fields.y = 0.0;
  local_20.value.fields.z = 0.0;
  System_Nullable_Vector4____ctor
            ((System_Nullable_Vector4__o *)&local_20,(UnityEngine_Vector4_o *)&local_48,
             (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Quaternion_ctor);
  (__this->fields).LateUpdateHeadRotationRecv.fields.hasValue = local_20.hasValue;
  *(undefined3 *)&(__this->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = local_20._1_3_;
  (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = local_20.value.fields.x;
  pSVar4 = &(__this->fields).LateUpdateHeadRotationRecv;
  (pSVar4->fields).value.fields.y = local_20.value.fields.y;
  (pSVar4->fields).value.fields.z = local_20.value.fields.z;
  (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = local_20.value.fields.w;
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  (__this->fields).LastGoodHeadAngle.fields.y =
       (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  (__this->fields).LastGoodHeadAngle.fields.x = fVar1;
  (__this->fields).BellyFlopTime = 5.5;
  (__this->fields).ArmDisableTime = 13.5;
  (__this->fields).RockThrow1Speed = 140.0;
  (__this->fields).RockThrowMaxAimAngle = 60.0;
  (__this->fields).RockThrowCloseAimAngle = 15.0;
  (__this->fields).RockThrowCloseAimDistance = 15.0;
  (__this->fields).RockThrowFullAimDistance = 40.0;
  (__this->fields).TargetViewId = -1;
  (__this->fields).HeadSize = 1.0;
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar5 = (pUVar3->oneVector).fields.y;
  fVar1 = (pUVar3->oneVector).fields.z;
  (__this->fields)._headScale.fields.x = (pUVar3->oneVector).fields.x;
  (__this->fields)._headScale.fields.y = fVar5;
  (__this->fields)._headScale.fields.z = fVar1;
  (__this->fields)._skinSlot = -1;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$.cctor
// il2cpp: void Characters_BasicTitan___cctor (const MethodInfo* method);
// 0x1821921a0

void Characters_BasicTitan___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184346e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal.1");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.front");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal");
    Il2CppMethodInitialized_184346e1f = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar1 = "Amarture_VER2|idle";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "Amarture_VER2|idle";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "Amarture_VER2|run.walk";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "Amarture_VER2|run.walk";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "Amarture_VER2|run.abnormal";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "Amarture_VER2|run.abnormal";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "Amarture_VER2|run.abnormal.1";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "Amarture_VER2|run.abnormal.1";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            pSVar1 = "Amarture_VER2|die.front";
            if (4 < (uint)value->max_length) {
              value->m_Items[4] = "Amarture_VER2|die.front";
              Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar1);
              TypeInfo_Characters_BasicTitan->static_fields->SizeScaledAnimations = value;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Characters_BasicTitan->static_fields->SizeScaledAnimations,value);
              return;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


