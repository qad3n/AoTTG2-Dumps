// Type: Characters.BaseTitan
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BaseTitan.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitan.cs
// --------------------------------

// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__220$$.ctor
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220___ctor (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220___ctor(Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__220$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__System_IDisposable_Dispose (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__System_IDisposable_Dispose(Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__220$$MoveNext
// il2cpp: bool Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__MoveNext (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, const MethodInfo* method);
// 0x182192c00

bool Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__MoveNext
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  Characters_BaseTitan_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Rigidbody_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  bool bVar8;
  UnityEngine_Vector3_o *pUVar9;
  Il2CppObject *__this_00;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_184346dc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForFixedUpdate);
    Il2CppMethodInitialized_184346dc9 = '\x01';
  }
  if ((1 < (uint)(__this->fields).__1__state) ||
     ((__this->fields).__1__state = -1, (__this->fields).time <= 0.0)) {
    return false;
  }
  pCVar4 = (__this->fields).__4__this;
  if (((pCVar4 != (Characters_BaseTitan_o *)0x0) &&
      (pUVar5 = (pCVar4->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar6 = (pUVar5->fields).Rigidbody, pUVar6 != (UnityEngine_Rigidbody_o *)0x0)) {
    bVar8 = UnityEngine_Rigidbody__get_isKinematic(pUVar6,(MethodInfo *)0x0);
    if (!bVar8) {
      pUVar5 = (pCVar4->fields).Cache;
      if ((pUVar5 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar6 = (pUVar5->fields).Rigidbody, pUVar6 == (UnityEngine_Rigidbody_o *)0x0)) goto label_182192e11;
      pUVar9 = UnityEngine_Rigidbody__get_linearVelocity(local_28,pUVar6,(MethodInfo *)0x0);
      local_38.x = (pUVar9->fields).x;
      local_38.y = (pUVar9->fields).y;
      local_38.z = (pUVar9->fields).z;
      fVar10 = (float)il2cpp_runtime_helper_180546a40();
      pfVar1 = &(__this->fields).maxSpeed;
      if (*pfVar1 <= fVar10 && fVar10 != *pfVar1) {
        pUVar5 = (pCVar4->fields).Cache;
        if ((pUVar5 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar6 = (pUVar5->fields).Rigidbody, pUVar6 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_182192e11;
        pUVar9 = UnityEngine_Rigidbody__get_linearVelocity(local_28,pUVar6,(MethodInfo *)0x0);
        uVar3._0_4_ = (pUVar9->fields).x;
        uVar3._4_4_ = (pUVar9->fields).y;
        fVar10 = (pUVar9->fields).z;
        local_38._0_8_ = uVar3;
        local_38.z = fVar10;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar11 = (float)il2cpp_runtime_helper_180546a40(&local_38,0);
        if (fVar11 <= 1e-05) {
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar11 = (pUVar7->zeroVector).fields.x;
          local_38.y = (pUVar7->zeroVector).fields.y;
          fVar10 = (pUVar7->zeroVector).fields.z;
        }
        else {
          local_38.y = local_38.y / fVar11;
          fVar10 = fVar10 / fVar11;
          fVar11 = (float)uVar3 / fVar11;
        }
        fVar2 = (__this->fields).maxSpeed;
        local_38.z = fVar10 * fVar2;
        local_38.y = local_38.y * fVar2;
        local_38.x = fVar11 * fVar2;
        UnityEngine_Rigidbody__set_linearVelocity(pUVar6,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0)
        ;
      }
    }
    fVar10 = (__this->fields).time;
    fVar11 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    (__this->fields).time = fVar10 - fVar11;
    __this_00 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForFixedUpdate);
    UnityEngine_WaitForFixedUpdate___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
label_182192e11:
  ThrowNullReferenceException();
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__220$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__220$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__System_Collections_IEnumerator_Reset (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, const MethodInfo* method);
// 0x182192e20

void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__System_Collections_IEnumerator_Reset
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__220_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__220$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__System_Collections_IEnumerator_get_Current (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220__System_Collections_IEnumerator_get_Current(Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<WaitAndDie>d__174$$.ctor
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__174___ctor (Characters_BaseTitan__WaitAndDie_d__174_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseTitan__WaitAndDie_d__174___ctor(Characters_BaseTitan__WaitAndDie_d__174_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseTitan.<WaitAndDie>d__174$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__174__System_IDisposable_Dispose (Characters_BaseTitan__WaitAndDie_d__174_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__WaitAndDie_d__174__System_IDisposable_Dispose(Characters_BaseTitan__WaitAndDie_d__174_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan.<WaitAndDie>d__174$$MoveNext
// il2cpp: bool Characters_BaseTitan__WaitAndDie_d__174__MoveNext (Characters_BaseTitan__WaitAndDie_d__174_o* __this, const MethodInfo* method);
// 0x182192ff0
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182193385: xor r8d, r8d
// asm:   0x182193388: mov dl, 1
// asm:   0x18219338a: call 0x182107b90  ; Characters_AnimationHandler__SetCullingType()
// asm:   0x18219338f: mov r8, qword ptr [rbx]
// asm:   0x182193392: mov rcx, rbx
// asm:   0x182193395: mov rdx, qword ptr [r8 + 0xc10]
// asm:   0x18219339c: call qword ptr [r8 + 0xc08]  ; vtable slot 173
// asm:   0x1821933a3: mov rax, qword ptr [rbx]
// asm:   0x1821933a6: mov rcx, rbx
// asm:   0x1821933a9: mov rdx, qword ptr [rax + 0xd10]
// asm:   0x1821933b0: call qword ptr [rax + 0xd08]  ; vtable slot 189
// asm:   0x1821933b6: movss xmm2, dword ptr [rip + 0x11c6272]
// asm:   0x1821933be: xor esi, esi
// asm:   0x1821933c0: xorps xmm3, xmm3
// asm:   0x1821933c3: mov qword ptr [rsp + 0x20], rsi
// asm:   0x1821933c8: mov rdx, rbp
// asm:   0x1821933cb: mov rcx, rbx
// asm:   0x1821933ce: call 0x182109a80  ; Characters_BaseCharacter__CrossFade()
// asm:   0x1821933d3: lea rcx, [rbx + 0x228]
// asm:   0x1821933da: mov dword ptr [rbx + 0xf8], 0xf
// asm:   0x1821933e4: mov rdx, rbp
// asm:   0x1821933e7: mov qword ptr [rbx + 0x228], rbp
// asm:   0x1821933ee: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1821933f3: mov dword ptr [rbx + 0x214], esi
// asm:   0x1821933f9: mov rcx, qword ptr [rip + 0x1f03630]  ; TypeInfo_UnityEngine_WaitForSeconds
// asm:   0x182193400: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x182193405: movss xmm1, dword ptr [rip + 0x11c5943]
// asm:   0x18219340d: xor r8d, r8d
// asm:   0x182193410: mov rcx, rax
// asm:   0x182193413: mov rbx, rax
// asm:   0x182193416: call 0x181d89ae0  ; UnityEngine_WaitForSeconds___ctor()
// asm:   0x18219341b: lea rcx, [rdi + 0x18]
// asm:   0x18219341f: mov qword ptr [rdi + 0x18], rbx
// asm:   0x182193423: mov rdx, rbx
// asm:   0x182193426: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18219342b: mov dword ptr [rdi + 0x10], 1
// asm:   0x182193432: jmp 0x1821932fc

bool Characters_BaseTitan__WaitAndDie_d__174__MoveNext
               (Characters_BaseTitan__WaitAndDie_d__174_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  Characters_BaseTitan_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar8;
  UnityEngine_Transform_o *pUVar9;
  Characters_BaseTitanAnimations_o *pCVar10;
  Characters_AnimationHandler_o *__this_01;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Quaternion_o *pUVar16;
  UnityEngine_GameObject_o *targetGo;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar17;
  System_String_o *pSVar18;
  float fVar19;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Quaternion_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_184346dca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346dca = '\x01';
  }
  iVar6 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar6 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_00 != (Characters_BaseTitan_o *)0x0) &&
       (pCVar10 = (__this_00->fields).BaseTitanAnimations, pCVar10 != (Characters_BaseTitanAnimations_o *)0x0)
       ) {
      pSVar18 = (*(pCVar10->klass->vtable)._12_get_Die.methodPtr)
                          (pCVar10,(pCVar10->klass->vtable)._12_get_Die.method);
      (__this_00->fields)._needFreshCore = true;
      __this_01 = (__this_00->fields).Animation;
      if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_01,true,(MethodInfo *)0x0);
        (*(__this_00->klass->vtable)._173_Ungrab.methodPtr)
                  (__this_00,(__this_00->klass->vtable)._173_Ungrab.method);
        (*(__this_00->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this_00,(__this_00->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this_00,pSVar18,0.1,0.0,(MethodInfo *)0x0);
        (__this_00->fields).State = 0xf;
        (__this_00->fields)._currentStateAnimation = pSVar18;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._currentStateAnimation,pSVar18);
        (__this_00->fields)._stateTimeLeft = 0.0;
        pPVar17 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pPVar17,2.0,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pPVar17;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar17);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        (__this->fields).__1__state = -1;
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        if (((__this_00 == (Characters_BaseTitan_o *)0x0) ||
            (pCVar8 = (__this_00->fields).BaseTitanCache,
            pCVar8 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
           (pUVar9 = (pCVar8->fields).Hip, pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_182193437;
        pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2;
        pUVar15 = UnityEngine_Transform__get_position(&local_68,pUVar9,(MethodInfo *)0x0);
        uVar2 = (pUVar15->fields).x;
        uVar4 = (pUVar15->fields).y;
        fVar7 = (pUVar15->fields).z;
        local_68.fields.x = -1.5707964;
        local_68.fields.y = 0.0;
        local_68.fields.z = 0.0;
        pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Quaternion_o *)local_58,&local_68,(MethodInfo *)0x0);
        fVar1 = (__this_00->fields).Size;
        uVar11._0_4_ = (pUVar16->fields).x;
        uVar11._4_4_ = (pUVar16->fields).y;
        uVar12._0_4_ = (pUVar16->fields).z;
        uVar12._4_4_ = (pUVar16->fields).w;
        fVar19 = (*(__this_00->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._134_get_SizeMultiplier.method);
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        local_68.fields.x = (float)uVar2;
        local_68.fields.y = (float)uVar4;
        local_68.fields.z = fVar7;
        local_58[0]._0_8_ = uVar11;
        local_58[0]._8_8_ = uVar12;
        Effects_EffectSpawner__Spawn
                  (pSVar18,&local_68,(UnityEngine_Quaternion_o *)local_58,fVar19 * fVar1,false,
                   (System_Object_array *)0x0,(MethodInfo *)0x0);
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
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    if (((__this_00 != (Characters_BaseTitan_o *)0x0) &&
        (pCVar8 = (__this_00->fields).BaseTitanCache, pCVar8 != (Characters_BaseTitanComponentCache_o *)0x0))
       && (pUVar9 = (pCVar8->fields).Hip, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1;
      pUVar15 = UnityEngine_Transform__get_position(&local_68,pUVar9,(MethodInfo *)0x0);
      uVar3 = (pUVar15->fields).x;
      uVar5 = (pUVar15->fields).y;
      fVar7 = (pUVar15->fields).z;
      local_68.fields.x = -1.5707964;
      local_68.fields.y = 0.0;
      local_68.fields.z = 0.0;
      pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Quaternion_o *)local_58,&local_68,(MethodInfo *)0x0);
      fVar1 = (__this_00->fields).Size;
      uVar13._0_4_ = (pUVar16->fields).x;
      uVar13._4_4_ = (pUVar16->fields).y;
      uVar14._0_4_ = (pUVar16->fields).z;
      uVar14._4_4_ = (pUVar16->fields).w;
      fVar19 = (*(__this_00->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._134_get_SizeMultiplier.method);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      local_68.fields.x = (float)uVar3;
      local_68.fields.y = (float)uVar5;
      local_68.fields.z = fVar7;
      local_58[0]._0_8_ = uVar13;
      local_58[0]._8_8_ = uVar14;
      Effects_EffectSpawner__Spawn
                (pSVar18,&local_68,(UnityEngine_Quaternion_o *)local_58,fVar19 * fVar1,false,
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
      pPVar17 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pPVar17,3.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pPVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar17);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
label_182193437:
  ThrowNullReferenceException();
}


// Characters.BaseTitan.<WaitAndDie>d__174$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__WaitAndDie_d__174__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseTitan__WaitAndDie_d__174_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseTitan__WaitAndDie_d__174__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseTitan__WaitAndDie_d__174_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<WaitAndDie>d__174$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__174__System_Collections_IEnumerator_Reset (Characters_BaseTitan__WaitAndDie_d__174_o* __this, const MethodInfo* method);
// 0x182193440

void Characters_BaseTitan__WaitAndDie_d__174__System_Collections_IEnumerator_Reset
               (Characters_BaseTitan__WaitAndDie_d__174_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_BaseTitan_WaitAndDie_d__174_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseTitan.<WaitAndDie>d__174$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__WaitAndDie_d__174__System_Collections_IEnumerator_get_Current (Characters_BaseTitan__WaitAndDie_d__174_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseTitan__WaitAndDie_d__174__System_Collections_IEnumerator_get_Current(Characters_BaseTitan__WaitAndDie_d__174_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan$$get_DefaultCrippleTime
// il2cpp: float Characters_BaseTitan__get_DefaultCrippleTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182a90

float
Characters_BaseTitan__get_DefaultCrippleTime(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 8.0;
}


// Characters.BaseTitan$$get_CanWallClimb
// il2cpp: bool Characters_BaseTitan__get_CanWallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_BaseTitan__get_CanWallClimb(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.BaseTitan$$get_CanSprint
// il2cpp: bool Characters_BaseTitan__get_CanSprint (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_BaseTitan__get_CanSprint(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.BaseTitan$$get_ComboStunTime
// il2cpp: float Characters_BaseTitan__get_ComboStunTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1820cf430

float
Characters_BaseTitan__get_ComboStunTime(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_LaunchSizeRatio
// il2cpp: float Characters_BaseTitan__get_LaunchSizeRatio (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182be0

float Characters_BaseTitan__get_LaunchSizeRatio(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.66;
}


// Characters.BaseTitan$$get_LaunchForce
// il2cpp: float Characters_BaseTitan__get_LaunchForce (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182bd0

float
Characters_BaseTitan__get_LaunchForce(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 250.0;
}


// Characters.BaseTitan$$get_LaunchTime
// il2cpp: float Characters_BaseTitan__get_LaunchTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x181f0e9c0

float Characters_BaseTitan__get_LaunchTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.5;
}


// Characters.BaseTitan$$get_PushForce
// il2cpp: float Characters_BaseTitan__get_PushForce (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1820cf520

float
Characters_BaseTitan__get_PushForce(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 50.0;
}


// Characters.BaseTitan$$get_PushTime
// il2cpp: float Characters_BaseTitan__get_PushTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1821779b0

float
Characters_BaseTitan__get_PushTime(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 0.5;
}


// Characters.BaseTitan$$get_GroundDistance
// il2cpp: float Characters_BaseTitan__get_GroundDistance (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1820cf430

float
Characters_BaseTitan__get_GroundDistance(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_GroundMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseTitan__get_GroundMask (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182b20

UnityEngine_LayerMask_o
Characters_BaseTitan__get_GroundMask(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return (__this->fields).TitanGroundMaskLayers;
}


// Characters.BaseTitan$$get_DefaultRunSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultRunSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182ab0

float
Characters_BaseTitan__get_DefaultRunSpeed(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 15.0;
}


// Characters.BaseTitan$$get_DefaultWalkSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultWalkSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1818b56e0

float
Characters_BaseTitan__get_DefaultWalkSpeed(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 5.0;
}


// Characters.BaseTitan$$get_DefaultJumpForce
// il2cpp: float Characters_BaseTitan__get_DefaultJumpForce (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182aa0

float Characters_BaseTitan__get_DefaultJumpForce(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 150.0;
}


// Characters.BaseTitan$$get_DefaultRotateSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultRotateSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1820cf430

float
Characters_BaseTitan__get_DefaultRotateSpeed(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_SizeMultiplier
// il2cpp: float Characters_BaseTitan__get_SizeMultiplier (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1820cf430

float
Characters_BaseTitan__get_SizeMultiplier(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_DisableCooldown
// il2cpp: float Characters_BaseTitan__get_DisableCooldown (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180560480

float
Characters_BaseTitan__get_DisableCooldown(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return 0.0;
}


// Characters.BaseTitan$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_BaseTitan__get_Gravity (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182ac0

UnityEngine_Vector3_o *
Characters_BaseTitan__get_Gravity
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  (__return_storage_ptr__->fields).x = (pUVar3->downVector).fields.x * 100.0;
  uVar1 = (pUVar3->downVector).fields.y;
  uVar2 = (pUVar3->downVector).fields.z;
  (__return_storage_ptr__->fields).y = (float)uVar1 * 100.0;
  (__return_storage_ptr__->fields).z = (float)uVar2 * 100.0;
  return __return_storage_ptr__;
}


// Characters.BaseTitan$$get_CheckGroundTime
// il2cpp: float Characters_BaseTitan__get_CheckGroundTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182a80

float Characters_BaseTitan__get_CheckGroundTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.4;
}


// Characters.BaseTitan$$get_MapObjectMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseTitan__get_MapObjectMask (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182bf0

UnityEngine_LayerMask_o
Characters_BaseTitan__get_MapObjectMask(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_184346d98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184346d98 = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if ((int)layers->max_length != 0) {
      layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Init
// il2cpp: void Characters_BaseTitan__Init (Characters_BaseTitan_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x18217d930
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217df8f: nop 
// asm:   0x18217e272: mov r15, qword ptr [rsp + 0x130]

void Characters_BaseTitan__Init
               (Characters_BaseTitan_o *__this,bool ai,System_String_o *team,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  Characters_AnimationHandler_o *pCVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar4;
  bool bVar5;
  int32_t health;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar7;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar8;
  MethodInfo *key;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  float fVar11;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_108;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_b8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_68;
  
  if (Il2CppMethodInitialized_184346d99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPause");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpeeds");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionPause");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpeedMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Health");
    il2cpp_codegen_initialize_runtime_metadata(&"SizeScaledTurnSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpForce");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnPause");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnSpeed");
    Il2CppMethodInitialized_184346d99 = '\x01';
  }
  local_108.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_108.type = 0;
  local_108._4_4_ = 0;
  local_108.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_108.m_Object.fields._version = 0;
  local_108.m_Object.fields._index = 0;
  local_108.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_108.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_108.m_Object.fields._getEnumeratorRetType = 0;
  local_108.m_Object.fields._36_4_ = 0;
  local_108.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.m_Array.fields._index = 0;
  local_108.m_Array.fields._version = 0;
  local_b8.type = 0;
  local_b8._4_4_ = 0;
  local_b8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8.m_Object.fields._version = 0;
  local_b8.m_Object.fields._index = 0;
  local_b8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b8.m_Object.fields._getEnumeratorRetType = 0;
  local_b8.m_Object.fields._36_4_ = 0;
  local_b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b8.m_Array.fields._index = 0;
  local_b8.m_Array.fields._version = 0;
  Characters_BaseCharacter__Init((Characters_BaseCharacter_o *)__this,ai,team,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(data,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (data == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18217e292;
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"RunSpeedBase");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"RunSpeedBase");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).RunSpeedBase = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"RunSpeedPerLevel");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"RunSpeedPerLevel");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).RunSpeedPerLevel = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"WalkSpeedBase");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"WalkSpeedBase");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).WalkSpeedBase = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"WalkSpeedPerLevel");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"WalkSpeedPerLevel");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).WalkSpeedPerLevel = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"JumpForce");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"JumpForce");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).JumpForce = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"RotateSpeed");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"RotateSpeed");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).RotateSpeed = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"ActionPause");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"ActionPause");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).ActionPause = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"TurnPause");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"TurnPause");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).TurnPause = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"AttackPause");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"AttackPause");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).AttackPause = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"Health");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"Health");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      health = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                         (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[35].method);
      Characters_BaseCharacter__SetHealth((Characters_BaseCharacter_o *)__this,health,(MethodInfo *)0x0);
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"AttackSpeedMultiplier");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"AttackSpeedMultiplier");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).AttackSpeedMultiplier = fVar11;
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"AttackSpeeds");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"AttackSpeeds");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      pSVar7 = SimpleJSONFixed_JSONNode__get_Values
                         (&local_68,(SimpleJSONFixed_JSONNode_o *)pSVar6,(MethodInfo *)0x0);
      local_b8.type = (pSVar7->fields).m_Enumerator.fields.type;
      local_b8._4_4_ = *(undefined4 *)&(pSVar7->fields).m_Enumerator.fields.field_0x4;
      local_b8.m_Object.fields._dictionary = (pSVar7->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar4 = &(pSVar7->fields).m_Enumerator;
      local_b8.m_Object.fields._version = (pSVar4->fields).m_Object.fields._version;
      local_b8.m_Object.fields._index = (pSVar4->fields).m_Object.fields._index;
      local_b8.m_Object.fields._current.fields.key =
           (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_b8.m_Object.fields._current.fields.value =
           *(Il2CppObject **)
            ((longlong)&(pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
      pSVar4 = &(pSVar7->fields).m_Enumerator;
      local_b8.m_Object.fields._getEnumeratorRetType = (pSVar4->fields).m_Object.fields._getEnumeratorRetType;
      local_b8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
      local_b8.m_Array.fields._list = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar4 = &(pSVar7->fields).m_Enumerator;
      local_b8.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
      local_b8.m_Array.fields._version = (pSVar4->fields).m_Array.fields._version;
      local_b8.m_Array.fields._current = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._current;
      pSVar8 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_68,
                          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
      local_108.type = (pSVar8->fields).m_Enumerator.fields.type;
      local_108._4_4_ = *(undefined4 *)&(pSVar8->fields).m_Enumerator.fields.field_0x4;
      local_108.m_Object.fields._dictionary = (pSVar8->fields).m_Enumerator.fields.m_Object.fields._dictionary
      ;
      pSVar4 = &(pSVar8->fields).m_Enumerator;
      local_108.m_Object.fields._version = (pSVar4->fields).m_Object.fields._version;
      local_108.m_Object.fields._index = (pSVar4->fields).m_Object.fields._index;
      local_108.m_Object.fields._current.fields.key =
           (pSVar8->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_108.m_Object.fields._current.fields.value =
           *(Il2CppObject **)
            ((longlong)&(pSVar8->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
      pSVar4 = &(pSVar8->fields).m_Enumerator;
      local_108.m_Object.fields._getEnumeratorRetType = (pSVar4->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_108.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
      local_108.m_Array.fields._list = (pSVar8->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar4 = &(pSVar8->fields).m_Enumerator;
      local_108.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
      local_108.m_Array.fields._version = (pSVar4->fields).m_Array.fields._version;
      local_108.m_Array.fields._current = (pSVar8->fields).m_Enumerator.fields.m_Array.fields._current;
      bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
      if (bVar5) {
        do {
          key = (MethodInfo *)
                SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
          __this_00 = (__this->fields).AttackSpeeds;
          pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"AttackSpeeds");
          if (((pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
              (pSVar9 = (*(pSVar6->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar6,key),
              pSVar9 == (System_String_o *)0x0)) ||
             (fVar11 = (float)(**(code **)((longlong)pSVar9->klass + 0x388))
                                        (pSVar9,*(undefined8 *)((longlong)pSVar9->klass + 0x390)),
             __this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0)) goto label_18217e292;
          System_Collections_Generic_Dictionary_object__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)key,
                     fVar11,(MethodInfo_147AAD0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
          bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
        } while (bVar5);
      }
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"TurnSpeed");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"TurnSpeed");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18217e292;
      fVar11 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      pCVar1 = (__this->fields).BaseTitanAnimations;
      (__this->fields).TurnSpeed = fVar11;
      if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217e292;
      pSVar9 = (*(pCVar1->klass->vtable)._19_get_Turn90L.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._19_get_Turn90L.method);
      bVar5 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
      if (bVar5) {
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217e292;
        pCVar2 = (__this->fields).Animation;
        pSVar9 = (*(pCVar1->klass->vtable)._19_get_Turn90L.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._19_get_Turn90L.method);
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217e292;
        pCVar3 = (__this->fields).Animation;
        pSVar10 = (*(pCVar1->klass->vtable)._19_get_Turn90L.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._19_get_Turn90L.method);
        if ((pCVar3 == (Characters_AnimationHandler_o *)0x0) ||
           (fVar11 = Characters_AnimationHandler__GetSpeed(pCVar3,pSVar10,(MethodInfo *)0x0),
           pCVar2 == (Characters_AnimationHandler_o *)0x0)) goto label_18217e292;
        Characters_AnimationHandler__SetSpeed
                  (pCVar2,pSVar9,fVar11 * (__this->fields).TurnSpeed,(MethodInfo *)0x0);
      }
      pCVar1 = (__this->fields).BaseTitanAnimations;
      if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217e292;
      pSVar9 = (*(pCVar1->klass->vtable)._20_get_Turn90R.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._20_get_Turn90R.method);
      bVar5 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
      if (bVar5) {
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217e292;
        pCVar2 = (__this->fields).Animation;
        pSVar9 = (*(pCVar1->klass->vtable)._20_get_Turn90R.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._20_get_Turn90R.method);
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217e292;
        pCVar3 = (__this->fields).Animation;
        pSVar10 = (*(pCVar1->klass->vtable)._20_get_Turn90R.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._20_get_Turn90R.method);
        if ((pCVar3 == (Characters_AnimationHandler_o *)0x0) ||
           (fVar11 = Characters_AnimationHandler__GetSpeed(pCVar3,pSVar10,(MethodInfo *)0x0),
           pCVar2 == (Characters_AnimationHandler_o *)0x0)) goto label_18217e292;
        Characters_AnimationHandler__SetSpeed
                  (pCVar2,pSVar9,fVar11 * (__this->fields).TurnSpeed,(MethodInfo *)0x0);
      }
    }
    bVar5 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"SizeScaledTurnSpeed");
    if (bVar5) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"SizeScaledTurnSpeed");
      if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_18217e292:
        ThrowNullReferenceException();
      }
      bVar5 = (bool)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[39].methodPtr)
                              (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[39].method);
      (__this->fields).SizeScaledTurnSpeed = bVar5;
    }
  }
  return;
}


