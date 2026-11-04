// Type: GameManagers.TeamInfo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/TeamInfo.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x181e77000

bool GameManagers_TeamInfo__SameTeam(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184344f1d = '\x01';
  }
  bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar1 = System_String__op_Inequality
                      (a,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar1 = System_String__op_Inequality
                        (b,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (Characters_BaseCharacter_o* a, Characters_BaseCharacter_o* b, const MethodInfo* method);
// 0x181e770d0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e77217: xor r8d, r8d
// asm:   0x181e7721a: mov rdx, rbx
// asm:   0x181e7721d: mov rcx, rdi
// asm:   0x181e77220: call 0x182f22ec0  ; UnityEngine_Object__op_Equality()
// asm:   0x181e77225: jmp 0x181e771ed

bool GameManagers_TeamInfo__SameTeam_1e770d0
               (Characters_BaseCharacter_o *a,Characters_BaseCharacter_o *b,MethodInfo *method)

{
  System_String_o *b_00;
  System_String_o *a_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184344f1e = '\x01';
  }
  if ((a == (Characters_BaseCharacter_o *)0x0) || (b == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  b_00 = (b->fields).Team;
  a_00 = (a->fields).Team;
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  if (Il2CppMethodInitialized_184344f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184344f1d = '\x01';
  }
  bVar1 = System_String__op_Equality(a_00,b_00,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar1 = System_String__op_Inequality
                      (a_00,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar1 = System_String__op_Inequality
                        (b_00,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)b,(MethodInfo *)0x0);
  return bVar1;
}


// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (Characters_BaseCharacter_o* a, System_String_o* b, const MethodInfo* method);
// 0x181e76f20

bool GameManagers_TeamInfo__SameTeam_1e76f20
               (Characters_BaseCharacter_o *a,System_String_o *b,MethodInfo *method)

{
  System_String_o *a_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184344f1f = '\x01';
  }
  if (a == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((a->fields).Team,b,(MethodInfo *)0x0);
  if (bVar1) {
    a_00 = (a->fields).Team;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar1 = System_String__op_Inequality
                      (a_00,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar1 = System_String__op_Inequality
                        (b,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// GameManagers.TeamInfo$$GetTeamColorUnity
// il2cpp: UnityEngine_Color_o GameManagers_TeamInfo__GetTeamColorUnity (System_String_o* Team, const MethodInfo* method);
// 0x181e76bc0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e76d54: jmp 0x181e76d6f
// asm:   0x181e76d56: mov rcx, qword ptr [rip + 0x2233613]  ; "#ACD1E9"
// asm:   0x181e76d5d: jmp 0x181e76d6f
// asm:   0x181e76d5f: mov rcx, qword ptr [rip + 0x223344a]  ; "#9A3334"
// asm:   0x181e76d66: jmp 0x181e76d6f
// asm:   0x181e76d68: mov rcx, qword ptr [rip + 0x2232d41]  ; "#3399FF"

UnityEngine_Color_o *
GameManagers_TeamInfo__GetTeamColorUnity
          (UnityEngine_Color_o *__return_storage_ptr__,System_String_o *Team,MethodInfo *method)

{
  bool bVar1;
  System_String_o *htmlString;
  
  if (Il2CppMethodInitialized_184344f20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184344f20 = '\x01';
  }
  (__return_storage_ptr__->fields).r = 0.0;
  (__return_storage_ptr__->fields).g = 0.0;
  (__return_storage_ptr__->fields).b = 0.0;
  (__return_storage_ptr__->fields).a = 0.0;
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  if (Il2CppMethodInitialized_184344f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"#3399FF");
    il2cpp_codegen_initialize_runtime_metadata(&"#9A3334");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFD800");
    il2cpp_codegen_initialize_runtime_metadata(&"#ACD1E9");
    il2cpp_codegen_initialize_runtime_metadata(&"white");
    Il2CppMethodInitialized_184344f21 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Equality
                    (Team,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
  htmlString = "#3399FF";
  if (!bVar1) {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar1 = System_String__op_Equality
                      (Team,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
    htmlString = "#9A3334";
    if (!bVar1) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar1 = System_String__op_Equality
                        (Team,TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0);
      htmlString = "#ACD1E9";
      if (!bVar1) {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar1 = System_String__op_Equality
                          (Team,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
        htmlString = "#FFD800";
        if (!bVar1) {
          htmlString = "white";
        }
      }
    }
  }
  UnityEngine_ColorUtility__TryParseHtmlString(htmlString,__return_storage_ptr__,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// GameManagers.TeamInfo$$GetTeamColor
// il2cpp: System_String_o* GameManagers_TeamInfo__GetTeamColor (System_String_o* team, const MethodInfo* method);
// 0x181e76d90

System_String_o * GameManagers_TeamInfo__GetTeamColor(System_String_o *team,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"#3399FF");
    il2cpp_codegen_initialize_runtime_metadata(&"#9A3334");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFD800");
    il2cpp_codegen_initialize_runtime_metadata(&"#ACD1E9");
    il2cpp_codegen_initialize_runtime_metadata(&"white");
    Il2CppMethodInitialized_184344f21 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Equality
                    (team,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
  if (bVar1) {
    return "#3399FF";
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Equality
                    (team,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
  if (bVar1) {
    return "#9A3334";
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Equality
                    (team,TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar1 = System_String__op_Equality
                      (team,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
    pSVar2 = "#FFD800";
    if (!bVar1) {
      pSVar2 = "white";
    }
    return pSVar2;
  }
  return "#ACD1E9";
}


// GameManagers.TeamInfo$$.ctor
// il2cpp: void GameManagers_TeamInfo___ctor (GameManagers_TeamInfo_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_TeamInfo___ctor(GameManagers_TeamInfo_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.TeamInfo$$.cctor
// il2cpp: void GameManagers_TeamInfo___cctor (const MethodInfo* method);
// 0x181e77230

void GameManagers_TeamInfo___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Red");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Blue");
    Il2CppMethodInitialized_184344f22 = '\x01';
  }
  TypeInfo_GameManagers_TeamInfo->static_fields->Blue = "Blue";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_TeamInfo->static_fields->Blue,"Blue");
  TypeInfo_GameManagers_TeamInfo->static_fields->Red = "Red";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_TeamInfo->static_fields->Red,"Red");
  TypeInfo_GameManagers_TeamInfo->static_fields->None = "None";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_TeamInfo->static_fields->None,"None");
  TypeInfo_GameManagers_TeamInfo->static_fields->Titan = "Titan";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_TeamInfo->static_fields->Titan,"Titan");
  TypeInfo_GameManagers_TeamInfo->static_fields->Human = "Human";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_TeamInfo->static_fields->Human,"Human");
  return;
}


