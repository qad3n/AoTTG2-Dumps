// Type: GameManagers.TeamInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/TeamInfo.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/PlayerProperty.cs  [prior source available (delta unverified)]
// --------------------------------

// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x423b460

bool_conflict
GameManagers_TeamInfo__SameTeam(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05705167 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05705167 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_String__op_Inequality
                      (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_String__op_Inequality
                        (b,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (Characters_BaseCharacter_o* a, Characters_BaseCharacter_o* b, const MethodInfo* method);
// 0x423b510

bool_conflict
GameManagers_TeamInfo__SameTeam
          (Characters_BaseCharacter_o *a,Characters_BaseCharacter_o *b,MethodInfo *method)

{
  System_String_o *a_00;
  System_String_o *b_00;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05705168 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05705168 = '\x01';
    method = extraout_RDX;
  }
  if ((a == (Characters_BaseCharacter_o *)0x0) || (b == (Characters_BaseCharacter_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a_00 = *(System_String_o **)&(a->fields).AI;
  b_00 = *(System_String_o **)&(b->fields).AI;
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
    method = extraout_RDX_00;
  }
  bVar1 = GameManagers_TeamInfo__SameTeam(a_00,b_00,method);
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)b,(MethodInfo *)0x0);
  return bVar1;
}


// GameManagers.TeamInfo$$SameTeam
// il2cpp: bool GameManagers_TeamInfo__SameTeam (Characters_BaseCharacter_o* a, System_String_o* b, const MethodInfo* method);
// 0x423b5d0

bool_conflict
GameManagers_TeamInfo__SameTeam(Characters_BaseCharacter_o *a,System_String_o *b,MethodInfo *method)

{
  System_String_o *a_00;
  bool_conflict bVar1;
  
  if (DAT_05705169 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05705169 = '\x01';
  }
  if (a == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = System_String__op_Equality(*(System_String_o **)&(a->fields).AI,b,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    a_00 = *(System_String_o **)&(a->fields).AI;
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_String__op_Inequality
                      (a_00,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_String__op_Inequality
                        (b,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// GameManagers.TeamInfo$$GetTeamColorUnity
// il2cpp: UnityEngine_Color_o GameManagers_TeamInfo__GetTeamColorUnity (System_String_o* Team, const MethodInfo* method);
// 0x423b690

UnityEngine_Color_o
GameManagers_TeamInfo__GetTeamColorUnity(System_String_o *Team,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  System_String_o *htmlString;
  UnityEngine_Color_Fields local_18;
  
  if (DAT_0570516a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_0570516a = '\x01';
  }
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  htmlString = GameManagers_TeamInfo__GetTeamColor(Team,method);
  UnityEngine_ColorUtility__TryParseHtmlString
            (htmlString,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  UVar1.b = local_18.b;
  UVar1.a = local_18.a;
  UVar1.r = local_18.r;
  UVar1.g = local_18.g;
  return (UnityEngine_Color_o)UVar1;
}


// GameManagers.TeamInfo$$GetTeamColor
// il2cpp: System_String_o* GameManagers_TeamInfo__GetTeamColor (System_String_o* team, const MethodInfo* method);
// 0x423b700

System_String_o * GameManagers_TeamInfo__GetTeamColor(System_String_o *team,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  
  if (DAT_0570516b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&"#3399FF");
    il2cpp_init_method_metadata(&"#9A3334");
    il2cpp_init_method_metadata(&"#FFD800");
    il2cpp_init_method_metadata(&"#ACD1E9");
    il2cpp_init_method_metadata(&"white");
    DAT_0570516b = '\x01';
  }
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__op_Equality
                    (team,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_String__op_Equality
                      (team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_String__op_Equality
                        (team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),
                         (MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = System_String__op_Equality
                          (team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),
                           (MethodInfo *)0x0);
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
// 0x423b860

void GameManagers_TeamInfo___ctor(GameManagers_TeamInfo_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.TeamInfo$$.cctor
// il2cpp: void GameManagers_TeamInfo___cctor (const MethodInfo* method);
// 0x423b870

void GameManagers_TeamInfo___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_0570516c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Red");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Blue");
    DAT_0570516c = '\x01';
  }
  **(undefined8 **)(TypeInfo_TeamInfo + 0xb8) = "Blue";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_TeamInfo + 0xb8),"Blue");
  lVar1 = *(long *)(TypeInfo_TeamInfo + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Red";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_TeamInfo + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "None";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_TeamInfo + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Titan";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_TeamInfo + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Human";
  il2cpp_runtime_glue(lVar1 + 0x20);
  return;
}


