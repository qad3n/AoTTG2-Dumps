// Type: Weather.BaseWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/BaseWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/BaseWeatherEffect.cs
// --------------------------------

// Weather.BaseWeatherEffect.<>c$$.cctor
// il2cpp: void Weather_BaseWeatherEffect___c___cctor (const MethodInfo* method);
// 0x406a280

void Weather_BaseWeatherEffect___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac2e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2e0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Weather.BaseWeatherEffect.<>c$$.ctor
// il2cpp: void Weather_BaseWeatherEffect___c___ctor (Weather_BaseWeatherEffect___c_o* __this, const MethodInfo* method);
// 0x406a2f0

void Weather_BaseWeatherEffect___c___ctor(Weather_BaseWeatherEffect___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_0
// il2cpp: System_String_o* Weather_BaseWeatherEffect___c___Setup_b__21_0 (Weather_BaseWeatherEffect___c_o* __this, UnityEngine_ParticleSystem_o* x, const MethodInfo* method);
// 0x406a300

System_String_o *
Weather_BaseWeatherEffect___c___Setup_b__21_0
          (Weather_BaseWeatherEffect___c_o *__this,UnityEngine_ParticleSystem_o *x,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Component_o *__this_00;
  
  __this_00 = (UnityEngine_Component_o *)0x0;
  if (x != (UnityEngine_ParticleSystem_o *)0x0) {
    __this_00 = (UnityEngine_Component_o *)0x0;
    pUVar1 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Object_o *)0x0) {
      pSVar2 = UnityEngine_Object__get_name(pUVar1,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    pUVar1 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Object_o *)0x0) {
      pSVar2 = UnityEngine_Object__get_name(pUVar1,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar2;
}


// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_1
// il2cpp: System_String_o* Weather_BaseWeatherEffect___c___Setup_b__21_1 (Weather_BaseWeatherEffect___c_o* __this, UnityEngine_AudioSource_o* x, const MethodInfo* method);
// 0x406a330

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
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar1;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$.ctor
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17___ctor (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4068e20

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
// 0x406a360

void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_IDisposable_Dispose
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$MoveNext
// il2cpp: bool Weather_BaseWeatherEffect__WaitAndDisable_d__17__MoveNext (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x406a370

bool_conflict
Weather_BaseWeatherEffect__WaitAndDisable_d__17__MoveNext
          (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_BaseWeatherEffect_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Weather_BaseWeatherEffect_o *pWVar2;
  bool_conflict bVar3;
  float seconds;
  
  pWVar2 = (Weather_BaseWeatherEffect_o *)__this;
  if (g_data_057ac2e1 == '\0') {
    pWVar2 = (Weather_BaseWeatherEffect_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2e1 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((__this_00 != (Weather_BaseWeatherEffect_o *)0x0) &&
       (pWVar2 = __this_00,
       __this_02 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
      *(undefined1 *)&(__this_00->fields)._isDisabling = 0;
      return 0;
    }
label_0406a483:
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)(pWVar2->fields).m_CancellationTokenSource;
  }
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Weather_BaseWeatherEffect_o *)0x0) goto label_0406a483;
    *(undefined1 *)&(__this_00->fields)._isDisabling = 1;
    (*(__this_00->klass->vtable)._17_StopAllAudio.methodPtr)
              (__this_00,1,(__this_00->klass->vtable)._17_StopAllAudio.method);
    (*(__this_00->klass->vtable)._13_StopAllParticleSystems.methodPtr)
              (__this_00,(__this_00->klass->vtable)._13_StopAllParticleSystems.method);
    seconds = (float)(*(__this_00->klass->vtable)._5_get__audioFadeTime.methodPtr)(__this_00);
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x406a490

Il2CppObject *
Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_Reset (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x406a4a0

void Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_Reset
               (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_get_Current (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o* __this, const MethodInfo* method);
// 0x406a4e0

Il2CppObject *
Weather_BaseWeatherEffect__WaitAndDisable_d__17__System_Collections_IEnumerator_get_Current
          (Weather_BaseWeatherEffect__WaitAndDisable_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.BaseWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_BaseWeatherEffect__get__positionOffset (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x4068c00

UnityEngine_Vector3_o
Weather_BaseWeatherEffect__get__positionOffset(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
}


// Weather.BaseWeatherEffect$$get__audioFadeTime
// il2cpp: float Weather_BaseWeatherEffect__get__audioFadeTime (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x4068c40

float Weather_BaseWeatherEffect__get__audioFadeTime(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Weather.BaseWeatherEffect$$Disable
// il2cpp: void Weather_BaseWeatherEffect__Disable (Weather_BaseWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x4068c50

void Weather_BaseWeatherEffect__Disable
               (Weather_BaseWeatherEffect_o *__this,bool_conflict fadeOut,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Weather_BaseWeatherEffect_o *__this_00;
  UnityEngine_Component_o *pUVar3;
  undefined4 uVar4;
  Weather_BaseWeatherEffect_o *pWVar5;
  UnityEngine_Component_o *__this_01;
  
  pWVar5 = __this;
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    if ((char)fadeOut == '\0') {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._17_StopAllAudio.methodPtr)
                (__this,0,(__this->klass->vtable)._17_StopAllAudio.method);
      (*(__this->klass->vtable)._13_StopAllParticleSystems.methodPtr)(__this);
      pWVar5 = __this;
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
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
      if (g_data_057ac2d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDisable_d__17);
        g_data_057ac2d5 = '\x01';
      }
      __this_00 = (Weather_BaseWeatherEffect_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDisable_d__17);
      pWVar5 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
      if (__this_00 != (Weather_BaseWeatherEffect_o *)0x0) {
        (__this_00->fields)._parent = (UnityEngine_Transform_o *)__this;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._parent,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDisable_d__17);
    g_data_057ac2d5 = '\x01';
  }
  pUVar3 = (UnityEngine_Component_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDisable_d__17);
  __this_01 = pUVar3;
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar3->fields).m_CachedPtr = 0;
  if (pUVar3 != (UnityEngine_Component_o *)0x0) {
    pUVar3[1].monitor = pWVar5;
    il2cpp_runtime_helper_022b4080(&pUVar3[1].monitor,pWVar5);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar4 = 0;
  pUVar3 = __this_01;
  pUVar2 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_04068e12:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar3->fields).m_CachedPtr = uVar4;
    return;
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    uVar4 = 0;
    pUVar3 = __this_01;
    pUVar2 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_04068e12;
    UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
    *(undefined1 *)&__this_01[4].monitor = 0;
  }
  return;
}


// Weather.BaseWeatherEffect$$Enable
// il2cpp: void Weather_BaseWeatherEffect__Enable (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x4068dd0

void Weather_BaseWeatherEffect__Enable(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  undefined4 uVar3;
  Weather_BaseWeatherEffect_o *__this_00;
  
  uVar3 = 0;
  __this_00 = __this;
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uVar3 = 0;
      __this_00 = __this;
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_04068e12;
      UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields)._isDisabling = 0;
    }
    return;
  }
label_04068e12:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar3;
  return;
}


// Weather.BaseWeatherEffect$$WaitAndDisable
// il2cpp: System_Collections_IEnumerator_o* Weather_BaseWeatherEffect__WaitAndDisable (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x4068d60

System_Collections_IEnumerator_o *
Weather_BaseWeatherEffect__WaitAndDisable(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  undefined4 extraout_var;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  undefined4 uVar5;
  UnityEngine_Component_o *__this_00;
  System_Collections_IEnumerator_o *pSVar4;
  
  if (g_data_057ac2d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDisable_d__17);
    g_data_057ac2d5 = '\x01';
  }
  pUVar2 = (UnityEngine_Component_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDisable_d__17);
  __this_00 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar2->fields).m_CachedPtr = 0;
  if (pUVar2 != (UnityEngine_Component_o *)0x0) {
    pUVar2[1].monitor = __this;
    il2cpp_runtime_helper_022b4080(&pUVar2[1].monitor,__this);
    return (System_Collections_IEnumerator_o *)pUVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar5 = 0;
  pUVar2 = __this_00;
  pUVar3 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    pSVar4 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar1);
    if ((char)bVar1 == '\0') {
      uVar5 = 0;
      pUVar2 = __this_00;
      pUVar3 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04068e12;
      UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
      *(undefined1 *)&__this_00[4].monitor = 0;
      pSVar4 = extraout_RAX;
    }
    return pSVar4;
  }
