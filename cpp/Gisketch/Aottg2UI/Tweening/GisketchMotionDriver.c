// Type: Gisketch.Aottg2UI.Tweening.GisketchMotionDriver
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchMotionDriver.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.ActiveTween$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o* __this, DG_Tweening_Tween_o* tween, bool blocksInput, int32_t createdFrame, const MethodInfo* method);
// 0x181882de0

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *__this,
               DG_Tweening_Tween_o *tween,bool blocksInput,int32_t createdFrame,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Tween = tween;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tween,tween);
  (__this->fields).BlocksInput = blocksInput;
  (__this->fields).CreatedFrame = createdFrame;
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___cctor (const MethodInfo* method);
// 0x1818a3720

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *__this;
  
  if (Il2CppMethodInitialized_184341ef8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
    Il2CppMethodInitialized_184341ef8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$<CompleteActive>b__14_0
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___CompleteActive_b__14_0 (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o* tween, const MethodInfo* method);
// 0x1818a2ba0

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___CompleteActive_b__14_0
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *__this,
               Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *tween,MethodInfo *method)

{
  if (tween == (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((tween->fields).Tween == (DG_Tweening_Tween_o *)0x0) {
    return true;
  }
  return (((tween->fields).Tween)->fields)._active_k__BackingField == false;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$<Track>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___Track_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x1818a3140

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___Track_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  DG_Tweening_TweenCallback_o *pDVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar2;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184341ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ef9 = '\x01';
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
               (MethodInfo_947340 *)
               MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_Remove);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Track
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track (DG_Tweening_Tween_o* tween, bool blocksInput, const MethodInfo* method);
// 0x181885df0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18188604b: mov rax, qword ptr [rip + 0x27ff59e]  ; TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
          (DG_Tweening_Tween_o *tween,bool blocksInput,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *pGVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  int32_t iVar6;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *object;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *pGVar7;
  UnityEngine_Object_o *target;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar8;
  DG_Tweening_TweenCallback_o *pDVar9;
  
  if (Il2CppMethodInitialized_184341eee == '\0') {
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
    Il2CppMethodInitialized_184341eee = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c__DisplayClass3_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (tween == (DG_Tweening_Tween_o *)0x0) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  iVar6 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  pGVar7 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar7,(MethodInfo *)0x0);
  (pGVar7->fields).Tween = tween;
  Il2CppCodeGenWriteBarrier(&(pGVar7->fields).Tween,tween);
  (pGVar7->fields).BlocksInput = blocksInput;
  (pGVar7->fields).CreatedFrame = iVar6;
  if (object != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *)0x0) {
    (object->fields).active = pGVar7;
    Il2CppCodeGenWriteBarrier(&(object->fields).active,pGVar7);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    if (Il2CppMethodInitialized_184341ef3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchMotionDriver);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Motion Driver");
      Il2CppMethodInitialized_184341ef3 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    pGVar8 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
    }
    else {
      target = (UnityEngine_Object_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor
                ((UnityEngine_GameObject_o *)target,"AoTTG Motion Driver",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      if (target == (UnityEngine_Object_o *)0x0) goto label_181886151;
      pGVar8 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)target,
                          (MethodInfo_6F4D60 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_GisketchMotionDriver);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance = pGVar8;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance,pGVar8);
    }
    pMVar4 = MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_Add;
    pGVar8 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
    if ((pGVar8 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) &&
       (__this = (pGVar8->fields)._active,
       __this != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0)) {
      pGVar7 = (object->fields).active;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar3 = (__this->fields)._items;
      if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pGVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pGVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pGVar3->m_Items[(int)uVar2] = pGVar7;
          Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2,pGVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar7,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        pDVar9 = (tween->fields).onKill;
        (object->fields).onKill = pDVar9;
        Il2CppCodeGenWriteBarrier(&(object->fields).onKill,pDVar9);
        pDVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pDVar9,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c__DisplayClass3_0_Track_b__0,
                   (MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__OnKill_object_
                  ((Il2CppObject *)tween,pDVar9,
                   (MethodInfo_7C9310 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Tween);
        return tween;
      }
    }
  }
label_181886151:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_HasActive
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive (const MethodInfo* method);
// 0x181886340
// eh: try 0x181886480..0x1818864f6 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181886479: nop dword ptr [rax]
// asm:   0x1818864cd: mov rdx, qword ptr [rip + 0x281ce8c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_Dispose
// asm:   0x1818864d4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818864d9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818864de: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818864e3: test rcx, rcx
// asm:   0x1818864e6: jne 0x1818864f6
// asm:   0x1818864f6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar1;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this;
  bool bVar2;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184341eef == '\0') {
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
    Il2CppMethodInitialized_184341eef = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
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
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_MoveNext
                        );
      if (!bVar2) break;
      if (local_28.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(char *)&local_28.fields._current[1].monitor != '\0') {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_Dispose
                  );
        return true;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionDriver_ActiveTween_Dispose)
    ;
  }
  return false;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Update
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Update (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x181886160

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Update
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341ef0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_184341ef0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  if (Il2CppMethodInitialized_184341ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_184341ef4 = '\x01';
  }
  bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActiveForSkip
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip (const MethodInfo* method);
// 0x181885760

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar1;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *pSVar2;
  System_String_o *pSVar3;
  Il2CppObject *object;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  System_Predicate_T__o *match;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184341ef1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ef1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  bVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
      if (pGVar1 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) {
        if (Il2CppMethodInitialized_184341ef5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_RemoveAll);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ToArray);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Predicate_GisketchMotionDriver_ActiveTween);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c_CompleteActive_b__14_0);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
          Il2CppMethodInitialized_184341ef5 = '\x01';
        }
        iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
        pSVar2 = (pGVar1->fields)._active;
        if (pSVar2 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) {
          pUVar6 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                             ((System_Collections_Generic_List_T__o *)pSVar2,
                              (MethodInfo_929FE0 *)
                              MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ToArray
                             );
          if (pUVar6 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                         *)0x0) {
            for (uVar7 = 0; (int)uVar7 < (int)pUVar6->max_length; uVar7 = uVar7 + 1) {
              if ((uint)pUVar6->max_length <= uVar7) {
                ThrowIndexOutOfRangeException();
              }
              pSVar3 = (&pUVar6->m_Items[0].fields.message)[(int)uVar7];
              if (pSVar3 == (System_String_o *)0x0) goto label_181885a0c;
              if (((*(int *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4) != iVar5) &&
                  (pSVar3->fields != (System_String_Fields)0x0)) &&
                 (*(bool *)((longlong)pSVar3->fields + 0xe8) != false)) {
                DG_Tweening_TweenExtensions__Complete_55b680
                          ((DG_Tweening_Tween_o *)pSVar3->fields,true,(MethodInfo *)0x0);
              }
            }
            pSVar2 = (pGVar1->fields)._active;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
            }
            match = (System_Predicate_T__o *)
                    TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9__14_0;
            if (match == (System_Predicate_T__o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
              }
              object = (Il2CppObject *)
                       TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9;
              match = (System_Predicate_T__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Predicate_GisketchMotionDriver_ActiveTween);
              System_Predicate_object____ctor
                        ((System_Predicate_object__o *)match,object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c_CompleteActive_b__14_0,
                         (MethodInfo_B61EB0 *)0x0);
              TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9__14_0 =
                   (System_Predicate_GisketchMotionDriver_ActiveTween__o *)match;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9__14_0
                         ,match);
            }
            if (pSVar2 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) {
              System_Collections_Generic_List_object___RemoveAll
                        ((System_Collections_Generic_List_object__o *)pSVar2,match,
                         (MethodInfo_946210 *)
                         MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_RemoveAll
                        );
              iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
              TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_lastSkipFrame = iVar5;
              return true;
            }
          }
        }
      }
