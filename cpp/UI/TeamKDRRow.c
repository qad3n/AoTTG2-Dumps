// Type: UI.TeamKDRRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TeamKDRRow.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TeamKDRRow.cs
// --------------------------------

// UI.TeamKDRRow$$Setup
// il2cpp: void UI_TeamKDRRow__Setup (UI_TeamKDRRow_o* __this, UI_ElementStyle_o* style, System_String_o* team, const MethodInfo* method);
// 0x43ec010

void UI_TeamKDRRow__Setup
               (UI_TeamKDRRow_o *__this,UI_ElementStyle_o *style,System_String_o *team,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_UI_Text_o **ppUVar2;
  System_String_o *parent;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Color_o UVar5;
  
  if (g_data_057ae4f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ae4f2 = '\x01';
  }
  parent = (System_String_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateDefaultLabel
                     ((UnityEngine_Transform_o *)parent,style,
                      (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar3,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields).teamText;
    (__this->fields).teamText = pUVar4;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    parent = (System_String_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__CreateDefaultLabel
                       ((UnityEngine_Transform_o *)parent,style,
                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar3,MethodInfo_Text_GetComponent_Text);
      ppUVar2 = &(__this->fields).scoreText;
      (__this->fields).scoreText = pUVar4;
      il2cpp_runtime_helper_022b4080(ppUVar2,pUVar4);
      pUVar4 = (__this->fields).teamText;
      parent = (System_String_o *)0x0;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                  (pUVar4,team,(pUVar4->klass->vtable)._75_set_text.method);
        pUVar4 = *ppUVar1;
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar5 = GameManagers_TeamInfo__GetTeamColorUnity(team,(MethodInfo *)0x0);
        parent = team;
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                    (UVar5.fields.r,UVar5.fields._8_8_,pUVar4,(pUVar4->klass->vtable)._23_set_color.method);
          pUVar4 = *ppUVar2;
          parent = (System_String_o *)0x0;
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                      (pUVar4,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                       (pUVar4->klass->vtable)._75_set_text.method);
            (__this->fields).kills = 0;
            (__this->fields).deaths = 0;
            (__this->fields).maxDamage = 0;
            (__this->fields).totalDamage = 0;
            (__this->fields).playerCount = 0;
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  parent[2].monitor = (void *)0x0;
  parent[2].fields._stringLength = 0;
  parent[2].fields._firstChar = 0;
  *(undefined2 *)&parent[2].fields.field_0x6 = 0;
  *(undefined4 *)&parent[3].klass = 0;
  return;
}


// UI.TeamKDRRow$$ResetStats
// il2cpp: void UI_TeamKDRRow__ResetStats (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x43ec1c0

void UI_TeamKDRRow__ResetStats(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  (__this->fields).kills = 0;
  (__this->fields).deaths = 0;
  (__this->fields).maxDamage = 0;
  (__this->fields).totalDamage = 0;
  (__this->fields).playerCount = 0;
  return;
}


// UI.TeamKDRRow$$RemovePlayerStats
// il2cpp: void UI_TeamKDRRow__RemovePlayerStats (UI_TeamKDRRow_o* __this, UI_PlayerKDRRow_o* player, const MethodInfo* method);
// 0x43ec1d0

void UI_TeamKDRRow__RemovePlayerStats(UI_TeamKDRRow_o *__this,UI_PlayerKDRRow_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Text_c *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar5;
  undefined8 uVar6;
  System_Text_StringBuilder_o *pSVar7;
  UI_PlayerKDRRow_o *pUVar8;
  long *plVar9;
  long *plVar10;
  System_Text_StringBuilder_o *__this_00;
  
  pUVar8 = player;
  plVar9 = (long *)__this;
  if (g_data_057ae4f3 == '\0') {
    plVar9 = &TypeInfo_Math;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f3 = '\x01';
  }
  if (player != (UI_PlayerKDRRow_o *)0x0) {
    piVar1 = &(__this->fields).kills;
    *piVar1 = *piVar1 - *(int *)&(player->fields).team;
    piVar1 = &(__this->fields).deaths;
    *piVar1 = *piVar1 - *(int *)((long)&(player->fields).team + 4);
    iVar5 = (__this->fields).maxDamage;
    iVar2 = (player->fields).kills;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar5 = System_Math__Max_3cb7c30(iVar5,iVar2,(MethodInfo *)0x0);
    (__this->fields).maxDamage = iVar5;
    piVar1 = &(__this->fields).totalDamage;
    *piVar1 = *piVar1 - (player->fields).deaths;
    piVar1 = &(__this->fields).playerCount;
    *piVar1 = *piVar1 + -1;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar10 = plVar9;
  if (g_data_057ae4f4 == '\0') {
    plVar10 = &TypeInfo_Math;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f4 = '\x01';
  }
  if (pUVar8 != (UI_PlayerKDRRow_o *)0x0) {
    piVar1 = &(((UI_TeamKDRRow_o *)plVar9)->fields).kills;
    *piVar1 = *piVar1 + *(int *)&(pUVar8->fields).team;
    piVar1 = &(((UI_TeamKDRRow_o *)plVar9)->fields).deaths;
    *piVar1 = *piVar1 + *(int *)((long)&(pUVar8->fields).team + 4);
    iVar5 = (((UI_TeamKDRRow_o *)plVar9)->fields).maxDamage;
    iVar2 = (pUVar8->fields).kills;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar5 = System_Math__Max_3cb7c30(iVar5,iVar2,(MethodInfo *)0x0);
    (((UI_TeamKDRRow_o *)plVar9)->fields).maxDamage = iVar5;
    piVar1 = &(((UI_TeamKDRRow_o *)plVar9)->fields).totalDamage;
    *piVar1 = *piVar1 + (pUVar8->fields).deaths;
    piVar1 = &(((UI_TeamKDRRow_o *)plVar9)->fields).playerCount;
    *piVar1 = *piVar1 + 1;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\t(");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&")");
    g_data_057ae4f5 = '\x01';
  }
  pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
  __this_00 = (System_Text_StringBuilder_o *)0x0;
  if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar7,(MethodInfo *)0x0);
    pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
    __this_00 = (System_Text_StringBuilder_o *)0x0;
    if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b04980
                (pSVar7,(((UI_TeamKDRRow_o *)plVar10)->fields).kills,(MethodInfo *)0x0);
      pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
      __this_00 = (System_Text_StringBuilder_o *)0x0;
      if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b03f90(pSVar7,"/",(MethodInfo *)0x0);
        pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
        __this_00 = (System_Text_StringBuilder_o *)0x0;
        if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_3b04980
                    (pSVar7,(((UI_TeamKDRRow_o *)plVar10)->fields).deaths,(MethodInfo *)0x0);
          pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
          __this_00 = (System_Text_StringBuilder_o *)0x0;
          if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b03f90(pSVar7,"/",(MethodInfo *)0x0);
            pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
            __this_00 = (System_Text_StringBuilder_o *)0x0;
            if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b04980
                        (pSVar7,(((UI_TeamKDRRow_o *)plVar10)->fields).maxDamage,(MethodInfo *)0x0);
              pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
              __this_00 = (System_Text_StringBuilder_o *)0x0;
              if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_3b03f90(pSVar7,"/",(MethodInfo *)0x0);
                pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
                __this_00 = (System_Text_StringBuilder_o *)0x0;
                if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b04980
                            (pSVar7,(((UI_TeamKDRRow_o *)plVar10)->fields).totalDamage,(MethodInfo *)0x0);
                  pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
                  __this_00 = (System_Text_StringBuilder_o *)0x0;
                  if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_3b03f90(pSVar7,"\t(",(MethodInfo *)0x0);
                    pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
                    __this_00 = (System_Text_StringBuilder_o *)0x0;
                    if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__Append_3b04980
                                (pSVar7,(((UI_TeamKDRRow_o *)plVar10)->fields).playerCount,(MethodInfo *)0x0);
                      pSVar7 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
                      __this_00 = (System_Text_StringBuilder_o *)0x0;
                      if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__Append_3b03f90(pSVar7,")",(MethodInfo *)0x0);
                        __this_00 = (((UI_TeamKDRRow_o *)plVar10)->fields)._scoreBuilder;
                        if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                          pUVar3 = (((UI_TeamKDRRow_o *)plVar10)->fields).scoreText;
                          uVar6 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)();
                          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                            pUVar4 = pUVar3->klass;
                            vtableDispatch = (pUVar4->vtable)._75_set_text.methodPtr;
                            (*vtableDispatch)
                                      (pUVar3,uVar6,(pUVar4->vtable)._75_set_text.method,pUVar4,
                                       vtableDispatch);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4f6 = '\x01';
  }
  pSVar7 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar7,(MethodInfo *)0x0);
  *(System_Text_StringBuilder_o **)&__this_00[1].fields.m_ChunkLength = pSVar7;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields.m_ChunkLength);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.TeamKDRRow$$AddPlayerStats