label_04068e12:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar2->fields).m_CachedPtr = uVar5;
  return extraout_RAX_00;
}


// Weather.BaseWeatherEffect$$Randomize
// il2cpp: void Weather_BaseWeatherEffect__Randomize (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x4068e40

void Weather_BaseWeatherEffect__Randomize(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.BaseWeatherEffect$$SetParent
// il2cpp: void Weather_BaseWeatherEffect__SetParent (Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x4068e50

void Weather_BaseWeatherEffect__SetParent
               (Weather_BaseWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  (__this->fields)._parent = parent;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._parent);
  return;
}


// Weather.BaseWeatherEffect$$SetLevel
// il2cpp: void Weather_BaseWeatherEffect__SetLevel (Weather_BaseWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x4068e60

void Weather_BaseWeatherEffect__SetLevel(Weather_BaseWeatherEffect_o *__this,float level,MethodInfo *method)

{
  (__this->fields)._level = level;
  return;
}


// Weather.BaseWeatherEffect$$Setup
// il2cpp: void Weather_BaseWeatherEffect__Setup (Weather_BaseWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x4068e70

void Weather_BaseWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  float fVar1;
  long lVar2;
  UnityEngine_Quaternion_Fields *pUVar3;
  undefined8 uVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Object_array *pSVar7;
  System_Func_TSource__TKey__o *pSVar8;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar9;
  System_Collections_Generic_List_ParticleSystem__o *pSVar10;
  System_Collections_Generic_List_AudioSource__o *pSVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [12];
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  Il2CppType *pIVar17;
  UnityEngine_ParticleSystem_o *__this_04;
  UnityEngine_ParticleSystem_o *pUVar18;
  undefined1 local_48 [16];
  UnityEngine_ParticleSystem_o *local_38;
  
  if (g_data_057ac2d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource_OrderBy_Aud);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_UnityEngine_ParticleSystem_OrderBy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AudioSource_ToList_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem_ToList_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_ParticleSystem_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_AudioSource_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_ParticleSystem_GetEnumer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Setup_b__21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Setup_b__21_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2d6 = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar17 = (Il2CppType *)0x0;
  __this_04 = (UnityEngine_ParticleSystem_o *)0x0;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._transform,pUVar6);
  (__this->fields)._parent = parent;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._parent,parent);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x98), lVar2 != 0)) {
    uVar13 = (ulong)(*(int *)(lVar2 + 0x14) == 3);
    fVar1 = *(float *)(&g_data_00d1d360 + uVar13 * 4);
    uVar14 = (ulong)(uint)fVar1;
    (__this->fields)._maxParticles = *(float *)(&g_data_00d1d740 + uVar13 * 4);
    (__this->fields)._particleMultiplier = fVar1;
    pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar8 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar8 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar8 == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_ParticleSystem_string);
      System_Func_object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar2 + 8) = pSVar8;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
    }
    pSVar9 = System_Linq_Enumerable__OrderBy_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,pSVar8,MethodInfo_IOrderedEnumerable_1_UnityEngine_ParticleSystem_OrderBy);
    pSVar10 = (System_Collections_Generic_List_ParticleSystem__o *)
              System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,MethodInfo_List_1_UnityEngine_ParticleSystem_ToList_ParticleSystem);
    (__this->fields)._particleSystems = pSVar10;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._particleSystems,pSVar10);
    pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)__this,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar8 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar8 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar8 == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_AudioSource_string);
      System_Func_object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar2 + 0x10) = pSVar8;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
    }
    pSVar9 = System_Linq_Enumerable__OrderBy_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,pSVar8,MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource_OrderBy_Aud);
    pSVar11 = (System_Collections_Generic_List_AudioSource__o *)
              System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,MethodInfo_List_1_UnityEngine_AudioSource_ToList_AudioSource);
    (__this->fields)._audioSources = pSVar11;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._audioSources,pSVar11);
    pSVar10 = (__this->fields)._particleSystems;
    if (pSVar10 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_T_Enumerator_UnityEngine_ParticleSystem_GetEnumer);
      pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar17 = (Il2CppType *)local_48._8_8_;
      __this_04 = local_38;
      while (__this_00.fields._8_8_ = pIVar17,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar16,
            __this_00.fields._current = (Il2CppObject *)__this_04,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar5 != '\0')
      {
        if (__this_04 == (UnityEngine_ParticleSystem_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          pUVar18 = __this_04;
label_040692f7:
          __this_04 = pUVar18;
          il2cpp_runtime_helper_022b2c90();
label_040692fc:
          il2cpp_runtime_helper_022b2c90();
          goto label_04069301;
        }
        pUVar18 = __this_04;
        UnityEngine_ParticleSystem__Stop_4e72b10(__this_04,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        uVar4 = (*(__this->klass->vtable)._4_get__positionOffset.methodPtr)(__this);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_040692f7;
        value.fields.z = (float)uVar14;
        value.fields.x = (float)(int)uVar4;
        value.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
        UnityEngine_Transform__set_localPosition(pUVar6,value,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        __this_04 = pUVar18;
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
          __this_04 = pUVar18;
        }
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_040692fc;
        pUVar3 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
        uVar14._0_4_ = pUVar3->z;
        uVar14._4_4_ = pUVar3->w;
        UnityEngine_Transform__set_localRotation(pUVar6,(UnityEngine_Quaternion_o)*pUVar3,(MethodInfo *)0x0);
      }
      __this_01.fields._8_8_ = pIVar17;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar16;
      __this_01.fields._current = (Il2CppObject *)__this_04;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      goto label_040692ce;
    }
  }