label_181885a0c:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_ConsumedSkipThisFrame
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_ConsumedSkipThisFrame (const MethodInfo* method);
// 0x1818862e0

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_ConsumedSkipThisFrame(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184341ef2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_184341ef2 = '\x01';
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
// 0x181885be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181885d32: mov rax, qword ptr [rip + 0x27ff8b7]  ; TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver

Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar2;
  
  if (Il2CppMethodInitialized_184341ef3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Motion Driver");
    Il2CppMethodInitialized_184341ef3 = '\x01';
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
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchMotionDriver);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance = pGVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance,pGVar2);
  }
  return TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_instance;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$SkipPressed
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__SkipPressed (const MethodInfo* method);
// 0x181885d80

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__SkipPressed(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_184341ef4 = '\x01';
  }
  bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$IsBackKeyDown
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsBackKeyDown (const MethodInfo* method);
// 0x181885d50

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsBackKeyDown(MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$IsKeyboardSkip
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsKeyboardSkip (int32_t key, const MethodInfo* method);
// 0x181885d70

bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsKeyboardSkip(int32_t key,MethodInfo *method)

{
  return key == 0x1b;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActive
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x181885a20

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *pSVar1;
  System_String_o *pSVar2;
  Il2CppObject *object;
  int32_t iVar3;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  System_Predicate_T__o *match;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184341ef5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GisketchMotionDriver_ActiveTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c_CompleteActive_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
    Il2CppMethodInitialized_184341ef5 = '\x01';
  }
  iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  pSVar1 = (__this->fields)._active;
  if (pSVar1 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) {
    pUVar4 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                       ((System_Collections_Generic_List_T__o *)pSVar1,
                        (MethodInfo_929FE0 *)
                        MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ToArray);
    if (pUVar4 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                   *)0x0) {
      for (uVar5 = 0; (int)uVar5 < (int)pUVar4->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pUVar4->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        pSVar2 = (&pUVar4->m_Items[0].fields.message)[(int)uVar5];
        if (pSVar2 == (System_String_o *)0x0) goto label_181885bc9;
        if (((*(int *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4) != iVar3) &&
            (pSVar2->fields != (System_String_Fields)0x0)) &&
           (*(bool *)((longlong)pSVar2->fields + 0xe8) != false)) {
          DG_Tweening_TweenExtensions__Complete_55b680
                    ((DG_Tweening_Tween_o *)pSVar2->fields,true,(MethodInfo *)0x0);
        }
      }
      pSVar1 = (__this->fields)._active;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
      }
      match = (System_Predicate_T__o *)
              TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9__14_0;
      if (match == (System_Predicate_T__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c);
        }
        object = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9;
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Predicate_GisketchMotionDriver_ActiveTween);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c_CompleteActive_b__14_0,
                   (MethodInfo_B61EB0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9__14_0 =
             (System_Predicate_GisketchMotionDriver_ActiveTween__o *)match;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c->static_fields->__9__14_0,match
                  );
      }
      if (pSVar1 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) {
        System_Collections_Generic_List_object___RemoveAll
                  ((System_Collections_Generic_List_object__o *)pSVar1,match,
                   (MethodInfo_946210 *)
                   MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_RemoveAll);
        return;
      }
    }
  }
label_181885bc9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x181886260

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this_00;
  
  if (Il2CppMethodInitialized_184341ef6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween);
    Il2CppMethodInitialized_184341ef6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_GisketchMotionDriver_ActiveTween_ctor);
  (__this->fields)._active = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___cctor (const MethodInfo* method);
// 0x181886220

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184341ef7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_184341ef7 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_lastSkipFrame = -1;
  return;
}


