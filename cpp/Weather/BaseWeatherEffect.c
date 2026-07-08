// Type: Weather.BaseWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/BaseWeatherEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/BaseWeatherEffect.cs  [CHANGED since prior version]
// --------------------------------

// Weather.BaseWeatherEffect.<>c$$.cctor
// il2cpp: void Weather_BaseWeatherEffect___c___cctor (const MethodInfo* method);
// 0x3d74930

void Weather_BaseWeatherEffect_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702630 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702630 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Weather.BaseWeatherEffect.<>c$$.ctor
// il2cpp: void Weather_BaseWeatherEffect___c___ctor (Weather_BaseWeatherEffect___c_o* __this, const MethodInfo* method);
// 0x3d749a0

void Weather_BaseWeatherEffect_<>c___ctor
               (Weather_BaseWeatherEffect___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_0
// il2cpp: System_String_o* Weather_BaseWeatherEffect___c___Setup_b__21_0 (Weather_BaseWeatherEffect___c_o* __this, UnityEngine_ParticleSystem_o* x, const MethodInfo* method);
// 0x3d749b0

System_String_o *
Weather_BaseWeatherEffect_<>c__<Setup>b__21_0
          (Weather_BaseWeatherEffect___c_o *__this,UnityEngine_ParticleSystem_o *x,
          MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if (x != (UnityEngine_ParticleSystem_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_1
// il2cpp: System_String_o* Weather_BaseWeatherEffect___c___Setup_b__21_1 (Weather_BaseWeatherEffect___c_o* __this, UnityEngine_AudioSource_o* x, const MethodInfo* method);
// 0x3d749e0

System_String_o *
Weather_BaseWeatherEffect_<>c__<Setup>b__21_1
          (Weather_BaseWeatherEffect___c_o *__this,UnityEngine_AudioSource_o *x,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if (x != (UnityEngine_AudioSource_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$.ctor
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17___ctor (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d734d0

void Weather_BaseWeatherEffect_<WaitAndDisable>d__17___ctor
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.IDisposable.Dispose
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_IDisposable_Dispose (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x3d74a10

void Weather_BaseWeatherEffect_<WaitAndDisable>d__17__System_IDisposable_Dispose
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$MoveNext
// il2cpp: bool Weather_BaseWeatherEffect__WaitAndDisable_d__17__MoveNext (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x3d74a20

bool_conflict
Weather_BaseWeatherEffect_<WaitAndDisable>d__17__MoveNext
          (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_BaseWeatherEffect_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  bool_conflict bVar2;
  float seconds;
  
  if (DAT_05702631 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05702631 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((__this_00 != (Weather_BaseWeatherEffect_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
      *(undefined1 *)&(__this_00->fields)._isDisabling = 0;
      return 0;
    }
LAB_03d74b33:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Weather_BaseWeatherEffect_o *)0x0) goto LAB_03d74b33;
    *(undefined1 *)&(__this_00->fields)._isDisabling = 1;
    (*(__this_00->klass->vtable)._17_StopAllAudio.methodPtr)
              (__this_00,1,(__this_00->klass->vtable)._17_StopAllAudio.method);
    (*(__this_00->klass->vtable)._13_StopAllParticleSystems.methodPtr)
              (__this_00,(__this_00->klass->vtable)._13_StopAllParticleSystems.method);
    seconds = (float)(*(__this_00->klass->vtable)._5_get__audioFadeTime.methodPtr)(__this_00);
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x3d74b40

Il2CppObject *
Weather_BaseWeatherEffect_<WaitAndDisable>d__17__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_Reset (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x3d74b50

void Weather_BaseWeatherEffect_<WaitAndDisable>d__17__System_Collections_IEnumerator_Reset
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_get_Current (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x3d74b90

Il2CppObject *
Weather_BaseWeatherEffect_<WaitAndDisable>d__17__System_Collections_IEnumerator_get_Current
          (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.BaseWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_BaseWeatherEffect__get__positionOffset (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d732b0

UnityEngine_Vector3_o
Weather_BaseWeatherEffect__get__positionOffset
          (Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
}


// Weather.BaseWeatherEffect$$get__audioFadeTime
// il2cpp: float Weather_BaseWeatherEffect__get__audioFadeTime (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d732f0

float Weather_BaseWeatherEffect__get__audioFadeTime
                (Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Weather.BaseWeatherEffect$$Disable
// il2cpp: void Weather_BaseWeatherEffect__Disable (Weather_BaseWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x3d73300

void Weather_BaseWeatherEffect__Disable
               (Weather_BaseWeatherEffect_o *__this,bool_conflict fadeOut,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Il2CppObject *__this_00;
  
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    if ((char)fadeOut == '\0') {
      UnityEngine_MonoBehaviour__StopAllCoroutines
                ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._17_StopAllAudio.methodPtr)
                (__this,0,(__this->klass->vtable)._17_StopAllAudio.method);
      (*(__this->klass->vtable)._13_StopAllParticleSystems.methodPtr)(__this);
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._isDisabling = 0;
        return;
      }
    }
    else {
      if ((char)(__this->fields)._isDisabling != '\0') {
        return;
      }
      if (DAT_05702625 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitAndDisable_d__17);
        DAT_05702625 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndDisable_d__17);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$Enable
// il2cpp: void Weather_BaseWeatherEffect__Enable (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d73480

void Weather_BaseWeatherEffect__Enable(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03d734c2;
      UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields)._isDisabling = 0;
    }
    return;
  }
LAB_03d734c2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$WaitAndDisable
// il2cpp: System_Collections_IEnumerator_o* Weather_BaseWeatherEffect__WaitAndDisable (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d73410

System_Collections_IEnumerator_o *
Weather_BaseWeatherEffect__WaitAndDisable(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05702625 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndDisable_d__17);
    DAT_05702625 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndDisable_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$Randomize
// il2cpp: void Weather_BaseWeatherEffect__Randomize (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d734f0

void Weather_BaseWeatherEffect__Randomize(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.BaseWeatherEffect$$SetParent
// il2cpp: void Weather_BaseWeatherEffect__SetParent (Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x3d73500

void Weather_BaseWeatherEffect__SetParent
               (Weather_BaseWeatherEffect_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  (__this->fields)._parent = parent;
  il2cpp_runtime_glue(&(__this->fields)._parent);
  return;
}


// Weather.BaseWeatherEffect$$SetLevel
// il2cpp: void Weather_BaseWeatherEffect__SetLevel (Weather_BaseWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x3d73510

void Weather_BaseWeatherEffect__SetLevel
               (Weather_BaseWeatherEffect_o *__this,float level,MethodInfo *method)

{
  (__this->fields)._level = level;
  return;
}


// Weather.BaseWeatherEffect$$Setup
// il2cpp: void Weather_BaseWeatherEffect__Setup (Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x3d73520

void Weather_BaseWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  float fVar1;
  long lVar2;
  UnityEngine_Quaternion_Fields *pUVar3;
  undefined8 uVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Object_array *pSVar7;
  System_Func_TSource__TKey__o *pSVar8;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar9;
  System_Collections_Generic_List_ParticleSystem__o *pSVar10;
  System_Collections_Generic_List_AudioSource__o *pSVar11;
  ulong uVar12;
  ulong uVar13;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  UnityEngine_ParticleSystem_o *__this_02;
  UnityEngine_ParticleSystem_o *pUVar16;
  undefined1 local_48 [16];
  UnityEngine_ParticleSystem_o *local_38;
  
  if (DAT_05702626 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AudioSource___GetComponentsInChildren_AudioSourc);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem___GetComponentsInChildren_Particl);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource__Or);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_UnityEngine_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_AudioSource__ToList_AudioSour);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_ParticleSystem__ToList_Partic);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_ParticleSystem__string);
    il2cpp_init_method_metadata(&TypeInfo_Func_AudioSource__string);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_ParticleSystem);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String__Setup_b__21_0);
    il2cpp_init_method_metadata(&MethodInfo_String__Setup_b__21_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702626 = '\x01';
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  (__this->fields)._transform = pUVar6;
  il2cpp_runtime_glue(&(__this->fields)._transform,pUVar6);
  (__this->fields)._parent = parent;
  il2cpp_runtime_glue(&(__this->fields)._parent,parent);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x98), lVar2 != 0)) {
    uVar12 = (ulong)(*(int *)(lVar2 + 0x14) == 3);
    fVar1 = *(float *)(&DAT_00cd0cd0 + uVar12 * 4);
    uVar13 = (ulong)(uint)fVar1;
    (__this->fields)._maxParticles = *(float *)(&DAT_00cd10b0 + uVar12 * 4);
    (__this->fields)._particleMultiplier = fVar1;
    pSVar7 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem___GetComponentsInChildren_Particl);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar8 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar8 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar8 == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_ParticleSystem__string);
      System_Func<object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar2 + 8) = pSVar8;
      il2cpp_runtime_glue(lVar2 + 8,pSVar8);
    }
    pSVar9 = System_Linq_Enumerable__OrderBy<object__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,pSVar8,
                        MethodInfo_IOrderedEnumerable_1_UnityEngine_ParticleSystem);
    pSVar10 = (System_Collections_Generic_List_ParticleSystem__o *)
              System_Linq_Enumerable__ToList<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,MethodInfo_List_1_UnityEngine_ParticleSystem__ToList_Partic);
    (__this->fields)._particleSystems = pSVar10;
    il2cpp_runtime_glue(&(__this->fields)._particleSystems,pSVar10);
    pSVar7 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_AudioSource___GetComponentsInChildren_AudioSourc);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar8 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar8 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar8 == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_AudioSource__string);
      System_Func<object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar2 + 0x10) = pSVar8;
      il2cpp_runtime_glue(lVar2 + 0x10,pSVar8);
    }
    pSVar9 = System_Linq_Enumerable__OrderBy<object__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,pSVar8,
                        MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource__Or);
    pSVar11 = (System_Collections_Generic_List_AudioSource__o *)
              System_Linq_Enumerable__ToList<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,MethodInfo_List_1_UnityEngine_AudioSource__ToList_AudioSour);
    (__this->fields)._audioSources = pSVar11;
    il2cpp_runtime_glue(&(__this->fields)._audioSources,pSVar11);
    pSVar10 = (__this->fields)._particleSystems;
    if (pSVar10 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_T__Enumerator_UnityEngine_ParticleSystem);
      pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar15 = (Il2CppType *)local_48._8_8_;
      __this_02 = local_38;
      while( true ) {
        __this_00.fields._8_8_ = pIVar15;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
        __this_00.fields._current = (Il2CppObject *)__this_02;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') {
          __this_01.fields._8_8_ = pIVar15;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
          __this_01.fields._current = (Il2CppObject *)__this_02;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          (*(__this->klass->vtable)._17_StopAllAudio.methodPtr)
                    (__this,0,(__this->klass->vtable)._17_StopAllAudio.method);
          return;
        }
        if (__this_02 == (UnityEngine_ParticleSystem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar16 = __this_02;
        UnityEngine_ParticleSystem__Stop(__this_02,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        uVar4 = (*(__this->klass->vtable)._4_get__positionOffset.methodPtr)(__this);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        value.fields.z = (float)uVar13;
        value.fields.x = (float)(int)uVar4;
        value.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
        UnityEngine_Transform__set_localPosition(pUVar6,value,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        __this_02 = pUVar16;
        if (DAT_056fde1e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Quaternion);
          DAT_056fde1e = '\x01';
          __this_02 = pUVar16;
        }
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
        pUVar3 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
        uVar13._0_4_ = pUVar3->z;
        uVar13._4_4_ = pUVar3->w;
        UnityEngine_Transform__set_localRotation
                  (pUVar6,(UnityEngine_Quaternion_o)*pUVar3,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$SetActiveParticleSystem
// il2cpp: void Weather_BaseWeatherEffect__SetActiveParticleSystem (Weather_BaseWeatherEffect_o* __this, int32_t index, const MethodInfo* method);
// 0x3d73aa0

void Weather_BaseWeatherEffect__SetActiveParticleSystem
               (Weather_BaseWeatherEffect_o *__this,int32_t index,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  int index_00;
  System_Collections_Generic_List_ParticleSystem__o *pSVar3;
  
  if (DAT_05702627 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_get_Item);
    DAT_05702627 = '\x01';
  }
  pSVar3 = (__this->fields)._particleSystems;
  if (pSVar3 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    index_00 = 0;
    if (0 < (pSVar3->fields)._size) {
      do {
        if (index == index_00) {
          pUVar2 = (UnityEngine_ParticleSystem_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_ParticleSystem_get_Item
                             );
          if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_03d73b76;
          bVar1 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') goto LAB_03d73b16;
          pSVar3 = (__this->fields)._particleSystems;
          if ((pSVar3 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) ||
             (pUVar2 = (UnityEngine_ParticleSystem_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                  MethodInfo_ParticleSystem_get_Item), pUVar2 == (UnityEngine_ParticleSystem_o *)0x0))
          goto LAB_03d73b76;
          UnityEngine_ParticleSystem__Play(pUVar2,(MethodInfo *)0x0);
          pSVar3 = (__this->fields)._particleSystems;
        }
        else {
          pUVar2 = (UnityEngine_ParticleSystem_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                              MethodInfo_ParticleSystem_get_Item);
          if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_03d73b76;
          UnityEngine_ParticleSystem__Stop(pUVar2,(MethodInfo *)0x0);
LAB_03d73b16:
          pSVar3 = (__this->fields)._particleSystems;
        }
        if (pSVar3 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto LAB_03d73b76;
        index_00 = index_00 + 1;
      } while (index_00 < (pSVar3->fields)._size);
    }
    return;
  }
LAB_03d73b76:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$StopAllParticleSystems
// il2cpp: void Weather_BaseWeatherEffect__StopAllParticleSystems (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d73b90

void Weather_BaseWeatherEffect__StopAllParticleSystems
               (Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  UnityEngine_ParticleSystem_o *__this_03;
  
  if (DAT_05702628 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_ParticleSystem);
    DAT_05702628 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_03 = (UnityEngine_ParticleSystem_o *)0x0;
  __this_00 = (__this->fields)._particleSystems;
  if (__this_00 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_ParticleSystem);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = (Il2CppObject *)__this_03;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
        return;
      }
      if (__this_03 == (UnityEngine_ParticleSystem_o *)0x0) break;
      UnityEngine_ParticleSystem__Stop(__this_03,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$SetActiveAudio
// il2cpp: void Weather_BaseWeatherEffect__SetActiveAudio (Weather_BaseWeatherEffect_o* __this, int32_t index, float volume, const MethodInfo* method);
// 0x3d73ce0

void Weather_BaseWeatherEffect__SetActiveAudio
               (Weather_BaseWeatherEffect_o *__this,int32_t index,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *pSVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  if (DAT_05702629 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05702629 = '\x01';
  }
  pSVar1 = (__this->fields)._audioSources;
  if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
LAB_03d73d78:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = 0;
  if (0 < (pSVar1->fields)._size) {
    do {
      fVar4 = volume;
      uVar2 = index;
      if (index != uVar3) {
        fVar4 = 0.0;
        uVar2 = uVar3;
      }
      (*(__this->klass->vtable)._15_SetAudioVolume.methodPtr)
                (fVar4,__this,(ulong)uVar2,(__this->klass->vtable)._15_SetAudioVolume.method);
      uVar3 = uVar3 + 1;
      pSVar1 = (__this->fields)._audioSources;
      if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) goto LAB_03d73d78;
    } while ((int)uVar3 < (pSVar1->fields)._size);
  }
  return;
}


// Weather.BaseWeatherEffect$$SetAudioVolume
// il2cpp: void Weather_BaseWeatherEffect__SetAudioVolume (Weather_BaseWeatherEffect_o* __this, int32_t index, float volume, const MethodInfo* method);
// 0x3d73d80

void Weather_BaseWeatherEffect__SetAudioVolume
               (Weather_BaseWeatherEffect_o *__this,int32_t index,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  Weather_BaseWeatherEffect_c *pWVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  
  if (DAT_0570262a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    DAT_0570262a = '\x01';
  }
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_AudioSource_get_Item);
    pWVar1 = __this->klass;
    vtable_dispatch = (pWVar1->vtable)._16_SetAudioVolume.methodPtr;
    (*vtable_dispatch)
              (volume,__this,pIVar2,(pWVar1->vtable)._16_SetAudioVolume.method,pWVar1,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$SetAudioVolume
// il2cpp: void Weather_BaseWeatherEffect__SetAudioVolume (Weather_BaseWeatherEffect_o* __this, UnityEngine_AudioSource_o* audio, float volume, const MethodInfo* method);
// 0x3d73df0

void Weather_BaseWeatherEffect__SetAudioVolume
               (Weather_BaseWeatherEffect_o *__this,UnityEngine_AudioSource_o *audio,float volume,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_0570262b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_0570262b = '\x01';
  }
  pSVar1 = (__this->fields)._audioTargetVolumes;
  if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
    fVar3 = 1.0;
    if (volume <= 1.0) {
      fVar3 = volume;
    }
    fVar3 = (float)(-(uint)(0.0 <= volume) & (uint)fVar3);
    fVar2 = System_Collections_Generic_Dictionary<object__float>__get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                       (Il2CppObject *)audio,MethodInfo_Single_get_Item);
    if ((fVar2 == fVar3) && (!NAN(fVar2) && !NAN(fVar3))) {
      return;
    }
    pSVar1 = (__this->fields)._audioTargetVolumes;
    if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
      System_Collections_Generic_Dictionary<object__float>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                 (Il2CppObject *)audio,fVar3,MethodInfo_Void_set_Item);
      if (fVar3 != 0.0) {
        return;
      }
      if (NAN(fVar3)) {
        return;
      }
      pSVar1 = (__this->fields)._audioStartTimes;
      fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if ((pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) &&
         (System_Collections_Generic_Dictionary<object__float>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                     (Il2CppObject *)audio,fVar3,MethodInfo_Void_set_Item),
         audio != (UnityEngine_AudioSource_o *)0x0)) {
        pSVar1 = (__this->fields)._audioStartVolumes;
        fVar3 = UnityEngine_AudioSource__get_volume(audio,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
          System_Collections_Generic_Dictionary<object__float>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                     (Il2CppObject *)audio,fVar3,MethodInfo_Void_set_Item);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$StopAllAudio
// il2cpp: void Weather_BaseWeatherEffect__StopAllAudio (Weather_BaseWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x3d73f10

void Weather_BaseWeatherEffect__StopAllAudio
               (Weather_BaseWeatherEffect_o *__this,bool_conflict fadeOut,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *pSVar1;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  UnityEngine_AudioSource_o *__this_03;
  UnityEngine_AudioSource_o *pUVar6;
  undefined1 local_40 [16];
  UnityEngine_AudioSource_o *local_30;
  
  if (DAT_0570262c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
    DAT_0570262c = '\x01';
  }
  if ((char)fadeOut == '\0') {
    pSVar1 = (__this->fields)._audioSources;
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) goto LAB_03d74132;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
    pSVar4 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    __this_03 = local_30;
    while( true ) {
      __this_01.fields._8_8_ = pSVar5;
      __this_01.fields._list = pSVar4;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar3 == '\0') break;
      if (__this_03 == (UnityEngine_AudioSource_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar6 = __this_03;
      UnityEngine_AudioSource__Stop(__this_03,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._audioTargetVolumes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__float>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)__this_03,0.0,MethodInfo_Void_set_Item);
      pSVar2 = (__this->fields)._audioStartTimes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__float>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)__this_03,0.0,MethodInfo_Void_set_Item);
      pSVar2 = (__this->fields)._audioStartVolumes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__float>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)__this_03,0.0,MethodInfo_Void_set_Item);
      __this_03 = pUVar6;
    }
  }
  else {
    pSVar1 = (__this->fields)._audioSources;
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
LAB_03d74132:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
    pSVar4 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    __this_03 = local_30;
    while( true ) {
      __this_00.fields._8_8_ = pSVar5;
      __this_00.fields._list = pSVar4;
      __this_00.fields._current = (Il2CppObject *)__this_03;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar3 == '\0') break;
      (*(__this->klass->vtable)._16_SetAudioVolume.methodPtr)
                (0,__this,__this_03,(__this->klass->vtable)._16_SetAudioVolume.method);
    }
  }
  __this_02.fields._8_8_ = pSVar5;
  __this_02.fields._list = pSVar4;
  __this_02.fields._current = (Il2CppObject *)__this_03;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
  return;
}