label_04069301:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar2 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar17;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar16;
    __this_02.fields._current = (Il2CppObject *)__this_04;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
label_040692ce:
      (*(__this->klass->vtable)._17_StopAllAudio.methodPtr)
                (__this,0,(__this->klass->vtable)._17_StopAllAudio.method);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar17;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar16;
  __this_03.fields._current = (Il2CppObject *)__this_04;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar15._0_8_);
}


// Weather.BaseWeatherEffect$$SetActiveParticleSystem
// il2cpp: void Weather_BaseWeatherEffect__SetActiveParticleSystem (Weather_BaseWeatherEffect_o* __this, int32_t index, const MethodInfo* method);
// 0x40693f0

void Weather_BaseWeatherEffect__SetActiveParticleSystem
               (Weather_BaseWeatherEffect_o *__this,int32_t index,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  int index_00;
  System_Collections_Generic_List_ParticleSystem__o *pSVar3;
  
  if (g_data_057ac2d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_get_Item);
    g_data_057ac2d7 = '\x01';
  }
  pSVar3 = (__this->fields)._particleSystems;
  if (pSVar3 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
label_040694c6:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    index_00 = 0;
    if (0 < (pSVar3->fields)._size) {
      do {
        if (index == index_00) {
          pUVar2 = (UnityEngine_ParticleSystem_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_ParticleSystem_get_Item);
          if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto label_040694c6;
          bVar1 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') goto label_04069466;
          pSVar3 = (__this->fields)._particleSystems;
          if ((pSVar3 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) ||
             (pUVar2 = (UnityEngine_ParticleSystem_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_ParticleSystem_get_Item),
             pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) goto label_040694c6;
          UnityEngine_ParticleSystem__Play_4e728d0(pUVar2,(MethodInfo *)0x0);
          pSVar3 = (__this->fields)._particleSystems;
        }
        else {
          pUVar2 = (UnityEngine_ParticleSystem_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index_00,MethodInfo_ParticleSystem_get_Item);
          if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto label_040694c6;
          UnityEngine_ParticleSystem__Stop_4e72b10(pUVar2,(MethodInfo *)0x0);
label_04069466:
          pSVar3 = (__this->fields)._particleSystems;
        }
        if (pSVar3 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto label_040694c6;
        index_00 = index_00 + 1;
      } while (index_00 < (pSVar3->fields)._size);
    }
  }
  return;
}


// Weather.BaseWeatherEffect$$StopAllParticleSystems
// il2cpp: void Weather_BaseWeatherEffect__StopAllParticleSystems (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x40694e0

void Weather_BaseWeatherEffect__StopAllParticleSystems(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  UnityEngine_ParticleSystem_o *__this_05;
  
  if (g_data_057ac2d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_ParticleSystem_GetEnumer);
    g_data_057ac2d8 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_05 = (UnityEngine_ParticleSystem_o *)0x0;
  __this_00 = (__this->fields)._particleSystems;
  if (__this_00 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_ParticleSystem_GetEnumer);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = (Il2CppObject *)__this_05;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
        return;
      }
      if (__this_05 == (UnityEngine_ParticleSystem_o *)0x0) break;
      UnityEngine_ParticleSystem__Stop_4e72b10(__this_05,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// Weather.BaseWeatherEffect$$SetActiveAudio
// il2cpp: void Weather_BaseWeatherEffect__SetActiveAudio (Weather_BaseWeatherEffect_o* __this, int32_t index, float volume, const MethodInfo* method);
// 0x4069630

void Weather_BaseWeatherEffect__SetActiveAudio
               (Weather_BaseWeatherEffect_o *__this,int32_t index,float volume,MethodInfo *method)

{
  Weather_BaseWeatherEffect_c *pWVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Int32_array *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  uint uVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  char cVar7;
  undefined4 in_register_00000034;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  Weather_BaseWeatherEffect_o *pWVar9;
  System_Collections_Generic_List_AudioSource__o *pSVar10;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_05;
  MethodInfo_310C3F0 **unaff_R12;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  System_Collections_Generic_List_AudioSource__c *pSVar14;
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  UnityEngine_AudioSource_array *pUVar16;
  UnityEngine_AudioSource_array *__this_06;
  undefined1 auStack_b8 [16];
  UnityEngine_AudioSource_array *pUStack_a8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_a0;
  Il2CppRGCTXData *pIStack_98;
  
  pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)CONCAT44(in_register_00000034,index);
  pWVar9 = __this;
  if (g_data_057ac2d9 == '\0') {
    pWVar9 = (Weather_BaseWeatherEffect_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2d9 = '\x01';
  }
  pSVar10 = (__this->fields)._audioSources;
  if (pSVar10 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    if (0 < (pSVar10->fields)._size) {
      do {
        if (index == (int)pSVar6) {
          pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)(uint)index;
          fVar12 = volume;
        }
        else {
          fVar12 = 0.0;
          pSVar8 = pSVar6;
        }
        pWVar9 = __this;
        (*(__this->klass->vtable)._15_SetAudioVolume.methodPtr)
                  (fVar12,__this,pSVar8,(__this->klass->vtable)._15_SetAudioVolume.method);
        uVar5 = (int)pSVar6 + 1;
        pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar5;
        pSVar10 = (__this->fields)._audioSources;
        if (pSVar10 == (System_Collections_Generic_List_AudioSource__o *)0x0) goto label_040696c8;
      } while ((int)uVar5 < (pSVar10->fields)._size);
    }
    return;
  }
label_040696c8:
  uVar11 = il2cpp_runtime_helper_022b2c90();
  pSVar6 = pSVar8;
  if (g_data_057ac2da == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    g_data_057ac2da = '\x01';
  }
  pSVar10 = (pWVar9->fields)._audioSources;
  if (pSVar10 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    pIVar4 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar10,(int32_t)pSVar8,MethodInfo_AudioSource_get_Item);
    pWVar1 = pWVar9->klass;
    vtableDispatch = (pWVar1->vtable)._16_SetAudioVolume.methodPtr;
    (*vtableDispatch)
              (uVar11,pWVar9,pIVar4,(pWVar1->vtable)._16_SetAudioVolume.method,pWVar1,vtableDispatch);
    return;
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar8 = pSVar6;
  if (g_data_057ac2db == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac2db = '\x01';
  }
  cVar7 = (char)pSVar8;
  pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  if (pSVar10[2].klass != (System_Collections_Generic_List_AudioSource__c *)0x0) {
    fVar13 = 1.0;
    if (fVar12 <= 1.0) {
      fVar13 = fVar12;
    }
    fVar13 = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar13);
    pSVar8 = pSVar6;
    fVar12 = System_Collections_Generic_Dictionary_object__float___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10[2].klass,
                        (Il2CppObject *)pSVar6,MethodInfo_Single_get_Item);
    cVar7 = (char)pSVar8;
    if ((fVar12 == fVar13) && (!NAN(fVar12) && !NAN(fVar13))) {
      return;
    }
    pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    if (pSVar10[2].klass != (System_Collections_Generic_List_AudioSource__c *)0x0) {
      unaff_R12 = &MethodInfo_Void_set_Item;
      pSVar8 = pSVar6;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10[2].klass,
                 (Il2CppObject *)pSVar6,fVar13,MethodInfo_Void_set_Item);
      cVar7 = (char)pSVar8;
      if (fVar13 != 0.0) {
        return;
      }
      if (NAN(fVar13)) {
        return;
      }
      __this_05 = pSVar10[2].monitor;
      pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      fVar12 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (__this_05 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        pSVar8 = pSVar6;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (__this_05,(Il2CppObject *)pSVar6,fVar12,MethodInfo_Void_set_Item);
        cVar7 = (char)pSVar8;
        pSVar8 = __this_05;
        if (pSVar6 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          pUVar16 = pSVar10[2].fields._items;
          cVar7 = '\0';
          pSVar8 = pSVar6;
          fVar12 = UnityEngine_AudioSource__get_volume((UnityEngine_AudioSource_o *)pSVar6,(MethodInfo *)0x0);
          pSVar10 = (System_Collections_Generic_List_AudioSource__o *)0x0;
          if (pUVar16 != (UnityEngine_AudioSource_array *)0x0) {
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar16,(Il2CppObject *)pSVar6
                       ,fVar12,MethodInfo_Void_set_Item);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = pSVar6;
  pIStack_98 = (Il2CppRGCTXData *)unaff_R12;
  if (g_data_057ac2dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2dc = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_AudioSource__c *)0x0;
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar16 = (UnityEngine_AudioSource_array *)0x0;
  if (cVar7 == '\0') {
    pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._syncRoot;
    if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_04069a82;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_b8,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pSVar14 = (System_Collections_Generic_List_AudioSource__c *)auStack_b8._0_8_;
    pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_b8._8_8_;
    __this_06 = pUStack_a8;
    while (__this_02.fields._8_8_ = pSVar15,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
          __this_02.fields._current = &__this_06->obj,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30), (char)bVar3 != '\0') {
      pUVar16 = __this_06;
      if (__this_06 == (UnityEngine_AudioSource_array *)0x0) {
label_04069a73:
        il2cpp_runtime_helper_022b2c90();
label_04069a78:
        il2cpp_runtime_helper_022b2c90();
label_04069a7d:
        il2cpp_runtime_helper_022b2c90();
        pSVar10 = (System_Collections_Generic_List_AudioSource__o *)&stack0xffffffffffffff30;
        goto label_04069a82;
      }
      UnityEngine_AudioSource__Stop_4daa470((UnityEngine_AudioSource_o *)__this_06,(MethodInfo *)0x0);
      if (pSVar8[1].klass == (System_Collections_Generic_Dictionary_TKey__TValue__c *)0x0) goto label_04069a78;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8[1].klass,&__this_06->obj,0.0,
                 MethodInfo_Void_set_Item);
      if (pSVar8[1].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04069a73;
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                (pSVar8[1].monitor,&__this_06->obj,0.0,MethodInfo_Void_set_Item);
      __this_00 = pSVar8[1].fields._buckets;
      if (__this_00 == (System_Int32_array *)0x0) goto label_04069a7d;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,&__this_06->obj,0.0,
                 MethodInfo_Void_set_Item);
      __this_06 = pUVar16;
    }
  }
  else {
    pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._syncRoot;
    if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
label_04069a82:
      il2cpp_runtime_helper_022b2c90();
      __this_04.fields._8_8_ = pSVar15;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_04.fields._current = &pUVar16->obj;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
      _Unwind_Resume(pSVar10);
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_b8,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pSVar14 = (System_Collections_Generic_List_AudioSource__c *)auStack_b8._0_8_;
    pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_b8._8_8_;
    __this_06 = pUStack_a8;
    while (__this_01.fields._8_8_ = pSVar15,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
          __this_01.fields._current = &__this_06->obj,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30), (char)bVar3 != '\0') {
      (*(pSVar8->klass->vtable).
        _16_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains
        .methodPtr)(0,pSVar8,__this_06,
                    (pSVar8->klass->vtable).
                    _16_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains
                    .method);
    }
  }
  __this_03.fields._8_8_ = pSVar15;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
  __this_03.fields._current = &__this_06->obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
  return;
}


