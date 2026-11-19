// Type: Cameras.MinimapCameraRender
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/MinimapCameraRender.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// --------------------------------

// Cameras.MinimapCameraRender$$BeginRender
// il2cpp: void Cameras_MinimapCameraRender__BeginRender (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x5dd8b50
// eh: try 0x5dd8c7f..0x5dd8d76 -> pad 0x5dd8d7b (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dd8d9b..0x5dd8da0 -> pad 0x5dd8dc5 cleanup
// eh: try 0x5dd8dc8..0x5dd8dd2 -> pad 0x5dd8dda catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd8d7b: jmp 0x5dd8d83
// asm:   0x5dd8d7d: jmp 0x5dd8d83
// asm:   0x5dd8d7f: jmp 0x5dd8d83
// asm:   0x5dd8d81: jmp 0x5dd8d83
// asm:   0x5dd8d83: mov rbx, rax
// asm:   0x5dd8d86: cmp edx, 1
// asm:   0x5dd8d89: jne 0x5dd8dc8
// asm:   0x5dd8d8b: mov rdi, rbx
// asm:   0x5dd8d8e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd8d93: mov rbx, qword ptr [rax]
// asm:   0x5dd8d96: mov qword ptr [rsp + 8], rbx
// asm:   0x5dd8d9b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd8da0: lea rax, [rip + 0x14b55e9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose
// asm:   0x5dd8da7: mov rsi, qword ptr [rax]
// asm:   0x5dd8daa: lea rdi, [rsp + 0x20]
// asm:   0x5dd8daf: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5dd8db4: test rbx, rbx
// asm:   0x5dd8db7: je 0x5dd8d0e
// asm:   0x5dd8dbd: mov rdi, rbx
// asm:   0x5dd8dc0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dd8dc5: mov rbx, rax
// asm:   0x5dd8dc8: lea rdi, [rsp + 8]
// asm:   0x5dd8dcd: call 0x2fde830  ; il2cpp_runtime_helper_02fde830()
// asm:   0x5dd8dd2: mov rdi, rbx
// asm:   0x5dd8dd5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dd8dda: mov rdi, rax
// asm:   0x5dd8ddd: call 0x2ab61e0  ; __clang_call_terminate()

