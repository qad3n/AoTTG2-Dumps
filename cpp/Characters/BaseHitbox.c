// Type: Characters.BaseHitbox
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BaseHitbox.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseHitbox.cs
// --------------------------------

// Characters.BaseHitbox.<SweepMap>d__20$$.ctor
// il2cpp: void Characters_BaseHitbox__SweepMap_d__20___ctor (Characters_BaseHitbox__SweepMap_d__20_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseHitbox__SweepMap_d__20___ctor(Characters_BaseHitbox__SweepMap_d__20_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<SweepMap>d__20$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__SweepMap_d__20__System_IDisposable_Dispose (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseHitbox__SweepMap_d__20__System_IDisposable_Dispose(Characters_BaseHitbox__SweepMap_d__20_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseHitbox.<SweepMap>d__20$$MoveNext
// il2cpp: bool Characters_BaseHitbox__SweepMap_d__20__MoveNext (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x18211ed60

bool Characters_BaseHitbox__SweepMap_d__20__MoveNext
               (Characters_BaseHitbox__SweepMap_d__20_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseHitbox_o *hitbox;
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184346b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184346b5d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  hitbox = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    value = (Il2CppObject *)Map_MapDestruction__SweepHitbox(hitbox,(MethodInfo *)0x0);
    (__this->fields).__2__current = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (hitbox == (Characters_BaseHitbox_o *)0x0) {
      ThrowNullReferenceException();
    }
    (hitbox->fields)._mapSweep = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(hitbox->fields)._mapSweep,(void *)0x0);
  }
  return false;
}


// Characters.BaseHitbox.<SweepMap>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__SweepMap_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseHitbox__SweepMap_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseHitbox__SweepMap_d__20_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<SweepMap>d__20$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__SweepMap_d__20__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x18211ee20