// Weather.BaseWeatherEffect$$SetAudioVolume
// il2cpp: void Weather_BaseWeatherEffect__SetAudioVolume (Weather_BaseWeatherEffect_o* __this, int32_t index, float volume, const MethodInfo* method);
// 0x40696d0

void Weather_BaseWeatherEffect__SetAudioVolume
               (Weather_BaseWeatherEffect_o *__this,int32_t index,float volume,MethodInfo *method)

{
  Weather_BaseWeatherEffect_c *pWVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Int32_array *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  char cVar5;
  undefined4 in_register_00000034;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_05;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  System_Collections_Generic_List_AudioSource__o *__this_06;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_07;
  MethodInfo_310C3F0 **unaff_R12;
  float fVar7;
  float fVar8;
  System_Collections_Generic_List_AudioSource__c *pSVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  UnityEngine_AudioSource_array *pUVar11;
  UnityEngine_AudioSource_array *__this_08;
  undefined1 auStack_90 [16];
  UnityEngine_AudioSource_array *pUStack_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_78;
  Il2CppRGCTXData *pIStack_70;
  
  __this_05 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)CONCAT44(in_register_00000034,index);
  if (g_data_057ac2da == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    g_data_057ac2da = '\x01';
  }
  __this_06 = (__this->fields)._audioSources;
  if (__this_06 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    pIVar4 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_06,index,MethodInfo_AudioSource_get_Item);
    pWVar1 = __this->klass;
    vtableDispatch = (pWVar1->vtable)._16_SetAudioVolume.methodPtr;
    (*vtableDispatch)
              (volume,__this,pIVar4,(pWVar1->vtable)._16_SetAudioVolume.method,pWVar1,vtableDispatch);
    return;
  }
  fVar7 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar6 = __this_05;
  if (g_data_057ac2db == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac2db = '\x01';
  }
  cVar5 = (char)pSVar6;
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  if (__this_06[2].klass != (System_Collections_Generic_List_AudioSource__c *)0x0) {
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
    pSVar6 = __this_05;
    fVar7 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[2].klass,
                       (Il2CppObject *)__this_05,MethodInfo_Single_get_Item);
    cVar5 = (char)pSVar6;
    if ((fVar7 == fVar8) && (!NAN(fVar7) && !NAN(fVar8))) {
      return;
    }
    pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    if (__this_06[2].klass != (System_Collections_Generic_List_AudioSource__c *)0x0) {
      unaff_R12 = &MethodInfo_Void_set_Item;
      pSVar6 = __this_05;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[2].klass,
                 (Il2CppObject *)__this_05,fVar8,MethodInfo_Void_set_Item);
      cVar5 = (char)pSVar6;
      if (fVar8 != 0.0) {
        return;
      }
      if (NAN(fVar8)) {
        return;
      }
      __this_07 = __this_06[2].monitor;
      pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (__this_07 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        pSVar6 = __this_05;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (__this_07,(Il2CppObject *)__this_05,fVar7,MethodInfo_Void_set_Item);
        cVar5 = (char)pSVar6;
        pSVar6 = __this_07;
        if (__this_05 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          pUVar11 = __this_06[2].fields._items;
          cVar5 = '\0';
          pSVar6 = __this_05;
          fVar7 = UnityEngine_AudioSource__get_volume
                            ((UnityEngine_AudioSource_o *)__this_05,(MethodInfo *)0x0);
          __this_06 = (System_Collections_Generic_List_AudioSource__o *)0x0;
          if (pUVar11 != (UnityEngine_AudioSource_array *)0x0) {
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar11,
                       (Il2CppObject *)__this_05,fVar7,MethodInfo_Void_set_Item);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_78 = __this_05;
  pIStack_70 = (Il2CppRGCTXData *)unaff_R12;
  if (g_data_057ac2dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2dc = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_AudioSource__c *)0x0;
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar11 = (UnityEngine_AudioSource_array *)0x0;
  if (cVar5 == '\0') {
    pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._syncRoot;
    if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_04069a82;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pSVar9 = (System_Collections_Generic_List_AudioSource__c *)auStack_90._0_8_;
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_90._8_8_;
    __this_08 = pUStack_80;
    while (__this_02.fields._8_8_ = pSVar10,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
          __this_02.fields._current = &__this_08->obj,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58), (char)bVar3 != '\0') {
      pUVar11 = __this_08;
      if (__this_08 == (UnityEngine_AudioSource_array *)0x0) {
label_04069a73:
        il2cpp_runtime_helper_022b2c90();
label_04069a78:
        il2cpp_runtime_helper_022b2c90();
label_04069a7d:
        il2cpp_runtime_helper_022b2c90();
        __this_06 = (System_Collections_Generic_List_AudioSource__o *)&stack0xffffffffffffff58;
        goto label_04069a82;
      }
      UnityEngine_AudioSource__Stop_4daa470((UnityEngine_AudioSource_o *)__this_08,(MethodInfo *)0x0);
      if (pSVar6[1].klass == (System_Collections_Generic_Dictionary_TKey__TValue__c *)0x0) goto label_04069a78;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6[1].klass,&__this_08->obj,0.0,
                 MethodInfo_Void_set_Item);
      if (pSVar6[1].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04069a73;
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                (pSVar6[1].monitor,&__this_08->obj,0.0,MethodInfo_Void_set_Item);
      __this_00 = pSVar6[1].fields._buckets;
      if (__this_00 == (System_Int32_array *)0x0) goto label_04069a7d;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,&__this_08->obj,0.0,
                 MethodInfo_Void_set_Item);
      __this_08 = pUVar11;
    }
  }
  else {
    pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._syncRoot;
    if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
label_04069a82:
      il2cpp_runtime_helper_022b2c90();
      __this_04.fields._8_8_ = pSVar10;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_04.fields._current = &pUVar11->obj;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
      _Unwind_Resume(__this_06);
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pSVar9 = (System_Collections_Generic_List_AudioSource__c *)auStack_90._0_8_;
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_90._8_8_;
    __this_08 = pUStack_80;
    while (__this_01.fields._8_8_ = pSVar10,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
          __this_01.fields._current = &__this_08->obj,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58), (char)bVar3 != '\0') {
      (*(pSVar6->klass->vtable).
        _16_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains
        .methodPtr)(0,pSVar6,__this_08,
                    (pSVar6->klass->vtable).
                    _16_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains
                    .method);
    }
  }
  __this_03.fields._8_8_ = pSVar10;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
  __this_03.fields._current = &__this_08->obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
  return;
}


