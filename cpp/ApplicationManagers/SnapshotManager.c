// Type: ApplicationManagers.SnapshotManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/SnapshotManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SnapshotManager.cs
// --------------------------------

// ApplicationManagers.SnapshotManager$$Init
// il2cpp: void ApplicationManagers_SnapshotManager__Init (const MethodInfo* method);
// 0x5e08dd0

void ApplicationManagers_SnapshotManager__Init(MethodInfo *method)

{
  ApplicationManagers_SnapshotManager_o *pAVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_07548480 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_SnapshotManager);
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_instance = pAVar1;
  method_00 = (MethodInfo *)TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  Il2CppCodeGenWriteBarrier((void **)method_00);
  ApplicationManagers_SnapshotManager__ClearTemp(method_00);
  return;
}


// ApplicationManagers.SnapshotManager$$OnApplicationQuit
// il2cpp: void ApplicationManagers_SnapshotManager__OnApplicationQuit (ApplicationManagers_SnapshotManager_o* __this, const MethodInfo* method);
// 0x5e1da20

void ApplicationManagers_SnapshotManager__OnApplicationQuit
               (ApplicationManagers_SnapshotManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07548481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_07548481 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager;
  }
  TypeInfo_ApplicationManagers_SnapshotManager = (ApplicationManagers_SnapshotManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    ApplicationManagers_SnapshotManager__ClearTemp((MethodInfo *)klass);
    return;
  }
  ApplicationManagers_SnapshotManager__ClearTemp((MethodInfo *)klass);
  return;
}


