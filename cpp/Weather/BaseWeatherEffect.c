// Type: Weather.BaseWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Weather/BaseWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/BaseWeatherEffect.cs
// --------------------------------

// Weather.BaseWeatherEffect.<>c$$.cctor
// il2cpp: void Weather_BaseWeatherEffect___c___cctor (const MethodInfo* method);
// 0x5853bf0

void Weather_BaseWeatherEffect___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545068 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_BaseWeatherEffect_c);
    Il2CppMethodInitialized_07545068 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9 = (Weather_BaseWeatherEffect___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9);
  return;
}


// Weather.BaseWeatherEffect.<>c$$.ctor
// il2cpp: void Weather_BaseWeatherEffect___c___ctor (Weather_BaseWeatherEffect___c_o* __this, const MethodInfo* method);
// 0x5853c60

void Weather_BaseWeatherEffect___c___ctor(Weather_BaseWeatherEffect___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_0
// il2cpp: System_String_o* Weather_BaseWeatherEffect___c___Setup_b__21_0 (Weather_BaseWeatherEffect___c_o* __this, UnityEngine_ParticleSystem_o* x, const MethodInfo* method);
// 0x5853c70

System_String_o *
Weather_BaseWeatherEffect___c___Setup_b__21_0
          (Weather_BaseWeatherEffect___c_o *__this,UnityEngine_ParticleSystem_o *x,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if (x != (UnityEngine_ParticleSystem_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_1
// il2cpp: System_String_o* Weather_BaseWeatherEffect___c___Setup_b__21_1 (Weather_BaseWeatherEffect___c_o* __this, UnityEngine_AudioSource_o* x, const MethodInfo* method);
// 0x5853ca0

System_String_o *
Weather_BaseWeatherEffect___c___Setup_b__21_1
          (Weather_BaseWeatherEffect___c_o *__this,UnityEngine_AudioSource_o *x,MethodInfo *method)

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


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$.ctor
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17___ctor (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5852980

void Weather_BaseWeatherEffect__WaitAndDisable_d__17___ctor
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.IDisposable.Dispose
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_IDisposable_Dispose (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x5853cd0

void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_IDisposable_Dispose
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$MoveNext
// il2cpp: bool Weather_BaseWeatherEffect__WaitAndDisable_d__17__MoveNext (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x5853ce0

bool Weather_BaseWeatherEffect__WaitAndDisable_d__17__MoveNext
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_BaseWeatherEffect_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_WaitForSeconds_o *__this_02;
  float seconds;
  
  if (Il2CppMethodInitialized_07545069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07545069 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Weather_BaseWeatherEffect_o *)0x0) goto label_05853df6;
    (__this_00->fields)._isDisabling = true;
    (*(__this_00->klass->vtable)._17_StopAllAudio.methodPtr)
              (__this_00,true,(__this_00->klass->vtable)._17_StopAllAudio.method);
    (*(__this_00->klass->vtable)._13_StopAllParticleSystems.methodPtr)
              (__this_00,(__this_00->klass->vtable)._13_StopAllParticleSystems.method);
    seconds = (*(__this_00->klass->vtable)._5_get__audioFadeTime.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._5_get__audioFadeTime.method);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (Weather_BaseWeatherEffect_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        (__this_00->fields)._isDisabling = false;
        goto label_05853de8;
      }
    }
label_05853df6:
    ThrowNullReferenceException();
  }
label_05853de8:
  return iVar1 == 0;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x5853e00

Il2CppObject *
Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_Reset (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x5853e10

void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_Reset
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

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
                  MethodInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_get_Current (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x5853e50

Il2CppObject *
Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_get_Current
          (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.BaseWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_BaseWeatherEffect__get__positionOffset (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x5852770

UnityEngine_Vector3_o
Weather_BaseWeatherEffect__get__positionOffset(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
}


// Weather.BaseWeatherEffect$$get__audioFadeTime
// il2cpp: float Weather_BaseWeatherEffect__get__audioFadeTime (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x58527b0

float Weather_BaseWeatherEffect__get__audioFadeTime(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Weather.BaseWeatherEffect$$Disable
// il2cpp: void Weather_BaseWeatherEffect__Disable (Weather_BaseWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x58527c0

void Weather_BaseWeatherEffect__Disable(Weather_BaseWeatherEffect_o *__this,bool fadeOut,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this_00;
  
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_058528b2:
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if (!fadeOut) {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._17_StopAllAudio.methodPtr)
                (__this,false,(__this->klass->vtable)._17_StopAllAudio.method);
      (*(__this->klass->vtable)._13_StopAllParticleSystems.methodPtr)
                (__this,(__this->klass->vtable)._13_StopAllParticleSystems.method);
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        (__this->fields)._isDisabling = false;
        return;
      }
      goto label_058528b2;
    }
    if ((__this->fields)._isDisabling == false) {
      if (Il2CppMethodInitialized_0754505d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17);
        Il2CppMethodInitialized_0754505d = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Weather.BaseWeatherEffect$$Enable
// il2cpp: void Weather_BaseWeatherEffect__Enable (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x5852930

void Weather_BaseWeatherEffect__Enable(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_05852972:
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05852972;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    (__this->fields)._isDisabling = false;
  }
  return;
}


// Weather.BaseWeatherEffect$$WaitAndDisable
// il2cpp: System_Collections_IEnumerator_o* Weather_BaseWeatherEffect__WaitAndDisable (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x58528c0

System_Collections_IEnumerator_o *
Weather_BaseWeatherEffect__WaitAndDisable(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_0754505d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17);
    Il2CppMethodInitialized_0754505d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Weather.BaseWeatherEffect$$Randomize
// il2cpp: void Weather_BaseWeatherEffect__Randomize (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x58529a0

void Weather_BaseWeatherEffect__Randomize(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.BaseWeatherEffect$$SetParent
// il2cpp: void Weather_BaseWeatherEffect__SetParent (Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x58529b0

void Weather_BaseWeatherEffect__SetParent
               (Weather_BaseWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  (__this->fields)._parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent);
  return;
}


// Weather.BaseWeatherEffect$$SetLevel
// il2cpp: void Weather_BaseWeatherEffect__SetLevel (Weather_BaseWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x58529c0

void Weather_BaseWeatherEffect__SetLevel(Weather_BaseWeatherEffect_o *__this,float level,MethodInfo *method)

{
  (__this->fields)._level = level;
  return;
}


// Weather.BaseWeatherEffect$$Setup
// il2cpp: void Weather_BaseWeatherEffect__Setup (Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x58529d0
// eh: try 0x5852d94..0x5852e81 -> pad 0x5852e9a (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5852eb2..0x5852eb7 -> pad 0x5852ed6 cleanup
// eh: try 0x5852ed9..0x5852ee3 -> pad 0x5852eeb catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5852ba1: jmp 0x5852bbc
// asm:   0x5852c85: jmp 0x5852ca0
// asm:   0x5852e86: jmp 0x5852e9a
// asm:   0x5852e88: jmp 0x5852e9a
// asm:   0x5852e8a: jmp 0x5852e9a
// asm:   0x5852e8c: jmp 0x5852e9a
// asm:   0x5852e8e: jmp 0x5852e9a
// asm:   0x5852e90: jmp 0x5852e9a
// asm:   0x5852e92: jmp 0x5852e9a
// asm:   0x5852e94: jmp 0x5852e9a
// asm:   0x5852e96: jmp 0x5852e9a
// asm:   0x5852e98: jmp 0x5852e9a
// asm:   0x5852e9a: mov rbx, rax
// asm:   0x5852e9d: cmp edx, 1
// asm:   0x5852ea0: jne 0x5852ed9
// asm:   0x5852ea2: mov rdi, rbx
// asm:   0x5852ea5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5852eaa: mov rbx, qword ptr [rax]
// asm:   0x5852ead: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5852eb2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5852eb7: lea rax, [rip + 0x1a3b7ea]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x5852ebe: mov rsi, qword ptr [rax]
// asm:   0x5852ec1: mov rdi, rsp
// asm:   0x5852ec4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5852ec9: test rbx, rbx
// asm:   0x5852ecc: je 0x5852e4e
// asm:   0x5852ece: mov rdi, rbx
// asm:   0x5852ed1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5852ed6: mov rbx, rax
// asm:   0x5852ed9: lea rdi, [rsp + 0x20]
// asm:   0x5852ede: call 0x2fce570  ; il2cpp_runtime_helper_02fce570()
// asm:   0x5852ee3: mov rdi, rbx
// asm:   0x5852ee6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5852eeb: mov rdi, rax
// asm:   0x5852eee: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_BaseWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Object_array *pSVar5;
  System_Func_ParticleSystem__string__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar6;
  System_Collections_Generic_List_ParticleSystem__o *pSVar7;
  Weather_BaseWeatherEffect___c_StaticFields *pWVar8;
  System_Func_AudioSource__string__o *__this_01;
  System_Collections_Generic_List_AudioSource__o *pSVar9;
  bool bVar10;
  ulong uVar11;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  UnityEngine_ParticleSystem_o *local_38;
  
  if (Il2CppMethodInitialized_0754505e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_AudioSource_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_ParticleSystem_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ParticleSystem_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AudioSource_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Weather_BaseWeatherEffect_c_Setup_b__21_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Weather_BaseWeatherEffect_c_Setup_b__21_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_BaseWeatherEffect_c);
    Il2CppMethodInitialized_0754505e = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transform);
  (__this->fields)._parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).WeatherEffects, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    bVar10 = (pSVar2->fields)._value == 3;
    uVar11 = CONCAT44((int)((uint)bVar10 << 0x1f) >> 0x1f,(int)((uint)bVar10 << 0x1f) >> 0x1f);
    uVar11 = uVar11 & (ulong)g_data_010058c0 | ~uVar11 & (ulong)g_data_01006130;
    (__this->fields)._maxParticles = (float)(int)uVar11;
    (__this->fields)._particleMultiplier = (float)(int)(uVar11 >> 0x20);
    pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    if ((TypeInfo_Weather_BaseWeatherEffect_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
      pWVar8 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields;
      __this_00 = pWVar8->__9__21_0;
    }
    else {
      pWVar8 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields;
      __this_00 = pWVar8->__9__21_0;
    }
    if (__this_00 == (System_Func_ParticleSystem__string__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
        pWVar8 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields;
      }
      pIVar3 = (Il2CppObject *)pWVar8->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ParticleSystem_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_00,pIVar3,
                 (intptr_t)MethodInfo_Weather_BaseWeatherEffect_c_Setup_b__21_0,(MethodInfo_4F19B50 *)0x0);
      pWVar8 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields;
      pWVar8->__9__21_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pWVar8->__9__21_0);
    }
    pSVar6 = System_Linq_Enumerable__OrderBy_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                        (System_Func_TSource__TKey__o *)__this_00,
                        (MethodInfo_34F1E50 *)MethodInfo_System_Linq_Enumerable_OrderBy_ParticleSystem_string)
    ;
    pSVar7 = (System_Collections_Generic_List_ParticleSystem__o *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                        (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_ParticleSystem);
    (__this->fields)._particleSystems = pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._particleSystems);
    pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource);
    if ((TypeInfo_Weather_BaseWeatherEffect_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
      pWVar8 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields;
      __this_01 = pWVar8->__9__21_1;
    }
    else {
      pWVar8 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields;
      __this_01 = pWVar8->__9__21_1;
    }
    if (__this_01 == (System_Func_AudioSource__string__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
        pWVar8 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields;
      }
      pIVar3 = (Il2CppObject *)pWVar8->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AudioSource_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_01,pIVar3,
                 (intptr_t)MethodInfo_Weather_BaseWeatherEffect_c_Setup_b__21_1,(MethodInfo_4F19B50 *)0x0);
      pWVar8 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields;
      pWVar8->__9__21_1 = __this_01;
      Il2CppCodeGenWriteBarrier(&pWVar8->__9__21_1);
    }
    pSVar6 = System_Linq_Enumerable__OrderBy_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                        (System_Func_TSource__TKey__o *)__this_01,
                        (MethodInfo_34F1E50 *)MethodInfo_System_Linq_Enumerable_OrderBy_AudioSource_string);
    pSVar9 = (System_Collections_Generic_List_AudioSource__o *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                        (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_AudioSource);
    (__this->fields)._audioSources = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSources);
    pSVar7 = (__this->fields)._particleSystems;
    if (pSVar7 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar7,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator
                );
      local_48._8_8_ = &local_68;
      local_68.fields._current = (Il2CppObject *)local_38;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      while( true ) {
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (&local_68,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
        pIVar3 = local_68.fields._current;
        if (!bVar10) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&local_68,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
          (*(__this->klass->vtable)._17_StopAllAudio.methodPtr)
                    (__this,false,(__this->klass->vtable)._17_StopAllAudio.method);
          return;
        }
        if ((UnityEngine_ParticleSystem_o *)local_68.fields._current == (UnityEngine_ParticleSystem_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_ParticleSystem__Stop_69c2810
                  ((UnityEngine_ParticleSystem_o *)local_68.fields._current,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar3,(MethodInfo *)0x0);
        value = (*(__this->klass->vtable)._4_get__positionOffset.methodPtr)
                          (__this,(__this->klass->vtable)._4_get__positionOffset.method);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__set_localPosition(pUVar4,value,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar3,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) break;
        UnityEngine_Transform__set_localRotation
                  (pUVar4,(UnityEngine_Quaternion_o)
                          *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                   (MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$SetActiveParticleSystem
// il2cpp: void Weather_BaseWeatherEffect__SetActiveParticleSystem (Weather_BaseWeatherEffect_o* __this, int32_t index, const MethodInfo* method);
// 0x5852f00

void Weather_BaseWeatherEffect__SetActiveParticleSystem
               (Weather_BaseWeatherEffect_o *__this,int32_t index,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  int index_00;
  System_Collections_Generic_List_ParticleSystem__o *pSVar3;
  
  if (Il2CppMethodInitialized_0754505f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
    Il2CppMethodInitialized_0754505f = '\x01';
  }
  pSVar3 = (__this->fields)._particleSystems;
  if (pSVar3 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    index_00 = 0;
    do {
      if ((pSVar3->fields)._size <= index_00) {
        return;
      }
      if (index == index_00) {
        pUVar2 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
        if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) break;
        bVar1 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar3 = (__this->fields)._particleSystems;
          if (pSVar3 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) break;
          pUVar2 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
          if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) break;
          UnityEngine_ParticleSystem__Play_69c2630(pUVar2,(MethodInfo *)0x0);
        }
      }
      else {
        pUVar2 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
        if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) break;
        UnityEngine_ParticleSystem__Stop_69c2810(pUVar2,(MethodInfo *)0x0);
      }
      index_00 = index_00 + 1;
      pSVar3 = (__this->fields)._particleSystems;
    } while (pSVar3 != (System_Collections_Generic_List_ParticleSystem__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$StopAllParticleSystems
// il2cpp: void Weather_BaseWeatherEffect__StopAllParticleSystems (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x5852fe0
// eh: try 0x5853073..0x58530b1 -> pad 0x58530ba (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58530d2..0x58530d7 -> pad 0x58530f6 cleanup
// eh: try 0x58530f9..0x5853103 -> pad 0x585310b catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585306d: nop dword ptr [rax]
// asm:   0x58530b6: jmp 0x58530ba
// asm:   0x58530b8: jmp 0x58530ba
// asm:   0x58530ba: mov rbx, rax
// asm:   0x58530bd: cmp edx, 1
// asm:   0x58530c0: jne 0x58530f9
// asm:   0x58530c2: mov rdi, rbx
// asm:   0x58530c5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58530ca: mov rbx, qword ptr [rax]
// asm:   0x58530cd: mov qword ptr [rsp + 0x18], rbx
// asm:   0x58530d2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58530d7: lea rax, [rip + 0x1a3b5ca]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x58530de: mov rsi, qword ptr [rax]
// asm:   0x58530e1: mov rdi, rsp
// asm:   0x58530e4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x58530e9: test rbx, rbx
// asm:   0x58530ec: je 0x58530a4
// asm:   0x58530ee: mov rdi, rbx
// asm:   0x58530f1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58530f6: mov rbx, rax
// asm:   0x58530f9: lea rdi, [rsp + 0x18]
// asm:   0x58530fe: call 0x2fce5a0  ; il2cpp_runtime_helper_02fce5a0()
// asm:   0x5853103: mov rdi, rbx
// asm:   0x5853106: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585310b: mov rdi, rax
// asm:   0x585310e: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_BaseWeatherEffect__StopAllParticleSystems(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  if (Il2CppMethodInitialized_07545060 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    Il2CppMethodInitialized_07545060 = '\x01';
  }
  SStack_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_38.fields._index = 0;
  SStack_38.fields._version = 0;
  SStack_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._particleSystems;
  if (__this_00 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_38,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
  uStack_20 = 0;
  puStack_18 = (undefined1 *)&SStack_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
      return;
    }
    if ((UnityEngine_ParticleSystem_o *)SStack_38.fields._current == (UnityEngine_ParticleSystem_o *)0x0)
    break;
    UnityEngine_ParticleSystem__Stop_69c2810
              ((UnityEngine_ParticleSystem_o *)SStack_38.fields._current,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$SetActiveAudio
// il2cpp: void Weather_BaseWeatherEffect__SetActiveAudio (Weather_BaseWeatherEffect_o* __this, int32_t index, float volume, const MethodInfo* method);
// 0x5853120

void Weather_BaseWeatherEffect__SetActiveAudio
               (Weather_BaseWeatherEffect_o *__this,int32_t index,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *pSVar1;
  int iVar2;
  int32_t iVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07545061 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_get_Count);
    Il2CppMethodInitialized_07545061 = '\x01';
  }
  pSVar1 = (__this->fields)._audioSources;
  if (pSVar1 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    iVar2 = 0;
    do {
      if ((pSVar1->fields)._size <= iVar2) {
        return;
      }
      if (index == iVar2) {
        fVar4 = volume;
        iVar3 = index;
      }
      else {
        fVar4 = 0.0;
        iVar3 = iVar2;
      }
      (*(__this->klass->vtable)._15_SetAudioVolume.methodPtr)
                (__this,iVar3,fVar4,(__this->klass->vtable)._15_SetAudioVolume.method);
      iVar2 = iVar2 + 1;
      pSVar1 = (__this->fields)._audioSources;
    } while (pSVar1 != (System_Collections_Generic_List_AudioSource__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$SetAudioVolume
// il2cpp: void Weather_BaseWeatherEffect__SetAudioVolume (Weather_BaseWeatherEffect_o* __this, int32_t index, float volume, const MethodInfo* method);
// 0x58531b0

void Weather_BaseWeatherEffect__SetAudioVolume
               (Weather_BaseWeatherEffect_o *__this,int32_t index,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  UnityEngine_AudioSource_o *pUVar1;
  
  if (Il2CppMethodInitialized_07545062 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
    Il2CppMethodInitialized_07545062 = '\x01';
  }
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,index,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
  (*(__this->klass->vtable)._16_SetAudioVolume.methodPtr)
            (__this,pUVar1,volume,(__this->klass->vtable)._16_SetAudioVolume.method);
  return;
}


// Weather.BaseWeatherEffect$$SetAudioVolume
// il2cpp: void Weather_BaseWeatherEffect__SetAudioVolume (Weather_BaseWeatherEffect_o* __this, UnityEngine_AudioSource_o* audio, float volume, const MethodInfo* method);
// 0x5853220

void Weather_BaseWeatherEffect__SetAudioVolume_5753220
               (Weather_BaseWeatherEffect_o *__this,UnityEngine_AudioSource_o *audio,float volume,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07545063 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    Il2CppMethodInitialized_07545063 = '\x01';
  }
  pSVar1 = (__this->fields)._audioTargetVolumes;
  if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
    fVar3 = 1.0;
    if (volume <= 1.0) {
      fVar3 = volume;
    }
    fVar3 = (float)(-(uint)(0.0 <= volume) & (uint)fVar3);
    fVar2 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,
                       (MethodInfo_4AB53E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    if ((fVar2 == fVar3) && (!NAN(fVar2) && !NAN(fVar3))) {
      return;
    }
    pSVar1 = (__this->fields)._audioTargetVolumes;
    if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,fVar3,
                 (MethodInfo_4AB5450 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
      pSVar1 = (__this->fields)._audioStartTimes;
      fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,fVar3
                   ,(MethodInfo_4AB5450 *)
                    MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
        if (audio != (UnityEngine_AudioSource_o *)0x0) {
          pSVar1 = (__this->fields)._audioStartVolumes;
          fVar3 = UnityEngine_AudioSource__get_volume(audio,(MethodInfo *)0x0);
          if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,
                       fVar3,(MethodInfo_4AB5450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$StopAllAudio
// il2cpp: void Weather_BaseWeatherEffect__StopAllAudio (Weather_BaseWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x5853330
// eh: try 0x5853403..0x585342e -> pad 0x5853432 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x585344e..0x5853453 -> pad 0x5853577 cleanup
// eh: try 0x58534d4..0x5853572 -> pad 0x5853596 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x585357a..0x5853584 -> pad 0x58535e7 catch (...) [compiler noexcept guard]
// eh: try 0x58535ae..0x58535b3 -> pad 0x58535d2 cleanup
// eh: try 0x58535d5..0x58535df -> pad 0x58535e7 catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5853430: jmp 0x5853432
// asm:   0x5853432: mov r14, rax
// asm:   0x5853435: cmp edx, 1
// asm:   0x5853438: jne 0x585357a
// asm:   0x585343e: mov rdi, r14
// asm:   0x5853441: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5853446: mov rbx, qword ptr [rax]
// asm:   0x5853449: mov qword ptr [rsp + 0x18], rbx
// asm:   0x585344e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5853453: lea rax, [rip + 0x1a3a25e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x585345a: mov rsi, qword ptr [rax]
// asm:   0x585345d: mov rdi, rsp
// asm:   0x5853460: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5853465: test rbx, rbx
// asm:   0x5853468: jne 0x58535ca
// asm:   0x5853577: mov r14, rax
// asm:   0x585357a: lea rdi, [rsp + 0x18]
// asm:   0x585357f: call 0x2fce5d0  ; il2cpp_runtime_helper_02fce5d0()
// asm:   0x5853584: jmp 0x58535df
// asm:   0x5853586: jmp 0x5853596
// asm:   0x5853588: jmp 0x5853596
// asm:   0x585358a: jmp 0x5853596
// asm:   0x585358c: jmp 0x5853596
// asm:   0x585358e: jmp 0x5853596
// asm:   0x5853590: jmp 0x5853596
// asm:   0x5853592: jmp 0x5853596
// asm:   0x5853594: jmp 0x5853596
// asm:   0x5853596: mov r14, rax
// asm:   0x5853599: cmp edx, 1
// asm:   0x585359c: jne 0x58535d5
// asm:   0x585359e: mov rdi, r14
// asm:   0x58535a1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58535a6: mov rbx, qword ptr [rax]
// asm:   0x58535a9: mov qword ptr [rsp + 0x18], rbx
// asm:   0x58535ae: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58535b3: lea rax, [rip + 0x1a3a0fe]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x58535ba: mov rsi, qword ptr [rax]
// asm:   0x58535bd: mov rdi, rsp
// asm:   0x58535c0: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x58535c5: test rbx, rbx
// asm:   0x58535c8: je 0x5853550
// asm:   0x58535ca: mov rdi, rbx
// asm:   0x58535cd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58535d2: mov r14, rax
// asm:   0x58535d5: lea rdi, [rsp + 0x18]
// asm:   0x58535da: call 0x2fce600  ; il2cpp_runtime_helper_02fce600()
// asm:   0x58535df: mov rdi, r14
// asm:   0x58535e2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58535e7: mov rdi, rax
// asm:   0x58535ea: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_BaseWeatherEffect__StopAllAudio
               (Weather_BaseWeatherEffect_o *__this,bool fadeOut,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *pSVar1;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar2;
  Il2CppObject *key;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  undefined1 local_40 [16];
  UnityEngine_AudioSource_o *local_30;
  
  if (Il2CppMethodInitialized_07545064 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    Il2CppMethodInitialized_07545064 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (fadeOut) {
    pSVar1 = (__this->fields)._audioSources;
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
label_05853572:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar1,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    local_58.fields._current = (Il2CppObject *)local_30;
    local_58.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_58.fields._index = local_40._8_4_;
    local_58.fields._version = local_40._12_4_;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
      if (!bVar3) break;
      (*(__this->klass->vtable)._16_SetAudioVolume.methodPtr)
                (__this,(UnityEngine_AudioSource_o *)local_58.fields._current,0.0,
                 (__this->klass->vtable)._16_SetAudioVolume.method);
    }
  }
  else {
    pSVar1 = (__this->fields)._audioSources;
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) goto label_05853572;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar1,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    local_58.fields._current = (Il2CppObject *)local_30;
    local_58.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_58.fields._index = local_40._8_4_;
    local_58.fields._version = local_40._12_4_;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
      key = local_58.fields._current;
      if (!bVar3) break;
      if ((UnityEngine_AudioSource_o *)local_58.fields._current == (UnityEngine_AudioSource_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_AudioSource__Stop_68b0850
                ((UnityEngine_AudioSource_o *)local_58.fields._current,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._audioTargetVolumes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,0.0,
                 (MethodInfo_4AB5450 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
      pSVar2 = (__this->fields)._audioStartTimes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,0.0,
                 (MethodInfo_4AB5450 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
      pSVar2 = (__this->fields)._audioStartVolumes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,0.0,
                 (MethodInfo_4AB5450 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_58,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
  return;
}


// Weather.BaseWeatherEffect$$ClampParticles
// il2cpp: float Weather_BaseWeatherEffect__ClampParticles (Weather_BaseWeatherEffect_o* __this, float count, const MethodInfo* method);
// 0x58535f0

float Weather_BaseWeatherEffect__ClampParticles
                (Weather_BaseWeatherEffect_o *__this,float count,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = count * (__this->fields)._particleMultiplier;
  fVar1 = (__this->fields)._maxParticles;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  return fVar2;
}


// Weather.BaseWeatherEffect$$LateUpdate
// il2cpp: void Weather_BaseWeatherEffect__LateUpdate (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x5853600

void Weather_BaseWeatherEffect__LateUpdate(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields)._parent;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = (__this->fields)._transform;
    value = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._20_UpdateAudio.methodPtr)
                (__this,(__this->klass->vtable)._20_UpdateAudio.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$UpdateAudio
// il2cpp: void Weather_BaseWeatherEffect__UpdateAudio (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x5853650
// eh: try 0x5853724..0x58538ed -> pad 0x5853918 (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5853930..0x5853935 -> pad 0x585395a cleanup
// eh: try 0x585395d..0x5853967 -> pad 0x585396f catch (...) [compiler noexcept guard]
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58538f2: jmp 0x5853918
// asm:   0x58538f4: jmp 0x5853918
// asm:   0x58538f6: jmp 0x5853918
// asm:   0x58538f8: jmp 0x5853918
// asm:   0x58538fa: jmp 0x5853918
// asm:   0x58538fc: jmp 0x5853918
// asm:   0x58538fe: jmp 0x5853918
// asm:   0x5853900: jmp 0x5853918
// asm:   0x5853902: jmp 0x5853918
// asm:   0x5853904: jmp 0x5853918
// asm:   0x5853906: jmp 0x5853918
// asm:   0x5853908: jmp 0x5853918
// asm:   0x585390a: jmp 0x5853918
// asm:   0x585390c: jmp 0x5853918
// asm:   0x585390e: jmp 0x5853918
// asm:   0x5853910: jmp 0x5853918
// asm:   0x5853912: jmp 0x5853918
// asm:   0x5853914: jmp 0x5853918
// asm:   0x5853916: jmp 0x5853918
// asm:   0x5853918: mov rbx, rax
// asm:   0x585391b: cmp edx, 1
// asm:   0x585391e: jne 0x585395d
// asm:   0x5853920: mov rdi, rbx
// asm:   0x5853923: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5853928: mov rbx, qword ptr [rax]
// asm:   0x585392b: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5853930: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5853935: lea rax, [rip + 0x1a39d7c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x585393c: mov rsi, qword ptr [rax]
// asm:   0x585393f: lea rdi, [rsp + 0x10]
// asm:   0x5853944: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5853949: test rbx, rbx
// asm:   0x585394c: je 0x58538c0
// asm:   0x5853952: mov rdi, rbx
// asm:   0x5853955: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585395a: mov rbx, rax
// asm:   0x585395d: lea rdi, [rsp + 0x30]
// asm:   0x5853962: call 0x2fce630  ; il2cpp_runtime_helper_02fce630()
// asm:   0x5853967: mov rdi, rbx
// asm:   0x585396a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585396f: mov rdi, rax
// asm:   0x5853972: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_BaseWeatherEffect__UpdateAudio(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  Il2CppObject *__this_01;
  bool bVar2;
  float fVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_48 [16];
  UnityEngine_AudioSource_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07545065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    Il2CppMethodInitialized_07545065 = '\x01';
  }
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
  SStack_68.fields._current = (Il2CppObject *)pUStack_38;
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
  SStack_68.fields._index = auStack_48._8_4_;
  SStack_68.fields._version = auStack_48._12_4_;
  auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_48._8_8_ = &SStack_68;
  while( true ) {
    while( true ) {
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&SStack_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
        __this_01 = SStack_68.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&SStack_68,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
          return;
        }
        pSVar1 = (__this->fields)._audioTargetVolumes;
        if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           SStack_68.fields._current,
                           (MethodInfo_4AB53E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
        if ((fVar3 != 0.0) || (NAN(fVar3))) break;
        if ((UnityEngine_AudioSource_o *)__this_01 == (UnityEngine_AudioSource_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = UnityEngine_AudioSource__get_isPlaying
                          ((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0);
        if (bVar2) {
          fVar3 = (*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                            (__this,(UnityEngine_AudioSource_o *)__this_01,
                             (__this->klass->vtable)._21_GetLerpedVolume.method);
          UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)__this_01,fVar3,(MethodInfo *)0x0);
          fVar3 = UnityEngine_AudioSource__get_volume
                            ((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0);
          if ((fVar3 == 0.0) && (!NAN(fVar3))) {
            UnityEngine_AudioSource__Pause((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0);
          }
        }
      }
      if ((UnityEngine_AudioSource_o *)__this_01 == (UnityEngine_AudioSource_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = UnityEngine_AudioSource__get_isPlaying((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0)
      ;
      if (!bVar2) break;
      fVar3 = UnityEngine_AudioSource__get_volume((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._audioTargetVolumes;
      if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar4 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,__this_01,
                         (MethodInfo_4AB53E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
      if ((fVar3 != fVar4) || (NAN(fVar3) || NAN(fVar4))) {
        fVar3 = (*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                          (__this,(UnityEngine_AudioSource_o *)__this_01,
                           (__this->klass->vtable)._21_GetLerpedVolume.method);
        UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)__this_01,fVar3,(MethodInfo *)0x0);
      }
    }
    pSVar1 = (__this->fields)._audioStartTimes;
    fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,__this_01,fVar3,
               (MethodInfo_4AB5450 *)
               MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    pSVar1 = (__this->fields)._audioStartVolumes;
    if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) break;
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,__this_01,0.0,
               (MethodInfo_4AB5450 *)
               MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    fVar3 = (*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                      (__this,(UnityEngine_AudioSource_o *)__this_01,
                       (__this->klass->vtable)._21_GetLerpedVolume.method);
    UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)__this_01,fVar3,(MethodInfo *)0x0);
    UnityEngine_AudioSource__Play_68b06a0((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$GetLerpedVolume
// il2cpp: float Weather_BaseWeatherEffect__GetLerpedVolume (Weather_BaseWeatherEffect_o* __this, UnityEngine_AudioSource_o* audio, const MethodInfo* method);
// 0x5853980

float Weather_BaseWeatherEffect__GetLerpedVolume
                (Weather_BaseWeatherEffect_o *__this,UnityEngine_AudioSource_o *audio,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07545066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    Il2CppMethodInitialized_07545066 = '\x01';
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  pSVar1 = (__this->fields)._audioStartTimes;
  if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
    fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,
                       (MethodInfo_4AB53E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    fVar4 = (*(__this->klass->vtable)._5_get__audioFadeTime.methodPtr)
                      (__this,(__this->klass->vtable)._5_get__audioFadeTime.method);
    pSVar1 = (__this->fields)._audioStartVolumes;
    if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
      fVar5 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio
                         ,(MethodInfo_4AB53E0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
      pSVar1 = (__this->fields)._audioTargetVolumes;
      if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        fVar4 = (fVar2 - fVar3) / fVar4;
        fVar2 = 1.0;
        if (fVar4 <= 1.0) {
          fVar2 = fVar4;
        }
        fVar2 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar2);
        fVar4 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (Il2CppObject *)audio,
                           (MethodInfo_4AB53E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
        fVar3 = 0.0;
        if (0.0 <= fVar2) {
          fVar3 = fVar2;
        }
        return (fVar4 - fVar5) * fVar3 + fVar5;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$.ctor
// il2cpp: void Weather_BaseWeatherEffect___ctor (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x5853a80

void Weather_BaseWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  System_Collections_Generic_List_AudioSource__o *__this_01;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_AudioSource_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AudioSource_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ParticleSystem);
    Il2CppMethodInitialized_07545067 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
  (__this->fields)._particleSystems = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._particleSystems);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AudioSource);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AudioSource_ctor);
  (__this->fields)._audioSources = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSources);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_ctor);
  (__this->fields)._audioTargetVolumes = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioTargetVolumes);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_ctor);
  (__this->fields)._audioStartTimes = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioStartTimes);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_ctor);
  (__this->fields)._audioStartVolumes = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioStartVolumes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