// Weather.BaseWeatherEffect$$SetAudioVolume
// il2cpp: void Weather_BaseWeatherEffect__SetAudioVolume (Weather_BaseWeatherEffect_o* __this, UnityEngine_AudioSource_o* audio, float volume, const MethodInfo* method);
// 0x4069740

void Weather_BaseWeatherEffect__SetAudioVolume_3f69740
               (Weather_BaseWeatherEffect_o *__this,UnityEngine_AudioSource_o *audio,float volume,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  System_Int32_array *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  char cVar3;
  UnityEngine_AudioSource_o *pUVar4;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar5;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar6;
  MethodInfo_310C3F0 **unaff_R12;
  float fVar7;
  float fVar8;
  Weather_BaseWeatherEffect_c *pWVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Transform_o *__this_05;
  undefined1 auStack_78 [16];
  UnityEngine_Transform_o *pUStack_68;
  UnityEngine_AudioSource_o *pUStack_60;
  Il2CppRGCTXData *pIStack_58;
  
  pUVar4 = audio;
  if (g_data_057ac2db == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac2db = '\x01';
  }
  cVar3 = (char)pUVar4;
  pSVar6 = (__this->fields)._audioTargetVolumes;
  pSVar5 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0;
  if (pSVar6 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
    fVar8 = 1.0;
    if (volume <= 1.0) {
      fVar8 = volume;
    }
    fVar8 = (float)(-(uint)(0.0 <= volume) & (uint)fVar8);
    pUVar4 = audio;
    fVar7 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)audio,
                       MethodInfo_Single_get_Item);
    cVar3 = (char)pUVar4;
    if ((fVar7 == fVar8) && (!NAN(fVar7) && !NAN(fVar8))) {
      return;
    }
    pSVar6 = (__this->fields)._audioTargetVolumes;
    pSVar5 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
      unaff_R12 = &MethodInfo_Void_set_Item;
      pUVar4 = audio;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)audio,fVar8,
                 MethodInfo_Void_set_Item);
      cVar3 = (char)pUVar4;
      if (fVar8 != 0.0) {
        return;
      }
      if (NAN(fVar8)) {
        return;
      }
      pSVar6 = (__this->fields)._audioStartTimes;
      pSVar5 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0;
      fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (pSVar6 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        pUVar4 = audio;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)audio,fVar8
                   ,MethodInfo_Void_set_Item);
        cVar3 = (char)pUVar4;
        pSVar5 = pSVar6;
        if (audio != (UnityEngine_AudioSource_o *)0x0) {
          pSVar6 = (__this->fields)._audioStartVolumes;
          cVar3 = '\0';
          pSVar5 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)audio;
          fVar8 = UnityEngine_AudioSource__get_volume(audio,(MethodInfo *)0x0);
          __this = (Weather_BaseWeatherEffect_o *)0x0;
          if (pSVar6 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)audio,
                       fVar8,MethodInfo_Void_set_Item);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_60 = audio;
  pIStack_58 = (Il2CppRGCTXData *)unaff_R12;
  if (g_data_057ac2dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2dc = '\x01';
  }
  pWVar9 = (Weather_BaseWeatherEffect_c *)0x0;
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar11 = (UnityEngine_Transform_o *)0x0;
  if (cVar3 == '\0') {
    pSVar1 = (System_Collections_Generic_List_object__o *)
             ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSVar5->fields)->_syncRoot;
    if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) goto label_04069a82;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_78,pSVar1,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pWVar9 = (Weather_BaseWeatherEffect_c *)auStack_78._0_8_;
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_78._8_8_;
    __this_05 = pUStack_68;
    while (__this_02.fields._8_8_ = pSVar10,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pWVar9,
          __this_02.fields._current = (Il2CppObject *)__this_05,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), (char)bVar2 != '\0') {
      pUVar11 = __this_05;
      if (__this_05 == (UnityEngine_Transform_o *)0x0) {
label_04069a73:
        il2cpp_runtime_helper_022b2c90();
label_04069a78:
        il2cpp_runtime_helper_022b2c90();
label_04069a7d:
        il2cpp_runtime_helper_022b2c90();
        __this = (Weather_BaseWeatherEffect_o *)&stack0xffffffffffffff70;
        goto label_04069a82;
      }
      UnityEngine_AudioSource__Stop_4daa470((UnityEngine_AudioSource_o *)__this_05,(MethodInfo *)0x0);
      if (pSVar5[1].klass == (System_Collections_Generic_Dictionary_AudioSource__float__c *)0x0)
      goto label_04069a78;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5[1].klass,
                 (Il2CppObject *)__this_05,0.0,MethodInfo_Void_set_Item);
      if (pSVar5[1].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04069a73;
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                (pSVar5[1].monitor,(Il2CppObject *)__this_05,0.0,MethodInfo_Void_set_Item);
      __this_00 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSVar5[1].fields)->_buckets;
      if (__this_00 == (System_Int32_array *)0x0) goto label_04069a7d;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)__this_05,
                 0.0,MethodInfo_Void_set_Item);
      __this_05 = pUVar11;
    }
  }
  else {
    pSVar1 = (System_Collections_Generic_List_object__o *)
             ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSVar5->fields)->_syncRoot;
    if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
