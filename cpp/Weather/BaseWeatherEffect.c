// Type: Weather.BaseWeatherEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/BaseWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/BaseWeatherEffect.cs
// --------------------------------

// Weather.BaseWeatherEffect.<>c$$.cctor
// il2cpp: void Weather_BaseWeatherEffect___c___cctor (const MethodInfo* method);
// 0x181db1420

void Weather_BaseWeatherEffect___c___cctor(MethodInfo *method)

{
  Weather_BaseWeatherEffect___c_o *__this;
  
  if (Il2CppMethodInitialized_184344910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_BaseWeatherEffect_c);
    Il2CppMethodInitialized_184344910 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9,__this);
  return;
}


// Weather.BaseWeatherEffect.<>c$$.ctor
// il2cpp: void Weather_BaseWeatherEffect___c___ctor (Weather_BaseWeatherEffect___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Weather_BaseWeatherEffect___c___ctor(Weather_BaseWeatherEffect___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_0
// il2cpp: System_String_o* Weather_BaseWeatherEffect___c___Setup_b__21_0 (Weather_BaseWeatherEffect___c_o* __this, UnityEngine_ParticleSystem_o* x, const MethodInfo* method);
// 0x181db0f00

System_String_o*
Weather_BaseWeatherEffect___c___Setup_b__21_0(Weather_BaseWeatherEffect___c_o* __this, UnityEngine_ParticleSystem_o* x, MethodInfo* method)

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


// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_1
// il2cpp: System_String_o* Weather_BaseWeatherEffect___c___Setup_b__21_1 (Weather_BaseWeatherEffect___c_o* __this, UnityEngine_AudioSource_o* x, const MethodInfo* method);
// 0x181db0f00

System_String_o*
Weather_BaseWeatherEffect___c___Setup_b__21_1(Weather_BaseWeatherEffect___c_o* __this, UnityEngine_AudioSource_o* x, MethodInfo* method)

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
// 0x180573ef0