void Cameras_MinimapCameraRender__BeginRender(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_MapLight__o *pSVar3;
  Map_MapLight_array *pMVar4;
  MethodInfo *pMVar5;
  Il2CppObject *item;
  bool bVar6;
  float fVar7;
  UnityEngine_Color_Fields UVar8;
  UnityEngine_Color_o value;
  undefined1 local_60 [16];
  Map_MapLight_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_0754823c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754823c = '\x01';
  }
  pSVar3 = (__this->fields)._disabledLights;
  if (pSVar3 != (System_Collections_Generic_List_MapLight__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar3 = TypeInfo_Map_MapLoader->static_fields->MapLights;
    if (pSVar3 != (System_Collections_Generic_List_MapLight__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_object__o *)pSVar3,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
      local_48.fields._current = (Il2CppObject *)local_50;
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        do {
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
          item = local_48.fields._current;
          if (!bVar6) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (&local_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
            UVar8 = (UnityEngine_Color_Fields)UnityEngine_RenderSettings__get_ambientLight((MethodInfo *)0x0);
            (__this->fields)._ambientLight.fields = UVar8;
            fVar7 = UnityEngine_RenderSettings__get_ambientIntensity((MethodInfo *)0x0);
            (__this->fields)._ambientIntensity = fVar7;
            bVar6 = UnityEngine_RenderSettings__get_fog((MethodInfo *)0x0);
            (__this->fields)._fog = bVar6;
            value.fields.b = 1.0;
            value.fields.a = 1.0;
            value.fields.r = 1.0;
            value.fields.g = 1.0;
            UnityEngine_RenderSettings__set_ambientLight(value,(MethodInfo *)0x0);
            UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
            UnityEngine_RenderSettings__set_fog(false,(MethodInfo *)0x0);
            return;
          }
          if ((Map_MapLight_o *)local_48.fields._current == (Map_MapLight_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar6 = Map_MapLight__MinimapDisableLight
                            ((Map_MapLight_o *)local_48.fields._current,(MethodInfo *)0x0);
          pMVar5 = MethodInfo_System_Collections_Generic_List_MapLight_Add;
        } while (!bVar6);
        pSVar3 = (__this->fields)._disabledLights;
        if (pSVar3 == (System_Collections_Generic_List_MapLight__o *)0x0) break;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar4 = (pSVar3->fields)._items;
        if (pMVar4 == (Map_MapLight_array *)0x0) break;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pMVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pMVar4->m_Items[(int)uVar2] = (Map_MapLight_o *)item;
          Il2CppCodeGenWriteBarrier(pMVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,item,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MinimapCameraRender$$EndRender
// il2cpp: void Cameras_MinimapCameraRender__EndRender (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x5dd91e0
// eh: try 0x5dd9283..0x5dd92a0 -> pad 0x5dd92f1 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dd9309..0x5dd930e -> pad 0x5dd932d cleanup
// eh: try 0x5dd9330..0x5dd933a -> pad 0x5dd9342 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd92ef: jmp 0x5dd92f1
// asm:   0x5dd92f1: mov rbx, rax
// asm:   0x5dd92f4: cmp edx, 1
// asm:   0x5dd92f7: jne 0x5dd9330
// asm:   0x5dd92f9: mov rdi, rbx
// asm:   0x5dd92fc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd9301: mov rbx, qword ptr [rax]
// asm:   0x5dd9304: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5dd9309: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd930e: lea rax, [rip + 0x14b507b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose
// asm:   0x5dd9315: mov rsi, qword ptr [rax]
// asm:   0x5dd9318: mov rdi, rsp
// asm:   0x5dd931b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5dd9320: test rbx, rbx
// asm:   0x5dd9323: je 0x5dd92b4
// asm:   0x5dd9325: mov rdi, rbx
// asm:   0x5dd9328: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dd932d: mov rbx, rax
// asm:   0x5dd9330: lea rdi, [rsp + 0x20]
// asm:   0x5dd9335: call 0x2fde860  ; il2cpp_runtime_helper_02fde860()
// asm:   0x5dd933a: mov rdi, rbx
// asm:   0x5dd933d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dd9342: mov rdi, rax
// asm:   0x5dd9345: call 0x2ab61e0  ; __clang_call_terminate()

void Cameras_MinimapCameraRender__EndRender(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapLight__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_0754823d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
    Il2CppMethodInitialized_0754823d = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._disabledLights;
  if (__this_00 == (System_Collections_Generic_List_MapLight__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
  local_28 = 0;
  local_20 = (undefined1 *)&local_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
    if (!bVar1) break;
    if ((Map_MapLight_o *)local_48.fields._current != (Map_MapLight_o *)0x0) {
      Map_MapLight__MinimapEnableLight((Map_MapLight_o *)local_48.fields._current,(MethodInfo *)0x0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
  UnityEngine_RenderSettings__set_ambientLight
            ((UnityEngine_Color_o)(__this->fields)._ambientLight.fields,(MethodInfo *)0x0);
  UnityEngine_RenderSettings__set_ambientIntensity((__this->fields)._ambientIntensity,(MethodInfo *)0x0);
  UnityEngine_RenderSettings__set_fog((__this->fields)._fog,(MethodInfo *)0x0);
  return;
}


// Cameras.MinimapCameraRender$$.ctor
// il2cpp: void Cameras_MinimapCameraRender___ctor (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x5dd9350

void Cameras_MinimapCameraRender___ctor(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapLight__o *__this_00;
  
  if (Il2CppMethodInitialized_0754823e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapLight);
    Il2CppMethodInitialized_0754823e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapLight);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapLight_ctor);
  (__this->fields)._disabledLights = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._disabledLights);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


