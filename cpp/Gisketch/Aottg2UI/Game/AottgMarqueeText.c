// Type: Gisketch.Aottg2UI.Game.AottgMarqueeText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___cctor (const MethodInfo* method);
// 0x44ec760

void Gisketch_Aottg2UI_Game_AottgMarqueeText___cctor(MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar6;
  System_Action_string__o *pSVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  long extraout_RDX;
  System_String_o *extraout_RDX_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *name;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *in_R8;
  MethodInfo *in_R9;
  
  if (g_data_057aec46 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgMarqueeText");
    g_data_057aec46 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  style = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  pGVar8 = factory;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgMarqueeText",factory,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"AottgMarqueeText");
    il2cpp_runtime_helper_023445d0(&"text");
    g_data_057aec47 = '\x01';
  }
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  __this_02 = pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar4->fields).type = "AottgMarqueeText";
    il2cpp_runtime_helper_022b4080(&pGVar4->fields);
    (pGVar4->fields).id = (System_String_o *)(pGVar8->fields).method_ptr;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id);
    (pGVar4->fields).textKey = (System_String_o *)(pGVar8->fields).invoke_impl;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).textKey);
    (pGVar4->fields).style = "text";
    il2cpp_runtime_helper_022b4080();
    in_R9 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    style = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
    in_R8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)in_R9,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar4->fields).search;
    (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
    il2cpp_runtime_helper_022b4080();
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(__this_01,pGVar4,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  name = pGVar5;
  pGVar4 = __this_02;
  if (g_data_057aec48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun);
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_RectMask2D_AddComponent_RectMask2D;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec48 = '\x01';
  }
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    name = MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun;
    __this_00 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this_02,(MethodInfo_255A020 *)MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun);
    pGVar4 = __this_02;
    if (((extraout_RDX != 0) && (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0)) &&
       (pGVar4 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(extraout_RDX + 0x18),
       pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX + 0x30);
      pSVar9 = (pGVar5->fields).alignSelf;
      name = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar5->fields).height;
      pGVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                         ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pGVar4,(System_String_o *)name,
                          (MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup
                  (__this_00,pGVar2,pSVar9,pGVar6,
                   *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(extraout_RDX + 0x18),in_R9);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar6 = style;
  if (g_data_057aec49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec49 = '\x01';
  }
  (pGVar4->fields).text = (System_String_o *)name;
  il2cpp_runtime_helper_022b4080(&(pGVar4->fields).text,name);
  ppSVar1 = &(pGVar4->fields).textKey;
  (pGVar4->fields).textKey = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(ppSVar1,extraout_RDX_00);
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText
            ((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)pGVar4,style,in_R8,(MethodInfo *)pGVar6);
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pGVar4->fields).text;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar7 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,pSVar7,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pGVar4->fields).text;
    if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_State_GisketchUIState__Get
                            (pGVar2,*ppSVar1,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                             (MethodInfo *)0x0);
      goto label_044ecb78;
    }
  }
  method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_044ecb78:
  if (g_data_057aec4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec4c = '\x01';
  }
  pSVar9 = (pGVar4->fields).placeholder;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  pSVar9 = (pGVar4->fields).placeholder;
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar9 != (System_String_o *)0x0) {
    (*(code *)pSVar9->klass[1].vtable._19_System_IConvertible_ToUInt64.method)
              (pSVar9,method_00,pSVar9->klass[1].vtable._20_System_IConvertible_ToSingle.methodPtr);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee
              ((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)pGVar4,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec4a = '\x01';
  }
  if (pSVar9[2].fields != (System_String_Fields)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pSVar9[2].fields,0,(MethodInfo *)0x0);
  }
  pGVar2 = pSVar9[1].monitor;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar7 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar2,pSVar7,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, System_String_o* id, System_String_o* stateKey, const MethodInfo* method);
// 0x44eb660