// ApplicationManagers.SnapshotManager$$ClearTemp
// il2cpp: void ApplicationManagers_SnapshotManager__ClearTemp (const MethodInfo* method);
// 0x5e1d8c0
// eh: try 0x5e1d91a..0x5e1d939 -> pad 0x5e1d93b (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e1d954..0x5e1d9fa -> pad 0x5e1d9ff (+1 call sites) cleanup
// eh: try 0x5e1da02..0x5e1da07 -> pad 0x5e1da0f catch (...) [compiler noexcept guard]
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1d93b: jmp 0x5e1d93d
// asm:   0x5e1d93d: mov rbx, rax
// asm:   0x5e1d940: cmp edx, 1
// asm:   0x5e1d943: jne 0x5e1da07
// asm:   0x5e1d949: mov rdi, rbx
// asm:   0x5e1d94c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e1d951: mov rbx, rax
// asm:   0x5e1d954: lea rdi, [rip + 0x145a765]  ; TypeInfo_System_Exception
// asm:   0x5e1d95b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1d960: mov rcx, qword ptr [rbx]
// asm:   0x5e1d963: mov rsi, qword ptr [rcx]
// asm:   0x5e1d966: mov rdi, rax
// asm:   0x5e1d969: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e1d96e: test al, al
// asm:   0x5e1d970: je 0x5e1d9d9
// asm:   0x5e1d972: mov rbx, qword ptr [rbx]
// asm:   0x5e1d975: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1d97a: test rbx, rbx
// asm:   0x5e1d97d: je 0x5e1d9fa
// asm:   0x5e1d97f: mov rax, qword ptr [rbx]
// asm:   0x5e1d982: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e1d989: mov rdi, rbx
// asm:   0x5e1d98c: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e1d992: mov rbx, rax
// asm:   0x5e1d995: lea rdi, [rip + 0x14bd574]  ; "Error deleting snapshot temp folder: {0}"
// asm:   0x5e1d99c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1d9a1: mov rdi, rax
// asm:   0x5e1d9a4: mov rsi, rbx
// asm:   0x5e1d9a7: xor edx, edx
// asm:   0x5e1d9a9: call 0x53f51c0  ; System_String__Format()
// asm:   0x5e1d9ae: mov rbx, rax
// asm:   0x5e1d9b1: lea rdi, [rip + 0x1459c90]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e1d9b8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1d9bd: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e1d9c4: jne 0x5e1d9ce
// asm:   0x5e1d9c6: mov rdi, rax
// asm:   0x5e1d9c9: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e1d9ce: mov rdi, rbx
// asm:   0x5e1d9d1: xor esi, esi
// asm:   0x5e1d9d3: pop rbx
// asm:   0x5e1d9d4: jmp 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e1d9d9: mov edi, 8
// asm:   0x5e1d9de: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e1d9e3: mov rcx, qword ptr [rbx]
// asm:   0x5e1d9e6: mov qword ptr [rax], rcx
// asm:   0x5e1d9e9: lea rsi, [rip + 0x100fb10]
// asm:   0x5e1d9f0: mov rdi, rax
// asm:   0x5e1d9f3: xor edx, edx
// asm:   0x5e1d9f5: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e1d9fa: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e1d9ff: mov rbx, rax
// asm:   0x5e1da02: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1da07: mov rdi, rbx
// asm:   0x5e1da0a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e1da0f: mov rdi, rax
// asm:   0x5e1da12: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_SnapshotManager__ClearTemp(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548482 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_07548482 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  bVar1 = System_IO_Directory__Exists
                    (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    System_IO_Directory__Delete
              (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,true,
               (MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.SnapshotManager$$GetFileName
// il2cpp: System_String_o* ApplicationManagers_SnapshotManager__GetFileName (int32_t snapshotId, const MethodInfo* method);
// 0x5e1da80

System_String_o * ApplicationManagers_SnapshotManager__GetFileName(int32_t snapshotId,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = snapshotId;
  if (Il2CppMethodInitialized_07548483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_07548483 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotFilePrefix;
  str1 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.SnapshotManager$$AddSnapshot
// il2cpp: void ApplicationManagers_SnapshotManager__AddSnapshot (UnityEngine_Texture2D_o* texture, int32_t damage, const MethodInfo* method);
// 0x5e1daf0
// eh: try 0x5e1db4a..0x5e1dcfe -> pad 0x5e1dd08 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e1dd25..0x5e1ddcf -> pad 0x5e1ddd4 (+1 call sites) cleanup
// eh: try 0x5e1ddd7..0x5e1dddc -> pad 0x5e1dde4 catch (...) [compiler noexcept guard]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1dcfe: jmp 0x5e1dd0e
// asm:   0x5e1dd00: jmp 0x5e1dd0e
// asm:   0x5e1dd02: jmp 0x5e1dd0e
// asm:   0x5e1dd04: jmp 0x5e1dd0e
// asm:   0x5e1dd06: jmp 0x5e1dd0e
// asm:   0x5e1dd08: jmp 0x5e1dd0e
// asm:   0x5e1dd0a: jmp 0x5e1dd0e
// asm:   0x5e1dd0c: jmp 0x5e1dd0e
// asm:   0x5e1dd0e: mov rbx, rax
// asm:   0x5e1dd11: cmp edx, 1
// asm:   0x5e1dd14: jne 0x5e1dddc
// asm:   0x5e1dd1a: mov rdi, rbx
// asm:   0x5e1dd1d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e1dd22: mov rbx, rax
// asm:   0x5e1dd25: lea rdi, [rip + 0x145a394]  ; TypeInfo_System_Exception
// asm:   0x5e1dd2c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1dd31: mov rcx, qword ptr [rbx]
// asm:   0x5e1dd34: mov rsi, qword ptr [rcx]
// asm:   0x5e1dd37: mov rdi, rax
// asm:   0x5e1dd3a: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e1dd3f: test al, al
// asm:   0x5e1dd41: je 0x5e1ddae
// asm:   0x5e1dd43: mov rbx, qword ptr [rbx]
// asm:   0x5e1dd46: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1dd4b: test rbx, rbx
// asm:   0x5e1dd4e: je 0x5e1ddcf
// asm:   0x5e1dd50: mov rax, qword ptr [rbx]
// asm:   0x5e1dd53: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e1dd5a: mov rdi, rbx
// asm:   0x5e1dd5d: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e1dd63: mov rbx, rax
// asm:   0x5e1dd66: lea rdi, [rip + 0x14bd613]  ; "Exception while adding snapshot: {0}"
// asm:   0x5e1dd6d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1dd72: mov rdi, rax
// asm:   0x5e1dd75: mov rsi, rbx
// asm:   0x5e1dd78: xor edx, edx
// asm:   0x5e1dd7a: call 0x53f51c0  ; System_String__Format()
// asm:   0x5e1dd7f: mov rbx, rax
// asm:   0x5e1dd82: lea rdi, [rip + 0x14598bf]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e1dd89: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1dd8e: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e1dd95: jne 0x5e1dd9f
// asm:   0x5e1dd97: mov rdi, rax
// asm:   0x5e1dd9a: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e1dd9f: mov rdi, rbx
// asm:   0x5e1dda2: xor esi, esi
// asm:   0x5e1dda4: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e1dda9: jmp 0x5e1dce7
// asm:   0x5e1ddae: mov edi, 8
// asm:   0x5e1ddb3: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e1ddb8: mov rcx, qword ptr [rbx]
// asm:   0x5e1ddbb: mov qword ptr [rax], rcx
// asm:   0x5e1ddbe: lea rsi, [rip + 0x100f73b]
// asm:   0x5e1ddc5: mov rdi, rax
// asm:   0x5e1ddc8: xor edx, edx
// asm:   0x5e1ddca: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e1ddcf: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e1ddd4: mov rbx, rax
// asm:   0x5e1ddd7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1dddc: mov rdi, rbx
// asm:   0x5e1dddf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e1dde4: mov rdi, rax
// asm:   0x5e1dde7: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_SnapshotManager__AddSnapshot
               (UnityEngine_Texture2D_o *texture,int32_t damage,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_Int32_array *pSVar3;
  ApplicationManagers_SnapshotManager_c *klass;
  bool bVar4;
  int32_t iVar5;
  System_String_o *str1;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Byte_array *bytes;
  ApplicationManagers_SnapshotManager_StaticFields *pAVar8;
  MethodInfo *method_00;
  int32_t local_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (Il2CppMethodInitialized_07548484 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07548484 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  bVar4 = System_IO_Directory__Exists
                    (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,
                     (MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,(MethodInfo *)0x0
              );
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar7 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath;
  local_3c = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_currentSnapshotSaveId;
  if (Il2CppMethodInitialized_07548483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_07548483 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar6 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotFilePrefix;
  str1 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_52f0320(pSVar6,str1,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)"/";
  pSVar7 = System_String__Concat_5301f10(pSVar7,"/",pSVar6,(MethodInfo *)0x0);
  bytes = ApplicationManagers_SnapshotManager__SerializeSnapshot(texture,method_00);
  System_IO_File__WriteAllBytes(pSVar7,bytes,(MethodInfo *)0x0);
  pAVar8 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  pSVar3 = pAVar8->_damages;
  if (pSVar3 == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((uint)pSVar3->max_length <= (uint)pAVar8->_currentSnapshotSaveId) {
    ThrowIndexOutOfRangeException();
  }
  pSVar3->m_Items[pAVar8->_currentSnapshotSaveId] = damage;
  uVar1 = pAVar8->_currentSnapshotSaveId;
  uVar2 = pAVar8->_maxSnapshotSaveId;
  local_38 = uVar1 + 1;
  iStack_34 = uVar2 + 1;
  uStack_30 = 1;
  uStack_2c = 1;
  pAVar8->_currentSnapshotSaveId = local_38;
  pAVar8->_maxSnapshotSaveId = iStack_34;
  iVar5 = pAVar8->MaxSnapshots;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar5 = System_Math__Min_54baeb0(iStack_34,iVar5,(MethodInfo *)0x0);
  klass = TypeInfo_ApplicationManagers_SnapshotManager;
  pAVar8 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  pAVar8->_maxSnapshotSaveId = iVar5;
  if (pAVar8->MaxSnapshots <= pAVar8->_currentSnapshotSaveId) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
      pAVar8 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
    }
    pAVar8->_currentSnapshotSaveId = 0;
  }
  return;
}


// ApplicationManagers.SnapshotManager$$SerializeSnapshot
// il2cpp: System_Byte_array* ApplicationManagers_SnapshotManager__SerializeSnapshot (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x5e1ddf0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1dec1: jmp 0x5e1ded0
// asm:   0x5e1dec9: jmp 0x5e1df68
// asm:   0x5e1df75: mov edx, eax
// asm:   0x5e1df79: nop dword ptr [rax]

System_Byte_array *
ApplicationManagers_SnapshotManager__SerializeSnapshot(UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  _struct_53536 _Var1;
  uint uVar2;
  int32_t iVar3;
  UnityEngine_Color32_array *pUVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  if (Il2CppMethodInitialized_07548485 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    Il2CppMethodInitialized_07548485 = '\x01';
  }
  if ((texture != (UnityEngine_Texture2D_o *)0x0) &&
     (pUVar4 = UnityEngine_Texture2D__GetPixels32_68ef5c0(texture,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Color32_array *)0x0)) {
    pSVar5 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,(int)pUVar4->max_length * 3 + 8);
    iVar3 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                      (texture,(texture->klass->vtable)._5_get_width.method);
    pSVar6 = System_BitConverter__GetBytes_541aab0(iVar3,(MethodInfo *)0x0);
    if (pSVar6 != (System_Byte_array *)0x0) {
      iVar7 = (int)pSVar6->max_length;
      if (pSVar5 == (System_Byte_array *)0x0) {
        uVar11 = 0;
        if (0 < iVar7) goto label_05e1df68;
      }
      else if (iVar7 < 1) {
        uVar11 = 0;
      }
      else {
        uVar8 = pSVar6->max_length & 0xffffffff;
        uVar11 = 0;
        do {
          if ((uVar8 <= uVar11) || ((uint)pSVar5->max_length <= uVar11)) goto label_05e1dfeb;
          pSVar5->m_Items[uVar11] = pSVar6->m_Items[uVar11];
          uVar11 = uVar11 + 1;
          uVar10 = (uint)pSVar6->max_length;
          uVar8 = (ulong)uVar10;
        } while ((long)uVar11 < (long)(int)uVar10);
      }
      iVar3 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                        (texture,(texture->klass->vtable)._7_get_height.method);
      pSVar6 = System_BitConverter__GetBytes_541aab0(iVar3,(MethodInfo *)0x0);
      if (pSVar6 != (System_Byte_array *)0x0) {
        iVar7 = (int)pSVar6->max_length;
        if (pSVar5 != (System_Byte_array *)0x0) {
          if (iVar7 < 1) {
            uVar8 = pUVar4->max_length;
            if ((int)uVar8 < 1) {
              return pSVar5;
            }
          }
          else {
            uVar8 = pSVar6->max_length & 0xffffffff;
            uVar9 = 0;
            do {
              if ((uVar8 <= uVar9) || (uVar10 = (int)uVar11 + (int)uVar9, (uint)pSVar5->max_length <= uVar10))
              goto label_05e1dfeb;
              pSVar5->m_Items[(int)uVar10] = pSVar6->m_Items[uVar9];
              uVar9 = uVar9 + 1;
              uVar10 = (uint)pSVar6->max_length;
              uVar8 = (ulong)uVar10;
            } while ((long)uVar9 < (long)(int)uVar10);
            uVar8 = pUVar4->max_length;
            if ((int)uVar8 < 1) {
              return pSVar5;
            }
            if (pSVar5 == (System_Byte_array *)0x0) goto label_05e1df68;
            uVar11 = (uVar11 & 0xffffffff) + uVar9;
          }
          uVar8 = uVar8 & 0xffffffff;
          uVar9 = 0;
          while ((uVar9 < uVar8 && (uVar10 = (uint)uVar11, uVar10 < (uint)pSVar5->max_length))) {
            _Var1 = pUVar4->m_Items[uVar9].fields._overlap_0._at_a;
            pSVar5->m_Items[(int)uVar10] = _Var1._lead[0];
            if (((uint)pSVar5->max_length <= uVar10 + 1) ||
               (pSVar5->m_Items[(int)(uVar10 + 1)] = _Var1._lead[1], (uint)pSVar5->max_length <= uVar10 + 2))
            break;
            pSVar5->m_Items[(int)(uVar10 + 2)] = _Var1._lead[2];
            uVar9 = uVar9 + 1;
            uVar2 = (uint)pUVar4->max_length;
            uVar8 = (ulong)uVar2;
            uVar11 = (ulong)(uVar10 + 3);
            if ((long)(int)uVar2 <= (long)uVar9) {
              return pSVar5;
            }
          }
label_05e1dfeb:
          ThrowIndexOutOfRangeException();
        }
        if ((iVar7 < 1) && ((int)pUVar4->max_length < 1)) {
          return (System_Byte_array *)0x0;
        }
      }
    }
  }
label_05e1df68:
  ThrowNullReferenceException();
}


// ApplicationManagers.SnapshotManager$$DeserializeSnapshot
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_SnapshotManager__DeserializeSnapshot (System_Byte_array* bytes, const MethodInfo* method);
// 0x5e1dff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1e0bd: nop dword ptr [rax]

UnityEngine_Texture2D_o *
ApplicationManagers_SnapshotManager__DeserializeSnapshot(System_Byte_array *bytes,MethodInfo *method)

{
  uint uVar1;
  int32_t width;
  int32_t height;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Color32_array *colors;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_07548486 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_07548486 = '\x01';
  }
  width = System_BitConverter__ToInt32(bytes,0,(MethodInfo *)0x0);
  height = System_BitConverter__ToInt32(bytes,4,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_68efe30(__this,width,height,3,false,(MethodInfo *)0x0);
  if (bytes != (System_Byte_array *)0x0) {
    colors = (UnityEngine_Color32_array *)
             SZArrayNew(TypeInfo_UnityEngine_Color32_array,((int)bytes->max_length + -8) / 3);
    if (colors != (UnityEngine_Color32_array *)0x0) {
      if (0 < (int)colors->max_length) {
        uVar4 = colors->max_length & 0xffffffff;
        uVar2 = 10;
        uVar3 = 0;
        do {
          uVar1 = (uint)bytes->max_length;
          if ((((uVar1 <= uVar2 - 2) || (uVar1 <= uVar2 - 1)) || (uVar1 <= uVar2)) || (uVar4 <= uVar3)) {
            ThrowIndexOutOfRangeException();
          }
          colors->m_Items[uVar3].fields._overlap_0._at_rgba.rgba =
               (uint)bytes->m_Items[(int)(uVar2 - 1)] << 8 |
               (uint)bytes->m_Items[(int)uVar2] << 0x10 | (uint)bytes->m_Items[(int)(uVar2 - 2)] | 0xff000000;
          uVar3 = uVar3 + 1;
          uVar1 = (uint)colors->max_length;
          uVar4 = (ulong)uVar1;
          uVar2 = uVar2 + 3;
        } while ((long)uVar3 < (long)(int)uVar1);
      }
      if (__this != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__SetPixels32_68f0850(__this,colors,(MethodInfo *)0x0);
        UnityEngine_Texture2D__Apply_68f05d0(__this,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.SnapshotManager$$SaveSnapshotFinish
// il2cpp: void ApplicationManagers_SnapshotManager__SaveSnapshotFinish (UnityEngine_Texture2D_o* texture, System_String_o* fileName, const MethodInfo* method);
// 0x5e1e160

void ApplicationManagers_SnapshotManager__SaveSnapshotFinish
               (UnityEngine_Texture2D_o *texture,System_String_o *fileName,MethodInfo *method)

{
  bool bVar1;
  System_String_o *path;
  System_Byte_array *bytes;
  
  if (Il2CppMethodInitialized_07548487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07548487 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  bVar1 = System_IO_Directory__Exists
                    (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath,(MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  path = System_String__Concat_5301f10
                   (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath,
                    "/",fileName,(MethodInfo *)0x0);
  bytes = UnityEngine_ImageConversion__EncodeToPNG(texture,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(path,bytes,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$GetDamage
// il2cpp: int32_t ApplicationManagers_SnapshotManager__GetDamage (int32_t index, const MethodInfo* method);
// 0x5e1e240

int32_t ApplicationManagers_SnapshotManager__GetDamage(int32_t index,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  System_Int32_array *pSVar3;
  ApplicationManagers_SnapshotManager_StaticFields *pAVar4;
  
  if (Il2CppMethodInitialized_07548488 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_07548488 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    pAVar4 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
    iVar2 = pAVar4->_maxSnapshotSaveId;
  }
  else {
    pAVar4 = ((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager)->static_fields;
    iVar2 = pAVar4->_maxSnapshotSaveId;
  }
  if (iVar2 <= index) {
    return 0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    pAVar4 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  }
  pSVar3 = pAVar4->_damages;
  if (pSVar3 == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((uint)pSVar3->max_length <= (uint)index) {
    ThrowIndexOutOfRangeException();
  }
  return pSVar3->m_Items[index];
}


// ApplicationManagers.SnapshotManager$$GetSnapshot
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_SnapshotManager__GetSnapshot (int32_t index, const MethodInfo* method);
// 0x5e1e300

UnityEngine_Texture2D_o * ApplicationManagers_SnapshotManager__GetSnapshot(int32_t index,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  ApplicationManagers_SnapshotManager_StaticFields *pAVar3;
  bool bVar4;
  undefined4 in_EAX;
  System_String_o *str1;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Byte_array *bytes;
  UnityEngine_Texture2D_o *pUVar7;
  MethodInfo *method_00;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07548489 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07548489 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    pAVar3 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
    iVar2 = pAVar3->_maxSnapshotSaveId;
  }
  else {
    pAVar3 = ((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager)->static_fields;
    iVar2 = pAVar3->_maxSnapshotSaveId;
  }
  if (iVar2 <= index) {
    return (UnityEngine_Texture2D_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    pSVar6 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath;
  }
  else {
    pSVar6 = pAVar3->SnapshotTempPath;
  }
  uStack_28 = CONCAT44(index,(undefined4)uStack_28);
  if (Il2CppMethodInitialized_07548483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_07548483 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar5 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotFilePrefix;
  pUVar7 = (UnityEngine_Texture2D_o *)0x0;
  str1 = System_Int32__ToString((int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_52f0320(pSVar5,str1,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_5301f10(pSVar6,"/",pSVar5,(MethodInfo *)0x0);
  bVar4 = System_IO_File__Exists(pSVar6,(MethodInfo *)0x0);
  if (bVar4) {
    method_00 = (MethodInfo *)0x0;
    bytes = System_IO_File__ReadAllBytes(pSVar6,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    pUVar7 = ApplicationManagers_SnapshotManager__DeserializeSnapshot(bytes,method_00);
  }
  return pUVar7;
}


// ApplicationManagers.SnapshotManager$$GetLength
// il2cpp: int32_t ApplicationManagers_SnapshotManager__GetLength (const MethodInfo* method);
// 0x5e1e4a0

int32_t ApplicationManagers_SnapshotManager__GetLength(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754848a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_0754848a = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    return TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId;
  }
  return *(int32_t *)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager)->static_fields + 0x28);
}


// ApplicationManagers.SnapshotManager$$.ctor
// il2cpp: void ApplicationManagers_SnapshotManager___ctor (ApplicationManagers_SnapshotManager_o* __this, const MethodInfo* method);
// 0x5e1e510

void ApplicationManagers_SnapshotManager___ctor
               (ApplicationManagers_SnapshotManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$.cctor
// il2cpp: void ApplicationManagers_SnapshotManager___cctor (const MethodInfo* method);
// 0x5e1e520

void ApplicationManagers_SnapshotManager___cctor(MethodInfo *method)

{
  ApplicationManagers_SnapshotManager_StaticFields *pAVar1;
  System_String_o *pSVar2;
  System_Int32_array *pSVar3;
  
  if (Il2CppMethodInitialized_0754848b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Snapshot");
    il2cpp_codegen_initialize_runtime_metadata(&"/Temp");
    Il2CppMethodInitialized_0754848b = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pAVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  pAVar1->SnapshotPath = TypeInfo_Utility_FolderPaths->static_fields->Snapshots;
  Il2CppCodeGenWriteBarrier(&pAVar1->SnapshotPath);
  pSVar2 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Snapshots,"/Temp",
                      (MethodInfo *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  pAVar1->SnapshotTempPath = pSVar2;
  Il2CppCodeGenWriteBarrier(&pAVar1->SnapshotTempPath);
  pAVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  pAVar1->SnapshotFilePrefix = "Snapshot";
  Il2CppCodeGenWriteBarrier(&pAVar1->SnapshotFilePrefix);
  pAVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  pAVar1->MaxSnapshots = 500;
  pAVar1->_currentSnapshotSaveId = 0;
  pAVar1->_maxSnapshotSaveId = 0;
  pSVar3 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,500);
  pAVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields;
  pAVar1->_damages = pSVar3;
  Il2CppCodeGenWriteBarrier(&pAVar1->_damages);
  return;
}