// Characters.BaseTitan$$CreateDetection
// il2cpp: void Characters_BaseTitan__CreateDetection (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217b530

void Characters_BaseTitan__CreateDetection(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_TitanDetection_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDetection);
    Il2CppMethodInitialized_184346d9a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanDetection);
  Characters_TitanDetection___ctor(__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Detection = (Characters_BaseDetection_o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detection,__this_00);
  return;
}


// Characters.BaseTitan$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_BaseTitan__GetRootMotionAnimations (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217d420

System_Collections_Generic_Dictionary_string__float__o *
Characters_BaseTitan__GetRootMotionAnimations(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_184346d9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_184346d9b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  return __this_00;
}


// Characters.BaseTitan$$IsGrabAttack
// il2cpp: bool Characters_BaseTitan__IsGrabAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_BaseTitan__IsGrabAttack(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.BaseTitan$$IsComboAttack
// il2cpp: bool Characters_BaseTitan__IsComboAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_BaseTitan__IsComboAttack(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.BaseTitan$$get_MeleeHitType
// il2cpp: System_String_o* Characters_BaseTitan__get_MeleeHitType (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182c90

System_String_o * Characters_BaseTitan__get_MeleeHitType(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346d9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_184346d9c = '\x01';
  }
  return "Titan";
}


// Characters.BaseTitan$$get_BasicAttacksStunOnly
// il2cpp: bool Characters_BaseTitan__get_BasicAttacksStunOnly (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_BaseTitan__get_BasicAttacksStunOnly(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.BaseTitan$$get_TreatAsSmall
// il2cpp: bool Characters_BaseTitan__get_TreatAsSmall (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_BaseTitan__get_TreatAsSmall(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.BaseTitan$$get_WorldSize
// il2cpp: float Characters_BaseTitan__get_WorldSize (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217d510

float
Characters_BaseTitan__get_WorldSize(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).Size;
  fVar2 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                    (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
  return fVar2 * fVar1;
}


// Characters.BaseTitan$$IsKickAttack
// il2cpp: bool Characters_BaseTitan__IsKickAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217e4f0

