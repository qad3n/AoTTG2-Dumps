// Type: ApplicationManagers.DiscordManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/DiscordManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DiscordManager.cs
// --------------------------------

// ApplicationManagers.DiscordManager$$Init
// il2cpp: void ApplicationManagers_DiscordManager__Init (const MethodInfo* method);
// 0x18234d9d0
// eh: try 0x18234da7c..0x18234dc8e -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234dbea: lea rcx, [rip + 0x1dad847]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18234dbf1: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234dbf6: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18234dbfd: jne 0x18234dc07
// asm:   0x18234dbff: mov rcx, rax
// asm:   0x18234dc02: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18234dc07: lea rcx, [rip + 0x1d42e92]  ; "Unable to initialize discord manager."
// asm:   0x18234dc0e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234dc13: mov rcx, rax
// asm:   0x18234dc16: xor edx, edx
// asm:   0x18234dc18: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18234dc1d: lea rcx, [rip + 0x1d214dc]  ; TypeInfo_ApplicationManagers_DiscordManager
// asm:   0x18234dc24: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234dc29: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18234dc30: jne 0x18234dc3a
// asm:   0x18234dc32: mov rcx, rax
// asm:   0x18234dc35: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18234dc3a: lea rcx, [rip + 0x1d214bf]  ; TypeInfo_ApplicationManagers_DiscordManager
// asm:   0x18234dc41: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234dc46: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x18234dc4d: mov rbx, qword ptr [rcx]
// asm:   0x18234dc50: lea rcx, [rip + 0x1d84701]  ; TypeInfo_UnityEngine_Object
// asm:   0x18234dc57: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234dc5c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18234dc63: jne 0x18234dc6d
// asm:   0x18234dc65: mov rcx, rax
// asm:   0x18234dc68: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18234dc6d: xor edx, edx
// asm:   0x18234dc6f: mov rcx, rbx
// asm:   0x18234dc72: call 0x182f1ff70  ; UnityEngine_Object__Destroy()
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void ApplicationManagers_DiscordManager__Init(MethodInfo *method)