// il2cpp: void UI_TeamKDRRow__AddPlayerStats (UI_TeamKDRRow_o* __this, UI_PlayerKDRRow_o* player, const MethodInfo* method);
// 0x43ec260

void UI_TeamKDRRow__AddPlayerStats(UI_TeamKDRRow_o *__this,UI_PlayerKDRRow_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t val2;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Text_c *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar4;
  undefined8 uVar5;
  System_Text_StringBuilder_o *pSVar6;
  long *plVar7;
  System_Text_StringBuilder_o *__this_00;
  
  plVar7 = (long *)__this;
  if (g_data_057ae4f4 == '\0') {
    plVar7 = &TypeInfo_Math;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f4 = '\x01';
  }
  if (player != (UI_PlayerKDRRow_o *)0x0) {
    piVar1 = &(__this->fields).kills;
    *piVar1 = *piVar1 + *(int *)&(player->fields).team;
    piVar1 = &(__this->fields).deaths;
    *piVar1 = *piVar1 + *(int *)((long)&(player->fields).team + 4);
    iVar4 = (__this->fields).maxDamage;
    val2 = (player->fields).kills;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar4 = System_Math__Max_3cb7c30(iVar4,val2,(MethodInfo *)0x0);
    (__this->fields).maxDamage = iVar4;
    piVar1 = &(__this->fields).totalDamage;
    *piVar1 = *piVar1 + (player->fields).deaths;
    piVar1 = &(__this->fields).playerCount;
    *piVar1 = *piVar1 + 1;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\t(");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&")");
    g_data_057ae4f5 = '\x01';
  }
  pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
  __this_00 = (System_Text_StringBuilder_o *)0x0;
  if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar6,(MethodInfo *)0x0);
    pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
    __this_00 = (System_Text_StringBuilder_o *)0x0;
    if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b04980
                (pSVar6,(((UI_TeamKDRRow_o *)plVar7)->fields).kills,(MethodInfo *)0x0);
      pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
      __this_00 = (System_Text_StringBuilder_o *)0x0;
      if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b03f90(pSVar6,"/",(MethodInfo *)0x0);
        pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
        __this_00 = (System_Text_StringBuilder_o *)0x0;
        if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_3b04980
                    (pSVar6,(((UI_TeamKDRRow_o *)plVar7)->fields).deaths,(MethodInfo *)0x0);
          pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
          __this_00 = (System_Text_StringBuilder_o *)0x0;
          if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b03f90(pSVar6,"/",(MethodInfo *)0x0);
            pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
            __this_00 = (System_Text_StringBuilder_o *)0x0;
            if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b04980
                        (pSVar6,(((UI_TeamKDRRow_o *)plVar7)->fields).maxDamage,(MethodInfo *)0x0);
              pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
              __this_00 = (System_Text_StringBuilder_o *)0x0;
              if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_3b03f90(pSVar6,"/",(MethodInfo *)0x0);
                pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
                __this_00 = (System_Text_StringBuilder_o *)0x0;
                if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b04980
                            (pSVar6,(((UI_TeamKDRRow_o *)plVar7)->fields).totalDamage,(MethodInfo *)0x0);
                  pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
                  __this_00 = (System_Text_StringBuilder_o *)0x0;
                  if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_3b03f90(pSVar6,"\t(",(MethodInfo *)0x0);
                    pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
                    __this_00 = (System_Text_StringBuilder_o *)0x0;
                    if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__Append_3b04980
                                (pSVar6,(((UI_TeamKDRRow_o *)plVar7)->fields).playerCount,(MethodInfo *)0x0);
                      pSVar6 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
                      __this_00 = (System_Text_StringBuilder_o *)0x0;
                      if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__Append_3b03f90(pSVar6,")",(MethodInfo *)0x0);
                        __this_00 = (((UI_TeamKDRRow_o *)plVar7)->fields)._scoreBuilder;
                        if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                          pUVar2 = (((UI_TeamKDRRow_o *)plVar7)->fields).scoreText;
                          uVar5 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)();
                          if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                            pUVar3 = pUVar2->klass;
                            vtableDispatch = (pUVar3->vtable)._75_set_text.methodPtr;
                            (*vtableDispatch)
                                      (pUVar2,uVar5,(pUVar3->vtable)._75_set_text.method,pUVar3,
                                       vtableDispatch);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4f6 = '\x01';
  }
  pSVar6 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar6,(MethodInfo *)0x0);
  *(System_Text_StringBuilder_o **)&__this_00[1].fields.m_ChunkLength = pSVar6;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields.m_ChunkLength);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.TeamKDRRow$$UpdateRow