void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,System_String_o *id,
               System_String_o *stateKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._stateKey = stateKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._stateKey,stateKey);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText__Build (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44ec820

void Gisketch_Aottg2UI_Game_AottgMarqueeText__Build
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar6;
  System_Action_string__o *pSVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *in_RCX;
  long extraout_RDX;
  System_String_o *extraout_RDX_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *name;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *in_R8;
  MethodInfo *in_R9;
  
  if (g_data_057aec47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"AottgMarqueeText");
    il2cpp_runtime_helper_023445d0(&"text");
    g_data_057aec47 = '\x01';
  }
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  __this_01 = pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar4->fields).type = "AottgMarqueeText";
    il2cpp_runtime_helper_022b4080(&pGVar4->fields);
    (pGVar4->fields).id = (__this->fields)._id;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id);
    (pGVar4->fields).textKey = (__this->fields)._stateKey;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).textKey);
    (pGVar4->fields).style = "text";
    il2cpp_runtime_helper_022b4080();
    in_R9 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_RCX = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
    in_R8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)in_R9,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar4->fields).search;
    (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
    il2cpp_runtime_helper_022b4080();
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,pGVar4,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  name = pGVar5;
  pGVar4 = __this_01;
  if (g_data_057aec48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun);
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_RectMask2D_AddComponent_RectMask2D;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec48 = '\x01';
  }
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)__this_01,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    name = MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun;
    __this_00 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun);
    pGVar4 = __this_01;
    if (((extraout_RDX != 0) && (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0)) &&
       (pGVar4 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(extraout_RDX + 0x18),
       pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX + 0x30);
      pSVar8 = (pGVar5->fields).alignSelf;
      name = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar5->fields).height;
      pGVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                         ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pGVar4,(System_String_o *)name,
                          (MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup
                  (__this_00,pGVar2,pSVar8,pGVar6,
                   *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(extraout_RDX + 0x18),in_R9);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar6 = in_RCX;
  if (g_data_057aec49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec49 = '\x01';
  }
  (pGVar4->fields).text = (System_String_o *)name;
  il2cpp_runtime_helper_022b4080(&(pGVar4->fields).text,name);
  ppSVar1 = &(pGVar4->fields).textKey;
  (pGVar4->fields).textKey = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(ppSVar1,extraout_RDX_00);
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText
            ((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)pGVar4,in_RCX,in_R8,(MethodInfo *)pGVar6);
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pGVar4->fields).text;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar7 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,pSVar7,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pGVar4->fields).text;
    if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_State_GisketchUIState__Get
                            (pGVar2,*ppSVar1,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                             (MethodInfo *)0x0);
      goto label_044ecb78;
    }
  }
  method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_044ecb78:
  if (g_data_057aec4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec4c = '\x01';
  }
  pSVar8 = (pGVar4->fields).placeholder;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  pSVar8 = (pGVar4->fields).placeholder;
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar8 != (System_String_o *)0x0) {
    (*(code *)pSVar8->klass[1].vtable._19_System_IConvertible_ToUInt64.method)
              (pSVar8,method_00,pSVar8->klass[1].vtable._20_System_IConvertible_ToSingle.methodPtr);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee
              ((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)pGVar4,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec4a = '\x01';
  }
  if (pSVar8[2].fields != (System_String_Fields)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pSVar8[2].fields,0,(MethodInfo *)0x0);
  }
  pGVar2 = pSVar8[1].monitor;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar7 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar2,pSVar7,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMarqueeText__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x44ec9c0

bool_conflict
Gisketch_Aottg2UI_Game_AottgMarqueeText__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_String_o *stateKey;
  DG_Tweening_Tween_o *t;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  undefined8 extraout_RAX;
  System_Action_string__o *pSVar5;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *name;
  MethodInfo_255A020 **__this_00;
  TMPro_TextMeshProUGUI_o *pTVar6;
  MethodInfo *in_R9;
  
  name = node;
  __this_00 = (MethodInfo_255A020 **)go;
  if (g_data_057aec48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun);
    __this_00 = &MethodInfo_RectMask2D_AddComponent_RectMask2D;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec48 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    name = MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun;
    __this = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)
             UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarqueeTextRun);
    __this_00 = (MethodInfo_255A020 **)go;
    if (((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
        (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
       (__this_00 = (MethodInfo_255A020 **)(context->fields).Theme,
       (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00 !=
       (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0)) {
      pGVar2 = (context->fields).State;
      stateKey = (node->fields).textKey;
      name = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(node->fields).style;
      pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                         ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_00,(System_String_o *)name,
                          (MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup
                  (__this,pGVar2,stateKey,pGVar4,(context->fields).Theme,in_R9);
        return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)view;
  if (g_data_057aec49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec49 = '\x01';
  }
  (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._state =
       (Gisketch_Aottg2UI_State_GisketchUIState_o *)name;
  il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._state,name);
  ppSVar1 = &(((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._stateKey;
  (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._stateKey = extraout_RDX;
  il2cpp_runtime_helper_022b4080(ppSVar1,extraout_RDX);
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText
            ((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00,
             (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)view,
             (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)method,(MethodInfo *)pGVar4);
  pGVar2 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._state;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar5 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,pSVar5,(MethodInfo *)0x0);
    pGVar2 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._state;
    if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_State_GisketchUIState__Get
                            (pGVar2,*ppSVar1,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                             (MethodInfo *)0x0);
      goto label_044ecb78;
    }
  }
  method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_044ecb78:
  if (g_data_057aec4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec4c = '\x01';
  }
  pTVar6 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return bVar3;
  }
  pTVar6 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._text;
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar6->klass->vtable)._66_set_text.methodPtr)
              (pTVar6,method_00,(pTVar6->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee
              ((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00,method_00);
    return extraout_EAX;
  }
  bVar3 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    bVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec4a = '\x01';
  }
  t = *(DG_Tweening_Tween_o **)&(pTVar6->fields).m_RaycastTarget;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    bVar3 = extraout_EAX_00;
  }
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pTVar6->fields).m_Material;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar5 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar2,pSVar5,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  return bVar3;
}