{
  Discord_Activity_Fields *pDVar1;
  ApplicationManagers_DiscordManager_o *pAVar2;
  Discord_Discord_o *__this;
  System_DateTimeOffset_o *pSVar3;
  int64_t iVar4;
  System_DateTimeOffset_o local_28;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347967 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Discord_Discord);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DiscordManager);
    Il2CppMethodInitialized_184347967 = '\x01';
  }
  local_28.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_28.fields._offsetMinutes = 0;
  local_28.fields._10_6_ = 0;
  if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
  }
  pAVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_DiscordManager->static_fields->_instance,
                      (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_DiscordManager)
  ;
  TypeInfo_ApplicationManagers_DiscordManager->static_fields->_instance = pAVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DiscordManager->static_fields->_instance,pAVar2);
  if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
  }
  iVar4 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->appID;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Discord_Discord);
  Discord_Discord___ctor(__this,iVar4,1,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_DiscordManager->static_fields->discord = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DiscordManager->static_fields->discord,__this);
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  pSVar3 = System_DateTimeOffset__get_Now(&local_18,(MethodInfo *)0x0);
  local_28.fields._dateTime.fields._dateData =
       (System_DateTime_Fields)(pSVar3->fields)._dateTime.fields._dateData;
  local_28.fields._offsetMinutes = (pSVar3->fields)._offsetMinutes;
  local_28.fields._10_6_ = *(undefined6 *)&(pSVar3->fields).field_0xa;
  iVar4 = System_DateTimeOffset__ToUnixTimeMilliseconds(&local_28,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_DiscordManager->static_fields->time = iVar4;
  pAVar2 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->_instance;
  if (pAVar2 != (ApplicationManagers_DiscordManager_o *)0x0) {
    *(undefined8 *)&(pAVar2->fields).roomActivity.fields = 0;
    (pAVar2->fields).roomActivity.fields.ApplicationId = 0;
    (pAVar2->fields).roomActivity.fields.Name = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.State = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Details = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Timestamps.fields.Start = 0;
    (pAVar2->fields).roomActivity.fields.Timestamps.fields.End = 0;
    (pAVar2->fields).roomActivity.fields.Assets.fields.LargeImage = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Assets.fields.LargeText = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Assets.fields.SmallImage = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Assets.fields.SmallText = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Party.fields.Id = (System_String_o *)0x0;
    pDVar1 = &(pAVar2->fields).roomActivity.fields;
    (pDVar1->Party).fields.Size.fields.CurrentSize = 0;
    (pDVar1->Party).fields.Size.fields.MaxSize = 0;
    *(undefined8 *)&(pAVar2->fields).roomActivity.fields.Party.fields.Privacy = 0;
    (pAVar2->fields).roomActivity.fields.Secrets.fields.Match = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Secrets.fields.Join = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Secrets.fields.Spectate = (System_String_o *)0x0;
    (pAVar2->fields).roomActivity.fields.Instance = false;
    *(undefined3 *)&(pAVar2->fields).roomActivity.fields.field_0x89 = 0;
    (pAVar2->fields).roomActivity.fields.SupportedPlatforms = 0;
    pAVar2 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->_instance;
    if (pAVar2 != (ApplicationManagers_DiscordManager_o *)0x0) {
      *(undefined8 *)&(pAVar2->fields).mainMenuActivity.fields = 0;
      (pAVar2->fields).mainMenuActivity.fields.ApplicationId = 0;
      (pAVar2->fields).mainMenuActivity.fields.Name = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.State = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Details = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Timestamps.fields.Start = 0;
      (pAVar2->fields).mainMenuActivity.fields.Timestamps.fields.End = 0;
      (pAVar2->fields).mainMenuActivity.fields.Assets.fields.LargeImage = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Assets.fields.LargeText = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Assets.fields.SmallImage = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Assets.fields.SmallText = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Party.fields.Id = (System_String_o *)0x0;
      pDVar1 = &(pAVar2->fields).mainMenuActivity.fields;
      (pDVar1->Party).fields.Size.fields.CurrentSize = 0;
      (pDVar1->Party).fields.Size.fields.MaxSize = 0;
      *(undefined8 *)&(pAVar2->fields).mainMenuActivity.fields.Party.fields.Privacy = 0;
      (pAVar2->fields).mainMenuActivity.fields.Secrets.fields.Match = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Secrets.fields.Join = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Secrets.fields.Spectate = (System_String_o *)0x0;
      (pAVar2->fields).mainMenuActivity.fields.Instance = false;
      *(undefined3 *)&(pAVar2->fields).mainMenuActivity.fields.field_0x89 = 0;
      (pAVar2->fields).mainMenuActivity.fields.SupportedPlatforms = 0;
      return;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DiscordManager$$Update
// il2cpp: void ApplicationManagers_DiscordManager__Update (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x18234e720
// eh: try 0x18234e759..0x18234e7c7 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234e77f: xor edx, edx
// asm:   0x18234e781: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18234e786: call 0x182f14830  ; UnityEngine_Component__get_gameObject()
// asm:   0x18234e78b: mov rbx, rax
// asm:   0x18234e78e: lea rcx, [rip + 0x1d83bc3]  ; TypeInfo_UnityEngine_Object
// asm:   0x18234e795: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234e79a: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18234e7a1: jne 0x18234e7ab
// asm:   0x18234e7a3: mov rcx, rax
// asm:   0x18234e7a6: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18234e7ab: xor edx, edx
// asm:   0x18234e7ad: mov rcx, rbx
// asm:   0x18234e7b0: add rsp, 0x30
// asm:   0x18234e7b4: pop rbx
// asm:   0x18234e7b5: jmp 0x182f1ff70  ; UnityEngine_Object__Destroy()
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void ApplicationManagers_DiscordManager__Update
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  Discord_Discord_o *__this_00;
  
  if (Il2CppMethodInitialized_184347968 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    Il2CppMethodInitialized_184347968 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
  }
  __this_00 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->discord;
  if (__this_00 != (Discord_Discord_o *)0x0) {
    Discord_Discord__RunCallbacks(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DiscordManager$$LateUpdate
// il2cpp: void ApplicationManagers_DiscordManager__LateUpdate (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x18234dc90

void ApplicationManagers_DiscordManager__LateUpdate
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  ApplicationManagers_DiscordManager__UpdateStatus(__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DiscordManager$$SetRoomActivity
// il2cpp: void ApplicationManagers_DiscordManager__SetRoomActivity (ApplicationManagers_DiscordManager_o* __this, System_String_o* state, System_String_o* details, System_String_o* profileIcon, int64_t startTime, int32_t playerCount, int32_t maxPlayers, const MethodInfo* method);
// 0x18234dd30

void ApplicationManagers_DiscordManager__SetRoomActivity
               (ApplicationManagers_DiscordManager_o *__this,System_String_o *state,System_String_o *details,
               System_String_o *profileIcon,int64_t startTime,int32_t playerCount,int32_t maxPlayers,
               MethodInfo *method)

{
  Discord_ActivityAssets_o *targetAddress;
  System_String_o *value;
  
  (__this->fields).roomActivity.fields.State = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields).roomActivity.fields.State,state);
  (__this->fields).roomActivity.fields.Details = details;
  Il2CppCodeGenWriteBarrier(&(__this->fields).roomActivity.fields.Details,details);
  value = (__this->fields).largeImage;
  targetAddress = &(__this->fields).roomActivity.fields.Assets;
  (targetAddress->fields).LargeImage = value;
  Il2CppCodeGenWriteBarrier((void **)targetAddress,value);
  (__this->fields).roomActivity.fields.Assets.fields.SmallImage = profileIcon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).roomActivity.fields.Assets.fields.SmallImage,profileIcon);
  (__this->fields).roomActivity.fields.Timestamps.fields.Start = startTime;
  (__this->fields).roomActivity.fields.Party.fields.Size.fields.CurrentSize = playerCount;
  *(int32_t *)((longlong)&(__this->fields).roomActivity.fields.Party.fields.Size.fields + 4) = maxPlayers;
  return;
}


// ApplicationManagers.DiscordManager$$SetMenuActivity
// il2cpp: void ApplicationManagers_DiscordManager__SetMenuActivity (ApplicationManagers_DiscordManager_o* __this, System_String_o* state, System_String_o* details, System_String_o* profileIcon, int64_t startTime, const MethodInfo* method);
// 0x18234dca0

void ApplicationManagers_DiscordManager__SetMenuActivity
               (ApplicationManagers_DiscordManager_o *__this,System_String_o *state,System_String_o *details,
               System_String_o *profileIcon,int64_t startTime,MethodInfo *method)

{
  Discord_ActivityAssets_o *targetAddress;
  System_String_o *value;
  
  (__this->fields).mainMenuActivity.fields.State = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields).mainMenuActivity.fields.State,state);
  (__this->fields).mainMenuActivity.fields.Details = details;
  Il2CppCodeGenWriteBarrier(&(__this->fields).mainMenuActivity.fields.Details,details);
  value = (__this->fields).largeImage;
  targetAddress = &(__this->fields).mainMenuActivity.fields.Assets;
  (targetAddress->fields).LargeImage = value;
  Il2CppCodeGenWriteBarrier((void **)targetAddress,value);
  (__this->fields).mainMenuActivity.fields.Assets.fields.SmallImage = profileIcon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).mainMenuActivity.fields.Assets.fields.SmallImage,profileIcon);
  (__this->fields).mainMenuActivity.fields.Timestamps.fields.Start = startTime;
  return;
}


