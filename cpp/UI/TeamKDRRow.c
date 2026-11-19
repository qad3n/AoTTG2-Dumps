// Type: UI.TeamKDRRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TeamKDRRow.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TeamKDRRow.cs
// --------------------------------

// UI.TeamKDRRow$$Setup
// il2cpp: void UI_TeamKDRRow__Setup (UI_TeamKDRRow_o* __this, UI_ElementStyle_o* style, System_String_o* team, const MethodInfo* method);
// 0x5d51f40

void UI_TeamKDRRow__Setup
               (UI_TeamKDRRow_o *__this,UI_ElementStyle_o *style,System_String_o *team,MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  UnityEngine_UI_Text_o **targetAddress_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Color_o UVar4;
  
  if (Il2CppMethodInitialized_07547f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07547f02 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__CreateDefaultLabel
                     (pUVar1,style,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,3,
                      (MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    targetAddress = &(__this->fields).teamText;
    (__this->fields).teamText = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar1,style,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,4,
                        (MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      targetAddress_00 = &(__this->fields).scoreText;
      (__this->fields).scoreText = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      pUVar3 = (__this->fields).teamText;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,team,(pUVar3->klass->vtable)._75_set_text.method);
        pUVar3 = *targetAddress;
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        UVar4 = GameManagers_TeamInfo__GetTeamColorUnity(team,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                    (pUVar3,UVar4,(pUVar3->klass->vtable)._23_set_color.method);
          pUVar3 = *targetAddress_00;
          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                      (pUVar3,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                       (pUVar3->klass->vtable)._75_set_text.method);
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
  ThrowNullReferenceException();
}


// UI.TeamKDRRow$$ResetStats
// il2cpp: void UI_TeamKDRRow__ResetStats (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x5d520f0

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
// 0x5d52100

void UI_TeamKDRRow__RemovePlayerStats(UI_TeamKDRRow_o *__this,UI_PlayerKDRRow_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t val2;
  int32_t iVar6;
  
  if (Il2CppMethodInitialized_07547f03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07547f03 = '\x01';
  }
  if (player == (UI_PlayerKDRRow_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = (__this->fields).kills;
  uVar4 = (__this->fields).deaths;
  uVar3 = (player->fields).kills;
  uVar5 = (player->fields).deaths;
  (__this->fields).kills = uVar2 - uVar3;
  (__this->fields).deaths = uVar4 - uVar5;
  iVar6 = (__this->fields).maxDamage;
  val2 = (player->fields).maxDamage;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar6 = System_Math__Max_54bad40(iVar6,val2,(MethodInfo *)0x0);
  (__this->fields).maxDamage = iVar6;
  piVar1 = &(__this->fields).totalDamage;
  *piVar1 = *piVar1 - (player->fields).totalDamage;
  piVar1 = &(__this->fields).playerCount;
  *piVar1 = *piVar1 + -1;
  return;
}


// UI.TeamKDRRow$$AddPlayerStats
// il2cpp: void UI_TeamKDRRow__AddPlayerStats (UI_TeamKDRRow_o* __this, UI_PlayerKDRRow_o* player, const MethodInfo* method);
// 0x5d52190

void UI_TeamKDRRow__AddPlayerStats(UI_TeamKDRRow_o *__this,UI_PlayerKDRRow_o *player,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int32_t val2;
  int32_t iVar7;
  
  if (Il2CppMethodInitialized_07547f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07547f04 = '\x01';
  }
  if (player == (UI_PlayerKDRRow_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (__this->fields).kills;
  uVar4 = (__this->fields).deaths;
  uVar2 = (player->fields).kills;
  uVar5 = (player->fields).deaths;
  (__this->fields).kills = uVar2 + uVar1;
  (__this->fields).deaths = uVar5 + uVar4;
  iVar7 = (__this->fields).maxDamage;
  val2 = (player->fields).maxDamage;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar7 = System_Math__Max_54bad40(iVar7,val2,(MethodInfo *)0x0);
  (__this->fields).maxDamage = iVar7;
  uVar3 = (__this->fields).totalDamage;
  uVar6 = (__this->fields).playerCount;
  (__this->fields).totalDamage = (player->fields).totalDamage + uVar3;
  (__this->fields).playerCount = uVar6 + 1;
  return;
}


// UI.TeamKDRRow$$UpdateRow
// il2cpp: void UI_TeamKDRRow__UpdateRow (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x5d52230

void UI_TeamKDRRow__UpdateRow(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\t(");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    Il2CppMethodInitialized_07547f05 = '\x01';
  }
  pSVar1 = (__this->fields)._scoreBuilder;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._scoreBuilder;
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_530f730(pSVar1,(__this->fields).kills,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._scoreBuilder;
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_530ed80(pSVar1,"/",(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._scoreBuilder;
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_530f730(pSVar1,(__this->fields).deaths,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._scoreBuilder;
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_530ed80(pSVar1,"/",(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._scoreBuilder;
            if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_530f730(pSVar1,(__this->fields).maxDamage,(MethodInfo *)0x0);
              pSVar1 = (__this->fields)._scoreBuilder;
              if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_530ed80(pSVar1,"/",(MethodInfo *)0x0);
                pSVar1 = (__this->fields)._scoreBuilder;
                if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_530f730
                            (pSVar1,(__this->fields).totalDamage,(MethodInfo *)0x0);
                  pSVar1 = (__this->fields)._scoreBuilder;
                  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_530ed80(pSVar1,"\t(",(MethodInfo *)0x0);
                    pSVar1 = (__this->fields)._scoreBuilder;
                    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__Append_530f730
                                (pSVar1,(__this->fields).playerCount,(MethodInfo *)0x0);
                      pSVar1 = (__this->fields)._scoreBuilder;
                      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__Append_530ed80
                                  (pSVar1,")",(MethodInfo *)0x0);
                        pSVar1 = (__this->fields)._scoreBuilder;
                        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                          pUVar2 = (__this->fields).scoreText;
                          pSVar3 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                                             (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
                          if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                            (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                                      (pUVar2,pSVar3,(pUVar2->klass->vtable)._75_set_text.method);
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
  ThrowNullReferenceException();
}


// UI.TeamKDRRow$$.ctor
// il2cpp: void UI_TeamKDRRow___ctor (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x5d523c0

void UI_TeamKDRRow___ctor(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_07547f06 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._scoreBuilder = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreBuilder);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


