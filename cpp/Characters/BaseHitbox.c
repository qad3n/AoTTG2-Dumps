// Type: Characters.BaseHitbox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/BaseHitbox.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseHitbox.cs
// --------------------------------

// Characters.BaseHitbox.<SweepMap>d__20$$.ctor
// il2cpp: void Characters_BaseHitbox__SweepMap_d__20___ctor (Characters_BaseHitbox__SweepMap_d__20_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bbb140

void Characters_BaseHitbox__SweepMap_d__20___ctor
               (Characters_BaseHitbox__SweepMap_d__20_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<SweepMap>d__20$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__SweepMap_d__20__System_IDisposable_Dispose (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x5bbb920

void Characters_BaseHitbox__SweepMap_d__20__System_IDisposable_Dispose
               (Characters_BaseHitbox__SweepMap_d__20_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseHitbox.<SweepMap>d__20$$MoveNext
// il2cpp: bool Characters_BaseHitbox__SweepMap_d__20__MoveNext (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x5bbb930

bool Characters_BaseHitbox__SweepMap_d__20__MoveNext
               (Characters_BaseHitbox__SweepMap_d__20_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseHitbox_o *hitbox;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_0754752c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_0754752c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  hitbox = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pIVar2 = (Il2CppObject *)Map_MapDestruction__SweepHitbox(hitbox,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (hitbox == (Characters_BaseHitbox_o *)0x0) {
      ThrowNullReferenceException();
    }
    (hitbox->fields)._mapSweep = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(hitbox->fields)._mapSweep);
  }
  return iVar1 == 0;
}


// Characters.BaseHitbox.<SweepMap>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__SweepMap_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x5bbb9e0

Il2CppObject *
Characters_BaseHitbox__SweepMap_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseHitbox__SweepMap_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<SweepMap>d__20$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__SweepMap_d__20__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__SweepMap_d__20_o* __this, const MethodInfo* method);
// 0x5bbb9f0

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
// 0x5bbba30

Il2CppObject *
Characters_BaseHitbox__SweepMap_d__20__System_Collections_IEnumerator_get_Current
          (Characters_BaseHitbox__SweepMap_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$.ctor
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__18___ctor (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bbb0b0

void Characters_BaseHitbox__WaitAndActivate_d__18___ctor
               (Characters_BaseHitbox__WaitAndActivate_d__18_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__18__System_IDisposable_Dispose (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x5bbba40

void Characters_BaseHitbox__WaitAndActivate_d__18__System_IDisposable_Dispose
               (Characters_BaseHitbox__WaitAndActivate_d__18_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$MoveNext
// il2cpp: bool Characters_BaseHitbox__WaitAndActivate_d__18__MoveNext (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x5bbba50

bool Characters_BaseHitbox__WaitAndActivate_d__18__MoveNext
               (Characters_BaseHitbox__WaitAndActivate_d__18_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Characters_BaseHitbox_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  
  if (Il2CppMethodInitialized_0754752d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_0754752d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delay;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseHitbox_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_BaseHitbox__Enable(__this_00,method);
  }
  return iVar1 == 0;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x5bbbb00

Il2CppObject *
Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseHitbox__WaitAndActivate_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndActivate>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__WaitAndActivate_d__18_o* __this, const MethodInfo* method);
// 0x5bbbb10

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
// 0x5bbbb50

Il2CppObject *
Characters_BaseHitbox__WaitAndActivate_d__18__System_Collections_IEnumerator_get_Current
          (Characters_BaseHitbox__WaitAndActivate_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$.ctor
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__21___ctor (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bbb160

void Characters_BaseHitbox__WaitAndDeactivate_d__21___ctor
               (Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__21__System_IDisposable_Dispose (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x5bbbb60

void Characters_BaseHitbox__WaitAndDeactivate_d__21__System_IDisposable_Dispose
               (Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$MoveNext
// il2cpp: bool Characters_BaseHitbox__WaitAndDeactivate_d__21__MoveNext (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x5bbbb70

bool Characters_BaseHitbox__WaitAndDeactivate_d__21__MoveNext
               (Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Characters_BaseHitbox_o *pCVar2;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool bVar3;
  UnityEngine_WaitForSeconds_o *__this_02;
  
  if (Il2CppMethodInitialized_0754752e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_0754752e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delay;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pCVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pCVar2 == (Characters_BaseHitbox_o *)0x0) ||
       (__this_00 = (pCVar2->fields)._collider, __this_00 == (UnityEngine_Collider_o *)0x0)) {
label_05bbbc8a:
      ThrowNullReferenceException();
    }
    UnityEngine_Collider__set_enabled(__this_00,false,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0754752a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_0754752a = '\x01';
    }
    x = (UnityEngine_Object_o *)(pCVar2->fields)._debugObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      __this_01 = (pCVar2->fields)._debugObject;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05bbbc8a;
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    }
  }
  return iVar1 == 0;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x5bbbc90

Il2CppObject *
Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__WaitAndDeactivate_d__21_o* __this, const MethodInfo* method);
// 0x5bbbca0

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
// 0x5bbbce0

Il2CppObject *
Characters_BaseHitbox__WaitAndDeactivate_d__21__System_Collections_IEnumerator_get_Current
          (Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox$$get_DestroysMap
// il2cpp: bool Characters_BaseHitbox__get_DestroysMap (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x5bba610

bool Characters_BaseHitbox__get_DestroysMap(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  
  if (Il2CppMethodInitialized_0754751c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_0754751c = '\x01';
  }
  pCVar2 = (__this->fields).Owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (bVar1 <= (pCVar3->_2).typeHierarchyDepth) {
      return (pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan;
    }
  }
  return false;
}


// Characters.BaseHitbox$$Create
// il2cpp: Characters_BaseHitbox_o* Characters_BaseHitbox__Create (Characters_BaseCharacter_o* owner, UnityEngine_GameObject_o* obj, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x5bba670

Characters_BaseHitbox_o *
Characters_BaseHitbox__Create
          (Characters_BaseCharacter_o *owner,UnityEngine_GameObject_o *obj,UnityEngine_Collider_o *collider,
          MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Characters_BaseHitbox_o *__this;
  
  if (Il2CppMethodInitialized_0754751d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BaseHitbox);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_0754751d = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (obj,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_BaseHitbox);
    if (__this != (Characters_BaseHitbox_o *)0x0) {
      (__this->fields).Owner = owner;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)collider,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        collider = UnityEngine_GameObject__GetComponent_object_
                             (obj,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
      }
      (__this->fields)._collider = collider;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._collider);
      (*(__this->klass->vtable)._6_Deactivate.methodPtr)(__this,(__this->klass->vtable)._6_Deactivate.method);
      if (collider != (UnityEngine_Collider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
        if ((bVar1 <= (((UnityEngine_SphereCollider_o *)collider)->klass->_2).typeHierarchyDepth) &&
           ((((UnityEngine_SphereCollider_o *)collider)->klass->_2).typeHierarchy
            [(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] ==
            (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
          Characters_BaseHitbox__UpdateDebugCollider
                    (__this,(UnityEngine_SphereCollider_o *)collider,(MethodInfo *)(ulong)bVar1);
        }
      }
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$UpdateSphereCollider
// il2cpp: void Characters_BaseHitbox__UpdateSphereCollider (Characters_BaseHitbox_o* __this, float radius, const MethodInfo* method);
// 0x5bbaa60

void Characters_BaseHitbox__UpdateSphereCollider
               (Characters_BaseHitbox_o *__this,float radius,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_SphereCollider_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754751e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_0754751e = '\x01';
  }
  __this_00 = (UnityEngine_SphereCollider_o *)(__this->fields)._collider;
  if (__this_00 != (UnityEngine_SphereCollider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
      UnityEngine_SphereCollider__set_radius(__this_00,radius,(MethodInfo *)0x0);
      Characters_BaseHitbox__UpdateDebugCollider(__this,__this_00,method_00);
      return;
    }
  }
  return;
}


// Characters.BaseHitbox$$ScaleSphereCollider
// il2cpp: void Characters_BaseHitbox__ScaleSphereCollider (Characters_BaseHitbox_o* __this, float scale, const MethodInfo* method);
// 0x5ba6310

void Characters_BaseHitbox__ScaleSphereCollider
               (Characters_BaseHitbox_o *__this,float scale,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_SphereCollider_o *__this_00;
  MethodInfo *method_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_0754751f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_0754751f = '\x01';
  }
  __this_00 = (UnityEngine_SphereCollider_o *)(__this->fields)._collider;
  if (__this_00 != (UnityEngine_SphereCollider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
      fVar2 = UnityEngine_SphereCollider__get_radius(__this_00,(MethodInfo *)0x0);
      UnityEngine_SphereCollider__set_radius(__this_00,fVar2 * scale,(MethodInfo *)0x0);
      Characters_BaseHitbox__UpdateDebugCollider(__this,__this_00,method_00);
      return;
    }
  }
  return;
}


// Characters.BaseHitbox$$UpdateDebugCollider
// il2cpp: void Characters_BaseHitbox__UpdateDebugCollider (Characters_BaseHitbox_o* __this, UnityEngine_SphereCollider_o* collider, const MethodInfo* method);
// 0x5bba7b0

void Characters_BaseHitbox__UpdateDebugCollider
               (Characters_BaseHitbox_o *__this,UnityEngine_SphereCollider_o *collider,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  bool bVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *value;
  UnityEngine_Renderer_o *__this_02;
  UnityEngine_Material_o *__this_03;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o value_00;
  UnityEngine_Vector3_o UVar9;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547520 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugTesting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Game");
    il2cpp_codegen_initialize_runtime_metadata(&"TestSphere");
    Il2CppMethodInitialized_07547520 = '\x01';
  }
  if (TypeInfo_ApplicationManagers_DebugTesting->static_fields->DebugColliders == false) {
    return;
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._debugObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._debugObject;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar3 = (UnityEngine_Object_o *)*targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ("Game","TestSphere",false,false,
                         (MethodInfo_3665790 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_parent(pUVar6,value,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (collider != (UnityEngine_SphereCollider_o *)0x0) {
          UVar9 = UnityEngine_SphereCollider__get_center(collider,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localPosition(pUVar6,UVar9,(MethodInfo *)0x0);
            pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b7 = '\x01';
            }
            pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar1 = (pUVar4->oneVector).fields.x;
            uVar2 = (pUVar4->oneVector).fields.y;
            fVar8 = (pUVar4->oneVector).fields.z;
            fVar7 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              fVar8 = fVar8 * fVar7;
              UVar9.fields.z = fVar8 + fVar8;
              UVar9.fields.y = (float)uVar2 * fVar7 + (float)uVar2 * fVar7;
              UVar9.fields.x = (float)uVar1 * fVar7 + (float)uVar1 * fVar7;
              UnityEngine_Transform__set_localScale(pUVar6,UVar9,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this_00,
                                     (MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
              if (__this_02 != (UnityEngine_Renderer_o *)0x0) {
                __this_03 = UnityEngine_Renderer__get_material(__this_02,(MethodInfo *)0x0);
                if (__this_03 != (UnityEngine_Material_o *)0x0) {
                  value_00.fields.b = 0.0;
                  value_00.fields.a = 1.0;
                  value_00.fields.r = 1.0;
                  value_00.fields.g = 0.0;
                  UnityEngine_Material__set_color(__this_03,value_00,(MethodInfo *)0x0);
                  *targetAddress = __this_00;
                  Il2CppCodeGenWriteBarrier(targetAddress);
                  if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(*targetAddress,false,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$IsActive
// il2cpp: bool Characters_BaseHitbox__IsActive (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x5bbaaf0

bool Characters_BaseHitbox__IsActive(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseHitbox$$Activate
// il2cpp: void Characters_BaseHitbox__Activate (Characters_BaseHitbox_o* __this, float delay, float length, const MethodInfo* method);
// 0x5bbab10

void Characters_BaseHitbox__Activate
               (Characters_BaseHitbox_o *__this,float delay,float length,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this_00;
  Characters_BaseHitbox__WaitAndActivate_d__18_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547521 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_Clear);
    Il2CppMethodInitialized_07547521 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Clear
              (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar1,(MethodInfo_4FB36D0 *)
                        MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear
                  (pSVar1,(MethodInfo_4FB36D0 *)
                          MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear);
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          method_00 = MethodInfo_System_Collections_Generic_HashSet_Collider_Clear;
          System_Collections_Generic_HashSet_object___Clear
                    (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Clear
                    );
          if ((delay != 0.0) || (NAN(delay))) {
            if (Il2CppMethodInitialized_07547522 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
              Il2CppMethodInitialized_07547522 = '\x01';
            }
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
            System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).__1__state = 0;
            (__this_01->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
            (__this_01->fields).delay = delay;
            UnityEngine_MonoBehaviour__StartCoroutine_691c390
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                       (MethodInfo *)0x0);
          }
          else {
            Characters_BaseHitbox__Enable(__this,method_00);
          }
          if (0.0 < length) {
            if (Il2CppMethodInitialized_07547525 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21);
              Il2CppMethodInitialized_07547525 = '\x01';
            }
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21);
            System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields).__1__state = 0;
            (__this_00->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
            (__this_00->fields).delay = delay + length;
            UnityEngine_MonoBehaviour__StartCoroutine_691c390
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                       (MethodInfo *)0x0);
            return;
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
// 0x5bbaf80

void Characters_BaseHitbox__Deactivate(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool bVar1;
  
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._mapSweep = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapSweep);
  __this_00 = (__this->fields)._collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_enabled(__this_00,false,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0754752a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_0754752a = '\x01';
    }
    x = (UnityEngine_Object_o *)(__this->fields)._debugObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    __this_01 = (__this->fields)._debugObject;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$WaitAndActivate
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__WaitAndActivate (Characters_BaseHitbox_o* __this, float delay, const MethodInfo* method);
// 0x5bbae80

System_Collections_IEnumerator_o *
Characters_BaseHitbox__WaitAndActivate(Characters_BaseHitbox_o *__this,float delay,MethodInfo *method)

{
  Characters_BaseHitbox__WaitAndActivate_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_07547522 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
    Il2CppMethodInitialized_07547522 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseHitbox$$Enable
// il2cpp: void Characters_BaseHitbox__Enable (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x5bbad10

void Characters_BaseHitbox__Enable(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  Characters_BaseCharacter_o *attacker;
  bool bVar1;
  Characters_BaseHitbox__SweepMap_d__20_o *__this_02;
  UnityEngine_Coroutine_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547523 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_07547523 = '\x01';
  }
  __this_00 = (__this->fields)._collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
label_05bbae78:
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_enabled(__this_00,true,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0754752a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754752a = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._debugObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_01 = (__this->fields)._debugObject;
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05bbae78;
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
  }
  if ((__this->fields)._mapSweep == (UnityEngine_Coroutine_o *)0x0) {
    bVar1 = (*(__this->klass->vtable)._4_get_DestroysMap.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_DestroysMap.method);
    if (bVar1) {
      attacker = (__this->fields).Owner;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      bVar1 = Map_MapDestruction__CanDestroyWith(attacker,(MethodInfo *)0x0);
      if (bVar1) {
        if (Il2CppMethodInitialized_07547524 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHitbox_SweepMap_d__20);
          Il2CppMethodInitialized_07547524 = '\x01';
        }
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseHitbox_SweepMap_d__20);
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        (__this_02->fields).__1__state = 0;
        (__this_02->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
        pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                           ((UnityEngine_MonoBehaviour_o *)__this,
                            (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
        (__this->fields)._mapSweep = pUVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._mapSweep);
        return;
      }
    }
  }
  return;
}


// Characters.BaseHitbox$$SweepMap
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__SweepMap (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x5bbb0d0

System_Collections_IEnumerator_o *
Characters_BaseHitbox__SweepMap(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  Characters_BaseHitbox__SweepMap_d__20_o *__this_00;
  
  if (Il2CppMethodInitialized_07547524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHitbox_SweepMap_d__20);
    Il2CppMethodInitialized_07547524 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseHitbox_SweepMap_d__20);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseHitbox$$WaitAndDeactivate
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__WaitAndDeactivate (Characters_BaseHitbox_o* __this, float delay, const MethodInfo* method);
// 0x5bbaf00

System_Collections_IEnumerator_o *
Characters_BaseHitbox__WaitAndDeactivate(Characters_BaseHitbox_o *__this,float delay,MethodInfo *method)

{
  Characters_BaseHitbox__WaitAndDeactivate_d__21_o *__this_00;
  
  if (Il2CppMethodInitialized_07547525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21);
    Il2CppMethodInitialized_07547525 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseHitbox$$OnTriggerEnter
// il2cpp: void Characters_BaseHitbox__OnTriggerEnter (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5bbb180

void Characters_BaseHitbox__OnTriggerEnter
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Characters_BaseHitbox__RequiresRepeatedContact(__this,other,method);
  if (bVar1) {
    return;
  }
  (*(__this->klass->vtable)._9_OnTrigger.methodPtr)(__this,other,(__this->klass->vtable)._9_OnTrigger.method);
  return;
}


// Characters.BaseHitbox$$OnTriggerStay
// il2cpp: void Characters_BaseHitbox__OnTriggerStay (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5bbb300

void Characters_BaseHitbox__OnTriggerStay
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  if ((__this->fields).TwoFixedUpdates == false) {
    return;
  }
  (*(__this->klass->vtable)._9_OnTrigger.methodPtr)(__this,other,(__this->klass->vtable)._9_OnTrigger.method);
  return;
}


// Characters.BaseHitbox$$OnTrigger
// il2cpp: void Characters_BaseHitbox__OnTrigger (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5bbb320

void Characters_BaseHitbox__OnTrigger
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *a;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_o *x;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  _func_197 *vtableDispatch;
  
  if (Il2CppMethodInitialized_07547526 == '\0') {
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
    Il2CppMethodInitialized_07547526 = '\x01';
  }
  if ((__this->fields).TwoFixedUpdates != false) {
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05bbb60d;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)other,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Contains);
    if ((!bVar2) && (bVar2 = Characters_BaseHitbox__RequiresRepeatedContact(__this,other,method_00), bVar2)) {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)other,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Add);
        return;
      }
      goto label_05bbb60d;
    }
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    b = UnityEngine_GameObject__GetComponent_object_
                  (pUVar4,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05bbb60d;
    x = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent_object_
                  (pUVar4,(MethodInfo_353B730 *)
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
      bVar2 = GameManagers_TeamInfo__SameTeam_5858900(a,b,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05bbb60d;
        bVar2 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar1,(Il2CppObject *)pUVar4,
                           (MethodInfo_4FB3720 *)
                           MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
        if (!bVar2) {
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05bbb60d;
          System_Collections_Generic_HashSet_object___Add
                    (pSVar1,(Il2CppObject *)pUVar4,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
          vtableDispatch = (__this->klass->vtable)._10_OnHit.methodPtr;
          pMVar5 = (__this->klass->vtable)._10_OnHit.method;
          goto label_05bbb5f9;
        }
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)pUVar4,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
      if (bVar2) {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)pUVar4,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
        vtableDispatch = (_func_197 *)(__this->klass->vtable)._11_OnHit.methodPtr;
        pMVar5 = (__this->klass->vtable)._11_OnHit.method;
        b = x;
label_05bbb5f9:
        (*vtableDispatch)(__this,b,other,pMVar5);
        return;
      }
    }
  }
label_05bbb60d:
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$RequiresRepeatedContact
// il2cpp: bool Characters_BaseHitbox__RequiresRepeatedContact (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5bbb1c0

bool Characters_BaseHitbox__RequiresRepeatedContact
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  Characters_BasicTitan_o *x;
  
  if (Il2CppMethodInitialized_07547527 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547527 = '\x01';
  }
  if ((__this->fields).TwoFixedUpdates == false) {
    return false;
  }
  if (((other != (UnityEngine_Collider_o *)0x0) &&
      (pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
      pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)pUVar4,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
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
// 0x5bbb620

void Characters_BaseHitbox__OnHit
               (Characters_BaseHitbox_o *__this,Characters_BaseCharacter_o *victim,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547528 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547528 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pCVar2 = (__this->fields).Owner;
    bVar3 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)victim,
                       (MethodInfo_4FB3720 *)
                       MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      (*(pCVar2->klass->vtable)._89_OnHit.methodPtr)
                (pCVar2,__this,(Il2CppObject *)victim,collider,"",!bVar3,
                 (pCVar2->klass->vtable)._89_OnHit.method);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)victim,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$OnHit
// il2cpp: void Characters_BaseHitbox__OnHit (Characters_BaseHitbox_o* __this, CustomLogic_CustomLogicCollisionHandler_o* handler, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x5bbb6f0

void Characters_BaseHitbox__OnHit_5abb6f0
               (Characters_BaseHitbox_o *__this,CustomLogic_CustomLogicCollisionHandler_o *handler,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547529 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547529 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pCVar2 = (__this->fields).Owner;
    bVar3 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)handler,
                       (MethodInfo_4FB3720 *)
                       MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      (*(pCVar2->klass->vtable)._89_OnHit.methodPtr)
                (pCVar2,__this,(Il2CppObject *)handler,collider,"",bVar3,
                 (pCVar2->klass->vtable)._89_OnHit.method);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)handler,
                   (MethodInfo_4FB4450 *)
                   MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseHitbox$$ToggleDebug
// il2cpp: void Characters_BaseHitbox__ToggleDebug (Characters_BaseHitbox_o* __this, bool toggle, const MethodInfo* method);
// 0x5bbb030

void Characters_BaseHitbox__ToggleDebug(Characters_BaseHitbox_o *__this,bool toggle,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754752a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754752a = '\x01';
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
    return;
  }
  return;
}


// Characters.BaseHitbox$$.ctor
// il2cpp: void Characters_BaseHitbox___ctor (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x5bbb7c0

void Characters_BaseHitbox___ctor(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_GameObject__o *__this_00;
  System_Collections_Generic_HashSet_Collider__o *__this_01;
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_02;
  System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *__this_03;
  
  if (Il2CppMethodInitialized_0754752b == '\0') {
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
    Il2CppMethodInitialized_0754752b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
  (__this->fields)._hitGameObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hitGameObjects);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Collider_ctor);
  (__this->fields)._firstFrameColliders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstFrameColliders);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_02,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._firstHitCharacters = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstHitCharacters);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_03,
             (MethodInfo_4FB2EA0 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_ctor);
  (__this->fields)._firstHitHandlers = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstHitHandlers);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