// ApplicationManagers.DiscordManager$$UpdateStatus
// il2cpp: void ApplicationManagers_DiscordManager__UpdateStatus (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x18234ddc0
// eh: try 0x18234ded8..0x18234e718 -> pad 0x183340620 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 49 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234e3ad: mov rax, qword ptr [rip + 0x1d9b69c]  ; "0"
// asm:   0x18234e62b: nop 
// asm:   0x18234e62e: lea rcx, [rip + 0x1dace03]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18234e635: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234e63a: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18234e641: jne 0x18234e64b
// asm:   0x18234e643: mov rcx, rax
// asm:   0x18234e646: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18234e64b: lea rcx, [rip + 0x1d640ee]  ; "Discord activity update Failed"
// asm:   0x18234e652: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234e657: mov rcx, rax
// asm:   0x18234e65a: xor edx, edx
// asm:   0x18234e65c: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18234e661: xor edx, edx
// asm:   0x18234e663: mov rcx, qword ptr [rsp + 0x1c0]
// asm:   0x18234e66b: call 0x182f14830  ; UnityEngine_Component__get_gameObject()
// asm:   0x18234e670: mov rbx, rax
// asm:   0x18234e673: lea rcx, [rip + 0x1d83cde]  ; TypeInfo_UnityEngine_Object
// asm:   0x18234e67a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18234e67f: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18234e686: jne 0x18234e690
// asm:   0x18234e688: mov rcx, rax
// asm:   0x18234e68b: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18234e690: xor edx, edx
// asm:   0x18234e692: mov rcx, rbx
// asm:   0x18234e695: call 0x182f1ff70  ; UnityEngine_Object__Destroy()
// asm:   0x183340620: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340625: push rbx
// asm:   0x183340626: push rbp
// asm:   0x183340627: sub rsp, 0x38
// asm:   0x18334062b: mov rbp, rdx
// asm:   0x18334062e: mov rbx, qword ptr [rbp + 0x180]
// asm:   0x183340635: mov rdx, qword ptr [rbx]
// asm:   0x183340638: mov rdx, qword ptr [rdx]
// asm:   0x18334063b: mov rcx, qword ptr [rip + 0x101478e]
// asm:   0x183340642: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340647: test al, al
// asm:   0x183340649: je 0x183340657
// asm:   0x18334064b: movabs rax, 0
// asm:   0x183340655: jmp 0x183340675
// asm:   0x183340657: mov rax, qword ptr [rbx]
// asm:   0x18334065a: mov qword ptr [rbp + 0xe0], rax
// asm:   0x183340661: lea rdx, [rip + 0xc9b920]
// asm:   0x183340668: lea rcx, [rbp + 0xe0]
// asm:   0x18334066f: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183340675: add rsp, 0x38
// asm:   0x183340679: pop rbp
// asm:   0x18334067a: pop rbx
// asm:   0x18334067b: ret 

