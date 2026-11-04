// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateChoiceTile.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass14_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* tile, const MethodInfo* method);
// 0x1823ce2f0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ce54f: mov rbx, r13
// asm:   0x1823ce922: mov r8, qword ptr [rip + 0x1cf219f]  ; "profilePreviewBanner"
// asm:   0x1823ce929: mov r9, rsi
// asm:   0x1823ce92c: mov rdx, qword ptr [rip + 0x1ccd695]  ; "Data/ExperiencePreview/GeneralPreview"
// asm:   0x1823ce933: jmp 0x1823cea57
// asm:   0x1823cea4e: mov r9, r12
// asm:   0x1823cea51: mov r8, rbx
// asm:   0x1823cea54: mov rdx, r15

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *tile,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar2;
  System_String_o *style;
  System_String_o *direction;
  bool bVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar11;
  System_String_o *pSVar12;
  float fVar13;
  
  if (Il2CppMethodInitialized_184347d72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_0_Build_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_1_Build_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-background");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"layeredStars");
    il2cpp_codegen_initialize_runtime_metadata(&"-hover");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview");
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
    Il2CppMethodInitialized_184347d72 = '\x01';
  }
  if ((__this->fields).rootChoice != false) {
    pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823cf082;
    (pGVar5->fields).type = "GameCreateChoiceFrame";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"GameCreateChoiceFrame");
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_1823cf082;
    pSVar6 = System_String__Concat_1969e50((pGVar2->fields)._id,"-frame",(MethodInfo *)0x0);
    (pGVar5->fields).id = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).id,pSVar6);
    pSVar7 = (System_String_array *)0x0;
    if ((__this->fields).favoritesChoice != false) {
      pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
      pSVar6 = "layeredStars";
      if (pSVar7 == (System_String_array *)0x0) goto label_1823cf082;
      if ((int)pSVar7->max_length == 0) goto label_1823cf088;
      pSVar7->m_Items[0] = "layeredStars";
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items,pSVar6);
    }
    (pGVar5->fields).options = pSVar7;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).options,pSVar7);
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
    (pGVar5->fields).layout = pGVar10;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar10);
    if (tile == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823cf082;
    Gisketch_Aottg2UI_Code_AottgUi__Add(tile,pGVar5,(MethodInfo *)0x0);
  }
  if ((__this->fields).previewChoice == false) {
label_1823ce818:
    bVar3 = System_String__IsNullOrEmpty((__this->fields).previewSprite,(MethodInfo *)0x0);
    if (bVar3) {
      if (((__this->fields).largeSection == false) || ((__this->fields).favoritesChoice != false))
      goto label_1823cea6e;
      pGVar2 = (__this->fields).__4__this;
      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_1823cf082;
      pSVar12 = System_String__Concat_1969e50((pGVar2->fields)._id,"-background",(MethodInfo *)0x0);
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
      pSVar6 = "Data/ExperiencePreview/GeneralPreview";
      style = "profilePreviewBanner";
    }
    else {
      pGVar2 = (__this->fields).__4__this;
      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_1823cf082;
      pSVar6 = (__this->fields).previewSprite;
      pSVar12 = System_String__Concat_1969e50((pGVar2->fields)._id,"-preview",(MethodInfo *)0x0);
      style = "profilePreviewBanner";
      direction = "Column";
      pSVar7 = (System_String_array *)"Absolute";
      if ((__this->fields).previewChoice == false) {
        pSVar7 = (System_String_array *)0x0;
      }
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      if ((__this->fields).previewChoice == false) {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(128.0,(MethodInfo *)0x0);
      }
      else {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      }
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          (direction,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)pSVar7,
                           (System_String_o *)0x0,0.0,pGVar8,pGVar9,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
    }
    if (tile == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823cf082;
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (tile,pSVar6,style,pSVar12,pGVar10,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
  }
  else {
    pSVar7 = (__this->fields).previewSprites;
    if (pSVar7 == (System_String_array *)0x0) goto label_1823cf082;
    if ((int)pSVar7->max_length < 2) goto label_1823ce818;
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_1);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1_o *)0x0)
    goto label_1823cf082;
    (object->fields).CS___8__locals1 = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this);
    pSVar7 = (__this->fields).previewSprites;
    if (pSVar7 == (System_String_array *)0x0) goto label_1823cf082;
    iVar1 = (int)pSVar7->max_length;
    iVar4 = 4;
    if (iVar1 < 4) {
      iVar4 = 2;
    }
    (object->fields).previewCount = iVar4;
    if (iVar1 < 4) {
      fVar13 = 100.0;
    }
    else {
      fVar13 = 50.0;
    }
    (object->fields).previewHeight = fVar13;
    pUVar11 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar11,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_1_Build_b__2,
               (MethodInfo *)0x0);
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_1823cf082;
    pSVar6 = System_String__Concat_1969e50((pGVar2->fields)._id,"-preview-grid",(MethodInfo *)0x0);
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
    if (tile == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823cf082;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (tile,"clear",(System_Action_AottgUi__o *)pUVar11,pSVar6,pGVar10,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
label_1823cea6e:
  if (((__this->fields).previewChoice == false) ||
     (pSVar6 = "row", (__this->fields).favoritesChoice != false)) {
    pSVar6 = "clear";
  }
  pUVar11 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (pUVar11 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar11 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar11,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_0_Build_b__1,
               (MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)pUVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,pUVar11);
  }
  pGVar2 = (__this->fields).__4__this;
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
    pSVar12 = System_String__Concat_1969e50((pGVar2->fields)._id,"-label",(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
    if ((__this->fields).previewChoice == false) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = 2.0;
    }
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Row","Center","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,4.0,pGVar8,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,fVar13,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                         ,0.0,0.0,(MethodInfo *)0x0);
    if (tile != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (tile,pSVar6,(System_Action_AottgUi__o *)pUVar11,pSVar12,pGVar10,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).__4__this;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
        if ((pGVar2->fields)._select == (System_Action_GisketchActionContext__o *)0x0) {
          if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_1823cf082;
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (tile,5,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                              (pGVar2->fields)._actionId,(pGVar2->fields)._id,(pGVar2->fields)._description,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0);
        }
        else {
          pGVar2 = (__this->fields).__4__this;
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                             (tile,5,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                              (pGVar2->fields)._select,(pGVar2->fields)._id,(pGVar2->fields)._description,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0);
        }
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).style = "clear";
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style,"clear");
          pGVar2 = (__this->fields).__4__this;
          if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
            pSVar6 = (pGVar2->fields)._title;
            (pGVar5->fields).formLabel = pSVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).formLabel,pSVar6);
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
            (pGVar5->fields).layout = pGVar10;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar10);
            pGVar5 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
            Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
            if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar5->fields).type = "GameCreateChoiceHover";
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"GameCreateChoiceHover");
              pGVar2 = (__this->fields).__4__this;
              if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
                pSVar6 = System_String__Concat_1969e50
                                   ((pGVar2->fields)._id,"-hover",(MethodInfo *)0x0);
                (pGVar5->fields).id = pSVar6;
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).id,pSVar6);
                pGVar2 = (__this->fields).__4__this;
                if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
                  pSVar6 = (pGVar2->fields)._title;
                  (pGVar5->fields).text = pSVar6;
                  Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,pSVar6);
                  pGVar2 = (__this->fields).__4__this;
                  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
                    pSVar6 = (pGVar2->fields)._description;
                    (pGVar5->fields).value = pSVar6;
                    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value,pSVar6);
                    pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
                    pGVar2 = (__this->fields).__4__this;
                    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
                      pSVar6 = "-preview";
                      if ((__this->fields).previewChoice == false) {
                        pSVar6 = "-background";
                      }
                      pSVar6 = System_String__Concat_1969e50((pGVar2->fields)._id,pSVar6,(MethodInfo *)0x0);
                      if (pSVar7 != (System_String_array *)0x0) {
                        if ((int)pSVar7->max_length != 0) {
                          pSVar7->m_Items[0] = pSVar6;
                          Il2CppCodeGenWriteBarrier(pSVar7->m_Items,pSVar6);
                          pGVar2 = (__this->fields).__4__this;
                          if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0)
                          goto label_1823cf082;
                          pSVar6 = System_String__Concat_1969e50
                                             ((pGVar2->fields)._id,"-label",(MethodInfo *)0x0);
                          if (1 < (uint)pSVar7->max_length) {
                            pSVar7->m_Items[1] = pSVar6;
                            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 1,pSVar6);
                            pSVar6 = "0";
                            if ((__this->fields).rootChoice != false) {
                              pSVar6 = "1";
                            }
                            if (2 < (uint)pSVar7->max_length) {
                              pSVar7->m_Items[2] = pSVar6;
                              Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 2,pSVar6);
                              pSVar6 = "1";
                              if ((__this->fields).previewChoice != false) {
                                pSVar6 = "0";
                              }
                              if (3 < (uint)pSVar7->max_length) {
                                pSVar7->m_Items[3] = pSVar6;
                                Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 3,pSVar6);
                                (pGVar5->fields).options = pSVar7;
                                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).options,pSVar7);
                                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
                                pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
                                pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                                    ("Column",(System_String_o *)0x0,
                                                     (System_String_o *)0x0,(System_String_o *)0x0,
                                                     (System_String_o *)0x0,0.0,pGVar8,pGVar9,
                                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,
                                                     0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                                (pGVar5->fields).layout = pGVar10;
                                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar10);
                                Gisketch_Aottg2UI_Code_AottgUi__Add(tile,pGVar5,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
label_1823cf088:
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
  }