void
Weather_BaseWeatherEffect__WaitAndDisable_d__17___ctor(Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.IDisposable.Dispose
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_IDisposable_Dispose (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_IDisposable_Dispose(Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, MethodInfo* method)

{
  return;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$MoveNext
// il2cpp: bool Weather_BaseWeatherEffect__WaitAndDisable_d__17__MoveNext (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x181db1500

bool Weather_BaseWeatherEffect__WaitAndDisable_d__17__MoveNext
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_BaseWeatherEffect_o *__this_00;
  Weather_BaseWeatherEffect_c *pWVar2;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  float amplificationFactor;
  
  if (Il2CppMethodInitialized_184344911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184344911 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (Weather_BaseWeatherEffect_o *)0x0) {
      pWVar2 = __this_00->klass;
      (__this_00->fields)._isDisabling = true;
      (*(pWVar2->vtable)._17_StopAllAudio.methodPtr)(__this_00,true,(pWVar2->vtable)._17_StopAllAudio.method);
      (*(__this_00->klass->vtable)._13_StopAllParticleSystems.methodPtr)
                (__this_00,(__this_00->klass->vtable)._13_StopAllParticleSystems.method);
      amplificationFactor =
           (*(__this_00->klass->vtable)._5_get__audioFadeTime.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._5_get__audioFadeTime.method);
      __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor
                (__this_01,amplificationFactor,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((__this_00 != (Weather_BaseWeatherEffect_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      (__this_00->fields)._isDisabling = false;
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_Reset (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x181db1620

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
// 0x180573e90

Il2CppObject*
Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_get_Current(Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.BaseWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_BaseWeatherEffect__get__positionOffset (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x180528050

UnityEngine_Vector3_o
Weather_BaseWeatherEffect__get__positionOffset(Weather_BaseWeatherEffect_o* __this, MethodInfo* method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar2->zeroVector).fields.x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Weather.BaseWeatherEffect$$get__audioFadeTime
// il2cpp: float Weather_BaseWeatherEffect__get__audioFadeTime (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x181d9f790

float
Weather_BaseWeatherEffect__get__audioFadeTime(Weather_BaseWeatherEffect_o* __this, MethodInfo* method)

{
  return 2.0;
}


// Weather.BaseWeatherEffect$$Disable
// il2cpp: void Weather_BaseWeatherEffect__Disable (Weather_BaseWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x181d9e3d0

void Weather_BaseWeatherEffect__Disable(Weather_BaseWeatherEffect_o *__this,bool fadeOut,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *routine;
  
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if (fadeOut) {
        if ((__this->fields)._isDisabling == false) {
          if (Il2CppMethodInitialized_184344905 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17);
            Il2CppMethodInitialized_184344905 = '\x01';
          }
          routine = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
          (routine->fields).__1__state = 0;
          (routine->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._17_StopAllAudio.methodPtr)
                  (__this,false,(__this->klass->vtable)._17_StopAllAudio.method);
        (*(__this->klass->vtable)._13_StopAllParticleSystems.methodPtr)
                  (__this,(__this->klass->vtable)._13_StopAllParticleSystems.method);
        pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_181d9e4cc;
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        (__this->fields)._isDisabling = false;
      }
    }
    return;
  }
label_181d9e4cc:
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$Enable
// il2cpp: void Weather_BaseWeatherEffect__Enable (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x181d9e4e0

void Weather_BaseWeatherEffect__Enable(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_181d9e529;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      (__this->fields)._isDisabling = false;
    }
    return;
  }
label_181d9e529:
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$WaitAndDisable
// il2cpp: System_Collections_IEnumerator_o* Weather_BaseWeatherEffect__WaitAndDisable (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x181d9f5c0

System_Collections_IEnumerator_o *
Weather_BaseWeatherEffect__WaitAndDisable(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_184344905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17);
    Il2CppMethodInitialized_184344905 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Weather.BaseWeatherEffect$$Randomize
// il2cpp: void Weather_BaseWeatherEffect__Randomize (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_BaseWeatherEffect__Randomize(Weather_BaseWeatherEffect_o* __this, MethodInfo* method)

{
  return;
}


// Weather.BaseWeatherEffect$$SetParent
// il2cpp: void Weather_BaseWeatherEffect__SetParent (Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x180ace2f0

void
Weather_BaseWeatherEffect__SetParent(Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, MethodInfo* method)

{
  (__this->fields)._parent = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent,value);
  return;
}


// Weather.BaseWeatherEffect$$SetLevel
// il2cpp: void Weather_BaseWeatherEffect__SetLevel (Weather_BaseWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x180584cb0

void
Weather_BaseWeatherEffect__SetLevel(Weather_BaseWeatherEffect_o* __this, float level, MethodInfo* method)

{
  (__this->fields)._level = value;
  return;
}


// Weather.BaseWeatherEffect$$Setup
// il2cpp: void Weather_BaseWeatherEffect__Setup (Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x181d9ea30
// eh: try 0x181d9edf0..0x181d9ef55 -> pad 0x183315ba0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9edee: nop 
// asm:   0x181d9eee5: mov rdx, qword ptr [rip + 0x22f0f5c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x181d9eeec: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181d9eef1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181d9eef6: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181d9eefb: test rcx, rcx
// asm:   0x181d9eefe: jne 0x181d9ef55
// asm:   0x181d9ef00: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x181d9ef08: mov r15, qword ptr [rsp + 0xc8]
// asm:   0x181d9ef55: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315ba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315ba5: push rbp
// asm:   0x183315ba6: sub rsp, 0x20
// asm:   0x183315baa: mov rbp, rdx
// asm:   0x183315bad: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315bb1: mov rcx, qword ptr [rax]
// asm:   0x183315bb4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183315bb8: movabs rax, 0
// asm:   0x183315bc2: add rsp, 0x20
// asm:   0x183315bc6: pop rbp
// asm:   0x183315bc7: ret 

void Weather_BaseWeatherEffect__Setup
               (Weather_BaseWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  bool bVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Object_array *pSVar7;
  System_Func_ParticleSystem__string__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar8;
  System_Collections_Generic_List_ParticleSystem__o *pSVar9;
  System_Func_AudioSource__string__o *__this_01;
  System_Collections_Generic_List_AudioSource__o *value;
  UnityEngine_Vector3_o *pUVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_o local_78;
  undefined8 local_68;
  System_Collections_Generic_List_Enumerator_object__o *local_60;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_object__o local_38;
  
  if (Il2CppMethodInitialized_184344906 == '\0') {
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
    Il2CppMethodInitialized_184344906 = '\x01';
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transform,pUVar6);
  (__this->fields)._parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent,parent);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).WeatherEffects, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == 3) {
      fVar11 = 1.0;
      fVar12 = 500.0;
    }
    else {
      fVar11 = 0.7;
      fVar12 = 200.0;
    }
    (__this->fields)._maxParticles = fVar12;
    (__this->fields)._particleMultiplier = fVar11;
    pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_665370 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    if ((TypeInfo_Weather_BaseWeatherEffect_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
    }
    __this_00 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9__21_0;
    if (__this_00 == (System_Func_ParticleSystem__string__o *)0x0) {
      if ((TypeInfo_Weather_BaseWeatherEffect_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
      }
      pIVar3 = (Il2CppObject *)TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ParticleSystem_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,pIVar3,
                 (intptr_t)MethodInfo_Weather_BaseWeatherEffect_c_Setup_b__21_0,(MethodInfo_16E67D0 *)0x0);
      TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9__21_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9__21_0,__this_00);
    }
    pSVar8 = System_Linq_Enumerable__OrderBy_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                        (System_Func_TSource__TKey__o *)__this_00,
                        (MethodInfo_6C1360 *)MethodInfo_System_Linq_Enumerable_OrderBy_ParticleSystem_string);
    pSVar9 = (System_Collections_Generic_List_ParticleSystem__o *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                        (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_ParticleSystem);
    (__this->fields)._particleSystems = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._particleSystems,pSVar9);
    pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_665370 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource);
    if ((TypeInfo_Weather_BaseWeatherEffect_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
    }
    __this_01 = TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9__21_1;
    if (__this_01 == (System_Func_AudioSource__string__o *)0x0) {
      if ((TypeInfo_Weather_BaseWeatherEffect_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_BaseWeatherEffect_c);
      }
      pIVar3 = (Il2CppObject *)TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AudioSource_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar3,
                 (intptr_t)MethodInfo_Weather_BaseWeatherEffect_c_Setup_b__21_1,(MethodInfo_16E67D0 *)0x0);
      TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9__21_1 = __this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_BaseWeatherEffect_c->static_fields->__9__21_1,__this_01);
    }
    pSVar8 = System_Linq_Enumerable__OrderBy_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                        (System_Func_TSource__TKey__o *)__this_01,
                        (MethodInfo_6C1360 *)MethodInfo_System_Linq_Enumerable_OrderBy_AudioSource_string);
    value = (System_Collections_Generic_List_AudioSource__o *)
            System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                       (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_AudioSource);
    (__this->fields)._audioSources = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSources,value);
    pSVar9 = (__this->fields)._particleSystems;
    if (pSVar9 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_58,(System_Collections_Generic_List_T__o *)pSVar9,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator)
      ;
      local_38.fields._list = local_58.fields._list;
      local_38.fields._index = local_58.fields._index;
      local_38.fields._version = local_58.fields._version;
      local_38.fields._current = local_58.fields._current;
      local_68 = 0;
      local_60 = &local_38;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_38,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
        pIVar3 = local_38.fields._current;
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_38,
                     MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
          (*(__this->klass->vtable)._17_StopAllAudio.methodPtr)
                    (__this,false,(__this->klass->vtable)._17_StopAllAudio.method);
          return;
        }
        if ((UnityEngine_ParticleSystem_o *)local_38.fields._current == (UnityEngine_ParticleSystem_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_ParticleSystem__Stop_2fca820
                  ((UnityEngine_ParticleSystem_o *)local_38.fields._current,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar3,(MethodInfo *)0x0);
        pUVar10 = (*(__this->klass->vtable)._4_get__positionOffset.methodPtr)
                            (&local_78,__this,(__this->klass->vtable)._4_get__positionOffset.method);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_88.x = (pUVar10->fields).x;
        local_88.y = (pUVar10->fields).y;
        local_88.z = (pUVar10->fields).z;
        UnityEngine_Transform__set_localPosition(pUVar6,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar3,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433de5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_18433de5b = '\x01';
        }
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
        pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
        local_58.fields._list = *(System_Collections_Generic_List_T__o **)&(pUVar4->identityQuaternion).fields
        ;
        local_58.fields._index = (int32_t)(pUVar4->identityQuaternion).fields.z;
        local_58.fields._version = (int32_t)(pUVar4->identityQuaternion).fields.w;
        UnityEngine_Transform__set_localRotation
                  (pUVar6,(UnityEngine_Quaternion_o *)&local_58,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$SetActiveParticleSystem
// il2cpp: void Weather_BaseWeatherEffect__SetActiveParticleSystem (Weather_BaseWeatherEffect_o* __this, int32_t index, const MethodInfo* method);
// 0x181d9e770
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9e7bd: nop dword ptr [rax]
// asm:   0x181d9e846: jmp 0x181d9e7c0

void Weather_BaseWeatherEffect__SetActiveParticleSystem
               (Weather_BaseWeatherEffect_o *__this,int32_t index,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ParticleSystem__o *pSVar2;
  UnityEngine_ParticleSystem_o *pUVar3;
  int index_00;
  
  if (Il2CppMethodInitialized_184344907 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
    Il2CppMethodInitialized_184344907 = '\x01';
  }
  pSVar2 = (__this->fields)._particleSystems;
  index_00 = 0;
  if (pSVar2 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    while( true ) {
      if ((pSVar2->fields)._size <= index_00) {
        return;
      }
      pSVar2 = (__this->fields)._particleSystems;
      if (pSVar2 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) break;
      if (index_00 == index) {
        pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
        if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) break;
        bVar1 = UnityEngine_ParticleSystem__get_isPlaying(pUVar3,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = (__this->fields)._particleSystems;
          if ((pSVar2 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) ||
             (pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item),
             pUVar3 == (UnityEngine_ParticleSystem_o *)0x0)) break;
          UnityEngine_ParticleSystem__Play_2fca570(pUVar3,(MethodInfo *)0x0);
        }
      }
      else {
        pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,index_00,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
        if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) break;
        UnityEngine_ParticleSystem__Stop_2fca820(pUVar3,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields)._particleSystems;
      index_00 = index_00 + 1;
      if (pSVar2 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$StopAllParticleSystems
// il2cpp: void Weather_BaseWeatherEffect__StopAllParticleSystems (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x181d9f1d0
// eh: try 0x181d9f270..0x181d9f2d0 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9f26f: nop 
// asm:   0x181d9f2a9: mov rdx, qword ptr [rip + 0x22f0b98]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x181d9f2b0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181d9f2b5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181d9f2ba: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181d9f2bf: test rcx, rcx
// asm:   0x181d9f2c2: jne 0x181d9f2d0
// asm:   0x181d9f2d0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Weather_BaseWeatherEffect__StopAllParticleSystems(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_ParticleSystem_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344908 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    Il2CppMethodInitialized_184344908 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._particleSystems;
  if (__this_00 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
        return;
      }
      if ((UnityEngine_ParticleSystem_o *)local_28.fields._current == (UnityEngine_ParticleSystem_o *)0x0)
      break;
      UnityEngine_ParticleSystem__Stop_2fca820
                ((UnityEngine_ParticleSystem_o *)local_28.fields._current,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$SetActiveAudio
// il2cpp: void Weather_BaseWeatherEffect__SetActiveAudio (Weather_BaseWeatherEffect_o* __this, int32_t index, float volume, const MethodInfo* method);
// 0x181d9e6d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9e739: movaps xmm2, xmm6
// asm:   0x181d9e74c: jmp 0x181d9e715

void Weather_BaseWeatherEffect__SetActiveAudio
               (Weather_BaseWeatherEffect_o *__this,int32_t index,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *pSVar1;
  int iVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184344909 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_get_Count);
    Il2CppMethodInitialized_184344909 = '\x01';
  }
  pSVar1 = (__this->fields)._audioSources;
  iVar2 = 0;
  while( true ) {
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar1->fields)._size <= iVar2) break;
    fVar3 = volume;
    if (iVar2 != index) {
      fVar3 = 0.0;
    }
    (*(__this->klass->vtable)._15_SetAudioVolume.methodPtr)
              (__this,iVar2,fVar3,(__this->klass->vtable)._15_SetAudioVolume.method);
    pSVar1 = (__this->fields)._audioSources;
    iVar2 = iVar2 + 1;
  }
  return;
}


// Weather.BaseWeatherEffect$$SetAudioVolume
// il2cpp: void Weather_BaseWeatherEffect__SetAudioVolume (Weather_BaseWeatherEffect_o* __this, int32_t index, float volume, const MethodInfo* method);
// 0x181d9e870

void Weather_BaseWeatherEffect__SetAudioVolume
               (Weather_BaseWeatherEffect_o *__this,int32_t index,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  UnityEngine_AudioSource_o *pUVar1;
  
  if (Il2CppMethodInitialized_18434490a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
    Il2CppMethodInitialized_18434490a = '\x01';
  }
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    pUVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
    (*(__this->klass->vtable)._16_SetAudioVolume.methodPtr)
              (__this,pUVar1,volume,(__this->klass->vtable)._16_SetAudioVolume.method);
    return;
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$SetAudioVolume
// il2cpp: void Weather_BaseWeatherEffect__SetAudioVolume (Weather_BaseWeatherEffect_o* __this, UnityEngine_AudioSource_o* audio, float volume, const MethodInfo* method);
// 0x181d9e8f0

void Weather_BaseWeatherEffect__SetAudioVolume_1d9e8f0
               (Weather_BaseWeatherEffect_o *__this,UnityEngine_AudioSource_o *audio,float volume,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18434490b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    Il2CppMethodInitialized_18434490b = '\x01';
  }
  if (volume < 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 1.0;
    if (volume <= 1.0) {
      fVar3 = volume;
    }
  }
  pSVar1 = (__this->fields)._audioTargetVolumes;
  if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
    fVar2 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,
                       (MethodInfo_1488BA0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    if (fVar2 == fVar3) {
      return;
    }
    pSVar1 = (__this->fields)._audioTargetVolumes;
    if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,fVar3,
                 (MethodInfo_1488DA0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
      if (fVar3 != 0.0) {
        return;
      }
      pSVar1 = (__this->fields)._audioStartTimes;
      fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if ((pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) &&
         (System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,
                     fVar3,(MethodInfo_1488DA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item),
         audio != (UnityEngine_AudioSource_o *)0x0)) {
        pSVar1 = (__this->fields)._audioStartVolumes;
        fVar3 = UnityEngine_AudioSource__get_volume(audio,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,
                     fVar3,(MethodInfo_1488DA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$StopAllAudio
// il2cpp: void Weather_BaseWeatherEffect__StopAllAudio (Weather_BaseWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x181d9ef60
// eh: try 0x181d9f024..0x181d9f1c2 -> pad 0x183317f30 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9f06a: mov rdx, qword ptr [rip + 0x22d5a27]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x181d9f071: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181d9f076: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181d9f07b: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181d9f080: test rcx, rcx
// asm:   0x181d9f083: jne 0x181d9f1a6
// asm:   0x181d9f089: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181d9f178: mov rdx, qword ptr [rip + 0x22d5919]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x181d9f17f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181d9f184: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181d9f189: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181d9f18e: test rcx, rcx
// asm:   0x181d9f191: jne 0x181d9f1c2
// asm:   0x181d9f1a6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181d9f1c2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Weather_BaseWeatherEffect__StopAllAudio
               (Weather_BaseWeatherEffect_o *__this,bool fadeOut,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *pSVar1;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar2;
  Il2CppObject *key;
  bool bVar3;
  undefined1 local_38 [16];
  UnityEngine_AudioSource_o *local_28;
  System_Collections_Generic_List_Enumerator_object__o local_20;
  
  if (Il2CppMethodInitialized_18434490c == '\0') {
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
    Il2CppMethodInitialized_18434490c = '\x01';
  }
  local_20.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_20.fields._index = 0;
  local_20.fields._version = 0;
  local_20.fields._current = (Il2CppObject *)0x0;
  if (fadeOut) {
    pSVar1 = (__this->fields)._audioSources;
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
label_181d9f1c8:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    local_20.fields._index = local_38._8_4_;
    local_20.fields._version = local_38._12_4_;
    local_20.fields._current = (Il2CppObject *)local_28;
    local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_38._8_8_ = &local_20;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_20,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
      if (!bVar3) break;
      (*(__this->klass->vtable)._16_SetAudioVolume.methodPtr)
                (__this,(UnityEngine_AudioSource_o *)local_20.fields._current,0.0,
                 (__this->klass->vtable)._16_SetAudioVolume.method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
               MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
  }
  else {
    pSVar1 = (__this->fields)._audioSources;
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) goto label_181d9f1c8;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    local_20.fields._index = local_38._8_4_;
    local_20.fields._version = local_38._12_4_;
    local_20.fields._current = (Il2CppObject *)local_28;
    local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_38._8_8_ = &local_20;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_20,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
      key = local_20.fields._current;
      if (!bVar3) break;
      if ((UnityEngine_AudioSource_o *)local_20.fields._current == (UnityEngine_AudioSource_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_AudioSource__Stop_2eb4660
                ((UnityEngine_AudioSource_o *)local_20.fields._current,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._audioTargetVolumes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,0.0,
                 (MethodInfo_1488DA0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
      pSVar2 = (__this->fields)._audioStartTimes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,0.0,
                 (MethodInfo_1488DA0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
      pSVar2 = (__this->fields)._audioStartVolumes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,0.0,
                 (MethodInfo_1488DA0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
               MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
  }
  return;
}


// Weather.BaseWeatherEffect$$ClampParticles
// il2cpp: float Weather_BaseWeatherEffect__ClampParticles (Weather_BaseWeatherEffect_o* __this, float count, const MethodInfo* method);
// 0x181d9e3c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9e3c0: nop 

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
// 0x181d9e650

void Weather_BaseWeatherEffect__LateUpdate(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar1;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields)._parent;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = (__this->fields)._transform;
    pUVar1 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      local_28.x = (pUVar1->fields).x;
      local_28.y = (pUVar1->fields).y;
      local_28.z = (pUVar1->fields).z;
      UnityEngine_Transform__set_position(__this_01,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._20_UpdateAudio.methodPtr)
                (__this,(__this->klass->vtable)._20_UpdateAudio.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$UpdateAudio
// il2cpp: void Weather_BaseWeatherEffect__UpdateAudio (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x181d9f2e0
// eh: try 0x181d9f3a8..0x181d9f5a6 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9f554: mov rdx, qword ptr [rip + 0x22d553d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x181d9f55b: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181d9f560: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181d9f565: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181d9f56a: test rcx, rcx
// asm:   0x181d9f56d: jne 0x181d9f5a6
// asm:   0x181d9f5a6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Weather_BaseWeatherEffect__UpdateAudio(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  Il2CppObject *__this_01;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined1 local_80 [16];
  UnityEngine_AudioSource_o *local_70;
  System_Collections_Generic_List_Enumerator_object__o local_68 [3];
  
  if (Il2CppMethodInitialized_18434490d == '\0') {
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
    Il2CppMethodInitialized_18434490d = '\x01';
  }
  local_68[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68[0].fields._index = 0;
  local_68[0].fields._version = 0;
  local_68[0].fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
  local_68[0].fields._list = (System_Collections_Generic_List_T__o *)local_80._0_8_;
  local_68[0].fields._index = local_80._8_4_;
  local_68[0].fields._version = local_80._12_4_;
  local_68[0].fields._current = (Il2CppObject *)local_70;
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_8_ = local_68;
  while( true ) {
    while( true ) {
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (local_68,(MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext
                          );
        __this_01 = local_68[0].fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
                     MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
          return;
        }
        pSVar1 = (__this->fields)._audioTargetVolumes;
        if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           local_68[0].fields._current,
                           (MethodInfo_1488BA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
        if (fVar3 != 0.0) break;
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
          if (fVar3 == 0.0) {
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
                         (MethodInfo_1488BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
      if (fVar3 != fVar4) {
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
               (MethodInfo_1488DA0 *)
               MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    pSVar1 = (__this->fields)._audioStartVolumes;
    if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) break;
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,__this_01,0.0,
               (MethodInfo_1488DA0 *)
               MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_set_Item);
    fVar3 = (*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                      (__this,(UnityEngine_AudioSource_o *)__this_01,
                       (__this->klass->vtable)._21_GetLerpedVolume.method);
    UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)__this_01,fVar3,(MethodInfo *)0x0);
    UnityEngine_AudioSource__Play_2eb4470((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$GetLerpedVolume
// il2cpp: float Weather_BaseWeatherEffect__GetLerpedVolume (Weather_BaseWeatherEffect_o* __this, UnityEngine_AudioSource_o* audio, const MethodInfo* method);
// 0x181d9e530

float Weather_BaseWeatherEffect__GetLerpedVolume
                (Weather_BaseWeatherEffect_o *__this,UnityEngine_AudioSource_o *audio,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_18434490e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    Il2CppMethodInitialized_18434490e = '\x01';
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  pSVar1 = (__this->fields)._audioStartTimes;
  if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
    fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,
                       (MethodInfo_1488BA0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
    fVar4 = (*(__this->klass->vtable)._5_get__audioFadeTime.methodPtr)
                      (__this,(__this->klass->vtable)._5_get__audioFadeTime.method);
    fVar4 = (fVar2 - fVar3) / fVar4;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (audio != (UnityEngine_AudioSource_o *)0x0) {
      fVar2 = UnityEngine_AudioSource__get_volume(audio,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._audioTargetVolumes;
      if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (Il2CppObject *)audio,
                           (MethodInfo_1488BA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_get_Item);
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        else if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
        return (fVar3 - fVar2) * fVar4 + fVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.BaseWeatherEffect$$.ctor
// il2cpp: void Weather_BaseWeatherEffect___ctor (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x181d9f630

void Weather_BaseWeatherEffect___ctor(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  System_Collections_Generic_List_AudioSource__o *__this_01;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434490f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_AudioSource_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AudioSource_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ParticleSystem);
    Il2CppMethodInitialized_18434490f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
  (__this->fields)._particleSystems = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._particleSystems,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AudioSource);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AudioSource_ctor);
  (__this->fields)._audioSources = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSources,__this_01);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_ctor);
  (__this->fields)._audioTargetVolumes = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioTargetVolumes,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_ctor);
  (__this->fields)._audioStartTimes = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioStartTimes,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_AudioSource_float_ctor);
  (__this->fields)._audioStartVolumes = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioStartVolumes,pSVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


