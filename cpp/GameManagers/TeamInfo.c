// Type: GameManagers.TeamInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/GameManagers/TeamInfo.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x5958850

bool GameManagers_TeamInfo__SameTeam(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075458be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_075458be = '\x01';
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
// 0x5958900

bool GameManagers_TeamInfo__SameTeam_5858900
               (Characters_BaseCharacter_o *a,Characters_BaseCharacter_o *b,MethodInfo *method)

{
  byte bVar1;
  System_String_o *a_00;
  System_String_o *b_00;
  Characters_BaseCharacter_c *pCVar2;
  bool bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075458bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_075458bf = '\x01';
    method = extraout_RDX;
  }
  if ((a == (Characters_BaseCharacter_o *)0x0) || (b == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  a_00 = (a->fields).Team;
  b_00 = (b->fields).Team;
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    method = extraout_RDX_00;
  }
  bVar3 = GameManagers_TeamInfo__SameTeam(a_00,b_00,method);
  bVar4 = true;
  if (!bVar3) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)b,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      if (Il2CppMethodInitialized_075458c0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075458c0 = '\x01';
      }
      bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
      if ((bVar1 <= (b->klass->_2).typeHierarchyDepth) &&
         ((b->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)) {
        pCVar2 = (*(uint64_t *)((char *)b + 0x100));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)a,(MethodInfo *)0x0);
        if (bVar3) {
          return true;
        }
      }
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      if (Il2CppMethodInitialized_075458c0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075458c0 = '\x01';
      }
      bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
      if ((bVar1 <= (a->klass->_2).typeHierarchyDepth) &&
         ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)) {
        pCVar2 = (*(uint64_t *)((char *)a + 0x100));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)b,(MethodInfo *)0x0);
        return bVar3;
      }
      bVar4 = false;
    }
  }
  return bVar4;
}


// GameManagers.TeamInfo$$IsOwnHorse
// il2cpp: bool GameManagers_TeamInfo__IsOwnHorse (Characters_BaseCharacter_o* human, Characters_BaseCharacter_o* horse, const MethodInfo* method);
// 0x5958b00

bool GameManagers_TeamInfo__IsOwnHorse
               (Characters_BaseCharacter_o *human,Characters_BaseCharacter_o *horse,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075458c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075458c0 = '\x01';
  }
  if (horse != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
    if ((bVar1 <= (horse->klass->_2).typeHierarchyDepth) &&
       ((horse->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)) {
      x = (*(uint64_t *)((char *)horse + 0x100));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)human,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return false;
}


// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (Characters_BaseCharacter_o* a, System_String_o* b, const MethodInfo* method);
// 0x5958ba0

bool GameManagers_TeamInfo__SameTeam_5858ba0
               (Characters_BaseCharacter_o *a,System_String_o *b,MethodInfo *method)

{
  System_String_o *a_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075458c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_075458c1 = '\x01';
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
// 0x5958c60

UnityEngine_Color_o GameManagers_TeamInfo__GetTeamColorUnity(System_String_o *Team,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  System_String_o *htmlString;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_075458c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_075458c2 = '\x01';
  }
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  htmlString = GameManagers_TeamInfo__GetTeamColor(Team,method);
  UnityEngine_ColorUtility__TryParseHtmlString(htmlString,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  UVar1.b = local_18.b;
  UVar1.a = local_18.a;
  UVar1.r = local_18.r;
  UVar1.g = local_18.g;
  return (UnityEngine_Color_o)UVar1;
}


// GameManagers.TeamInfo$$GetTeamColor
// il2cpp: System_String_o* GameManagers_TeamInfo__GetTeamColor (System_String_o* team, const MethodInfo* method);
// 0x5958cd0

System_String_o * GameManagers_TeamInfo__GetTeamColor(System_String_o *team,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_075458c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"#3399FF");
    il2cpp_codegen_initialize_runtime_metadata(&"#9A3334");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFD800");
    il2cpp_codegen_initialize_runtime_metadata(&"#ACD1E9");
    il2cpp_codegen_initialize_runtime_metadata(&"white");
    Il2CppMethodInitialized_075458c3 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Equality
                    (team,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = &"#3399FF";
  }
  else {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar1 = System_String__op_Equality
                      (team,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
    if (bVar1) {
      ppSVar2 = &"#9A3334";
    }
    else {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar1 = System_String__op_Equality
                        (team,TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0);
      if (bVar1) {
        ppSVar2 = &"#ACD1E9";
      }
      else {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar1 = System_String__op_Equality
                          (team,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
        if (bVar1) {
          ppSVar2 = &"#FFD800";
        }
        else {
          ppSVar2 = &"white";
        }
      }
    }
  }
  return *ppSVar2;
}


// GameManagers.TeamInfo$$.ctor
// il2cpp: void GameManagers_TeamInfo___ctor (GameManagers_TeamInfo_o* __this, const MethodInfo* method);
// 0x5958e30

void GameManagers_TeamInfo___ctor(GameManagers_TeamInfo_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.TeamInfo$$.cctor
// il2cpp: void GameManagers_TeamInfo___cctor (const MethodInfo* method);
// 0x5958e40

void GameManagers_TeamInfo___cctor(MethodInfo *method)

{
  GameManagers_TeamInfo_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_075458c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Red");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Blue");
    Il2CppMethodInitialized_075458c4 = '\x01';
  }
  TypeInfo_GameManagers_TeamInfo->static_fields->Blue = "Blue";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_TeamInfo->static_fields->Blue);
  pGVar1 = TypeInfo_GameManagers_TeamInfo->static_fields;
  pGVar1->Red = "Red";
  Il2CppCodeGenWriteBarrier(&pGVar1->Red);
  pGVar1 = TypeInfo_GameManagers_TeamInfo->static_fields;
  pGVar1->None = "None";
  Il2CppCodeGenWriteBarrier(&pGVar1->None);
  pGVar1 = TypeInfo_GameManagers_TeamInfo->static_fields;
  pGVar1->Titan = "Titan";
  Il2CppCodeGenWriteBarrier(&pGVar1->Titan);
  pGVar1 = TypeInfo_GameManagers_TeamInfo->static_fields;
  pGVar1->Human = "Human";
  Il2CppCodeGenWriteBarrier(&pGVar1->Human);
  return;
}


