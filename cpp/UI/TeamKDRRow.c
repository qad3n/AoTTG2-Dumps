// Type: UI.TeamKDRRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TeamKDRRow.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TeamKDRRow.cs
// --------------------------------

// UI.TeamKDRRow$$Setup
// il2cpp: void UI_TeamKDRRow__Setup (UI_TeamKDRRow_o* __this, UI_ElementStyle_o* style, System_String_o* team, const MethodInfo* method);
// 0x1822815e0

void UI_TeamKDRRow__Setup
               (UI_TeamKDRRow_o *__this,UI_ElementStyle_o *style,System_String_o *team,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184347389 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184347389 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__CreateDefaultLabel
                     (pUVar1,style,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,3,
                      (MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields).teamText = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).teamText,pUVar3);
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar1,style,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,
                        (MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      (__this->fields).scoreText = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).scoreText,pUVar3);
      pUVar3 = (__this->fields).teamText;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,team,(pUVar3->klass->vtable)._75_set_text.method);
        pUVar3 = (__this->fields).teamText;
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        pUVar4 = GameManagers_TeamInfo__GetTeamColorUnity
                           ((UnityEngine_Color_o *)&local_38,team,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
          local_38.r = (pUVar4->fields).r;
          local_38.g = (pUVar4->fields).g;
          local_38.b = (pUVar4->fields).b;
          local_38.a = (pUVar4->fields).a;
          (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                    (pUVar3,(UnityEngine_Color_o *)&local_38,(pUVar3->klass->vtable)._23_set_color.method);
          pUVar3 = (__this->fields).scoreText;
          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                      (pUVar3,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
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
// 0x1822815d0

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
// 0x182281530

void UI_TeamKDRRow__RemovePlayerStats(UI_TeamKDRRow_o *__this,UI_PlayerKDRRow_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t val1;
  int iVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_18434738a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18434738a = '\x01';
  }
  if (player != (UI_PlayerKDRRow_o *)0x0) {
    (__this->fields).kills = (__this->fields).kills - (player->fields).kills;
    (__this->fields).deaths = (__this->fields).deaths - (player->fields).deaths;
    iVar3 = (player->fields).maxDamage;
    val1 = (__this->fields).maxDamage;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar3 = System_Math__Max_1b2c0d0(val1,iVar3,(MethodInfo *)0x0);
    (__this->fields).maxDamage = iVar3;
    iVar2 = (player->fields).totalDamage;
    piVar1 = &(__this->fields).playerCount;
    *piVar1 = *piVar1 + -1;
    (__this->fields).totalDamage = (__this->fields).totalDamage - iVar2;
    return;
  }
  ThrowNullReferenceException();
}


// UI.TeamKDRRow$$AddPlayerStats
// il2cpp: void UI_TeamKDRRow__AddPlayerStats (UI_TeamKDRRow_o* __this, UI_PlayerKDRRow_o* player, const MethodInfo* method);
// 0x182281490

void UI_TeamKDRRow__AddPlayerStats(UI_TeamKDRRow_o *__this,UI_PlayerKDRRow_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t val1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_18434738b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18434738b = '\x01';
  }
  if (player != (UI_PlayerKDRRow_o *)0x0) {
    piVar1 = &(__this->fields).kills;
    *piVar1 = *piVar1 + (player->fields).kills;
    piVar1 = &(__this->fields).deaths;
    *piVar1 = *piVar1 + (player->fields).deaths;
    iVar2 = (player->fields).maxDamage;
    val1 = (__this->fields).maxDamage;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar2 = System_Math__Max_1b2c0d0(val1,iVar2,(MethodInfo *)0x0);
    (__this->fields).maxDamage = iVar2;
    piVar1 = &(__this->fields).totalDamage;
    *piVar1 = *piVar1 + (player->fields).totalDamage;
    piVar1 = &(__this->fields).playerCount;
    *piVar1 = *piVar1 + 1;
    return;
  }
  ThrowNullReferenceException();
}


// UI.TeamKDRRow$$UpdateRow
// il2cpp: void UI_TeamKDRRow__UpdateRow (UI_TeamKDRRow_o* __this, const MethodInfo* method);
// 0x182281790

void UI_TeamKDRRow__UpdateRow(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434738c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\t(");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    Il2CppMethodInitialized_18434738c = '\x01';
  }
  pSVar1 = (__this->fields)._scoreBuilder;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._scoreBuilder;
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_197ddb0(pSVar1,(__this->fields).kills,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._scoreBuilder;
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_197dca0(pSVar1,"/",(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._scoreBuilder;
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_197ddb0(pSVar1,(__this->fields).deaths,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._scoreBuilder;
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_197dca0(pSVar1,"/",(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._scoreBuilder;
            if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_197ddb0(pSVar1,(__this->fields).maxDamage,(MethodInfo *)0x0);
              pSVar1 = (__this->fields)._scoreBuilder;
              if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_197dca0(pSVar1,"/",(MethodInfo *)0x0);
                pSVar1 = (__this->fields)._scoreBuilder;
                if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_197ddb0
                            (pSVar1,(__this->fields).totalDamage,(MethodInfo *)0x0);
                  pSVar1 = (__this->fields)._scoreBuilder;
                  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_197dca0(pSVar1,"\t(",(MethodInfo *)0x0);
                    pSVar1 = (__this->fields)._scoreBuilder;
                    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__Append_197ddb0
                                (pSVar1,(__this->fields).playerCount,(MethodInfo *)0x0);
                      pSVar1 = (__this->fields)._scoreBuilder;
                      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__Append_197dca0
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
// 0x182281920

void UI_TeamKDRRow___ctor(UI_TeamKDRRow_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  
  if (Il2CppMethodInitialized_18434738d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_18434738d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._scoreBuilder = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreBuilder,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