label_1823cf082:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass14_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0___Build_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x1823cf090

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0___Build_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar1;
  System_String_o *pSVar2;
  System_String_o *id;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347d73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"icon");
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"-icon");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateFavoritesTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_184347d73 = '\x01';
  }
  if ((__this->fields).utility != false) {
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_1823cf1bf;
    pSVar3 = (pGVar1->fields)._icon;
    pSVar2 = System_String__Concat_1969e50((pGVar1->fields)._id,"-icon",(MethodInfo *)0x0);
    if (label == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823cf1bf;
    Gisketch_Aottg2UI_Code_AottgUi__Icon(label,pSVar3,"icon",pSVar2,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) {
    pSVar3 = "header";
    if ((__this->fields).favoritesChoice != false) {
      pSVar3 = "gameCreateFavoritesTitle";
    }
    pSVar2 = (pGVar1->fields)._title;
    id = System_String__Concat_1969e50((pGVar1->fields)._id,"-title",(MethodInfo *)0x0);
    if (label != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (label,pSVar2,pSVar3,id,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_1823cf1bf:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass14_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass14_1$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1___Build_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x1823cf390
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823cf3ec: movaps xmmword ptr [rsp + 0xd0], xmm6
// asm:   0x1823cf3f4: xorps xmm6, xmm6
// asm:   0x1823cf3f7: movaps xmmword ptr [rsp + 0xc0], xmm7
// asm:   0x1823cf3ff: movss xmm7, dword ptr [rip + 0xf8a581]
// asm:   0x1823cf407: mov qword ptr [rsp + 0x108], rbx
// asm:   0x1823cf40f: mov qword ptr [rsp + 0x110], rbp
// asm:   0x1823cf417: mov qword ptr [rsp + 0x118], r14
// asm:   0x1823cf41f: nop 
// asm:   0x1823cf57e: mov rbp, qword ptr [rsp + 0x110]
// asm:   0x1823cf586: mov r14, qword ptr [rsp + 0x118]
// asm:   0x1823cf58e: mov rbx, qword ptr [rsp + 0x108]
// asm:   0x1823cf596: movaps xmm6, xmmword ptr [rsp + 0xd0]
// asm:   0x1823cf59e: movaps xmm7, xmmword ptr [rsp + 0xc0]

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1___Build_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o *pGVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar3;
  System_String_o *sprite;
  System_String_o *str2;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184347d74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview-");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    Il2CppMethodInitialized_184347d74 = '\x01';
  }
  local_res8[0] = 0;
  if (0 < (__this->fields).previewCount) {
    do {
      pGVar1 = (__this->fields).CS___8__locals1;
      if ((pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o *)0x0) ||
         (pSVar2 = (pGVar1->fields).previewSprites, pSVar2 == (System_String_array *)0x0)) {
label_1823cf5b2:
        ThrowNullReferenceException();
      }
      if ((uint)pSVar2->max_length <= local_res8[0]) {
        ThrowIndexOutOfRangeException();
      }
      pGVar3 = (((__this->fields).CS___8__locals1)->fields).__4__this;
      if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *)0x0) goto label_1823cf5b2;
      sprite = pSVar2->m_Items[(int)local_res8[0]];
      pSVar4 = (pGVar3->fields)._id;
      str2 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969b70(pSVar4,"-preview-",str2,(MethodInfo *)0x0);
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
      if (grid == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823cf5b2;
      Gisketch_Aottg2UI_Code_AottgUi__Image
                (grid,sprite,"profilePreviewBanner",pSVar4,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (__this->fields).previewCount);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___cctor (const MethodInfo* method);
// 0x1823c4d00

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347d6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildFrameRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildHoverRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateChoiceHover");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateChoiceFrame");
    Il2CppMethodInitialized_184347d6b = '\x01';
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
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o* __this, System_String_o* id, System_String_o* title, System_String_o* description, System_String_o* actionId, System_String_o* icon, int32_t index, System_String_o* previewSprite, System_Action_GisketchActionContext__o* select, const MethodInfo* method);
// 0x1823c4e30

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this,System_String_o *id,
               System_String_o *title,System_String_o *description,System_String_o *actionId,
               System_String_o *icon,int32_t index,System_String_o *previewSprite,
               System_Action_GisketchActionContext__o *select,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  if (title == (System_String_o *)0x0) {
    title = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title,title);
  if (description == (System_String_o *)0x0) {
    description = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._description = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._description,description);
  (__this->fields)._actionId = actionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actionId,actionId);
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon,icon);
  (__this->fields)._previewSprite = previewSprite;
  (__this->fields)._index = index;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewSprite,previewSprite);
  (__this->fields)._select = select;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._select,select);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__Build (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823c4780
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c49b9: mov eax, ebp
// asm:   0x1823c49bb: jmp 0x1823c49c4
// asm:   0x1823c4ab2: mov rsi, qword ptr [rip + 0x1d29817]  ; "gameCreateFavoritesCard"
// asm:   0x1823c4ab9: jmp 0x1823c4add
// asm:   0x1823c4ad4: jmp 0x1823c4add
// asm:   0x1823c4ad6: mov rsi, qword ptr [rip + 0x1d092c3]  ; "row"

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *direction;
  System_String_o *alignItems;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o *object;
  System_String_array *value;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  System_String_o *pSVar5;
  System_String_o *justify;
  bool bVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_184347d6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
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
    Il2CppMethodInitialized_184347d6c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___c__DisplayClass14_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    bVar1 = System_String__op_Equality((__this->fields)._id,"game-create-root-favorites",(MethodInfo *)0x0);
    (object->fields).favoritesChoice = bVar1;
    pSVar5 = (__this->fields)._id;
    if (pSVar5 != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith(pSVar5,"game-create-category-",(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._id;
      bVar1 = (object->fields).favoritesChoice;
      if (pSVar5 != (System_String_o *)0x0) {
        bVar3 = System_String__StartsWith(pSVar5,"game-create-experience-",(MethodInfo *)0x0);
        if (bVar3) {
          bVar3 = true;
        }
        else {
          pSVar5 = (__this->fields)._id;
          if (pSVar5 == (System_String_o *)0x0) goto label_1823c4cec;
          bVar3 = System_String__StartsWith(pSVar5,"game-create-favorite-",(MethodInfo *)0x0);
        }
        if (bVar2 || bVar1 != false) {
          bVar4 = true;
        }
        else {
          pSVar5 = (__this->fields)._id;
          if (pSVar5 == (System_String_o *)0x0) goto label_1823c4cec;
          bVar4 = System_String__StartsWith(pSVar5,"game-create-subcategory-",(MethodInfo *)0x0);
        }
        (object->fields).largeSection = (bool)(bVar3 | bVar4);
        pSVar5 = (__this->fields)._id;
        if (pSVar5 != (System_String_o *)0x0) {
          bVar4 = System_String__StartsWith(pSVar5,"game-create-root-",(MethodInfo *)0x0);
          bVar6 = false;
          if (bVar4) {
            bVar6 = (object->fields).favoritesChoice == false;
          }
          (object->fields).utility = bVar6;
          (object->fields).rootChoice = bVar6 != false || (object->fields).largeSection != false;
          if (bVar2 || bVar1 != false) {
            bVar3 = true;
          }
          if (bVar3 == false) {
            pSVar5 = (__this->fields)._id;
            if (pSVar5 == (System_String_o *)0x0) goto label_1823c4cec;
            bVar1 = System_String__StartsWith(pSVar5,"game-create-subcategory-",(MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = System_String__IsNullOrEmpty((__this->fields)._previewSprite,(MethodInfo *)0x0);
              bVar1 = !bVar1;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = true;
          }
          (object->fields).previewChoice = bVar1;
          bVar1 = System_String__IsNullOrEmpty((__this->fields)._previewSprite,(MethodInfo *)0x0);
          if ((((object->fields).previewChoice & bVar1) == 0) ||
             (pSVar5 = "Data/ExperiencePreview/GeneralPreview", (object->fields).favoritesChoice != false)) {
            pSVar5 = (__this->fields)._previewSprite;
          }
          (object->fields).previewSprite = pSVar5;
          Il2CppCodeGenWriteBarrier(&(object->fields).previewSprite,pSVar5);
          bVar1 = System_String__IsNullOrEmpty((object->fields).previewSprite,(MethodInfo *)0x0);
          if (bVar1) {
            value = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
          }
          else {
            pSVar5 = (object->fields).previewSprite;
            if (pSVar5 == (System_String_o *)0x0) goto label_1823c4cec;
            value = System_String__Split(pSVar5,0x7c,0,(MethodInfo *)0x0);
          }
          (object->fields).previewSprites = value;
          Il2CppCodeGenWriteBarrier(&(object->fields).previewSprites,value);
          pSVar5 = "gameCreateFavoritesCard";
          if ((((object->fields).favoritesChoice == false) &&
              (pSVar5 = "row", (object->fields).rootChoice != false)) &&
             (pSVar5 = "card", (object->fields).utility != false)) {
            pSVar5 = "row";
          }
          __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (__this_00,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass14_0_Build_b__0
                     ,(MethodInfo *)0x0);
          id = System_String__Concat_1969e50((__this->fields)._id,"-tile",(MethodInfo *)0x0);
          alignItems = "Stretch";
          direction = "Column";
          justify = "Center";
          if ((object->fields).rootChoice == false) {
            justify = "SpaceBetween";
          }
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
          if ((object->fields).largeSection == false) {
            if ((object->fields).utility == false) {
              fVar7 = 220.0;
            }
            else {
              fVar7 = 173.0;
            }
          }
          else {
            fVar7 = 360.0;
          }
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar7,(MethodInfo *)0x0);
          if ((object->fields).rootChoice == false) {
            fVar7 = 14.0;
          }
          else {
            fVar7 = 10.0;
          }
          layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             (direction,justify,alignItems,(System_String_o *)0x0,(System_String_o *)0x0,10.0,
                              width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,fVar7,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,(MethodInfo *)0x0);
          enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                            ("slideLeft","game-create-choices",0.16,0.025,0.02,
                             (__this->fields)._index,(MethodInfo *)0x0);
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (ui,pSVar5,(System_Action_AottgUi__o *)__this_00,id,layout,enter,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1823c4cec:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFavoriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, bool favorite, System_Action_GisketchActionContext__o* toggle, const MethodInfo* method);
// 0x1823c3af0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c3b7c: mov rdi, qword ptr [rip + 0x1cc3495]  ; "Add to favorites"
// asm:   0x1823c3b83: mov rbx, qword ptr [rip + 0x1d38456]  ; "GameCreate.Favorites.Add"

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoriteButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,bool favorite,
          System_Action_GisketchActionContext__o *toggle,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  int32_t variant;
  System_String_o *fallback;
  
  if (Il2CppMethodInitialized_184347d6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove from favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Add to favorites");
    Il2CppMethodInitialized_184347d6d = '\x01';
  }
  pSVar1 = "GameCreate.Favorites.Add";
  fallback = "Add to favorites";
  if (favorite) {
    pSVar1 = "GameCreate.Favorites.Remove";
    fallback = "Remove from favorites";
  }
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,fallback,(MethodInfo *)0x0);
  variant = 0;
  if (!favorite) {
    variant = 5;
  }
  if ((ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                         (ui,variant,"star",toggle,id,pSVar1,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar2->fields).formLabel = pSVar1;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formLabel,pSVar1);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (pGVar2->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,value);
    return pGVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildHoverRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildHoverRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823c4520

bool Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildHoverRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  bool bVar3;
  bool mutedBackground;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this_00;
  System_String_o *title;
  System_String_o *labelId;
  System_String_o *previewId;
  System_String_o *description;
  
  if (Il2CppMethodInitialized_184347d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateChoiceHover);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_184347d6e = '\x01';
  }
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                         ), pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0)) goto label_1823c4770;
  (*(pUVar4->klass->vtable)._28_set_ignoreLayout.methodPtr)
            (pUVar4,true,(pUVar4->klass->vtable)._28_set_ignoreLayout.method);
  pUVar5 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1823c4770;
  pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return true;
  }
  pUVar5 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
  if ((((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
      (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
      __this == (UnityEngine_GameObject_o *)0x0)) ||
     (__this_00 = UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateChoiceHover)
     , node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_1823c4770;
  if (((node->fields).options == (System_String_array *)0x0) ||
     (pSVar2 = (node->fields).options, pSVar2->max_length == 0)) {
    previewId = (System_String_o *)0x0;
    if ((node->fields).options != (System_String_array *)0x0) goto label_1823c468e;
label_1823c46af:
    labelId = (System_String_o *)0x0;
    title = (node->fields).text;
    description = (node->fields).value;
    if ((node->fields).options != (System_String_array *)0x0) goto label_1823c46c2;
label_1823c46ee:
    bVar3 = false;
  }
  else {
    if ((int)pSVar2->max_length == 0) goto label_1823c4776;
    previewId = pSVar2->m_Items[0];
label_1823c468e:
    pSVar2 = (node->fields).options;
    uVar1 = (uint)pSVar2->max_length;
    if ((int)uVar1 < 2) goto label_1823c46af;
    if (uVar1 < 2) goto label_1823c4776;
    labelId = pSVar2->m_Items[1];
    title = (node->fields).text;
    description = (node->fields).value;
label_1823c46c2:
    pSVar2 = (node->fields).options;
    uVar1 = (uint)pSVar2->max_length;
    if ((int)uVar1 < 3) goto label_1823c46ee;
    if (uVar1 < 3) goto label_1823c4776;
    bVar3 = System_String__op_Equality(pSVar2->m_Items[2],"1",(MethodInfo *)0x0);
  }
  if ((node->fields).options == (System_String_array *)0x0) {
label_1823c471f:
    mutedBackground = false;
  }
  else {
    pSVar2 = (node->fields).options;
    uVar1 = (uint)pSVar2->max_length;
    if ((int)uVar1 < 4) goto label_1823c471f;
    if (uVar1 < 4) {
label_1823c4776:
      ThrowIndexOutOfRangeException();
    }
    mutedBackground = System_String__op_Equality(pSVar2->m_Items[3],"1",(MethodInfo *)0x0);
  }
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Setup
              (__this_00,title,description,previewId,labelId,bVar3,mutedBackground,(MethodInfo *)0x0);
    return true;
  }
label_1823c4770:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFrameRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFrameRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823c41f0

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
  UnityEngine_RectTransform_o *parent;
  
  if (Il2CppMethodInitialized_184347d6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"layeredStars");
    Il2CppMethodInitialized_184347d6f = '\x01';
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                         ), pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar3->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar3,true,(pUVar3->klass->vtable)._28_set_ignoreLayout.method);
    pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__GetParent(pUVar4,(MethodInfo *)0x0);
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
         (pUVar4 = UnityEngine_Transform__GetParent(pUVar4,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        __this = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
        if (Il2CppMethodInitialized_184347d7e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame);
          Il2CppMethodInitialized_184347d7e = '\x01';
        }
        value = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite;
        if (value == (UnityEngine_Sprite_o *)0x0) {
          value = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite((MethodInfo *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite = value;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite,value
                    );
        }
        if (__this != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite(__this,value,(MethodInfo *)0x0);
          UnityEngine_UI_Image__set_type(__this,1,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
          if ((((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
               (pUVar4 = UnityEngine_Transform__GetParent(pUVar4,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
              ((__this_00 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar4,
                                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Mask
                                      ), __this_00 != (UnityEngine_UI_Mask_o *)0x0 ||
               ((((pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0),
                  pUVar4 != (UnityEngine_Transform_o *)0x0 &&
                  (pUVar4 = UnityEngine_Transform__GetParent(pUVar4,(MethodInfo *)0x0),
                  pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
                 (__this_01 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
                 __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
                (__this_00 = UnityEngine_GameObject__AddComponent_object_
                                       (__this_01,
                                        (MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_Mask),
                __this_00 != (UnityEngine_UI_Mask_o *)0x0)))))) &&
             (UnityEngine_UI_Mask__set_showMaskGraphic(__this_00,true,(MethodInfo *)0x0),
             node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
            if ((node->fields).options == (System_String_array *)0x0) {
              return true;
            }
            pSVar1 = (node->fields).options;
            if (pSVar1->max_length == 0) {
              return true;
            }
            if ((int)pSVar1->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            bVar2 = System_String__op_Equality(pSVar1->m_Items[0],"layeredStars",(MethodInfo *)0x0);
            if (!bVar2) {
              return true;
            }
            parent = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoritesArtwork
                      (parent,context,(MethodInfo *)0x0);
            return true;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFavoritesArtwork
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoritesArtwork (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1823c3d20

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoritesArtwork
               (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context
               ,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  UnityEngine_Object_o *x;
  UnityEngine_Color_o *pUVar11;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  UnityEngine_Color_Fields local_a8;
  UnityEngine_Color_o local_98 [8];
  
  if (Il2CppMethodInitialized_184347d70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"watermark");
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    il2cpp_codegen_initialize_runtime_metadata(&"accent");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"spark");
    il2cpp_codegen_initialize_runtime_metadata(&"face");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    il2cpp_codegen_initialize_runtime_metadata(&"spark-small");
    Il2CppMethodInitialized_184347d70 = '\x01';
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load("star",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar10) {
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (pGVar4 = (context->fields).Theme, pGVar4 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      local_a8.r = 0.0;
      local_a8.g = 0.0;
      local_a8.b = 0.0;
      local_a8.a = 0.32;
      pUVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (local_98,pGVar4,"shadow",(UnityEngine_Color_o *)&local_a8,
                           (MethodInfo *)0x0);
      pGVar4 = (context->fields).Theme;
      if (pGVar4 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        uVar2._0_4_ = (pUVar11->fields).r;
        uVar2._4_4_ = (pUVar11->fields).g;
        fVar3 = (pUVar11->fields).b;
        fVar1 = (pUVar11->fields).a;
        uVar9._0_4_ = (pUVar11->fields).b;
        uVar9._4_4_ = (pUVar11->fields).a;
        local_a8.r = 0.92;
        local_a8.g = 0.64;
        local_a8.b = 0.08;
        local_a8.a = 1.0;
        pUVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (local_98,pGVar4,"warning",(UnityEngine_Color_o *)&local_a8,
                             (MethodInfo *)0x0);
        pGVar4 = (context->fields).Theme;
        if (pGVar4 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          uVar5._0_4_ = (pUVar11->fields).r;
          uVar5._4_4_ = (pUVar11->fields).g;
          uVar6._0_4_ = (pUVar11->fields).b;
          uVar6._4_4_ = (pUVar11->fields).a;
          local_a8.r = 1.0;
          local_a8.g = 1.0;
          local_a8.b = 1.0;
          local_a8.a = 1.0;
          pUVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                              (local_98,pGVar4,"buttonText",(UnityEngine_Color_o *)&local_a8,
                               (MethodInfo *)0x0);
          uVar7._0_4_ = (pUVar11->fields).r;
          uVar7._4_4_ = (pUVar11->fields).g;
          uVar8._0_4_ = (pUVar11->fields).b;
          uVar8._4_4_ = (pUVar11->fields).a;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
          }
          local_a8.a = fVar1 * 0.5;
          local_a8.b = fVar3;
          local_a8._0_8_ = uVar2;
          Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFavoriteStar
                    (parent,(UnityEngine_Sprite_o *)x,"watermark",
                     (UnityEngine_Vector2_o)0xc30f000042a40000,242.0,-15.0,(UnityEngine_Color_o *)&local_a8,
                     (MethodInfo *)0x0);
          local_a8._0_8_ = uVar2;
          local_a8._8_8_ = uVar9;
          Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFavoriteStar
                    (parent,(UnityEngine_Sprite_o *)x,"shadow",
                     (UnityEngine_Vector2_o)0x42b0000041500000,210.0,8.0,(UnityEngine_Color_o *)&local_a8,
                     (MethodInfo *)0x0);
          local_a8._0_8_ = uVar5;
          local_a8._8_8_ = uVar6;
          Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFavoriteStar
                    (parent,(UnityEngine_Sprite_o *)x,"accent",
                     (UnityEngine_Vector2_o)0x42c4000040000000,210.0,8.0,(UnityEngine_Color_o *)&local_a8,
                     (MethodInfo *)0x0);
          local_a8._0_8_ = uVar7;
          local_a8._8_8_ = uVar8;
          Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFavoriteStar
                    (parent,(UnityEngine_Sprite_o *)x,"face",
                     (UnityEngine_Vector2_o)0x42d00000c1600000,192.0,8.0,(UnityEngine_Color_o *)&local_a8,
                     (MethodInfo *)0x0);
          local_a8._0_8_ = uVar5;
          local_a8._8_8_ = uVar6;
          Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFavoriteStar
                    (parent,(UnityEngine_Sprite_o *)x,"spark",
                     (UnityEngine_Vector2_o)0xc2a60000c29c0000,38.0,-12.0,(UnityEngine_Color_o *)&local_a8,
                     (MethodInfo *)0x0);
          local_a8._0_8_ = uVar7;
          local_a8._8_8_ = uVar8;
          Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFavoriteStar
                    (parent,(UnityEngine_Sprite_o *)x,"spark-small",
                     (UnityEngine_Vector2_o)0xc2f80000c2400000,20.0,12.0,(UnityEngine_Color_o *)&local_a8,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
  __this = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"The Favorites star icon could not be loaded.");
  System_InvalidOperationException___ctor_1b2aec0(__this,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildFavoritesArtwork);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$AddFavoriteStar
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFavoriteStar (UnityEngine_RectTransform_o* parent, UnityEngine_Sprite_o* sprite, System_String_o* layer, UnityEngine_Vector2_o position, float size, float angle, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1823c3720

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__AddFavoriteStar
               (UnityEngine_RectTransform_o *parent,UnityEngine_Sprite_o *sprite,System_String_o *layer,
               UnityEngine_Vector2_o position,float size,float angle,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  System_String_o *name;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Quaternion_o local_58 [3];
  
  if (Il2CppMethodInitialized_184347d71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites-star-");
    Il2CppMethodInitialized_184347d71 = '\x01';
  }
  name = System_String__Concat_1969e50("game-create-root-favorites-star-",layer,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1823c3aa1:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar1);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(__this,name,components,(MethodInfo *)0x0);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            __this_01 = (UnityEngine_RectTransform_o *)0x0;
            if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
              __this_01 = pUVar3;
            }
            if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
            }
            UnityEngine_Transform__SetParent_2f5a7e0
                      ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Transform_o *)parent,false,
                       (MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax
                      (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMin
                      (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchoredPosition(__this_01,position,(MethodInfo *)0x0);
            value.fields.y = size;
            value.fields.x = size;
            UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
            local_68.r = 0.0;
            local_68.g = 0.0;
            local_68.b = angle * 0.017453292;
            pUVar4 = UnityEngine_Quaternion__Internal_FromEulerRad
                               (local_58,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
            local_68.r = (pUVar4->fields).x;
            local_68.g = (pUVar4->fields).y;
            local_68.b = (pUVar4->fields).z;
            local_68.a = (pUVar4->fields).w;
            UnityEngine_Transform__set_localRotation
                      ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Quaternion_o *)&local_68,
                       (MethodInfo *)0x0);
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar5->klass->vtable)._28_set_ignoreLayout.methodPtr)
                        (pUVar5,true,(pUVar5->klass->vtable)._28_set_ignoreLayout.method);
              __this_00 = UnityEngine_GameObject__GetComponent_object_
                                    (__this,(MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_00,sprite,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_00,true,(MethodInfo *)0x0);
                local_68.r = (color->fields).r;
                local_68.g = (color->fields).g;
                local_68.b = (color->fields).b;
                local_68.a = (color->fields).a;
                (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                          (__this_00,(UnityEngine_Color_o *)&local_68,
                           (__this_00->klass->vtable)._23_set_color.method);
                (*(__this_00->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (__this_00,false,(__this_00->klass->vtable)._25_set_raycastTarget.method);
                return;
              }
            }
          }
        }
        goto label_1823c3aa1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


