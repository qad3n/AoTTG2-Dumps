// Type: Settings.MobileInput
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/MobileInput.cs
// Prior real C# source: none
// --------------------------------

// Settings.MobileInput$$GetKey
// il2cpp: bool Settings_MobileInput__GetKey (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce150

bool Settings_MobileInput__GetKey(Settings_MobileInput_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545c50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_07545c50 = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    return false;
  }
  return false;
}


// Settings.MobileInput$$GetKeyDown
// il2cpp: bool Settings_MobileInput__GetKeyDown (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce1d0

bool Settings_MobileInput__GetKeyDown(Settings_MobileInput_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545c51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_07545c51 = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    return false;
  }
  return false;
}


// Settings.MobileInput$$GetKeyUp
// il2cpp: bool Settings_MobileInput__GetKeyUp (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce220

bool Settings_MobileInput__GetKeyUp(Settings_MobileInput_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545c52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_07545c52 = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    return false;
  }
  return false;
}


// Settings.MobileInput$$SetPressed
// il2cpp: void Settings_MobileInput__SetPressed (Settings_MobileInput_o* __this, bool pressed, const MethodInfo* method);
// 0x59ce270

void Settings_MobileInput__SetPressed(Settings_MobileInput_o *__this,bool pressed,MethodInfo *method)

{
  int32_t iVar1;
  
  (__this->fields)._oneFrameReleaseFrame = -1;
  if ((__this->fields)._current != pressed) {
    (__this->fields)._current = pressed;
    iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (!pressed) {
      (__this->fields)._releasedFrame = iVar1;
      (__this->fields)._pressedFrame = -1;
      (__this->fields)._keyDownReturnedFrame = -1;
      return;
    }
    (__this->fields)._pressedFrame = iVar1;
    (__this->fields)._releasedFrame = -1;
    (__this->fields)._keyUpReturnedFrame = -1;
  }
  return;
}


// Settings.MobileInput$$SetPressedOverride
// il2cpp: void Settings_MobileInput__SetPressedOverride (Settings_MobileInput_o* __this, System_Func_bool__o* pressedOverride, const MethodInfo* method);
// 0x59ce2d0

void Settings_MobileInput__SetPressedOverride
               (Settings_MobileInput_o *__this,System_Func_bool__o *pressedOverride,MethodInfo *method)

{
  (__this->fields)._pressedOverride = pressedOverride;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedOverride);
  return;
}


// Settings.MobileInput$$PressForOneFrame
// il2cpp: void Settings_MobileInput__PressForOneFrame (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce2e0

void Settings_MobileInput__PressForOneFrame(Settings_MobileInput_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  (__this->fields)._oneFrameReleaseFrame = -1;
  if ((__this->fields)._current != true) {
    (__this->fields)._current = true;
    iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    (__this->fields)._pressedFrame = iVar1;
    (__this->fields)._releasedFrame = -1;
    (__this->fields)._keyUpReturnedFrame = -1;
  }
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields)._oneFrameReleaseFrame = iVar1 + 1;
  return;
}


// Settings.MobileInput$$LateUpdate
// il2cpp: void Settings_MobileInput__LateUpdate (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce320

void Settings_MobileInput__LateUpdate(Settings_MobileInput_o *__this,MethodInfo *method)

