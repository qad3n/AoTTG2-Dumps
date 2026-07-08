// Type: UI.TeamKDRRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/TeamKDRRow.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/TeamKDRRow.cs  [CHANGED since prior version]
// --------------------------------

// UI.TeamKDRRow$$Setup
// il2cpp: void UI_TeamKDRRow__Setup (UI_TeamKDRRow_o* __this, UI_ElementStyle_o* style, System_String_o* team, const MethodInfo* method);
// 0x40d95f0

void UI_TeamKDRRow__Setup
               (UI_TeamKDRRow_o *__this,UI_ElementStyle_o *style,System_String_o *team,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_UI_Text_o **ppUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Color_o UVar6;
  
  if (DAT_05704761 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05704761 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar4 = UI_ElementFactory__CreateDefaultLabel
                     (pUVar3,style,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,3,
                      (MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields).teamText;
    (__this->fields).teamText = pUVar5;
    il2cpp_runtime_glue(ppUVar1);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar3,style,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,
                        (MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = (UnityEngine_UI_Text_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
      ppUVar2 = &(__this->fields).scoreText;
      (__this->fields).scoreText = pUVar5;
      il2cpp_runtime_glue(ppUVar2,pUVar5);
      pUVar5 = (__this->fields).teamText;
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,team,(pUVar5->klass->vtable)._75_set_text.method);
        pUVar5 = *ppUVar1;
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar6 = GameManagers_TeamInfo__GetTeamColorUnity(team,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                    (UVar6.fields.r,UVar6.fields._8_8_,pUVar5,
                     (pUVar5->klass->vtable)._23_set_color.method);
          pUVar5 = *ppUVar2;
          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                      (pUVar5,**(undefined8 **)(DAT_057110b0 + 0xb8),
                       (pUVar5->klass->vtable)._75_set_text.method);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TeamKDRRow$$ResetStats
// il2cpp: void UI_TeamKDRRow__ResetStats (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x40d97a0

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
// 0x40d97b0

void UI_TeamKDRRow__RemovePlayerStats
               (UI_TeamKDRRow_o *__this,UI_PlayerKDRRow_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t val2;
  int32_t iVar2;
  
  if (DAT_05704762 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05704762 = '\x01';
  }
  if (player != (UI_PlayerKDRRow_o *)0x0) {
    piVar1 = &(__this->fields).kills;
    *piVar1 = *piVar1 - *(int *)&(player->fields).team;
    piVar1 = &(__this->fields).deaths;
    *piVar1 = *piVar1 - *(int *)((long)&(player->fields).team + 4);
    iVar2 = (__this->fields).maxDamage;
    val2 = (player->fields).kills;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar2 = System_Math__Max(iVar2,val2,(MethodInfo *)0x0);
    (__this->fields).maxDamage = iVar2;
    piVar1 = &(__this->fields).totalDamage;
    *piVar1 = *piVar1 - (player->fields).deaths;
    piVar1 = &(__this->fields).playerCount;
    *piVar1 = *piVar1 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TeamKDRRow$$AddPlayerStats
// il2cpp: void UI_TeamKDRRow__AddPlayerStats (UI_TeamKDRRow_o* __this, UI_PlayerKDRRow_o* player, const MethodInfo* method);
// 0x40d9840

void UI_TeamKDRRow__AddPlayerStats
               (UI_TeamKDRRow_o *__this,UI_PlayerKDRRow_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t val2;
  int32_t iVar2;
  
  if (DAT_05704763 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05704763 = '\x01';
  }
  if (player != (UI_PlayerKDRRow_o *)0x0) {
    piVar1 = &(__this->fields).kills;
    *piVar1 = *piVar1 + *(int *)&(player->fields).team;
    piVar1 = &(__this->fields).deaths;
    *piVar1 = *piVar1 + *(int *)((long)&(player->fields).team + 4);
    iVar2 = (__this->fields).maxDamage;
    val2 = (player->fields).kills;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar2 = System_Math__Max(iVar2,val2,(MethodInfo *)0x0);
    (__this->fields).maxDamage = iVar2;
    piVar1 = &(__this->fields).totalDamage;
    *piVar1 = *piVar1 + (player->fields).deaths;
    piVar1 = &(__this->fields).playerCount;
    *piVar1 = *piVar1 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TeamKDRRow$$UpdateRow
// il2cpp: void UI_TeamKDRRow__UpdateRow (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x40d98d0

void UI_TeamKDRRow__UpdateRow(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Text_c *pUVar3;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar4;
  
  if (DAT_05704764 == '\0') {
    il2cpp_init_method_metadata(&"\t(");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&")");
    DAT_05704764 = '\x01';
  }
  pSVar1 = (__this->fields)._scoreBuilder;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._scoreBuilder;
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append(pSVar1,(__this->fields).kills,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._scoreBuilder;
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar1,"/",(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._scoreBuilder;
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append(pSVar1,(__this->fields).deaths,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._scoreBuilder;
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append(pSVar1,"/",(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._scoreBuilder;
            if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append(pSVar1,(__this->fields).maxDamage,(MethodInfo *)0x0)
              ;
              pSVar1 = (__this->fields)._scoreBuilder;
              if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append(pSVar1,"/",(MethodInfo *)0x0);
                pSVar1 = (__this->fields)._scoreBuilder;
                if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append
                            (pSVar1,(__this->fields).totalDamage,(MethodInfo *)0x0);
                  pSVar1 = (__this->fields)._scoreBuilder;
                  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append(pSVar1,"\t(",(MethodInfo *)0x0);
                    pSVar1 = (__this->fields)._scoreBuilder;
                    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__Append
                                (pSVar1,(__this->fields).playerCount,(MethodInfo *)0x0);
                      pSVar1 = (__this->fields)._scoreBuilder;
                      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__Append(pSVar1,")",(MethodInfo *)0x0);
                        pSVar1 = (__this->fields)._scoreBuilder;
                        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                          pUVar2 = (__this->fields).scoreText;
                          uVar4 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                                            (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
                          if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                            pUVar3 = pUVar2->klass;
                            vtable_dispatch = (pUVar3->vtable)._75_set_text.methodPtr;
                            (*vtable_dispatch)
                                      (pUVar2,uVar4,(pUVar3->vtable)._75_set_text.method,pUVar3,
                                       vtable_dispatch);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TeamKDRRow$$.ctor
// il2cpp: void UI_TeamKDRRow___ctor (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x40d9a60

void UI_TeamKDRRow___ctor(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  
  if (DAT_05704765 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    DAT_05704765 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._scoreBuilder = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._scoreBuilder);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


