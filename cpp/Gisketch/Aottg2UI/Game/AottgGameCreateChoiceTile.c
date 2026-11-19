// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateChoiceTile.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5e8eed0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* tile, const MethodInfo* method);
// 0x5e914e0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e91b79: jmp 0x5e91c43
// asm:   0x5e91bfd: mov qword ptr [rsp], 0
// asm:   0x5e91c05: mov rdi, r14
// asm:   0x5e91c08: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x5e91c0d: mov rdx, rbx
// asm:   0x5e91c10: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x5e91c41: jmp 0x5e91c56
// asm:   0x5e91de8: jmp 0x5e921cc

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *tile,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar2;
  System_Action_GisketchActionContext__o *action;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  System_String_o **ppSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1_o *__this_00;
  System_Action_AottgUi__o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *style;
  System_String_o *alignSelf;
  float paddingX;
  
  if (Il2CppMethodInitialized_075488a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_0_Build_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_1_Build_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-background");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"layeredStars");
    il2cpp_codegen_initialize_runtime_metadata(&"-hover");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview");
    il2cpp_codegen_initialize_runtime_metadata(&"layeredGear");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateChoiceHover");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/GeneralPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"-frame");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateChoiceFrame");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview-grid");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_075488a8 = '\x01';
  }
  if ((__this->fields).rootChoice != false) {
    pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05e921cc;
    (pGVar4->fields).type = "GameCreateChoiceFrame";
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type);
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_05e921cc;
    pSVar5 = System_String__Concat_52f0320((pGVar2->fields)._id,"-frame",(MethodInfo *)0x0);
    (pGVar4->fields).id = pSVar5;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id);
    if ((__this->fields).favoritesChoice == false) {
      if ((__this->fields).sandboxChoice != false) {
        pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
        if (pSVar6 == (System_String_array *)0x0) goto label_05e921cc;
        if ((int)pSVar6->max_length == 0) goto label_05e921d1;
        ppSVar7 = &"layeredGear";
        goto label_05e9173b;
      }
      pSVar6 = (System_String_array *)0x0;
    }
    else {
      pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
      if (pSVar6 == (System_String_array *)0x0) goto label_05e921cc;
      if ((int)pSVar6->max_length == 0) goto label_05e921d1;
      ppSVar7 = &"layeredStars";
label_05e9173b:
      pSVar6->m_Items[0] = *ppSVar7;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
    }
    (pGVar4->fields).options = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).options);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    (pGVar4->fields).layout = pGVar10;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
    if (tile == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e921cc;
    Gisketch_Aottg2UI_Code_AottgUi__Add(tile,pGVar4,(MethodInfo *)0x0);
  }
  if ((__this->fields).previewChoice == false) {
label_05e9183e:
    bVar3 = System_String__IsNullOrEmpty((__this->fields).previewSprite,(MethodInfo *)0x0);
    if (bVar3) {
      if (((__this->fields).largeSection == false) || ((__this->fields).featuredChoice != false))
      goto label_05e91b6e;
      pGVar2 = (__this->fields).__4__this;
      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_05e921cc;
      id = System_String__Concat_52f0320((pGVar2->fields)._id,"-background",(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           "Absolute",(System_String_o *)0x0,0.0,pGVar8,pGVar9,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
      if (tile == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e921cc;
      style = "profilePreviewBanner";
      pSVar5 = "Data/ExperiencePreview/GeneralPreview";
    }
    else {
      pGVar2 = (__this->fields).__4__this;
      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_05e921cc;
      pSVar5 = (__this->fields).previewSprite;
      id = System_String__Concat_52f0320((pGVar2->fields)._id,"-preview",(MethodInfo *)0x0);
      style = "profilePreviewBanner";
      pSVar12 = "Column";
      alignSelf = (System_String_o *)0x0;
      if ((__this->fields).previewChoice != false) {
        alignSelf = "Absolute";
      }
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      if ((__this->fields).previewChoice == false) {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(128.0,(MethodInfo *)0x0);
      }
      else {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      }
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          (pSVar12,(System_String_o *)0x0,(System_String_o *)0x0,alignSelf,
                           (System_String_o *)0x0,0.0,pGVar8,pGVar9,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
      if (tile == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e921cc;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (tile,pSVar5,style,id,pGVar10,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    if ((__this->fields).previewChoice != false) goto label_05e91c27;
label_05e91c43:
    pSVar11 = (__this->fields).__9__1;
    pSVar5 = "clear";
  }
  else {
    pSVar6 = (__this->fields).previewSprites;
    if (pSVar6 == (System_String_array *)0x0) goto label_05e921cc;
    if ((int)pSVar6->max_length < 2) goto label_05e9183e;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_1);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1_o *)0x0)
    goto label_05e921cc;
    (__this_00->fields).CS___8__locals1 = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).CS___8__locals1);
    pSVar6 = (__this->fields).previewSprites;
    if (pSVar6 == (System_String_array *)0x0) goto label_05e921cc;
    iVar1 = (int)pSVar6->max_length;
    (__this_00->fields).previewCount = (uint)(3 < iVar1) * 2 + 2;
    (__this_00->fields).previewHeight = *(float *)(&g_data_0100ad90 + (ulong)(iVar1 < 4) * 4);
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar11,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_1_Build_b__2,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_05e921cc;
    pSVar5 = System_String__Concat_52f0320((pGVar2->fields)._id,"-preview-grid",(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                         "Absolute","Wrap",0.0,pGVar8,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    if (tile == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e921cc;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (tile,"clear",pSVar11,pSVar5,pGVar10,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
label_05e91b6e:
    if ((__this->fields).previewChoice == false) goto label_05e91c43;
label_05e91c27:
    if ((__this->fields).featuredChoice != false) goto label_05e91c43;
    pSVar11 = (__this->fields).__9__1;
    pSVar5 = "row";
  }
  if (pSVar11 == (System_Action_AottgUi__o *)0x0) {
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar11,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_0_Build_b__1,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  pGVar2 = (__this->fields).__4__this;
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
    pSVar12 = System_String__Concat_52f0320((pGVar2->fields)._id,"-label",(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
    paddingX = 0.0;
    if ((__this->fields).previewChoice != false) {
      paddingX = 2.0;
    }
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Row","Center","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,4.0,pGVar8,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,paddingX,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,0.0,(MethodInfo *)0x0);
    if (tile != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (tile,pSVar5,pSVar11,pSVar12,pGVar10,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      pGVar2 = (__this->fields).__4__this;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
        action = (pGVar2->fields)._select;
        pSVar5 = (pGVar2->fields)._id;
        pSVar12 = (pGVar2->fields)._description;
        if (action == (System_Action_GisketchActionContext__o *)0x0) {
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (tile,5,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                              (pGVar2->fields)._actionId,pSVar5,pSVar12,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0);
        }
        else {
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                             (tile,5,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),action,pSVar5,
                              pSVar12,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              (System_String_o *)0x0,(MethodInfo *)0x0);
        }
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar4->fields).style = "clear";
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style);
          pGVar2 = (__this->fields).__4__this;
          if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
            (pGVar4->fields).formLabel = (pGVar2->fields)._title;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).formLabel);
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
            pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
            pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                 "Absolute",(System_String_o *)0x0,0.0,pGVar8,pGVar9,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                 0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
            (pGVar4->fields).layout = pGVar10;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
            pGVar4 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
            Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar4->fields).type = "GameCreateChoiceHover";
              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type);
              pGVar2 = (__this->fields).__4__this;
              if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
                pSVar5 = System_String__Concat_52f0320
                                   ((pGVar2->fields)._id,"-hover",(MethodInfo *)0x0);
                (pGVar4->fields).id = pSVar5;
                Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id);
                pGVar2 = (__this->fields).__4__this;
                if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
                  (pGVar4->fields).text = (pGVar2->fields)._title;
                  Il2CppCodeGenWriteBarrier(&(pGVar4->fields).text);
                  pGVar2 = (__this->fields).__4__this;
                  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
                    (pGVar4->fields).value = (pGVar2->fields)._description;
                    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).value);
                    pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
                    pGVar2 = (__this->fields).__4__this;
                    if ((__this->fields).previewChoice == false) {
                      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0)
                      goto label_05e921cc;
                      ppSVar7 = &"-background";
                    }
                    else {
                      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0)
                      goto label_05e921cc;
                      ppSVar7 = &"-preview";
                    }
                    pSVar5 = System_String__Concat_52f0320((pGVar2->fields)._id,*ppSVar7,(MethodInfo *)0x0);
                    if (pSVar6 != (System_String_array *)0x0) {
                      if ((int)pSVar6->max_length != 0) {
                        pSVar6->m_Items[0] = pSVar5;
                        Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
                        pGVar2 = (__this->fields).__4__this;
                        if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0)
                        goto label_05e921cc;
                        pSVar5 = System_String__Concat_52f0320
                                           ((pGVar2->fields)._id,"-label",(MethodInfo *)0x0);
                        if ((pSVar6->max_length & 0xfffffffe) != 0) {
                          pSVar6->m_Items[1] = pSVar5;
                          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
                          if (2 < (uint)pSVar6->max_length) {
                            if ((__this->fields).rootChoice == false) {
                              ppSVar7 = &"0";
                            }
                            else {
                              ppSVar7 = &"1";
                            }
                            pSVar6->m_Items[2] = *ppSVar7;
                            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2);
                            if ((pSVar6->max_length & 0xfffffffc) != 0) {
                              if ((__this->fields).previewChoice == false) {
                                ppSVar7 = &"1";
                              }
                              else {
                                ppSVar7 = &"0";
                              }
                              pSVar6->m_Items[3] = *ppSVar7;
                              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 3);
                              (pGVar4->fields).options = pSVar6;
                              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).options);
                              pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
                              pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
                              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                                  ("Column",(System_String_o *)0x0,
                                                   (System_String_o *)0x0,(System_String_o *)0x0,
                                                   (System_String_o *)0x0,0.0,pGVar8,pGVar9,
                                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,
                                                   0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                              (pGVar4->fields).layout = pGVar10;
                              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
                              Gisketch_Aottg2UI_Code_AottgUi__Add(tile,pGVar4,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
label_05e921d1:
                      ThrowIndexOutOfRangeException();
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
label_05e921cc:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0___Build_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x5e921f0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0___Build_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *id;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_075488a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"icon");
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"-icon");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateChoiceTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateFavoritesTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_075488a9 = '\x01';
  }
  if ((__this->fields).utility != false) {
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_05e9231f;
    pSVar2 = (pGVar1->fields)._icon;
    pSVar3 = System_String__Concat_52f0320((pGVar1->fields)._id,"-icon",(MethodInfo *)0x0);
    if (label == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e9231f;
    Gisketch_Aottg2UI_Code_AottgUi__Icon(label,pSVar2,"icon",pSVar3,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
    if ((__this->fields).featuredChoice == false) {
      if ((__this->fields).categoryChoice == false) {
        ppSVar4 = &"header";
      }
      else {
        ppSVar4 = &"gameCreateChoiceTitle";
      }
    }
    else {
      ppSVar4 = &"gameCreateFavoritesTitle";
    }
    pSVar2 = (pGVar1->fields)._title;
    pSVar3 = *ppSVar4;
    id = System_String__Concat_52f0320((pGVar1->fields)._id,"-title",(MethodInfo *)0x0);
    if (label != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (label,pSVar2,pSVar3,id,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_05e9231f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1_o* __this, const MethodInfo* method);
// 0x5e921e0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_1$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1___Build_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x5e92330
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9238c: xor eax, eax
// asm:   0x5e9238e: lea r15, [rip + 0x1467b2b]  ; "profilePreviewBanner"
// asm:   0x5e92395: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1___Build_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o *pGVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar3;
  System_String_o *sprite;
  System_String_o *str2;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  uint uStack_34;
  
  if (Il2CppMethodInitialized_075488aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview-");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    Il2CppMethodInitialized_075488aa = '\x01';
  }
  uStack_34 = 0;
  if (0 < (__this->fields).previewCount) {
    do {
      pGVar1 = (__this->fields).CS___8__locals1;
      if ((pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o *)0x0) ||
         (pSVar2 = (pGVar1->fields).previewSprites, pSVar2 == (System_String_array *)0x0)) {
label_05e924e0:
        ThrowNullReferenceException();
      }
      if ((uint)pSVar2->max_length <= uStack_34) {
        ThrowIndexOutOfRangeException();
      }
      pGVar3 = (pGVar1->fields).__4__this;
      if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_05e924e0;
      sprite = pSVar2->m_Items[(int)uStack_34];
      pSVar4 = (pGVar3->fields)._id;
      str2 = System_Int32__ToString((int32_t *)&uStack_34,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_5301f10(pSVar4,"-preview-",str2,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent((__this->fields).previewHeight,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (grid == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e924e0;
      Gisketch_Aottg2UI_Code_AottgUi__Image
                (grid,sprite,"profilePreviewBanner",pSVar4,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      uStack_34 = uStack_34 + 1;
    } while ((int)uStack_34 < (__this->fields).previewCount);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___cctor (const MethodInfo* method);
// 0x5e8e760

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar2;
  
  if (Il2CppMethodInitialized_0754889e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildFrameRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildHoverRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateChoiceHover");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateChoiceFrame");
    Il2CppMethodInitialized_0754889e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  pGVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (pGVar2,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildHoverRuntime,
             (MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (pGVar1,"GameCreateChoiceHover",pGVar2,(MethodInfo *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (pGVar2,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildFrameRuntime,
               (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
                (pGVar1,"GameCreateChoiceFrame",pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o* __this, System_String_o* id, System_String_o* title, System_String_o* description, System_String_o* actionId, System_String_o* icon, int32_t index, System_String_o* previewSprite, System_Action_GisketchActionContext__o* select, float height, const MethodInfo* method);
// 0x5e8e890

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this,System_String_o *id,
               System_String_o *title,System_String_o *description,System_String_o *actionId,
               System_String_o *icon,int32_t index,System_String_o *previewSprite,
               System_Action_GisketchActionContext__o *select,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  if (title == (System_String_o *)0x0) {
    title = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  if (description == (System_String_o *)0x0) {
    description = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._description = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._description);
  (__this->fields)._actionId = actionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actionId);
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon);
  (__this->fields)._index = index;
  (__this->fields)._previewSprite = previewSprite;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewSprite);
  (__this->fields)._select = select;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._select);
  (__this->fields)._height = height;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__Build (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e8e990

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o **targetAddress;
  System_String_o *pSVar1;
  System_String_o *justify;
  System_String_o *direction;
  System_String_o *alignItems;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o *__this_00;
  System_String_array *pSVar5;
  System_Action_AottgUi__o *__this_01;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  byte bVar6;
  System_String_o **ppSVar7;
  float value;
  
  if (Il2CppMethodInitialized_0754889f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"card");
    il2cpp_codegen_initialize_runtime_metadata(&"slideLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorite-");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/GeneralPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choices");
    il2cpp_codegen_initialize_runtime_metadata(&"-tile");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateFavoritesCard");
    Il2CppMethodInitialized_0754889f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass16_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    bVar2 = System_String__op_Equality((__this->fields)._id,"game-create-root-favorites",(MethodInfo *)0x0);
    (__this_00->fields).favoritesChoice = bVar2;
    bVar2 = System_String__op_Equality((__this->fields)._id,"game-create-root-sandbox",(MethodInfo *)0x0);
    (__this_00->fields).sandboxChoice = bVar2;
    (__this_00->fields).featuredChoice = (bool)(bVar2 | (__this_00->fields).favoritesChoice);
    pSVar1 = (__this->fields)._id;
    if (pSVar1 != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith(pSVar1,"game-create-category-",(MethodInfo *)0x0);
      (__this_00->fields).categoryChoice = (bool)(bVar2 | (__this_00->fields).featuredChoice);
      pSVar1 = (__this->fields)._id;
      if (pSVar1 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(pSVar1,"game-create-experience-",(MethodInfo *)0x0);
        bVar4 = true;
        bVar3 = true;
        if (!bVar2) {
          pSVar1 = (__this->fields)._id;
          if (pSVar1 == (System_String_o *)0x0) goto label_05e8eec1;
          bVar3 = System_String__StartsWith(pSVar1,"game-create-favorite-",(MethodInfo *)0x0);
        }
        if ((__this_00->fields).categoryChoice == false) {
          pSVar1 = (__this->fields)._id;
          if (pSVar1 == (System_String_o *)0x0) goto label_05e8eec1;
          bVar4 = System_String__StartsWith(pSVar1,"game-create-subcategory-",(MethodInfo *)0x0);
        }
        (__this_00->fields).largeSection = (bool)(bVar4 | bVar3);
        pSVar1 = (__this->fields)._id;
        if (pSVar1 != (System_String_o *)0x0) {
          bVar6 = false;
          bVar2 = System_String__StartsWith(pSVar1,"game-create-root-",(MethodInfo *)0x0);
          if (bVar2) {
            bVar6 = (__this_00->fields).featuredChoice ^ 1;
          }
          (__this_00->fields).utility = (bool)bVar6;
          (__this_00->fields).rootChoice = (bool)(bVar6 | (__this_00->fields).largeSection);
          bVar2 = true;
          if (bVar3 == false && (__this_00->fields).categoryChoice == false) {
            pSVar1 = (__this->fields)._id;
            if (pSVar1 == (System_String_o *)0x0) goto label_05e8eec1;
            bVar2 = false;
            bVar3 = System_String__StartsWith(pSVar1,"game-create-subcategory-",(MethodInfo *)0x0);
            if (bVar3) {
              bVar2 = System_String__IsNullOrEmpty((__this->fields)._previewSprite,(MethodInfo *)0x0);
              bVar2 = !bVar2;
            }
          }
          (__this_00->fields).previewChoice = bVar2;
          ppSVar7 = &(__this->fields)._previewSprite;
          bVar2 = System_String__IsNullOrEmpty((__this->fields)._previewSprite,(MethodInfo *)0x0);
          if ((((__this_00->fields).previewChoice & bVar2) != 0) &&
             ((__this_00->fields).featuredChoice == false)) {
            ppSVar7 = &"Data/ExperiencePreview/GeneralPreview";
          }
          targetAddress = &(__this_00->fields).previewSprite;
          (__this_00->fields).previewSprite = *ppSVar7;
          Il2CppCodeGenWriteBarrier(targetAddress);
          bVar2 = System_String__IsNullOrEmpty((__this_00->fields).previewSprite,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
          }
          else {
            pSVar1 = *targetAddress;
            if (pSVar1 == (System_String_o *)0x0) goto label_05e8eec1;
            pSVar5 = System_String__Split(pSVar1,0x7c,0,(MethodInfo *)0x0);
          }
          (__this_00->fields).previewSprites = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).previewSprites);
          if ((__this_00->fields).featuredChoice == false) {
            if (((__this_00->fields).rootChoice == false) || ((__this_00->fields).utility != false)) {
              ppSVar7 = &"row";
            }
            else {
              ppSVar7 = &"card";
            }
          }
          else {
            ppSVar7 = &"gameCreateFavoritesCard";
          }
          pSVar1 = *ppSVar7;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_0_Build_b__0
                     ,(MethodInfo_4A81BE0 *)0x0);
          id = System_String__Concat_52f0320((__this->fields)._id,"-tile",(MethodInfo *)0x0);
          alignItems = "Stretch";
          direction = "Column";
          if ((__this_00->fields).rootChoice == false) {
            ppSVar7 = &"SpaceBetween";
          }
          else {
            ppSVar7 = &"Center";
          }
          justify = *ppSVar7;
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
          value = (__this->fields)._height;
          if (value <= 0.0) {
            if ((__this_00->fields).largeSection == false) {
              value = *(float *)(&g_data_0100aa90 + (ulong)((__this_00->fields).utility == false) * 4);
            }
            else {
              value = 360.0;
            }
          }
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
          layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             (direction,justify,alignItems,(System_String_o *)0x0,(System_String_o *)0x0,10.0,
                              width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              *(float *)(&g_data_0100b068 + (ulong)((__this_00->fields).rootChoice == false) * 4)
                              ,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                            ("slideLeft","game-create-choices",0.16,0.025,0.02,
                             (__this->fields)._index,(MethodInfo *)0x0);
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Panel(ui,pSVar1,__this_01,id,layout,enter,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05e8eec1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFavoriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, bool favorite, System_Action_GisketchActionContext__o* toggle, const MethodInfo* method);
// 0x5e8eee0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8ef13: test bl, bl
// asm:   0x5e8ef15: je 0x5e8ef7f

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoriteButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,bool favorite,
          System_Action_GisketchActionContext__o *toggle,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o **ppSVar2;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_075488a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Add");
    Il2CppMethodInitialized_075488a0 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  if (favorite) {
    ppSVar2 = &"GameCreate.Favorites.Remove";
  }
  else {
    ppSVar2 = &"GameCreate.Favorites.Add";
  }
  tooltip = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(*ppSVar2,(MethodInfo *)0x0);
  if ((ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
     (pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                         (ui,(uint)!favorite * 5,"star",toggle,id,tooltip,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pGVar3->fields).formLabel = tooltip;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).formLabel);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  (pGVar3->fields).layout = pGVar4;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
  return pGVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildHoverRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildHoverRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e8f0b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8f224: jmp 0x5e8f27b

bool Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildHoverRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  System_String_o *title;
  System_String_o *description;
  bool bVar2;
  bool mutedBackground;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this_00;
  System_String_array *pSVar5;
  System_String_o *labelId;
  MethodInfo *in_stack_ffffffffffffffc0;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_075488a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateChoiceHover);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_075488a1 = '\x01';
  }
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
     pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0)) goto label_05e8f2e3;
  (*(pUVar3->klass->vtable)._28_set_ignoreLayout.methodPtr)
            (pUVar3,true,(pUVar3->klass->vtable)._28_set_ignoreLayout.method);
  pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05e8f2e3;
  pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return true;
  }
  pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
  if ((((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) ||
      (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
      __this == (UnityEngine_GameObject_o *)0x0)) ||
     (__this_00 = UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateChoiceHover)
     , node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_05e8f2e3;
  title = (node->fields).text;
  description = (node->fields).value;
  pSVar5 = (node->fields).options;
  if (pSVar5 == (System_String_array *)0x0) {
    labelId = (System_String_o *)0x0;
    pSStack_38 = (System_String_o *)0x0;
    bVar2 = false;
label_05e8f28e:
    mutedBackground = false;
  }
  else {
    if (pSVar5->max_length == 0) {
      pSStack_38 = (System_String_o *)0x0;
      if (1 < (int)pSVar5->max_length) goto label_05e8f21a;
label_05e8f246:
      labelId = (System_String_o *)0x0;
      iVar1 = (int)pSVar5->max_length;
    }
    else {
      if ((int)pSVar5->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSStack_38 = pSVar5->m_Items[0];
      if ((int)pSVar5->max_length < 2) goto label_05e8f246;
label_05e8f21a:
      labelId = pSVar5->m_Items[1];
      iVar1 = (int)pSVar5->max_length;
    }
    bVar2 = false;
    if (2 < iVar1) {
      bVar2 = System_String__op_Equality(pSVar5->m_Items[2],"1",(MethodInfo *)0x0);
      pSVar5 = (node->fields).options;
    }
    if ((pSVar5 == (System_String_array *)0x0) || ((int)pSVar5->max_length < 4)) goto label_05e8f28e;
    mutedBackground = System_String__op_Equality(pSVar5->m_Items[3],"1",(MethodInfo *)0x0);
  }
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Setup
              (__this_00,title,description,pSStack_38,labelId,bVar2,mutedBackground,in_stack_ffffffffffffffc0)
    ;
    return true;
  }
label_05e8f2e3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFrameRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFrameRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e8fcc0

bool Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFrameRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Image_o *__this;
  UnityEngine_Sprite_o *value;
  UnityEngine_UI_Mask_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *pUVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame_c **method_00;
  
  if (Il2CppMethodInitialized_075488a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"layeredStars");
    il2cpp_codegen_initialize_runtime_metadata(&"layeredGear");
    Il2CppMethodInitialized_075488a2 = '\x01';
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
     pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar3->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar3,true,(pUVar3->klass->vtable)._28_set_ignoreLayout.method);
    pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        __this = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method_00 = (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame_c **)__this;
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
        if (g_data_075488b5 == '\0') {
          method_00 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame;
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame);
          g_data_075488b5 = '\x01';
        }
        value = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite;
        if (value == (UnityEngine_Sprite_o *)0x0) {
          value = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite(0.0,(MethodInfo *)method_00)
          ;
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite = value;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite);
        }
        if (__this != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite(__this,value,(MethodInfo *)0x0);
          UnityEngine_UI_Image__set_type(__this,1,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
          if ((((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
               (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
              ((__this_00 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar4,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Mask),
               __this_00 != (UnityEngine_UI_Mask_o *)0x0 ||
               ((((pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0),
                  pUVar4 != (UnityEngine_Transform_o *)0x0 &&
                  (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
                  pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
                 (__this_01 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
                 __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
                (__this_00 = UnityEngine_GameObject__AddComponent_object_
                                       (__this_01,
                                        (MethodInfo_353B6A0 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_Mask),
                __this_00 != (UnityEngine_UI_Mask_o *)0x0)))))) &&
             (UnityEngine_UI_Mask__set_showMaskGraphic(__this_00,true,(MethodInfo *)0x0),
             node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
            pSVar1 = (node->fields).options;
            if ((pSVar1 != (System_String_array *)0x0) && (pSVar1->max_length != 0)) {
              if ((int)pSVar1->max_length == 0) {
label_05e9003f:
                ThrowIndexOutOfRangeException();
              }
              bVar2 = System_String__op_Equality(pSVar1->m_Items[0],"layeredStars",(MethodInfo *)0x0);
              if (bVar2) {
                pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                                   ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                pMVar6 = extraout_RDX;
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
                  pMVar6 = extraout_RDX_00;
                }
                Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoritesArtwork(pUVar5,context,pMVar6)
                ;
              }
              else {
                pSVar1 = (node->fields).options;
                if (pSVar1 == (System_String_array *)0x0) goto label_05e9003a;
                if ((int)pSVar1->max_length == 0) goto label_05e9003f;
                bVar2 = System_String__op_Equality(pSVar1->m_Items[0],"layeredGear",(MethodInfo *)0x0)
                ;
                if (bVar2) {
                  pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                  pMVar6 = extraout_RDX_01;
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
                    pMVar6 = extraout_RDX_02;
                  }
                  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildSandboxArtwork(pUVar5,context,pMVar6)
                  ;
                }
              }
            }
            return true;
          }
        }
      }
    }
  }
label_05e9003a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFavoritesArtwork
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoritesArtwork (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5e900c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9020c: cmp byte ptr [rip + 0x16b8691], 0
// asm:   0x5e90213: je 0x5e90240
// asm:   0x5e90230: jmp 0x5e90276

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoritesArtwork
               (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context
               ,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  undefined1 auVar3 [16];
  UnityEngine_Sprite_o *sprite;
  MethodInfo *in_RCX;
  Il2CppClass *klass;
  UnityEngine_Color_o color;
  UnityEngine_Color_o UVar4;
  UnityEngine_Color_o UVar5;
  UnityEngine_Color_o color_00;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075488a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&"favorites-watermark");
    il2cpp_codegen_initialize_runtime_metadata(&"favorites-spark-small");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"favorites-shadow");
    il2cpp_codegen_initialize_runtime_metadata(&"favorites-spark");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    il2cpp_codegen_initialize_runtime_metadata(&"favorites-accent");
    il2cpp_codegen_initialize_runtime_metadata(&"favorites-face");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    Il2CppMethodInitialized_075488a3 = '\x01';
  }
  if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (pGVar2 = (context->fields).Theme, pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)g_data_01006650;
    color = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                      (pGVar2,"shadow",(UnityEngine_Color_o)(auVar3 << 0x40),(MethodInfo *)0x0);
    pGVar2 = (context->fields).Theme;
    if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      UVar4.fields.b = (float)(int)g_data_01005280;
      UVar4.fields.a = (float)g_data_01005280._4_4_;
      UVar4.fields.r = 0.92;
      UVar4.fields.g = 0.64;
      UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (pGVar2,"warning",UVar4,(MethodInfo *)0x0);
      pGVar2 = (context->fields).Theme;
      if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        UVar5.fields.b = (float)(int)g_data_01005870;
        UVar5.fields.a = (float)g_data_01005870._4_4_;
        UVar5.fields.r = (float)(int)g_data_01005870;
        UVar5.fields.g = (float)g_data_01005870._4_4_;
        UVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (pGVar2,"buttonText",UVar5,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
        }
        if (Il2CppMethodInitialized_075488a4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
          Il2CppMethodInitialized_075488a4 = '\x01';
          uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile)->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
          sprite = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->static_fields->
                   _featuredStarSprite;
          klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile;
        }
        else {
          sprite = *(UnityEngine_Sprite_o **)
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile)->static_fields;
          klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile;
        }
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile =
             (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c *)klass;
        if (sprite == (UnityEngine_Sprite_o *)0x0) {
          if ((klass->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(klass);
          }
          sprite = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__CreateFeaturedStarSprite
                             ((MethodInfo *)klass);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->static_fields->_featuredStarSprite =
               sprite;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->static_fields->
                      _featuredStarSprite);
        }
        local_38 = color.fields.b;
        fStack_34 = color.fields.a;
        color_00.fields.a = fStack_34 * 0.5;
        color_00.fields.b = local_38;
        color_00.fields.r = color.fields.r;
        color_00.fields.g = color.fields.g;
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,sprite,"favorites-watermark",(UnityEngine_Vector2_o)0xc280000042880000,138.0,-15.0,
                   color_00,in_RCX);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,sprite,"favorites-shadow",(UnityEngine_Vector2_o)0x4224000041500000,120.0,8.0,
                   color,in_RCX);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,sprite,"favorites-accent",(UnityEngine_Vector2_o)0x4238000040e00000,120.0,8.0,
                   UVar4,in_RCX);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,sprite,"favorites-face",(UnityEngine_Vector2_o)0x42480000c0000000,108.0,8.0,
                   UVar5,in_RCX);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,sprite,"favorites-spark",(UnityEngine_Vector2_o)0xc25c0000c29c0000,28.0,-12.0,
                   UVar4,in_RCX);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,sprite,"favorites-spark-small",(UnityEngine_Vector2_o)0xc2900000c2400000,16.0,12.0,
                   UVar5,in_RCX);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$get_FeaturedStarSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__get_FeaturedStarSprite (const MethodInfo* method);
// 0x5e90700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9072f: jmp 0x5e9076e

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__get_FeaturedStarSprite(MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Sprite_o *pUVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075488a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    Il2CppMethodInitialized_075488a4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    pUVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->static_fields->_featuredStarSprite;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile;
  }
  else {
    pUVar2 = *(UnityEngine_Sprite_o **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile)->static_fields;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile =
       (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c *)klass;
  if (pUVar2 == (UnityEngine_Sprite_o *)0x0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    pUVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__CreateFeaturedStarSprite((MethodInfo *)klass);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->static_fields->_featuredStarSprite = pUVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->static_fields->_featuredStarSprite)
    ;
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$CreateFeaturedStarSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__CreateFeaturedStarSprite (const MethodInfo* method);
// 0x5e90b50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e90be9: nop dword ptr [rax]
// asm:   0x5e90de6: jmp 0x5e90d10
// asm:   0x5e90e6e: jmp 0x5e9124c
// asm:   0x5e91051: mov rdx, r8
// asm:   0x5e91054: mov ebx, r9d

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__CreateFeaturedStarSprite(MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Color32_array *colors;
  Il2CppObject *array;
  System_Single_array *array_00;
  UnityEngine_Texture_o *__this;
  UnityEngine_Sprite_o *pUVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint length;
  ulong uVar13;
  UnityEngine_Color32_o *pUVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint uVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  float fVar30;
  
  if (Il2CppMethodInitialized_075488a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Sort_float_71a1768);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    Il2CppMethodInitialized_075488a5 = '\x01';
  }
  pIVar7 = SZArrayNew(TypeInfo_UnityEngine_Vector2_array,10);
  if (pIVar7 != (Il2CppObject *)0x0) {
    if (0 < *(int *)&pIVar7[1].monitor) {
      uVar13 = 0;
      do {
        fVar23 = ((float)(int)uVar13 * 36.0 + 90.0) * 0.017453292;
        fVar24 = cosf(fVar23);
        fVar23 = sinf(fVar23);
        if (*(uint *)&pIVar7[1].monitor <= uVar13) goto label_05e9124c;
        (&pIVar7[2].klass)[uVar13] =
             (Il2CppClass *)
             CONCAT44(fVar23 * *(float *)(&g_data_0100ad88 + (ulong)((uVar13 & 1) == 0) * 4) + 256.0,
                      fVar24 * *(float *)(&g_data_0100ad88 + (ulong)((uVar13 & 1) == 0) * 4) + 256.0);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)*(int *)&pIVar7[1].monitor);
    }
    colors = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0x40000);
    array = SZArrayNew(TypeInfo_float_array,0x200);
    array_00 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,*(uint32_t *)&pIVar7[1].monitor);
    pUVar14 = colors->m_Items;
    lVar21 = 0;
    lVar12 = 0;
    do {
      System_Array__Clear((System_Array_o *)array,0,0x200,(MethodInfo *)0x0);
      iVar11 = 0;
      do {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
        }
        uVar6 = (uint)pIVar7[1].monitor;
        if ((int)uVar6 < 1) {
label_05e90d10:
          System_Array__Sort_float__33d4730
                    (array_00,0,0,(MethodInfo_33D4730 *)MethodInfo_System_Array_Sort_float_71a1768);
        }
        else {
          fVar23 = ((float)iVar11 + 0.5) * 0.25 + (float)(int)lVar12;
          uVar9 = (ulong)pIVar7[1].monitor & 0xffffffff;
          uVar16 = (ulong)(uVar6 - 1);
          uVar13 = 0;
          if (array_00 == (System_Single_array *)0x0) {
            do {
              if (uVar6 <= (uint)uVar16) goto label_05e9124c;
              if (fVar23 < *(float *)((long)&pIVar7[2].klass + (long)(int)(uint)uVar16 * 8 + 4) ==
                  *(float *)((long)&pIVar7[2].klass + uVar13 * 8 + 4) <= fVar23) goto label_05e91251;
              uVar16 = uVar13 & 0xffffffff;
              uVar13 = uVar13 + 1;
            } while (uVar9 != uVar13);
            goto label_05e90d10;
          }
          length = 0;
          do {
            if (uVar6 <= (uint)uVar16) goto label_05e9124c;
            fVar24 = (float)((ulong)(&pIVar7[2].klass)[(int)(uint)uVar16] >> 0x20);
            fVar29 = SUB84((&pIVar7[2].klass)[uVar13],0);
            fVar30 = (float)((ulong)(&pIVar7[2].klass)[uVar13] >> 0x20);
            if (fVar23 < fVar24 == fVar30 <= fVar23) {
              if ((uint)array_00->max_length <= length) goto label_05e9124c;
              lVar15 = (long)(int)length;
              length = length + 1;
              array_00->m_Items[lVar15] =
                   ((SUB84((&pIVar7[2].klass)[(int)(uint)uVar16],0) - fVar29) * (fVar23 - fVar30)) /
                   (fVar24 - fVar30) + fVar29;
            }
            uVar16 = uVar13 & 0xffffffff;
            uVar13 = uVar13 + 1;
          } while (uVar9 != uVar13);
          System_Array__Sort_float__33d4730
                    (array_00,0,length,(MethodInfo_33D4730 *)MethodInfo_System_Array_Sort_float_71a1768);
          if (1 < (int)length) {
            if (array_00 == (System_Single_array *)0x0) goto label_05e91251;
            if (array == (Il2CppObject *)0x0) {
              iVar11 = (int)array_00->max_length;
              if ((iVar11 == 0) || (iVar11 == 1)) goto label_05e9124c;
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
                ThrowNullReferenceException();
              }
              goto label_05e91251;
            }
            uVar22 = 0;
            uVar6 = 1;
            do {
              uVar28 = (uint)array_00->max_length;
              if ((uVar28 <= uVar22) || (uVar28 <= uVar6)) goto label_05e9124c;
              fVar23 = array_00->m_Items[(int)uVar22];
              fVar24 = array_00->m_Items[(int)uVar6];
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
              }
              uVar6 = *(uint *)&array[1].monitor;
              auVar26._0_4_ = (float)(int)uVar6;
              auVar26._4_4_ = auVar26._0_4_;
              auVar26._8_4_ = auVar26._0_4_;
              auVar26._12_4_ = auVar26._0_4_;
              auVar27._4_4_ = fVar24;
              auVar27._0_4_ = fVar23;
              auVar27._8_8_ = 0;
              auVar27 = minps(auVar26,auVar27);
              fVar23 = (float)(-(uint)(0.0 <= fVar23) & auVar27._0_4_);
              fVar24 = (float)(-(uint)(0.0 <= fVar24) & auVar27._4_4_);
              uVar25 = (uint)fVar23;
              uVar28 = (uint)fVar24;
              if (uVar25 == uVar28) {
                if ((int)uVar25 < (int)uVar6) {
                  if (uVar25 < uVar6) {
                    uVar28 = uVar25;
                    goto label_05e90ed0;
                  }
                  goto label_05e9124c;
                }
              }
              else {
                if (uVar6 <= uVar25) goto label_05e9124c;
                iVar10 = uVar25 + 1;
                *(float *)((long)&array[2].klass + (long)(int)uVar25 * 4) =
                     ((float)iVar10 - fVar23) * 0.25 +
                     *(float *)((long)&array[2].klass + (long)(int)uVar25 * 4);
                if (iVar10 < (int)uVar28) {
                  uVar13 = (ulong)iVar10;
                  uVar18 = (uVar28 - uVar25) - 2;
                  if (~uVar25 + uVar6 < uVar18) {
                    uVar18 = ~uVar25 + uVar6;
                  }
                  uVar9 = uVar13;
                  if (7 < uVar18) {
                    uVar16 = (ulong)uVar18 + 1;
                    uVar19 = (ulong)((uint)uVar16 & 7);
                    if ((uVar16 & 7) == 0) {
                      uVar19 = 8;
                    }
                    uVar9 = (uVar16 - uVar19) + uVar13;
                    lVar15 = uVar13 * 4;
                    lVar20 = 0;
                    do {
                      pfVar1 = (float *)((long)&array[2].klass + lVar20 * 4 + lVar15);
                      fVar23 = pfVar1[1];
                      fVar29 = pfVar1[2];
                      fVar30 = pfVar1[3];
                      pfVar17 = (float *)((long)&array[3].klass + lVar20 * 4 + lVar15);
                      fVar2 = *pfVar17;
                      fVar3 = pfVar17[1];
                      fVar4 = pfVar17[2];
                      fVar5 = pfVar17[3];
                      pfVar17 = (float *)((long)&array[2].klass + lVar20 * 4 + lVar15);
                      *pfVar17 = *pfVar1 + 0.25;
                      pfVar17[1] = fVar23 + 0.25;
                      pfVar17[2] = fVar29 + 0.25;
                      pfVar17[3] = fVar30 + 0.25;
                      pfVar17 = (float *)((long)&array[3].klass + lVar20 * 4 + lVar15);
                      *pfVar17 = fVar2 + 0.25;
                      pfVar17[1] = fVar3 + 0.25;
                      pfVar17[2] = fVar4 + 0.25;
                      pfVar17[3] = fVar5 + 0.25;
                      lVar20 = lVar20 + 8;
                    } while (uVar16 - uVar19 != lVar20);
                  }
                  pfVar17 = (float *)((long)&array[2].klass + uVar9 * 4);
                  do {
                    if (uVar6 <= (uint)uVar9) goto label_05e9124c;
                    *pfVar17 = *pfVar17 + 0.25;
                    uVar25 = (uint)uVar9 + 1;
                    uVar9 = (ulong)uVar25;
                    pfVar17 = pfVar17 + 1;
                  } while ((int)uVar25 < (int)uVar28);
                }
                if ((int)uVar28 < (int)uVar6) {
                  if (uVar6 <= uVar28) goto label_05e9124c;
                  fVar23 = (float)(int)uVar28;
label_05e90ed0:
                  *(float *)((long)&array[2].klass + (long)(int)uVar28 * 4) =
                       (fVar24 - fVar23) * 0.25 + *(float *)((long)&array[2].klass + (long)(int)uVar28 * 4);
                }
              }
              uVar22 = uVar22 + 2;
              uVar6 = uVar22 | 1;
            } while ((int)uVar6 < (int)length);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
      if (array == (Il2CppObject *)0x0) goto label_05e91251;
      if (colors == (UnityEngine_Color32_array *)0x0) {
        if (*(int *)&array[1].monitor == 0) {
label_05e9124c:
          ThrowIndexOutOfRangeException();
        }
        goto label_05e91251;
      }
      uVar13 = 0;
      do {
        if ((*(uint *)&array[1].monitor <= uVar13) || ((ulong)(uint)colors->max_length <= lVar21 + uVar13))
        goto label_05e9124c;
        fVar23 = *(float *)((long)&array[2].klass + uVar13 * 4);
        fVar24 = 1.0;
        if (fVar23 <= 1.0) {
          fVar24 = fVar23;
        }
        pUVar14[uVar13].fields._overlap_0._at_rgba.rgba =
             (int)(float)(~-(uint)(0.0 <= fVar23) & 0x3f000000 |
                         (uint)(fVar24 * 255.0 + 0.5) & -(uint)(0.0 <= fVar23)) << 0x18 | 0xffffff;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x200);
      lVar12 = lVar12 + 1;
      lVar21 = lVar21 + 0x200;
      pUVar14 = pUVar14 + 0x200;
    } while (lVar12 != 0x200);
    __this = (UnityEngine_Texture_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D)
    ;
    UnityEngine_Texture2D___ctor_68efe30
              ((UnityEngine_Texture2D_o *)__this,0x200,0x200,4,false,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this,0x34,(MethodInfo *)0x0);
      UnityEngine_Texture__set_filterMode(__this,1,(MethodInfo *)0x0);
      UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
      UnityEngine_Texture2D__SetPixels32_68f0850((UnityEngine_Texture2D_o *)__this,colors,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply((UnityEngine_Texture2D_o *)__this,false,true,(MethodInfo *)0x0);
      pUVar8 = UnityEngine_Sprite__Create_68ba620
                         ((UnityEngine_Texture2D_o *)__this,
                          (UnityEngine_Rect_o)(ZEXT816(0x4400000044000000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,512.0,0,0,(MethodInfo *)0x0);
      return pUVar8;
    }
  }
label_05e91251:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$FindCrossings
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__FindCrossings (UnityEngine_Vector2_array* vertices, float y, System_Single_array* crossings, const MethodInfo* method);
// 0x5e91260

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__FindCrossings
                  (UnityEngine_Vector2_array *vertices,float y,System_Single_array *crossings,
                  MethodInfo *method)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (vertices == (UnityEngine_Vector2_array *)0x0) {
label_05e91365:
    ThrowNullReferenceException();
  }
  uVar6 = (uint)vertices->max_length;
  if (0 < (int)uVar6) {
    uVar5 = vertices->max_length & 0xffffffff;
    uVar3 = uVar6 - 1;
    if (crossings != (System_Single_array *)0x0) {
      uVar2 = 0;
      uVar1 = 0;
      while (uVar3 < uVar6) {
        fVar7 = vertices->m_Items[(int)uVar3].fields.y;
        fVar8 = vertices->m_Items[uVar2].fields.x;
        fVar9 = vertices->m_Items[uVar2].fields.y;
        if (y < fVar7 == fVar9 <= y) {
          if ((uint)crossings->max_length <= uVar1) break;
          lVar4 = (long)(int)uVar1;
          uVar1 = uVar1 + 1;
          crossings->m_Items[lVar4] =
               ((vertices->m_Items[(int)uVar3].fields.x - fVar8) * (y - fVar9)) / (fVar7 - fVar9) + fVar8;
        }
        uVar3 = (uint)uVar2;
        uVar2 = uVar2 + 1;
        if (uVar5 == uVar2) {
          return uVar1;
        }
      }
label_05e91360:
      ThrowIndexOutOfRangeException();
    }
    uVar2 = 0;
    do {
      if (uVar6 <= uVar3) goto label_05e91360;
      if (y < vertices->m_Items[(int)uVar3].fields.y == vertices->m_Items[uVar2].fields.y <= y)
      goto label_05e91365;
      uVar3 = (uint)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar5 != uVar2);
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$AddSpanCoverage
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddSpanCoverage (System_Single_array* coverage, float left, float right, float weight, const MethodInfo* method);
// 0x5e91370
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e91471: mov rdx, r8
// asm:   0x5e9147c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddSpanCoverage
               (System_Single_array *coverage,float left,float right,float weight,MethodInfo *method)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  undefined4 in_XMM0_Db;
  float fVar18;
  uint uVar19;
  undefined4 in_XMM1_Db;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if (coverage == (System_Single_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = (uint)coverage->max_length;
  auVar21._0_4_ = (float)(int)uVar2;
  auVar21._4_4_ = auVar21._0_4_;
  auVar21._8_4_ = auVar21._0_4_;
  auVar21._12_4_ = auVar21._0_4_;
  auVar22._4_4_ = right;
  auVar22._0_4_ = left;
  auVar22._8_4_ = in_XMM0_Db;
  auVar22._12_4_ = in_XMM1_Db;
  auVar22 = minps(auVar21,auVar22);
  fVar17 = (float)(-(uint)(0.0 <= left) & auVar22._0_4_);
  fVar18 = (float)(-(uint)(0.0 <= right) & auVar22._4_4_);
  uVar19 = (uint)fVar17;
  uVar20 = (uint)fVar18;
  if (uVar19 == uVar20) {
    if ((int)uVar2 <= (int)uVar19) {
      return;
    }
    if (uVar19 < uVar2) {
      pfVar13 = coverage->m_Items + (int)uVar19;
label_05e914b4:
      *pfVar13 = (fVar18 - fVar17) * weight + *pfVar13;
      return;
    }
  }
  else if (uVar19 < uVar2) {
    iVar9 = uVar19 + 1;
    coverage->m_Items[(int)uVar19] = ((float)iVar9 - fVar17) * weight + coverage->m_Items[(int)uVar19];
    if (iVar9 < (int)uVar20) {
      uVar14 = (ulong)iVar9;
      uVar10 = (uVar20 - uVar19) - 2;
      if (~uVar19 + uVar2 < uVar10) {
        uVar10 = ~uVar19 + uVar2;
      }
      uVar15 = uVar14;
      if (7 < uVar10) {
        uVar16 = (ulong)uVar10 + 1;
        uVar11 = 8;
        if ((uVar16 & 7) != 0) {
          uVar11 = (ulong)((uint)uVar16 & 7);
        }
        uVar15 = (uVar16 - uVar11) + uVar14;
        lVar12 = 0;
        do {
          pfVar1 = coverage->m_Items + uVar14 + lVar12;
          fVar17 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          pfVar13 = coverage->m_Items + uVar14 + lVar12 + 4;
          fVar5 = *pfVar13;
          fVar6 = pfVar13[1];
          fVar7 = pfVar13[2];
          fVar8 = pfVar13[3];
          pfVar13 = coverage->m_Items + uVar14 + lVar12;
          *pfVar13 = *pfVar1 + weight;
          pfVar13[1] = fVar17 + weight;
          pfVar13[2] = fVar3 + weight;
          pfVar13[3] = fVar4 + weight;
          pfVar13 = coverage->m_Items + uVar14 + lVar12 + 4;
          *pfVar13 = fVar5 + weight;
          pfVar13[1] = fVar6 + weight;
          pfVar13[2] = fVar7 + weight;
          pfVar13[3] = fVar8 + weight;
          lVar12 = lVar12 + 8;
        } while (uVar16 - uVar11 != lVar12);
      }
      pfVar13 = coverage->m_Items + uVar15;
      do {
        if (uVar2 <= (uint)uVar15) goto label_05e914ca;
        *pfVar13 = *pfVar13 + weight;
        pfVar13 = pfVar13 + 1;
        uVar19 = (uint)uVar15 + 1;
        uVar15 = (ulong)uVar19;
      } while ((int)uVar19 < (int)uVar20);
    }
    if ((int)uVar2 <= (int)uVar20) {
      return;
    }
    if (uVar20 < uVar2) {
      pfVar13 = coverage->m_Items + (int)uVar20;
      fVar17 = (float)(int)uVar20;
      goto label_05e914b4;
    }
  }
label_05e914ca:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildSandboxArtwork
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildSandboxArtwork (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5e90420

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildSandboxArtwork
               (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  UnityEngine_Object_o *x;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  MethodInfo *in_RCX;
  UnityEngine_Color_o color;
  UnityEngine_Color_o UVar4;
  UnityEngine_Color_o UVar5;
  UnityEngine_Color_o color_00;
  float local_78;
  float fStack_74;
  
  if (Il2CppMethodInitialized_075488a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"sandbox-shadow");
    il2cpp_codegen_initialize_runtime_metadata(&"sandbox-watermark");
    il2cpp_codegen_initialize_runtime_metadata(&"sandbox-face");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    il2cpp_codegen_initialize_runtime_metadata(&"sandbox-accent");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    Il2CppMethodInitialized_075488a6 = '\x01';
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load("gear",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
    __this = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"The Sandbox gear icon could not be loaded.");
    System_InvalidOperationException___ctor_54b9a80(__this,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildSandboxArtwork);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)g_data_01006650;
    color = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                      (pGVar1,"shadow",(UnityEngine_Color_o)(auVar2 << 0x40),(MethodInfo *)0x0);
    pGVar1 = (context->fields).Theme;
    if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      UVar4.fields.b = (float)(int)g_data_0100a440;
      UVar4.fields.a = (float)g_data_0100a440._4_4_;
      UVar4.fields.r = 0.12;
      UVar4.fields.g = 0.62;
      UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (pGVar1,"primary",UVar4,(MethodInfo *)0x0);
      pGVar1 = (context->fields).Theme;
      if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        UVar5.fields.b = (float)(int)g_data_01005870;
        UVar5.fields.a = (float)g_data_01005870._4_4_;
        UVar5.fields.r = (float)(int)g_data_01005870;
        UVar5.fields.g = (float)g_data_01005870._4_4_;
        UVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (pGVar1,"buttonText",UVar5,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
        }
        local_78 = color.fields.b;
        fStack_74 = color.fields.a;
        color_00.fields.a = fStack_74 * 0.5;
        color_00.fields.b = local_78;
        color_00.fields.r = color.fields.r;
        color_00.fields.g = color.fields.g;
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,(UnityEngine_Sprite_o *)x,"sandbox-watermark",
                   (UnityEngine_Vector2_o)0xc258000042780000,126.0,18.0,color_00,in_RCX);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,(UnityEngine_Sprite_o *)x,"sandbox-shadow",
                   (UnityEngine_Vector2_o)0x4228000041400000,100.0,-14.0,color,in_RCX);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,(UnityEngine_Sprite_o *)x,"sandbox-accent",
                   (UnityEngine_Vector2_o)0x423c000040e00000,100.0,-14.0,UVar4,in_RCX);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
                  (parent,(UnityEngine_Sprite_o *)x,"sandbox-face",
                   (UnityEngine_Vector2_o)0x424c0000c0000000,90.0,-14.0,UVar5,in_RCX);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$AddFeaturedArtwork
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork (UnityEngine_RectTransform_o* parent, UnityEngine_Sprite_o* sprite, System_String_o* layer, UnityEngine_Vector2_o position, float size, float angle, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5e907b0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFeaturedArtwork
               (UnityEngine_RectTransform_o *parent,UnityEngine_Sprite_o *sprite,System_String_o *layer,
               UnityEngine_Vector2_o position,float size,float angle,UnityEngine_Color_o color,
               MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  System_String_o *name;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_UI_Image_o *__this_01;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Color_o UVar4;
  UnityEngine_Vector3_Fields local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 local_58 [16];
  float local_48;
  
  local_68 = color.fields._8_8_;
  local_78 = color.fields._0_8_;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = position.fields;
  local_58._12_4_ = in_XMM0_Dd;
  local_48 = size;
  if (Il2CppMethodInitialized_075488a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites-star-");
    Il2CppMethodInitialized_075488a7 = '\x01';
  }
  name = System_String__Concat_52f0320("game-create-root-favorites-star-",layer,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05e90b20:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05e90b2a;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05e90b2a;
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
label_05e90b2a:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this,name,components,(MethodInfo *)0x0);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            if (__this_00->klass != TypeInfo_UnityEngine_RectTransform) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_00);
            }
            UnityEngine_Transform__SetParent_692d510
                      ((UnityEngine_Transform_o *)__this_00,(UnityEngine_Transform_o *)parent,false,
                       (MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax
                      (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMin
                      (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_00,(UnityEngine_Vector2_o)local_58._0_8_,(MethodInfo *)0x0);
            value.fields.y = local_48;
            value.fields.x = local_48;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
            local_88.x = 0.0;
            local_88.y = 0.0;
            local_88.z = angle * 0.017453292;
            value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                                 ((UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
            UnityEngine_Transform__set_localRotation
                      ((UnityEngine_Transform_o *)__this_00,value_00,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar3->klass->vtable)._28_set_ignoreLayout.methodPtr)
                        (pUVar3,true,(pUVar3->klass->vtable)._28_set_ignoreLayout.method);
              __this_01 = UnityEngine_GameObject__GetComponent_object_
                                    (__this,(MethodInfo_353B730 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_01,sprite,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_01,true,(MethodInfo *)0x0);
                UVar4.fields.b = (float)(undefined4)local_68;
                UVar4.fields.a = (float)local_68._4_4_;
                UVar4.fields.r = (float)(undefined4)local_78;
                UVar4.fields.g = (float)local_78._4_4_;
                (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                          (__this_01,UVar4,(__this_01->klass->vtable)._23_set_color.method);
                (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
                return;
              }
            }
          }
        }
        goto label_05e90b20;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