label_04069a82:
      il2cpp_runtime_helper_022b2c90();
      __this_04.fields._8_8_ = pSVar10;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pWVar9;
      __this_04.fields._current = (Il2CppObject *)pUVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
      _Unwind_Resume(__this);
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_78,pSVar1,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pWVar9 = (Weather_BaseWeatherEffect_c *)auStack_78._0_8_;
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_78._8_8_;
    __this_05 = pUStack_68;
    while (__this_01.fields._8_8_ = pSVar10,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pWVar9,
          __this_01.fields._current = (Il2CppObject *)__this_05,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), (char)bVar2 != '\0') {
      (*(((System_Collections_Generic_Dictionary_TKey__TValue__VTable *)&pSVar5->klass->vtable)->
        _16_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains
        ).methodPtr)(0,pSVar5,__this_05,
                     (((System_Collections_Generic_Dictionary_TKey__TValue__VTable *)&pSVar5->klass->vtable)->
                     _16_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains
                     ).method);
    }
  }
  __this_03.fields._8_8_ = pSVar10;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pWVar9;
  __this_03.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  return;
}


// Weather.BaseWeatherEffect$$StopAllAudio
// il2cpp: void Weather_BaseWeatherEffect__StopAllAudio (Weather_BaseWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x4069860

void Weather_BaseWeatherEffect__StopAllAudio
               (Weather_BaseWeatherEffect_o *__this,bool_conflict fadeOut,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *pSVar1;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  undefined1 *unaff_R14;
  System_Collections_Generic_List_T__o *pSVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  UnityEngine_AudioSource_o *pUVar6;
  UnityEngine_AudioSource_o *__this_04;
  undefined1 local_40 [16];
  UnityEngine_AudioSource_o *local_30;
  
  if (g_data_057ac2dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2dc = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar6 = (UnityEngine_AudioSource_o *)0x0;
  if ((char)fadeOut == '\0') {
    pSVar1 = (__this->fields)._audioSources;
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) goto label_04069a82;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pSVar4 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    __this_04 = local_30;
    while (__this_01.fields._8_8_ = pSVar5, __this_01.fields._list = pSVar4,
          __this_01.fields._current = (Il2CppObject *)__this_04,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar3 != '\0') {
      pUVar6 = __this_04;
      if (__this_04 == (UnityEngine_AudioSource_o *)0x0) {
label_04069a73:
        il2cpp_runtime_helper_022b2c90();
label_04069a78:
        il2cpp_runtime_helper_022b2c90();
label_04069a7d:
        il2cpp_runtime_helper_022b2c90();
        unaff_R14 = &stack0xffffffffffffffa8;
        goto label_04069a82;
      }
      UnityEngine_AudioSource__Stop_4daa470(__this_04,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._audioTargetVolumes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) goto label_04069a78;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)__this_04,0.0
                 ,MethodInfo_Void_set_Item);
      pSVar2 = (__this->fields)._audioStartTimes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04069a73;
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)__this_04,0.0
                 ,MethodInfo_Void_set_Item);
      pSVar2 = (__this->fields)._audioStartVolumes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) goto label_04069a7d;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)__this_04,0.0
                 ,MethodInfo_Void_set_Item);
      __this_04 = pUVar6;
    }
  }
  else {
    pSVar1 = (__this->fields)._audioSources;
    if (pSVar1 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
label_04069a82:
      il2cpp_runtime_helper_022b2c90();
      __this_03.fields._8_8_ = pSVar5;
      __this_03.fields._list = pSVar4;
      __this_03.fields._current = (Il2CppObject *)pUVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(unaff_R14);
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pSVar4 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    __this_04 = local_30;
    while (__this_00.fields._8_8_ = pSVar5, __this_00.fields._list = pSVar4,
          __this_00.fields._current = (Il2CppObject *)__this_04,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar3 != '\0') {
      (*(__this->klass->vtable)._16_SetAudioVolume.methodPtr)
                (0,__this,__this_04,(__this->klass->vtable)._16_SetAudioVolume.method);
    }
  }
  __this_02.fields._8_8_ = pSVar5;
  __this_02.fields._list = pSVar4;
  __this_02.fields._current = (Il2CppObject *)__this_04;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  return;
}