// il2cpp: void UI_TeamKDRRow__UpdateRow (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x43ec2f0

void UI_TeamKDRRow__UpdateRow(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  undefined8 uVar3;
  System_Text_StringBuilder_o *pSVar4;
  System_Text_StringBuilder_o *__this_00;
  
  if (g_data_057ae4f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\t(");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&")");
    g_data_057ae4f5 = '\x01';
  }
  pSVar4 = (__this->fields)._scoreBuilder;
  __this_00 = (System_Text_StringBuilder_o *)0x0;
  if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar4,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._scoreBuilder;
    __this_00 = (System_Text_StringBuilder_o *)0x0;
    if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b04980(pSVar4,(__this->fields).kills,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._scoreBuilder;
      __this_00 = (System_Text_StringBuilder_o *)0x0;
      if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b03f90(pSVar4,"/",(MethodInfo *)0x0);
        pSVar4 = (__this->fields)._scoreBuilder;
        __this_00 = (System_Text_StringBuilder_o *)0x0;
        if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_3b04980(pSVar4,(__this->fields).deaths,(MethodInfo *)0x0);
          pSVar4 = (__this->fields)._scoreBuilder;
          __this_00 = (System_Text_StringBuilder_o *)0x0;
          if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b03f90(pSVar4,"/",(MethodInfo *)0x0);
            pSVar4 = (__this->fields)._scoreBuilder;
            __this_00 = (System_Text_StringBuilder_o *)0x0;
            if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b04980(pSVar4,(__this->fields).maxDamage,(MethodInfo *)0x0);
              pSVar4 = (__this->fields)._scoreBuilder;
              __this_00 = (System_Text_StringBuilder_o *)0x0;
              if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_3b03f90(pSVar4,"/",(MethodInfo *)0x0);
                pSVar4 = (__this->fields)._scoreBuilder;
                __this_00 = (System_Text_StringBuilder_o *)0x0;
                if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b04980
                            (pSVar4,(__this->fields).totalDamage,(MethodInfo *)0x0);
                  pSVar4 = (__this->fields)._scoreBuilder;
                  __this_00 = (System_Text_StringBuilder_o *)0x0;
                  if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_3b03f90(pSVar4,"\t(",(MethodInfo *)0x0);
                    pSVar4 = (__this->fields)._scoreBuilder;
                    __this_00 = (System_Text_StringBuilder_o *)0x0;
                    if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__Append_3b04980
                                (pSVar4,(__this->fields).playerCount,(MethodInfo *)0x0);
                      pSVar4 = (__this->fields)._scoreBuilder;
                      __this_00 = (System_Text_StringBuilder_o *)0x0;
                      if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__Append_3b03f90(pSVar4,")",(MethodInfo *)0x0);
                        __this_00 = (__this->fields)._scoreBuilder;
                        if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                          pUVar1 = (__this->fields).scoreText;
                          uVar3 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)();
                          if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                            pUVar2 = pUVar1->klass;
                            vtableDispatch = (pUVar2->vtable)._75_set_text.methodPtr;
                            (*vtableDispatch)
                                      (pUVar1,uVar3,(pUVar2->vtable)._75_set_text.method,pUVar2,
                                       vtableDispatch);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4f6 = '\x01';
  }
  pSVar4 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar4,(MethodInfo *)0x0);
  *(System_Text_StringBuilder_o **)&__this_00[1].fields.m_ChunkLength = pSVar4;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields.m_ChunkLength);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.TeamKDRRow$$.ctor
// il2cpp: void UI_TeamKDRRow___ctor (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x43ec480

void UI_TeamKDRRow___ctor(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  
  if (g_data_057ae4f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4f6 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._scoreBuilder = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._scoreBuilder);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


