// Type: ApplicationManagers.DiscordManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/DiscordManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DiscordManager.cs
// --------------------------------

// ApplicationManagers.DiscordManager$$Init
// il2cpp: void ApplicationManagers_DiscordManager__Init (const MethodInfo* method);
// 0x5e09fd0
// eh: try 0x5e0a08a..0x5e0a10d -> pad 0x5e0a125 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e0a153..0x5e0a219 -> pad 0x5e0a219 (+1 call sites) cleanup
// eh: try 0x5e0a21c..0x5e0a221 -> pad 0x5e0a229 catch (...) [compiler noexcept guard]
// asm: 62 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0a125: jmp 0x5e0a12b
// asm:   0x5e0a127: jmp 0x5e0a12b
// asm:   0x5e0a129: jmp 0x5e0a12b
// asm:   0x5e0a12b: mov rbx, rax
// asm:   0x5e0a12e: cmp edx, 1
// asm:   0x5e0a131: jne 0x5e0a221
// asm:   0x5e0a137: mov rdi, rbx
// asm:   0x5e0a13a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0a13f: mov rbx, rax
// asm:   0x5e0a142: lea rax, [rip + 0x174c57f]
// asm:   0x5e0a149: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e0a14d: mov rax, qword ptr [rbx]
// asm:   0x5e0a150: mov rsi, qword ptr [rax]
// asm:   0x5e0a153: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e0a158: test al, al
// asm:   0x5e0a15a: je 0x5e0a1f8
// asm:   0x5e0a160: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0a165: lea rdi, [rip + 0x146d4dc]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e0a16c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0a171: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e0a178: jne 0x5e0a182
// asm:   0x5e0a17a: mov rdi, rax
// asm:   0x5e0a17d: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e0a182: lea rdi, [rip + 0x14e36b7]  ; "Unable to initialize discord manager."
// asm:   0x5e0a189: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0a18e: mov rdi, rax
// asm:   0x5e0a191: xor esi, esi
// asm:   0x5e0a193: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e0a198: lea rdi, [rip + 0x146d989]  ; TypeInfo_ApplicationManagers_DiscordManager
// asm:   0x5e0a19f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0a1a4: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e0a1ab: jne 0x5e0a1b5
// asm:   0x5e0a1ad: mov rdi, rax
// asm:   0x5e0a1b0: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e0a1b5: lea rdi, [rip + 0x146d96c]  ; TypeInfo_ApplicationManagers_DiscordManager
// asm:   0x5e0a1bc: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0a1c1: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5e0a1c8: mov rbx, qword ptr [rax + 8]
// asm:   0x5e0a1cc: lea rdi, [rip + 0x147121d]  ; TypeInfo_UnityEngine_Object
// asm:   0x5e0a1d3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0a1d8: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e0a1df: jne 0x5e0a1e9
// asm:   0x5e0a1e1: mov rdi, rax
// asm:   0x5e0a1e4: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e0a1e9: mov rdi, rbx
// asm:   0x5e0a1ec: xor esi, esi
// asm:   0x5e0a1ee: call 0x6a214e0  ; UnityEngine_Object__Destroy()
// asm:   0x5e0a1f3: jmp 0x5e0a11b
// asm:   0x5e0a1f8: mov edi, 8
// asm:   0x5e0a1fd: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e0a202: mov rcx, qword ptr [rbx]
// asm:   0x5e0a205: mov qword ptr [rax], rcx
// asm:   0x5e0a208: lea rsi, [rip + 0x10232f1]
// asm:   0x5e0a20f: mov rdi, rax
// asm:   0x5e0a212: xor edx, edx
// asm:   0x5e0a214: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e0a219: mov rbx, rax
// asm:   0x5e0a21c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0a221: mov rdi, rbx
// asm:   0x5e0a224: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e0a229: mov rdi, rax
// asm:   0x5e0a22c: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_DiscordManager__Init(MethodInfo *method)