bool Characters_BaseTitan__IsKickAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346d9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_184346d9d = '\x01';
  }
  bVar1 = System_String__op_Equality((__this->fields)._currentAttack,"AttackKick",(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsFinisherHit
// il2cpp: bool Characters_BaseTitan__IsFinisherHit (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217e320

bool Characters_BaseTitan__IsFinisherHit(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346d9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_184346d9d = '\x01';
  }
  bVar1 = System_String__op_Equality((__this->fields)._currentAttack,"AttackKick",(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = (*(__this->klass->vtable)._140_IsComboAttack.methodPtr)
                    (__this,(__this->klass->vtable)._140_IsComboAttack.method);
  if (!bVar1) {
    return false;
  }
  return 2 < (__this->fields)._currentAttackStage;
}


// Characters.BaseTitan$$GetFinisherReaction
// il2cpp: System_String_o* Characters_BaseTitan__GetFinisherReaction (Characters_BaseTitan_o* __this, bool kick, bool smallVictim, bool headHit, const MethodInfo* method);
// 0x18217cd80

System_String_o *
Characters_BaseTitan__GetFinisherReaction
          (Characters_BaseTitan_o *__this,bool kick,bool smallVictim,bool headHit,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346d9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    Il2CppMethodInitialized_184346d9e = '\x01';
  }
  if (!kick) {
    return "Finisher";
  }
  pSVar1 = "Stun";
  if (smallVictim) {
    pSVar1 = "Knockback";
  }
  return pSVar1;
}


// Characters.BaseTitan$$IsHeadHit
// il2cpp: bool Characters_BaseTitan__IsHeadHit (Characters_BaseTitan_o* victim, Characters_BaseHitbox_o* hitbox, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x18217e3a0

bool Characters_BaseTitan__IsHeadHit
               (Characters_BaseTitan_o *victim,Characters_BaseHitbox_o *hitbox,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Characters_BaseTitanComponentCache_o *pCVar3;
  UnityEngine_Object_o *y;
  UnityEngine_Collider_o *__this;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Bounds_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Bounds_o local_38 [2];
  
  if (Il2CppMethodInitialized_184346d9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d9f = '\x01';
  }
  if ((victim != (Characters_BaseTitan_o *)0x0) &&
     (pCVar3 = (victim->fields).BaseTitanCache, pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0)) {
    y = (UnityEngine_Object_o *)(pCVar3->fields).NapeHurtbox;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,y,(MethodInfo *)0x0);
    if (bVar4) {
      return true;
    }
    if (collider != (UnityEngine_Collider_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      pCVar3 = (victim->fields).BaseTitanCache;
      if ((pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        bVar4 = UnityEngine_Transform__IsChildOf(pUVar5,(pCVar3->fields).Head,(MethodInfo *)0x0);
        if (bVar4) {
          return true;
        }
        if ((hitbox != (Characters_BaseHitbox_o *)0x0) &&
           (__this = (hitbox->fields)._collider, __this != (UnityEngine_Collider_o *)0x0)) {
          pUVar6 = UnityEngine_Collider__get_bounds(local_38,__this,(MethodInfo *)0x0);
          pCVar3 = (victim->fields).BaseTitanCache;
          if ((pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0) &&
             (pUVar5 = (pCVar3->fields).Head, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
            fVar1 = (pUVar6->fields).m_Extents.fields.y;
            fVar2 = (pUVar6->fields).m_Center.fields.y;
            pUVar7 = UnityEngine_Transform__get_position
                               ((UnityEngine_Vector3_o *)local_38,pUVar5,(MethodInfo *)0x0);
            return (pUVar7->fields).y <= fVar1 + fVar2;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$HasMeleeReaction
// il2cpp: bool Characters_BaseTitan__HasMeleeReaction (System_String_o* type, System_String_o* reaction, const MethodInfo* method);
// 0x18217d790

bool Characters_BaseTitan__HasMeleeReaction
               (System_String_o *type,System_String_o *reaction,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346da0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_184346da0 = '\x01';
  }
  pSVar2 = System_String__Concat_1969e50("Titan",reaction,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  pSVar2 = System_String__Concat_1969e50("Shifter",reaction,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,pSVar2,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsComboStunType
// il2cpp: bool Characters_BaseTitan__IsComboStunType (System_String_o* type, const MethodInfo* method);
// 0x18217e2a0

bool Characters_BaseTitan__IsComboStunType(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346da1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ComboStun");
    Il2CppMethodInitialized_184346da1 = '\x01';
  }
  bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"ComboStun",(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsDecapitateType
// il2cpp: bool Characters_BaseTitan__IsDecapitateType (System_String_o* type, const MethodInfo* method);
// 0x18217e2e0

bool Characters_BaseTitan__IsDecapitateType(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346da2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
    Il2CppMethodInitialized_184346da2 = '\x01';
  }
  bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"Finisher",(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsKnockbackType
// il2cpp: bool Characters_BaseTitan__IsKnockbackType (System_String_o* type, const MethodInfo* method);
// 0x18217e530

bool Characters_BaseTitan__IsKnockbackType(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346da3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    Il2CppMethodInitialized_184346da3 = '\x01';
  }
  bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"Knockback",(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsMeleeHitType
// il2cpp: bool Characters_BaseTitan__IsMeleeHitType (System_String_o* type, const MethodInfo* method);
// 0x18217e570

bool Characters_BaseTitan__IsMeleeHitType(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346da4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    Il2CppMethodInitialized_184346da4 = '\x01';
  }
  bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"Stun",(MethodInfo *)0x0);
  if (!bVar1) {
    if (Il2CppMethodInitialized_184346da1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ComboStun");
      Il2CppMethodInitialized_184346da1 = '\x01';
    }
    bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"ComboStun",(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_184346da2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
        Il2CppMethodInitialized_184346da2 = '\x01';
      }
      bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"Finisher",(MethodInfo *)0x0);
      if (!bVar1) {
        if (Il2CppMethodInitialized_184346da3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
          Il2CppMethodInitialized_184346da3 = '\x01';
        }
        bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"Knockback",(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return true;
}


// Characters.BaseTitan$$GetMeleeStunTime
// il2cpp: float Characters_BaseTitan__GetMeleeStunTime (Characters_BaseTitan_o* __this, System_String_o* type, const MethodInfo* method);
// 0x18217d350

float Characters_BaseTitan__GetMeleeStunTime
                (Characters_BaseTitan_o *__this,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346da1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ComboStun");
    Il2CppMethodInitialized_184346da1 = '\x01';
  }
  bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"ComboStun",(MethodInfo *)0x0);
  if (bVar1) {
    fVar2 = (*(__this->klass->vtable)._124_get_ComboStunTime.methodPtr)
                      (__this,(__this->klass->vtable)._124_get_ComboStunTime.method);
    return fVar2;
  }
  if (Il2CppMethodInitialized_184346da3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    Il2CppMethodInitialized_184346da3 = '\x01';
  }
  bVar1 = Characters_BaseTitan__HasMeleeReaction(type,"Knockback",(MethodInfo *)0x0);
  if (!bVar1) {
    return (__this->fields).StunTime;
  }
  fVar2 = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)
                    (__this,(__this->klass->vtable)._129_get_PushTime.method);
  return fVar2;
}


// Characters.BaseTitan$$GetCurrentSpeed
// il2cpp: float Characters_BaseTitan__GetCurrentSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217cd40

float Characters_BaseTitan__GetCurrentSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  if ((__this->fields).IsWalk == false) {
    return (__this->fields).RunSpeedPerLevel * (__this->fields).Size + (__this->fields).RunSpeedBase;
  }
  return (__this->fields).WalkSpeedPerLevel * (__this->fields).Size + (__this->fields).WalkSpeedBase;
}


// Characters.BaseTitan$$get_IsMoving
// il2cpp: bool Characters_BaseTitan__get_IsMoving (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182b30

bool Characters_BaseTitan__get_IsMoving(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  if (((__this->fields).State != 1) && ((__this->fields).State != 3)) {
    return (__this->fields).State == 2;
  }
  return true;
}


// Characters.BaseTitan$$CanAction
// il2cpp: bool Characters_BaseTitan__CanAction (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217aba0

bool Characters_BaseTitan__CanAction(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  if (((__this->fields).EnableAI == false) || ((__this->fields).Dead != false)) {
    return false;
  }
  if ((__this->fields).State == 0) {
    if (0.0 < (__this->fields)._stateTimeLeft) {
label_18217abd9:
      return (__this->fields).State == 2;
    }
  }
  else if (((__this->fields).State != 1) && ((__this->fields).State != 3)) goto label_18217abd9;
  return true;
}


// Characters.BaseTitan$$CanEmote
// il2cpp: bool Characters_BaseTitan__CanEmote (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217ac10

bool Characters_BaseTitan__CanEmote(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields).AI == false) {
    bVar1 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                      (__this,(__this->klass->vtable)._145_CanAction.method);
    return bVar1;
  }
  if (((__this->fields).EnableAI != false) && ((__this->fields).Dead == false)) {
    return (__this->fields).State != 0xf;
  }
  return false;
}


// Characters.BaseTitan$$get_IsSitting
// il2cpp: bool Characters_BaseTitan__get_IsSitting (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182b50

bool Characters_BaseTitan__get_IsSitting(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  if (((((__this->fields).State == 0x14) || ((__this->fields).State == 0x16)) ||
      ((__this->fields).State == 0x13)) ||
     (((__this->fields).State == 0x11 || ((__this->fields).State == 0x12)))) {
    return true;
  }
  if ((__this->fields).State != 0x15) {
    return false;
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    fVar1 = Characters_AnimationHandler__GetCurrentNormalizedTime(__this_00,(MethodInfo *)0x0);
    return fVar1 < 0.5;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$CanStun
// il2cpp: bool Characters_BaseTitan__CanStun (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217ac50

bool Characters_BaseTitan__CanStun(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  if (((__this->fields).State != 0xd) && ((__this->fields).Dead == false)) {
    return (__this->fields).EnableAI;
  }
  return false;
}


// Characters.BaseTitan$$Jump
// il2cpp: void Characters_BaseTitan__Jump (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x18217e7f0

void Characters_BaseTitan__Jump
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *direction,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  float fVar3;
  bool bVar4;
  System_String_o *pSVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346da5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346da5 = '\x01';
  }
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar5 = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
    bVar4 = System_String__op_Equality(pSVar5,"",(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    fVar3 = (direction->fields).y;
    pCVar1 = (__this->fields).BaseTitanAnimations;
    fVar6 = (direction->fields).z;
    (__this->fields)._jumpDirection.fields.x = (direction->fields).x;
    (__this->fields)._jumpDirection.fields.y = fVar3;
    (__this->fields)._jumpDirection.fields.z = fVar6;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar5 = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
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


// Characters.BaseTitan$$StartJump
// il2cpp: void Characters_BaseTitan__StartJump (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182180a30

void Characters_BaseTitan__StartJump(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).Cache;
  (__this->fields).State = 5;
  (__this->fields)._stateTimeLeft = 0.2;
  if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar2->fields).Rigidbody;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    local_18.fields.z = (float)il2cpp_runtime_helper_180546a40(&(__this->fields)._jumpDirection,0);
    if (local_18.fields.z <= 1e-05) {
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.fields.x = (pUVar3->zeroVector).fields.x;
      local_18.fields.y = (pUVar3->zeroVector).fields.y;
      local_18.fields.z = (pUVar3->zeroVector).fields.z;
    }
    else {
      local_18.fields.x = (__this->fields)._jumpDirection.fields.x / local_18.fields.z;
      local_18.fields.y = (__this->fields)._jumpDirection.fields.y / local_18.fields.z;
      local_18.fields.z = (__this->fields)._jumpDirection.fields.z / local_18.fields.z;
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      fVar1 = (__this->fields).JumpForce;
      local_18.fields.x = local_18.fields.x * fVar1;
      local_18.fields.y = local_18.fields.y * fVar1;
      local_18.fields.z = local_18.fields.z * fVar1;
      UnityEngine_Rigidbody__AddForce(__this_00,&local_18,2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Attack
// il2cpp: void Characters_BaseTitan__Attack (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x18217a7d0

void Characters_BaseTitan__Attack(Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  (*(__this->klass->vtable)._152_ResetAttackState.methodPtr)
            (__this,attack,(__this->klass->vtable)._152_ResetAttackState.method);
  Characters_BaseTitan__StateAttack
            (__this,(__this->fields)._currentAttackAnimation,0.1,true,(MethodInfo *)0x0);
  return;
}


// Characters.BaseTitan$$CanAttack
// il2cpp: bool Characters_BaseTitan__CanAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217abf0

bool
Characters_BaseTitan__CanAttack(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  return bVar1;
}


// Characters.BaseTitan$$CanUseAttack
// il2cpp: bool Characters_BaseTitan__CanUseAttack (Characters_BaseTitan_o* __this, Characters_TitanAttackInfo_o* attack, const MethodInfo* method);
// 0x18217ac70

bool Characters_BaseTitan__CanUseAttack
               (Characters_BaseTitan_o *__this,Characters_TitanAttackInfo_o *attack,MethodInfo *method)

{
  if (attack == (Characters_TitanAttackInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((attack->fields).LeftArm == false) ||
     (((__this->fields).LeftArmDisabled == false && ((__this->fields).LeftHandDisabled == false)))) {
    if ((attack->fields).RightArm == false) {
      return true;
    }
    if ((__this->fields).RightArmDisabled == false) {
      return (__this->fields).RightHandDisabled == false;
    }
  }
  return false;
}


// Characters.BaseTitan$$ResetAttackState
// il2cpp: void Characters_BaseTitan__ResetAttackState (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x18217f650

void Characters_BaseTitan__ResetAttackState
               (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  bool bVar4;
  System_String_o *value;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_38 [4];
  
  if (Il2CppMethodInitialized_184346da6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    Il2CppMethodInitialized_184346da6 = '\x01';
  }
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  if ((__this->fields).AI != false) {
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_18217f802;
    __this_00 = (pUVar1->fields).Rigidbody;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_18217f802;
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_38[0].x = (pUVar2->zeroVector).fields.x;
    local_38[0].y = (pUVar2->zeroVector).fields.y;
    local_38[0].z = (pUVar2->zeroVector).fields.z;
    UnityEngine_Rigidbody__set_linearVelocity(__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
  }
  (__this->fields)._currentAttack = attack;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAttack,attack);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackAnimations;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    value = System_Collections_Generic_Dictionary_object__object___get_Item
                      (__this_01,(Il2CppObject *)attack,
                       (MethodInfo_147A5B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    (__this->fields)._currentAttackAnimation = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAttackAnimation,value);
    if (Il2CppMethodInitialized_184346da7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      Il2CppMethodInitialized_184346da7 = '\x01';
    }
    pSVar3 = (__this->fields).AttackSpeeds;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)attack,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
      if (bVar4) {
        pSVar3 = (__this->fields).AttackSpeeds;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_18217f802;
        fVar5 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)attack,
                           (MethodInfo_1488BA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      }
      else {
        fVar5 = 1.0;
      }
      fVar5 = fVar5 * (__this->fields).AttackSpeedMultiplier;
      fVar6 = 1.0;
      if (0.0 < fVar5) {
        fVar6 = fVar5;
      }
      (__this->fields)._currentAttackSpeed = fVar6;
      (__this->fields)._currentAttackStage = 0;
      return;
    }
  }
label_18217f802:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetAttackSpeed
// il2cpp: float Characters_BaseTitan__GetAttackSpeed (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x18217cbd0

float Characters_BaseTitan__GetAttackSpeed
                (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    Il2CppMethodInitialized_184346da7 = '\x01';
  }
  pSVar1 = (__this->fields).AttackSpeeds;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)attack,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
    if (bVar2) {
      pSVar1 = (__this->fields).AttackSpeeds;
      if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_18217cc7d;
      fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                         (Il2CppObject *)attack,
                         (MethodInfo_1488BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    }
    else {
      fVar3 = 1.0;
    }
    fVar3 = fVar3 * (__this->fields).AttackSpeedMultiplier;
    fVar4 = 1.0;
    if (0.0 < fVar3) {
      fVar4 = fVar3;
    }
    return fVar4;
  }
label_18217cc7d:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Kick
// il2cpp: void Characters_BaseTitan__Kick (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__Kick(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$Stun
// il2cpp: void Characters_BaseTitan__Stun (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1821812c0

void Characters_BaseTitan__Stun(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._155_Stun.methodPtr)
            (__this,(__this->fields).StunTime,false,(__this->klass->vtable)._155_Stun.method);
  return;
}


// Characters.BaseTitan$$Stun
// il2cpp: void Characters_BaseTitan__Stun (Characters_BaseTitan_o* __this, float time, bool refresh, const MethodInfo* method);
// 0x1821811a0

void Characters_BaseTitan__Stun_21811a0
               (Characters_BaseTitan_o *__this,float time,bool refresh,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
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
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._11_get_Stun.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._11_get_Stun.method);
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


// Characters.BaseTitan$$OnHitTitan
// il2cpp: void Characters_BaseTitan__OnHitTitan (Characters_BaseTitan_o* __this, Characters_BaseHitbox_o* hitbox, Characters_BaseTitan_o* victim, UnityEngine_Collider_o* collider, int32_t damage, bool firstHit, const MethodInfo* method);
// 0x18217ee90

void Characters_BaseTitan__OnHitTitan
               (Characters_BaseTitan_o *__this,Characters_BaseHitbox_o *hitbox,Characters_BaseTitan_o *victim,
               UnityEngine_Collider_o *collider,int32_t damage,bool firstHit,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  byte bVar3;
  float fVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  Characters_BaseTitanComponentCache_o *pCVar6;
  UnityEngine_Object_o *y;
  UnityEngine_Collider_o *__this_00;
  UI_InGameMenu_o *__this_01;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Vector3_o *pUVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  UnityEngine_Bounds_o *pUVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Bounds_o local_68 [3];
  
  if (Il2CppMethodInitialized_184346da8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ComboStun");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"Graze");
    Il2CppMethodInitialized_184346da8 = '\x01';
  }
  if (!firstHit) {
    return;
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  if (hitbox == (Characters_BaseHitbox_o *)0x0) goto label_18217f45a;
  pSVar15 = TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit;
  pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_18217f45a;
  pUVar13 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_78,pUVar12,(MethodInfo *)0x0);
  uVar2._0_4_ = (pUVar13->fields).x;
  uVar2._4_4_ = (pUVar13->fields).y;
  fVar4 = (pUVar13->fields).z;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar7._0_4_ = (pUVar5->identityQuaternion).fields.x;
  uVar7._4_4_ = (pUVar5->identityQuaternion).fields.y;
  uVar8._0_4_ = (pUVar5->identityQuaternion).fields.z;
  uVar8._4_4_ = (pUVar5->identityQuaternion).fields.w;
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  local_78._0_8_ = uVar2;
  local_78.z = fVar4;
  local_68[0].fields.m_Center.fields._0_8_ = uVar7;
  local_68[0].fields._8_8_ = uVar8;
  Effects_EffectSpawner__Spawn
            (pSVar15,(UnityEngine_Vector3_o *)&local_78,(UnityEngine_Quaternion_o *)local_68,1.0,true,
             (System_Object_array *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Hit,
             (MethodInfo *)0x0);
  pSVar15 = "Stun";
  if (victim == (Characters_BaseTitan_o *)0x0) goto label_18217f45a;
  if ((victim->fields).Dead != false) {
    return;
  }
  bVar9 = (*(__this->klass->vtable)._140_IsComboAttack.methodPtr)
                    (__this,(__this->klass->vtable)._140_IsComboAttack.method);
  if ((bVar9) && ((__this->fields)._currentAttackStage < 3)) {
    damage = 0;
    pSVar15 = "ComboStun";
  }
  else {
    if (Il2CppMethodInitialized_184346d9d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
      Il2CppMethodInitialized_184346d9d = '\x01';
    }
    bVar9 = System_String__op_Equality
                      ((__this->fields)._currentAttack,"AttackKick",(MethodInfo *)0x0);
    if ((bVar9) ||
       ((bVar9 = (*(__this->klass->vtable)._140_IsComboAttack.methodPtr)
                           (__this,(__this->klass->vtable)._140_IsComboAttack.method), bVar9 &&
        (2 < (__this->fields)._currentAttackStage)))) {
      bVar9 = (*(victim->klass->vtable)._143_get_TreatAsSmall.methodPtr)
                        (victim,(victim->klass->vtable)._143_get_TreatAsSmall.method);
      if (bVar9) {
        bVar9 = true;
      }
      else {
        fVar4 = (victim->fields).Size;
        fVar17 = (*(victim->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                           (victim,(victim->klass->vtable)._134_get_SizeMultiplier.method);
        fVar1 = (__this->fields).Size;
        fVar18 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                           (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
        fVar19 = (*(__this->klass->vtable)._125_get_LaunchSizeRatio.methodPtr)
                           (__this,(__this->klass->vtable)._125_get_LaunchSizeRatio.method);
        bVar9 = fVar17 * fVar4 <= fVar19 * fVar18 * fVar1;
      }
      if (Il2CppMethodInitialized_184346d9d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
        Il2CppMethodInitialized_184346d9d = '\x01';
      }
      bVar10 = System_String__op_Equality
                         ((__this->fields)._currentAttack,"AttackKick",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184346d9f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184346d9f = '\x01';
      }
      pCVar6 = (victim->fields).BaseTitanCache;
      if (pCVar6 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_18217f45a;
      y = (UnityEngine_Object_o *)(pCVar6->fields).NapeHurtbox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,y,(MethodInfo *)0x0);
      if (bVar11) {
label_18217f381:
        bVar11 = true;
      }
      else {
        if (collider == (UnityEngine_Collider_o *)0x0) goto label_18217f45a;
        pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
        pCVar6 = (victim->fields).BaseTitanCache;
        if ((pCVar6 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_18217f45a;
        bVar11 = UnityEngine_Transform__IsChildOf(pUVar12,(pCVar6->fields).Head,(MethodInfo *)0x0);
        if (bVar11) goto label_18217f381;
        __this_00 = (hitbox->fields)._collider;
        if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_18217f45a;
        pUVar16 = UnityEngine_Collider__get_bounds(local_68,__this_00,(MethodInfo *)0x0);
        pCVar6 = (victim->fields).BaseTitanCache;
        if ((pCVar6 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar12 = (pCVar6->fields).Head, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_18217f45a;
        fVar4 = (pUVar16->fields).m_Extents.fields.y;
        fVar1 = (pUVar16->fields).m_Center.fields.y;
        pUVar13 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_78,pUVar12,(MethodInfo *)0x0);
        bVar11 = (pUVar13->fields).y <= fVar4 + fVar1;
      }
      pSVar15 = (*(__this->klass->vtable)._144_GetFinisherReaction.methodPtr)
                          (__this,bVar10,bVar9,bVar11,(__this->klass->vtable)._144_GetFinisherReaction.method)
      ;
      bVar9 = System_String__op_Equality(pSVar15,"Graze",(MethodInfo *)0x0);
      if (!bVar9) goto label_18217f3cc;
      damage = 0;
      pSVar15 = "Stun";
    }
    else {
      bVar9 = (*(__this->klass->vtable)._142_get_BasicAttacksStunOnly.methodPtr)
                        (__this,(__this->klass->vtable)._142_get_BasicAttacksStunOnly.method);
      if (bVar9) {
        damage = 0;
      }
      else {
label_18217f3cc:
        if ((0 < damage) &&
           (bVar9 = Characters_BaseCharacter__IsMainCharacter
                              ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0), bVar9)) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_18217f45a;
          bVar3 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar3) ||
             ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_InGameMenu);
          }
          UI_InGameMenu__ShowKillScore(__this_01,damage,false,(MethodInfo *)0x0);
        }
      }
    }
  }
  pSVar14 = (*(__this->klass->vtable)._141_get_MeleeHitType.methodPtr)
                      (__this,(__this->klass->vtable)._141_get_MeleeHitType.method);
  pSVar15 = System_String__Concat_1969e50(pSVar14,pSVar15,(MethodInfo *)0x0);
  if (collider != (UnityEngine_Collider_o *)0x0) {
    pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
    (*(victim->klass->vtable)._95_GetHit.methodPtr)
              (victim,(Characters_BaseCharacter_o *)__this,damage,pSVar15,pSVar14,
               (victim->klass->vtable)._95_GetHit.method);
    return;
  }
label_18217f45a:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetMeleeHit
// il2cpp: void Characters_BaseTitan__GetMeleeHit (Characters_BaseTitan_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x18217d070
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217d2e5: movaps xmm7, xmmword ptr [rsp + 0x70]
// asm:   0x18217d2ea: movaps xmm8, xmmword ptr [rsp + 0x60]
// asm:   0x18217d2f0: movaps xmm6, xmmword ptr [rsp + 0x80]

void Characters_BaseTitan__GetMeleeHit
               (Characters_BaseTitan_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  ulonglong uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Characters_BaseCharacter_o *x;
  UnityEngine_Vector3_o *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_o local_58 [5];
  
  if (Il2CppMethodInitialized_184346da9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346da9 = '\x01';
  }
  if (Il2CppMethodInitialized_184346da2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
    Il2CppMethodInitialized_184346da2 = '\x01';
  }
  bVar3 = Characters_BaseTitan__HasMeleeReaction(type,"Finisher",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346da3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    Il2CppMethodInitialized_184346da3 = '\x01';
  }
  bVar4 = Characters_BaseTitan__HasMeleeReaction(type,"Knockback",(MethodInfo *)0x0);
  (__this->fields)._launched = bVar4;
  (__this->fields)._decapitated = bVar3;
  Characters_BaseCharacter__GetHitRPC
            ((Characters_BaseCharacter_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
  if ((__this->fields).Dead == false) {
    (__this->fields)._launched = false;
    (__this->fields)._decapitated = false;
  }
  if ((bVar3) || (bVar4)) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      if (((x == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar2 = (x->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
         (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
        ThrowNullReferenceException();
      }
      pUVar6 = UnityEngine_Transform__get_forward(local_58,__this_00,(MethodInfo *)0x0);
      fVar8 = 0.0;
      uVar1._0_4_ = (pUVar6->fields).x;
      uVar1._4_4_ = (pUVar6->fields).y;
      local_68.z = (pUVar6->fields).z;
      local_68._0_8_ = uVar1 & 0xffffffff;
      fVar7 = (float)il2cpp_runtime_helper_180546a40(&local_68,0);
      if (1e-05 < fVar7) {
        fVar9 = local_68.x / fVar7;
        fVar10 = local_68.z / fVar7;
        fVar8 = 0.0 / fVar7;
      }
      else {
        fVar9 = 0.0;
        fVar10 = 0.0;
      }
      if ((__this->fields).Dead == false) {
        if (bVar4) {
          fVar7 = (*(__this->klass->vtable)._128_get_PushForce.methodPtr)
                            (__this,(__this->klass->vtable)._128_get_PushForce.method);
          fVar7 = fVar7 / (__this->fields).Size;
          local_68.z = fVar10 * fVar7;
          local_68.y = fVar8 * fVar7;
          local_68.x = fVar9 * fVar7;
          fVar7 = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)
                            (__this,(__this->klass->vtable)._129_get_PushTime.method);
          Characters_BaseTitan__SetLaunchVelocity
                    (__this,(UnityEngine_Vector3_o *)&local_68,fVar7,(MethodInfo *)0x0);
        }
      }
      else {
        local_68.y = fVar8;
        local_68.x = fVar9;
        local_68.z = fVar10;
        (*(__this->klass->vtable)._156_OnFinisherKill.methodPtr)
                  (__this,(UnityEngine_Vector3_o *)&local_68,bVar4,bVar3,
                   (__this->klass->vtable)._156_OnFinisherKill.method);
      }
    }
  }
  return;
}


// Characters.BaseTitan$$OnFinisherKill
// il2cpp: void Characters_BaseTitan__OnFinisherKill (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, bool launch, bool decapitate, const MethodInfo* method);
// 0x18217ee10

void Characters_BaseTitan__OnFinisherKill
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *direction,bool launch,bool decapitate,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Vector3_Fields local_18;
  
  if (launch) {
    fVar3 = (*(__this->klass->vtable)._126_get_LaunchForce.methodPtr)
                      (__this,(__this->klass->vtable)._126_get_LaunchForce.method);
    uVar1 = (direction->fields).x;
    uVar2 = (direction->fields).y;
    fVar3 = fVar3 / (__this->fields).Size;
    local_18.z = fVar3 * (direction->fields).z;
    local_18.x = (float)uVar1 * fVar3;
    local_18.y = (float)uVar2 * fVar3;
    fVar3 = (*(__this->klass->vtable)._127_get_LaunchTime.methodPtr)
                      (__this,(__this->klass->vtable)._127_get_LaunchTime.method);
    Characters_BaseTitan__SetLaunchVelocity(__this,(UnityEngine_Vector3_o *)&local_18,fVar3,(MethodInfo *)0x0)
    ;
  }
  return;
}


// Characters.BaseTitan$$Launch
// il2cpp: void Characters_BaseTitan__Launch (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x18217ed90

void Characters_BaseTitan__Launch
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *direction,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Vector3_Fields local_18;
  
  fVar3 = (*(__this->klass->vtable)._126_get_LaunchForce.methodPtr)
                    (__this,(__this->klass->vtable)._126_get_LaunchForce.method);
  uVar1 = (direction->fields).x;
  uVar2 = (direction->fields).y;
  fVar3 = fVar3 / (__this->fields).Size;
  local_18.z = fVar3 * (direction->fields).z;
  local_18.x = (float)uVar1 * fVar3;
  local_18.y = (float)uVar2 * fVar3;
  fVar3 = (*(__this->klass->vtable)._127_get_LaunchTime.methodPtr)
                    (__this,(__this->klass->vtable)._127_get_LaunchTime.method);
  Characters_BaseTitan__SetLaunchVelocity(__this,(UnityEngine_Vector3_o *)&local_18,fVar3,(MethodInfo *)0x0);
  return;
}


// Characters.BaseTitan$$Push
// il2cpp: void Characters_BaseTitan__Push (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x18217f5b0

void Characters_BaseTitan__Push
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *direction,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Vector3_Fields local_18;
  
  fVar3 = (*(__this->klass->vtable)._128_get_PushForce.methodPtr)
                    (__this,(__this->klass->vtable)._128_get_PushForce.method);
  uVar1 = (direction->fields).x;
  uVar2 = (direction->fields).y;
  fVar3 = fVar3 / (__this->fields).Size;
  local_18.z = fVar3 * (direction->fields).z;
  local_18.x = (float)uVar1 * fVar3;
  local_18.y = (float)uVar2 * fVar3;
  fVar3 = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)
                    (__this,(__this->klass->vtable)._129_get_PushTime.method);
  Characters_BaseTitan__SetLaunchVelocity(__this,(UnityEngine_Vector3_o *)&local_18,fVar3,(MethodInfo *)0x0);
  return;
}


// Characters.BaseTitan$$SetLaunchVelocity
// il2cpp: void Characters_BaseTitan__SetLaunchVelocity (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o velocity, float time, const MethodInfo* method);
// 0x182180100

void Characters_BaseTitan__SetLaunchVelocity
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *velocity,float time,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Rigidbody_o *__this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o local_48 [5];
  
  (__this->fields)._launchTimeLeft = time;
  local_48[0].fields.x = 0.0;
  local_48[0].fields.y = 0.0;
  local_48[0].fields.z = 0.0;
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  fVar6 = (velocity->fields).x;
  fVar8 = (velocity->fields).z;
  (__this->fields).Grounded = false;
  local_48[0].fields.x = fVar6;
  local_48[0].fields.z = fVar8;
  if (0.0 < fVar6 * fVar6 + 0.0 + fVar8 * fVar8) {
    pUVar3 = (__this->fields).Cache;
    if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) goto label_182180280;
    __this_00 = (pUVar3->fields).Transform;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar5 = (float)il2cpp_runtime_helper_180546a40(local_48,0);
    if (fVar5 <= 1e-05) {
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar6 = (pUVar4->zeroVector).fields.x;
      fVar7 = (pUVar4->zeroVector).fields.y;
      fVar8 = (pUVar4->zeroVector).fields.z;
    }
    else {
      fVar6 = fVar6 / fVar5;
      fVar7 = 0.0 / fVar5;
      fVar8 = fVar8 / fVar5;
    }
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_182180280;
    local_48[0].fields.x = -fVar6;
    local_48[0].fields.y = -fVar7;
    local_48[0].fields.z = -fVar8;
    UnityEngine_Transform__set_forward(__this_00,local_48,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_01 = (pUVar3->fields).Rigidbody, __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar1 = (velocity->fields).x;
    uVar2 = (velocity->fields).y;
    local_48[0].fields.z = (velocity->fields).z;
    local_48[0].fields.x = (float)uVar1;
    local_48[0].fields.y = (float)uVar2;
    UnityEngine_Rigidbody__set_linearVelocity(__this_01,local_48,(MethodInfo *)0x0);
    return;
  }
label_182180280:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Run
// il2cpp: void Characters_BaseTitan__Run (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217f810

void Characters_BaseTitan__Run(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields)._stepPhase = 0;
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._5_get_Run.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._5_get_Run.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
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
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Sprint
// il2cpp: void Characters_BaseTitan__Sprint (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182180950

void Characters_BaseTitan__Sprint(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields)._stepPhase = 0;
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._6_get_Sprint.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._6_get_Sprint.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.2,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 2;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
      (__this->fields)._stateTimeLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$WallClimb
// il2cpp: void Characters_BaseTitan__WallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1821826d0

void Characters_BaseTitan__WallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  System_String_o *animation;
  
  bVar2 = (*(__this->klass->vtable)._122_get_CanWallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._122_get_CanWallClimb.method);
  if ((bVar2) && ((__this->fields)._climbCooldownLeft <= 0.0)) {
    pCVar1 = (__this->fields).BaseTitanAnimations;
    (__this->fields)._climbCooldownLeft = (__this->fields).ClimbCooldown;
    (__this->fields)._stepPhase = 0;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      animation = (*(pCVar1->klass->vtable)._5_get_Run.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._5_get_Run.method);
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


// Characters.BaseTitan$$Eat
// il2cpp: void Characters_BaseTitan__Eat (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__Eat(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$Walk
// il2cpp: void Characters_BaseTitan__Walk (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1821825f0

void Characters_BaseTitan__Walk(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields)._stepPhase = 0;
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._7_get_Walk.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._7_get_Walk.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.5,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 3;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
      (__this->fields)._stateTimeLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Idle
// il2cpp: void Characters_BaseTitan__Idle (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217d900

void Characters_BaseTitan__Idle(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  MethodInfo *pMVar1;
  _func_33 *UNRECOVERED_JUMPTABLE_00;
  
  pMVar1 = (__this->klass->vtable)._163_Idle.method;
  UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._163_Idle.methodPtr;
  if ((__this->fields).AI == false) {
    (*UNRECOVERED_JUMPTABLE_00)(__this,0.0,pMVar1);
    return;
  }
  (*UNRECOVERED_JUMPTABLE_00)(__this,0.1,pMVar1);
  return;
}


// Characters.BaseTitan$$Idle
// il2cpp: void Characters_BaseTitan__Idle (Characters_BaseTitan_o* __this, float fadeTime, const MethodInfo* method);
// 0x18217d890

void Characters_BaseTitan__Idle_217d890(Characters_BaseTitan_o *__this,float fadeTime,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  System_String_o *animation;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._4_get_Idle.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._4_get_Idle.method);
    Characters_BaseTitan__StateActionWithTime(__this,0,animation,0.0,fadeTime,true,0.0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$IdleWait
// il2cpp: void Characters_BaseTitan__IdleWait (Characters_BaseTitan_o* __this, float waitTime, const MethodInfo* method);
// 0x18217d830

void Characters_BaseTitan__IdleWait(Characters_BaseTitan_o *__this,float waitTime,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.1;
  if ((0.1 <= waitTime) && (fVar1 = 2.0, waitTime <= 2.0)) {
    fVar1 = waitTime;
  }
  (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,fVar1,(__this->klass->vtable)._163_Idle.method);
  (__this->fields)._stateTimeLeft = waitTime;
  return;
}


// Characters.BaseTitan$$Land
// il2cpp: void Characters_BaseTitan__Land (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217e960

void Characters_BaseTitan__Land(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Characters_BaseTitanAnimations_o *pCVar8;
  Characters_AnimationHandler_o *pCVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  System_String_o *pSVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Quaternion_o *pUVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Quaternion_Fields local_88 [8];
  
  if (Il2CppMethodInitialized_184346daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184346daa = '\x01';
  }
  pCVar8 = (__this->fields).BaseTitanAnimations;
  if (pCVar8 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar14 = (*(pCVar8->klass->vtable)._10_get_Land.methodPtr)
                        (pCVar8,(pCVar8->klass->vtable)._10_get_Land.method);
    pCVar9 = (__this->fields).Animation;
    if (pCVar9 != (Characters_AnimationHandler_o *)0x0) {
      fVar17 = Characters_AnimationHandler__GetLength(pCVar9,pSVar14,(MethodInfo *)0x0);
      (__this->fields)._needFreshCore = true;
      pCVar9 = (__this->fields).Animation;
      if (pCVar9 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar9,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar14,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 9;
        (__this->fields)._currentStateAnimation = pSVar14;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,pSVar14);
        (__this->fields)._stateTimeLeft = fVar17;
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
          fVar17 = (pUVar15->fields).z;
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
          fVar18 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                             (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
          }
          local_98.y = (float)uVar7 * fVar1 + (float)uVar6;
          local_98.x = (float)uVar5 * fVar1 + (float)uVar4;
          local_98.z = fVar1 * fVar2 + fVar17;
          local_88[0]._0_8_ = uVar12;
          local_88[0]._8_8_ = uVar13;
          Effects_EffectSpawner__Spawn
                    (pSVar14,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)local_88,
                     fVar18 * fVar3,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Fall
// il2cpp: void Characters_BaseTitan__Fall (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217b910

void Characters_BaseTitan__Fall(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._9_get_Fall.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._9_get_Fall.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
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
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Turn
// il2cpp: void Characters_BaseTitan__Turn (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x1821813e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821814e1: mov rdi, qword ptr [rsp + 0x50]

void Characters_BaseTitan__Turn
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *targetDirection,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_BaseTitanAnimations_c *pCVar2;
  Characters_AnimationHandler_o *__this_00;
  bool bVar3;
  System_String_o *a;
  float fVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346dab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346dab = '\x01';
  }
  bVar3 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  if (bVar3) {
    local_18.x = (targetDirection->fields).x;
    local_18.y = (targetDirection->fields).y;
    local_18.z = (targetDirection->fields).z;
    fVar4 = Characters_BaseCharacter__GetAngleToTarget
                      ((Characters_BaseCharacter_o *)__this,(UnityEngine_Vector3_o *)&local_18,
                       (MethodInfo *)0x0);
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) {
label_1821814f1:
      ThrowNullReferenceException();
    }
    pCVar2 = pCVar1->klass;
    if (fVar4 <= 0.0) {
      a = (*(pCVar2->vtable)._19_get_Turn90L.methodPtr)(pCVar1,(pCVar2->vtable)._19_get_Turn90L.method);
    }
    else {
      a = (*(pCVar2->vtable)._20_get_Turn90R.methodPtr)(pCVar1,(pCVar2->vtable)._20_get_Turn90R.method);
    }
    bVar3 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
    if (bVar3) {
      __this_00 = (__this->fields).Animation;
      if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_1821814f1;
      local_18.x = (targetDirection->fields).x;
      local_18.y = (targetDirection->fields).y;
      local_18.z = (targetDirection->fields).z;
      fVar4 = Characters_AnimationHandler__GetTotalTime(__this_00,a,(MethodInfo *)0x0);
      Characters_BaseTitan__StartTurn(__this,(UnityEngine_Vector3_o *)&local_18,a,fVar4,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.BaseTitan$$StartTurn
// il2cpp: void Characters_BaseTitan__StartTurn (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o targetDirection, System_String_o* animation, float turnTime, const MethodInfo* method);
// 0x182180b40

void Characters_BaseTitan__StartTurn
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *targetDirection,
               System_String_o *animation,float turnTime,MethodInfo *method)

{
  float fVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  Characters_AnimationHandler_o *__this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Quaternion_o *pUVar9;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    local_48.x = (targetDirection->fields).x;
    local_48.y = (targetDirection->fields).y;
    local_48.z = (targetDirection->fields).z;
    pUVar8 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_28,pUVar3,(MethodInfo *)0x0);
    local_38.x = (pUVar8->fields).x;
    local_38.y = (pUVar8->fields).y;
    local_38.z = (pUVar8->fields).z;
    pUVar8 = UnityEngine_Vector3__Internal_RotateTowards
                       ((UnityEngine_Vector3_o *)local_28,(UnityEngine_Vector3_o *)&local_38,
                        (UnityEngine_Vector3_o *)&local_48,2.0943952,3.4028235e+38,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).Cache;
    fVar5 = (pUVar8->fields).y;
    fVar1 = (pUVar8->fields).z;
    (targetDirection->fields).x = (pUVar8->fields).x;
    (targetDirection->fields).y = fVar5;
    (targetDirection->fields).z = fVar1;
    if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      pUVar9 = UnityEngine_Transform__get_rotation(local_28,pUVar3,(MethodInfo *)0x0);
      local_38.x = (targetDirection->fields).x;
      local_38.y = (targetDirection->fields).y;
      fVar1 = (pUVar9->fields).y;
      fVar5 = (pUVar9->fields).z;
      fVar6 = (pUVar9->fields).w;
      local_38.z = (targetDirection->fields).z;
      (__this->fields)._turnStartRotation.fields.x = (pUVar9->fields).x;
      (__this->fields)._turnStartRotation.fields.y = fVar1;
      (__this->fields)._turnStartRotation.fields.z = fVar5;
      (__this->fields)._turnStartRotation.fields.w = fVar6;
      local_48.x = 0.0;
      local_48.y = 0.0;
      local_48.z = 0.0;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_48.x = (pUVar4->upVector).fields.x;
      local_48.y = (pUVar4->upVector).fields.y;
      local_48.z = (pUVar4->upVector).fields.z;
      pUVar9 = UnityEngine_Quaternion__Internal_LookRotation
                         (local_28,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                          (MethodInfo *)0x0);
      fVar1 = (pUVar9->fields).x;
      fVar5 = (pUVar9->fields).y;
      fVar6 = (pUVar9->fields).z;
      fVar7 = (pUVar9->fields).w;
      (__this->fields)._currentTurnTime = 0.0;
      (__this->fields)._maxTurnTime = turnTime;
      (__this->fields)._turnTargetRotation.fields.x = fVar1;
      (__this->fields)._turnTargetRotation.fields.y = fVar5;
      (__this->fields)._turnTargetRotation.fields.z = fVar6;
      (__this->fields)._turnTargetRotation.fields.w = fVar7;
      (__this->fields)._needFreshCore = true;
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 0x18;
        (__this->fields)._currentStateAnimation = animation;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
        (__this->fields)._stateTimeLeft = turnTime;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Blind
// il2cpp: void Characters_BaseTitan__Blind (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217a960

void Characters_BaseTitan__Blind(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Characters_BaseTitanAnimations_o *pCVar4;
  int32_t state;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346dac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346dac = '\x01';
  }
  if ((__this->fields).State == 0x13) {
    bVar1 = true;
  }
  else {
    bVar1 = (__this->fields).State == 0x11;
    if ((__this->fields).State == 0x10) {
      return;
    }
    if ((__this->fields).State == 0x12) {
      return;
    }
  }
  if ((__this->fields).AI == false) {
    return;
  }
  fVar6 = 0.0;
  bVar2 = true;
  if (0.0 < (__this->fields)._disableCooldownLeft) {
    bVar2 = bVar1;
  }
  if (!bVar2) {
    return;
  }
  if (((((__this->fields).State == 0x14) || ((__this->fields).State == 0x16)) ||
      ((__this->fields).State == 0x13)) || ((__this->fields).State == 0x11)) {
    pCVar4 = (__this->fields).BaseTitanAnimations;
label_18217aabf:
    if (pCVar4 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar4->klass->vtable)._18_get_SitBlind.methodPtr)
                         (pCVar4,(pCVar4->klass->vtable)._18_get_SitBlind.method);
      bVar2 = System_String__op_Inequality(pSVar3,"",(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if (bVar1) {
        fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        if ((__this->fields).State == 0x13) {
          fVar6 = (__this->fields)._currentCrippleTime;
        }
        fVar6 = fVar5 + (__this->fields)._stateTimeLeft + fVar6;
      }
      else {
        fVar6 = -1.0;
      }
      (__this->fields)._crippleEndTime = fVar6;
      pCVar4 = (__this->fields).BaseTitanAnimations;
      if (pCVar4 != (Characters_BaseTitanAnimations_o *)0x0) {
        pSVar3 = (*(pCVar4->klass->vtable)._18_get_SitBlind.methodPtr)
                           (pCVar4,(pCVar4->klass->vtable)._18_get_SitBlind.method);
        state = 0x12;
        goto label_18217ab4e;
      }
    }
  }
  else {
    if ((__this->fields).State == 0x15) {
      __this_00 = (__this->fields).Animation;
      if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_18217ab9a;
      fVar5 = Characters_AnimationHandler__GetCurrentNormalizedTime(__this_00,(MethodInfo *)0x0);
      pCVar4 = (__this->fields).BaseTitanAnimations;
      if (fVar5 < 0.5) goto label_18217aabf;
    }
    else {
      pCVar4 = (__this->fields).BaseTitanAnimations;
    }
    if (pCVar4 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar4->klass->vtable)._21_get_Blind.methodPtr)
                         (pCVar4,(pCVar4->klass->vtable)._21_get_Blind.method);
      bVar1 = System_String__op_Inequality(pSVar3,"",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pCVar4 = (__this->fields).BaseTitanAnimations;
      if (pCVar4 != (Characters_BaseTitanAnimations_o *)0x0) {
        pSVar3 = (*(pCVar4->klass->vtable)._21_get_Blind.methodPtr)
                           (pCVar4,(pCVar4->klass->vtable)._21_get_Blind.method);
        state = 0x10;
label_18217ab4e:
        Characters_BaseTitan__StateAction(__this,state,pSVar3,0.1,true,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._195_DamagedGrunt.methodPtr)
                  (__this,1.0,(__this->klass->vtable)._195_DamagedGrunt.method);
        return;
      }
    }
  }
label_18217ab9a:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Cripple
// il2cpp: void Characters_BaseTitan__Cripple (Characters_BaseTitan_o* __this, float time, const MethodInfo* method);
// 0x18217b5a0

void Characters_BaseTitan__Cripple(Characters_BaseTitan_o *__this,float time,MethodInfo *method)

{
  float fVar1;
  Characters_BaseTitanAnimations_o *pCVar2;
  bool bVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184346dad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346dad = '\x01';
  }
  pCVar2 = (__this->fields).BaseTitanAnimations;
  if (pCVar2 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar4 = (*(pCVar2->klass->vtable)._17_get_SitFall.methodPtr)
                       (pCVar2,(pCVar2->klass->vtable)._17_get_SitFall.method);
    bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
    if ((((bVar3) && ((__this->fields).State != 0x11)) && ((__this->fields).AI != false)) &&
       ((__this->fields)._disableCooldownLeft <= 0.0)) {
      if (time <= 0.0) {
        time = (*(__this->klass->vtable)._121_get_DefaultCrippleTime.methodPtr)
                         (__this,(__this->klass->vtable)._121_get_DefaultCrippleTime.method);
      }
      (__this->fields)._currentCrippleTime = time;
      pCVar2 = (__this->fields).BaseTitanAnimations;
      if (pCVar2 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217b6e7;
      pSVar4 = (*(pCVar2->klass->vtable)._17_get_SitFall.methodPtr)
                         (pCVar2,(pCVar2->klass->vtable)._17_get_SitFall.method);
      Characters_BaseTitan__StateAction(__this,0x13,pSVar4,0.1,true,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._195_DamagedGrunt.methodPtr)
                (__this,1.0,(__this->klass->vtable)._195_DamagedGrunt.method);
      fVar1 = (__this->fields)._currentCrippleTime;
      fVar5 = (*(__this->klass->vtable)._135_get_DisableCooldown.methodPtr)
                        (__this,(__this->klass->vtable)._135_get_DisableCooldown.method);
      (__this->fields)._disableCooldownLeft = fVar5 + fVar1;
    }
    return;
  }
label_18217b6e7:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Emote
// il2cpp: void Characters_BaseTitan__Emote (Characters_BaseTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__Emote(Characters_BaseTitan_o* __this, System_String_o* emote, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$RegenerateWardedWeakSpot
// il2cpp: void Characters_BaseTitan__RegenerateWardedWeakSpot (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__RegenerateWardedWeakSpot(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$ForceAnimation
// il2cpp: void Characters_BaseTitan__ForceAnimation (Characters_BaseTitan_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x18217cac0

void Characters_BaseTitan__ForceAnimation
               (Characters_BaseTitan_o *__this,System_String_o *animation,float fade,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  float fVar2;
  
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    fVar2 = Characters_AnimationHandler__GetLength(pCVar1,animation,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = true;
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar1,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,fade,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 8;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
      (__this->fields)._stateTimeLeft = fVar2;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseTitan__WaitAndDie (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182182580

System_Collections_IEnumerator_o *
Characters_BaseTitan__WaitAndDie(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitan__WaitAndDie_d__174_o *__this_00;
  
  if (Il2CppMethodInitialized_184346dae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan_WaitAndDie_d__174);
    Il2CppMethodInitialized_184346dae = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseTitan_WaitAndDie_d__174);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseTitan$$GetSpawnEffectSize
// il2cpp: float Characters_BaseTitan__GetSpawnEffectSize (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217d510

float Characters_BaseTitan__GetSpawnEffectSize(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).Size;
  fVar2 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                    (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
  return fVar2 * fVar1;
}


// Characters.BaseTitan$$GrabRPC
// il2cpp: void Characters_BaseTitan__GrabRPC (Characters_BaseTitan_o* __this, int32_t viewId, bool left, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18217d600

void Characters_BaseTitan__GrabRPC
               (Characters_BaseTitan_o *__this,int32_t viewId,bool left,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_Human_o *value;
  Photon_Realtime_Player_o *pPVar3;
  UnityEngine_Transform_o *value_00;
  
  if (Il2CppMethodInitialized_184346daf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    Il2CppMethodInitialized_184346daf = '\x01';
  }
  __this_00 = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
    pPVar3 = (Photon_Realtime_Player_o *)0x0;
  }
  else {
    pPVar3 = (__this_00->fields)._Owner_k__BackingField;
  }
  if (pPVar3 != (info->fields).Sender) {
    return;
  }
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this_00,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
    bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      (__this->fields).HoldHuman = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).HoldHuman,value);
    }
    if (value != (Characters_Human_o *)0x0) {
      (value->fields).Grabber = __this;
      Il2CppCodeGenWriteBarrier(&(value->fields).Grabber,__this);
      pCVar1 = (__this->fields).BaseTitanCache;
      if (pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) {
        if (left) {
          value_00 = (pCVar1->fields).GrabLSocket;
        }
        else {
          value_00 = (pCVar1->fields).GrabRSocket;
        }
        (value->fields).GrabHand = value_00;
        Il2CppCodeGenWriteBarrier(&(value->fields).GrabHand,value_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$UngrabRPC
// il2cpp: void Characters_BaseTitan__UngrabRPC (Characters_BaseTitan_o* __this, int32_t viewId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182181500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18218154c: mov rcx, rsi

void Characters_BaseTitan__UngrabRPC
               (Characters_BaseTitan_o *__this,int32_t viewId,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_Human_o *pCVar2;
  Photon_Realtime_Player_o *pPVar3;
  
  if (Il2CppMethodInitialized_184346db0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    Il2CppMethodInitialized_184346db0 = '\x01';
  }
  __this_00 = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  pPVar3 = (Photon_Realtime_Player_o *)0x0;
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    pPVar3 = (__this_00->fields)._Owner_k__BackingField;
  }
  if (pPVar3 == (info->fields).Sender) {
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      pCVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_00,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
      bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method);
      if (bVar1) {
        (__this->fields).HoldHuman = (Characters_Human_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).HoldHuman,(void *)0x0);
      }
      if (pCVar2 != (Characters_Human_o *)0x0) {
        (pCVar2->fields).Grabber = (Characters_BaseTitan_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pCVar2->fields).Grabber,(void *)0x0);
        (pCVar2->fields).GrabHand = (UnityEngine_Transform_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pCVar2->fields).GrabHand,(void *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Characters.BaseTitan$$Ungrab
// il2cpp: void Characters_BaseTitan__Ungrab (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1821815e0

void Characters_BaseTitan__Ungrab(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar3;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_184346db1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"UngrabRPC");
    Il2CppMethodInitialized_184346db1 = '\x01';
  }
  pCVar1 = (__this->fields).HoldHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pCVar1 = (__this->fields).HoldHuman;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
    __this_00 = (pUVar2->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"UngrabRPC",0,parameters,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).HoldHuman;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        (pCVar1->fields).GrabHand = (UnityEngine_Transform_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pCVar1->fields).GrabHand,(void *)0x0);
        (__this->fields).HoldHuman = (Characters_Human_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).HoldHuman,(void *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$DecreaseAttackSpeedRPC
// il2cpp: void Characters_BaseTitan__DecreaseAttackSpeedRPC (Characters_BaseTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18217b8d0

void Characters_BaseTitan__DecreaseAttackSpeedRPC
               (Characters_BaseTitan_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).ConfusedTime;
  (__this->fields).ConfusedTime = 10.0;
  if (fVar1 <= 0.0) {
    (__this->fields).PreviousAttackSpeedMultiplier = (__this->fields).AttackSpeedMultiplier;
    (__this->fields).AttackSpeedMultiplier = (__this->fields).AttackSpeedMultiplier * 0.67;
  }
  return;
}


// Characters.BaseTitan$$Confuse
// il2cpp: void Characters_BaseTitan__Confuse (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217b1d0

void Characters_BaseTitan__Confuse(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_184346db2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DecreaseAttackSpeedRPC");
    Il2CppMethodInitialized_184346db2 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    Photon_Pun_PhotonView__RPC_1d4d8d0
              (__this_00,"DecreaseAttackSpeedRPC",targetPlayer,parameters,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$ResetAttackSpeed
// il2cpp: void Characters_BaseTitan__ResetAttackSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217f630

void Characters_BaseTitan__ResetAttackSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  if (0.0 <= (__this->fields).PreviousAttackSpeedMultiplier) {
    (__this->fields).AttackSpeedMultiplier = (__this->fields).PreviousAttackSpeedMultiplier;
  }
  return;
}


// Characters.BaseTitan$$OnPlayerEnteredRoom
// il2cpp: void Characters_BaseTitan__OnPlayerEnteredRoom (Characters_BaseTitan_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18217f470

void Characters_BaseTitan__OnPlayerEnteredRoom
               (Characters_BaseTitan_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184346db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSizeRPC");
    Il2CppMethodInitialized_184346db3 = '\x01';
  }
  Characters_BaseCharacter__OnPlayerEnteredRoom((Characters_BaseCharacter_o *)__this,player,(MethodInfo *)0x0)
  ;
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pPVar2->fields)._IsMine_k__BackingField != false) {
    pPVar2 = (((__this->fields).Cache)->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res8[0] = (__this->fields).Size;
    pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
    if (parameters == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
    Photon_Pun_PhotonView__RPC_1d4d8d0(pPVar2,"SetSizeRPC",player,parameters,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseTitan$$StateAction
// il2cpp: void Characters_BaseTitan__StateAction (Characters_BaseTitan_o* __this, int32_t state, System_String_o* animation, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x182180ff0

void Characters_BaseTitan__StateAction
               (Characters_BaseTitan_o *__this,int32_t state,System_String_o *animation,float fade,
               bool deactivateHitboxes,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float stateTime;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    stateTime = Characters_AnimationHandler__GetLength(__this_00,animation,(MethodInfo *)0x0);
    Characters_BaseTitan__StateActionWithTime
              (__this,state,animation,stateTime,fade,deactivateHitboxes,0.0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$StateAttack
// il2cpp: void Characters_BaseTitan__StateAttack (Characters_BaseTitan_o* __this, System_String_o* animation, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x182181080

void Characters_BaseTitan__StateAttack
               (Characters_BaseTitan_o *__this,System_String_o *animation,float fade,bool deactivateHitboxes,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  float fVar2;
  
  (__this->fields)._needFreshCore = true;
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(pCVar1,true,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
    if (deactivateHitboxes) {
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    }
    Characters_BaseCharacter__CrossFadeWithSpeed
              ((Characters_BaseCharacter_o *)__this,animation,(__this->fields)._currentAttackSpeed,fade,0.0,
               (MethodInfo *)0x0);
    (__this->fields).State = 10;
    (__this->fields)._currentStateAnimation = animation;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetLength(pCVar1,animation,(MethodInfo *)0x0);
      (__this->fields)._stateTimeLeft = fVar2 / (__this->fields)._currentAttackSpeed;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$StateActionWithTime
// il2cpp: void Characters_BaseTitan__StateActionWithTime (Characters_BaseTitan_o* __this, int32_t state, System_String_o* animation, float stateTime, float fade, bool deactivateHitboxes, float speed, const MethodInfo* method);
// 0x182180ea0

void Characters_BaseTitan__StateActionWithTime
               (Characters_BaseTitan_o *__this,int32_t state,System_String_o *animation,float stateTime,
               float fade,bool deactivateHitboxes,float speed,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  bool bVar1;
  
  (__this->fields)._needFreshCore = true;
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_AnimationHandler__SetCullingType
            (__this_00,(state - 6U & 0xfffffffb) == 0 || state == 0xf,(MethodInfo *)0x0);
  if ((state - 0x17U & 0xfffffffb) != 0) {
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
  }
  if (deactivateHitboxes) {
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
  }
  if (0.0 < speed) {
    Characters_BaseCharacter__CrossFadeWithSpeed
              ((Characters_BaseCharacter_o *)__this,animation,speed,fade,0.0,(MethodInfo *)0x0);
  }
  else if ((state != 0) ||
          (bVar1 = System_String__op_Inequality
                             ((__this->fields)._currentStateAnimation,animation,(MethodInfo *)0x0), bVar1)) {
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,animation,fade,0.0,(MethodInfo *)0x0);
  }
  (__this->fields).State = state;
  (__this->fields)._currentStateAnimation = animation;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation,animation);
  (__this->fields)._stateTimeLeft = stateTime;
  return;
}


// Characters.BaseTitan$$SetAnimationUpdateMode
// il2cpp: void Characters_BaseTitan__SetAnimationUpdateMode (Characters_BaseTitan_o* __this, bool always, const MethodInfo* method);
// 0x18217fce0

void Characters_BaseTitan__SetAnimationUpdateMode
               (Characters_BaseTitan_o *__this,bool always,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(__this_00,always,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Awake
// il2cpp: void Characters_BaseTitan__Awake (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217a820

void Characters_BaseTitan__Awake(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  Characters_BaseTitan_c *pCVar3;
  Characters_AnimationHandler_o *__this_00;
  Characters_TitanColliderToggler_o *value;
  float fVar4;
  
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
      value = Characters_TitanColliderToggler__Create(__this,(MethodInfo *)0x0);
      (__this->fields).TitanColliderToggler = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).TitanColliderToggler,value);
      fVar4 = (*(__this->klass->vtable)._130_get_DefaultRunSpeed.methodPtr)
                        (__this,(__this->klass->vtable)._130_get_DefaultRunSpeed.method);
      pCVar3 = __this->klass;
      (__this->fields).RunSpeedBase = fVar4;
      fVar4 = (*(pCVar3->vtable)._131_get_DefaultWalkSpeed.methodPtr)
                        (__this,(pCVar3->vtable)._131_get_DefaultWalkSpeed.method);
      pCVar3 = __this->klass;
      (__this->fields).WalkSpeedBase = fVar4;
      fVar4 = (*(pCVar3->vtable)._132_get_DefaultJumpForce.methodPtr)
                        (__this,(pCVar3->vtable)._132_get_DefaultJumpForce.method);
      pCVar3 = __this->klass;
      (__this->fields).JumpForce = fVar4;
      fVar4 = (*(pCVar3->vtable)._133_get_DefaultRotateSpeed.methodPtr)
                        (__this,(pCVar3->vtable)._133_get_DefaultRotateSpeed.method);
      __this_00 = (__this->fields).Animation;
      (__this->fields).RotateSpeed = fVar4;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._190_ScaleSounds.methodPtr)
                  (__this,1.0,(__this->klass->vtable)._190_ScaleSounds.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$CreateCache
// il2cpp: void Characters_BaseTitan__CreateCache (Characters_BaseTitan_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x18217b450
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217b4e9: mov rdx, rbx

void Characters_BaseTitan__CreateCache
               (Characters_BaseTitan_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *value;
  
  if (Il2CppMethodInitialized_184346db4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitanComponentCache);
    Il2CppMethodInitialized_184346db4 = '\x01';
  }
  if (cache == (Utility_BaseComponentCache_o *)0x0) {
    (__this->fields).BaseTitanCache = (Characters_BaseTitanComponentCache_o *)0x0;
    value = (Utility_BaseComponentCache_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_Characters_BaseTitanComponentCache->_2).typeHierarchyDepth;
    if (((cache->klass->_2).typeHierarchyDepth < bVar1) ||
       ((cache->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BaseTitanComponentCache)) {
      il2cpp_codegen_raise_invalid_cast_exception(cache);
    }
    (__this->fields).BaseTitanCache = (Characters_BaseTitanComponentCache_o *)cache;
    bVar1 = (TypeInfo_Characters_BaseTitanComponentCache->_2).typeHierarchyDepth;
    if (((cache->klass->_2).typeHierarchyDepth < bVar1) ||
       (value = cache,
       (cache->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_Characters_BaseTitanComponentCache)) {
      il2cpp_codegen_raise_invalid_cast_exception(cache);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).BaseTitanCache,value);
  Characters_BaseCharacter__CreateCache((Characters_BaseCharacter_o *)__this,cache,(MethodInfo *)0x0);
  return;
}


// Characters.BaseTitan$$CreateAnimations
// il2cpp: void Characters_BaseTitan__CreateAnimations (Characters_BaseTitan_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x18217b260
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217b34d: nop dword ptr [rax]

void Characters_BaseTitan__CreateAnimations
               (Characters_BaseTitan_o *__this,Characters_BaseTitanAnimations_o *animations,MethodInfo *method
               )

{
  System_Reflection_FieldInfo_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__float__o *value;
  System_Type_o *__this_01;
  System_Reflection_FieldInfo_array *pSVar3;
  System_String_o *__this_02;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  uint uVar6;
  Il2CppObject *value_00;
  
  if (Il2CppMethodInitialized_184346db5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitanAnimations);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_184346db5 = '\x01';
  }
  if (animations == (Characters_BaseTitanAnimations_o *)0x0) {
    animations = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseTitanAnimations);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)animations,(MethodInfo *)0x0);
  }
  (__this->fields).BaseTitanAnimations = animations;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BaseTitanAnimations,animations);
  value = (*(__this->klass->vtable)._138_GetRootMotionAnimations.methodPtr)
                    (__this,(__this->klass->vtable)._138_GetRootMotionAnimations.method);
  (__this->fields)._rootMotionAnimations = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rootMotionAnimations,value);
  pIVar4 = (Il2CppObject *)(__this->fields).BaseTitanAnimations;
  if (pIVar4 != (Il2CppObject *)0x0) {
    __this_01 = System_Object__GetType(pIVar4,(MethodInfo *)0x0);
    if (__this_01 != (System_Type_o *)0x0) {
      pSVar3 = System_Type__GetFields(__this_01,(MethodInfo *)0x0);
      if (pSVar3 != (System_Reflection_FieldInfo_array *)0x0) {
        uVar6 = 0;
        do {
          if ((int)pSVar3->max_length <= (int)uVar6) {
            return;
          }
          if ((uint)pSVar3->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          pSVar1 = pSVar3->m_Items[(int)uVar6];
          if (pSVar1 == (System_Reflection_FieldInfo_o *)0x0) break;
          __this_02 = (System_String_o *)
                      (*(pSVar1->klass->vtable)._8_unknown.methodPtr)
                                (pSVar1,(pSVar1->klass->vtable)._8_unknown.method);
          if (__this_02 == (System_String_o *)0x0) break;
          bVar2 = System_String__StartsWith(__this_02,"Attack",(MethodInfo *)0x0);
          if (bVar2) {
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields).AttackAnimations;
            pIVar4 = (Il2CppObject *)
                     (*(pSVar1->klass->vtable)._8_unknown.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable)._8_unknown.method);
            pIVar5 = (Il2CppObject *)
                     (*(pSVar1->klass->vtable)._26_unknown.methodPtr)
                               (pSVar1,(__this->fields).BaseTitanAnimations);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            value_00 = (Il2CppObject *)0x0;
            if (pIVar5 != (Il2CppObject *)0x0) {
              if (pIVar5->klass == g_data_184354e50) {
                value_00 = pIVar5;
              }
              if (value_00 == (Il2CppObject *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
              }
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_00,pIVar4,value_00,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
          }
          uVar6 = uVar6 + 1;
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BaseTitan__GetCameraAnchor (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217cc90

UnityEngine_Transform_o *
Characters_BaseTitan__GetCameraAnchor(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  
  pCVar1 = (__this->fields).BaseTitanCache;
  if (pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) {
    return (pCVar1->fields).Head;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$UpdateDisableArm
// il2cpp: void Characters_BaseTitan__UpdateDisableArm (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__UpdateDisableArm(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$DisableArm
// il2cpp: void Characters_BaseTitan__DisableArm (Characters_BaseTitan_o* __this, bool left, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__DisableArm(Characters_BaseTitan_o* __this, bool left, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$IsToggleColliderActive
// il2cpp: bool Characters_BaseTitan__IsToggleColliderActive (Characters_BaseTitan_o* __this, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x1808ed110

bool
Characters_BaseTitan__IsToggleColliderActive(Characters_BaseTitan_o* __this, UnityEngine_Collider_o* collider, MethodInfo* method)

{
  return true;
}


// Characters.BaseTitan$$UpdateTurn
// il2cpp: void Characters_BaseTitan__UpdateTurn (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182181730

void Characters_BaseTitan__UpdateTurn(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Quaternion_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  fVar4 = (__this->fields)._currentTurnTime;
  fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar1 = (__this->fields).Cache;
  fVar3 = fVar3 + fVar4;
  (__this->fields)._currentTurnTime = fVar3;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    fVar3 = fVar3 / (__this->fields)._maxTurnTime;
    __this_00 = (pUVar1->fields).Transform;
    fVar4 = 0.0;
    if ((0.0 <= fVar3) && (fVar4 = 1.0, fVar3 <= 1.0)) {
      fVar4 = fVar3;
    }
    local_48.x = (__this->fields)._turnTargetRotation.fields.x;
    local_48.y = (__this->fields)._turnTargetRotation.fields.y;
    local_48.z = (__this->fields)._turnTargetRotation.fields.z;
    local_48.w = (__this->fields)._turnTargetRotation.fields.w;
    local_38.x = (__this->fields)._turnStartRotation.fields.x;
    local_38.y = (__this->fields)._turnStartRotation.fields.y;
    local_38.z = (__this->fields)._turnStartRotation.fields.z;
    local_38.w = (__this->fields)._turnStartRotation.fields.w;
    pUVar2 = UnityEngine_Quaternion__Internal_Slerp
                       (local_28,(UnityEngine_Quaternion_o *)&local_38,(UnityEngine_Quaternion_o *)&local_48,
                        fVar4,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      local_38.x = (pUVar2->fields).x;
      local_38.y = (pUVar2->fields).y;
      local_38.z = (pUVar2->fields).z;
      local_38.w = (pUVar2->fields).w;
      UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetSitIdleAniamtion
// il2cpp: System_String_o* Characters_BaseTitan__GetSitIdleAniamtion (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217d4b0

System_String_o * Characters_BaseTitan__GetSitIdleAniamtion(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  System_String_o *pSVar2;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar2 = (*(pCVar1->klass->vtable)._14_get_SitIdle.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._14_get_SitIdle.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetSitFallAnimation
// il2cpp: System_String_o* Characters_BaseTitan__GetSitFallAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217d480

System_String_o * Characters_BaseTitan__GetSitFallAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  System_String_o *pSVar2;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar2 = (*(pCVar1->klass->vtable)._17_get_SitFall.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._17_get_SitFall.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetSitUpAnimation
// il2cpp: System_String_o* Characters_BaseTitan__GetSitUpAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217d4e0

System_String_o * Characters_BaseTitan__GetSitUpAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  System_String_o *pSVar2;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar2 = (*(pCVar1->klass->vtable)._16_get_SitUp.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._16_get_SitUp.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$SetDefaultVelocityLerp
// il2cpp: void Characters_BaseTitan__SetDefaultVelocityLerp (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217fd10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217fd99: movss xmm7, dword ptr [rip + 0x11d8e67]

void Characters_BaseTitan__SetDefaultVelocityLerp(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Utility_BaseComponentCache_o *pUVar11;
  UnityEngine_Rigidbody_o *pUVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  bool bVar14;
  UnityEngine_Vector3_o *pUVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o local_98 [12];
  
  if (Il2CppMethodInitialized_184346db6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    Il2CppMethodInitialized_184346db6 = '\x01';
  }
  bVar14 = System_String__op_Inequality
                     ((__this->fields)._currentAttack,"AttackBellyFlop",(MethodInfo *)0x0);
  if ((bVar14) &&
     (bVar14 = System_String__op_Inequality
                         ((__this->fields)._currentAttack,"AttackRockThrow",(MethodInfo *)0x0), bVar14)) {
    fVar18 = 1.47;
  }
  else {
    fVar18 = 1.0;
  }
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar11 = (__this->fields).Cache;
  if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar12 = (pUVar11->fields).Rigidbody, pUVar12 != (UnityEngine_Rigidbody_o *)0x0)) {
    pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar13->upVector).fields.x;
    fVar2 = (pUVar13->upVector).fields.y;
    fVar3 = (pUVar13->upVector).fields.z;
    pUVar15 = UnityEngine_Rigidbody__get_linearVelocity(local_98,pUVar12,(MethodInfo *)0x0);
    fVar4 = (pUVar15->fields).y;
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    fVar17 = (__this->fields)._currentGroundDistance * 100.0;
    pUVar11 = (__this->fields).Cache;
    if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar12 = (pUVar11->fields).Rigidbody, pUVar12 != (UnityEngine_Rigidbody_o *)0x0)) {
      if (100.0 <= fVar17) {
        fVar17 = 100.0;
      }
      pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar5 = (pUVar13->downVector).fields.x;
      fVar6 = (pUVar13->downVector).fields.y;
      fVar7 = (pUVar13->downVector).fields.z;
      pUVar15 = UnityEngine_Rigidbody__get_linearVelocity(local_98,pUVar12,(MethodInfo *)0x0);
      fVar8 = (pUVar15->fields).x;
      fVar9 = (pUVar15->fields).y;
      fVar10 = (pUVar15->fields).z;
      fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar16 = fVar16 * fVar18;
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
      else if (1.0 < fVar16) {
        fVar16 = 1.0;
      }
      local_98[0].fields.x = ((fVar17 * fVar5 + fVar1 * fVar4) - fVar8) * fVar16 + fVar8;
      local_98[0].fields.y = ((fVar17 * fVar6 + fVar2 * fVar4) - fVar9) * fVar16 + fVar9;
      local_98[0].fields.z = ((fVar17 * fVar7 + fVar3 * fVar4) - fVar10) * fVar16 + fVar10;
      UnityEngine_Rigidbody__set_linearVelocity(pUVar12,local_98,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Update
// il2cpp: void Characters_BaseTitan__Update (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182181800
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18218223f: jmp 0x18218250d
// asm:   0x182182267: jmp 0x18218250d
// asm:   0x182182299: jmp 0x1821822ec
// asm:   0x1821822ba: jmp 0x1821824c6

void Characters_BaseTitan__Update(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar8;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar9;
  float fVar16;
  Utility_BaseComponentCache_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Vector3_StaticFields *pUVar19;
  Characters_BaseTitanComponentCache_o *pCVar20;
  Characters_Human_o *x;
  Characters_BaseTitanAnimations_o *pCVar21;
  bool bVar22;
  int32_t iVar23;
  UnityEngine_Vector3_o *pUVar24;
  System_String_o *pSVar25;
  MethodInfo *pMVar26;
  Characters_BaseTitan_c *pCVar27;
  MethodInfo *in_R8;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_LayerMask_Fields local_res8;
  UnityEngine_Vector3_Fields local_108;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_o local_e8;
  undefined1 local_d8 [56];
  _union_13 _Stack_a0;
  _union_14 local_98;
  uint32_t uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  
  if (Il2CppMethodInitialized_184346db7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346db7 = '\x01';
  }
  local_d8._16_8_ = (InvokerMethod)0x0;
  local_d8._24_4_ = 0;
  local_res8.m_Mask = 0;
  local_98.genericMethod = (void *)0x0;
  uStack_90 = 0;
  local_d8._0_8_ = (Il2CppMethodPointer)0x0;
  local_d8._8_8_ = (Il2CppMethodPointer)0x0;
  local_d8._28_4_ = 0;
  local_d8._32_4_ = 0;
  local_d8._36_8_ = 0;
  local_d8._48_8_ = (Il2CppType **)0x0;
  _Stack_a0.rgctx_data = (Il2CppRGCTXData *)0x0;
  uStack_8c._0_2_ = 0;
  uStack_8c._2_2_ = 0;
  uStack_88._0_2_ = 0;
  uStack_88._2_1_ = '\0';
  uStack_88._3_1_ = '\0';
  uStack_84 = 0;
  (*(__this->klass->vtable)._177_UpdateDisableArm.methodPtr)
            (__this,(System_Type_o *)(__this->klass->vtable)._177_UpdateDisableArm.method,in_R8);
  (*(__this->klass->vtable)._198_UpdateAnimationColliders.methodPtr)
            (__this,(__this->klass->vtable)._198_UpdateAnimationColliders.method);
  bVar22 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar22) {
    return;
  }
  if ((__this->fields).EnableAI == false) {
    return;
  }
  fVar30 = (__this->fields)._disableCooldownLeft;
  fVar28 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._disableCooldownLeft = fVar30 - fVar28;
  fVar30 = (__this->fields)._climbCooldownLeft;
  fVar28 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._climbCooldownLeft = fVar30 - fVar28;
  if (((__this->fields).AI == false) &&
     (((((__this->fields).State == 1 || ((__this->fields).State == 3)) || ((__this->fields).State == 2)) &&
      ((__this->fields).IsSit != false)))) {
label_182182470:
    pCVar21 = (__this->fields).BaseTitanAnimations;
    if (pCVar21 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar25 = (*(pCVar21->klass->vtable)._15_get_SitDown.methodPtr)
                          (pCVar21,(pCVar21->klass->vtable)._15_get_SitDown.method);
      Characters_BaseTitan__StateAction(__this,0x14,pSVar25,0.1,true,(MethodInfo *)0x0);
      return;
    }
label_182182570:
    ThrowNullReferenceException();
  }
  if ((((((__this->fields).State == 7) || ((__this->fields).State == 6)) && ((__this->fields).AI == false)) &&
      (((__this->fields).HasDirection != false && ((__this->fields).IsSprint != false)))) &&
     (1.0 < (__this->fields).CurrentSprintStamina)) {
    pUVar17 = (__this->fields).Cache;
    if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar18 = (pUVar17->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0)) goto label_182182570;
    pUVar24 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_108,pUVar18,(MethodInfo *)0x0);
    uVar2 = (pUVar24->fields).x;
    uVar10 = (pUVar24->fields).y;
    fVar30 = (pUVar24->fields).z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    fVar28 = (__this->fields).Size;
    pUVar17 = (__this->fields).Cache;
    pUVar19 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar3 = (pUVar19->upVector).fields.x;
    uVar11 = (pUVar19->upVector).fields.y;
    if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar18 = (pUVar17->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0)) goto label_182182570;
    fVar29 = (pUVar19->upVector).fields.z;
    pUVar24 = UnityEngine_Transform__get_forward
                        ((UnityEngine_Vector3_o *)&local_108,pUVar18,(MethodInfo *)0x0);
    fVar1 = (__this->fields).Size;
    uVar8._0_4_ = (pUVar24->fields).x;
    uVar8._4_4_ = (pUVar24->fields).y;
    fVar16 = (pUVar24->fields).z;
    local_res8.m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(__this,(MethodInfo *)0x0);
    iVar23 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    in_R8 = (MethodInfo *)local_d8;
    local_108.y = (float)uVar11 * 3.0 * fVar28 + (float)uVar10;
    local_108.x = (float)uVar3 * 3.0 * fVar28 + (float)uVar2;
    local_108.z = fVar29 * 3.0 * fVar28 + fVar30;
    local_f8._0_8_ = uVar8;
    local_f8.z = fVar16;
    bVar22 = UnityEngine_Physics__Raycast_2fe5220
                       ((UnityEngine_Vector3_o *)&local_108,(UnityEngine_Vector3_o *)&local_f8,
                        (UnityEngine_RaycastHit_o *)in_R8,fVar1 * 5.0,iVar23,(MethodInfo *)0x0);
    if (bVar22) {
      (*(__this->klass->vtable)._159_WallClimb.methodPtr)
                (__this,(__this->klass->vtable)._159_WallClimb.method);
    }
  }
  if (((__this->fields).State == 2) || ((__this->fields).State == 0x19)) {
    fVar30 = (__this->fields).CurrentSprintStamina;
    fVar28 = (__this->fields).SprintStaminaConsumption;
    fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).CurrentSprintStamina = fVar30 - fVar29 * fVar28;
  }
  else {
    fVar30 = (__this->fields).CurrentSprintStamina;
    fVar28 = (__this->fields).SprintStaminaRecover;
    fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).CurrentSprintStamina = fVar29 * fVar28 + fVar30;
  }
  fVar30 = (__this->fields).CurrentSprintStamina;
  if (fVar30 < 0.0) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = (__this->fields).MaxSprintStamina;
    if (fVar30 <= fVar28) {
      fVar28 = fVar30;
    }
  }
  (__this->fields).CurrentSprintStamina = fVar28;
  if (((__this->fields).State == 0x19) && ((fVar28 <= 0.0 || ((__this->fields).IsSprint == false)))) {
    in_R8 = (__this->klass->vtable)._163_Idle.method;
    (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,0.2,in_R8);
  }
  if ((__this->fields).State == 7) {
    return;
  }
  if ((__this->fields).State == 0xf) {
    return;
  }
  if ((__this->fields).State == 6) {
    return;
  }
  if ((__this->fields).State == 0x19) {
    return;
  }
  if (((__this->fields).State == 0x17) || ((__this->fields).State == 0x1b)) {
    (*(__this->klass->vtable)._188_UpdateEat.methodPtr)
              (__this,(System_Type_o *)(__this->klass->vtable)._188_UpdateEat.method,in_R8);
  }
  else if ((__this->fields).State == 0x18) {
    (*(__this->klass->vtable)._180_UpdateTurn.methodPtr)
              (__this,(__this->klass->vtable)._180_UpdateTurn.method);
  }
  else if ((__this->fields).State == 10) {
    (*(__this->klass->vtable)._187_UpdateAttack.methodPtr)
              (__this,(System_Type_o *)(__this->klass->vtable)._187_UpdateAttack.method,in_R8);
  }
  else if (((__this->fields).State == 4) && ((__this->fields).AI == false)) {
    pUVar24 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                        ((UnityEngine_Vector3_o *)&local_108,__this,
                         (__this->klass->vtable)._76_GetAimPoint.method);
    pCVar20 = (__this->fields).BaseTitanCache;
    if ((pCVar20 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar18 = (pCVar20->fields).Head, pUVar18 == (UnityEngine_Transform_o *)0x0)) goto label_182182570;
    uVar4 = (pUVar24->fields).x;
    uVar12 = (pUVar24->fields).y;
    fVar30 = (pUVar24->fields).z;
    pUVar24 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_108,pUVar18,(MethodInfo *)0x0);
    uVar5 = (pUVar24->fields).x;
    uVar13 = (pUVar24->fields).y;
    fVar30 = fVar30 - (pUVar24->fields).z;
    local_f8.y = (float)uVar12 - (float)uVar13;
    local_f8.x = (float)uVar4 - (float)uVar5;
    local_f8.z = fVar30;
    fVar28 = (float)il2cpp_runtime_helper_180546a40(&local_f8,0);
    fVar28 = fVar28 / (__this->fields).JumpForce;
    pUVar24 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                        (&local_e8,__this,(__this->klass->vtable)._58_get_Gravity.method);
    local_108.x = (pUVar24->fields).x;
    local_108.y = (pUVar24->fields).y;
    local_108.z = (pUVar24->fields).z;
    fVar29 = (float)il2cpp_runtime_helper_180546a40();
    fVar28 = fVar29 * 0.5 * fVar28 * fVar28 + ((float)uVar12 - (float)uVar13);
    local_f8.y = fVar28;
    (__this->fields)._jumpDirection.fields.x = local_f8.x;
    (__this->fields)._jumpDirection.fields.y = fVar28;
    (__this->fields)._jumpDirection.fields.z = fVar30;
  }
  fVar30 = (__this->fields)._stateTimeLeft;
  fVar28 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar30 = fVar30 - fVar28;
  (__this->fields)._stateTimeLeft = fVar30;
  if (0.0 < fVar30) {
    return;
  }
  if ((__this->fields).State == 10) {
    x = (__this->fields).HoldHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar26 = (MethodInfo *)0x0;
    bVar22 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar22) {
      (*(__this->klass->vtable)._160_Eat.methodPtr)
                (__this,(System_Type_o *)(__this->klass->vtable)._160_Eat.method,pMVar26);
      return;
    }
  }
  if ((__this->fields).State == 0) {
    if ((__this->fields).HasDirection == false) {
      if ((__this->fields).IsSit == false) {
        return;
      }
      pCVar21 = (__this->fields).BaseTitanAnimations;
      if (pCVar21 == (Characters_BaseTitanAnimations_o *)0x0) goto label_182182570;
      pSVar25 = (*(pCVar21->klass->vtable)._15_get_SitDown.methodPtr)
                          (pCVar21,(pCVar21->klass->vtable)._15_get_SitDown.method);
      bVar22 = System_String__op_Inequality(pSVar25,"",(MethodInfo *)0x0);
      if (!bVar22) {
        return;
      }
      goto label_182182470;
    }
    if ((__this->fields).IsWalk == false) {
      if ((__this->fields).IsSprint == false) goto label_18218250d;
    }
    else if ((__this->fields).IsSprint == false) {
label_1821824c6:
      (*(__this->klass->vtable)._161_Walk.methodPtr)(__this,(__this->klass->vtable)._161_Walk.method);
      return;
    }
    if ((1.0 < (__this->fields).CurrentSprintStamina) &&
       (bVar22 = (*(__this->klass->vtable)._123_get_CanSprint.methodPtr)
                           (__this,(__this->klass->vtable)._123_get_CanSprint.method), bVar22)) {
label_1821822ec:
      (*(__this->klass->vtable)._158_Sprint.methodPtr)(__this,(__this->klass->vtable)._158_Sprint.method);
      return;
    }
  }
  else {
    if ((__this->fields).State == 0x14) {
      pSVar25 = (*(__this->klass->vtable)._181_GetSitIdleAniamtion.methodPtr)
                          (__this,(__this->klass->vtable)._181_GetSitIdleAniamtion.method);
      Characters_BaseTitan__StateActionWithTime(__this,0x16,pSVar25,0.0,0.1,true,0.0,(MethodInfo *)0x0);
      return;
    }
    if ((__this->fields).State == 0x16) {
      if (((__this->fields).HasDirection == false) && ((__this->fields).IsSit != false)) {
        return;
      }
label_182182385:
      pMVar26 = (MethodInfo *)
                (*(__this->klass->vtable)._183_GetSitUpAnimation.methodPtr)
                          (__this,(__this->klass->vtable)._183_GetSitUpAnimation.method);
      Characters_BaseTitan__StateAction(__this,0x15,(System_String_o *)pMVar26,0.1,true,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._170_RegenerateWardedWeakSpot.methodPtr)
                (__this,(System_Type_o *)(__this->klass->vtable)._170_RegenerateWardedWeakSpot.method,pMVar26)
      ;
      return;
    }
    if ((__this->fields).State == 0x13) {
      pSVar25 = (*(__this->klass->vtable)._181_GetSitIdleAniamtion.methodPtr)
                          (__this,(__this->klass->vtable)._181_GetSitIdleAniamtion.method);
      Characters_BaseTitan__StateActionWithTime
                (__this,0x11,pSVar25,(__this->fields)._currentCrippleTime,0.1,true,0.0,(MethodInfo *)0x0);
      return;
    }
    if ((__this->fields).State == 0x11) goto label_182182385;
    if ((__this->fields).State == 1) {
      if ((__this->fields).HasDirection == false) {
label_182182304:
        (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,0.2,(__this->klass->vtable)._163_Idle.method);
        return;
      }
      if ((__this->fields).IsSprint == false) {
        if ((__this->fields).IsWalk == false) {
          return;
        }
        goto label_1821824c6;
      }
      bVar22 = (*(__this->klass->vtable)._123_get_CanSprint.methodPtr)
                         (__this,(__this->klass->vtable)._123_get_CanSprint.method);
      if (!bVar22) {
        return;
      }
      if ((__this->fields).CurrentSprintStamina <= 1.0) {
        return;
      }
      goto label_1821822ec;
    }
    if ((__this->fields).State == 3) {
      if ((__this->fields).HasDirection == false) goto label_182182304;
      if ((__this->fields).IsSprint != false) {
        if ((__this->fields).CurrentSprintStamina <= 1.0) {
          return;
        }
        bVar22 = (*(__this->klass->vtable)._123_get_CanSprint.methodPtr)
                           (__this,(__this->klass->vtable)._123_get_CanSprint.method);
        if (!bVar22) {
          return;
        }
        goto label_1821822ec;
      }
      if ((__this->fields).IsWalk != false) {
        return;
      }
    }
    else {
      if ((__this->fields).State != 2) {
        if ((__this->fields).State == 4) {
          (*(__this->klass->vtable)._149_StartJump.methodPtr)
                    (__this,(__this->klass->vtable)._149_StartJump.method);
          return;
        }
        if ((__this->fields).State == 5) {
          (__this->fields).State = 6;
          return;
        }
        if (((__this->fields).State == 10) || ((__this->fields).State == 0x17)) {
          (*(__this->klass->vtable)._164_IdleWait.methodPtr)
                    (__this,(__this->fields).AttackPause,(__this->klass->vtable)._164_IdleWait.method);
          return;
        }
        if (((__this->fields).State == 9) || ((__this->fields).State == 0x1a)) {
          (*(__this->klass->vtable)._164_IdleWait.methodPtr)
                    (__this,(__this->fields).ActionPause,(__this->klass->vtable)._164_IdleWait.method);
          return;
        }
        if ((__this->fields).State == 0x18) {
          (*(__this->klass->vtable)._164_IdleWait.methodPtr)
                    (__this,(__this->fields).TurnPause,(__this->klass->vtable)._164_IdleWait.method);
          return;
        }
        if ((((__this->fields).State == 0x10) || ((__this->fields).State == 0x15)) ||
           ((__this->fields).State == 8)) {
          (*(__this->klass->vtable)._164_IdleWait.methodPtr)
                    (__this,0.3,(__this->klass->vtable)._164_IdleWait.method);
          return;
        }
        if ((__this->fields).State == 0xb) {
          (*(__this->klass->vtable)._164_IdleWait.methodPtr)
                    (__this,0.2,(__this->klass->vtable)._164_IdleWait.method);
          return;
        }
        if ((__this->fields).State != 0x12) {
          (*(__this->klass->vtable)._162_Idle.methodPtr)(__this,(__this->klass->vtable)._162_Idle.method);
          return;
        }
        if (0.0 <= (__this->fields)._crippleEndTime) {
          pSVar25 = (*(__this->klass->vtable)._181_GetSitIdleAniamtion.methodPtr)
                              (__this,(__this->klass->vtable)._181_GetSitIdleAniamtion.method);
          fVar30 = (__this->fields)._crippleEndTime;
          iVar23 = 0x11;
          fVar28 = UnityEngine_Time__get_time((MethodInfo *)0x0);
          fVar30 = fVar30 - fVar28;
          fVar28 = 0.0;
          if (0.0 <= fVar30) {
            fVar28 = fVar30;
          }
        }
        else {
          pCVar21 = (__this->fields).BaseTitanAnimations;
          if (pCVar21 == (Characters_BaseTitanAnimations_o *)0x0) goto label_182182570;
          iVar23 = 0x16;
          pSVar25 = (*(pCVar21->klass->vtable)._14_get_SitIdle.methodPtr)
                              (pCVar21,(pCVar21->klass->vtable)._14_get_SitIdle.method);
          fVar28 = 0.3;
        }
        Characters_BaseTitan__StateActionWithTime(__this,iVar23,pSVar25,fVar28,0.3,true,0.0,(MethodInfo *)0x0)
        ;
        (__this->fields)._crippleEndTime = -1.0;
        return;
      }
      if ((__this->fields).AI == false) {
        pUVar17 = (__this->fields).Cache;
        if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar18 = (pUVar17->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
        goto label_182182570;
        pUVar24 = UnityEngine_Transform__get_position(&local_e8,pUVar18,(MethodInfo *)0x0);
        uVar6 = (pUVar24->fields).x;
        uVar14 = (pUVar24->fields).y;
        fVar30 = (pUVar24->fields).z;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        fVar28 = (__this->fields).Size;
        pUVar17 = (__this->fields).Cache;
        pUVar19 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar7 = (pUVar19->upVector).fields.x;
        uVar15 = (pUVar19->upVector).fields.y;
        if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar18 = (pUVar17->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
        goto label_182182570;
        fVar29 = (pUVar19->upVector).fields.z;
        pUVar24 = UnityEngine_Transform__get_forward(&local_e8,pUVar18,(MethodInfo *)0x0);
        fVar1 = (__this->fields).Size;
        uVar9._0_4_ = (pUVar24->fields).x;
        uVar9._4_4_ = (pUVar24->fields).y;
        fVar16 = (pUVar24->fields).z;
        local_res8.m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(__this,(MethodInfo *)0x0);
        iVar23 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        local_f8.y = fVar28 * (float)uVar15 * 3.0 + (float)uVar14;
        local_f8.x = fVar28 * (float)uVar7 * 3.0 + (float)uVar6;
        local_108._0_8_ = uVar9;
        local_108.z = fVar16;
        local_f8.z = fVar28 * fVar29 * 3.0 + fVar30;
        bVar22 = UnityEngine_Physics__Raycast_2fe5220
                           ((UnityEngine_Vector3_o *)&local_f8,(UnityEngine_Vector3_o *)&local_108,
                            (UnityEngine_RaycastHit_o *)(local_d8 + 0x30),fVar1 * 5.0,iVar23,(MethodInfo *)0x0
                           );
        if (bVar22) {
          (*(__this->klass->vtable)._159_WallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._159_WallClimb.method);
        }
      }
      if ((__this->fields).HasDirection == false) goto label_182182304;
      if ((__this->fields).IsSprint == false) {
        pCVar27 = __this->klass;
        if ((__this->fields).IsWalk != false) {
          (*(pCVar27->vtable)._161_Walk.methodPtr)(__this,(pCVar27->vtable)._161_Walk.method);
          return;
        }
        goto label_182182513;
      }
      if (0.0 < (__this->fields).CurrentSprintStamina) {
        return;
      }
    }
  }
label_18218250d:
  pCVar27 = __this->klass;
label_182182513:
  (*(pCVar27->vtable)._157_Run.methodPtr)(__this,(pCVar27->vtable)._157_Run.method);
  return;
}


// Characters.BaseTitan$$StopWallClimb
// il2cpp: void Characters_BaseTitan__StopWallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182181180

void Characters_BaseTitan__StopWallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,0.2,(__this->klass->vtable)._163_Idle.method);
  return;
}


// Characters.BaseTitan$$FixedUpdate
// il2cpp: void Characters_BaseTitan__FixedUpdate (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217b9f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217c622: jmp 0x18217c6bd

void Characters_BaseTitan__FixedUpdate(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar20;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar21;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  int iVar40;
  Utility_BaseComponentCache_o *pUVar41;
  UnityEngine_Vector3_StaticFields *pUVar42;
  UnityEngine_Transform_o *pUVar43;
  UnityEngine_Transform_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar44;
  System_Collections_Generic_Dictionary_string__float__o *pSVar45;
  Characters_AnimationHandler_o *pCVar46;
  bool bVar47;
  int32_t layerMask;
  UnityEngine_Vector3_o *pUVar48;
  UnityEngine_Rigidbody_o *pUVar49;
  MethodInfo *pMVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  UnityEngine_LayerMask_Fields local_res8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Touch_Fields local_c8 [2];
  
  if (Il2CppMethodInitialized_184346db8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&"Gravity");
    Il2CppMethodInitialized_184346db8 = '\x01';
  }
  local_c8[0].m_RawPosition.fields.y = 0.0;
  local_c8[0].m_PositionDelta.fields.x = 0.0;
  local_c8[0].m_PositionDelta.fields.y = 0.0;
  local_res8.m_Mask = 0;
  local_c8[0].m_TimeDelta = 0.0;
  local_c8[0].m_TapCount = 0;
  local_c8[0].m_Phase = 0;
  local_c8[0].m_Type = 0;
  local_c8[0].m_FingerId = 0;
  local_c8[0].m_Position.fields.x = 0.0;
  local_c8[0].m_Position.fields.y = 0.0;
  local_c8[0].m_RawPosition.fields.x = 0.0;
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar47 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar47) {
    return;
  }
  fVar51 = (__this->fields)._checkGroundTimeLeft;
  fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._checkGroundTimeLeft = fVar51 - fVar2;
  fVar51 = (__this->fields)._launchTimeLeft;
  fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  pUVar41 = (__this->fields).Cache;
  (__this->fields)._launchTimeLeft = fVar51 - fVar2;
  if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18217cab3;
  bVar47 = UnityEngine_Rigidbody__get_isKinematic(pUVar49,(MethodInfo *)0x0);
  if ((((__this->fields).State == 0) || ((__this->fields).State == 0x16)) &&
     (((((__this->fields).AI != false && ((__this->fields).Grounded != false)) &&
       ((__this->fields).CurrentSpeed <= 0.1)) && ((__this->fields)._disableKinematicTimeLeft <= 0.0)))) {
    if (bVar47) {
      return;
    }
    Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,true,0.0,(MethodInfo *)0x0);
    return;
  }
  if (bVar47) {
    Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  }
  pUVar41 = (__this->fields).Cache;
  if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18217cab3;
  pMVar50 = (MethodInfo *)0x0;
  pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                      ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
  if (0.0 <= (pUVar48->fields).y) {
    (__this->fields)._currentFallTotalTime = 0.0;
  }
  else {
    fVar51 = (__this->fields)._currentFallTotalTime;
    fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    (__this->fields)._currentFallTotalTime = fVar2 + fVar51;
  }
  if (((__this->fields).AI & 10.0 <= (__this->fields)._currentFallTotalTime) != 0) {
    pUVar41 = (__this->fields).Cache;
    if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18217cab3;
    pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
    fVar51 = (pUVar48->fields).y;
    pMVar50 = (__this->klass->vtable)._58_get_Gravity.method;
    pUVar48 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                        ((UnityEngine_Vector3_o *)&local_d8,__this,pMVar50);
    if (fVar51 <= (pUVar48->fields).y * 10.0) {
      pMVar50 = (__this->klass->vtable)._92_GetKilledRPC.method;
      (*(__this->klass->vtable)._92_GetKilledRPC.methodPtr)(__this,"Gravity",pMVar50);
    }
  }
  if (((((__this->fields)._checkGroundTimeLeft <= 0.0) || ((__this->fields).AI == false)) ||
      ((__this->fields).State == 7)) || ((__this->fields).State == 5)) {
    (*(__this->klass->vtable)._107_CheckGround.methodPtr)
              (__this,(__this->klass->vtable)._107_CheckGround.method);
    fVar51 = (*(__this->klass->vtable)._136_get_CheckGroundTime.methodPtr)
                       (__this,(__this->klass->vtable)._136_get_CheckGroundTime.method);
    (__this->fields)._checkGroundTimeLeft = fVar51;
  }
  if ((__this->fields).State != 7) {
    (__this->fields)._currentFallStuckTime = 0.0;
  }
  if (((__this->fields).AI != false) ||
     (((((__this->fields).State != 4 && ((__this->fields).State != 0x1a)) &&
       (((__this->fields).State != 0x14 && ((__this->fields).State != 0xf)))) ||
      (0.0 < (__this->fields)._launchTimeLeft)))) {
    if ((__this->fields).State == 6) {
      pUVar41 = (__this->fields).Cache;
      if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
      goto label_18217cab3;
      pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                          ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
      if ((pUVar48->fields).y <= 1.0) {
        (*(__this->klass->vtable)._166_Fall.methodPtr)(__this,(__this->klass->vtable)._166_Fall.method);
      }
    }
    else if ((__this->fields).State == 10) {
      (*(__this->klass->vtable)._186_FixedUpdateAttack.methodPtr)
                (__this,(System_Type_o *)(__this->klass->vtable)._186_FixedUpdateAttack.method,pMVar50);
      if ((__this->fields).Grounded != false) {
        if ((__this->fields).AI != false) goto label_18217c64c;
        if (((__this->fields).Grounded != false) && ((__this->fields).AI == false)) goto label_18217c66a;
      }
    }
    else {
      bVar47 = (__this->fields).Grounded;
      if ((__this->fields).State == 0xf) {
        if ((bVar47 != false) && ((__this->fields)._launchTimeLeft <= 0.0)) {
label_18217c64c:
          Characters_BaseTitan__SetDefaultVelocity(__this,(MethodInfo *)0x0);
        }
      }
      else if ((((bVar47 == false) || ((__this->fields).State == 5)) || ((__this->fields).State == 0x19)) ||
              (0.0 < (__this->fields)._launchTimeLeft)) {
        if ((__this->fields).State == 7) {
          pUVar41 = (__this->fields).Cache;
          if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
          goto label_18217cab3;
          pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                              ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
          if (-1.0 <= (pUVar48->fields).y) {
            fVar51 = (__this->fields)._currentFallStuckTime;
            fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            fVar2 = fVar2 + fVar51;
            (__this->fields)._currentFallStuckTime = fVar2;
            if (0.5 < fVar2) goto label_18217c5f8;
          }
        }
        else if ((__this->fields).State == 0x19) {
          pUVar41 = (__this->fields).Cache;
          if (pUVar41 == (Utility_BaseComponentCache_o *)0x0) goto label_18217cab3;
          pUVar49 = (pUVar41->fields).Rigidbody;
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          if (pUVar49 == (UnityEngine_Rigidbody_o *)0x0) goto label_18217cab3;
          pUVar42 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_e8.x = (pUVar42->zeroVector).fields.x;
          local_e8.y = (pUVar42->zeroVector).fields.y;
          local_e8.z = (pUVar42->zeroVector).fields.z;
          UnityEngine_Rigidbody__set_linearVelocity
                    (pUVar49,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
          pUVar48 = (*(__this->klass->vtable)._106_GetTargetDirection.methodPtr)
                              ((UnityEngine_Vector3_o *)&local_d8,__this,
                               (__this->klass->vtable)._106_GetTargetDirection.method);
          if ((__this->fields).HasDirection != false) {
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar43 = (pUVar41->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0))
            goto label_18217cab3;
            uVar20._0_4_ = (pUVar48->fields).x;
            uVar20._4_4_ = (pUVar48->fields).y;
            fVar51 = (pUVar48->fields).z;
            pUVar48 = UnityEngine_Transform__get_forward
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
            local_e8.x = (pUVar48->fields).x;
            local_e8.y = (pUVar48->fields).y;
            local_e8.z = (pUVar48->fields).z;
            local_d8._0_8_ = uVar20;
            local_d8.z = fVar51;
            fVar51 = (float)il2cpp_runtime_helper_181d9e200(&local_d8,&local_e8);
            if (fVar51 < 135.0) {
              pUVar41 = (__this->fields).Cache;
              if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar43 = (pUVar41->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0))
              goto label_18217cab3;
              pUVar48 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
              uVar7 = (pUVar48->fields).x;
              uVar27 = (pUVar48->fields).y;
              fVar51 = (pUVar48->fields).z;
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              fVar2 = (__this->fields).Size;
              pUVar41 = (__this->fields).Cache;
              pUVar42 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar8 = (pUVar42->upVector).fields.x;
              uVar28 = (pUVar42->upVector).fields.y;
              if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar43 = (pUVar41->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0))
              goto label_18217cab3;
              fVar22 = (pUVar42->upVector).fields.z;
              pUVar48 = UnityEngine_Transform__get_forward
                                  ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
              fVar53 = (__this->fields).Size;
              uVar21._0_4_ = (pUVar48->fields).x;
              uVar21._4_4_ = (pUVar48->fields).y;
              fVar54 = (pUVar48->fields).z;
              local_res8.m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(__this,(MethodInfo *)0x0);
              layerMask = UnityEngine_Touch__get_fingerId
                                    ((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
              }
              local_e8.y = (float)uVar28 * 3.0 * fVar2 + (float)uVar27;
              local_e8.x = (float)uVar8 * 3.0 * fVar2 + (float)uVar7;
              local_e8.z = fVar22 * 3.0 * fVar2 + fVar51;
              local_d8._0_8_ = uVar21;
              local_d8.z = fVar54;
              bVar47 = UnityEngine_Physics__Raycast_2fe5220
                                 ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Vector3_o *)&local_d8,
                                  (UnityEngine_RaycastHit_o *)local_c8,fVar53 * 5.0,layerMask,
                                  (MethodInfo *)0x0);
              pUVar41 = (__this->fields).Cache;
              if (pUVar41 == (Utility_BaseComponentCache_o *)0x0) goto label_18217cab3;
              if (bVar47) {
                pUVar49 = (pUVar41->fields).Rigidbody;
                if (pUVar49 == (UnityEngine_Rigidbody_o *)0x0) goto label_18217cab3;
                pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                                    ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
                uVar12 = (pUVar48->fields).x;
                uVar32 = (pUVar48->fields).y;
                fVar51 = (pUVar48->fields).z;
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pUVar42 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar2 = (__this->fields).RunSpeedPerLevel * (__this->fields).Size * 0.5 +
                        (__this->fields).RunSpeedBase;
                uVar13 = (pUVar42->upVector).fields.x;
                uVar33 = (pUVar42->upVector).fields.y;
                local_d8.z = fVar2 * (pUVar42->upVector).fields.z + fVar51;
                local_d8.x = (float)uVar13 * fVar2 + (float)uVar12;
                local_d8.y = (float)uVar33 * fVar2 + (float)uVar32;
                UnityEngine_Rigidbody__set_linearVelocity
                          (pUVar49,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
                fVar51 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_c8,(MethodInfo *)0x0);
                if ((__this->fields).Size * 3.5 < fVar51) {
                  pUVar41 = (__this->fields).Cache;
                  if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
                     (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
                  goto label_18217cab3;
                  pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                                      ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
                  pUVar41 = (__this->fields).Cache;
                  if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
                     (pUVar43 = (pUVar41->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0))
                  goto label_18217cab3;
                  uVar14 = (pUVar48->fields).x;
                  uVar34 = (pUVar48->fields).y;
                  fVar51 = (pUVar48->fields).z;
                  pUVar48 = UnityEngine_Transform__get_forward
                                      ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
                  uVar15 = (pUVar48->fields).x;
                  uVar35 = (pUVar48->fields).y;
                  fVar2 = (pUVar48->fields).z;
                  fVar53 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_c8,(MethodInfo *)0x0)
                  ;
                  fVar22 = (__this->fields).Size;
                  fVar54 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
                  fVar54 = (fVar53 - fVar22 * 3.5) / fVar54;
                  if (10.0 <= fVar54) {
                    fVar54 = 10.0;
                  }
                  local_d8.z = fVar2 * fVar54 + fVar51;
                  local_d8.y = (float)uVar35 * fVar54 + (float)uVar34;
                  local_d8.x = (float)uVar15 * fVar54 + (float)uVar14;
                  UnityEngine_Rigidbody__set_linearVelocity
                            (pUVar49,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
                }
                goto label_18217c6bd;
              }
              pUVar43 = (pUVar41->fields).Transform;
              if (pUVar43 == (UnityEngine_Transform_o *)0x0) goto label_18217cab3;
              pUVar48 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
              uVar9 = (pUVar48->fields).x;
              uVar29 = (pUVar48->fields).y;
              fVar51 = (pUVar48->fields).z;
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              fVar2 = (__this->fields).Size;
              pUVar42 = TypeInfo_UnityEngine_Vector3->static_fields;
              pUVar41 = (__this->fields).Cache;
              uVar10 = (pUVar42->upVector).fields.x;
              uVar30 = (pUVar42->upVector).fields.y;
              if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
                 (__this_00 = (pUVar41->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
              goto label_18217cab3;
              fVar22 = (pUVar42->upVector).fields.z;
              pUVar48 = UnityEngine_Transform__get_forward
                                  ((UnityEngine_Vector3_o *)&local_d8,__this_00,(MethodInfo *)0x0);
              fVar53 = (__this->fields).Size;
              uVar11 = (pUVar48->fields).x;
              uVar31 = (pUVar48->fields).y;
              fVar54 = (pUVar48->fields).z;
              local_d8.x = ((float)uVar11 + (float)uVar11) * fVar53 + (float)uVar10 * 3.0 * fVar2 +
                           (float)uVar9;
              local_d8.y = ((float)uVar31 + (float)uVar31) * fVar53 + (float)uVar30 * 3.0 * fVar2 +
                           (float)uVar29;
              local_d8.z = (fVar54 + fVar54) * fVar53 + fVar22 * 3.0 * fVar2 + fVar51;
              UnityEngine_Transform__set_position
                        (pUVar43,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
            }
          }
          (*(__this->klass->vtable)._185_StopWallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._185_StopWallClimb.method);
        }
      }
      else {
        Characters_BaseTitan__SetDefaultVelocity(__this,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        iVar40 = (__this->fields).State;
        pUVar42 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar2 = (pUVar42->zeroVector).fields.y;
        fVar51 = (pUVar42->zeroVector).fields.z;
        (__this->fields).LastTargetDirection.fields.x = (pUVar42->zeroVector).fields.x;
        (__this->fields).LastTargetDirection.fields.y = fVar2;
        (__this->fields).LastTargetDirection.fields.z = fVar51;
        if (iVar40 == 7) {
label_18217c5f8:
          (*(__this->klass->vtable)._165_Land.methodPtr)(__this,(__this->klass->vtable)._165_Land.method);
        }
        else if (((__this->fields).HasDirection != false) &&
                ((((__this->fields).State == 1 || ((__this->fields).State == 3)) ||
                 ((__this->fields).State == 2)))) {
          pUVar48 = (*(__this->klass->vtable)._106_GetTargetDirection.methodPtr)
                              ((UnityEngine_Vector3_o *)&local_d8,__this,
                               (__this->klass->vtable)._106_GetTargetDirection.method);
          iVar40 = (__this->fields).State;
          fVar2 = (pUVar48->fields).y;
          fVar51 = (pUVar48->fields).z;
          (__this->fields).LastTargetDirection.fields.x = (pUVar48->fields).x;
          (__this->fields).LastTargetDirection.fields.y = fVar2;
          (__this->fields).LastTargetDirection.fields.z = fVar51;
          if (iVar40 == 1) {
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_18217cab3;
            pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar43 = (pUVar41->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0))
            goto label_18217cab3;
            uVar5 = (pUVar48->fields).x;
            uVar25 = (pUVar48->fields).y;
            fVar51 = (pUVar48->fields).z;
            pUVar48 = UnityEngine_Transform__get_forward
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
            fVar53 = (__this->fields).RunSpeedPerLevel * (__this->fields).Size + (__this->fields).RunSpeedBase
            ;
            fVar2 = (float)uVar5;
            fVar22 = (float)uVar25;
label_18217c04b:
            uVar6 = (pUVar48->fields).x;
            uVar26 = (pUVar48->fields).y;
            local_e8.z = fVar53 * (pUVar48->fields).z + fVar51;
            local_e8.x = (float)uVar6 * fVar53 + fVar2;
            local_e8.y = (float)uVar26 * fVar53 + fVar22;
            UnityEngine_Rigidbody__set_linearVelocity
                      (pUVar49,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
          }
          else if ((__this->fields).State == 2) {
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_18217cab3;
            pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar43 = (pUVar41->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0))
            goto label_18217cab3;
            uVar3 = (pUVar48->fields).x;
            uVar23 = (pUVar48->fields).y;
            fVar51 = (pUVar48->fields).z;
            pUVar48 = UnityEngine_Transform__get_forward
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
            uVar4 = (pUVar48->fields).x;
            uVar24 = (pUVar48->fields).y;
            fVar2 = (__this->fields).RunSpeedPerLevel * (__this->fields).Size + (__this->fields).RunSpeedBase;
            local_e8.z = fVar2 * (pUVar48->fields).z * 1.5 + fVar51;
            local_e8.x = (float)uVar4 * fVar2 * 1.5 + (float)uVar3;
            local_e8.y = (float)uVar24 * fVar2 * 1.5 + (float)uVar23;
            UnityEngine_Rigidbody__set_linearVelocity
                      (pUVar49,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
          }
          else if ((__this->fields).State == 3) {
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_18217cab3;
            pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar43 = (pUVar41->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0))
            goto label_18217cab3;
            fVar2 = (pUVar48->fields).x;
            fVar22 = (pUVar48->fields).y;
            fVar51 = (pUVar48->fields).z;
            pUVar48 = UnityEngine_Transform__get_forward
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
            fVar53 = (__this->fields).WalkSpeedPerLevel * (__this->fields).Size +
                     (__this->fields).WalkSpeedBase;
            goto label_18217c04b;
          }
        }
      }
    }
  }
  else {
label_18217c66a:
    Characters_BaseTitan__SetDefaultVelocityLerp(__this,(MethodInfo *)0x0);
  }
label_18217c6bd:
  if ((__this->fields)._needFreshCore != false) {
    pCVar44 = (__this->fields).BaseTitanCache;
    if ((pCVar44 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar43 = (pCVar44->fields).Core, pUVar43 == (UnityEngine_Transform_o *)0x0)) goto label_18217cab3;
    pUVar48 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
    pCVar44 = (__this->fields).BaseTitanCache;
    if ((pCVar44 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar43 = (pCVar44->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0)) goto label_18217cab3;
    uVar16 = (pUVar48->fields).x;
    uVar36 = (pUVar48->fields).y;
    fVar51 = (pUVar48->fields).z;
    pUVar48 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
    uVar17 = (pUVar48->fields).x;
    uVar37 = (pUVar48->fields).y;
    fVar2 = (pUVar48->fields).z;
    (__this->fields)._needFreshCore = false;
    (__this->fields)._furthestCoreLocalPosition.fields.z = fVar51 - fVar2;
    (__this->fields)._furthestCoreLocalPosition.fields.x = (float)uVar16 - (float)uVar17;
    (__this->fields)._furthestCoreLocalPosition.fields.y = (float)uVar36 - (float)uVar37;
    fVar51 = (__this->fields)._furthestCoreLocalPosition.fields.z;
    (__this->fields)._previousCoreLocalPosition.fields.x = (float)uVar16 - (float)uVar17;
    (__this->fields)._previousCoreLocalPosition.fields.y = (float)uVar36 - (float)uVar37;
    (__this->fields)._previousCoreLocalPosition.fields.z = fVar51;
  }
  pSVar45 = (__this->fields)._rootMotionAnimations;
  if (pSVar45 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_18217cab3;
  bVar47 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar45,
                      (Il2CppObject *)(__this->fields)._currentStateAnimation,
                      (MethodInfo_1455450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
  if (bVar47) {
    pCVar46 = (__this->fields).Animation;
    if (pCVar46 == (Characters_AnimationHandler_o *)0x0) goto label_18217cab3;
    bVar47 = Characters_AnimationHandler__IsPlaying
                       (pCVar46,(__this->fields)._currentStateAnimation,(MethodInfo *)0x0);
    if (bVar47) {
      pCVar46 = (__this->fields).Animation;
      if (pCVar46 == (Characters_AnimationHandler_o *)0x0) goto label_18217cab3;
      fVar51 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar46,(MethodInfo *)0x0);
      pSVar45 = (__this->fields)._rootMotionAnimations;
      if (pSVar45 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_18217cab3;
      fVar2 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar45,
                         (Il2CppObject *)(__this->fields)._currentStateAnimation,
                         (MethodInfo_1488BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      if (fVar51 < fVar2) {
        pCVar44 = (__this->fields).BaseTitanCache;
        if ((pCVar44 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar43 = (pCVar44->fields).Core, pUVar43 == (UnityEngine_Transform_o *)0x0)) goto label_18217cab3;
        pUVar48 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
        pCVar44 = (__this->fields).BaseTitanCache;
        if ((pCVar44 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar43 = (pCVar44->fields).Transform, pUVar43 == (UnityEngine_Transform_o *)0x0))
        goto label_18217cab3;
        uVar18 = (pUVar48->fields).x;
        uVar38 = (pUVar48->fields).y;
        fVar51 = (pUVar48->fields).z;
        pUVar48 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_d8,pUVar43,(MethodInfo *)0x0);
        uVar19 = (pUVar48->fields).x;
        uVar39 = (pUVar48->fields).y;
        fVar51 = fVar51 - (pUVar48->fields).z;
        fVar53 = (float)uVar18 - (float)uVar19;
        fVar54 = (float)uVar38 - (float)uVar39;
        local_d8.y = fVar54;
        local_d8.x = fVar53;
        local_d8.z = fVar51;
        fVar2 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
        fVar22 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields)._furthestCoreLocalPosition,0);
        if (fVar22 <= fVar2) {
          fVar2 = (__this->fields)._previousCoreLocalPosition.fields.y;
          fVar22 = (__this->fields)._previousCoreLocalPosition.fields.x;
          fVar1 = (__this->fields)._previousCoreLocalPosition.fields.z;
          fVar52 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          (__this->fields)._furthestCoreLocalPosition.fields.x = fVar53;
          (__this->fields)._furthestCoreLocalPosition.fields.y = fVar54;
          (__this->fields)._previousCoreLocalPosition.fields.x = fVar53;
          (__this->fields)._previousCoreLocalPosition.fields.y = fVar54;
          (__this->fields)._furthestCoreLocalPosition.fields.z = fVar51;
          (__this->fields)._previousCoreLocalPosition.fields.z = fVar51;
          fVar22 = ((fVar53 - fVar22) * -1.0) / fVar52;
          fVar2 = ((fVar54 - fVar2) * -1.0) / fVar52;
          fVar52 = ((fVar51 - fVar1) * -1.0) / fVar52;
          if ((__this->fields).AI == false) {
            if (Il2CppMethodInitialized_18433dbea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbea = '\x01';
            }
            pUVar42 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar51 = (pUVar42->zeroVector).fields.x;
            fVar53 = (pUVar42->zeroVector).fields.y;
            fVar54 = (pUVar42->zeroVector).fields.z;
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_18217cab3;
            pUVar48 = UnityEngine_Rigidbody__get_linearVelocity
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar49,(MethodInfo *)0x0);
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_18217cab3;
            fVar22 = (fVar22 - fVar51) * 0.0435 + fVar51 + (pUVar48->fields).x;
            fVar2 = (fVar2 - fVar53) * 0.0435 + fVar53 + (pUVar48->fields).y;
            fVar52 = (fVar52 - fVar54) * 0.0435 + fVar54 + (pUVar48->fields).z;
          }
          else {
            pUVar41 = (__this->fields).Cache;
            if ((pUVar41 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar49 = (pUVar41->fields).Rigidbody, pUVar49 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_18217cab3;
          }
          local_e8.y = fVar2;
          local_e8.x = fVar22;
          local_e8.z = fVar52;
          UnityEngine_Rigidbody__set_linearVelocity
                    (pUVar49,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
        }
      }
    }
  }
  if ((__this->fields).State == 0x19) {
label_18217ca62:
    if (0.0 < (__this->fields).ConfusedTime) {
      fVar51 = (__this->fields).ConfusedTime;
      fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields).ConfusedTime = fVar51 - fVar2;
    }
    else if (0.0 <= (__this->fields).PreviousAttackSpeedMultiplier) {
      (__this->fields).AttackSpeedMultiplier = (__this->fields).PreviousAttackSpeedMultiplier;
    }
    return;
  }
  pUVar41 = (__this->fields).Cache;
  if (pUVar41 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar49 = (pUVar41->fields).Rigidbody;
    pUVar48 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                        ((UnityEngine_Vector3_o *)&local_e8,__this,
                         (__this->klass->vtable)._58_get_Gravity.method);
    if (pUVar49 != (UnityEngine_Rigidbody_o *)0x0) {
      local_d8.x = (pUVar48->fields).x;
      local_d8.y = (pUVar48->fields).y;
      local_d8.z = (pUVar48->fields).z;
      UnityEngine_Rigidbody__AddForce(pUVar49,(UnityEngine_Vector3_o *)&local_d8,5,(MethodInfo *)0x0);
      goto label_18217ca62;
    }
  }
label_18217cab3:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$FixedUpdateAttack
// il2cpp: void Characters_BaseTitan__FixedUpdateAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__FixedUpdateAttack(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$SetDefaultVelocity
// il2cpp: void Characters_BaseTitan__SetDefaultVelocity (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217ffb0

void Characters_BaseTitan__SetDefaultVelocity(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar8;
  UnityEngine_Vector3_o *pUVar9;
  float fVar10;
  UnityEngine_Vector3_Fields local_48 [5];
  
  pUVar7 = (__this->fields).Cache;
  if (pUVar7 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar7->fields).Rigidbody;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_01 = (pUVar7->fields).Rigidbody, __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar3 = (pUVar8->upVector).fields.x;
      uVar5 = (pUVar8->upVector).fields.y;
      fVar1 = (pUVar8->upVector).fields.z;
      pUVar9 = UnityEngine_Rigidbody__get_linearVelocity
                         ((UnityEngine_Vector3_o *)local_48,__this_01,(MethodInfo *)0x0);
      fVar2 = (pUVar9->fields).y;
      if (Il2CppMethodInitialized_18434494b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18434494b = '\x01';
      }
      fVar10 = (__this->fields)._currentGroundDistance * 100.0;
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      if (100.0 <= fVar10) {
        fVar10 = 100.0;
      }
      uVar4 = (pUVar8->downVector).fields.x;
      uVar6 = (pUVar8->downVector).fields.y;
      local_48[0].x = (float)uVar4 * fVar10 + (float)uVar3 * fVar2;
      local_48[0].y = (float)uVar6 * fVar10 + (float)uVar5 * fVar2;
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        local_48[0].z = fVar10 * (pUVar8->downVector).fields.z + fVar1 * fVar2;
        UnityEngine_Rigidbody__set_linearVelocity
                  (__this_00,(UnityEngine_Vector3_o *)local_48,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$LateUpdate
// il2cpp: void Characters_BaseTitan__LateUpdate (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217ec50

void Characters_BaseTitan__LateUpdate(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  UnityEngine_Quaternion_o *pUVar7;
  float fVar8;
  UnityEngine_Quaternion_Fields local_58;
  UnityEngine_Quaternion_Fields local_48;
  UnityEngine_Quaternion_o local_38 [3];
  
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar6 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (((bVar6) &&
      (((((__this->fields).State == 1 || ((__this->fields).State == 3)) || ((__this->fields).State == 2)) ||
       (((__this->fields).State == 6 || ((__this->fields).State == 7)))))) &&
     ((__this->fields).HasDirection != false)) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar1->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_Transform__get_rotation
                       ((UnityEngine_Quaternion_o *)&local_48,__this_00,(MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar7->fields).x;
    uVar2._4_4_ = (pUVar7->fields).y;
    uVar3._0_4_ = (pUVar7->fields).z;
    uVar3._4_4_ = (pUVar7->fields).w;
    pUVar7 = (*(__this->klass->vtable)._105_GetTargetRotation.methodPtr)
                       ((UnityEngine_Quaternion_o *)&local_48,__this,
                        (__this->klass->vtable)._105_GetTargetRotation.method);
    uVar4._0_4_ = (pUVar7->fields).x;
    uVar4._4_4_ = (pUVar7->fields).y;
    uVar5._0_4_ = (pUVar7->fields).z;
    uVar5._4_4_ = (pUVar7->fields).w;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    local_58._0_8_ = uVar4;
    local_58._8_8_ = uVar5;
    local_48._0_8_ = uVar2;
    local_48._8_8_ = uVar3;
    pUVar7 = UnityEngine_Quaternion__Internal_Lerp
                       (local_38,(UnityEngine_Quaternion_o *)&local_48,(UnityEngine_Quaternion_o *)&local_58,
                        fVar8 * (__this->fields).RotateSpeed,(MethodInfo *)0x0);
    local_48.x = (pUVar7->fields).x;
    local_48.y = (pUVar7->fields).y;
    local_48.z = (pUVar7->fields).z;
    local_48.w = (pUVar7->fields).w;
    UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseTitan$$IsPlayingClip
// il2cpp: bool Characters_BaseTitan__IsPlayingClip (Characters_BaseTitan_o* __this, System_String_o* clip, const MethodInfo* method);
// 0x18217e650

bool Characters_BaseTitan__IsPlayingClip
               (Characters_BaseTitan_o *__this,System_String_o *clip,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346db9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346db9 = '\x01';
  }
  bVar1 = System_String__op_Inequality(clip,"",(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    bVar1 = Characters_AnimationHandler__IsPlaying(__this_00,clip,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$CheckGround
// il2cpp: void Characters_BaseTitan__CheckGround (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217acd0

void Characters_BaseTitan__CheckGround(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  byte bVar7;
  float fVar8;
  Characters_BaseTitanComponentCache_o *pCVar9;
  UnityEngine_Component_o *__this_00;
  UnityEngine_CapsuleCollider_o *__this_01;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Vector3_StaticFields *pUVar11;
  bool bVar12;
  int32_t layerMask;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Vector3_o *pUVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int32_t local_res8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Touch_Fields local_88;
  
  if (Il2CppMethodInitialized_184346dba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346dba = '\x01';
  }
  local_res8 = 0;
  pCVar9 = (__this->fields).BaseTitanCache;
  local_88.m_RawPosition.fields.y = 0.0;
  local_88.m_PositionDelta.fields.x = 0.0;
  local_88.m_PositionDelta.fields.y = 0.0;
  local_88.m_FingerId = 0;
  local_88.m_Position.fields.x = 0.0;
  local_88.m_Position.fields.y = 0.0;
  local_88.m_RawPosition.fields.x = 0.0;
  local_88.m_TimeDelta = 0.0;
  local_88.m_TapCount = 0;
  local_88.m_Phase = 0;
  local_88.m_Type = 0;
  if ((pCVar9 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (__this_00 = (UnityEngine_Component_o *)(pCVar9->fields).Movebox,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    pUVar13 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
      pUVar14 = UnityEngine_Transform__get_lossyScale
                          ((UnityEngine_Vector3_o *)&local_98,pUVar13,(MethodInfo *)0x0);
      pCVar9 = (__this->fields).BaseTitanCache;
      if ((pCVar9 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (__this_01 = (UnityEngine_CapsuleCollider_o *)(pCVar9->fields).Movebox,
         __this_01 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        bVar7 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar7) ||
           ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar7 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UnityEngine_CapsuleCollider);
        }
        fVar17 = (pUVar14->fields).x;
        fVar15 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
        pUVar10 = (__this->fields).Cache;
        (__this->fields).JustGrounded = false;
        if ((pUVar10 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar13 = (pUVar10->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          fVar15 = fVar15 * fVar17;
          pUVar14 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_98,pUVar13,(MethodInfo *)0x0);
          uVar2 = (pUVar14->fields).x;
          uVar5 = (pUVar14->fields).y;
          fVar17 = (pUVar14->fields).z;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          fVar18 = fVar15 + 1.0;
          pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar1 = (pUVar11->upVector).fields.z;
          uVar3 = (pUVar11->upVector).fields.x;
          uVar6 = (pUVar11->upVector).fields.y;
          if (Il2CppMethodInitialized_18434494b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18434494b = '\x01';
          }
          pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar4._0_4_ = (pUVar11->downVector).fields.x;
          uVar4._4_4_ = (pUVar11->downVector).fields.y;
          fVar8 = (pUVar11->downVector).fields.z;
          fVar16 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                             (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
          local_res8 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                                 (__this,(__this->klass->vtable)._67_get_GroundMask.method);
          layerMask = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          local_98.y = (float)uVar6 * fVar18 + (float)uVar5;
          local_98.x = (float)uVar3 * fVar18 + (float)uVar2;
          local_a8._0_8_ = uVar4;
          local_a8.z = fVar8;
          local_98.z = fVar18 * fVar1 + fVar17;
          bVar12 = UnityEngine_Physics__SphereCast_2fe64a0
                             ((UnityEngine_Vector3_o *)&local_98,fVar15,(UnityEngine_Vector3_o *)&local_a8,
                              (UnityEngine_RaycastHit_o *)&local_88,fVar16 + 1.0,layerMask,(MethodInfo *)0x0);
          if (bVar12) {
            if ((__this->fields).Grounded == false) {
              (__this->fields).Grounded = true;
              (__this->fields).JustGrounded = true;
            }
            fVar15 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)&local_88,(MethodInfo *)0x0);
            fVar17 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                               (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
            fVar15 = fVar15 - 1.0;
            if (fVar15 < 0.0) {
              fVar17 = 0.0;
            }
            else if (fVar15 <= fVar17) {
              fVar17 = fVar15;
            }
          }
          else {
            (__this->fields).Grounded = false;
            fVar17 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                               (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
          }
          (__this->fields)._currentGroundDistance = fVar17;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$UpdateAttack
// il2cpp: void Characters_BaseTitan__UpdateAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__UpdateAttack(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$UpdateEat
// il2cpp: void Characters_BaseTitan__UpdateEat (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__UpdateEat(Characters_BaseTitan_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$DeactivateAllHitboxes
// il2cpp: void Characters_BaseTitan__DeactivateAllHitboxes (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217b7b0
// eh: try 0x18217b862..0x18217b8c2 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217b89b: mov rdx, qword ptr [rip + 0x1efa1b6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose
// asm:   0x18217b8a2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18217b8a7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18217b8ac: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18217b8b1: test rcx, rcx
// asm:   0x18217b8b4: jne 0x18217b8c2
// asm:   0x18217b8c2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Characters_BaseTitan__DeactivateAllHitboxes(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  System_Collections_Generic_List_BaseHitbox__o *__this_00;
  bool bVar2;
  undefined1 local_40 [16];
  Characters_BaseHitbox_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346dbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseHitbox_GetEnumerator);
    Il2CppMethodInitialized_184346dbb = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields).BaseTitanCache;
  if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Hitboxes, __this_00 != (System_Collections_Generic_List_BaseHitbox__o *)0x0
     )) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseHitbox_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_MoveNext);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose);
        return;
      }
      if ((Characters_BaseHitbox_o *)local_28.fields._current == (Characters_BaseHitbox_o *)0x0) break;
      Characters_BaseHitbox__Deactivate((Characters_BaseHitbox_o *)local_28.fields._current,(MethodInfo *)0x0)
      ;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$SetSizeRPC
// il2cpp: void Characters_BaseTitan__SetSizeRPC (Characters_BaseTitan_o* __this, float size, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182180370

void Characters_BaseTitan__SetSizeRPC
               (Characters_BaseTitan_o *__this,float size,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_BaseTitan_c *pCVar4;
  Cameras_InGameCamera_o *__this_00;
  Characters_BaseCharacter_o *x;
  bool bVar5;
  UnityEngine_Transform_o *__this_01;
  System_Type_o *value;
  float fVar6;
  float local_38;
  float local_34;
  float local_30;
  
  if (Il2CppMethodInitialized_184346dbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346dbc = '\x01';
  }
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar3->fields)._Owner_k__BackingField) {
      return;
    }
    fVar6 = 0.1;
    if ((0.1 <= size) && (fVar6 = 50.0, size <= 50.0)) {
      fVar6 = size;
    }
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = (System_Type_o *)&local_38;
      local_38 = fVar6;
      local_34 = fVar6;
      local_30 = fVar6;
      UnityEngine_Transform__set_localScale(__this_01,(UnityEngine_Vector3_o *)value,(MethodInfo *)0x0);
      pCVar4 = __this->klass;
      (__this->fields).Size = fVar6;
      (*(pCVar4->vtable)._191_SetSizeParticles.methodPtr)
                (__this,fVar6,(pCVar4->vtable)._191_SetSizeParticles.method);
      (*(__this->klass->vtable)._192_SetSizeAnimations.methodPtr)
                (__this,value,(__this->klass->vtable)._192_SetSizeAnimations.method);
      (*(__this->klass->vtable)._190_ScaleSounds.methodPtr)
                (__this,fVar6,(__this->klass->vtable)._190_ScaleSounds.method);
      __this_00 = (Cameras_InGameCamera_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
        bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        x = (__this_00->fields)._follow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        if (!bVar5) {
          return;
        }
        Cameras_InGameCamera__SetFollow(__this_00,(Characters_BaseCharacter_o *)__this,true,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$ScaleSounds
// il2cpp: void Characters_BaseTitan__ScaleSounds (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x18217f8f0

void Characters_BaseTitan__ScaleSounds(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_AudioSource_o *pUVar4;
  float fVar5;
  float fVar6;
  float value;
  
  if (Il2CppMethodInitialized_184346dbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346dbd = '\x01';
  }
  if (__this != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
      size = size * 3.5;
    }
  }
  fVar5 = size * 0.125;
  if (fVar5 < 0.1) {
    value = 0.1;
  }
  else {
    value = 0.5;
    if (fVar5 <= 0.5) {
      value = fVar5;
    }
  }
  fVar6 = size * 0.3;
  fVar5 = 0.1;
  if ((0.1 <= fVar6) && (fVar5 = 1.0, fVar6 <= 1.0)) {
    fVar5 = fVar6;
  }
  pUVar2 = (__this->fields).Cache;
  if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar2->fields).AudioSources;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,(Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathFall,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).Cache;
        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar2->fields).AudioSources,
           pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar3,(Il2CppObject *)
                                     TypeInfo_Characters_TitanSounds->static_fields->DeathNoFall,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
          if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
            UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).Cache;
            if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
               (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (pUVar2->fields).AudioSources,
               pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
              pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar3,(Il2CppObject *)
                                         TypeInfo_Characters_TitanSounds->static_fields->Decapitate,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                 );
              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                pUVar2 = (__this->fields).Cache;
                if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (pUVar2->fields).AudioSources,
                   pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                  pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar3,(Il2CppObject *)
                                             TypeInfo_Characters_TitanSounds->static_fields->Footstep1,
                                      (MethodInfo_147A5B0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                     );
                  if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                    UnityEngine_AudioSource__set_volume(pUVar4,value,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields).Cache;
                    if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (pUVar2->fields).AudioSources,
                       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                         (pSVar3,(Il2CppObject *)
                                                 TypeInfo_Characters_TitanSounds->static_fields->Footstep2,
                                          (MethodInfo_147A5B0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                         );
                      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                        UnityEngine_AudioSource__set_volume(pUVar4,value,(MethodInfo *)0x0);
                        pUVar2 = (__this->fields).Cache;
                        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     (pUVar2->fields).AudioSources,
                           pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                          pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                             (pSVar3,(Il2CppObject *)
                                                     TypeInfo_Characters_TitanSounds->static_fields->Footstep3
                                              ,(MethodInfo_147A5B0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                             );
                          if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                            UnityEngine_AudioSource__set_volume(pUVar4,value,(MethodInfo *)0x0);
                            pUVar2 = (__this->fields).Cache;
                            if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                               (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         (pUVar2->fields).AudioSources,
                               pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                              pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                 (pSVar3,(Il2CppObject *)
                                                         TypeInfo_Characters_TitanSounds->static_fields->
                                                         RockPickup,
                                                  (MethodInfo_147A5B0 *)
                                                  MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                                 );
                              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                                UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                                pUVar2 = (__this->fields).Cache;
                                if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                                   (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                             (pUVar2->fields).AudioSources,
                                   pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0))
                                {
                                  pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                     (pSVar3,(Il2CppObject *)
                                                             TypeInfo_Characters_TitanSounds->static_fields->
                                                             RockThrow1,
                                                      (MethodInfo_147A5B0 *)
                                                      MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                                     );
                                  if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                                    UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                                    pUVar2 = (__this->fields).Cache;
                                    if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                                       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                 (pUVar2->fields).AudioSources,
                                       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)
                                                 0x0)) {
                                      pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                         (pSVar3,(Il2CppObject *)
                                                                 TypeInfo_Characters_TitanSounds->
                                                                 static_fields->RockThrow2,
                                                          (MethodInfo_147A5B0 *)
                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                                       );
                                      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                                        UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
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
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$SetSizeParticles
// il2cpp: void Characters_BaseTitan__SetSizeParticles (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x182180290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821802ed: nop dword ptr [rax]

void Characters_BaseTitan__SetSizeParticles(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  System_Object_array *pSVar1;
  UnityEngine_ParticleSystem_NoiseModule_o main;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184346dbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346dbe = '\x01';
  }
  pSVar1 = UnityEngine_Component__GetComponentsInChildren_object__665370
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_665370 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
  if (pSVar1 != (System_Object_array *)0x0) {
    uVar2 = 0;
    while( true ) {
      if ((int)pSVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pSVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_ParticleSystem_o *)pSVar1->m_Items[(int)uVar2] == (UnityEngine_ParticleSystem_o *)0x0)
      break;
      main = UnityEngine_ParticleSystem__get_noise
                       ((UnityEngine_ParticleSystem_o *)pSVar1->m_Items[(int)uVar2],(MethodInfo *)0x0);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      Utility_Util__ScaleParticleStartSize
                ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,size,(MethodInfo *)0x0)
      ;
      Utility_Util__ScaleParticleStartSpeed
                ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,size,(MethodInfo *)0x0)
      ;
      uVar2 = uVar2 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$SetSizeAnimations
// il2cpp: void Characters_BaseTitan__SetSizeAnimations (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x180547020

void
Characters_BaseTitan__SetSizeAnimations(Characters_BaseTitan_o* __this, float size, MethodInfo* method)

{
  return;
}


// Characters.BaseTitan$$SetSize
// il2cpp: void Characters_BaseTitan__SetSize (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x182180540

void Characters_BaseTitan__SetSize(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184346dbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSizeRPC");
    Il2CppMethodInitialized_184346dbf = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res8[0] = size;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
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
        Photon_Pun_PhotonView__RPC(__this_00,"SetSizeRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetAnimationTime
// il2cpp: float Characters_BaseTitan__GetAnimationTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217cba0

float Characters_BaseTitan__GetAnimationTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    fVar1 = Characters_AnimationHandler__GetCurrentNormalizedTime(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetHitboxTime
// il2cpp: float Characters_BaseTitan__GetHitboxTime (Characters_BaseTitan_o* __this, float normalizedLength, const MethodInfo* method);
// 0x18217d020

float Characters_BaseTitan__GetHitboxTime
                (Characters_BaseTitan_o *__this,float normalizedLength,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    fVar1 = Characters_AnimationHandler__GetLength
                      (__this_00,(__this->fields)._currentStateAnimation,(MethodInfo *)0x0);
    return (fVar1 * normalizedLength) / (__this->fields)._currentAttackSpeed;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$DamagedGrunt
// il2cpp: void Characters_BaseTitan__DamagedGrunt (Characters_BaseTitan_o* __this, float chance, const MethodInfo* method);
// 0x18217b6f0

void Characters_BaseTitan__DamagedGrunt(Characters_BaseTitan_o *__this,float chance,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  System_String_o *sound;
  
  if (Il2CppMethodInitialized_184346dc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346dc0 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).TitanVocalEffect, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value != false) {
      bVar3 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        sound = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GrabGrunt
// il2cpp: void Characters_BaseTitan__GrabGrunt (Characters_BaseTitan_o* __this, float chance, const MethodInfo* method);
// 0x18217d540

void Characters_BaseTitan__GrabGrunt(Characters_BaseTitan_o *__this,float chance,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  System_String_o *sound;
  
  if (Il2CppMethodInitialized_184346dc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346dc1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).TitanVocalEffect, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value != false) {
      bVar3 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        sound = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Start
// il2cpp: void Characters_BaseTitan__Start (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x182180d50

void Characters_BaseTitan__Start(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  bool bVar5;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o *routine;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346dc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    Il2CppMethodInitialized_184346dc2 = '\x01';
  }
  Characters_BaseCharacter__Start((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar5 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar5) goto label_182180e58;
  bVar5 = Characters_BaseCharacter__IsMainCharacter((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if (bVar5) {
    bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BaseShifter)) goto label_182180dd3;
  }
  else {
label_182180dd3:
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
    (routine->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
    (routine->fields).time = 2.0;
    (routine->fields).maxSpeed = 20.0;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._162_Idle.methodPtr)(__this,(__this->klass->vtable)._162_Idle.method);
label_182180e58:
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar6 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).y;
    fVar2 = (pUVar6->fields).z;
    (__this->fields)._startPosition.fields.x = (pUVar6->fields).x;
    (__this->fields)._startPosition.fields.y = fVar4;
    (__this->fields)._startPosition.fields.z = fVar2;
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$HandleSpawnCollisionCoroutine
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseTitan__HandleSpawnCollisionCoroutine (Characters_BaseTitan_o* __this, float time, float maxSpeed, const MethodInfo* method);
// 0x18217d700

System_Collections_IEnumerator_o *
Characters_BaseTitan__HandleSpawnCollisionCoroutine
          (Characters_BaseTitan_o *__this,float time,float maxSpeed,MethodInfo *method)

{
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__220_o *__this_00;
  
  if (Il2CppMethodInitialized_184346dc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__220);
    Il2CppMethodInitialized_184346dc3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__220);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).time = time;
  (__this_00->fields).maxSpeed = maxSpeed;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseTitan$$ToggleSitPushbox
// il2cpp: void Characters_BaseTitan__ToggleSitPushbox (Characters_BaseTitan_o* __this, bool sit, const MethodInfo* method);
// 0x1821812e0

void Characters_BaseTitan__ToggleSitPushbox(Characters_BaseTitan_o *__this,bool sit,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346dc4 = '\x01';
  }
  pCVar1 = (__this->fields).BaseTitanCache;
  if (pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) {
    x = (UnityEngine_Object_o *)(pCVar1->fields).SitPushbox;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pCVar1 = (__this->fields).BaseTitanCache;
    if (pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) {
      pUVar2 = (pCVar1->fields).SitPushbox;
      if (sit) {
        if (pUVar2 != (UnityEngine_Collider_o *)0x0) {
          bVar3 = UnityEngine_Collider__get_enabled(pUVar2,(MethodInfo *)0x0);
          if (!bVar3) {
            pCVar1 = (__this->fields).BaseTitanCache;
            if ((pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) ||
               (pUVar2 = (pCVar1->fields).SitPushbox, pUVar2 == (UnityEngine_Collider_o *)0x0))
            goto label_1821813d8;
            UnityEngine_Collider__set_enabled(pUVar2,true,(MethodInfo *)0x0);
          }
          return;
        }
      }
      else if (pUVar2 != (UnityEngine_Collider_o *)0x0) {
        bVar3 = UnityEngine_Collider__get_enabled(pUVar2,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pCVar1 = (__this->fields).BaseTitanCache;
        if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
           (pUVar2 = (pCVar1->fields).SitPushbox, pUVar2 != (UnityEngine_Collider_o *)0x0)) {
          UnityEngine_Collider__set_enabled(pUVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1821813d8:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$UpdateAnimationColliders
// il2cpp: void Characters_BaseTitan__UpdateAnimationColliders (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1821816f0

void Characters_BaseTitan__UpdateAnimationColliders(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._199_IsPlayingSitAnimation.methodPtr)
                    (__this,(__this->klass->vtable)._199_IsPlayingSitAnimation.method);
  (*(__this->klass->vtable)._197_ToggleSitPushbox.methodPtr)
            (__this,bVar1,(__this->klass->vtable)._197_ToggleSitPushbox.method);
  return;
}


// Characters.BaseTitan$$IsPlayingSitAnimation
// il2cpp: bool Characters_BaseTitan__IsPlayingSitAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217e6d0

bool Characters_BaseTitan__IsPlayingSitAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar3 = (*(pCVar1->klass->vtable)._15_get_SitDown.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._15_get_SitDown.method);
    bVar2 = Characters_BaseTitan__IsPlayingClip(__this,pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar1->klass->vtable)._17_get_SitFall.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._17_get_SitFall.method);
      bVar2 = Characters_BaseTitan__IsPlayingClip(__this,pSVar3,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
      pCVar1 = (__this->fields).BaseTitanAnimations;
      if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
        pSVar3 = (*(pCVar1->klass->vtable)._14_get_SitIdle.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._14_get_SitIdle.method);
        bVar2 = Characters_BaseTitan__IsPlayingClip(__this,pSVar3,(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
          pSVar3 = (*(pCVar1->klass->vtable)._16_get_SitUp.methodPtr)
                             (pCVar1,(pCVar1->klass->vtable)._16_get_SitUp.method);
          bVar2 = Characters_BaseTitan__IsPlayingClip(__this,pSVar3,(MethodInfo *)0x0);
          if (bVar2) {
            return true;
          }
          pCVar1 = (__this->fields).BaseTitanAnimations;
          if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
            pSVar3 = (*(pCVar1->klass->vtable)._13_get_DieSit.methodPtr)
                               (pCVar1,(pCVar1->klass->vtable)._13_get_DieSit.method);
            bVar2 = Characters_BaseTitan__IsPlayingClip(__this,pSVar3,(MethodInfo *)0x0);
            return bVar2;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetFootstepAudio
// il2cpp: System_String_o* Characters_BaseTitan__GetFootstepAudio (Characters_BaseTitan_o* __this, int32_t phase, const MethodInfo* method);
// 0x18217ce00

System_String_o *
Characters_BaseTitan__GetFootstepAudio(Characters_BaseTitan_o *__this,int32_t phase,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346dc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346dc5 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  pSVar1 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
  return pSVar1;
}


// Characters.BaseTitan$$GetFootstepPhase
// il2cpp: int32_t Characters_BaseTitan__GetFootstepPhase (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217ce40

int32_t Characters_BaseTitan__GetFootstepPhase(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346dc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346dc6 = '\x01';
  }
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217d00e;
  pSVar4 = (*(pCVar1->klass->vtable)._5_get_Run.methodPtr)(pCVar1,(pCVar1->klass->vtable)._5_get_Run.method);
  bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
  if (bVar3) {
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_18217d00e;
    pCVar2 = (__this->fields).Animation;
    pSVar4 = (*(pCVar1->klass->vtable)._5_get_Run.methodPtr)(pCVar1,(pCVar1->klass->vtable)._5_get_Run.method)
    ;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_18217d00e;
    pMVar5 = (MethodInfo *)0x0;
    bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
    if (bVar3) {
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar6 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
        fVar6 = il2cpp_runtime_helper_1804f41a0(fVar6,1.0,pMVar5);
        if (0.0 <= fVar6) {
          return (uint)(0.5 <= fVar6);
        }
        return 1;
      }
      goto label_18217d00e;
    }
  }
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar4 = (*(pCVar1->klass->vtable)._7_get_Walk.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._7_get_Walk.method);
    bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
    if (!bVar3) {
label_18217cffd:
      return (__this->fields)._stepPhase;
    }
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pCVar2 = (__this->fields).Animation;
      pSVar4 = (*(pCVar1->klass->vtable)._7_get_Walk.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._7_get_Walk.method);
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        pMVar5 = (MethodInfo *)0x0;
        bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
        if (!bVar3) goto label_18217cffd;
        pCVar2 = (__this->fields).Animation;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          fVar6 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
          fVar6 = il2cpp_runtime_helper_1804f41a0(fVar6,1.0,pMVar5);
          if (fVar6 < 0.1) {
            return 0;
          }
          return (int32_t)(fVar6 < 0.6);
        }
      }
    }
  }
label_18217d00e:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$SpawnShatter
// il2cpp: void Characters_BaseTitan__SpawnShatter (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x182180650

void Characters_BaseTitan__SpawnShatter
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar7;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  System_String_o *name;
  UnityEngine_Quaternion_StaticFields *pUVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int32_t layerMask;
  UnityEngine_Vector3_o *pUVar18;
  float fVar19;
  int32_t local_res8;
  UnityEngine_Quaternion_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_RaycastHit_o local_88 [2];
  
  if (Il2CppMethodInitialized_184346dc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346dc7 = '\x01';
  }
  uVar3 = (position->fields).x;
  uVar8 = (position->fields).y;
  local_88[0].fields.m_Normal.fields.y = 0.0;
  local_88[0].fields.m_Normal.fields.z = 0.0;
  local_88[0].fields.m_FaceID = 0;
  local_res8 = 0;
  local_88[0].fields.m_Distance = 0.0;
  local_88[0].fields.m_UV.fields.x = 0.0;
  local_88[0].fields.m_UV.fields.y = 0.0;
  local_88[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_88[0].fields.m_Point.fields.x = 0.0;
  local_88[0].fields.m_Point.fields.y = 0.0;
  local_88[0].fields.m_Point.fields.z = 0.0;
  local_88[0].fields.m_Normal.fields.x = 0.0;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  fVar1 = (position->fields).z;
  pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar4 = (pUVar13->upVector).fields.x;
  uVar9 = (pUVar13->upVector).fields.y;
  fVar2 = (pUVar13->upVector).fields.z;
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar7._0_4_ = (pUVar13->downVector).fields.x;
  uVar7._4_4_ = (pUVar13->downVector).fields.y;
  fVar12 = (pUVar13->downVector).fields.z;
  local_res8 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                         (__this,(__this->klass->vtable)._67_get_GroundMask.method);
  layerMask = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_a8.z = fVar12;
  local_98.y = (float)uVar9 + (float)uVar8;
  local_98.x = (float)uVar4 + (float)uVar3;
  local_a8._0_8_ = uVar7;
  local_98.z = fVar1 + fVar2;
  bVar17 = UnityEngine_Physics__Raycast_2fe5220
                     ((UnityEngine_Vector3_o *)&local_98,(UnityEngine_Vector3_o *)&local_a8,local_88,2.0,
                      layerMask,(MethodInfo *)0x0);
  if (bVar17) {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    name = TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter;
    pUVar18 = UnityEngine_RaycastHit__get_point((UnityEngine_Vector3_o *)&local_98,local_88,(MethodInfo *)0x0)
    ;
    uVar5 = (pUVar18->fields).x;
    uVar10 = (pUVar18->fields).y;
    fVar1 = (pUVar18->fields).z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar2 = (pUVar13->upVector).fields.z;
    uVar6 = (pUVar13->upVector).fields.x;
    uVar11 = (pUVar13->upVector).fields.y;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    fVar12 = (__this->fields).Size;
    pUVar14 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar15._0_4_ = (pUVar14->identityQuaternion).fields.x;
    uVar15._4_4_ = (pUVar14->identityQuaternion).fields.y;
    uVar16._0_4_ = (pUVar14->identityQuaternion).fields.z;
    uVar16._4_4_ = (pUVar14->identityQuaternion).fields.w;
    fVar19 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                       (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    local_98.y = (float)uVar11 * 0.1 + (float)uVar10;
    local_98.x = (float)uVar6 * 0.1 + (float)uVar5;
    local_a8._0_8_ = uVar15;
    local_a8._8_8_ = uVar16;
    local_98.z = fVar2 * 0.1 + fVar1;
    Effects_EffectSpawner__Spawn
              (name,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)&local_a8,fVar19 * fVar12,
               true,(System_Object_array *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseTitan$$CheckNapeAngle
// il2cpp: bool Characters_BaseTitan__CheckNapeAngle (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x18217b040

bool Characters_BaseTitan__CheckNapeAngle
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o *hitPosition,float maxAngle,
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
  float fVar12;
  ulonglong local_78;
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
      fVar11 = (hitPosition->fields).z - (pUVar8->fields).z;
      local_78 = CONCAT44((float)uVar3 - (float)uVar4,(float)uVar1 - (float)uVar2);
      local_70 = fVar11;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar9 = (float)il2cpp_runtime_helper_180546a40(&local_78,0);
      if (fVar9 <= 1e-05) {
        pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar10 = (pUVar6->zeroVector).fields.x;
        fVar12 = (pUVar6->zeroVector).fields.y;
        fVar11 = (pUVar6->zeroVector).fields.z;
      }
      else {
        fVar10 = ((float)uVar1 - (float)uVar2) / fVar9;
        fVar12 = ((float)uVar3 - (float)uVar4) / fVar9;
        fVar11 = fVar11 / fVar9;
      }
      pUVar8 = UnityEngine_Transform__get_forward(local_58,pUVar7,(MethodInfo *)0x0);
      local_68.y = fVar12;
      local_68.x = fVar10;
      local_70 = -(pUVar8->fields).z;
      local_78._0_4_ = (pUVar8->fields).x;
      local_78._4_4_ = (pUVar8->fields).y;
      local_78 = local_78 ^ 0x8000000080000000;
      local_68.z = fVar11;
      fVar11 = (float)il2cpp_runtime_helper_181d9e200(&local_78,&local_68,0);
      return fVar11 < maxAngle;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetCenterPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseTitan__GetCenterPosition (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217ccb0

UnityEngine_Vector3_o *
Characters_BaseTitan__GetCenterPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_o local_18;
  
  pCVar2 = (__this->fields).BaseTitanCache;
  if ((pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (__this_00 = (pCVar2->fields).Hip, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar4 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    fVar3 = (pUVar4->fields).y;
    fVar1 = (pUVar4->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar4->fields).x;
    (__return_storage_ptr__->fields).y = fVar3;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetColliderToggleRadius
// il2cpp: float Characters_BaseTitan__GetColliderToggleRadius (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x18217cd00

float Characters_BaseTitan__GetColliderToggleRadius(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).Size;
  fVar2 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                    (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
  return fVar2 * fVar1 * 20.0;
}


// Characters.BaseTitan$$.ctor
// il2cpp: void Characters_BaseTitan___ctor (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x1821827f0

void Characters_BaseTitan___ctor(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Int32_array *layers;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184346dc8 = '\x01';
  }
  (__this->fields).Size = 1.0;
  (__this->fields).ClimbCooldown = 0.5;
  (__this->fields).StunTime = 0.5;
  (__this->fields).ActionPause = 0.2;
  (__this->fields).AttackPause = 0.2;
  (__this->fields).TurnPause = 0.2;
  (__this->fields).MaxSprintStamina = 5.0;
  (__this->fields).SprintStaminaRecover = 0.7;
  (__this->fields).SprintStaminaConsumption = 0.85;
  (__this->fields).CurrentSprintStamina = 5.0;
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((((int)layers->max_length != 0) &&
         (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox,
         1 < (uint)layers->max_length)) &&
        (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
        2 < (uint)layers->max_length)) &&
       ((layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans,
        3 < (uint)layers->max_length &&
        (layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
        4 < (uint)layers->max_length)))) {
      layers->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields).TitanGroundMaskLayers.fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
      (__this->fields).AttackSpeedMultiplier = 1.0;
      (__this->fields).PreviousAttackSpeedMultiplier = -1.0;
      pSVar2 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
      System_Collections_Generic_Dictionary_object__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
      (__this->fields).AttackSpeeds = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSpeeds,pSVar2);
      (__this->fields).SizeScaledTurnSpeed = true;
      (__this->fields)._crippleEndTime = -1.0;
      pSVar2 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
      System_Collections_Generic_Dictionary_object__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
      (__this->fields)._rootMotionAnimations = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rootMotionAnimations,pSVar2);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
      (__this->fields).AttackAnimations = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackAnimations,__this_00);
      (__this->fields).EnableAI = true;
      Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


