// Type: GameManagers.TeamInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/TeamInfo.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x456fe30

bool_conflict GameManagers_TeamInfo__SameTeam(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057af056 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057af056 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_String__op_Inequality
                      (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = System_String__op_Inequality
                        (b,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (Characters_BaseCharacter_o* a, Characters_BaseCharacter_o* b, const MethodInfo* method);
// 0x456fee0

bool_conflict
GameManagers_TeamInfo__SameTeam_446fee0
          (Characters_BaseCharacter_o *a,Characters_BaseCharacter_o *b,MethodInfo *method)

{
  System_String_o *b_00;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Characters_BaseCharacter_o *b_01;
  Characters_BaseCharacter_o *method_00;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_o *team;
  UnityEngine_Color_Fields UStack_58;
  Characters_BaseCharacter_o *pCStack_48;
  
  b_01 = b;
  pCVar3 = a;
  if (g_data_057af057 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pCVar3 = (Characters_BaseCharacter_o *)&TypeInfo_TeamInfo;
    il2cpp_runtime_helper_023445d0();
    g_data_057af057 = '\x01';
    method = extraout_RDX;
  }
  if ((a == (Characters_BaseCharacter_o *)0x0) || (b == (Characters_BaseCharacter_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    method_00 = b_01;
    team = pCVar3;
    if (g_data_057af058 == '\0') {
      team = (Characters_BaseCharacter_o *)&TypeInfo_TeamInfo;
      pCStack_48 = (Characters_BaseCharacter_o *)0x456ffc0;
      il2cpp_runtime_helper_023445d0();
      g_data_057af058 = '\x01';
    }
    if (pCVar3 == (Characters_BaseCharacter_o *)0x0) {
      pCStack_48 = (Characters_BaseCharacter_o *)0x457005b;
      il2cpp_runtime_helper_022b2c90();
      pCStack_48 = pCVar3;
      if (g_data_057af059 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
        g_data_057af059 = '\x01';
      }
      UStack_58.r = 0.0;
      UStack_58.g = 0.0;
      UStack_58.b = 0.0;
      UStack_58.a = 0.0;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = GameManagers_TeamInfo__GetTeamColor((System_String_o *)team,(MethodInfo *)method_00);
      bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar2,(UnityEngine_Color_o *)&UStack_58,(MethodInfo *)0x0);
      return bVar1;
    }
    pCStack_48 = (Characters_BaseCharacter_o *)0x456ffe1;
    bVar1 = System_String__op_Equality
                      (*(System_String_o **)&(pCVar3->fields).AI,(System_String_o *)b_01,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pSVar2 = *(System_String_o **)&(pCVar3->fields).AI;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        pCStack_48 = (Characters_BaseCharacter_o *)0x4570004;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_48 = (Characters_BaseCharacter_o *)0x457001c;
      bVar1 = System_String__op_Inequality
                        (pSVar2,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0
                        );
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          pCStack_48 = (Characters_BaseCharacter_o *)0x4570031;
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = System_String__op_Inequality
                          ((System_String_o *)b_01,
                           *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0);
        return bVar1;
      }
    }
    return 0;
  }
  pSVar2 = *(System_String_o **)&(a->fields).AI;
  b_00 = *(System_String_o **)&(b->fields).AI;
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
  }
  bVar1 = GameManagers_TeamInfo__SameTeam(pSVar2,b_00,method);
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)b,(MethodInfo *)0x0);
  return bVar1;
}


// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (Characters_BaseCharacter_o* a, System_String_o* b, const MethodInfo* method);
// 0x456ffa0

