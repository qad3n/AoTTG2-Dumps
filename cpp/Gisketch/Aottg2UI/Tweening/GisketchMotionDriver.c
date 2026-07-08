// Type: Gisketch.Aottg2UI.Tweening.GisketchMotionDriver
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchMotionDriver.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.ActiveTween$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o* __this, DG_Tweening_Tween_o* tween, bool blocksInput, int32_t createdFrame, const MethodInfo* method);
// 0x3acab10

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *__this,
               DG_Tweening_Tween_o *tween,bool_conflict blocksInput,int32_t createdFrame,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Tween = tween;
  il2cpp_runtime_glue(&__this->fields,tween);
  *(char *)&(__this->fields).BlocksInput = (char)blocksInput;
  (__this->fields).CreatedFrame = createdFrame;
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___cctor (const MethodInfo* method);
// 0x3acb0a0

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05701332 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05701332 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, const MethodInfo* method);
// 0x3acb110

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_<>c___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$<CompleteActive>b__13_0
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___CompleteActive_b__13_0 (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o* tween, const MethodInfo* method);
// 0x3acb120

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_<>c__<CompleteActive>b__13_0
          (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *__this,
          Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *tween,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  
  if (tween == (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pDVar1 = (tween->fields).Tween;
  if (pDVar1 != (DG_Tweening_Tween_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pDVar1 >> 8),*(char *)&(pDVar1->fields).typeofT1 == '\0');
  }
  return 1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x3acab00

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_<>c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$<Track>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___Track_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x3acb150

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_<>c__DisplayClass3_0__<Track>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  DG_Tweening_TweenCallback_o *pDVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05701333 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701333 = '\x01';
  }
  pDVar1 = (__this->fields).onKill;
  if (pDVar1 != (DG_Tweening_TweenCallback_o *)0x0) {
    (*(code *)(pDVar1->fields).invoke_impl)((pDVar1->fields).method_code);
  }
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchMotionDriver + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((**(long **)(TypeInfo_GisketchMotionDriver + 0xb8) != 0) &&
       (__this_00 = *(System_Collections_Generic_List_object__o **)
                     (**(long **)(TypeInfo_GisketchMotionDriver + 0xb8) + 0x20),
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__Remove
                (__this_00,(Il2CppObject *)(__this->fields).active,MethodInfo_Boolean_Remove);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Track
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track (DG_Tweening_Tween_o* tween, bool blocksInput, const MethodInfo* method);
// 0x3ac6850

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
          (DG_Tweening_Tween_o *tween,bool_conflict blocksInput,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *item;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *pGVar3;
  long lVar4;
  int32_t iVar5;
  Il2CppObject *__this_00;
  Il2CppObject *__this_01;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar6;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *method_00;
  
  if (DAT_05701328 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ActiveTween);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tween_OnKill_Tween);
    il2cpp_init_method_metadata(&MethodInfo_Void__Track_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    DAT_05701328 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (tween == (DG_Tweening_Tween_o *)0x0) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ActiveTween);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = (Il2CppClass *)tween;
  il2cpp_runtime_glue(__this_01 + 1,tween);
  *(char *)&__this_01[1].monitor = (char)blocksInput;
  *(int32_t *)((long)&__this_01[1].monitor + 4) = iVar5;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = __this_01;
    il2cpp_runtime_glue(&__this_00[1].monitor,__this_01);
    method_00 = TypeInfo_GisketchMotionDriver;
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    pGVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure(method_00);
    lVar4 = MethodInfo_Void_Add;
    if ((pGVar6 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) &&
       (__this = (pGVar6->fields)._active,
       __this != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0)) {
      item = __this_00[1].monitor;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar3 = (__this->fields)._items;
      if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pGVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pGVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pGVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        __this_00[1].klass = (Il2CppClass *)(tween->fields).onComplete;
        il2cpp_runtime_glue(__this_00 + 1);
        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__OnKill<object>
                  ((Il2CppObject *)tween,action,MethodInfo_Tween_OnKill_Tween);
        return tween;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_HasActive
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive (const MethodInfo* method);
// 0x3ac1010

bool_conflict Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (DAT_05701329 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GisketchMotionDriver_ActiveTween_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Tweening);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701329 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchMotionDriver + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = 0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((**(long **)(TypeInfo_GisketchMotionDriver + 0xb8) == 0) ||
       (__this = *(System_Collections_Generic_List_object__o **)
                  (**(long **)(TypeInfo_GisketchMotionDriver + 0xb8) + 0x20),
       __this == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,__this,
               MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Tweening);
    do {
      __this_00.fields._8_8_ = pIVar6;
      __this_00.fields._list = pSVar5;
      __this_00.fields._current = pIVar7;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') {
        iVar3 = 6;
        bVar4 = 0;
        goto LAB_03ac1161;
      }
      if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    } while (*(char *)&pIVar7[1].monitor == '\0');
    bVar4 = 1;
    iVar3 = 5;
LAB_03ac1161:
    __this_01.fields._8_8_ = pIVar6;
    __this_01.fields._list = pSVar5;
    __this_01.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    uVar2 = (uint)(iVar3 == 5 & bVar4);
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Update
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Update (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x3acacb0

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Update
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_0570132a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    DAT_0570132a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570132e == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570132e = '\x01';
  }
  bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) != 0) {
    Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(TypeInfo_GisketchMotionDriver);
    return;
  }
  method_00 = TypeInfo_GisketchMotionDriver;
  il2cpp_init_class();
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActiveForSkip
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip (const MethodInfo* method);
// 0x3ac22c0

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  char cVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  MethodInfo *pMVar6;
  
  if (DAT_0570132b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570132b = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
    pMVar6 = TypeInfo_GisketchMotionDriver;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
    pMVar6 = TypeInfo_GisketchMotionDriver;
  }
  TypeInfo_GisketchMotionDriver = pMVar6;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(pMVar6);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(pMVar6);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    x = *(UnityEngine_Object_o **)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = 0;
    pMVar6 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      if (*(Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o **)
           TypeInfo_GisketchMotionDriver[2].virtualMethodPointer ==
          (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive
                (*(Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o **)
                  TypeInfo_GisketchMotionDriver[2].virtualMethodPointer,pMVar6);
      iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      *(int32_t *)(TypeInfo_GisketchMotionDriver[2].virtualMethodPointer + 8) = iVar5;
      bVar3 = 1;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_ConsumedSkipThisFrame
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_ConsumedSkipThisFrame (const MethodInfo* method);
// 0x3ac2270

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_ConsumedSkipThisFrame(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (DAT_0570132c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    DAT_0570132c = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = *(int *)(*(long *)(TypeInfo_GisketchMotionDriver + 0xb8) + 8);
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar1 == iVar2);
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Ensure
// il2cpp: Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure (const MethodInfo* method);
// 0x3acab50

Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure(MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_0570132d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchMotionDriver_AddComponent_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AoTTG Motion Driver");
    DAT_0570132d = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchMotionDriver + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pUVar2 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar2,"AoTTG Motion Driver",(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar3 = UnityEngine_GameObject__AddComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_GisketchMotionDriver_AddComponent_GisketchMotion);
    if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
      il2cpp_init_class();
    }
    **(undefined8 **)(TypeInfo_GisketchMotionDriver + 0xb8) = pIVar3;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchMotionDriver + 0xb8),pIVar3);
  }
  else if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_init_class();
  }
  return (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)**(undefined8 **)(TypeInfo_GisketchMotionDriver + 0xb8)
  ;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$SkipPressed
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__SkipPressed (const MethodInfo* method);
// 0x3acad90

bool_conflict Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__SkipPressed(MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_0570132e == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570132e = '\x01';
  }
  bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) != 0) {
        bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
        return bVar1;
      }
      il2cpp_init_class();
      bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$IsKeyboardSkip
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsKeyboardSkip (int32_t key, const MethodInfo* method);
// 0x3acafd0

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsKeyboardSkip(int32_t key,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),key == 0x1b);
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActive
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x3acae00

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *t;
  long lVar5;
  int32_t iVar6;
  System_Object_array *pSVar7;
  System_Predicate_T__o *match;
  uint uVar8;
  
  if (DAT_0570132f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveAll);
    il2cpp_init_method_metadata(&MethodInfo_GisketchMotionDriver_ActiveTween___ToArray);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_ActiveTween);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__CompleteActive_b__13_0);
    il2cpp_init_method_metadata();
    DAT_0570132f = '\x01';
  }
  iVar6 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  pSVar3 = (__this->fields)._active;
  if ((pSVar3 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) &&
     (pSVar7 = System_Collections_Generic_List<object>__ToArray
                         ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchMotionDriver_ActiveTween___ToArray),
     pSVar7 != (System_Object_array *)0x0)) {
    iVar1 = (int)pSVar7->max_length;
    if (0 < iVar1) {
      uVar8 = 0;
      if (iVar1 != 0) {
        do {
          pIVar4 = pSVar7->m_Items[(int)uVar8];
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03acafb7;
          if (((*(int *)((long)&pIVar4[1].monitor + 4) != iVar6) &&
              (t = pIVar4[1].klass, t != (Il2CppClass *)0x0)) &&
             (*(char *)&(t->_2).cctor_thread != '\0')) {
            DG_Tweening_TweenExtensions__Complete((DG_Tweening_Tween_o *)t,1,(MethodInfo *)0x0);
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)pSVar7->max_length;
          if ((int)uVar2 <= (int)uVar8) goto LAB_03acaee9;
        } while (uVar8 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03acaee9:
    pSVar3 = (__this->fields)._active;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (match == (System_Predicate_T__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_ActiveTween);
      System_Predicate<object>___ctor();
      lVar5 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Predicate_T__o **)(lVar5 + 8) = match;
      il2cpp_runtime_glue(lVar5 + 8,match);
    }
    if (pSVar3 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)pSVar3,match,MethodInfo_Int32_RemoveAll);
      return;
    }
  }
LAB_03acafb7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x3acafe0

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this_00;
  
  if (DAT_05701330 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_List_ActiveTween);
    DAT_05701330 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)
              il2cpp_runtime_glue(TypeInfo_List_ActiveTween);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  (__this->fields)._active = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._active);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___cctor (const MethodInfo* method);
// 0x3acb060

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___cctor(MethodInfo *method)

{
  if (DAT_05701331 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    DAT_05701331 = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_GisketchMotionDriver + 0xb8) + 8) = 0xffffffff;
  return;
}