{
  ApplicationManagers_DiscordManager_StaticFields *pAVar1;
  bool bVar2;
  ApplicationManagers_DiscordManager_o *pAVar3;
  Discord_Discord_o *__this;
  int64_t iVar4;
  System_DateTimeOffset_o SVar5;
  System_DateTimeOffset_o local_28;
  
  if (Il2CppMethodInitialized_07548421 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Discord_Discord);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DiscordManager);
    Il2CppMethodInitialized_07548421 = '\x01';
  }
  local_28.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_28.fields._offsetMinutes = 0;
  local_28.fields._10_6_ = 0;
  bVar2 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
    }
    pAVar3 = Utility_SingletonFactory__CreateSingleton_object_
                       ((Il2CppObject *)TypeInfo_ApplicationManagers_DiscordManager->static_fields->_instance,
                        (MethodInfo_3680650 *)
                        MethodInfo_Utility_SingletonFactory_CreateSingleton_DiscordManager);
    pAVar1 = TypeInfo_ApplicationManagers_DiscordManager->static_fields;
    pAVar1->_instance = pAVar3;
    Il2CppCodeGenWriteBarrier(&pAVar1->_instance);
    if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
    }
    iVar4 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->appID;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Discord_Discord);
    Discord_Discord___ctor(__this,iVar4,1,(MethodInfo *)0x0);
    pAVar1 = TypeInfo_ApplicationManagers_DiscordManager->static_fields;
    pAVar1->discord = __this;
    Il2CppCodeGenWriteBarrier(&pAVar1->discord);
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    SVar5 = System_DateTimeOffset__get_Now((MethodInfo *)0x0);
    local_28.fields._dateTime = SVar5.fields._dateTime.fields._dateData;
    local_28.fields._offsetMinutes = SVar5.fields._offsetMinutes;
    iVar4 = System_DateTimeOffset__ToUnixTimeMilliseconds(&local_28,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_DiscordManager->static_fields->time = iVar4;
  }
  return;
}


// ApplicationManagers.DiscordManager$$Update
// il2cpp: void ApplicationManagers_DiscordManager__Update (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x5e140e0
// eh: try 0x5e14117..0x5e14141 -> pad 0x5e14141 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e1416b..0x5e141d3 -> pad 0x5e141d3 (+1 call sites) cleanup
// eh: try 0x5e141d6..0x5e141db -> pad 0x5e141e3 catch (...) [compiler noexcept guard]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e14141: jmp 0x5e14143
// asm:   0x5e14143: mov r14, rax
// asm:   0x5e14146: cmp edx, 1
// asm:   0x5e14149: jne 0x5e141db
// asm:   0x5e1414f: mov rdi, r14
// asm:   0x5e14152: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e14157: mov r14, rax
// asm:   0x5e1415a: lea rax, [rip + 0x1742567]
// asm:   0x5e14161: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e14165: mov rax, qword ptr [r14]
// asm:   0x5e14168: mov rsi, qword ptr [rax]
// asm:   0x5e1416b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e14170: test al, al
// asm:   0x5e14172: je 0x5e141b2
// asm:   0x5e14174: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e14179: mov rdi, r15
// asm:   0x5e1417c: xor esi, esi
// asm:   0x5e1417e: call 0x6a15330  ; UnityEngine_Component__get_gameObject()
// asm:   0x5e14183: mov rbx, rax
// asm:   0x5e14186: lea rdi, [rip + 0x1467263]  ; TypeInfo_UnityEngine_Object
// asm:   0x5e1418d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e14192: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e14199: jne 0x5e141a3
// asm:   0x5e1419b: mov rdi, rax
// asm:   0x5e1419e: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e141a3: mov rdi, rbx
// asm:   0x5e141a6: xor esi, esi
// asm:   0x5e141a8: pop rbx
// asm:   0x5e141a9: pop r14
// asm:   0x5e141ab: pop r15
// asm:   0x5e141ad: jmp 0x6a214e0  ; UnityEngine_Object__Destroy()
// asm:   0x5e141b2: mov edi, 8
// asm:   0x5e141b7: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e141bc: mov rcx, qword ptr [r14]
// asm:   0x5e141bf: mov qword ptr [rax], rcx
// asm:   0x5e141c2: lea rsi, [rip + 0x1019337]
// asm:   0x5e141c9: mov rdi, rax
// asm:   0x5e141cc: xor edx, edx
// asm:   0x5e141ce: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e141d3: mov r14, rax
// asm:   0x5e141d6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e141db: mov rdi, r14
// asm:   0x5e141de: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e141e3: mov rdi, rax
// asm:   0x5e141e6: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_DiscordManager__Update
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  Discord_Discord_o *__this_00;
  
  if (Il2CppMethodInitialized_07548422 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    Il2CppMethodInitialized_07548422 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
  }
  __this_00 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->discord;
  if (__this_00 == (Discord_Discord_o *)0x0) {
    ThrowNullReferenceException();
  }
  Discord_Discord__RunCallbacks(__this_00,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DiscordManager$$LateUpdate
// il2cpp: void ApplicationManagers_DiscordManager__LateUpdate (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x5e141f0

void ApplicationManagers_DiscordManager__LateUpdate
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if (fVar1 < (__this->fields)._nextStatusUpdateTime) {
    return;
  }
  fVar1 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  (__this->fields)._nextStatusUpdateTime = fVar1 + 5.0;
  ApplicationManagers_DiscordManager__UpdateStatus(__this,method);
  return;
}