bool_conflict
GameManagers_TeamInfo__SameTeam_446ffa0(Characters_BaseCharacter_o *a,System_String_o *b,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *team;
  UnityEngine_Color_Fields UStack_30;
  Characters_BaseCharacter_o *pCStack_20;
  
  method_00 = (MethodInfo *)b;
  team = a;
  if (g_data_057af058 == '\0') {
    team = (Characters_BaseCharacter_o *)&TypeInfo_TeamInfo;
    pCStack_20 = (Characters_BaseCharacter_o *)0x456ffc0;
    il2cpp_runtime_helper_023445d0();
    g_data_057af058 = '\x01';
  }
  if (a == (Characters_BaseCharacter_o *)0x0) {
    pCStack_20 = (Characters_BaseCharacter_o *)0x457005b;
    il2cpp_runtime_helper_022b2c90();
    pCStack_20 = a;
    if (g_data_057af059 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
      g_data_057af059 = '\x01';
    }
    UStack_30.r = 0.0;
    UStack_30.g = 0.0;
    UStack_30.b = 0.0;
    UStack_30.a = 0.0;
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = GameManagers_TeamInfo__GetTeamColor((System_String_o *)team,method_00);
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar2,(UnityEngine_Color_o *)&UStack_30,(MethodInfo *)0x0);
    return bVar1;
  }
  pCStack_20 = (Characters_BaseCharacter_o *)0x456ffe1;
  bVar1 = System_String__op_Equality(*(System_String_o **)&(a->fields).AI,b,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = *(System_String_o **)&(a->fields).AI;
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      pCStack_20 = (Characters_BaseCharacter_o *)0x4570004;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (Characters_BaseCharacter_o *)0x457001c;
    bVar1 = System_String__op_Inequality
                      (pSVar2,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        pCStack_20 = (Characters_BaseCharacter_o *)0x4570031;
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = System_String__op_Inequality
                        (b,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// GameManagers.TeamInfo$$GetTeamColorUnity
// il2cpp: UnityEngine_Color_o GameManagers_TeamInfo__GetTeamColorUnity (System_String_o* Team, const MethodInfo* method);
// 0x4570060

UnityEngine_Color_o GameManagers_TeamInfo__GetTeamColorUnity(System_String_o *Team,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  System_String_o *htmlString;
  UnityEngine_Color_Fields local_18;
  
  if (g_data_057af059 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057af059 = '\x01';
  }
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x45700d0

System_String_o * GameManagers_TeamInfo__GetTeamColor(System_String_o *team,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  
  if (g_data_057af05a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"#3399FF");
    il2cpp_runtime_helper_023445d0(&"#9A3334");
    il2cpp_runtime_helper_023445d0(&"#FFD800");
    il2cpp_runtime_helper_023445d0(&"#ACD1E9");
    il2cpp_runtime_helper_023445d0(&"white");
    g_data_057af05a = '\x01';
  }
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_String__op_Equality
                    (team,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_String__op_Equality
                      (team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = System_String__op_Equality
                        (team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = System_String__op_Equality
                          (team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),(MethodInfo *)0x0
                          );
        if ((char)bVar1 == '\0') {
          puVar2 = &"white";
        }
        else {
          puVar2 = &"#FFD800";
        }
      }
      else {
        puVar2 = &"#ACD1E9";
      }
    }
    else {
      puVar2 = &"#9A3334";
    }
  }
  else {
    puVar2 = &"#3399FF";
  }
  return (System_String_o *)*puVar2;
}


// GameManagers.TeamInfo$$.ctor
// il2cpp: void GameManagers_TeamInfo___ctor (GameManagers_TeamInfo_o* __this, const MethodInfo* method);
// 0x4570230

void GameManagers_TeamInfo___ctor(GameManagers_TeamInfo_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.TeamInfo$$.cctor
// il2cpp: void GameManagers_TeamInfo___cctor (const MethodInfo* method);
// 0x4570240

void GameManagers_TeamInfo___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057af05b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Red");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Blue");
    g_data_057af05b = '\x01';
  }
  **(undefined8 **)(TypeInfo_TeamInfo + 0xb8) = "Blue";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_TeamInfo + 0xb8),"Blue");
  lVar1 = *(long *)(TypeInfo_TeamInfo + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Red";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_TeamInfo + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "None";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_TeamInfo + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Titan";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_TeamInfo + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Human";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  return;
}


