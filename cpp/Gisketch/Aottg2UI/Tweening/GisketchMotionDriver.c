// Type: Gisketch.Aottg2UI.Tweening.GisketchMotionDriver
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchMotionDriver.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.ActiveTween$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o* __this, DG_Tweening_Tween_o* tween, bool blocksInput, int32_t createdFrame, const MethodInfo* method);
// 0x532aa40

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *__this,
               DG_Tweening_Tween_o *tween,bool blocksInput,int32_t createdFrame,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Tween = tween;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tween);
  (__this->fields).BlocksInput = blocksInput;
  (__this->fields).CreatedFrame = createdFrame;
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___cctor (const MethodInfo* method);
// 0x532afd0

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07542839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
    Il2CppMethodInitialized_07542839 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, const MethodInfo* method);
// 0x532b040

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$<CompleteActive>b__14_0
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___CompleteActive_b__14_0 (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o* tween, const MethodInfo* method);
// 0x532b050

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___CompleteActive_b__14_0
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *__this,
               Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *tween,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  
  if (tween == (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *)0x0) {
    ThrowNullReferenceException();
  }
  pDVar1 = (tween->fields).Tween;
  if (pDVar1 == (DG_Tweening_Tween_o *)0x0) {
    return true;
  }
  return (pDVar1->fields)._active_k__BackingField == false;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x532aa30

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$<Track>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___Track_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x532b080

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___Track_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  DG_Tweening_TweenCallback_o *pDVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar2;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754283a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754283a = '\x01';
  }
  pDVar1 = (__this->fields).onKill;
  if (pDVar1 != (DG_Tweening_TweenCallback_o *)0x0) {
    (*(code *)(pDVar1->fields).invoke_impl)((pDVar1->fields).method_code);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
    if ((pGVar2 == (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) ||
       (__this_00 = (pGVar2->fields)._active,
       __this_00 == (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0)) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)(__this->fields).active,
               (MethodInfo_395ED70 *)
               MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_Remove);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Track
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track (DG_Tweening_Tween_o* tween, bool blocksInput, const MethodInfo* method);
// 0x5326780

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
          (DG_Tweening_Tween_o *tween,bool blocksInput,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o **targetAddress;
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *pGVar3;
  MethodInfo *pMVar4;
  int32_t iVar5;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *__this_00;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *pGVar6;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar7;
  DG_Tweening_TweenCallback_o *__this_01;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c *method_00;
  
  if (Il2CppMethodInitialized_0754282f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Tween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c__DisplayClass3_0_Track_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c__DisplayClass3_0);
    Il2CppMethodInitialized_0754282f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c__DisplayClass3_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (tween == (DG_Tweening_Tween_o *)0x0) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  pGVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween);
  System_Object___ctor((Il2CppObject *)pGVar6,(MethodInfo *)0x0);
  (pGVar6->fields).Tween = tween;
  Il2CppCodeGenWriteBarrier(&(pGVar6->fields).Tween);
  (pGVar6->fields).BlocksInput = blocksInput;
  (pGVar6->fields).CreatedFrame = iVar5;
  if (__this_00 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *)0x0) {
    targetAddress = &(__this_00->fields).active;
    (__this_00->fields).active = pGVar6;
    Il2CppCodeGenWriteBarrier(targetAddress);
    method_00 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    pGVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure((MethodInfo *)method_00);
    pMVar4 = MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_Add;
    if ((pGVar7 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) &&
       (__this = (pGVar7->fields)._active,
       __this != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0)) {
      pGVar6 = *targetAddress;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar3 = (__this->fields)._items;
      if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pGVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pGVar3->m_Items[(int)uVar2] = pGVar6;
          Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar6,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        (__this_00->fields).onKill = (tween->fields).onKill;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).onKill);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  (__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c__DisplayClass3_0_Track_b__0,
                   (MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__OnKill_object_
                  ((Il2CppObject *)tween,__this_01,
                   (MethodInfo_36AF8D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Tween);
        return tween;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_HasActive
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive (const MethodInfo* method);
// 0x531aaf0
// eh: try 0x531ac24..0x531ac7d -> pad 0x531ac84 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x531ac9c..0x531aca1 -> pad 0x531acc7 cleanup
// eh: try 0x531acca..0x531acd4 -> pad 0x531acdc catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531ac82: jmp 0x531ac84
// asm:   0x531ac84: mov rbx, rax
// asm:   0x531ac87: cmp edx, 1
// asm:   0x531ac8a: jne 0x531acca
// asm:   0x531ac8c: mov rdi, rbx
// asm:   0x531ac8f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x531ac94: mov r14, qword ptr [rax]
// asm:   0x531ac97: mov qword ptr [rsp + 0x18], r14
// asm:   0x531ac9c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x531aca1: lea rax, [rip + 0x1f74540]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_Dispose
// asm:   0x531aca8: mov rsi, qword ptr [rax]
// asm:   0x531acab: mov rdi, rsp
// asm:   0x531acae: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x531acb3: xor ebx, ebx
// asm:   0x531acb5: mov ebp, 0
// asm:   0x531acba: test r14, r14
// asm:   0x531acbd: je 0x531ac60
// asm:   0x531acbf: mov rdi, r14
// asm:   0x531acc2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x531acc7: mov rbx, rax
// asm:   0x531acca: lea rdi, [rsp + 0x18]
// asm:   0x531accf: call 0x2d4a170  ; il2cpp_runtime_helper_02d4a170()
// asm:   0x531acd4: mov rdi, rbx
// asm:   0x531acd7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x531acdc: mov rdi, rax
// asm:   0x531acdf: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar1;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this;
  bool bVar2;
  bool bVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07542830 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542830 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
    if ((pGVar1 == (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) ||
       (__this = (pGVar1->fields)._active,
       __this == (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0)) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_GetEnumerator);
    local_30 = 0;
    local_28 = (undefined1 *)&local_48;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_MoveNext
                        );
      if (!bVar3) {
        iVar4 = 6;
        goto label_0531ac4e;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
    } while (*(char *)&local_48.fields._current[1].monitor == '\0');
    iVar4 = 5;
label_0531ac4e:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_Dispose)
    ;
    bVar3 = iVar4 == 5 && bVar3;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Update
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Update (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x532abe0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532ac05: cmp byte ptr [rip + 0x2217c29], 0
// asm:   0x532acad: jmp 0x532ac21

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Update
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c *method_00;
  
  if (Il2CppMethodInitialized_07542831 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_07542831 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  if (Il2CppMethodInitialized_07542835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_07542835 = '\x01';
  }
  bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if ((!bVar2) && (bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0), !bVar2)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    bVar2 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
    Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip((MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip
            ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActiveForSkip
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip (const MethodInfo* method);
// 0x531bf80

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  MethodInfo *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07542832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542832 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver;
  }
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver =
       (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)klass);
  }
  else {
    bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)klass);
  }
  if (bVar3) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = false;
    method_00 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
      if (pGVar2 == (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) {
        ThrowNullReferenceException();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive(pGVar2,method_00);
      iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_lastSkipFrame = iVar5;
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_ConsumedSkipThisFrame
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_ConsumedSkipThisFrame (const MethodInfo* method);
// 0x531bf30

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_ConsumedSkipThisFrame(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07542833 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_07542833 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  iVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_lastSkipFrame;
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  return iVar1 == iVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Ensure
// il2cpp: Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure (const MethodInfo* method);
// 0x532aa80

Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar2;
  
  if (Il2CppMethodInitialized_07542834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Motion Driver");
    Il2CppMethodInitialized_07542834 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
  }
  else {
    target = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject)
    ;
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)target,"AoTTG Motion Driver",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
    if (target == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)target,
                        (MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchMotionDriver);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance = pGVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance);
  }
  return TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$SkipPressed
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__SkipPressed (const MethodInfo* method);
// 0x532acc0

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__SkipPressed(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_07542835 = '\x01';
  }
  bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
        bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
        return bVar1;
      }
      bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$IsBackKeyDown
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsBackKeyDown (const MethodInfo* method);
// 0x531bf20

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsBackKeyDown(MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$IsKeyboardSkip
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsKeyboardSkip (int32_t key, const MethodInfo* method);
// 0x532af00

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsKeyboardSkip(int32_t key,MethodInfo *method)

{
  return key == 0x1b;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActive
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x532ad30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532ae40: test rbx, rbx
// asm:   0x532ae43: je 0x532aee7

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *pSVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *t;
  int32_t iVar3;
  System_Object_array *pSVar4;
  il2cpp_array_size_t iVar5;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_StaticFields *pGVar6;
  System_Predicate_T__o *match;
  uint uVar7;
  
  if (Il2CppMethodInitialized_07542836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GisketchMotionDriver_ActiveTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c_CompleteActive_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
    Il2CppMethodInitialized_07542836 = '\x01';
  }
  iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  pSVar1 = (__this->fields)._active;
  if ((pSVar1 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) &&
     (pSVar4 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)pSVar1,
                          (MethodInfo_395F5A0 *)
                          MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ToArray)
     , pSVar4 != (System_Object_array *)0x0)) {
    iVar5 = pSVar4->max_length;
    if (0 < (int)iVar5) {
      uVar7 = 0;
      do {
        if ((uint)iVar5 <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        pIVar2 = pSVar4->m_Items[(int)uVar7];
        if (pIVar2 == (Il2CppObject *)0x0) goto label_0532aee7;
        if (((*(int *)((long)&pIVar2[1].monitor + 4) != iVar3) &&
            (t = pIVar2[1].klass, t != (Il2CppClass *)0x0)) && (*(bool *)&(t->_2).cctor_thread != false)) {
          DG_Tweening_TweenExtensions__Complete_316c0b0((DG_Tweening_Tween_o *)t,true,(MethodInfo *)0x0);
          iVar5 = pSVar4->max_length;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)iVar5);
    }
    pSVar1 = (__this->fields)._active;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields;
      match = (System_Predicate_T__o *)pGVar6->__9__14_0;
    }
    else {
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields;
      match = (System_Predicate_T__o *)pGVar6->__9__14_0;
    }
    if (match == (System_Predicate_T__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
        pGVar6 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pGVar6->__9;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Predicate_GisketchMotionDriver_ActiveTween);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,pIVar2,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c_CompleteActive_b__14_0
                 ,(MethodInfo_3DC95B0 *)0x0);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields;
      pGVar6->__9__14_0 = (System_Predicate_GisketchMotionDriver_ActiveTween__o *)match;
      Il2CppCodeGenWriteBarrier(&pGVar6->__9__14_0);
    }
    if (pSVar1 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAll
                ((System_Collections_Generic_List_object__o *)pSVar1,match,
                 (MethodInfo_395EF50 *)
                 MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_RemoveAll);
      return;
    }
  }
label_0532aee7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x532af10

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this_00;
  
  if (Il2CppMethodInitialized_07542837 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween);
    Il2CppMethodInitialized_07542837 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ctor);
  (__this->fields)._active = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___cctor (const MethodInfo* method);
// 0x532af90

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_07542838 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_lastSkipFrame = -1;
  return;
}