// Weather.BaseWeatherEffect$$ClampParticles
// il2cpp: float Weather_BaseWeatherEffect__ClampParticles (Weather_BaseWeatherEffect_o* __this, float count, const MethodInfo* method);
// 0x4069b90

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
// 0x4069ba0

void Weather_BaseWeatherEffect__LateUpdate(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_c *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  undefined8 uVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  long *plVar7;
  UnityEngine_Transform_o *__this_06;
  float fVar8;
  undefined1 auVar9 [12];
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff70 [12];
  float in_stack_ffffffffffffff7c;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o SStack_60;
  Il2CppRGCTXData *pIStack_48;
  
  __this_06 = (__this->fields)._parent;
  if (__this_06 != (UnityEngine_Transform_o *)0x0) {
    __this_00 = (__this->fields)._transform;
    value = UnityEngine_Transform__get_position(__this_06,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._20_UpdateAudio.methodPtr)
                (__this,(__this->klass->vtable)._20_UpdateAudio.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)__this;
  if (g_data_057ac2dd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  if (__this_06[3].klass != (UnityEngine_Transform_c *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_60,(System_Collections_Generic_List_object__o *)__this_06[3].klass,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_60.fields._list;
    while( true ) {
      __this_02.fields._version = (int32_t)in_stack_ffffffffffffff7c;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff70._8_4_;
      __this_02.fields._current = (Il2CppObject *)pSVar10;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
      if ((char)bVar6 == '\0') {
        __this_03.fields._version = (int32_t)in_stack_ffffffffffffff7c;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_;
        __this_03.fields._index = in_stack_ffffffffffffff70._8_4_;
        __this_03.fields._current = (Il2CppObject *)pSVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
        return;
      }
      if (__this_06[3].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
      fVar8 = System_Collections_Generic_Dictionary_object__float___get_Item
                        (__this_06[3].monitor,SStack_60.fields._current,MethodInfo_Single_get_Item);
      if ((fVar8 != 0.0) || (NAN(fVar8))) {
        if ((UnityEngine_AudioSource_o *)SStack_60.fields._current == (UnityEngine_AudioSource_o *)0x0)
        goto label_04069e7d;
        bVar6 = UnityEngine_AudioSource__get_isPlaying
                          ((UnityEngine_AudioSource_o *)SStack_60.fields._current,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[3].fields.m_CachedPtr
          ;
          fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
          if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04069e87;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (__this_01,SStack_60.fields._current,fVar8,MethodInfo_Void_set_Item);
          if (__this_06[4].klass == (UnityEngine_Transform_c *)0x0) goto label_04069e8c;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[4].klass,
                     SStack_60.fields._current,0.0,MethodInfo_Void_set_Item);
          pUVar1 = __this_06->klass;
          uVar4._0_4_ = pUVar1[1]._2.static_fields_size;
          uVar4._4_4_ = pUVar1[1]._2.thread_static_fields_size;
          fVar8 = (float)(**(code **)&pUVar1[1]._2.element_size)(__this_06,SStack_60.fields._current,uVar4);
          UnityEngine_AudioSource__set_volume
                    ((UnityEngine_AudioSource_o *)SStack_60.fields._current,fVar8,(MethodInfo *)0x0);
          UnityEngine_AudioSource__Play_4daa2c0
                    ((UnityEngine_AudioSource_o *)SStack_60.fields._current,(MethodInfo *)0x0);
        }
        else {
          in_stack_ffffffffffffff7c =
               UnityEngine_AudioSource__get_volume
                         ((UnityEngine_AudioSource_o *)SStack_60.fields._current,(MethodInfo *)0x0);
          if (__this_06[3].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
          goto label_04069e82;
          fVar8 = System_Collections_Generic_Dictionary_object__float___get_Item
                            (__this_06[3].monitor,SStack_60.fields._current,MethodInfo_Single_get_Item);
          if ((in_stack_ffffffffffffff7c != fVar8) || (NAN(in_stack_ffffffffffffff7c) || NAN(fVar8))) {
            pUVar1 = __this_06->klass;
            uVar3._0_4_ = pUVar1[1]._2.static_fields_size;
            uVar3._4_4_ = pUVar1[1]._2.thread_static_fields_size;
            fVar8 = (float)(**(code **)&pUVar1[1]._2.element_size)(__this_06,SStack_60.fields._current,uVar3);
            UnityEngine_AudioSource__set_volume
                      ((UnityEngine_AudioSource_o *)SStack_60.fields._current,fVar8,(MethodInfo *)0x0);
          }
        }
      }
      else {
        if ((UnityEngine_AudioSource_o *)SStack_60.fields._current == (UnityEngine_AudioSource_o *)0x0)
        goto label_04069e78;
        bVar6 = UnityEngine_AudioSource__get_isPlaying
                          ((UnityEngine_AudioSource_o *)SStack_60.fields._current,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar1 = __this_06->klass;
          uVar2._0_4_ = pUVar1[1]._2.static_fields_size;
          uVar2._4_4_ = pUVar1[1]._2.thread_static_fields_size;
          fVar8 = (float)(**(code **)&pUVar1[1]._2.element_size)(__this_06,SStack_60.fields._current,uVar2);
          UnityEngine_AudioSource__set_volume
                    ((UnityEngine_AudioSource_o *)SStack_60.fields._current,fVar8,(MethodInfo *)0x0);
          fVar8 = UnityEngine_AudioSource__get_volume
                            ((UnityEngine_AudioSource_o *)SStack_60.fields._current,(MethodInfo *)0x0);
          if ((fVar8 == 0.0) && (!NAN(fVar8))) {
            UnityEngine_AudioSource__Pause
                      ((UnityEngine_AudioSource_o *)SStack_60.fields._current,(MethodInfo *)0x0);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_04069e78:
    il2cpp_runtime_helper_022b2c90();
label_04069e7d:
    il2cpp_runtime_helper_022b2c90();
label_04069e82:
    il2cpp_runtime_helper_022b2c90();
label_04069e87:
    il2cpp_runtime_helper_022b2c90();
label_04069e8c:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._version = (int32_t)in_stack_ffffffffffffff7c;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_;
    __this_04.fields._index = in_stack_ffffffffffffff70._8_4_;
    __this_04.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_05.fields._version = (int32_t)in_stack_ffffffffffffff7c;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_;
  __this_05.fields._index = in_stack_ffffffffffffff70._8_4_;
  __this_05.fields._current = (Il2CppObject *)pSVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar9._0_8_);
}


// Weather.BaseWeatherEffect$$UpdateAudio
// il2cpp: void Weather_BaseWeatherEffect__UpdateAudio (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x4069bf0

void Weather_BaseWeatherEffect__UpdateAudio(Weather_BaseWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  long *plVar4;
  float fVar5;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffff88 [12];
  float in_stack_ffffffffffffff94;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (g_data_057ac2dd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2dd = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
    while( true ) {
      __this_01.fields._version = (int32_t)in_stack_ffffffffffffff94;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_01.fields._current = (Il2CppObject *)pSVar7;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_02.fields._version = (int32_t)in_stack_ffffffffffffff94;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_02.fields._current = (Il2CppObject *)pSVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      pSVar1 = (__this->fields)._audioTargetVolumes;
      if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) break;
      fVar5 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                         SStack_48.fields._current,MethodInfo_Single_get_Item);
      if ((fVar5 != 0.0) || (NAN(fVar5))) {
        if ((UnityEngine_AudioSource_o *)SStack_48.fields._current == (UnityEngine_AudioSource_o *)0x0)
        goto label_04069e7d;
        bVar3 = UnityEngine_AudioSource__get_isPlaying
                          ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          pSVar1 = (__this->fields)._audioStartTimes;
          fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) goto label_04069e87;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,SStack_48.fields._current
                     ,fVar5,MethodInfo_Void_set_Item);
          pSVar1 = (__this->fields)._audioStartVolumes;
          if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) goto label_04069e8c;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,SStack_48.fields._current
                     ,0.0,MethodInfo_Void_set_Item);
          fVar5 = (float)(*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                                   (__this,SStack_48.fields._current,
                                    (__this->klass->vtable)._21_GetLerpedVolume.method);
          UnityEngine_AudioSource__set_volume
                    ((UnityEngine_AudioSource_o *)SStack_48.fields._current,fVar5,(MethodInfo *)0x0);
          UnityEngine_AudioSource__Play_4daa2c0
                    ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
        }
        else {
          in_stack_ffffffffffffff94 =
               UnityEngine_AudioSource__get_volume
                         ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._audioTargetVolumes;
          if (pSVar1 == (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) goto label_04069e82;
          fVar5 = System_Collections_Generic_Dictionary_object__float___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                             SStack_48.fields._current,MethodInfo_Single_get_Item);
          if ((in_stack_ffffffffffffff94 != fVar5) || (NAN(in_stack_ffffffffffffff94) || NAN(fVar5))) {
            fVar5 = (float)(*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                                     (__this,SStack_48.fields._current,
                                      (__this->klass->vtable)._21_GetLerpedVolume.method);
            UnityEngine_AudioSource__set_volume
                      ((UnityEngine_AudioSource_o *)SStack_48.fields._current,fVar5,(MethodInfo *)0x0);
          }
        }
      }
      else {
        if ((UnityEngine_AudioSource_o *)SStack_48.fields._current == (UnityEngine_AudioSource_o *)0x0)
        goto label_04069e78;
        bVar3 = UnityEngine_AudioSource__get_isPlaying
                          ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          fVar5 = (float)(*(__this->klass->vtable)._21_GetLerpedVolume.methodPtr)
                                   (__this,SStack_48.fields._current,
                                    (__this->klass->vtable)._21_GetLerpedVolume.method);
          UnityEngine_AudioSource__set_volume
                    ((UnityEngine_AudioSource_o *)SStack_48.fields._current,fVar5,(MethodInfo *)0x0);
          fVar5 = UnityEngine_AudioSource__get_volume
                            ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
          if ((fVar5 == 0.0) && (!NAN(fVar5))) {
            UnityEngine_AudioSource__Pause
                      ((UnityEngine_AudioSource_o *)SStack_48.fields._current,(MethodInfo *)0x0);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_04069e78:
    il2cpp_runtime_helper_022b2c90();
label_04069e7d:
    il2cpp_runtime_helper_022b2c90();
label_04069e82:
    il2cpp_runtime_helper_022b2c90();
label_04069e87:
    il2cpp_runtime_helper_022b2c90();
label_04069e8c:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff94;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._version = (int32_t)in_stack_ffffffffffffff94;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar6._0_8_);
}


// Weather.BaseWeatherEffect$$GetLerpedVolume
// il2cpp: float Weather_BaseWeatherEffect__GetLerpedVolume (Weather_BaseWeatherEffect_o* __this, UnityEngine_AudioSource_o* audio, const MethodInfo* method);
// 0x406a010

float Weather_BaseWeatherEffect__GetLerpedVolume
                (Weather_BaseWeatherEffect_o *__this,UnityEngine_AudioSource_o *audio,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  System_Collections_Generic_List_AudioSource__o *__this_01;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  Weather_BaseWeatherEffect_o *__this_02;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float extraout_XMM0_Da;
  
  if (g_data_057ac2de == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2de = '\x01';
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  pSVar1 = (__this->fields)._audioStartTimes;
  __this_02 = (Weather_BaseWeatherEffect_o *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
    fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)audio,
                       MethodInfo_Single_get_Item);
    __this_02 = __this;
    fVar4 = (float)(*(__this->klass->vtable)._5_get__audioFadeTime.methodPtr)();
    if (audio != (UnityEngine_AudioSource_o *)0x0) {
      fVar5 = UnityEngine_AudioSource__get_volume(audio,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._audioTargetVolumes;
      __this_02 = (Weather_BaseWeatherEffect_o *)0x0;
      if (pSVar1 != (System_Collections_Generic_Dictionary_AudioSource__float__o *)0x0) {
        fVar4 = (fVar2 - fVar3) / fVar4;
        fVar2 = 1.0;
        if (fVar4 <= 1.0) {
          fVar2 = fVar4;
        }
        fVar2 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar2);
        fVar4 = System_Collections_Generic_Dictionary_object__float___get_Item
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_AudioSource_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    g_data_057ac2df = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this_02->fields)._particleSystems = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._particleSystems,__this_00);
  __this_01 = (System_Collections_Generic_List_AudioSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AudioSource);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_AudioSource);
  (__this_02->fields)._audioSources = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._audioSources,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Single);
  (__this_02->fields)._audioTargetVolumes = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._audioTargetVolumes,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Single);
  (__this_02->fields)._audioStartTimes = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._audioStartTimes,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Single);
  (__this_02->fields)._audioStartVolumes = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._audioStartVolumes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// Weather.BaseWeatherEffect$$.ctor
// il2cpp: void Weather_BaseWeatherEffect___ctor (Weather_BaseWeatherEffect_o* __this, const MethodInfo* method);
// 0x406a110

void Weather_BaseWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  System_Collections_Generic_List_AudioSource__o *__this_01;
  System_Collections_Generic_Dictionary_AudioSource__float__o *pSVar1;
  
  if (g_data_057ac2df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_AudioSource_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    g_data_057ac2df = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this->fields)._particleSystems = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._particleSystems,__this_00);
  __this_01 = (System_Collections_Generic_List_AudioSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AudioSource);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_AudioSource);
  (__this->fields)._audioSources = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._audioSources,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Single);
  (__this->fields)._audioTargetVolumes = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._audioTargetVolumes,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Single);
  (__this->fields)._audioStartTimes = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._audioStartTimes,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_AudioSource__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_AudioSource_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,MethodInfo_Dictionary_2_UnityEngine_AudioSource_System_Single);
  (__this->fields)._audioStartVolumes = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._audioStartVolumes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