// ApplicationManagers.DiscordManager$$UpdateStatus
// il2cpp: void ApplicationManagers_DiscordManager__UpdateStatus (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x5e14230
// eh: try 0x5e143a3..0x5e14ad0 -> pad 0x5e14ada (+60 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e14b52..0x5e14bf2 -> pad 0x5e14bf2 (+1 call sites) cleanup
// eh: try 0x5e14bf5..0x5e14bfa -> pad 0x5e14c02 catch (...) [compiler noexcept guard]
// asm: 101 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e14515: jmp 0x5e14546
// asm:   0x5e14571: jmp 0x5e145a8
// asm:   0x5e145e2: jmp 0x5e14659
// asm:   0x5e14ad0: jmp 0x5e14b2a
// asm:   0x5e14ad2: jmp 0x5e14b2a
// asm:   0x5e14ad4: jmp 0x5e14b2a
// asm:   0x5e14ad6: jmp 0x5e14b2a
// asm:   0x5e14ad8: jmp 0x5e14b2a
// asm:   0x5e14ada: jmp 0x5e14b2a
// asm:   0x5e14adc: jmp 0x5e14b2a
// asm:   0x5e14ade: jmp 0x5e14b2a
// asm:   0x5e14ae0: jmp 0x5e14b2a
// asm:   0x5e14ae2: jmp 0x5e14b2a
// asm:   0x5e14ae4: jmp 0x5e14b2a
// asm:   0x5e14ae6: jmp 0x5e14b2a
// asm:   0x5e14ae8: jmp 0x5e14b2a
// asm:   0x5e14aea: jmp 0x5e14b2a
// asm:   0x5e14aec: jmp 0x5e14b2a
// asm:   0x5e14aee: jmp 0x5e14b2a
// asm:   0x5e14af0: jmp 0x5e14b2a
// asm:   0x5e14af2: jmp 0x5e14b2a
// asm:   0x5e14af4: jmp 0x5e14b2a
// asm:   0x5e14af6: jmp 0x5e14b2a
// asm:   0x5e14af8: jmp 0x5e14b2a
// asm:   0x5e14afa: jmp 0x5e14b2a
// asm:   0x5e14afc: jmp 0x5e14b2a
// asm:   0x5e14afe: jmp 0x5e14b2a
// asm:   0x5e14b00: jmp 0x5e14b2a
// asm:   0x5e14b02: jmp 0x5e14b2a
// asm:   0x5e14b04: jmp 0x5e14b2a
// asm:   0x5e14b06: jmp 0x5e14b2a
// asm:   0x5e14b08: jmp 0x5e14b2a
// asm:   0x5e14b0a: jmp 0x5e14b2a
// asm:   0x5e14b0c: jmp 0x5e14b2a
// asm:   0x5e14b0e: jmp 0x5e14b2a
// asm:   0x5e14b10: jmp 0x5e14b2a
// asm:   0x5e14b12: jmp 0x5e14b2a
// asm:   0x5e14b14: jmp 0x5e14b2a
// asm:   0x5e14b16: jmp 0x5e14b2a
// asm:   0x5e14b18: jmp 0x5e14b2a
// asm:   0x5e14b1a: jmp 0x5e14b2a
// asm:   0x5e14b1c: jmp 0x5e14b2a
// asm:   0x5e14b1e: jmp 0x5e14b2a
// asm:   0x5e14b20: jmp 0x5e14b2a
// asm:   0x5e14b22: jmp 0x5e14b2a
// asm:   0x5e14b24: jmp 0x5e14b2a
// asm:   0x5e14b26: jmp 0x5e14b2a
// asm:   0x5e14b28: jmp 0x5e14b2a
// asm:   0x5e14b2a: mov rbx, rax
// asm:   0x5e14b2d: cmp edx, 1
// asm:   0x5e14b30: jne 0x5e14bfa
// asm:   0x5e14b36: mov rdi, rbx
// asm:   0x5e14b39: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e14b3e: mov rbx, rax
// asm:   0x5e14b41: lea rax, [rip + 0x1741b80]
// asm:   0x5e14b48: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e14b4c: mov rax, qword ptr [rbx]
// asm:   0x5e14b4f: mov rsi, qword ptr [rax]
// asm:   0x5e14b52: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e14b57: test al, al
// asm:   0x5e14b59: je 0x5e14bd1
// asm:   0x5e14b5b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e14b60: lea rdi, [rip + 0x1462ae1]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e14b67: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e14b6c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e14b73: jne 0x5e14b7d
// asm:   0x5e14b75: mov rdi, rax
// asm:   0x5e14b78: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e14b7d: lea rdi, [rip + 0x14c546c]  ; "Discord activity update Failed"
// asm:   0x5e14b84: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e14b89: mov rdi, rax
// asm:   0x5e14b8c: xor esi, esi
// asm:   0x5e14b8e: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e14b93: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x5e14b9b: xor esi, esi
// asm:   0x5e14b9d: call 0x6a15330  ; UnityEngine_Component__get_gameObject()
// asm:   0x5e14ba2: mov rbx, rax
// asm:   0x5e14ba5: lea rdi, [rip + 0x1466844]  ; TypeInfo_UnityEngine_Object
// asm:   0x5e14bac: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e14bb1: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e14bb8: jne 0x5e14bc2
// asm:   0x5e14bba: mov rdi, rax
// asm:   0x5e14bbd: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e14bc2: mov rdi, rbx
// asm:   0x5e14bc5: xor esi, esi
// asm:   0x5e14bc7: call 0x6a214e0  ; UnityEngine_Object__Destroy()
// asm:   0x5e14bcc: jmp 0x5e14a05
// asm:   0x5e14bd1: mov edi, 8
// asm:   0x5e14bd6: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e14bdb: mov rcx, qword ptr [rbx]
// asm:   0x5e14bde: mov qword ptr [rax], rcx
// asm:   0x5e14be1: lea rsi, [rip + 0x1018918]
// asm:   0x5e14be8: mov rdi, rax
// asm:   0x5e14beb: xor edx, edx
// asm:   0x5e14bed: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e14bf2: mov rbx, rax
// asm:   0x5e14bf5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e14bfa: mov rdi, rbx
// asm:   0x5e14bfd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e14c02: mov rdi, rax
// asm:   0x5e14c05: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_DiscordManager__UpdateStatus
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  uint32_t uVar1;
  int32_t iVar2;
  Settings_ProfileSettings_o *pSVar3;
  Settings_NameSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_InGameSet_o *pSVar6;
  Settings_InGameGeneralSettings_o *pSVar7;
  Discord_Discord_o *__this_00;
  bool bVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  Photon_Realtime_Room_o *pPVar12;
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar13;
  System_Object_array *values;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  Discord_ActivityManager_o *__this_01;
  long lVar16;
  MethodInfo *method_00;
  undefined8 *puVar17;
  undefined8 *puVar18;
  byte bVar19;
  undefined8 auStackY_598 [128];
  Discord_Activity_o in_stack_fffffffffffffe68;
  int32_t iStack_104;
  int32_t iStack_f0;
  int32_t iStack_ec;
  System_String_o *pSStack_e8;
  undefined8 uStack_e0;
  System_String_o *pSStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  System_String_o *pSStack_b0;
  System_String_o *pSStack_a8;
  int64_t iStack_a0;
  undefined8 uStack_98;
  System_String_o *pSStack_90;
  undefined8 uStack_88;
  System_String_o *pSStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  bVar19 = 0;
  if (Il2CppMethodInitialized_07548423 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"] ");
    il2cpp_codegen_initialize_runtime_metadata(&"aottg2-logo2");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Creating a room");
    il2cpp_codegen_initialize_runtime_metadata(&"SinglePlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548423 = '\x01';
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  pSStack_80 = (System_String_o *)0x0;
  uStack_98 = 0;
  pSStack_90 = (System_String_o *)0x0;
  pSStack_a8 = (System_String_o *)0x0;
  iStack_a0 = 0;
  uStack_b8 = 0;
  pSStack_b0 = (System_String_o *)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  pSStack_d8 = (System_String_o *)0x0;
  uStack_d0 = 0;
  pSStack_e8 = (System_String_o *)0x0;
  uStack_e0 = 0;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar3 == (Settings_ProfileSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (pSVar3->fields).Name;
  if (pSVar4 == (Settings_NameSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar9 = (pSVar4->fields)._value;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar9 = MiscExtensions__StripHex(pSVar9,(MethodInfo *)0x0);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar3 == (Settings_ProfileSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (pSVar3->fields).Guild;
  if (pSVar4 == (Settings_NameSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar8 = System_String__op_Inequality((pSVar4->fields)._value,"",(MethodInfo *)0x0);
  if (bVar8) {
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    if (pSVar3 == (Settings_ProfileSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (pSVar3->fields).Guild;
    if (pSVar4 == (Settings_NameSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (pSVar4->fields)._value;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar10 = MiscExtensions__StripHex(pSVar10,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_5302810
                       ("[",pSVar10,"] ",pSVar9,(MethodInfo *)0x0);
  }
  pSVar10 = "Creating a room";
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar3 == (Settings_ProfileSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = (pSVar3->fields).ProfileIcon;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar11 = (pSVar5->fields)._value;
  if (pSVar11 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar11 = System_String__ToLower(pSVar11,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  iVar2 = 0;
  pPVar12 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar12 == (Photon_Realtime_Room_o *)0x0) {
    iStack_104 = 0;
    goto label_05e146a2;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar12 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar12 == (Photon_Realtime_Room_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  iStack_104 = Photon_Realtime_Room__get_PlayerCount(pPVar12,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  iVar2 = 1;
  if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar12 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar12 == (Photon_Realtime_Room_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = (pPVar12->fields).maxPlayers;
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05e14603;
label_05e145c2:
    if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode != false) goto label_05e145cf;
label_05e14618:
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (pSVar6 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = (pSVar6->fields).General;
    if (pSVar7 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pSVar7->fields).RoomName;
    if (pSVar5 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
    pSVar10 = (pSVar5->fields)._value;
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05e145c2;
label_05e14603:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) goto label_05e14618;
label_05e145cf:
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
    pSVar10 = "SinglePlayer";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
  }
  pSVar13 = ApplicationManagers_DiscordManager__GetScore(player,method_00);
  pSVar9 = System_String__Concat_5301f10(pSVar9," ",pSVar13,(MethodInfo *)0x0);
label_05e146a2:
  values = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  if (values == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar10 != (System_String_o *)0x0) &&
     (pIVar14 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar10,(((values->obj).klass)->_1).element_class),
     pIVar14 == (Il2CppObject *)0x0)) {
    pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
  }
  if ((int)values->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[0] = (Il2CppObject *)pSVar10;
  Il2CppCodeGenWriteBarrier(values->m_Items);
  if ((pSVar9 != (System_String_o *)0x0) &&
     (pIVar14 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar9,(((values->obj).klass)->_1).element_class),
     pIVar14 == (Il2CppObject *)0x0)) {
    pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
  }
  if ((values->max_length & 0xfffffffe) == 0) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[1] = (Il2CppObject *)pSVar9;
  Il2CppCodeGenWriteBarrier(values->m_Items + 1);
  if ((pSVar11 != (System_String_o *)0x0) &&
     (pIVar14 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar11,(((values->obj).klass)->_1).element_class),
     pIVar14 == (Il2CppObject *)0x0)) {
    pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
  }
  if ((uint)values->max_length < 3) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[2] = (Il2CppObject *)pSVar11;
  Il2CppCodeGenWriteBarrier(values->m_Items + 2);
  iStack_ec = iStack_104;
  pIVar14 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_ec);
  if ((pIVar14 != (Il2CppObject *)0x0) &&
     (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((values->obj).klass)->_1).element_class),
     pIVar15 == (Il2CppObject *)0x0)) {
    pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
  }
  if ((values->max_length & 0xfffffffc) == 0) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[3] = pIVar14;
  Il2CppCodeGenWriteBarrier(values->m_Items + 3);
  iStack_f0 = iVar2;
  pIVar14 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_f0);
  if ((pIVar14 != (Il2CppObject *)0x0) &&
     (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((values->obj).klass)->_1).element_class),
     pIVar15 == (Il2CppObject *)0x0)) {
    pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
  }
  if ((uint)values->max_length < 5) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[4] = pIVar14;
  Il2CppCodeGenWriteBarrier(values->m_Items + 4);
  pSVar13 = System_String__Join_5303170("|",values,(MethodInfo *)0x0);
  bVar8 = System_String__op_Equality(pSVar13,(__this->fields)._lastStatus,(MethodInfo *)0x0);
  if (!bVar8) {
    targetAddress = &(__this->fields)._lastStatus;
    *targetAddress = pSVar13;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
    }
    __this_00 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->discord;
    if (__this_00 == (Discord_Discord_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = Discord_Discord__GetActivityManager(__this_00,(MethodInfo *)0x0);
    uStack_b8 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    pSStack_80 = (System_String_o *)0x0;
    uStack_98 = 0;
    pSStack_90 = (System_String_o *)0x0;
    pSStack_a8 = (System_String_o *)0x0;
    iStack_a0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    pSStack_b0 = pSVar10;
    Il2CppCodeGenWriteBarrier(&pSStack_b0);
    pSStack_a8 = pSVar9;
    Il2CppCodeGenWriteBarrier(&pSStack_a8);
    uStack_e0 = 0;
    pSStack_d8 = (System_String_o *)0x0;
    uStack_d0 = 0;
    pSStack_e8 = "aottg2-logo2";
    Il2CppCodeGenWriteBarrier(&pSStack_e8);
    pSStack_d8 = pSVar11;
    Il2CppCodeGenWriteBarrier(&pSStack_d8);
    pSStack_80 = pSStack_d8;
    uStack_78 = uStack_d0;
    pSStack_90 = pSStack_e8;
    uStack_88 = uStack_e0;
    Il2CppCodeGenWriteBarrier(&pSStack_90);
    iStack_a0 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->time;
    uStack_68 = CONCAT44(iVar2,iStack_104);
    if (__this_01 == (Discord_ActivityManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    puVar17 = &uStack_c8;
    puVar18 = auStackY_598 + 0x80;
    for (lVar16 = 0x12; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
      puVar18 = puVar18 + (ulong)bVar19 * -2 + 1;
    }
    Discord_ActivityManager__UpdateActivity
              (__this_01,in_stack_fffffffffffffe68,(Discord_ActivityManager_UpdateActivityHandler_o *)0x0,
               (MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.DiscordManager$$GetScore
// il2cpp: System_String_o* ApplicationManagers_DiscordManager__GetScore (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5e14c10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e14c4a: jmp 0x5e14dda
// asm:   0x5e14db3: jmp 0x5e14ce0

System_String_o *
ApplicationManagers_DiscordManager__GetScore(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  System_String_array *pSVar3;
  Il2CppObject *pIVar4;
  ulong uVar5;
  System_String_o *pSVar6;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_07548424 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_07548424 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
    pSVar2 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->TrackedProperties;
  }
  else {
    pSVar2 = *(System_String_array **)
              ((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager)->static_fields;
  }
  if (pSVar2 == (System_String_array *)0x0) {
label_05e14dda:
    ThrowNullReferenceException();
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)pSVar2->max_length);
  targetAddress = pSVar2->m_Items;
  uVar5 = 0;
  uVar1 = (TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor;
  while( true ) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
    }
    pSVar3 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->TrackedProperties;
    if (pSVar3 == (System_String_array *)0x0) goto label_05e14dda;
    if ((long)(int)pSVar3->max_length <= (long)uVar5) {
      pSVar6 = System_String__Join(" / ",pSVar2,(MethodInfo *)0x0);
      return pSVar6;
    }
    if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
      pSVar3 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->TrackedProperties;
      if (pSVar3 == (System_String_array *)0x0) goto label_05e14dda;
    }
    if ((uint)pSVar3->max_length <= uVar5) break;
    pIVar4 = PhotonExtensions__GetCustomProperty(player,pSVar3->m_Items[uVar5],(MethodInfo *)0x0);
    pSVar6 = (System_String_o *)0x0;
    if (pIVar4 != (Il2CppObject *)0x0) {
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05e14dda;
      pSVar6 = (System_String_o *)
               (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
    }
    if (pSVar6 == (System_String_o *)0x0) {
      pSVar6 = "0";
    }
    if (pSVar2 == (System_String_array *)0x0) goto label_05e14dda;
    if ((uint)pSVar2->max_length <= uVar5) break;
    *targetAddress = pSVar6;
    Il2CppCodeGenWriteBarrier(targetAddress);
    uVar5 = uVar5 + 1;
    targetAddress = targetAddress + 1;
    uVar1 = (TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor;
  }
  ThrowIndexOutOfRangeException();
}


// ApplicationManagers.DiscordManager$$.ctor
// il2cpp: void ApplicationManagers_DiscordManager___ctor (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x5e14df0

void ApplicationManagers_DiscordManager___ctor
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DiscordManager$$.cctor
// il2cpp: void ApplicationManagers_DiscordManager___cctor (const MethodInfo* method);
// 0x5e14e00

void ApplicationManagers_DiscordManager___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07548425 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_07548425 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "Kills";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "Deaths";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "HighestDamage";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "TotalDamage";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          TypeInfo_ApplicationManagers_DiscordManager->static_fields->TrackedProperties = pSVar1;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_ApplicationManagers_DiscordManager->static_fields->TrackedProperties);
          TypeInfo_ApplicationManagers_DiscordManager->static_fields->appID = 0x115181d372441070;
          return;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


