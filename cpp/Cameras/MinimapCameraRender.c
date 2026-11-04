// Type: Cameras.MinimapCameraRender
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Cameras/MinimapCameraRender.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// --------------------------------

// Cameras.MinimapCameraRender$$BeginRender
// il2cpp: void Cameras_MinimapCameraRender__BeginRender (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x1822f8570
// eh: try 0x1822f8690..0x1822f8795 -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f868e: nop 
// asm:   0x1822f86f0: mov rdx, qword ptr [rip + 0x1d92891]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose
// asm:   0x1822f86f7: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822f86fc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822f8701: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822f8706: test rcx, rcx
// asm:   0x1822f8709: jne 0x1822f8795
// asm:   0x1822f870f: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x1822f8795: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Cameras_MinimapCameraRender__BeginRender(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_MapLight__o *pSVar2;
  float fVar3;
  float fVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  UnityEngine_Color_o *pUVar7;
  float fVar8;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  Map_MapLight_o *local_38;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843476bc == '\0') {
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
    Il2CppMethodInitialized_1843476bc = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._disabledLights;
  if (pSVar2 != (System_Collections_Generic_List_MapLight__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = TypeInfo_Map_MapLoader->static_fields->MapLights;
    if (pSVar2 != (System_Collections_Generic_List_MapLight__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_T__o *)pSVar2,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_48;
      local_28.fields._index = (int32_t)uStack_40;
      local_28.fields._version = uStack_40._4_4_;
      local_28.fields._current = (Il2CppObject *)local_38;
      local_48 = (undefined1  [8])0x0;
      uStack_40 = &local_28;
      while( true ) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
        pIVar5 = local_28.fields._current;
        if (!bVar6) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
          pUVar7 = UnityEngine_RenderSettings__get_ambientLight
                             ((UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
          fVar8 = (pUVar7->fields).g;
          fVar3 = (pUVar7->fields).b;
          fVar4 = (pUVar7->fields).a;
          (__this->fields)._ambientLight.fields.r = (pUVar7->fields).r;
          (__this->fields)._ambientLight.fields.g = fVar8;
          (__this->fields)._ambientLight.fields.b = fVar3;
          (__this->fields)._ambientLight.fields.a = fVar4;
          fVar8 = UnityEngine_RenderSettings__get_ambientIntensity((MethodInfo *)0x0);
          (__this->fields)._ambientIntensity = fVar8;
          bVar6 = UnityEngine_RenderSettings__get_fog((MethodInfo *)0x0);
          (__this->fields)._fog = bVar6;
          local_48 = (undefined1  [8])0x3f8000003f800000;
          uStack_40._0_4_ = 0x3f800000;
          uStack_40._4_4_ = 0x3f800000;
          UnityEngine_RenderSettings__set_ambientLight((UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
          UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
          UnityEngine_RenderSettings__set_fog(false,(MethodInfo *)0x0);
          return;
        }
        if ((Map_MapLight_o *)local_28.fields._current == (Map_MapLight_o *)0x0) break;
        bVar6 = Map_MapLight__MinimapDisableLight
                          ((Map_MapLight_o *)local_28.fields._current,(MethodInfo *)0x0);
        if (bVar6) {
          pSVar2 = (__this->fields)._disabledLights;
          if (pSVar2 == (System_Collections_Generic_List_MapLight__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar2,pIVar5,MethodInfo_System_Collections_Generic_List_MapLight_Add);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MinimapCameraRender$$EndRender
// il2cpp: void Cameras_MinimapCameraRender__EndRender (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x1822f87a0
// eh: try 0x1822f8850..0x1822f8878 -> pad 0x183317f30 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f8889: mov rdx, qword ptr [rip + 0x1d926f8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose
// asm:   0x1822f8890: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822f8895: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822f889a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822f889f: test rcx, rcx
// asm:   0x1822f88a2: jne 0x1822f88ec
// asm:   0x1822f88a4: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1822f88ec: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Cameras_MinimapCameraRender__EndRender(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapLight__o *__this_00;
  bool bVar1;
  undefined1 local_48 [16];
  Map_MapLight_o *local_38;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843476bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
    Il2CppMethodInitialized_1843476bd = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._disabledLights;
  if (__this_00 != (System_Collections_Generic_List_MapLight__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    local_28.fields._index = local_48._8_4_;
    local_28.fields._version = local_48._12_4_;
    local_28.fields._current = (Il2CppObject *)local_38;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
      if (!bVar1) break;
      if ((Map_MapLight_o *)local_28.fields._current != (Map_MapLight_o *)0x0) {
        Map_MapLight__MinimapEnableLight((Map_MapLight_o *)local_28.fields._current,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
    local_48._0_8_ = *(undefined8 *)&(__this->fields)._ambientLight.fields;
    local_48._8_4_ = (__this->fields)._ambientLight.fields.b;
    local_48._12_4_ = (__this->fields)._ambientLight.fields.a;
    UnityEngine_RenderSettings__set_ambientLight((UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientIntensity((__this->fields)._ambientIntensity,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_fog((__this->fields)._fog,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.MinimapCameraRender$$.ctor
// il2cpp: void Cameras_MinimapCameraRender___ctor (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x1822f8900

void Cameras_MinimapCameraRender___ctor(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapLight__o *__this_00;
  
  if (Il2CppMethodInitialized_1843476be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapLight);
    Il2CppMethodInitialized_1843476be = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapLight);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapLight_ctor);
  (__this->fields)._disabledLights = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._disabledLights,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