void Characters_BaseHitbox__SweepMap_d__20__System_Collections_IEnumerator_Reset
               (Characters_BaseHitbox__SweepMap_d__20_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_BaseHitbox_SweepMap_d__20_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseHitbox.<SweepMap>d__20$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__SweepMap_d__20__System_Collections_IEnumerator_get_Current (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseHitbox__SweepMap_d__20__System_Collections_IEnumerator_get_Current(Characters_BaseHitbox__SweepMap_d__20_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$.ctor
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__18___ctor (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseHitbox__WaitAndActivate_d__18___ctor(Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__18__System_IDisposable_Dispose (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseHitbox__WaitAndActivate_d__18__System_IDisposable_Dispose(Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$MoveNext
// il2cpp: bool Characters_BaseHitbox__WaitAndActivate_d__18__MoveNext (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x18211f060

bool Characters_BaseHitbox__WaitAndActivate_d__18__MoveNext
               (Characters_BaseHitbox__WaitAndActivate_d__18_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  Characters_BaseHitbox_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  
  if (Il2CppMethodInitialized_184346b5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346b5e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    amplificationFactor = (__this->fields).delay;
    (__this->fields).__1__state = -1;
    __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_01,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseHitbox_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_BaseHitbox__Enable(__this_00,(MethodInfo *)0x0);
  }
  return false;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x18211f120

void Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_IEnumerator_Reset
               (Characters_BaseHitbox__WaitAndActivate_d__18_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_BaseHitbox_WaitAndActivate_d__18_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_IEnumerator_get_Current (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_IEnumerator_get_Current(Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$.ctor
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__21___ctor (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseHitbox__WaitAndDeactivate_d__21___ctor(Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__21__System_IDisposable_Dispose (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseHitbox__WaitAndDeactivate_d__21__System_IDisposable_Dispose(Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$MoveNext
// il2cpp: bool Characters_BaseHitbox__WaitAndDeactivate_d__21__MoveNext (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x18211f160

bool Characters_BaseHitbox__WaitAndDeactivate_d__21__MoveNext
               (Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  Characters_BaseHitbox_o *__this_00;
  UnityEngine_Collider_o *__this_01;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_02;
  
  if (Il2CppMethodInitialized_184346b5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346b5f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    amplificationFactor = (__this->fields).delay;
    (__this->fields).__1__state = -1;
    __this_02 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_02,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Characters_BaseHitbox_o *)0x0) ||
       (__this_01 = (__this_00->fields)._collider, __this_01 == (UnityEngine_Collider_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UnityEngine_Collider__set_enabled(__this_01,false,(MethodInfo *)0x0);
    Characters_BaseHitbox__ToggleDebug(__this_00,false,(MethodInfo *)0x0);
  }
  return false;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x18211f230

void Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_IEnumerator_Reset
               (Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_IEnumerator_get_Current (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_IEnumerator_get_Current(Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox$$get_DestroysMap
// il2cpp: bool Characters_BaseHitbox__get_DestroysMap (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x1821124f0

bool Characters_BaseHitbox__get_DestroysMap(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  Characters_BaseCharacter_o *pCVar4;
  
  if (Il2CppMethodInitialized_184346b4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184346b4d = '\x01';
  }
  pCVar2 = (__this->fields).Owner;
  pCVar4 = (Characters_BaseCharacter_o *)0x0;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       (bVar3 = true,
       (pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan
       )) {
      bVar3 = false;
    }
    if (bVar3) {
      pCVar4 = pCVar2;
    }
  }
  return pCVar4 != (Characters_BaseCharacter_o *)0x0;
}


// Characters.BaseHitbox$$Create
// il2cpp: Characters_BaseHitbox_o* Characters_BaseHitbox__Create (Characters_BaseCharacter_o* owner, UnityEngine_GameObject_o* obj, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x182111360

Characters_BaseHitbox_o *
Characters_BaseHitbox__Create
          (Characters_BaseCharacter_o *owner,UnityEngine_GameObject_o *obj,UnityEngine_Collider_o *collider,
          MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collider_o *__this;
  UnityEngine_SphereCollider_c *pUVar2;
  bool bVar3;
  Characters_BaseHitbox_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BaseHitbox);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_184346b4e = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (obj,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_BaseHitbox)
    ;
    if (__this_00 != (Characters_BaseHitbox_o *)0x0) {
      (__this_00->fields).Owner = owner;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Owner,owner);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)collider,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        collider = UnityEngine_GameObject__GetComponent_object_
                             (obj,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Collider
                             );
      }
      (__this_00->fields)._collider = collider;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._collider,collider);
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0)
      ;
      (__this_00->fields)._mapSweep = (UnityEngine_Coroutine_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._mapSweep,(void *)0x0);
      __this = (__this_00->fields)._collider;
      if (__this != (UnityEngine_Collider_o *)0x0) {
        UnityEngine_Collider__set_enabled(__this,false,(MethodInfo *)0x0);
        Characters_BaseHitbox__ToggleDebug(__this_00,false,(MethodInfo *)0x0);
        if (collider != (UnityEngine_Collider_o *)0x0) {
          pUVar2 = ((UnityEngine_SphereCollider_o *)collider)->klass;
          bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
          if ((bVar1 <= (pUVar2->_2).typeHierarchyDepth) &&
             ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
            bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
            if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
               ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
              il2cpp_codegen_raise_invalid_cast_exception(collider);
            }
            Characters_BaseHitbox__UpdateDebugCollider
                      (__this_00,(UnityEngine_SphereCollider_o *)collider,(MethodInfo *)0x0);
          }
        }
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$UpdateSphereCollider
// il2cpp: void Characters_BaseHitbox__UpdateSphereCollider (Characters_BaseHitbox_o* __this, float radius, const MethodInfo* method);
// 0x1821121d0

void Characters_BaseHitbox__UpdateSphereCollider
               (Characters_BaseHitbox_o *__this,float radius,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collider_o *pUVar2;
  UnityEngine_Collider_c *pUVar3;
  UnityEngine_SphereCollider_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_184346b4f = '\x01';
  }
  pUVar2 = (__this->fields)._collider;
  if (pUVar2 != (UnityEngine_Collider_o *)0x0) {
    pUVar3 = pUVar2->klass;
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar3->_2).typeHierarchyDepth) &&
       ((pUVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider
       )) {
      bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
      __this_00 = (UnityEngine_SphereCollider_o *)(__this->fields)._collider;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      UnityEngine_SphereCollider__set_radius(__this_00,radius,(MethodInfo *)0x0);
      Characters_BaseHitbox__UpdateDebugCollider(__this,__this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.BaseHitbox$$ScaleSphereCollider
// il2cpp: void Characters_BaseHitbox__ScaleSphereCollider (Characters_BaseHitbox_o* __this, float scale, const MethodInfo* method);
// 0x182111cf0

void Characters_BaseHitbox__ScaleSphereCollider
               (Characters_BaseHitbox_o *__this,float scale,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collider_o *pUVar2;
  UnityEngine_Collider_c *pUVar3;
  UnityEngine_SphereCollider_o *__this_00;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346b50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_184346b50 = '\x01';
  }
  pUVar2 = (__this->fields)._collider;
  if (pUVar2 != (UnityEngine_Collider_o *)0x0) {
    pUVar3 = pUVar2->klass;
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar3->_2).typeHierarchyDepth) &&
       ((pUVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider
       )) {
      bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
      __this_00 = (UnityEngine_SphereCollider_o *)(__this->fields)._collider;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      fVar4 = UnityEngine_SphereCollider__get_radius(__this_00,(MethodInfo *)0x0);
      UnityEngine_SphereCollider__set_radius(__this_00,fVar4 * scale,(MethodInfo *)0x0);
      Characters_BaseHitbox__UpdateDebugCollider(__this,__this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.BaseHitbox$$UpdateDebugCollider
// il2cpp: void Characters_BaseHitbox__UpdateDebugCollider (Characters_BaseHitbox_o* __this, UnityEngine_SphereCollider_o* collider, const MethodInfo* method);
// 0x182111ed0

void Characters_BaseHitbox__UpdateDebugCollider
               (Characters_BaseHitbox_o *__this,UnityEngine_SphereCollider_o *collider,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *value;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Material_o *__this_02;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184346b51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugTesting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Game");
    il2cpp_codegen_initialize_runtime_metadata(&"TestSphere");
    Il2CppMethodInitialized_184346b51 = '\x01';
  }
  if (TypeInfo_ApplicationManagers_DebugTesting->static_fields->DebugColliders == false) {
    return;
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._debugObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._debugObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ("Game","TestSphere",false,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
       (value = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_parent(pUVar5,value,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if ((collider != (UnityEngine_SphereCollider_o *)0x0) &&
         (pUVar6 = UnityEngine_SphereCollider__get_center
                             ((UnityEngine_Vector3_o *)local_48,collider,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        local_58.x = (pUVar6->fields).x;
        local_58.y = (pUVar6->fields).y;
        local_58.z = (pUVar6->fields).z;
        UnityEngine_Transform__set_localPosition(pUVar5,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433dbeb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbeb = '\x01';
        }
        pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar8 = (pUVar2->oneVector).fields.x;
        fVar9 = (pUVar2->oneVector).fields.y;
        fVar10 = (pUVar2->oneVector).fields.z;
        fVar7 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          fVar8 = fVar8 * fVar7;
          fVar9 = fVar9 * fVar7;
          fVar10 = fVar10 * fVar7;
          local_58.z = fVar10 + fVar10;
          local_58.y = fVar9 + fVar9;
          local_58.x = fVar8 + fVar8;
          UnityEngine_Transform__set_localScale(pUVar5,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar4,(MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
          if ((__this_01 != (UnityEngine_Renderer_o *)0x0) &&
             (__this_02 = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_Material_o *)0x0)) {
            local_48[0].r = 1.0;
            local_48[0].g = 0.0;
            local_48[0].b = 0.0;
            local_48[0].a = 1.0;
            UnityEngine_Material__set_color(__this_02,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
            (__this->fields)._debugObject = pUVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._debugObject,pUVar4);
            pUVar4 = (__this->fields)._debugObject;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$IsActive
// il2cpp: bool Characters_BaseHitbox__IsActive (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x182111670

bool Characters_BaseHitbox__IsActive(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$Activate
// il2cpp: void Characters_BaseHitbox__Activate (Characters_BaseHitbox_o* __this, float delay, float length, const MethodInfo* method);
// 0x182111190

void Characters_BaseHitbox__Activate
               (Characters_BaseHitbox_o *__this,float delay,float length,MethodInfo *method)

{
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar1;
  Characters_BaseHitbox__WaitAndActivate_d__18_o *routine;
  Characters_BaseHitbox__WaitAndDeactivate_d__21_o *routine_00;
  
  if (Il2CppMethodInitialized_184346b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_Clear);
    Il2CppMethodInitialized_184346b52 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._hitGameObjects;
  if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
              (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear);
    pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._firstHitCharacters;
    if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar1,(MethodInfo_17592A0 *)
                        MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._firstHitHandlers;
      if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar1,(MethodInfo_17592A0 *)
                          MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear);
        pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                 (__this->fields)._firstFrameColliders;
        if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
          System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                    (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Clear
                    );
          if (delay == 0.0) {
            Characters_BaseHitbox__Enable(__this,(MethodInfo *)0x0);
          }
          else {
            if (Il2CppMethodInitialized_184346b53 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
              Il2CppMethodInitialized_184346b53 = '\x01';
            }
            routine = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0
                      );
            (routine->fields).__1__state = 0;
            (routine->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
            (routine->fields).delay = delay;
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
          }
          if (0.0 < length) {
            if (Il2CppMethodInitialized_184346b56 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21);
              Il2CppMethodInitialized_184346b56 = '\x01';
            }
            routine_00 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine_00,
                       (MethodInfo *)0x0);
            (routine_00->fields).__1__state = 0;
            (routine_00->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(routine_00->fields).__4__this,__this);
            (routine_00->fields).delay = delay + length;
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine_00,
                       (MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$Deactivate
// il2cpp: void Characters_BaseHitbox__Deactivate (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x182111500

void Characters_BaseHitbox__Deactivate(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._mapSweep = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapSweep,(void *)0x0);
  __this_00 = (__this->fields)._collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_enabled(__this_00,false,(MethodInfo *)0x0);
    Characters_BaseHitbox__ToggleDebug(__this,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$WaitAndActivate
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__WaitAndActivate (Characters_BaseHitbox_o* __this, float delay, const MethodInfo* method);
// 0x1821122a0

System_Collections_IEnumerator_o *
Characters_BaseHitbox__WaitAndActivate(Characters_BaseHitbox_o *__this,float delay,MethodInfo *method)

{
  Characters_BaseHitbox__WaitAndActivate_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
    Il2CppMethodInitialized_184346b53 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseHitbox$$Enable
// il2cpp: void Characters_BaseHitbox__Enable (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x182111550
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182111655: mov rbx, qword ptr [rsp + 0x30]

void Characters_BaseHitbox__Enable(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  Characters_BaseCharacter_o *attacker;
  bool bVar1;
  Characters_BaseHitbox__SweepMap_d__20_o *routine;
  UnityEngine_Coroutine_o *value;
  
  if (Il2CppMethodInitialized_184346b54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184346b54 = '\x01';
  }
  __this_00 = (__this->fields)._collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_enabled(__this_00,true,(MethodInfo *)0x0);
  Characters_BaseHitbox__ToggleDebug(__this,true,(MethodInfo *)0x0);
  if (((__this->fields)._mapSweep == (UnityEngine_Coroutine_o *)0x0) &&
     (bVar1 = (*(__this->klass->vtable)._4_get_DestroysMap.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_DestroysMap.method), bVar1)) {
    attacker = (__this->fields).Owner;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    bVar1 = Map_MapDestruction__CanDestroyWith(attacker,(MethodInfo *)0x0);
    if (bVar1) {
      if (Il2CppMethodInitialized_184346b55 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHitbox_SweepMap_d__20);
        Il2CppMethodInitialized_184346b55 = '\x01';
      }
      routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseHitbox_SweepMap_d__20);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
      (__this->fields)._mapSweep = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._mapSweep,value);
    }
  }
  return;
}


// Characters.BaseHitbox$$SweepMap
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__SweepMap (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x182111dd0

System_Collections_IEnumerator_o *
Characters_BaseHitbox__SweepMap(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  Characters_BaseHitbox__SweepMap_d__20_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHitbox_SweepMap_d__20);
    Il2CppMethodInitialized_184346b55 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseHitbox_SweepMap_d__20);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseHitbox$$WaitAndDeactivate
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__WaitAndDeactivate (Characters_BaseHitbox_o* __this, float delay, const MethodInfo* method);
// 0x182112320

System_Collections_IEnumerator_o *
Characters_BaseHitbox__WaitAndDeactivate(Characters_BaseHitbox_o *__this,float delay,MethodInfo *method)

{
  Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21);
    Il2CppMethodInitialized_184346b56 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseHitbox$$OnTriggerEnter
// il2cpp: void Characters_BaseHitbox__OnTriggerEnter (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x182111850

void Characters_BaseHitbox__OnTriggerEnter
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Characters_BaseHitbox__RequiresRepeatedContact(__this,other,(MethodInfo *)0x0);
  if (!bVar1) {
    (*(__this->klass->vtable)._7_OnTrigger.methodPtr)
              (__this,other,(__this->klass->vtable)._7_OnTrigger.method);
  }
  return;
}


// Characters.BaseHitbox$$OnTriggerStay
// il2cpp: void Characters_BaseHitbox__OnTriggerStay (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x182111890

void Characters_BaseHitbox__OnTriggerStay
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  if ((__this->fields).TwoFixedUpdates != false) {
    (*(__this->klass->vtable)._7_OnTrigger.methodPtr)
              (__this,other,(__this->klass->vtable)._7_OnTrigger.method);
    return;
  }
  return;
}


// Characters.BaseHitbox$$OnTrigger
// il2cpp: void Characters_BaseHitbox__OnTrigger (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x1821118b0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182111abf: mov r8, qword ptr [rip + 0x1fc82ea]  ; MethodInfo_System_Collections_Generic_HashSet_GameObject_Add
// asm:   0x182111ac6: mov rdx, rax
// asm:   0x182111ac9: mov rcx, rsi
// asm:   0x182111acc: call 0x181757ce0  ; System_Collections_Generic_HashSet_object___System_Collections_Generic_ICollection_T__Add()
// asm:   0x182111ad1: mov rax, qword ptr [rbx]
// asm:   0x182111ad4: mov r8, rdi
// asm:   0x182111ad7: mov rdx, rbp
// asm:   0x182111ada: mov rcx, rbx
// asm:   0x182111add: mov r9, qword ptr [rax + 0x1c0]
// asm:   0x182111ae4: call qword ptr [rax + 0x1b8]  ; vtable slot 8
// asm:   0x182111aea: jmp 0x182111993

void Characters_BaseHitbox__OnTrigger
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *a;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  CustomLogic_CustomLogicCollisionHandler_o *x;
  
  if (Il2CppMethodInitialized_184346b57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Collider_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346b57 = '\x01';
  }
  if ((__this->fields).TwoFixedUpdates != false) {
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182111b89;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)other,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Contains);
    if ((!bVar2) &&
       (bVar2 = Characters_BaseHitbox__RequiresRepeatedContact(__this,other,(MethodInfo *)0x0), bVar2)) {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)other,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Add);
        return;
      }
      goto label_182111b89;
    }
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    b = UnityEngine_GameObject__GetComponent_object_
                  (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      x = UnityEngine_GameObject__GetComponent_object_
                    (pUVar4,(MethodInfo_6F5650 *)
                            MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        a = (__this->fields).Owner;
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar2 = GameManagers_TeamInfo__SameTeam_1e770d0(a,b,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182111b89;
          bVar2 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)pUVar4,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
          if (!bVar2) {
            pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
            pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0)
            ;
            if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              System_Collections_Generic_HashSet_object___Add
                        (pSVar1,(Il2CppObject *)pUVar4,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
              (*(__this->klass->vtable)._8_OnHit.methodPtr)
                        (__this,b,other,(__this->klass->vtable)._8_OnHit.method);
              return;
            }
            goto label_182111b89;
          }
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182111b89;
        bVar2 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar1,(Il2CppObject *)pUVar4,
                           (MethodInfo_1759E40 *)
                           MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
        if (!bVar2) {
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182111b89;
          System_Collections_Generic_HashSet_object___Add
                    (pSVar1,(Il2CppObject *)pUVar4,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
          (*(__this->klass->vtable)._9_OnHit.methodPtr)
                    (__this,x,other,(__this->klass->vtable)._9_OnHit.method);
        }
      }
      return;
    }
  }
label_182111b89:
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$RequiresRepeatedContact
// il2cpp: bool Characters_BaseHitbox__RequiresRepeatedContact (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x182111b90

bool Characters_BaseHitbox__RequiresRepeatedContact
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  Characters_BasicTitan_o *x;
  
  if (Il2CppMethodInitialized_184346b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b58 = '\x01';
  }
  if ((__this->fields).TwoFixedUpdates == false) {
    return false;
  }
  if (((other != (UnityEngine_Collider_o *)0x0) &&
      (pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
      pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Transform__GetRoot(pUVar4,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)pUVar4,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return true;
    }
    if ((x != (Characters_BasicTitan_o *)0x0) &&
       (pCVar1 = (x->fields).BasicCache, pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0)) {
      pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).HandLHurtbox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)other,pUVar2,(MethodInfo *)0x0);
      if (!bVar3) {
        return false;
      }
      pCVar1 = (x->fields).BasicCache;
      if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).HandRHurtbox;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)other,pUVar2,(MethodInfo *)0x0);
        return bVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$OnHit
// il2cpp: void Characters_BaseHitbox__OnHit (Characters_BaseHitbox_o* __this, Characters_BaseCharacter_o* victim, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x182111690

void Characters_BaseHitbox__OnHit
               (Characters_BaseHitbox_o *__this,Characters_BaseCharacter_o *victim,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b59 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pCVar2 = (__this->fields).Owner;
    System_Collections_Generic_HashSet_object___Contains
              (pSVar1,(Il2CppObject *)victim,
               (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      (*(pCVar2->klass->vtable)._89_OnHit.methodPtr)(pCVar2,(System_Type_o *)__this,(MethodInfo *)victim);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)victim,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$OnHit
// il2cpp: void Characters_BaseHitbox__OnHit (Characters_BaseHitbox_o* __this, CustomLogic_CustomLogicCollisionHandler_o* handler, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x182111770

void Characters_BaseHitbox__OnHit_2111770
               (Characters_BaseHitbox_o *__this,CustomLogic_CustomLogicCollisionHandler_o *handler,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346b5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b5a = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pCVar2 = (__this->fields).Owner;
    System_Collections_Generic_HashSet_object___Contains
              (pSVar1,(Il2CppObject *)handler,
               (MethodInfo_1759E40 *)
               MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      (*(pCVar2->klass->vtable)._89_OnHit.methodPtr)(pCVar2,(System_Type_o *)__this,(MethodInfo *)handler);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)handler,
                   (MethodInfo_1757CE0 *)
                   MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$ToggleDebug
// il2cpp: void Characters_BaseHitbox__ToggleDebug (Characters_BaseHitbox_o* __this, bool toggle, const MethodInfo* method);
// 0x182111e40

void Characters_BaseHitbox__ToggleDebug(Characters_BaseHitbox_o *__this,bool toggle,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346b5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b5b = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._debugObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._debugObject;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,toggle,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseHitbox$$.ctor
// il2cpp: void Characters_BaseHitbox___ctor (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x1821123a0

void Characters_BaseHitbox___ctor(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_GameObject__o *__this_00;
  System_Collections_Generic_HashSet_Collider__o *__this_01;
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_02;
  System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *__this_03;
  
  if (Il2CppMethodInitialized_184346b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
    Il2CppMethodInitialized_184346b5c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
  (__this->fields)._hitGameObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hitGameObjects,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Collider_ctor);
  (__this->fields)._firstFrameColliders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstFrameColliders,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_02,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._firstHitCharacters = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstHitCharacters,__this_02);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_03,
             (MethodInfo_176CE80 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_ctor);
  (__this->fields)._firstHitHandlers = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstHitHandlers,__this_03);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