void ApplicationManagers_DiscordManager__UpdateStatus
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  uint uVar1;
  Discord_Discord_o *__this_00;
  Settings_ProfileSettings_o *pSVar2;
  Settings_NameSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameGeneralSettings_o *pSVar6;
  System_String_array *pSVar7;
  bool bVar8;
  int32_t iVar9;
  Discord_ActivityManager_o *__this_01;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Photon_Realtime_Room_o *pPVar13;
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar14;
  System_String_o *str1;
  uint uVar15;
  System_String_o *local_188;
  System_String_o *pSStack_180;
  System_String_o *local_178;
  System_String_o *pSStack_170;
  Discord_Activity_Fields local_168;
  Discord_Activity_Fields local_c8;
  
  if (Il2CppMethodInitialized_184347969 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"] ");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Creating a room");
    il2cpp_codegen_initialize_runtime_metadata(&"SinglePlayer");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347969 = '\x01';
  }
  local_168.Type = 0;
  local_168._4_4_ = 0;
  local_168.ApplicationId = 0;
  local_168.Name = (System_String_o *)0x0;
  local_168.State = (System_String_o *)0x0;
  local_168.Details = (System_String_o *)0x0;
  local_168.Timestamps.fields.Start = 0;
  local_168.Timestamps.fields.End = 0;
  local_168.Assets.fields.LargeImage = (System_String_o *)0x0;
  local_168.Assets.fields.LargeText = (System_String_o *)0x0;
  local_168.Assets.fields.SmallImage = (System_String_o *)0x0;
  local_168.Assets.fields.SmallText = (System_String_o *)0x0;
  local_168.Party.fields.Id = (System_String_o *)0x0;
  local_168.Party.fields.Size.fields.CurrentSize = 0;
  local_168.Party.fields.Size.fields.MaxSize = 0;
  local_168.Party.fields.Privacy = 0;
  local_168.Party.fields._20_4_ = 0;
  local_168.Secrets.fields.Match = (System_String_o *)0x0;
  local_168.Secrets.fields.Join = (System_String_o *)0x0;
  local_168.Secrets.fields.Spectate = (System_String_o *)0x0;
  local_168.Instance = false;
  local_168._137_3_ = 0;
  local_168.SupportedPlatforms = 0;
  local_188 = (System_String_o *)0x0;
  pSStack_180 = (System_String_o *)0x0;
  local_178 = (System_String_o *)0x0;
  pSStack_170 = (System_String_o *)0x0;
  if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
  }
  __this_00 = TypeInfo_ApplicationManagers_DiscordManager->static_fields->discord;
  if (__this_00 == (Discord_Discord_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = Discord_Discord__GetActivityManager(__this_00,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar2 == (Settings_ProfileSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (pSVar2->fields).Name;
  if (pSVar3 == (Settings_NameSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar12 = (pSVar3->fields)._value;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar10 = MiscExtensions__StripHex(pSVar12,(MethodInfo *)0x0);
  pSVar12 = "";
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar2 == (Settings_ProfileSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (pSVar2->fields).Guild;
  if (pSVar3 == (Settings_NameSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar8 = System_String__op_Inequality((pSVar3->fields)._value,"",(MethodInfo *)0x0);
  if (bVar8) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    if (pSVar2 == (Settings_ProfileSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (pSVar2->fields).Guild;
    if (pSVar3 == (Settings_NameSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar11 = (pSVar3->fields)._value;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar11 = MiscExtensions__StripHex(pSVar11,(MethodInfo *)0x0);
    pSVar12 = System_String__Concat_1969590
                        (pSVar12,"[",pSVar11,"] ",(MethodInfo *)0x0);
  }
  pSVar11 = "Creating a room";
  pSVar12 = System_String__Concat_1969e50(pSVar12,pSVar10,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar2 == (Settings_ProfileSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (pSVar2->fields).ProfileIcon;
  if (pSVar4 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar10 = (pSVar4->fields)._value;
  if (pSVar10 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar10 = System_String__ToLower(pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar13 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar13 == (Photon_Realtime_Room_o *)0x0) {
    local_168.Type = 0;
    local_168._4_4_ = 0;
    local_168.ApplicationId = 0;
    local_168.Name = (System_String_o *)0x0;
    local_168.Details = (System_String_o *)0x0;
    local_168.Timestamps.fields.Start = 0;
    local_168.Timestamps.fields.End = 0;
    local_168.Assets.fields.LargeImage = (System_String_o *)0x0;
    local_168.Assets.fields.LargeText = (System_String_o *)0x0;
    local_168.Assets.fields.SmallImage = (System_String_o *)0x0;
    local_168.Assets.fields.SmallText = (System_String_o *)0x0;
    local_168.Party.fields.Id = (System_String_o *)0x0;
    local_168.Party.fields.Size.fields.CurrentSize = 0;
    local_168.Party.fields.Size.fields.MaxSize = 0;
    local_168.Party.fields.Privacy = 0;
    local_168.Party.fields._20_4_ = 0;
    local_168.Secrets.fields.Match = (System_String_o *)0x0;
    local_168.Secrets.fields.Join = (System_String_o *)0x0;
    local_168.Secrets.fields.Spectate = (System_String_o *)0x0;
    local_168.Instance = false;
    local_168._137_3_ = 0;
    local_168.SupportedPlatforms = 0;
    local_168.State = pSVar11;
    Il2CppCodeGenWriteBarrier(&local_168.State,pSVar11);
    local_168.Details = pSVar12;
    Il2CppCodeGenWriteBarrier(&local_168.Details,pSVar12);
    pSStack_180 = (System_String_o *)0x0;
    local_178 = (System_String_o *)0x0;
    pSStack_170 = (System_String_o *)0x0;
    local_188 = (__this->fields).largeImage;
    Il2CppCodeGenWriteBarrier(&local_188,local_188);
    local_178 = pSVar10;
    Il2CppCodeGenWriteBarrier(&local_178,pSVar10);
    local_168.Assets.fields.LargeImage = local_188;
    local_168.Assets.fields.LargeText = pSStack_180;
    local_168.Assets.fields.SmallImage = local_178;
    local_168.Assets.fields.SmallText = pSStack_170;
    Il2CppCodeGenWriteBarrier((void **)&local_168.Assets,(void *)0x0);
    if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
    }
    local_168.Timestamps.fields.Start = TypeInfo_ApplicationManagers_DiscordManager->static_fields->time;
    if (__this_01 == (Discord_ActivityManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_c8.Type = local_168.Type;
    local_c8._4_4_ = local_168._4_4_;
    local_c8.ApplicationId = local_168.ApplicationId;
    local_c8.Name = local_168.Name;
    local_c8.State = local_168.State;
    local_c8.Details = local_168.Details;
    local_c8.Timestamps.fields.End = local_168.Timestamps.fields.End;
    local_c8.Assets.fields.LargeImage = local_168.Assets.fields.LargeImage;
    local_c8.Assets.fields.LargeText = local_168.Assets.fields.LargeText;
    local_c8.Assets.fields.SmallImage = local_168.Assets.fields.SmallImage;
    local_c8.Assets.fields.SmallText = local_168.Assets.fields.SmallText;
    local_c8.Party.fields.Id = local_168.Party.fields.Id;
    local_c8.Party.fields.Size.fields = local_168.Party.fields.Size.fields;
    local_c8.Party.fields.Privacy = local_168.Party.fields.Privacy;
    local_c8.Party.fields._20_4_ = local_168.Party.fields._20_4_;
    local_c8.Secrets.fields.Match = local_168.Secrets.fields.Match;
    local_c8.Secrets.fields.Join = local_168.Secrets.fields.Join;
    local_c8.Secrets.fields.Spectate = local_168.Secrets.fields.Spectate;
    local_c8.Instance = local_168.Instance;
    local_c8._137_3_ = local_168._137_3_;
    local_c8.SupportedPlatforms = local_168.SupportedPlatforms;
    local_c8.Timestamps.fields.Start = local_168.Timestamps.fields.Start;
    Discord_ActivityManager__UpdateActivity
              (__this_01,(Discord_Activity_o *)&local_c8,
               (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar13 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar13 == (Photon_Realtime_Room_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar9 = Photon_Realtime_Room__get_PlayerCount(pPVar13,(MethodInfo *)0x0);
    (__this->fields).playerCount = iVar9;
    if (Il2CppMethodInitialized_184344524 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      Il2CppMethodInitialized_184344524 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar13 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar13 == (Photon_Realtime_Room_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar9 = (pPVar13->fields).maxPlayers;
    }
    else {
      iVar9 = 1;
    }
    (__this->fields).maxPlayerCount = iVar9;
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (pSVar5 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar5->fields).General;
    if (pSVar6 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (pSVar6->fields).RoomName;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar11 = (pSVar4->fields)._value;
    (__this->fields).roomName = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields).roomName,pSVar11);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    uVar15 = 0;
    while( true ) {
      pSVar7 = (__this->fields).trackedProperties;
      if (pSVar7 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar1 = (uint)pSVar7->max_length;
      if ((int)uVar1 <= (int)uVar15) break;
      if (uVar1 <= uVar15) {
        ThrowIndexOutOfRangeException();
      }
      pIVar14 = PhotonExtensions__GetCustomProperty(player,pSVar7->m_Items[(int)uVar15],(MethodInfo *)0x0);
      str1 = "0";
      if (pIVar14 != (Il2CppObject *)0x0) {
        str1 = (System_String_o *)
               (*pIVar14->klass->vtable[3].methodPtr)(pIVar14,pIVar14->klass->vtable[3].method);
      }
      pSVar11 = System_String__Concat_1969e50(pSVar11,str1,(MethodInfo *)0x0);
      pSVar7 = (__this->fields).trackedProperties;
      if (pSVar7 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)uVar15 < (int)pSVar7->max_length + -1) {
        pSVar11 = System_String__Concat_1969e50(pSVar11," / ",(MethodInfo *)0x0);
      }
      uVar15 = uVar15 + 1;
    }
    pSVar12 = System_String__Concat_1969b70(pSVar12," ",pSVar11,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    if (Il2CppMethodInitialized_184344524 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      Il2CppMethodInitialized_184344524 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    local_168.State = "SinglePlayer";
    if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
      local_168.State = (__this->fields).roomName;
    }
    local_168.Type = 0;
    local_168._4_4_ = 0;
    local_168.ApplicationId = 0;
    local_168.Name = (System_String_o *)0x0;
    local_168.Details = (System_String_o *)0x0;
    local_168.Timestamps.fields.Start = 0;
    local_168.Timestamps.fields.End = 0;
    local_168.Assets.fields.LargeImage = (System_String_o *)0x0;
    local_168.Assets.fields.LargeText = (System_String_o *)0x0;
    local_168.Assets.fields.SmallImage = (System_String_o *)0x0;
    local_168.Assets.fields.SmallText = (System_String_o *)0x0;
    local_168.Party.fields.Id = (System_String_o *)0x0;
    local_168.Party.fields.Size.fields.CurrentSize = 0;
    local_168.Party.fields.Size.fields.MaxSize = 0;
    local_168.Party.fields.Privacy = 0;
    local_168.Party.fields._20_4_ = 0;
    local_168.Secrets.fields.Match = (System_String_o *)0x0;
    local_168.Secrets.fields.Join = (System_String_o *)0x0;
    local_168.Secrets.fields.Spectate = (System_String_o *)0x0;
    local_168.Instance = false;
    local_168._137_3_ = 0;
    local_168.SupportedPlatforms = 0;
    Il2CppCodeGenWriteBarrier(&local_168.State,local_168.State);
    local_168.Details = pSVar12;
    Il2CppCodeGenWriteBarrier(&local_168.Details,pSVar12);
    pSStack_180 = (System_String_o *)0x0;
    local_178 = (System_String_o *)0x0;
    pSStack_170 = (System_String_o *)0x0;
    local_188 = (__this->fields).largeImage;
    Il2CppCodeGenWriteBarrier(&local_188,local_188);
    local_178 = pSVar10;
    Il2CppCodeGenWriteBarrier(&local_178,pSVar10);
    local_168.Assets.fields.LargeImage = local_188;
    local_168.Assets.fields.LargeText = pSStack_180;
    local_168.Assets.fields.SmallImage = local_178;
    local_168.Assets.fields.SmallText = pSStack_170;
    Il2CppCodeGenWriteBarrier((void **)&local_168.Assets,(void *)0x0);
    if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
    }
    local_168.Timestamps.fields.Start = TypeInfo_ApplicationManagers_DiscordManager->static_fields->time;
    local_168.Party.fields.Size.fields.CurrentSize = (__this->fields).playerCount;
    local_168.Party.fields.Size.fields.MaxSize = (__this->fields).maxPlayerCount;
    if (__this_01 == (Discord_ActivityManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_c8.Type = local_168.Type;
    local_c8._4_4_ = local_168._4_4_;
    local_c8.ApplicationId = local_168.ApplicationId;
    local_c8.Name = local_168.Name;
    local_c8.State = local_168.State;
    local_c8.Details = local_168.Details;
    local_c8.Timestamps.fields.End = local_168.Timestamps.fields.End;
    local_c8.Assets.fields.LargeImage = local_168.Assets.fields.LargeImage;
    local_c8.Assets.fields.LargeText = local_168.Assets.fields.LargeText;
    local_c8.Assets.fields.SmallImage = local_168.Assets.fields.SmallImage;
    local_c8.Assets.fields.SmallText = local_168.Assets.fields.SmallText;
    local_c8.Party.fields.Id = local_168.Party.fields.Id;
    local_c8.Party.fields.Privacy = local_168.Party.fields.Privacy;
    local_c8.Party.fields._20_4_ = local_168.Party.fields._20_4_;
    local_c8.Secrets.fields.Match = local_168.Secrets.fields.Match;
    local_c8.Secrets.fields.Join = local_168.Secrets.fields.Join;
    local_c8.Secrets.fields.Spectate = local_168.Secrets.fields.Spectate;
    local_c8.Instance = local_168.Instance;
    local_c8._137_3_ = local_168._137_3_;
    local_c8.SupportedPlatforms = local_168.SupportedPlatforms;
    local_c8.Timestamps.fields.Start = local_168.Timestamps.fields.Start;
    local_c8.Party.fields.Size.fields = local_168.Party.fields.Size.fields;
    Discord_ActivityManager__UpdateActivity
              (__this_01,(Discord_Activity_o *)&local_c8,
               (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.DiscordManager$$.ctor
// il2cpp: void ApplicationManagers_DiscordManager___ctor (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x18234e820

void ApplicationManagers_DiscordManager___ctor
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_18434796a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"aottg2-logo2");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_18434796a = '\x01';
  }
  (__this->fields).largeImage = "aottg2-logo2";
  Il2CppCodeGenWriteBarrier(&(__this->fields).largeImage,"aottg2-logo2");
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "Kills";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "Kills";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "Deaths";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "Deaths";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "HighestDamage";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "HighestDamage";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "TotalDamage";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "TotalDamage";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            (__this->fields).trackedProperties = value;
            Il2CppCodeGenWriteBarrier(&(__this->fields).trackedProperties,value);
            UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DiscordManager$$.cctor
// il2cpp: void ApplicationManagers_DiscordManager___cctor (const MethodInfo* method);
// 0x18234e7d0

void ApplicationManagers_DiscordManager___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434796b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    Il2CppMethodInitialized_18434796b = '\x01';
  }
  TypeInfo_ApplicationManagers_DiscordManager->static_fields->appID = 0x115181d372441070;
  return;
}