{
  System_Func_bool__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (-1 < (__this->fields)._oneFrameReleaseFrame) {
    iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (((__this->fields)._oneFrameReleaseFrame <= iVar3) &&
       ((__this->fields)._oneFrameReleaseFrame = -1, (__this->fields)._current != false)) {
      (__this->fields)._current = false;
      iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      (__this->fields)._releasedFrame = iVar3;
      (__this->fields)._pressedFrame = -1;
      (__this->fields)._keyDownReturnedFrame = -1;
    }
  }
  if ((__this->fields)._current != false) {
    (__this->fields)._previous = true;
    return;
  }
  pSVar1 = (__this->fields)._pressedOverride;
  if (pSVar1 == (System_Func_bool__o *)0x0) {
    (__this->fields)._previous = false;
    return;
  }
  bVar2 = (bool)(*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  (__this->fields)._previous = bVar2;
  return;
}


// Settings.MobileInput$$Clear
// il2cpp: void Settings_MobileInput__Clear (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce390

void Settings_MobileInput__Clear(Settings_MobileInput_o *__this,MethodInfo *method)

{
  (__this->fields)._oneFrameReleaseFrame = -1;
  (__this->fields)._current = false;
  (__this->fields)._previous = false;
  (__this->fields)._pressedFrame = -1;
  (__this->fields)._releasedFrame = -1;
  (__this->fields)._keyDownReturnedFrame = -1;
  (__this->fields)._keyUpReturnedFrame = -1;
  return;
}


// Settings.MobileInput$$RegisterDisplayName
// il2cpp: void Settings_MobileInput__RegisterDisplayName (Settings_MobileInput_o* __this, int32_t role, System_String_o* displayName, const MethodInfo* method);
// 0x59ce3b0

void Settings_MobileInput__RegisterDisplayName
               (Settings_MobileInput_o *__this,int32_t role,System_String_o *displayName,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_string___o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o *local_28;
  
  if (Il2CppMethodInitialized_07545c53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07545c53 = '\x01';
  }
  local_28 = (System_Collections_Generic_List_string__o *)0x0;
  bVar6 = System_String__IsNullOrWhiteSpace(displayName,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pSVar3 = (__this->fields)._displayNames;
  if (pSVar3 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_string___o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,role,
                       (Il2CppObject **)&local_28,
                       (MethodInfo_4A56D80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_TryGetValue
                      );
    if (!bVar6) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pSVar3 = (__this->fields)._displayNames;
      local_28 = __this_00;
      if (pSVar3 == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_string___o *)0x0)
      goto label_059ce528;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,role,
                 (Il2CppObject *)__this_00,
                 (MethodInfo_4A54FC0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_set_Item);
    }
    if (local_28 != (System_Collections_Generic_List_string__o *)0x0) {
      bVar6 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)local_28,(Il2CppObject *)displayName,
                         (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (bVar6) {
        return;
      }
      if (local_28 != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(local_28->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (local_28->fields)._items;
        if (pSVar4 != (System_String_array *)0x0) {
          uVar2 = (local_28->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (local_28->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = displayName;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)local_28,(Il2CppObject *)displayName,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
  }
label_059ce528:
  ThrowNullReferenceException();
}


// Settings.MobileInput$$ClearDisplayNames
// il2cpp: void Settings_MobileInput__ClearDisplayNames (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce530

void Settings_MobileInput__ClearDisplayNames(Settings_MobileInput_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_string___o *__this_00;
  
  if (Il2CppMethodInitialized_07545c54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_Clear);
    Il2CppMethodInitialized_07545c54 = '\x01';
  }
  __this_00 = (__this->fields)._displayNames;
  if (__this_00 == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_string___o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4A55190 *)
             MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_Clear);
  return;
}


// Settings.MobileInput$$GetDisplayName
// il2cpp: System_String_o* Settings_MobileInput__GetDisplayName (Settings_MobileInput_o* __this, UI_MobileInputLayoutRole_array* roles, const MethodInfo* method);
// 0x59ce570
// eh: try 0x59ce73d..0x59ce7e5 -> pad 0x59ce7ec (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59ce80c..0x59ce811 -> pad 0x59ce878 cleanup
// eh: try 0x59ce87b..0x59ce885 -> pad 0x59ce88d catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ce7ea: jmp 0x59ce7f4
// asm:   0x59ce7ec: jmp 0x59ce7f4
// asm:   0x59ce7ee: jmp 0x59ce7f4
// asm:   0x59ce7f0: jmp 0x59ce7f4
// asm:   0x59ce7f2: jmp 0x59ce7f4
// asm:   0x59ce7f4: mov r13, rax
// asm:   0x59ce7f7: cmp edx, 1
// asm:   0x59ce7fa: jne 0x59ce87b
// asm:   0x59ce7fc: mov rdi, r13
// asm:   0x59ce7ff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59ce804: mov r13, qword ptr [rax]
// asm:   0x59ce807: mov qword ptr [rsp + 8], r13
// asm:   0x59ce80c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59ce811: lea rax, [rip + 0x18c02e0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x59ce818: mov rsi, qword ptr [rax]
// asm:   0x59ce81b: mov rdi, rbp
// asm:   0x59ce81e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59ce823: test r13, r13
// asm:   0x59ce826: je 0x59ce6a2
// asm:   0x59ce82c: mov rdi, r13
// asm:   0x59ce82f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59ce878: mov r13, rax
// asm:   0x59ce87b: lea rdi, [rsp + 8]
// asm:   0x59ce880: call 0x2fd5800  ; il2cpp_runtime_helper_02fd5800()
// asm:   0x59ce885: mov rdi, r13
// asm:   0x59ce888: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59ce88d: mov rdi, rax
// asm:   0x59ce890: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Settings_MobileInput__GetDisplayName
          (Settings_MobileInput_o *__this,UI_MobileInputLayoutRole_array *roles,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_string___o *__this_00;
  MethodInfo *pMVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this_01;
  ulong uVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  ulong uVar8;
  System_Collections_Generic_List_object__o *pSStack_78;
  undefined1 auStack_70 [16];
  System_String_o *pSStack_60;
  undefined1 auStack_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  System_String_o *pSStack_48;
  UI_MobileInputLayoutRole_array *pUStack_40;
  Settings_MobileInput_o *pSStack_38;
  
  pSStack_38 = __this;
  if (Il2CppMethodInitialized_07545c55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    Il2CppMethodInitialized_07545c55 = '\x01';
  }
  pSStack_78 = (System_Collections_Generic_List_object__o *)0x0;
  auStack_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pSStack_48 = (System_String_o *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (roles != (UI_MobileInputLayoutRole_array *)0x0) {
    if (0 < (int)roles->max_length) {
      uVar5 = roles->max_length & 0xffffffff;
      uVar8 = 0;
      pUStack_40 = roles;
      do {
        if (uVar5 <= uVar8) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (pSStack_38->fields)._displayNames;
        if (__this_00 == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_string___o *)0x0)
        goto label_059ce86e;
        bVar4 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           roles->m_Items[uVar8],(Il2CppObject **)&pSStack_78,
                           (MethodInfo_4A56D80 *)
                           MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_TryGetValue
                          );
        if (bVar4) {
          if (pSStack_78 == (System_Collections_Generic_List_object__o *)0x0) goto label_059ce86e;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,pSStack_78,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          pSStack_48 = pSStack_60;
          auStack_58 = (undefined1  [8])auStack_70._0_8_;
          pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_70._8_8_;
          auStack_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          auStack_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_58;
          if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            if (bVar4) {
              ThrowNullReferenceException();
            }
          }
          else {
            while( true ) {
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
              pSVar7 = pSStack_48;
              if (!bVar4) break;
              bVar4 = System_Collections_Generic_List_object___Contains
                                ((System_Collections_Generic_List_object__o *)__this_01,
                                 (Il2CppObject *)pSStack_48,
                                 (MethodInfo_395D6D0 *)
                                 MethodInfo_System_Collections_Generic_List_string_Contains);
              pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (!bVar4) {
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (__this_01->fields)._items;
                if (pSVar6 == (System_String_array *)0x0) {
                  ThrowNullReferenceException();
                }
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pSVar6->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pSVar6->m_Items[(int)uVar2] = pSVar7;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar7,
                             (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          roles = pUStack_40;
        }
        uVar8 = uVar8 + 1;
        uVar2 = (uint)roles->max_length;
        uVar5 = (ulong)uVar2;
      } while ((long)uVar8 < (long)(int)uVar2);
    }
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar6 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_01,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar7 = System_String__Join(" / ",pSVar6,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
label_059ce86e:
  ThrowNullReferenceException();
}


// Settings.MobileInput$$IsPressed
// il2cpp: bool Settings_MobileInput__IsPressed (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce1a0

bool Settings_MobileInput__IsPressed(Settings_MobileInput_o *__this,MethodInfo *method)

{
  System_Func_bool__o *pSVar1;
  code *vtableDispatch;
  undefined1 uVar2;
  undefined8 in_RDX;
  
  if ((__this->fields)._current != false) {
    return true;
  }
  pSVar1 = (__this->fields)._pressedOverride;
  if (pSVar1 == (System_Func_bool__o *)0x0) {
    return false;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  uVar2 = (*vtableDispatch)
                    ((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return (bool)uVar2;
}


// Settings.MobileInput$$.ctor
// il2cpp: void Settings_MobileInput___ctor (Settings_MobileInput_o* __this, const MethodInfo* method);
// 0x59ce8a0

void Settings_MobileInput___ctor(Settings_MobileInput_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_string___o *__this_00;
  
  if (Il2CppMethodInitialized_07545c56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string);
    Il2CppMethodInitialized_07545c56 = '\x01';
  }
  (__this->fields)._pressedFrame = -1;
  (__this->fields)._releasedFrame = -1;
  (__this->fields)._keyDownReturnedFrame = -1;
  (__this->fields)._keyUpReturnedFrame = -1;
  (__this->fields)._oneFrameReleaseFrame = -1;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4A543B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_ctor);
  (__this->fields)._displayNames = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._displayNames);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


