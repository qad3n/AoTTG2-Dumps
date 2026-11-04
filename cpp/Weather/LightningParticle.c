// Type: Weather.LightningParticle
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/LightningParticle.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/LightningParticle.cs
// --------------------------------

// Weather.LightningParticle.<>c$$.cctor
// il2cpp: void Weather_LightningParticle___c___cctor (const MethodInfo* method);
// 0x181db13b0

void Weather_LightningParticle___c___cctor(MethodInfo *method)

{
  Weather_LightningParticle___c_o *__this;
  
  if (Il2CppMethodInitialized_18434491e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_c);
    Il2CppMethodInitialized_18434491e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_LightningParticle_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Weather_LightningParticle_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_LightningParticle_c->static_fields->__9,__this);
  return;
}


// Weather.LightningParticle.<>c$$.ctor
// il2cpp: void Weather_LightningParticle___c___ctor (Weather_LightningParticle___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Weather_LightningParticle___c___ctor(Weather_LightningParticle___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle.<>c$$<Awake>b__14_0
// il2cpp: System_String_o* Weather_LightningParticle___c___Awake_b__14_0 (Weather_LightningParticle___c_o* __this, UnityEngine_AudioSource_o* x, const MethodInfo* method);
// 0x181db0f00

System_String_o *
Weather_LightningParticle___c___Awake_b__14_0
          (Weather_LightningParticle___c_o *__this,UnityEngine_AudioSource_o *x,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if (x != (UnityEngine_AudioSource_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$.ctor
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20___ctor (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Weather_LightningParticle__StrikeCoroutine_d__20___ctor(Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.IDisposable.Dispose
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20__System_IDisposable_Dispose (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_LightningParticle__StrikeCoroutine_d__20__System_IDisposable_Dispose(Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, MethodInfo* method)

{
  return;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$MoveNext
// il2cpp: bool Weather_LightningParticle__StrikeCoroutine_d__20__MoveNext (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x181db0ab0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db0c48: xor edx, edx
// asm:   0x181db0c4a: mov rcx, rbx
// asm:   0x181db0c4d: call 0x181da2d90  ; Weather_LightningParticle__Disable()
// asm:   0x181db0c52: xor al, al
// asm:   0x181db0c54: jmp 0x181db0c21

bool Weather_LightningParticle__StrikeCoroutine_d__20__MoveNext
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_LightningParticle_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar2;
  System_Collections_Generic_List_AudioSource__o *__this_01;
  float fVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  UnityEngine_AudioSource_o *__this_02;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_03;
  float fVar6;
  float fVar7;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_18434491f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_18434491f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_181db0eac;
    fVar6 = (__this_00->fields).LightningColor.fields.g;
    fVar7 = (__this_00->fields).LightningColor.fields.b;
    fVar3 = (__this_00->fields).LightningColor.fields.a;
    (__this->fields)._color_5__2.fields.r = (__this_00->fields).LightningColor.fields.r;
    (__this->fields)._color_5__2.fields.g = fVar6;
    (__this->fields)._color_5__2.fields.b = fVar7;
    (__this->fields)._color_5__2.fields.a = fVar3;
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    iVar4 = UnityEngine_Application__get_loadedLevel((MethodInfo *)0x0);
    if (iVar4 == 0) {
      fVar6 = 0.3;
    }
    else {
      fVar6 = 1.0;
    }
    (__this->fields)._maxAlpha_5__3 = fVar6;
    (__this->fields)._color_5__2.fields.a = 0.0;
    pUVar2 = (__this_00->fields)._lineRenderer;
    if (pUVar2 == (UnityEngine_LineRenderer_o *)0x0) goto label_181db0eac;
    local_58.r = (__this->fields)._color_5__2.fields.r;
    local_58.g = (__this->fields)._color_5__2.fields.g;
    local_58.b = (__this->fields)._color_5__2.fields.b;
    local_58.a = (__this->fields)._color_5__2.fields.a;
    local_48[0]._0_8_ = local_58._0_8_;
    local_48[0]._8_8_ = local_58._8_8_;
    UnityEngine_LineRenderer__SetColors
              (pUVar2,(UnityEngine_Color_o *)&local_58,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
    pUVar2 = (__this_00->fields)._lineRenderer;
    if (pUVar2 == (UnityEngine_LineRenderer_o *)0x0) goto label_181db0eac;
    UnityEngine_LineRenderer__SetWidth(pUVar2,2.0,2.0,(MethodInfo *)0x0);
    fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__4 = fVar6;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        (__this->fields).__1__state = -1;
        fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields)._startTime_5__4 = fVar6;
      }
      else {
        if (iVar1 != 3) {
          return false;
        }
        (__this->fields).__1__state = -1;
      }
      fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (1.0 <= fVar6 - (__this->fields)._startTime_5__4) {
        if (__this_00 != (Weather_LightningParticle_o *)0x0) {
          Weather_LightningParticle__Disable(__this_00,(MethodInfo *)0x0);
          return false;
        }
      }
      else {
        fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        fVar6 = fVar6 - (__this->fields)._startTime_5__4;
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (1.0 < fVar6) {
          fVar6 = 1.0;
        }
        (__this->fields)._color_5__2.fields.a =
             (1.0 - fVar6) * (1.0 - fVar6) * (__this->fields)._maxAlpha_5__3;
        if ((__this_00 != (Weather_LightningParticle_o *)0x0) &&
           (pUVar2 = (__this_00->fields)._lineRenderer, pUVar2 != (UnityEngine_LineRenderer_o *)0x0)) {
          local_58.r = (__this->fields)._color_5__2.fields.r;
          local_58.g = (__this->fields)._color_5__2.fields.g;
          local_58.b = (__this->fields)._color_5__2.fields.b;
          local_58.a = (__this->fields)._color_5__2.fields.a;
          local_48[0]._0_8_ = local_58._0_8_;
          local_48[0]._8_8_ = local_58._8_8_;
          UnityEngine_LineRenderer__SetColors
                    (pUVar2,(UnityEngine_Color_o *)local_48,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0
                    );
          Weather_LightningParticle__SetVolume(__this_00,(1.0 - fVar6) * 0.3,(MethodInfo *)0x0);
          pIVar5 = (Il2CppObject *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
          (__this->fields).__1__state = 3;
          return true;
        }
      }
      goto label_181db0eac;
    }
    (__this->fields).__1__state = -1;
  }
  fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (0.5 <= fVar6 - (__this->fields)._startTime_5__4) {
    if ((__this->fields).sound == false) {
      (__this->fields)._color_5__2.fields.a = (__this->fields)._maxAlpha_5__3;
      if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_181db0eac;
    }
    else {
      if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_181db0eac;
      if (Il2CppMethodInitialized_184344918 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
        Il2CppMethodInitialized_184344918 = '\x01';
      }
      Weather_LightningParticle__SetVolume(__this_00,0.3,(MethodInfo *)0x0);
      iVar4 = UnityEngine_Random__RandomRangeInt(0,2,(MethodInfo *)0x0);
      __this_01 = (__this_00->fields)._audioSources;
      if ((__this_01 == (System_Collections_Generic_List_AudioSource__o *)0x0) ||
         (__this_02 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,iVar4,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_AudioSource_get_Item),
         __this_02 == (UnityEngine_AudioSource_o *)0x0)) goto label_181db0eac;
      UnityEngine_AudioSource__Play_2eb4470(__this_02,(MethodInfo *)0x0);
      (__this->fields)._color_5__2.fields.a = (__this->fields)._maxAlpha_5__3;
    }
    pUVar2 = (__this_00->fields)._lineRenderer;
    if (pUVar2 == (UnityEngine_LineRenderer_o *)0x0) {
label_181db0eac:
      ThrowNullReferenceException();
    }
    local_58.r = (__this->fields)._color_5__2.fields.r;
    local_58.g = (__this->fields)._color_5__2.fields.g;
    local_58.b = (__this->fields)._color_5__2.fields.b;
    local_58.a = (__this->fields)._color_5__2.fields.a;
    local_48[0]._0_8_ = local_58._0_8_;
    local_48[0]._8_8_ = local_58._8_8_;
    UnityEngine_LineRenderer__SetColors
              (pUVar2,(UnityEngine_Color_o *)&local_58,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
    __this_03 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_03,0.3,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_03;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_03);
    (__this->fields).__1__state = 2;
  }
  else {
    fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar6 = fVar6 - (__this->fields)._startTime_5__4;
    fVar6 = fVar6 + fVar6;
    if (fVar6 < 0.0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
      if (fVar6 <= 1.0) {
        fVar7 = fVar6;
      }
    }
    (__this->fields)._color_5__2.fields.a = fVar7 * (__this->fields)._maxAlpha_5__3;
    if ((__this_00 == (Weather_LightningParticle_o *)0x0) ||
       (pUVar2 = (__this_00->fields)._lineRenderer, pUVar2 == (UnityEngine_LineRenderer_o *)0x0))
    goto label_181db0eac;
    local_58.r = (__this->fields)._color_5__2.fields.r;
    local_58.g = (__this->fields)._color_5__2.fields.g;
    local_58.b = (__this->fields)._color_5__2.fields.b;
    local_58.a = (__this->fields)._color_5__2.fields.a;
    local_48[0]._0_8_ = local_58._0_8_;
    local_48[0]._8_8_ = local_58._8_8_;
    UnityEngine_LineRenderer__SetColors
              (pUVar2,(UnityEngine_Color_o *)&local_58,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 1;
  }
  return true;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_Reset (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x181db0ec0

void Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_Reset
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

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
                  MethodInfo_Weather_LightningParticle_StrikeCoroutine_d__20_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_get_Current (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_get_Current(Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.LightningParticle$$GetPerpendicularVector
// il2cpp: void Weather_LightningParticle__GetPerpendicularVector (UnityEngine_Vector3_o* directionNormalized, UnityEngine_Vector3_o* side, const MethodInfo* method);
// 0x181da3590

void Weather_LightningParticle__GetPerpendicularVector
               (UnityEngine_Vector3_o *directionNormalized,UnityEngine_Vector3_o *side,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  float local_50;
  
  fVar3 = (directionNormalized->fields).y;
  fVar5 = (directionNormalized->fields).x;
  fVar7 = (directionNormalized->fields).z;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar5 = fVar5 - (pUVar1->zeroVector).fields.x;
  fVar3 = fVar3 - (pUVar1->zeroVector).fields.y;
  fVar7 = fVar7 - (pUVar1->zeroVector).fields.z;
  if (fVar3 * fVar3 + fVar5 * fVar5 + fVar7 * fVar7 < 9.9999994e-11) {
    if (Il2CppMethodInitialized_1843445b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_1843445b8 = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar5 = (pUVar1->rightVector).fields.y;
    fVar3 = (pUVar1->rightVector).fields.z;
    (side->fields).x = (pUVar1->rightVector).fields.x;
    (side->fields).y = fVar5;
    (side->fields).z = fVar3;
    return;
  }
  fVar3 = (directionNormalized->fields).x;
  fVar5 = (directionNormalized->fields).y;
  fVar7 = (directionNormalized->fields).z;
  fVar2 = ABS(fVar5);
  if (ABS(fVar3) < fVar2) {
    if (ABS(fVar7) <= fVar2) {
      fVar6 = 1.0;
      fVar2 = 1.0;
      fVar4 = -(fVar7 + fVar3) / fVar5;
      goto label_181da36bf;
    }
  }
  else if (ABS(fVar7) <= fVar2) {
    fVar4 = 1.0;
    fVar6 = 1.0;
    fVar2 = -(fVar7 + fVar5) / fVar3;
    goto label_181da36bf;
  }
  fVar4 = 1.0;
  fVar2 = 1.0;
  fVar6 = -(fVar5 + fVar3) / fVar7;
label_181da36bf:
  local_58 = fVar2;
  local_54 = fVar4;
  local_50 = fVar6;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar3 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
  if (fVar3 <= 1e-05) {
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar5 = (pUVar1->zeroVector).fields.y;
    fVar3 = (pUVar1->zeroVector).fields.z;
    (side->fields).x = (pUVar1->zeroVector).fields.x;
    (side->fields).y = fVar5;
    (side->fields).z = fVar3;
  }
  else {
    (side->fields).x = fVar2 / fVar3;
    (side->fields).y = fVar4 / fVar3;
    (side->fields).z = fVar6 / fVar3;
  }
  return;
}


// Weather.LightningParticle$$GenerateLightningBoltPositions
// il2cpp: System_Collections_Generic_List_Vector3__o* Weather_LightningParticle__GenerateLightningBoltPositions (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t generation, float offsetAmount, const MethodInfo* method);
// 0x181da2f70
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da3181: test r12d, r12d
// asm:   0x181da318a: mov qword ptr [rsp + 0x1d0], r15
// asm:   0x181da3192: dec r12d
// asm:   0x181da3195: movaps xmmword ptr [rsp + 0x180], xmm6
// asm:   0x181da319d: movaps xmmword ptr [rsp + 0x170], xmm7
// asm:   0x181da31a5: movaps xmmword ptr [rsp + 0x160], xmm8
// asm:   0x181da31ae: movaps xmmword ptr [rsp + 0x150], xmm9
// asm:   0x181da31b7: movaps xmmword ptr [rsp + 0x140], xmm10
// asm:   0x181da31c0: movaps xmmword ptr [rsp + 0x130], xmm11
// asm:   0x181da31c9: movaps xmmword ptr [rsp + 0x120], xmm12
// asm:   0x181da31d2: movss xmm12, dword ptr [rip + 0x15b5a29]
// asm:   0x181da31db: nop dword ptr [rax + rax]
// asm:   0x181da33be: movaps xmm12, xmmword ptr [rsp + 0x120]
// asm:   0x181da33c7: movaps xmm11, xmmword ptr [rsp + 0x130]
// asm:   0x181da33d0: movaps xmm10, xmmword ptr [rsp + 0x140]
// asm:   0x181da33d9: movaps xmm9, xmmword ptr [rsp + 0x150]
// asm:   0x181da33e2: movaps xmm8, xmmword ptr [rsp + 0x160]
// asm:   0x181da33eb: movaps xmm7, xmmword ptr [rsp + 0x170]
// asm:   0x181da33f3: movaps xmm6, xmmword ptr [rsp + 0x180]
// asm:   0x181da33fb: mov r15, qword ptr [rsp + 0x1d0]

System_Collections_Generic_List_Vector3__o *
Weather_LightningParticle__GenerateLightningBoltPositions
          (UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,int32_t generation,float offsetAmount,
          MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_UIElements_StyleSheets_StyleValue_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  UnityEngine_UIElements_StyleSheets_StyleValue_array *pUVar12;
  UnityEngine_Vector3_array *pUVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  MethodInfo *pMVar16;
  Weather_LightningParticle_c *klass;
  System_Collections_Generic_List_StyleValue__o *__this;
  System_Collections_Generic_List_Vector3__o *__this_00;
  int index;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_Fields local_188;
  UnityEngine_Vector3_Fields local_178;
  UnityEngine_Vector3_Fields local_168;
  UnityEngine_Vector3_Fields local_158;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined1 local_128 [8];
  _struct_61975 _Stack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  UnityEngine_UIElements_StyleSheets_StyleValue_Fields local_108;
  UnityEngine_Vector3_Fields local_e8;
  undefined1 local_d8 [8];
  UnityEngine_UIElements_Length_Fields UStack_d0;
  undefined8 local_c8;
  DG_Tweening_Plugins_Core_PathCore_ControlPoint_o local_c0 [6];
  
  if (Il2CppMethodInitialized_184344914 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3);
    Il2CppMethodInitialized_184344914 = '\x01';
  }
  local_158.x = 0.0;
  local_158.y = 0.0;
  local_158.z = 0.0;
  __this = (System_Collections_Generic_List_StyleValue__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3);
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3_____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_ctor
            );
  local_188.z = (end->fields).z;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  UStack_d0.m_Value = 0.0;
  UStack_d0.m_Unit = 0;
  local_188.x = (end->fields).x;
  local_188.y = (end->fields).y;
  local_168.x = (start->fields).x;
  local_168.y = (start->fields).y;
  local_c8._0_4_ = 0.0;
  local_c8._4_4_ = 0.0;
  local_168.z = (start->fields).z;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
            ((DG_Tweening_Plugins_Core_PathCore_ControlPoint_o *)local_d8,(UnityEngine_Vector3_o *)&local_168,
             (UnityEngine_Vector3_o *)&local_188,
             MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_ctor);
  pMVar16 = MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_Add;
  if (__this != (System_Collections_Generic_List_StyleValue__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar12 = (__this->fields)._items;
    if (pUVar12 != (UnityEngine_UIElements_StyleSheets_StyleValue_array *)0x0) {
      uVar10 = (__this->fields)._size;
      if (uVar10 < (uint)pUVar12->max_length) {
        (__this->fields)._size = uVar10 + 1;
        if ((uint)pUVar12->max_length <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        pUVar2 = pUVar12->m_Items + (int)uVar10;
        (pUVar2->fields).id = local_d8._0_4_;
        (pUVar2->fields).keyword = local_d8._4_4_;
        (pUVar2->fields)._overlap_2._at_length.length.fields = UStack_d0;
        *(undefined8 *)((longlong)&pUVar12->m_Items[(int)uVar10].fields._overlap_2 + 8) = local_c8;
      }
      else {
        local_108.id = local_d8._0_4_;
        local_108.keyword = local_d8._4_4_;
        local_108._overlap_2._at_length.length.fields = (_struct_61976)(_struct_61976)UStack_d0;
        local_108._overlap_2._at_position.position.fields.offset.fields.m_Unit = (int32_t)(float)local_c8;
        local_108._overlap_2._at_color.color.fields.a = local_c8._4_4_;
        System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____AddWithResize
                  (__this,(UnityEngine_UIElements_StyleSheets_StyleValue_o *)&local_108,
                   (MethodInfo_92D430 *)pMVar16->klass->rgctx_data[0xe].method);
      }
      index = 0;
      if (offsetAmount <= 0.0) {
        uVar6 = (start->fields).x;
        uVar8 = (start->fields).y;
        uVar7 = (end->fields).x;
        uVar9 = (end->fields).y;
        local_188.x = (float)uVar7 - (float)uVar6;
        local_188.y = (float)uVar9 - (float)uVar8;
        local_188.z = (end->fields).z - (start->fields).z;
        fVar17 = (float)il2cpp_runtime_helper_180546a40(&local_188,0);
        offsetAmount = fVar17 * 0.2;
      }
      while (0 < generation) {
        generation = generation + -1;
        iVar11 = (__this->fields)._size;
        for (; index < iVar11; index = index + 1) {
          System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___get_Item
                    ((UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_o
                      *)local_148,
                     (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                      *)__this,index,
                     (MethodInfo_93C010 *)
                     MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item);
          pMVar16 = MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item;
          (start->fields).x = (float)local_148._0_4_;
          (start->fields).y = (float)local_148._4_4_;
          (start->fields).z = fStack_140;
          System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___get_Item
                    ((UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_o
                      *)local_148,
                     (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                      *)__this,index,(MethodInfo_93C010 *)pMVar16);
          klass = TypeInfo_Weather_LightningParticle;
          (end->fields).x = fStack_13c;
          (end->fields).y = fStack_138;
          (end->fields).z = fStack_134;
          fVar17 = (end->fields).x;
          fVar18 = (end->fields).y;
          fVar19 = (end->fields).z;
          fVar3 = (start->fields).x;
          fVar4 = (start->fields).y;
          fVar5 = (start->fields).z;
          if ((klass->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
          }
          Weather_LightningParticle__RandomVector
                    (start,end,offsetAmount,(UnityEngine_Vector3_o *)&local_158,(MethodInfo *)0x0);
          fVar17 = local_158.x + (fVar17 + fVar3) * 0.5;
          fVar18 = local_158.y + (fVar18 + fVar4) * 0.5;
          fVar19 = local_158.z + (fVar19 + fVar5) * 0.5;
          local_c0[0].fields.a.fields.x = 0.0;
          local_c0[0].fields.a.fields.y = 0.0;
          local_c0[0].fields.a.fields.z = 0.0;
          local_c0[0].fields.b.fields.x = 0.0;
          local_c0[0].fields.b.fields.y = 0.0;
          local_c0[0].fields.b.fields.z = 0.0;
          local_e8.x = (start->fields).x;
          local_e8.y = (start->fields).y;
          local_e8.z = (start->fields).z;
          local_168.y = fVar18;
          local_168.x = fVar17;
          local_168.z = fVar19;
          System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
                    (local_c0,(UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Vector3_o *)&local_168,
                     MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_ctor);
          local_148._0_4_ = local_c0[0].fields.a.fields.x;
          local_148._4_4_ = local_c0[0].fields.a.fields.y;
          fStack_140 = local_c0[0].fields.a.fields.z;
          fStack_13c = local_c0[0].fields.b.fields.x;
          fStack_138 = (float)local_c0[0].fields.b.fields._4_8_;
          fStack_134 = SUB84(local_c0[0].fields.b.fields._4_8_,4);
          il2cpp_runtime_helper_18000e1a0(__this,local_148,
                        MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_Add);
          local_188.y = fVar18;
          local_188.x = fVar17;
          local_108.id = 0;
          local_108.keyword = 0;
          local_108._overlap_2._at_length.length.fields = (_struct_61976)(UnityEngine_UIElements_Length_o)0x0;
          local_108._overlap_2._at_color.color.fields.b = 0.0;
          local_108._overlap_2._at_color.color.fields.a = 0.0;
          local_178.x = (end->fields).x;
          local_178.y = (end->fields).y;
          local_178.z = (end->fields).z;
          local_188.z = fVar19;
          System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
                    ((DG_Tweening_Plugins_Core_PathCore_ControlPoint_o *)&local_108,
                     (UnityEngine_Vector3_o *)&local_188,(UnityEngine_Vector3_o *)&local_178,
                     MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_ctor);
          local_128._0_4_ = local_108.id;
          local_128._4_4_ = local_108.keyword;
          _Stack_120.number = (float)local_108._overlap_2._at_number.number;
          fStack_11c = (float)local_108._overlap_2._at_length.length.fields.m_Unit;
          fStack_118 = (float)local_108._overlap_2._8_8_;
          fStack_114 = (float)((ulonglong)local_108._overlap_2._8_8_ >> 0x20);
          il2cpp_runtime_helper_18000e1a0(__this,local_128,
                        MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_Add);
        }
        offsetAmount = offsetAmount * 0.5;
        index = iVar11;
      }
      __this_00 = (System_Collections_Generic_List_Vector3__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
      System_Collections_Generic_List_Vector3____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
      System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___get_Item
                ((UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_o *)
                 local_128,
                 (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                  *)__this,index,
                 (MethodInfo_93C010 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item);
      pMVar16 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
      if (__this_00 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar13 = (__this_00->fields)._items;
        if (pUVar13 != (UnityEngine_Vector3_array *)0x0) {
          uVar10 = (__this_00->fields)._size;
          uVar14._4_4_ = (float)local_128._4_4_;
          uVar14._0_4_ = (float)local_128._0_4_;
          if (uVar10 < (uint)pUVar13->max_length) {
            (__this_00->fields)._size = uVar10 + 1;
            if ((uint)pUVar13->max_length <= uVar10) {
label_181da3584:
              ThrowIndexOutOfRangeException();
            }
            pUVar13->m_Items[(int)uVar10].fields.x = (float)local_128._0_4_;
            pUVar13->m_Items[(int)uVar10].fields.y = (float)local_128._4_4_;
            pUVar13->m_Items[(int)uVar10].fields.z = _Stack_120.number;
          }
          else {
            local_178.z = _Stack_120.number;
            local_178._0_8_ = uVar14;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this_00,(UnityEngine_Vector3_o *)&local_178,
                       (MethodInfo_99C850 *)pMVar16->klass->rgctx_data[0xe].method);
          }
          while( true ) {
            if ((__this->fields)._size <= index) {
              return __this_00;
            }
            System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___get_Item
                      ((UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_o
                        *)local_128,
                       (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                        *)__this,index,
                       (MethodInfo_93C010 *)
                       MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item);
            pMVar16 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar13 = (__this_00->fields)._items;
            if (pUVar13 == (UnityEngine_Vector3_array *)0x0) break;
            uVar10 = (__this_00->fields)._size;
            uVar15._4_4_ = fStack_118;
            uVar15._0_4_ = fStack_11c;
            if (uVar10 < (uint)pUVar13->max_length) {
              (__this_00->fields)._size = uVar10 + 1;
              if ((uint)pUVar13->max_length <= uVar10) goto label_181da3584;
              index = index + 1;
              pUVar13->m_Items[(int)uVar10].fields.x = fStack_11c;
              pUVar13->m_Items[(int)uVar10].fields.y = fStack_118;
              pUVar13->m_Items[(int)uVar10].fields.z = fStack_114;
            }
            else {
              local_178.z = fStack_114;
              local_178._0_8_ = uVar15;
              System_Collections_Generic_List_Vector3___AddWithResize
                        (__this_00,(UnityEngine_Vector3_o *)&local_178,
                         (MethodInfo_99C850 *)pMVar16->klass->rgctx_data[0xe].method);
              index = index + 1;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$RandomVector
// il2cpp: void Weather_LightningParticle__RandomVector (UnityEngine_Vector3_o* start, UnityEngine_Vector3_o* end, float offsetAmount, UnityEngine_Vector3_o* result, const MethodInfo* method);
// 0x181da3830

void Weather_LightningParticle__RandomVector
               (UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,float offsetAmount,
               UnityEngine_Vector3_o *result,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  System_Random_o *pSVar8;
  UnityEngine_Object_o *pUVar9;
  undefined8 uVar10;
  UnityEngine_Quaternion_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68;
  UnityEngine_Quaternion_o local_58 [5];
  
  if (Il2CppMethodInitialized_184344915 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
    Il2CppMethodInitialized_184344915 = '\x01';
  }
  uVar1 = (start->fields).x;
  uVar4 = (start->fields).y;
  uVar2 = (end->fields).x;
  uVar5 = (end->fields).y;
  fVar14 = (end->fields).z - (start->fields).z;
  local_78.x = 0.0;
  local_78.y = 0.0;
  local_78._8_8_ = (ulonglong)(uint)local_78.w << 0x20;
  local_88.y = (float)uVar5 - (float)uVar4;
  local_88.x = (float)uVar2 - (float)uVar1;
  local_88.z = fVar14;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  local_88.z = (float)il2cpp_runtime_helper_180546a40(&local_88,0);
  if (local_88.z <= 1e-05) {
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar13 = (pUVar7->zeroVector).fields.x;
    fVar15 = (pUVar7->zeroVector).fields.y;
    local_88.z = (pUVar7->zeroVector).fields.z;
  }
  else {
    fVar13 = ((float)uVar2 - (float)uVar1) / local_88.z;
    fVar15 = ((float)uVar5 - (float)uVar4) / local_88.z;
    local_88.z = fVar14 / local_88.z;
  }
  local_88.y = fVar15;
  local_88.x = fVar13;
  if ((TypeInfo_Weather_LightningParticle->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle);
  }
  Weather_LightningParticle__GetPerpendicularVector
            ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
  pSVar8 = TypeInfo_Weather_LightningParticle->static_fields->_random;
  if (pSVar8 != (System_Random_o *)0x0) {
    pUVar9 = (*(pSVar8->klass->vtable)._8_NextDouble.methodPtr)
                       (pSVar8,(pSVar8->klass->vtable)._8_NextDouble.method);
    pSVar8 = TypeInfo_Weather_LightningParticle->static_fields->_random;
    if (pSVar8 != (System_Random_o *)0x0) {
      fVar14 = ((float)(double)pUVar9 + 0.1) * offsetAmount;
      local_68.x = local_88.x;
      local_68.y = local_88.y;
      local_68.z = local_88.z;
      pUVar9 = (*(pSVar8->klass->vtable)._8_NextDouble.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._8_NextDouble.method);
      pUVar11 = UnityEngine_Quaternion__Internal_AngleAxis
                          (local_58,(float)(double)pUVar9 * 360.0,(UnityEngine_Vector3_o *)&local_68,
                           (MethodInfo *)0x0);
      local_88.x = local_78.x;
      local_88.y = local_78.y;
      local_78.x = (pUVar11->fields).x;
      local_78.y = (pUVar11->fields).y;
      uVar10._0_4_ = (pUVar11->fields).z;
      uVar10._4_4_ = (pUVar11->fields).w;
      local_88.z = local_78.z;
      local_78._8_8_ = uVar10;
      pUVar12 = UnityEngine_Quaternion__op_Multiply_2f08cb0
                          ((UnityEngine_Vector3_o *)&local_68,(UnityEngine_Quaternion_o *)&local_78,
                           (UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
      uVar3 = (pUVar12->fields).x;
      uVar6 = (pUVar12->fields).y;
      (result->fields).z = fVar14 * (pUVar12->fields).z;
      (result->fields).x = (float)uVar3 * fVar14;
      (result->fields).y = (float)uVar6 * fVar14;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Awake
// il2cpp: void Weather_LightningParticle__Awake (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x181da2be0

void Weather_LightningParticle__Awake(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_LineRenderer_o *pUVar1;
  System_Object_array *source;
  System_Func_AudioSource__string__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_AudioSource__o *value;
  
  if (Il2CppMethodInitialized_184344916 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_AudioSource_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AudioSource_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Weather_LightningParticle_c_Awake_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_c);
    Il2CppMethodInitialized_184344916 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LineRenderer);
  (__this->fields)._lineRenderer = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lineRenderer,pUVar1);
  pUVar1 = (__this->fields)._lineRenderer;
  if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(pUVar1,0,(MethodInfo *)0x0);
    source = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_665370 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource);
    if ((TypeInfo_Weather_LightningParticle_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle_c);
    }
    __this_00 = TypeInfo_Weather_LightningParticle_c->static_fields->__9__14_0;
    if (__this_00 == (System_Func_AudioSource__string__o *)0x0) {
      if ((TypeInfo_Weather_LightningParticle_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle_c);
      }
      object = (Il2CppObject *)TypeInfo_Weather_LightningParticle_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AudioSource_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,object,
                 (intptr_t)MethodInfo_Weather_LightningParticle_c_Awake_b__14_0,(MethodInfo_16E67D0 *)0x0);
      TypeInfo_Weather_LightningParticle_c->static_fields->__9__14_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_LightningParticle_c->static_fields->__9__14_0,__this_00);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TKey__o *)__this_00,
                           (MethodInfo_6C1360 *)MethodInfo_System_Linq_Enumerable_OrderBy_AudioSource_string);
    value = (System_Collections_Generic_List_AudioSource__o *)
            System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_AudioSource);
    (__this->fields)._audioSources = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSources,value);
    return;
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Disable
// il2cpp: void Weather_LightningParticle__Disable (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x181da2d90
// eh: try 0x181da2e40..0x181da2f04 -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da2e7d: mov rdx, qword ptr [rip + 0x22d1c14]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x181da2e84: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181da2e89: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181da2e8e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181da2e93: test rcx, rcx
// asm:   0x181da2e96: jne 0x181da2f04
// asm:   0x181da2e98: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x181da2f04: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 

void Weather_LightningParticle__Disable(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  bool bVar1;
  UnityEngine_GameObject_o *__this_02;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344917 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    Il2CppMethodInitialized_184344917 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_48,(System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    local_28.fields._list = local_48.fields._list;
    local_28.fields._index = local_48.fields._index;
    local_28.fields._version = local_48.fields._version;
    local_28.fields._current = local_48.fields._current;
    local_58._0_4_ = 0.0;
    local_58._4_4_ = 0.0;
    pSStack_50 = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
      if (!bVar1) break;
      if ((UnityEngine_AudioSource_o *)local_28.fields._current == (UnityEngine_AudioSource_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_AudioSource__Stop_2eb4660
                ((UnityEngine_AudioSource_o *)local_28.fields._current,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
    __this_01 = (__this->fields)._lineRenderer;
    if (__this_01 != (UnityEngine_LineRenderer_o *)0x0) {
      local_58._0_4_ = 0.0;
      local_58._4_4_ = 0.0;
      pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
      local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      local_48.fields._index = 0;
      local_48.fields._version = 0;
      UnityEngine_LineRenderer__SetColors
                (__this_01,(UnityEngine_Color_o *)&local_48,(UnityEngine_Color_o *)local_58,(MethodInfo *)0x0)
      ;
      __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Enable
// il2cpp: void Weather_LightningParticle__Enable (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x181da2f10

void Weather_LightningParticle__Enable(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_Fields local_18;
  
  __this_00 = (__this->fields)._lineRenderer;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    local_28.r = 0.0;
    local_28.g = 0.0;
    local_28.b = 0.0;
    local_28.a = 0.0;
    local_18.r = 0.0;
    local_18.g = 0.0;
    local_18.b = 0.0;
    local_18.a = 0.0;
    UnityEngine_LineRenderer__SetColors
              (__this_00,(UnityEngine_Color_o *)&local_18,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Strike
// il2cpp: void Weather_LightningParticle__Strike (Weather_LightningParticle_o* __this, bool sound, const MethodInfo* method);
// 0x181da3d40

void Weather_LightningParticle__Strike(Weather_LightningParticle_o *__this,bool sound,MethodInfo *method)

{
  Weather_LightningParticle__StrikeCoroutine_d__20_o *routine;
  
  if (Il2CppMethodInitialized_18434491a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
    Il2CppMethodInitialized_18434491a = '\x01';
  }
  routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  (routine->fields).sound = sound;
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle$$PlayAudio
// il2cpp: void Weather_LightningParticle__PlayAudio (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x181da37b0

void Weather_LightningParticle__PlayAudio(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  int32_t index;
  UnityEngine_AudioSource_o *__this_01;
  
  if (Il2CppMethodInitialized_184344918 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
    Il2CppMethodInitialized_184344918 = '\x01';
  }
  Weather_LightningParticle__SetVolume(__this,0.3,(MethodInfo *)0x0);
  index = UnityEngine_Random__RandomRangeInt(0,2,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    __this_01 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
    if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_2eb4470(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Setup
// il2cpp: void Weather_LightningParticle__Setup (Weather_LightningParticle_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t generation, const MethodInfo* method);
// 0x181da3ba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da3c5e: nop 

void Weather_LightningParticle__Setup
               (Weather_LightningParticle_o *__this,UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,
               int32_t generation,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  System_Collections_Generic_List_Vector3__o *__this_00;
  int index;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184344919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_184344919 = '\x01';
  }
  if ((TypeInfo_Weather_LightningParticle->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle);
  }
  local_48.x = (end->fields).x;
  local_48.y = (end->fields).y;
  local_48.z = (end->fields).z;
  local_38[0].x = (start->fields).x;
  local_38[0].y = (start->fields).y;
  local_38[0].z = (start->fields).z;
  __this_00 = Weather_LightningParticle__GenerateLightningBoltPositions
                        ((UnityEngine_Vector3_o *)local_38,(UnityEngine_Vector3_o *)&local_48,generation,0.0,
                         (MethodInfo *)0x0);
  if ((__this_00 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
     (pUVar1 = (__this->fields)._lineRenderer, pUVar1 != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_positionCount(pUVar1,(__this_00->fields)._size,(MethodInfo *)0x0);
    index = 0;
    while( true ) {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      pUVar1 = (__this->fields)._lineRenderer;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_38,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_00,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pUVar1 == (UnityEngine_LineRenderer_o *)0x0) break;
      local_48.x = local_38[0].x;
      local_48.y = local_38[0].y;
      local_48.z = local_38[0].z;
      UnityEngine_LineRenderer__SetPosition(pUVar1,index,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0)
      ;
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$StrikeCoroutine
// il2cpp: System_Collections_IEnumerator_o* Weather_LightningParticle__StrikeCoroutine (Weather_LightningParticle_o* __this, bool sound, const MethodInfo* method);
// 0x181da3cc0

System_Collections_IEnumerator_o *
Weather_LightningParticle__StrikeCoroutine(Weather_LightningParticle_o *__this,bool sound,MethodInfo *method)

{
  Weather_LightningParticle__StrikeCoroutine_d__20_o *__this_00;
  
  if (Il2CppMethodInitialized_18434491a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
    Il2CppMethodInitialized_18434491a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).sound = sound;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Weather.LightningParticle$$SetVolume
// il2cpp: void Weather_LightningParticle__SetVolume (Weather_LightningParticle_o* __this, float volume, const MethodInfo* method);
// 0x181da3a70
// eh: try 0x181da3b20..0x181da3b89 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da3b5d: mov rdx, qword ptr [rip + 0x22d0f34]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x181da3b64: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181da3b69: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181da3b6e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181da3b73: test rcx, rcx
// asm:   0x181da3b76: jne 0x181da3b89
// asm:   0x181da3b89: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Weather_LightningParticle__SetVolume(Weather_LightningParticle_o *__this,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  bool bVar1;
  undefined1 local_50 [16];
  UnityEngine_AudioSource_o *local_40;
  System_Collections_Generic_List_Enumerator_object__o local_38 [2];
  
  if (Il2CppMethodInitialized_18434491b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    Il2CppMethodInitialized_18434491b = '\x01';
  }
  local_38[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38[0].fields._index = 0;
  local_38[0].fields._version = 0;
  local_38[0].fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    local_38[0].fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    local_38[0].fields._index = local_50._8_4_;
    local_38[0].fields._version = local_50._12_4_;
    local_38[0].fields._current = (Il2CppObject *)local_40;
    local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_50._8_8_ = local_38;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (local_38,(MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                   MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
        return;
      }
      if ((UnityEngine_AudioSource_o *)local_38[0].fields._current == (UnityEngine_AudioSource_o *)0x0) break;
      UnityEngine_AudioSource__set_volume
                ((UnityEngine_AudioSource_o *)local_38[0].fields._current,volume,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$.ctor
// il2cpp: void Weather_LightningParticle___ctor (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x181da3e50

void Weather_LightningParticle___ctor(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  
  if (Il2CppMethodInitialized_18434491c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AudioSource_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AudioSource);
    Il2CppMethodInitialized_18434491c = '\x01';
  }
  (__this->fields).LightningColor.fields.r = 228.0;
  (__this->fields).LightningColor.fields.g = 245.0;
  (__this->fields).LightningColor.fields.b = 255.0;
  (__this->fields).LightningColor.fields.a = 1.0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AudioSource);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AudioSource_ctor);
  (__this->fields)._audioSources = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSources,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle$$.cctor
// il2cpp: void Weather_LightningParticle___cctor (const MethodInfo* method);
// 0x181da3dd0

void Weather_LightningParticle___cctor(MethodInfo *method)

{
  System_Random_o *__this;
  
  if (Il2CppMethodInitialized_18434491d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    Il2CppMethodInitialized_18434491d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
  System_Random___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Weather_LightningParticle->static_fields->_random = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_LightningParticle->static_fields->_random,__this);
  return;
}