// Weather.BaseWeatherEffect$$ClampParticles
// il2cpp: float Weather_BaseWeatherEffect__ClampParticles (Weather_BaseWeatherEffect_o* __this, float count, const MethodInfo* method);
// 0x3d74240

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
// 0x3d74250

void Weather_BaseWeatherEffect__LateUpdate(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields)._parent;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = (__this->fields)._transform;
    value = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
      vtable_dispatch = (__this->klass->vtable)._20_UpdateAudio.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._20_UpdateAudio.method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$UpdateAudio
// il2cpp: void Weather_BaseWeatherEffect__UpdateAudio (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d742a0

void Weather_BaseWeatherEffect__UpdateAudio(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  float fVar3;
  undefined1 in_stack_ffffffffffffff88 [12];
  float in_stack_ffffffffffffff94;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_0570262d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
    DAT_0570262d = '\x01';
  }
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
  pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
  while( true ) {
    while( true ) {
      while( true ) {
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffff94;
        __this_01.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_01.fields._current = (Il2CppObject *)pSVar4;
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar2 == '\0') {
          __this_02.fields._version = (int32_t)in_stack_ffffffffffffff94;
          __this_02.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_02.fields._current = (Il2CppObject *)pSVar4;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
        pSVar1 = (__this->fields)._audioTargetVolumes;
        if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar3 = System_Collections_Generic_Dictionary<object__float>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           SStack_48.fields._current,MethodInfo_Single_get_Item);
        if ((fVar3 != 0.0) || (NAN(fVar3))) break;
        if ((UnityEngine_AudioSource_o *)SStack_48.fields._current ==
            (UnityEngine_AudioSource_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar2 = UnityEngine_AudioSource__get_isPlaying
                          ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0)
        ;
        if ((char)bVar2 != '\0') {
          fVar3 = (float)(*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                                   (__this,SStack_48.fields._current,
                                    (__this->klass->vtable)._21_GetLerpedVolume.method);
          UnityEngine_AudioSource__set_volume
                    ((UnityEngine_AudioSource_o *)SStack_48.fields._current,fVar3,(MethodInfo *)0x0)
          ;
          fVar3 = UnityEngine_AudioSource__get_volume
                            ((UnityEngine_AudioSource_o *)SStack_48.fields._current,
                             (MethodInfo *)0x0);
          if ((fVar3 == 0.0) && (!NAN(fVar3))) {
            UnityEngine_AudioSource__Pause
                      ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
          }
        }
      }
      if ((UnityEngine_AudioSource_o *)SStack_48.fields._current == (UnityEngine_AudioSource_o *)0x0
         ) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = UnityEngine_AudioSource__get_isPlaying
                        ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') break;
      in_stack_ffffffffffffff94 =
           UnityEngine_AudioSource__get_volume
                     ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._audioTargetVolumes;
      if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      fVar3 = System_Collections_Generic_Dictionary<object__float>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                         SStack_48.fields._current,MethodInfo_Single_get_Item);
      if ((in_stack_ffffffffffffff94 != fVar3) || (NAN(in_stack_ffffffffffffff94) || NAN(fVar3))) {
        fVar3 = (float)(*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                                 (__this,SStack_48.fields._current,
                                  (__this->klass->vtable)._21_GetLerpedVolume.method);
        UnityEngine_AudioSource__set_volume
                  ((UnityEngine_AudioSource_o *)SStack_48.fields._current,fVar3,(MethodInfo *)0x0);
      }
    }
    pSVar1 = (__this->fields)._audioStartTimes;
    fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__float>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               SStack_48.fields._current,fVar3,MethodInfo_Void_set_Item);
    pSVar1 = (__this->fields)._audioStartVolumes;
    if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) break;
    System_Collections_Generic_Dictionary<object__float>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               SStack_48.fields._current,0.0,MethodInfo_Void_set_Item);
    fVar3 = (float)(*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                             (__this,SStack_48.fields._current,
                              (__this->klass->vtable)._21_GetLerpedVolume.method);
    UnityEngine_AudioSource__set_volume
              ((UnityEngine_AudioSource_o *)SStack_48.fields._current,fVar3,(MethodInfo *)0x0);
    UnityEngine_AudioSource__Play
              ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$GetLerpedVolume
// il2cpp: float Weather_BaseWeatherEffect__GetLerpedVolume (Weather_BaseWeatherEffect_o* __this, UnityEngine_AudioSource_o* audio, const MethodInfo* method);
// 0x3d746c0

float Weather_BaseWeatherEffect__GetLerpedVolume
                (Weather_BaseWeatherEffect_o *__this,UnityEngine_AudioSource_o *audio,
                MethodInfo *method)

{
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_0570262e == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570262e = '\x01';
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  pSVar1 = (__this->fields)._audioStartTimes;
  if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
    fVar3 = System_Collections_Generic_Dictionary<object__float>__get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                       (Il2CppObject *)audio,MethodInfo_Single_get_Item);
    fVar4 = (float)(*(__this->klass->vtable)._5_get__audioFadeTime.methodPtr)(__this);
    if (audio != (UnityEngine_AudioSource_o *)0x0) {
      fVar5 = UnityEngine_AudioSource__get_volume(audio,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._audioTargetVolumes;
      if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        fVar4 = (fVar2 - fVar3) / fVar4;
        fVar2 = 1.0;
        if (fVar4 <= 1.0) {
          fVar2 = fVar4;
        }
        fVar2 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar2);
        fVar4 = System_Collections_Generic_Dictionary<object__float>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (Il2CppObject *)audio,MethodInfo_Single_get_Item);
        fVar3 = 0.0;
        if (0.0 <= fVar2) {
          fVar3 = fVar2;
        }
        return (fVar4 - fVar5) * fVar3 + fVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.BaseWeatherEffect$$.ctor
// il2cpp: void Weather_BaseWeatherEffect___ctor (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d747c0

void Weather_BaseWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  System_Collections_Generic_List_AudioSource__o *__this_01;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  
  if (DAT_0570262f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Sing);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_AudioSource__float);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_AudioSource);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_init_method_metadata(&TypeInfo_List_AudioSource);
    il2cpp_init_method_metadata(&TypeInfo_List_ParticleSystem);
    DAT_0570262f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_glue(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this->fields)._particleSystems = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._particleSystems,__this_00);
  __this_01 = (System_Collections_Generic_List_AudioSource__o *)il2cpp_runtime_glue(TypeInfo_List_AudioSource);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_AudioSource);
  (__this->fields)._audioSources = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._audioSources,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_AudioSource__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Sing);
  (__this->fields)._audioTargetVolumes = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._audioTargetVolumes,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_AudioSource__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Sing);
  (__this->fields)._audioStartTimes = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._audioStartTimes,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_AudioSource__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Sing);
  (__this->fields)._audioStartVolumes = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._audioStartVolumes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


