// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePicker
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreatePicker.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___cctor (const MethodInfo* method);
// 0x5e9c240

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075488f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
    Il2CppMethodInitialized_075488f6 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
              static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o* __this, const MethodInfo* method);
// 0x5e9c2b0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$<InputText>b__11_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___InputText_b__11_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o* __this, TMPro_TMP_InputField_o* item, const MethodInfo* method);
// 0x5e9c2c0

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___InputText_b__11_0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o *__this,
               TMPro_TMP_InputField_o *item,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_075488f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-name");
    Il2CppMethodInitialized_075488f7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (item != (TMPro_TMP_InputField_o *)0x0) {
      __this_00 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Object_o *)0x0) {
        a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,"game-create-preset-save-name",(MethodInfo *)0x0);
        return bVar1;
      }
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x5e9bcb0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e9c350

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075488f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0c0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_075488f8 = '\x01';
  }
  style = "popover";
  __this_00 = (__this->fields).__9__1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0c0
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,"game-create-preset-load-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5e9c4f0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_Action_GisketchActionContext__o *__this_01;
  
  if (Il2CppMethodInitialized_075488f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0c8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0d0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar-left");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Load.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Load.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-title");
    il2cpp_codegen_initialize_runtime_metadata(&"scrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-list");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-description");
    Il2CppMethodInitialized_075488f9 = '\x01';
  }
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (panel,"GameCreate.Presets.Load.Title","header","game-create-preset-load-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (panel,"GameCreate.Presets.Load.Description","text","game-create-preset-load-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "scrollView";
    __this_00 = (__this->fields).__9__2;
    if (__this_00 == (System_Action_AottgUi__o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0c8
                 ,(MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__2 = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                    (System_String_o *)0x0,12.0,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,24.0,8.0,0.0,0.0,0.0,0.0,0.0,
                    1.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                       (panel,pSVar1,__this_00,"game-create-preset-load-list",layout,contentLayout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).value = "scrollbar-left";
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).value);
      pSVar1 = "Common.Back";
      __this_01 = (__this->fields).__9__3;
      if (__this_01 == (System_Action_GisketchActionContext__o *)0x0) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0d0
                   ,(MethodInfo_4A803E0 *)0x0);
        (__this->fields).__9__3 = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3);
      }
      Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                (panel,1,pSVar1,__this_01,"game-create-preset-load-back",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* list, const MethodInfo* method);
// 0x5e9c8c0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *list,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2_o *__this_01;
  System_Action_AottgUi__o *__this_02;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_075488fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_2_Buil
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-entry-");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_075488fa = '\x01';
  }
  pSVar1 = (__this->fields).names;
  if (pSVar1 == (System_String_array *)0x0) {
label_05e9cb5d:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar1->max_length) {
    uVar4 = 0;
    do {
      pGVar3 = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_1
                         );
      System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                     *)0x0) goto label_05e9cb5d;
      (pGVar3->fields).CS___8__locals1 = __this;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).CS___8__locals1);
      if ((uint)pSVar1->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      (pGVar3->fields).name = pSVar1->m_Items[uVar4];
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).name);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_2
                            );
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (__this_01 ==
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2_o *)
          0x0) goto label_05e9cb5d;
      (__this_01->fields).CS___8__locals2 = pGVar3;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).CS___8__locals2);
      pGVar3 = (__this_01->fields).CS___8__locals2;
      if ((pGVar3 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                      *)0x0) ||
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).customNames,
         __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_05e9cb5d;
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)(pGVar3->fields).name,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      (__this_01->fields).canDelete = bVar2;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_02,(Il2CppObject *)__this_01,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_2_Buil
                 ,(MethodInfo_4A81BE0 *)0x0);
      pGVar3 = (__this_01->fields).CS___8__locals2;
      if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                     *)0x0) goto label_05e9cb5d;
      id = System_String__Concat_52f0320("game-create-preset-load-entry-",(pGVar3->fields).name,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,20.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (list == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e9cb5d;
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (list,"default",__this_02,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)pSVar1->max_length);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e9cb90

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_075488fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_075488fb = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
            (__this_00,"game-create-preset-load",true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o* __this, const MethodInfo* method);
// 0x5e9cb70

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_1$$<BuildLoadNodes>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1___BuildLoadNodes_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e9cbf0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1___BuildLoadNodes_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_075488fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"Unable to load game preset: ");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_075488fc = '\x01';
  }
  pSVar4 = (__this->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset(pSVar4,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (__this->fields).CS___8__locals1;
    if (((pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                     *)0x0) &&
        (pGVar2 = (pGVar1->fields).root, pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
       (__this_00 = (pGVar2->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
                (__this_00,"game-create-preset-load",true,(MethodInfo *)0x0);
      pGVar1 = (__this->fields).CS___8__locals1;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                     *)0x0) {
        pGVar2 = (pGVar1->fields).root;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar2,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  pSVar4 = System_String__Concat_52f0320("Unable to load game preset: ",(__this->fields).name,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_1$$<BuildLoadNodes>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1___BuildLoadNodes_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e9cd30

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1___BuildLoadNodes_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o *pGVar1;
  MethodInfo *in_RDX;
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                 *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ConfirmDelete
            ((pGVar1->fields).root,(__this->fields).name,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_2$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2_o* __this, const MethodInfo* method);
// 0x5e9cb80

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_2$$<BuildLoadNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2___BuildLoadNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5e9cd50

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2___BuildLoadNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_2_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_GisketchActionContext__o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o *pGVar7;
  
  if (Il2CppMethodInitialized_075488fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_1_Buil
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_1_Buil_71ca0e0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-load-");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"trashcan");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-delete-");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    Il2CppMethodInitialized_075488fd = '\x01';
  }
  pGVar7 = (__this->fields).CS___8__locals2;
  if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                 *)0x0) {
    pSVar1 = (pGVar7->fields).name;
    pSVar2 = (pGVar7->fields).__9__5;
    if (pSVar2 == (System_Action_GisketchActionContext__o *)0x0) {
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar2,(Il2CppObject *)pGVar7,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_1_Buil
                 ,(MethodInfo_4A803E0 *)0x0);
      (pGVar7->fields).__9__5 = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).__9__5);
      pGVar7 = (__this->fields).CS___8__locals2;
      if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                     *)0x0) goto label_05e9d0e9;
    }
    pSVar3 = System_String__Concat_52f0320("game-create-preset-load-load-",(pGVar7->fields).name,(MethodInfo *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                         (row,1,pSVar1,pSVar2,pSVar3,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).layout = pGVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
        pSVar1 = "trashcan";
        if ((__this->fields).canDelete == false) {
          return;
        }
        pGVar7 = (__this->fields).CS___8__locals2;
        if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                       *)0x0) {
          pSVar2 = (pGVar7->fields).__9__6;
          if (pSVar2 == (System_Action_GisketchActionContext__o *)0x0) {
            pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
            System_Action_GisketchActionContext____ctor
                      (pSVar2,(Il2CppObject *)pGVar7,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_1_Buil_71ca0e0
                       ,(MethodInfo_4A803E0 *)0x0);
            (pGVar7->fields).__9__6 = pSVar2;
            Il2CppCodeGenWriteBarrier(&(pGVar7->fields).__9__6);
            pGVar7 = (__this->fields).CS___8__locals2;
            if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_1_o
                           *)0x0) goto label_05e9d0e9;
          }
          pSVar3 = System_String__Concat_52f0320
                             ("game-create-preset-load-delete-",(pGVar7->fields).name,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          tooltip = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                              ("Common.Delete",(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                             (row,6,pSVar1,pSVar2,pSVar3,tooltip,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,height,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).layout = pGVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
            return;
          }
        }
      }
    }
  }
label_05e9d0e9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x5e9bf10

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass7_0$$<ConfirmDelete>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0___ConfirmDelete_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x5e9d0f0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0___ConfirmDelete_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0_o
                *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075488fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    il2cpp_codegen_initialize_runtime_metadata(&"Unable to delete game preset: ");
    Il2CppMethodInitialized_075488fe = '\x01';
  }
  pSVar3 = (__this->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__DeletePreset(pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields).root;
    if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
              (__this_00,"game-create-preset-load",true,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).root;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar1,(MethodInfo *)0x0);
    return;
  }
  pSVar3 = System_String__Concat_52f0320("Unable to delete game preset: ",(__this->fields).name,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x5e9c000

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e9d220

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075488ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca100
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-content");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_075488ff = '\x01';
  }
  style = "popover";
  __this_00 = (__this->fields).__9__1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca100
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,"game-create-preset-save-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5e9d3c0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_Action_AottgUi__o *__this_00;
  
  if (Il2CppMethodInitialized_07548900 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca108
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-name");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-error");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-title");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-description");
    Il2CppMethodInitialized_07548900 = '\x01';
  }
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (panel,"GameCreate.Presets.Save.Title","header","game-create-preset-save-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (panel,"GameCreate.Presets.Save.Description","text","game-create-preset-save-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->
                       static_fields->_saveError,(MethodInfo *)0x0);
    if (!bVar2) {
      Gisketch_Aottg2UI_Code_AottgUi__Callout
                (panel,3,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->
                         static_fields->_saveError,"game-create-preset-save-error",(MethodInfo *)0x0);
    }
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (panel,"game-create-preset-save-name",pSVar1,0,"inputField",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x28,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value);
      pSVar1 = "clear";
      __this_00 = (__this->fields).__9__2;
      if (__this_00 == (System_Action_AottgUi__o *)0x0) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca108
                   ,(MethodInfo_4A81BE0 *)0x0);
        (__this->fields).__9__2 = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd",(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (panel,pSVar1,__this_00,"game-create-preset-save-actions",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x5e9d7a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_GisketchActionContext__o *pSVar2;
  
  if (Il2CppMethodInitialized_07548901 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca110
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca118
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-save");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_07548901 = '\x01';
  }
  pSVar1 = "Common.Back";
  pSVar2 = (__this->fields).__9__3;
  if (pSVar2 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca110
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__3 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3);
  }
  if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
            (actions,1,pSVar1,pSVar2,"game-create-preset-save-back",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  pSVar1 = "Common.Save";
  pSVar2 = (__this->fields).__9__4;
  if (pSVar2 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca118
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__4 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4);
  }
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
            (actions,0,pSVar1,pSVar2,"game-create-preset-save-save",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e9d940

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_07548902 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_07548902 = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
            (__this_00,"game-create-preset-save",true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext, const MethodInfo* method);
// 0x5e9d9a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0___BuildSaveNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  System_String_o *name;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548903 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_07548903 = '\x01';
  }
  name = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__InputText
                   (actionContext.fields.GameObject,method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  method_00 = (MethodInfo *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->static_fields
  ;
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SavePreset
                    (name,(System_String_o **)method_00,(MethodInfo *)0x0);
  pGVar1 = (__this->fields).root;
  if (bVar2) {
    if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
              (__this_00,"game-create-preset-save",true,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).root;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar1,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ShowSave(pGVar1,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$OpenLoad
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__OpenLoad (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e9b6d0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__OpenLoad
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075488ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_075488ee = '\x01';
    if (Il2CppMethodInitialized_075488f4 != '\0') goto label_05e9b6f8;
label_05e9b7f2:
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488f4 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075488f4 == '\0') goto label_05e9b7f2;
label_05e9b6f8:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05e9b832;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildLoadNodes
                       (root,method_00);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05e9b832:
      ThrowNullReferenceException();
    }
    if ((int)pGVar3->max_length == 1) {
      if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (__this = (root->fields)._Overlays_k__BackingField,
         __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_05e9b832;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                (__this,"game-create-preset-load",pGVar3->m_Items[0],true,true,true,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$OpenSave
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__OpenSave (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e9bad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9bafc: jmp 0x5e9bbea

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__OpenSave
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075488ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488ef = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  }
  else {
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  }
  if (bVar2) {
    if (Il2CppMethodInitialized_075488f4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075488f4 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar2) {
      if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->static_fields->
      _saveError = (System_String_o *)0x0;
      method_00 = (MethodInfo *)0x0;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->
                  static_fields->_saveError);
      Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ShowSave(root,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$BuildLoadNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildLoadNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e9b8c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildLoadNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalCaseSensitiveComparer_o *comparer;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o *__this_00;
  System_String_array *pSVar2;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_Action_AottgUi__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  
  if (Il2CppMethodInitialized_075488f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191710);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_075488f0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 ==
      (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o *)0x0)
  goto label_05e9bac5;
  (__this_00->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__PresetNames((MethodInfo *)0x0);
  (__this_00->fields).names = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).names);
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__CustomPresetNames((MethodInfo *)0x0);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (g_data_075435b6 != '\0') goto label_05e9b9d1;
label_05e9ba95:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    g_data_075435b6 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075435b6 == '\0') goto label_05e9ba95;
label_05e9b9d1:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinal;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb3030
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)pSVar2,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB3030 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191710);
  (__this_00->fields).customNames = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).customNames);
  __this = (__this_00->fields).root;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_02,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil
             ,(MethodInfo_4A81BE0 *)0x0);
  if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                       (__this,"game-create-preset-load",__this_02,"game-create-preset-load",(MethodInfo *)0x0);
    return pGVar3;
  }
label_05e9bac5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$ConfirmDelete
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ConfirmDelete (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* name, const MethodInfo* method);
// 0x5e9bcc0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ConfirmDelete
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *name,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0_o *__this;
  UI_ConfirmPopup_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_075488f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ConfirmPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass7_0_Conf
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.DeleteConfirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot delete game preset without an active menu.");
    Il2CppMethodInitialized_075488f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass7_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass7_0_o
                 *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name);
    (__this->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this->fields).root);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)"Cannot delete game preset without an active menu.",(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 != (UI_BaseMenu_o *)0x0) {
      __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                            ((Il2CppObject *)(pUVar1->fields).ConfirmPopup,
                             (MethodInfo_3488650 *)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ConfirmPopup);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("Common.DeleteConfirm",(MethodInfo *)0x0);
      pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)(__this->fields).name,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass7_0_Conf
                 ,(MethodInfo *)0x0);
      title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("Common.Delete",(MethodInfo *)0x0);
      if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_00,pSVar3,__this_01,title,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$ShowSave
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ShowSave (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e9bc30

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ShowSave
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_075488f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_075488f2 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildSaveNodes
                     (root,method);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05e9bca2:
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length == 1) {
    if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
       (__this = (root->fields)._Overlays_k__BackingField,
       __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_05e9bca2;
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
              (__this,"game-create-preset-save",pGVar1->m_Items[0],true,true,true,0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$BuildSaveNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildSaveNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e9bf20

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildSaveNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_075488f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_075488f3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 !=
      (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass9_0_o *)0x0)
  {
    (__this_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
    __this = (__this_00->fields).root;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil
               ,(MethodInfo_4A81BE0 *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-preset-save",__this_01,"game-create-preset-save",(MethodInfo *)0x0);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__Root (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e9b840

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__Root
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_075488f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488f4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    return pGVar2;
  }
  return (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__InputText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x5e9c010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9c135: jmp 0x5e9c150

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__InputText
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *source_00;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_StaticFields *pGVar3;
  System_Func_TMP_InputField__bool__o *__this;
  TMPro_TMP_InputField_o *x;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_075488f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_TMP_InputField_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c_InputText_b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
    Il2CppMethodInitialized_075488f5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_05e9c22d;
    pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
label_05e9c20b:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    source_00 = UnityEngine_Component__GetComponentsInChildren_object_
                          ((UnityEngine_Component_o *)pUVar2,true,
                           (MethodInfo_34B1260 *)
                           MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
               static_fields;
      __this = pGVar3->__9__11_0;
    }
    else {
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
               static_fields;
      __this = pGVar3->__9__11_0;
    }
    if (__this == (System_Func_TMP_InputField__bool__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c
           )->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)
                   TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
                 static_fields;
      }
      object = (Il2CppObject *)pGVar3->__9;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_TMP_InputField_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c_InputText_b__11_0
                 ,(MethodInfo_4F19300 *)0x0);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
               static_fields;
      pGVar3->__9__11_0 = __this;
      Il2CppCodeGenWriteBarrier(&pGVar3->__9__11_0);
    }
    x = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                  ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                   (System_Func_TSource__bool__o *)__this,
                   (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_TMP_InputField);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) goto label_05e9c20b;
    if ((x != (TMPro_TMP_InputField_o *)0x0) &&
       (pSVar4 = (x->fields).m_Text, pSVar4 != (System_String_o *)0x0)) {
      pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
label_05e9c22d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___cctor (const MethodInfo* method);
// 0x5e9daa0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548904 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    Il2CppMethodInitialized_07548904 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, const MethodInfo* method);
// 0x5e9db10

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<OpenMap>b__13_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___OpenMap_b__13_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5e9db20

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___OpenMap_b__13_0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *name,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<OpenMode>b__14_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___OpenMode_b__14_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e9db30

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___OpenMode_b__14_0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e9db40

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_07548905 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar1 = Map_BuiltinLevels__IsLogicBuiltin(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_4
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e9db90

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548906 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_07548906 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar1 = Map_BuiltinLevels__IsLogicBuiltin(value,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory,
                     "Builtin",(MethodInfo *)0x0);
  return bVar2 == bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_5
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e9dc20

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_5
          (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,MethodInfo *method
          )

{
  System_String_o *sprite;
  System_String_o *label;
  System_String_o *keywords;
  
  if (Il2CppMethodInitialized_07548907 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_07548907 = '\x01';
  }
  label = UI_ContentLocale__ModeName(value,(MethodInfo *)0x0);
  sprite = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  keywords = System_String__Concat_5301f10
                       (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory,
                        " ",value,(MethodInfo *)0x0);
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
            (__return_storage_ptr__,value,label,sprite,keywords,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildAddonNodes>b__18_6
// il2cpp: __f__AnonymousType0_string__int__o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildAddonNodes_b__18_6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, int32_t index, const MethodInfo* method);
// 0x5e9dce0

__f__AnonymousType0_string__int__o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildAddonNodes_b__18_6
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,int32_t index,
          MethodInfo *method)

{
  __f__AnonymousType0_string__int__o *__this_00;
  
  if (Il2CppMethodInitialized_07548908 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_f__AnonymousType0_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_f__AnonymousType0_string_int);
    Il2CppMethodInitialized_07548908 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_f__AnonymousType0_string_int);
  __f__AnonymousType0_object__int____ctor
            ((__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)__this_00,(Il2CppObject *)value,index,
             (MethodInfo_38A7E80 *)MethodInfo_f__AnonymousType0_string_int_ctor);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildCategoryTabs>b__20_0
// il2cpp: Gisketch_Aottg2UI_Game_AottgSubtab_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildCategoryTabs_b__20_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5e9dd50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9ddcd: test bl, bl
// asm:   0x5e9ddcf: je 0x5e9dde3

Gisketch_Aottg2UI_Game_AottgSubtab_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildCategoryTabs_b__20_0
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *category,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  System_String_o *label;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *__this_00;
  
  if (Il2CppMethodInitialized_07548909 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Category.Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Category.Builtin");
    Il2CppMethodInitialized_07548909 = '\x01';
  }
  bVar1 = System_String__op_Equality(category,"Builtin",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  if (bVar1) {
    ppSVar2 = &"GameCreate.Picker.Category.Builtin";
  }
  else {
    ppSVar2 = &"GameCreate.Picker.Category.Custom";
  }
  label = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(*ppSVar2,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
  Gisketch_Aottg2UI_Game_AottgSubtab___ctor(__this_00,category,label,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildTitanSpawnNodes>b__28_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildTitanSpawnNodes_b__28_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5e9de30

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildTitanSpawnNodes_b__28_0
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *name,MethodInfo *method
          )

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754890a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.");
    Il2CppMethodInitialized_0754890a = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("CreateGamePopup.Titans.",name,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildMapNodes>b__30_6
// il2cpp: Gisketch_Aottg2UI_Game_AottgSubtab_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildMapNodes_b__30_6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5e9deb0

Gisketch_Aottg2UI_Game_AottgSubtab_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildMapNodes_b__30_6
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *category,
          MethodInfo *method)

{
  System_String_o *label;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *__this_00;
  
  if (Il2CppMethodInitialized_0754890b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
    Il2CppMethodInitialized_0754890b = '\x01';
  }
  label = UI_ContentLocale__MapCategory(category,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
  Gisketch_Aottg2UI_Game_AottgSubtab___ctor(__this_00,category,label,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildMapNodes>b__30_3
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildMapNodes_b__30_3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e9df10

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildMapNodes_b__30_3
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,
          MethodInfo *method)

{
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<ShowCustomContentManager>b__36_3
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___ShowCustomContentManager_b__36_3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5e9df20

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___ShowCustomContentManager_b__36_3
          (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *sprite;
  
  sprite = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
            (__return_storage_ptr__,name,name,sprite,sprite,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5e9a1a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e9df60

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754890c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker-content");
    Il2CppMethodInitialized_0754890c = '\x01';
  }
  style = "popover";
  __this_00 = (__this->fields).__9__2;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,"game-create-mode-picker-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5e9e100
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9e2cb: jmp 0x5e9e2e6
// asm:   0x5e9e385: jmp 0x5e9e3a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_array *pSVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o *id;
  System_Action_string__o *__this_00;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar3;
  System_Func_T__TResult__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *component;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754890d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_5);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Mode.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker-title");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_0754890d = '\x01';
  }
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (panel,"GameCreate.Picker.Mode.Title","header","game-create-mode-picker-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    id = "game-create-mode-picker";
    pSVar1 = (__this->fields).categories;
    __this_00 = (__this->fields).__9__3;
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory;
    if (__this_00 == (System_Action_string__o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__3
                 ,(MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__3 = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildCategoryTabs
              (panel,id,pSVar1,pSVar4,__this_00,method_00);
    pSVar1 = (__this->fields).modes;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_01 = pGVar3->__9__16_4;
    }
    else {
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_01 = pGVar3->__9__16_4;
    }
    if (__this_01 == (System_Func_string__bool__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pGVar3->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_01,pIVar2,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_4,
                 (MethodInfo_4F19300 *)0x0);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      pGVar3->__9__16_4 = __this_01;
      Il2CppCodeGenWriteBarrier(&pGVar3->__9__16_4);
    }
    source = System_Linq_Enumerable__Where_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__bool__o *)__this_01,
                        (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_02 = (System_Func_T__TResult__o *)pGVar3->__9__16_5;
    }
    else {
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_02 = (System_Func_T__TResult__o *)pGVar3->__9__16_5;
    }
    if (__this_02 == (System_Func_T__TResult__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pGVar3->__9;
      __this_02 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchGridPickerItem)
      ;
      System_Func_object__GisketchGridPickerItem____ctor
                (__this_02,pIVar2,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_5,
                 (MethodInfo_4F19690 *)0x0);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      pGVar3->__9__16_5 = (System_Func_string__GisketchGridPickerItem__o *)__this_02;
      Il2CppCodeGenWriteBarrier(&pGVar3->__9__16_5);
    }
    source_00 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                          (source,(System_Func_TSource__TResult__o *)__this_02,
                           (MethodInfo_34F57F0 *)
                           MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_34FE900 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem)
    ;
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory;
    if (pSVar4 != (System_String_o *)0x0) {
      root = (__this->fields).root;
      pSVar4 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
      component = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModePicker
                            (root,items,pSVar4,(__this->fields).selected,(MethodInfo *)__this_00);
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5e9e490

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *__this,
               System_String_o *category,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_StaticFields *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754890e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_0754890e = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields;
  pGVar1->_modeCategory = category;
  Il2CppCodeGenWriteBarrier(&pGVar1->_modeCategory);
  root = (__this->fields).root;
  nodes = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModeNodes
                    (root,(__this->fields).modes,(__this->fields).selected,in_RCX);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshPicker
            (root,"game-create-mode-picker",nodes,(MethodInfo *)&"game-create-mode-picker");
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x5e9a480

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass17_0$$<BuildModePicker>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0___BuildModePicker_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x5e9e520

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0___BuildModePicker_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_string__o *pSVar2;
  code *vtableDispatch;
  
  if (Il2CppMethodInitialized_0754890f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_0754890f = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
            (__this_00,"game-create-mode-picker",true,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).selected;
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar2->fields).method_code,item.fields.Key,(pSVar2->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5e9a530

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>g__HasBuiltin|0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_g__HasBuiltin_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e9e5a0

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_g__HasBuiltin_0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_07548910 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).builtin;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)value,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e9e5f0

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_07548910 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).builtin;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)value,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e9e640

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_07548911 = '\x01';
  }
  style = "popover";
  __this_00 = (__this->fields).__9__3;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__3
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__3 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,"game-create-addon-picker-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5e9e7e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9eceb: cmp byte ptr [rip + 0x16a9bea], 0
// asm:   0x5e9ecf2: jne 0x5e9ed07
// asm:   0x5e9edc1: jmp 0x5e9ed07

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_array *pSVar1;
  Il2CppObject *object;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Action_string__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar2;
  System_Func_T1__T2__TResult__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar3;
  System_Func_TSource__bool__o *__this_03;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_T__TResult__o *__this_04;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_05;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_06;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548912 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_f__AnonymousType0_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_f__AnonymousType0_string_int_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_f__AnonymousType0_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_f__AnonymousType0_string_int_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_f__AnonymousType0_string_int_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int_f__AnonymousType0_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildAddonNodes_b__18_6);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__9
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-list");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Addons.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-");
    Il2CppMethodInitialized_07548912 = '\x01';
  }
  pSVar4 = "clear";
  __this_00 = (__this->fields).__9__4;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__4
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__4 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,14.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,pSVar4,__this_00,"game-create-addon-picker-header",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar5 = "game-create-addon-picker";
    pSVar1 = (__this->fields).categories;
    __this_01 = (__this->fields).__9__5;
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory;
    if (__this_01 == (System_Action_string__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__5
                 ,(MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__5 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildCategoryTabs
              (panel,pSVar5,pSVar1,pSVar4,__this_01,method_00);
    pSVar1 = (__this->fields).addons;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    __this_02 = (System_Func_T1__T2__TResult__o *)pGVar2->__9__18_6;
    if (__this_02 == (System_Func_T1__T2__TResult__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
        pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      }
      object = (Il2CppObject *)pGVar2->__9;
      __this_02 = (System_Func_T1__T2__TResult__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_string_int_f__AnonymousType0_string_int);
      System_Func_object__int__object____ctor
                (__this_02,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildAddonNodes_b__18_6,
                 (MethodInfo_4F20870 *)0x0);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      pGVar2->__9__18_6 = (System_Func_string__int____f__AnonymousType0_string__int___o *)__this_02;
      Il2CppCodeGenWriteBarrier(&pGVar2->__9__18_6);
    }
    pSVar3 = System_Linq_Enumerable__Select_object__object__34f63f0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__int__TResult__o *)__this_02,
                        (MethodInfo_34F63F0 *)
                        MethodInfo_System_Linq_Enumerable_Select_string_f__AnonymousType0_string_int);
    __this_03 = (System_Func_TSource__bool__o *)(__this->fields).__9__7;
    if (__this_03 == (System_Func_TSource__bool__o *)0x0) {
      __this_03 = (System_Func_TSource__bool__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_f__AnonymousType0_string_int_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_03,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__7
                 ,(MethodInfo_4F19300 *)0x0);
      (__this->fields).__9__7 = (System_Func___f__AnonymousType0_string__int___bool__o *)__this_03;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__7);
    }
    source = System_Linq_Enumerable__Where_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,__this_03,
                        (MethodInfo_3502B70 *)
                        MethodInfo_System_Linq_Enumerable_Where_f__AnonymousType0_string_int);
    __this_04 = (System_Func_T__TResult__o *)(__this->fields).__9__8;
    if (__this_04 == (System_Func_T__TResult__o *)0x0) {
      __this_04 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_f__AnonymousType0_string_int_GisketchGridPickerItem);
      System_Func_object__GisketchGridPickerItem____ctor
                (__this_04,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__8
                 ,(MethodInfo_4F19690 *)0x0);
      (__this->fields).__9__8 =
           (System_Func___f__AnonymousType0_string__int___GisketchGridPickerItem__o *)__this_04;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__8);
    }
    pSVar3 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                       (source,(System_Func_TSource__TResult__o *)__this_04,
                        (MethodInfo_34F57F0 *)
                        MethodInfo_System_Linq_Enumerable_Select_f__AnonymousType0_string_int_GisketchGridPickerItem
                       );
    items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                       (MethodInfo_34FE900 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem)
    ;
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory;
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar4 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_5301f10
                         ("game-create-addon-picker-",pSVar4,"-list",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Picker.Addons.Search",(MethodInfo *)0x0);
      __this_06 = (__this->fields).__9__9;
      if (__this_06 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
        __this_06 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
        System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
                  (__this_06,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__9
                   ,(MethodInfo_4A88DC0 *)0x0);
        (__this->fields).__9__9 = __this_06;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__9);
      }
      if (Il2CppMethodInitialized_075488dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
        Il2CppMethodInitialized_075488dc = '\x01';
      }
      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker)
      ;
      Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
                (__this_05,pSVar4,items,1,620.0,48.0,0.0,0.0,pSVar5,__this_06,500.0,false,true,false,
                 (MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_05,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x5e9edd0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_o *key;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_07548913 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__10
              );
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Addons.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-done");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Done");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_07548913 = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (header,"GameCreate.Picker.Addons.Title","header","game-create-addon-picker-title",(System_String_o *)0x0
               ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    key = "Common.Done";
    __this_00 = (__this->fields).__9__10;
    if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__10
                 ,(MethodInfo_4A803E0 *)0x0);
      (__this->fields).__9__10 = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__10);
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                       (header,0,key,__this_00,"game-create-addon-picker-done",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__10
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__10 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e9efd0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__10
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  System_Action_o *pSVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_07548914 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    Il2CppMethodInitialized_07548914 = '\x01';
  }
  pSVar1 = (__this->fields).completed;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  }
  pGVar2 = (__this->fields).root;
  if ((pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar2->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
            (__this_00,"game-create-addon-picker",true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5e9f040

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               System_String_o *category,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_StaticFields *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  
  if (Il2CppMethodInitialized_07548915 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    Il2CppMethodInitialized_07548915 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields;
  pGVar1->_addonCategory = category;
  Il2CppCodeGenWriteBarrier(&pGVar1->_addonCategory);
  root = (__this->fields).root;
  nodes = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes
                    (root,(__this->fields).addons,(__this->fields).builtin,(__this->fields).isSelected,
                     (__this->fields).toggled,(__this->fields).completed,in_RAX);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshPicker
            (root,"game-create-addon-picker",nodes,(MethodInfo *)&"game-create-addon-picker");
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__7
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, __f__AnonymousType0_string__int__o* item, const MethodInfo* method);
// 0x5e9f0d0

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__7
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               __f__AnonymousType0_string__int__o *item,MethodInfo *method)

{
  System_String_o *item_00;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548916 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_f__AnonymousType0_string_int_get_value);
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_07548916 = '\x01';
  }
  if (item != (__f__AnonymousType0_string__int__o *)0x0) {
    item_00 = (item->fields)._value_i__Field;
    if (Il2CppMethodInitialized_07548910 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      Il2CppMethodInitialized_07548910 = '\x01';
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).builtin;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)item_00,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      bVar2 = System_String__op_Equality
                        (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory,
                         "Builtin",(MethodInfo *)0x0);
      return bVar2 == bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__8
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__8 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, __f__AnonymousType0_string__int__o* item, const MethodInfo* method);
// 0x5e9f190

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__8
          (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
          __f__AnonymousType0_string__int__o *item,MethodInfo *method)

{
  System_Func_int__bool__o *pSVar1;
  System_String_o *keywords;
  char cVar2;
  System_String_o *key;
  System_String_o *pSVar3;
  System_String_o *label;
  int32_t iStack_24;
  
  if (Il2CppMethodInitialized_07548917 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_f__AnonymousType0_string_int_get_index);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_f__AnonymousType0_string_int_get_value);
    il2cpp_codegen_initialize_runtime_metadata(&"  |  ");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Addons.Selected");
    Il2CppMethodInitialized_07548917 = '\x01';
  }
  if (item == (__f__AnonymousType0_string__int__o *)0x0) {
    ThrowNullReferenceException();
  }
  key = System_Int32__ToString(&iStack_24,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).isSelected;
  if (pSVar1 != (System_Func_int__bool__o *)0x0) {
    cVar2 = (*(code *)(pSVar1->fields).invoke_impl)
                      ((pSVar1->fields).method_code,(item->fields)._index_i__Field,(pSVar1->fields).method);
    if (cVar2 != '\0') {
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Picker.Addons.Selected",(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320(pSVar3,"  |  ",(MethodInfo *)0x0);
      goto label_05e9f28e;
    }
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
label_05e9f28e:
  label = System_String__Concat_52f0320(pSVar3,(item->fields)._value_i__Field,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  keywords = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory;
  (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
            (__return_storage_ptr__,key,label,pSVar3,keywords,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__9
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__9 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x5e9f300

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__9
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  System_Action_int__o *pSVar2;
  MethodInfo *in_stack_ffffffffffffffd8;
  int32_t iStack_14;
  
  if (Il2CppMethodInitialized_07548918 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    Il2CppMethodInitialized_07548918 = '\x01';
  }
  iStack_14 = 0;
  bVar1 = System_Int32__TryParse(item.fields.Key,&iStack_14,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (__this->fields).toggled;
    if (pSVar2 == (System_Action_int__o *)0x0) {
      pSVar2 = (System_Action_int__o *)0x0;
    }
    else {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,iStack_14,(pSVar2->fields).method);
      pSVar2 = (__this->fields).toggled;
    }
    root = (__this->fields).root;
    nodes = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes
                      (root,(__this->fields).addons,(__this->fields).builtin,(__this->fields).isSelected,
                       pSVar2,(__this->fields).completed,in_stack_ffffffffffffffd8);
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshPicker
              (root,"game-create-addon-picker",nodes,(MethodInfo *)&"game-create-addon-picker");
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x5e9a7a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass20_0$$<BuildCategoryTabs>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0___BuildCategoryTabs_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* category, const MethodInfo* method);
// 0x5e9f3a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0___BuildCategoryTabs_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *category,
               MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields).changed;
  if (pSVar1 == (System_Action_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,category,(pSVar1->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x5e9b240

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e9f3c0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-content");
    Il2CppMethodInitialized_07548919 = '\x01';
  }
  style = "popover";
  __this_00 = (__this->fields).__9__2;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,"game-create-titan-spawn-picker-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5e9f560
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9f688: mov r14, rbx
// asm:   0x5e9f68b: nop dword ptr [rax + rax]

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_array *pSVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *__this_00;
  System_Action_AottgUi__o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  int iVar6;
  
  if (Il2CppMethodInitialized_0754891a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.TitanSpawns.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-row-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-actions");
    Il2CppMethodInitialized_0754891a = '\x01';
  }
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    iVar6 = 0;
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (panel,"GameCreate.Picker.TitanSpawns.Title","header","game-create-titan-spawn-picker-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).labels;
    pSVar3 = "clear";
    while ("clear" = pSVar3, pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length <= iVar6) {
        pSVar2 = (__this->fields).__9__3;
        if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__3
                     ,(MethodInfo_4A81BE0 *)0x0);
          (__this->fields).__9__3 = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row","FlexEnd",(System_String_o *)0x0,
                            (System_String_o *)0x0,"Wrap",10.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,pSVar3,pSVar2,"game-create-titan-spawn-picker-actions",pGVar5,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *)0x0) break;
      (__this_00->fields).CS___8__locals1 = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).CS___8__locals1);
      (__this_00->fields).index = iVar6;
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__4
                 ,(MethodInfo_4A81BE0 *)0x0);
      pSVar3 = System_Int32__ToString(&(__this_00->fields).index,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320("game-create-titan-spawn-picker-row-",pSVar3,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","SpaceBetween","Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,18.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (panel,"clear",pSVar2,pSVar3,pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      iVar6 = iVar6 + 1;
      pSVar3 = "clear";
      pSVar1 = (__this->fields).labels;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x5e9f930

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_GisketchActionContext__o *pSVar2;
  
  if (Il2CppMethodInitialized_0754891b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-reset");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-autofill");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.TitanSpawns.Autofill");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.TitanSpawns.Reset");
    Il2CppMethodInitialized_0754891b = '\x01';
  }
  pSVar1 = "GameCreate.Picker.TitanSpawns.Reset";
  pSVar2 = (__this->fields).__9__6;
  if (pSVar2 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__6
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__6 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__6);
  }
  if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
            (actions,1,pSVar1,pSVar2,"game-create-titan-spawn-picker-reset",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  pSVar1 = "GameCreate.Picker.TitanSpawns.Autofill";
  pSVar2 = (__this->fields).__9__7;
  if (pSVar2 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__7
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__7 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__7);
  }
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
            (actions,0,pSVar1,pSVar2,"game-create-titan-spawn-picker-autofill",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext, const MethodInfo* method);
// 0x5e9fad0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754891c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754891c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ResetTitanSpawnProbabilities((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshTitanSpawn((__this->fields).root,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext, const MethodInfo* method);
// 0x5e9fb20

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__7
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754891d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754891d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__AutofillTitanSpawnProbabilities((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshTitanSpawn((__this->fields).root,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o* __this, const MethodInfo* method);
// 0x5e9f920

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$<BuildTitanSpawnNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___BuildTitanSpawnNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5e9fb70

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___BuildTitanSpawnNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_Fields *__this_00;
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *pGVar2;
  System_String_array *pSVar3;
  System_Single_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Action_GisketchActionContext__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_Globalization_CultureInfo_o *provider;
  
  if (Il2CppMethodInitialized_0754891e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__5
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-label-");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-input-");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_0754891e = '\x01';
  }
  pGVar2 = (__this->fields).CS___8__locals1;
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).labels, pSVar3 != (System_String_array *)0x0)) {
    __this_00 = &__this->fields;
    if ((uint)pSVar3->max_length <= (uint)__this_00->index) {
label_05e9fe60:
      ThrowIndexOutOfRangeException();
    }
    pSVar6 = pSVar3->m_Items[__this_00->index];
    pSVar5 = System_Int32__ToString(&__this_00->index,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_52f0320("game-create-titan-spawn-picker-label-",pSVar5,(MethodInfo *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (row,pSVar6,"text",pSVar5,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar6 = System_Int32__ToString(&__this_00->index,(MethodInfo *)0x0);
      id = System_String__Concat_52f0320("game-create-titan-spawn-picker-input-",pSVar6,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      pSVar5 = "inputField";
      pSVar6 = "0";
      __this_01 = (__this->fields).__9__5;
      if (__this_01 == (System_Action_GisketchActionContext__o *)0x0) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__5
                   ,(MethodInfo_4A803E0 *)0x0);
        (__this->fields).__9__5 = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5);
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (row,id,pSVar6,2,pSVar5,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,0.2,0,__this_01,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).CS___8__locals1;
      if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *)0x0) &&
         (pSVar4 = (pGVar2->fields).values, pSVar4 != (System_Single_array *)0x0)) {
        uVar1 = (__this->fields).index;
        if ((int)uVar1 < (int)pSVar4->max_length) {
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if ((uint)pSVar4->max_length <= uVar1) goto label_05e9fe60;
          pSVar6 = System_Single__ToString_54d09f0
                             (pSVar4->m_Items + (int)uVar1,(System_IFormatProvider_o *)provider,
                              (MethodInfo *)0x0);
        }
        else {
          pSVar6 = "0";
        }
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).value = pSVar6;
          Il2CppCodeGenWriteBarrier(&(pGVar7->fields).value);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$<BuildTitanSpawnNodes>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___BuildTitanSpawnNodes_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o changeContext, const MethodInfo* method);
// 0x5e9fe70

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___BuildTitanSpawnNodes_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o changeContext,MethodInfo *method)

{
  int32_t index;
  System_String_o *s;
  bool bVar1;
  TMPro_TMP_InputField_o *x;
  System_Globalization_CultureInfo_o *provider;
  System_String_o **ppSVar2;
  float value;
  float local_30;
  float local_2c;
  
  if (Il2CppMethodInitialized_0754891f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754891f = '\x01';
  }
  local_30 = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (TMPro_TMP_InputField_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)changeContext.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (changeContext.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05e9fff7;
    x = UnityEngine_GameObject__GetComponent_object_
                  (changeContext.fields.GameObject,
                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (TMPro_TMP_InputField_o *)0x0) {
label_05e9fff7:
      ThrowNullReferenceException();
    }
    ppSVar2 = &(x->fields).m_Text;
  }
  else if (changeContext.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    ppSVar2 = &((changeContext.fields.Node)->fields).value;
  }
  s = *ppSVar2;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Single__TryParse_54d11a0
                    (s,0xa7,(System_IFormatProvider_o *)provider,&local_30,(MethodInfo *)0x0);
  if (bVar1) {
    index = (__this->fields).index;
    value = local_30;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      local_2c = local_30;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      value = local_2c;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbability(index,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x5e9b360

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>g__ItemCategory|0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_g__ItemCategory_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5ea0000

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_g__ItemCategory_0
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,System_String_o *name,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_07548920 = '\x01';
  }
  if ((__this->fields).showCategories != false) {
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar1 = Map_BuiltinLevels__FindMapCategory(name,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5ea0080

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548921 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker-content");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_07548921 = '\x01';
  }
  style = "popover";
  __this_00 = (__this->fields).__9__2;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__2,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1200.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,"game-create-map-picker-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5ea0220
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ea04cd: jmp 0x5ea04e8
// asm:   0x5ea0690: jmp 0x5ea0a67
// asm:   0x5ea0795: cmp byte ptr [rip + 0x16a20ea], 0
// asm:   0x5ea08a1: xor eax, eax
// asm:   0x5ea08a3: test bl, bl
// asm:   0x5ea08a5: sete cl
// asm:   0x5ea08a8: je 0x5ea0907
// asm:   0x5ea0907: movss xmm0, dword ptr [rip - 0x4eded1b]
// asm:   0x5ea090f: movss dword ptr [rsp + 4], xmm0
// asm:   0x5ea0915: je 0x5ea08b5
// asm:   0x5ea0917: xorps xmm0, xmm0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  float itemHeight;
  float itemWidth;
  char cVar1;
  bool bVar2;
  uint32_t uVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_HashSet_string__o *object;
  bool bVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o *__this_00;
  System_Func_string__AottgSubtab__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar6;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs;
  System_Action_T1__T2__o *__this_02;
  Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this_03;
  System_String_array *pSVar7;
  System_Func_string__IEnumerable_string___o *__this_04;
  System_Func_string__bool__o *__this_05;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Object_array *source_00;
  System_Func_T__TResult__o *__this_06;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_String_o **ppSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_07;
  ulong uVar11;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_08;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar12;
  System_Func_TSource__TKey__o *__this_09;
  float thumbnailWidth;
  float fStack_54;
  
  if (Il2CppMethodInitialized_07548922 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_GetMapNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_SelectMany_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1_BuildMapNodes_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"-custom-list");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Map.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Map.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker-categories");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview-grid");
    Il2CppMethodInitialized_07548922 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o *)0x0)
  goto label_05ea0b86;
  (__this_00->fields).CS___8__locals1 = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).CS___8__locals1);
  if (panel == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05ea0b86;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (panel,"GameCreate.Picker.Map.Title","header","game-create-map-picker-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((__this->fields).showCategories == false) {
label_05ea0695:
    pSVar7 = (__this->fields).categories;
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_IEnumerable_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_04,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapNames,(MethodInfo_4F19B50 *)0x0);
    pSVar6 = System_Linq_Enumerable__SelectMany_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                        (System_Func_TSource__IEnumerable_TResult___o *)__this_04,
                        (MethodInfo_34F71F0 *)MethodInfo_System_Linq_Enumerable_SelectMany_string_string);
    object = (__this->fields).allowed;
    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    if (object == (System_Collections_Generic_HashSet_string__o *)0x0) {
label_05ea0b86:
      ThrowNullReferenceException();
    }
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_05,(Il2CppObject *)object,
               (intptr_t)((Il2CppClass *)object->klass)->vtable[8].method,(MethodInfo_4F19300 *)0x0);
    pSVar7 = (System_String_array *)
             System_Linq_Enumerable__Where_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                        (System_Func_TSource__bool__o *)__this_05,
                        (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
    cVar1 = (__this->fields).showCategories;
  }
  else {
    pSVar7 = (__this->fields).categories;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_01 = pGVar12->__9__30_6;
    }
    else {
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_01 = pGVar12->__9__30_6;
    }
    if (__this_01 == (System_Func_string__AottgSubtab__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
        pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      }
      pIVar4 = (Il2CppObject *)pGVar12->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_AottgSubtab);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_01,pIVar4,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_6,
                 (MethodInfo_4F19B50 *)0x0);
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      pGVar12->__9__30_6 = __this_01;
      Il2CppCodeGenWriteBarrier(&pGVar12->__9__30_6);
    }
    pSVar6 = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                        (System_Func_TSource__TResult__o *)__this_01,
                        (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_AottgSubtab);
    tabs = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_AottgSubtab);
    pSVar10 = "game-create-map-picker-categories";
    pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory;
    __this_02 = (System_Action_T1__T2__o *)(__this->fields).__9__7;
    if (__this_02 == (System_Action_T1__T2__o *)0x0) {
      __this_02 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_string);
      System_Action_GisketchActionContext__object____ctor
                (__this_02,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__7
                 ,(MethodInfo_4A88E80 *)0x0);
      (__this->fields).__9__7 = (System_Action_GisketchActionContext__string__o *)__this_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__7);
    }
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
              (__this_03,pSVar10,tabs,pSVar9,(System_Action_GisketchActionContext__string__o *)__this_02,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_03,(MethodInfo *)0x0);
    if ((__this->fields).showCategories == false) goto label_05ea0695;
    pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar7 = Map_BuiltinLevels__GetMapNames(pSVar9,(MethodInfo *)0x0);
    cVar1 = (__this->fields).showCategories;
  }
  if (cVar1 == '\0') {
    (__this_00->fields).custom = false;
    uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05ea0a61;
  }
  bVar5 = System_String__Equals_52ffe30
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory,
                     "Custom",5,(MethodInfo *)0x0);
  (__this_00->fields).custom = bVar5;
  if (!bVar5) {
    uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05ea0a61;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    __this_09 = (System_Func_TSource__TKey__o *)pGVar12->__9__30_3;
    if (__this_09 == (System_Func_TSource__TKey__o *)0x0) goto label_05ea0ac8;
label_05ea09f9:
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor != 0) goto label_05ea0a10;
label_05ea0b44:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05ea0b56;
label_05ea0a1d:
    uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    __this_09 = (System_Func_TSource__TKey__o *)pGVar12->__9__30_3;
    if (__this_09 != (System_Func_TSource__TKey__o *)0x0) goto label_05ea09f9;
label_05ea0ac8:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    }
    pIVar4 = (Il2CppObject *)pGVar12->__9;
    __this_09 = (System_Func_TSource__TKey__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_09,pIVar4,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_3,
               (MethodInfo_4F19B50 *)0x0);
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    pGVar12->__9__30_3 = (System_Func_string__string__o *)__this_09;
    Il2CppCodeGenWriteBarrier(&pGVar12->__9__30_3);
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) goto label_05ea0b44;
label_05ea0a10:
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05ea0a1d;
label_05ea0b56:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar7 = (System_String_array *)
           System_Linq_Enumerable__OrderBy_object__object__34f2050
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,__this_09,
                      (System_Collections_Generic_IComparer_TKey__o *)
                      TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34F2050 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
  uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
joined_r0x05ea0a61:
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  source = System_Linq_Enumerable__Distinct_object__34e8be0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                      (System_Collections_Generic_IEqualityComparer_TSource__o *)
                      TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  source_00 = System_Linq_Enumerable__ToArray_object_
                        (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  __this_06 = (System_Func_T__TResult__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchGridPickerItem);
  System_Func_object__GisketchGridPickerItem____ctor
            (__this_06,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1_BuildMapNodes_b__4,
             (MethodInfo_4F19690 *)0x0);
  pSVar6 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__TResult__o *)__this_06,
                      (MethodInfo_34F57F0 *)
                      MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
  items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                     (MethodInfo_34FE900 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
  if ((__this_00->fields).custom == false) {
    ppSVar8 = &"-preview-grid";
  }
  else {
    ppSVar8 = &"-custom-list";
  }
  pSVar9 = System_String__Concat_52f0320("game-create-map-picker",*ppSVar8,(MethodInfo *)0x0);
  bVar5 = (__this_00->fields).custom;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar10 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Picker.Map.Search",(MethodInfo *)0x0)
  ;
  __this_07 = (__this->fields).__9__5;
  if (__this_07 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
    __this_07 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem)
    ;
    System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
              (__this_07,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__5,
               (MethodInfo_4A88DC0 *)0x0);
    (__this->fields).__9__5 = __this_07;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5);
  }
  if (bVar5 == false) {
    fStack_54 = 190.0;
    thumbnailWidth = 240.0;
  }
  else {
    fStack_54 = 0.0;
    thumbnailWidth = 0.0;
  }
  uVar11 = (ulong)(bVar5 == false);
  itemHeight = *(float *)(&g_data_0100af78 + uVar11 * 4);
  itemWidth = *(float *)(&g_data_0100aef0 + uVar11 * 4);
  bVar2 = (__this_00->fields).custom;
  __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this_08,pSVar9,items,(uint)(bVar5 == false) * 3 + 1,itemWidth,itemHeight,thumbnailWidth,
             fStack_54,pSVar10,__this_07,700.0,bVar2 == false,true,false,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_08,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* category, const MethodInfo* method);
// 0x5ea0ba0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__7
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *category,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07548923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    Il2CppMethodInitialized_07548923 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory = category;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory);
  root = (__this->fields).root;
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildMapNodes
                     (root,(__this->fields).allowed,(__this->fields).categories,true,(__this->fields).selected
                      ,in_R9);
  if (Il2CppMethodInitialized_075488e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_075488e0 = '\x01';
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)pGVar1->max_length != 1) {
      return;
    }
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (root->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                (__this_00,"game-create-map-picker",pGVar1->m_Items[0],true,true,false,0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x5ea0c80

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_string__string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548924 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_07548924 = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
            (__this_00,"game-create-map-picker",true,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).selected;
  if (pSVar2 == (System_Action_string__string__o *)0x0) {
    return;
  }
  if (Il2CppMethodInitialized_07548920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_07548920 = '\x01';
  }
  if ((__this->fields).showCategories == false) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar3 = Map_BuiltinLevels__FindMapCategory(item.fields.Key,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory;
  }
  (*(code *)(pSVar2->fields).invoke_impl)
            ((pSVar2->fields).method_code,item.fields.Key,pSVar3,(pSVar2->fields).method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o* __this, const MethodInfo* method);
// 0x5ea0b90

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_1$$<BuildMapNodes>b__4
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1___BuildMapNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5ea0d80

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1___BuildMapNodes_b__4
          (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o *__this,System_String_o *name,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *pGVar1;
  System_String_o *sprite;
  System_String_o *keywords;
  
  if ((__this->fields).custom == false) {
    sprite = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite(name,(MethodInfo *)__this);
    pGVar1 = (__this->fields).CS___8__locals1;
  }
  else {
    sprite = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    pGVar1 = (__this->fields).CS___8__locals1;
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07548920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_07548920 = '\x01';
  }
  if ((pGVar1->fields).showCategories == false) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    keywords = Map_BuiltinLevels__FindMapCategory(name,(MethodInfo *)0x0);
  }
  else {
    keywords = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory;
  }
  (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
            (__return_storage_ptr__,name,name,sprite,keywords,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x5877e80

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass31_0$$<MapCategories>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___MapCategories_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5877e90

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___MapCategories_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *__this,
               System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *object;
  bool bVar1;
  System_String_array *source;
  System_Func_string__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_0754518f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    Il2CppMethodInitialized_0754518f = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  source = Map_BuiltinLevels__GetMapNames(category,(MethodInfo *)0x0);
  object = (__this->fields).allowed;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  if (object == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)object,
             (intptr_t)((Il2CppClass *)object->klass)->vtable[8].method,(MethodInfo_4F19300 *)0x0);
  bVar1 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5877f50

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5877f60

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545190 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"-content");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_07545190 = '\x01';
  }
  style = "popover";
  __this_00 = (__this->fields).__9__1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__1
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  id = System_String__Concat_52f0320((__this->fields).id,"-content",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,id,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5878110
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5878470: jmp 0x58784b1

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  System_Action_AottgUi__o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  System_String_array *source;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar7;
  System_Func_T__TResult__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_01;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_02;
  
  if (Il2CppMethodInitialized_07545191 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_ShowCustomContentManager_b__36_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__5
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-list");
    il2cpp_codegen_initialize_runtime_metadata(&"-description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Manager.DeleteInstruction");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Manager.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_07545191 = '\x01';
  }
  pSVar6 = "clear";
  pSVar2 = (__this->fields).__9__2;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-header",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,14.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (panel == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (panel,pSVar6,pSVar2,pSVar3,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode == false)
  {
    pSVar6 = (__this->fields).description;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("GameCreate.Sandbox.Custom.Manager.DeleteInstruction",(MethodInfo *)0x0);
  }
  pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-description",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (panel,pSVar6,"text",pSVar3,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_52f0320((__this->fields).id,"-list",(MethodInfo *)0x0);
  source = (__this->fields).names;
  if (source == (System_String_array *)0x0) {
    source = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    __this_00 = (System_Func_T__TResult__o *)pGVar7->__9__36_3;
  }
  else {
    pGVar7 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->static_fields;
    __this_00 = (System_Func_T__TResult__o *)pGVar7->__9__36_3;
  }
  if (__this_00 == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    }
    object = (Il2CppObject *)pGVar7->__9;
    __this_00 = (System_Func_T__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchGridPickerItem);
    System_Func_object__GisketchGridPickerItem____ctor
              (__this_00,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_ShowCustomContentManager_b__36_3,
               (MethodInfo_4F19690 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    pGVar7->__9__36_3 = (System_Func_string__GisketchGridPickerItem__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__36_3);
  }
  source_00 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this_00,
                         (MethodInfo_34F57F0 *)
                         MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
  items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                     (MethodInfo_34FE900 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.Custom.Manager.Search",(MethodInfo *)0x0);
  __this_01 = (__this->fields).__9__4;
  if (__this_01 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem)
    ;
    System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__4
               ,(MethodInfo_4A88DC0 *)0x0);
    (__this->fields).__9__4 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4);
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this_02,pSVar6,items,1,620.0,48.0,0.0,0.0,pSVar3,__this_01,420.0,false,true,false,
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
  pSVar6 = "clear";
  pSVar2 = (__this->fields).__9__5;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__5
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__5 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5);
  }
  pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-actions",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd",(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (panel,pSVar6,pSVar2,pSVar3,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x5878770

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_07545192 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"-import");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"import");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Import");
    Il2CppMethodInitialized_07545192 = '\x01';
  }
  pSVar1 = (__this->fields).title;
  pSVar2 = System_String__Concat_52f0320((__this->fields).id,"-title",(MethodInfo *)0x0);
  if (header == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (header,pSVar1,"header",pSVar2,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = "Common.Import";
  __this_00 = (__this->fields).__9__6;
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__6
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__6 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__6);
  }
  pSVar2 = System_String__Concat_52f0320((__this->fields).id,"-import",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
            (header,0,pSVar1,__this_00,pSVar2,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"import",(MethodInfo *)0x0)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x58788e0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_o *pSVar2;
  
  pGVar1 = (__this->fields).root;
  if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
            (__this_00,(__this->fields).id,true,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).import;
  if (pSVar2 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x5878930

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_string__o *pSVar2;
  code *vtableDispatch;
  
  if (Il2CppMethodInitialized_07545193 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    Il2CppMethodInitialized_07545193 = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
            (__this_00,(__this->fields).id,true,(MethodInfo *)0x0);
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode == false)
  {
    pSVar2 = (__this->fields).modify;
  }
  else {
    pSVar2 = (__this->fields).delete;
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar2->fields).method_code,item.fields.Key,(pSVar2->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x58789c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5878ace: test bl, bl
// asm:   0x5878ad0: jne 0x5878ae4

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_07545194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__9
              );
    il2cpp_codegen_initialize_runtime_metadata(&"-open-folder");
    il2cpp_codegen_initialize_runtime_metadata(&"trashcan");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Manager.OpenFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"cross");
    il2cpp_codegen_initialize_runtime_metadata(&"-back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"-delete-mode");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_07545194 = '\x01';
  }
  bVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  if (bVar1 == false) {
    ppSVar2 = &"Common.Delete";
  }
  else {
    ppSVar2 = &"Common.Cancel";
  }
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(*ppSVar2,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).__9__7;
  if (pSVar4 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__7
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__7 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__7);
  }
  pSVar5 = System_String__Concat_52f0320((__this->fields).id,"-delete-mode",(MethodInfo *)0x0);
  if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode == false)
  {
    ppSVar2 = &"trashcan";
  }
  else {
    ppSVar2 = &"cross";
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
            (actions,1,pSVar3,pSVar4,pSVar5,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,*ppSVar2,(MethodInfo *)0x0);
  pSVar3 = "GameCreate.Sandbox.Custom.Manager.OpenFolder";
  pSVar4 = (__this->fields).__9__8;
  if (pSVar4 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__8
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__8 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__8);
  }
  pSVar5 = System_String__Concat_52f0320((__this->fields).id,"-open-folder",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
            (actions,1,pSVar3,pSVar4,pSVar5,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"open",(MethodInfo *)0x0)
  ;
  pSVar3 = "Common.Back";
  pSVar4 = (__this->fields).__9__9;
  if (pSVar4 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__9
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__9 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__9);
  }
  pSVar5 = System_String__Concat_52f0320((__this->fields).id,"-back",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
            (actions,1,pSVar3,pSVar4,pSVar5,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5878d00

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__7
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  bool *pbVar1;
  
  if (Il2CppMethodInitialized_07545195 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    Il2CppMethodInitialized_07545195 = '\x01';
  }
  pbVar1 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode;
  *pbVar1 = (bool)(*pbVar1 ^ 1);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowCustomContentManager
            ((__this->fields).root,(__this->fields).id,(__this->fields).title,(__this->fields).description,
             (__this->fields).names,(__this->fields).import,(__this->fields).modify,(__this->fields).delete,
             (__this->fields).openFolder,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__8 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5878d70

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__8
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields).openFolder;
  if (pSVar1 == (System_Action_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__9
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__9 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5878d90

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__9
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  pGVar1 = (__this->fields).root;
  if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
            (__this_00,(__this->fields).id,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5878dc0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x5878de0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__MoveNext (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x5878df0

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__MoveNext
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_Object_o *x;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  
  if (Il2CppMethodInitialized_07545196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545196 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    bVar4 = System_String__IsNullOrEmpty((__this->fields).refreshedAnchorId,(MethodInfo *)0x0);
    if (!bVar4) {
      pGVar2 = (__this->fields).root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pGVar2 = (__this->fields).root;
        if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          ThrowNullReferenceException();
        }
        pGVar3 = (pGVar2->fields)._Screens_k__BackingField;
        if ((pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
           (__this_00 = (pGVar3->fields)._active,
           __this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
          pUVar5 = Gisketch_Aottg2UI_Building_GisketchView__Find
                             (__this_00,(__this->fields).refreshedAnchorId,(MethodInfo *)0x0);
          (__this->fields).anchor = pUVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields).anchor);
        }
      }
    }
    pGVar2 = (__this->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      x = (UnityEngine_Object_o *)(__this->fields).anchor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawn
                  ((__this->fields).root,(__this->fields).anchor,(MethodInfo *)0x0);
      }
    }
  }
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x5878f50

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x5878f60

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26_System_Collections_IE
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x5878fa0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenMap
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenMap (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_array* maps, System_String_o* currentMap, System_String_o* currentCategory, bool showCategories, System_Action_string__string__o* selected, const MethodInfo* method);
// 0x5e98c50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e98d5f: jmp 0x5e98e83
// asm:   0x5e9900a: add rsp, 0x28

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenMap
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_array *maps,
               System_String_o *currentMap,System_String_o *currentCategory,bool showCategories,
               System_Action_string__string__o *selected,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_StaticFields *pGVar2;
  Il2CppObject *object;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar4;
  System_Func_string__bool__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_String_array *categories;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075488d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191710);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMap_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_075488d6 = '\x01';
    if (Il2CppMethodInitialized_075488eb == '\0') goto label_05e98e00;
label_05e98c93:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075488eb != '\0') goto label_05e98c93;
label_05e98e00:
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488eb = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05e9905b;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields;
  pGVar2->_pickerAnchor = context.fields.GameObject;
  Il2CppCodeGenWriteBarrier(&pGVar2->_pickerAnchor);
  if (maps == (System_String_array *)0x0) {
    maps = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e98e6b;
label_05e98d4b:
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    __this_00 = pGVar4->__9__13_0;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e98d4b;
label_05e98e6b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    __this_00 = pGVar4->__9__13_0;
  }
  if (__this_00 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    }
    object = (Il2CppObject *)pGVar4->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMap_b__13_0,
               (MethodInfo_4F19300 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    pGVar4->__9__13_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__13_0);
  }
  method_00 = (MethodInfo *)
              System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)maps,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05e9902b;
label_05e98f1d:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05e98f1d;
label_05e9902b:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  method_01 = MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191710;
  System_Collections_Generic_HashSet_object____ctor_4fb3030
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)method_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB3030 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191710);
  categories = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__MapCategories(__this_01,method_00);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__CategoryFor
                     (currentMap,currentCategory,categories,method_01);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory = pSVar5;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory);
  pGVar6 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildMapNodes
                     (root,__this_01,categories,showCategories,selected,method);
  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05e9905b:
    ThrowNullReferenceException();
  }
  if ((int)pGVar6->max_length == 1) {
    if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
       (__this = (root->fields)._Overlays_k__BackingField,
       __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_05e9905b;
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
              (__this,"game-create-map-picker",pGVar6->m_Items[0],true,true,true,0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenMode
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenMode (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_array* modes, System_Action_string__o* selected, const MethodInfo* method);
// 0x5e995a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9969a: jmp 0x5e997d6
// asm:   0x5e99935: add rsp, 8

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenMode
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_array *modes,
               System_Action_string__o *selected,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_StaticFields *pGVar2;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar4;
  System_Func_string__bool__o *pSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_array *modes_00;
  System_String_o **ppSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075488d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMode_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_075488d7 = '\x01';
    if (Il2CppMethodInitialized_075488eb == '\0') goto label_05e99753;
label_05e995d4:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075488eb != '\0') goto label_05e995d4;
label_05e99753:
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488eb = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05e99944;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields;
  pGVar2->_pickerAnchor = context.fields.GameObject;
  Il2CppCodeGenWriteBarrier(&pGVar2->_pickerAnchor);
  if (modes == (System_String_array *)0x0) {
    modes = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e997be;
label_05e99686:
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    pSVar5 = pGVar4->__9__14_0;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e99686;
label_05e997be:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    pSVar5 = pGVar4->__9__14_0;
  }
  if (pSVar5 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    }
    object = (Il2CppObject *)pGVar4->__9;
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar5,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMode_b__14_0,
               (MethodInfo_4F19300 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
    pGVar4->__9__14_0 = pSVar5;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__14_0);
  }
  source = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)modes,
                      (System_Func_TSource__bool__o *)pSVar5,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  modes_00 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  method_00 = (MethodInfo *)0x0;
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)pSVar5,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin,(MethodInfo_4F19300 *)0x0);
  bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)modes_00,
                     (System_Func_TSource__bool__o *)pSVar5,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
  if (bVar3) {
    ppSVar6 = &"Builtin";
  }
  else {
    ppSVar6 = &"Custom";
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields;
  pGVar2->_modeCategory = *ppSVar6;
  Il2CppCodeGenWriteBarrier(&pGVar2->_modeCategory);
  pGVar7 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModeNodes(root,modes_00,selected,method_00);
  if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05e99944:
    ThrowNullReferenceException();
  }
  if ((int)pGVar7->max_length == 1) {
    if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
       (__this = (root->fields)._Overlays_k__BackingField,
       __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_05e99944;
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
              (__this,"game-create-mode-picker",pGVar7->m_Items[0],context.fields.GameObject,true,false,10.0,true,
               0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenAddons
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenAddons (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_array* addons, System_Func_int__bool__o* isSelected, System_Action_int__o* toggled, System_Action_o* completed, const MethodInfo* method);
// 0x5e99bc0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e99d0a: mov r13, r14
// asm:   0x5e99d0d: jmp 0x5e99e3f

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenAddons
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_array *addons,
               System_Func_int__bool__o *isSelected,System_Action_int__o *toggled,System_Action_o *completed,
               MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_StaticFields *pGVar2;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_array *collection;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Func_string__bool__o *__this_01;
  System_String_o **ppSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  undefined4 in_stack_ffffffffffffff98;
  undefined4 in_stack_ffffffffffffff9c;
  System_String_array *local_48;
  
  if (Il2CppMethodInitialized_075488d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191710);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_075488d8 = '\x01';
    if (Il2CppMethodInitialized_075488eb == '\0') goto label_05e99dba;
label_05e99bff:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075488eb != '\0') goto label_05e99bff;
label_05e99dba:
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488eb = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05e99f7c;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields;
  pGVar2->_pickerAnchor = context.fields.GameObject;
  Il2CppCodeGenWriteBarrier(&pGVar2->_pickerAnchor);
  local_48 = addons;
  if (addons == (System_String_array *)0x0) {
    local_48 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  collection = Map_BuiltinLevels__GetBuiltinAddons((MethodInfo *)0x0);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05e99e0c;
label_05e99cf5:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05e99cf5;
label_05e99e0c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb3030
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB3030 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191710);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  if (__this_00 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)(__this_00->klass->vtable)._8_Contains.method,(MethodInfo_4F19300 *)0x0);
    bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                      ((System_Collections_Generic_IEnumerable_TSource__o *)local_48,
                       (System_Func_TSource__bool__o *)__this_01,
                       (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    if (bVar3) {
      ppSVar4 = &"Builtin";
    }
    else {
      ppSVar4 = &"Custom";
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields;
    pGVar2->_addonCategory = *ppSVar4;
    Il2CppCodeGenWriteBarrier(&pGVar2->_addonCategory);
    pGVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes
                       (root,local_48,__this_00,isSelected,toggled,completed,
                        (MethodInfo *)CONCAT44(in_stack_ffffffffffffff9c,in_stack_ffffffffffffff98));
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      if ((int)pGVar5->max_length == 1) {
        if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
           (__this = (root->fields)._Overlays_k__BackingField,
           __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_05e99f7c;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                  (__this,"game-create-addon-picker",pGVar5->m_Items[0],context.fields.GameObject,true,false,10.0,
                   true,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_05e99f7c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildModeNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModeNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_array* modes, System_Action_string__o* selected, const MethodInfo* method);
// 0x5e99950
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e99aa6: jmp 0x5e99ac1

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModeNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_array *modes,
          System_Action_string__o *selected,MethodInfo *method)

{
  Il2CppObject *object;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  bool hasBuiltin;
  bool hasCustom;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *__this_00;
  System_Func_string__bool__o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar2;
  System_String_array *pSVar3;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075488d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_075488d9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *)0x0) {
    (__this_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
    (__this_00->fields).modes = modes;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).modes);
    (__this_00->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).selected);
    pSVar3 = (__this_00->fields).modes;
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar1,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin,(MethodInfo_4F19300 *)0x0);
    hasBuiltin = System_Linq_Enumerable__Any_object__34dfce0
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                            (System_Func_TSource__bool__o *)pSVar1,
                            (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    pSVar3 = (__this_00->fields).modes;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      pSVar1 = pGVar2->__9__16_0;
    }
    else {
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      pSVar1 = pGVar2->__9__16_0;
    }
    if (pSVar1 == (System_Func_string__bool__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
        pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      }
      object = (Il2CppObject *)pGVar2->__9;
      pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)pSVar1,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_0,
                 (MethodInfo_4F19300 *)0x0);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      pGVar2->__9__16_0 = pSVar1;
      Il2CppCodeGenWriteBarrier(&pGVar2->__9__16_0);
    }
    hasCustom = System_Linq_Enumerable__Any_object__34dfce0
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                           (System_Func_TSource__bool__o *)pSVar1,
                           (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PickerCategories(hasBuiltin,hasCustom,method_00);
    (__this_00->fields).categories = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).categories);
    __this = (__this_00->fields).root;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__1
               ,(MethodInfo_4A81BE0 *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-mode-picker",__this_01,"game-create-mode-picker",(MethodInfo *)0x0);
      return pGVar4;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildModePicker
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPicker_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModePicker (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, System_String_o* suffix, System_Action_string__o* selected, const MethodInfo* method);
// 0x5e9a2c0

Gisketch_Aottg2UI_Code_GisketchGridPicker_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModePicker
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items
          ,System_String_o *suffix,System_Action_string__o *selected,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *__this;
  System_String_o *id;
  System_String_o *searchPlaceholder;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_01;
  
  if (Il2CppMethodInitialized_075488da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0_BuildModePicker_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker-");
    il2cpp_codegen_initialize_runtime_metadata(&"-list");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Mode.Search");
    Il2CppMethodInitialized_075488da = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root);
  (__this->fields).selected = selected;
  Il2CppCodeGenWriteBarrier(&(__this->fields).selected);
  id = System_String__Concat_5301f10("game-create-mode-picker-",suffix,"-list",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  searchPlaceholder =
       Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Picker.Mode.Search",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
  System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0_BuildModePicker_b__0,
             (MethodInfo_4A88DC0 *)0x0);
  if (Il2CppMethodInitialized_075488dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_075488dc = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this_01,id,items,1,620.0,48.0,0.0,0.0,searchPlaceholder,__this_00,500.0,false,true,false,
             (MethodInfo *)0x0);
  return __this_01;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildAddonNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_array* addons, System_Collections_Generic_HashSet_string__o* builtin, System_Func_int__bool__o* isSelected, System_Action_int__o* toggled, System_Action_o* completed, const MethodInfo* method);
// 0x5e99f90

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_array *addons,
          System_Collections_Generic_HashSet_string__o *builtin,System_Func_int__bool__o *isSelected,
          System_Action_int__o *toggled,System_Action_o *completed,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  bool hasBuiltin;
  bool hasCustom;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this_00;
  System_Func_string__bool__o *pSVar1;
  System_String_array *pSVar2;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075488db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_g__HasBuiltin_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    Il2CppMethodInitialized_075488db = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *)0x0) {
    (__this_00->fields).builtin = builtin;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).builtin);
    (__this_00->fields).completed = completed;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).completed);
    (__this_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
    (__this_00->fields).addons = addons;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).addons);
    (__this_00->fields).isSelected = isSelected;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).isSelected);
    (__this_00->fields).toggled = toggled;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toggled);
    pSVar2 = (__this_00->fields).addons;
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar1,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_g__HasBuiltin_0
               ,(MethodInfo_4F19300 *)0x0);
    hasBuiltin = System_Linq_Enumerable__Any_object__34dfce0
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                            (System_Func_TSource__bool__o *)pSVar1,
                            (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    pSVar2 = (__this_00->fields).addons;
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar1,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__1
               ,(MethodInfo_4F19300 *)0x0);
    hasCustom = System_Linq_Enumerable__Any_object__34dfce0
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                           (System_Func_TSource__bool__o *)pSVar1,
                           (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PickerCategories(hasBuiltin,hasCustom,method_00);
    (__this_00->fields).categories = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).categories);
    __this = (__this_00->fields).root;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-addon-picker",__this_01,"game-create-addon-picker",(MethodInfo *)0x0);
      return pGVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildListPicker
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPicker_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildListPicker (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, System_String_o* searchPlaceholder, System_Action_GisketchActionContext__GisketchGridPickerItem__o* selected, const MethodInfo* method);
// 0x5e9a490

Gisketch_Aottg2UI_Code_GisketchGridPicker_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildListPicker
          (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,
          System_String_o *searchPlaceholder,
          System_Action_GisketchActionContext__GisketchGridPickerItem__o *selected,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this;
  
  if (Il2CppMethodInitialized_075488dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_075488dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this,id,items,1,620.0,48.0,0.0,0.0,searchPlaceholder,selected,500.0,false,true,false,
             (MethodInfo *)0x0);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildCategoryTabs
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildCategoryTabs (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_array* categories, System_String_o* selected, System_Action_string__o* changed, const MethodInfo* method);
// 0x5e9a540

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildCategoryTabs
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_array *categories,
               System_String_o *selected,System_Action_string__o *changed,MethodInfo *method)

{
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o *__this;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar1;
  System_Func_string__AottgSubtab__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs;
  System_Action_T1__T2__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this_02;
  
  if (Il2CppMethodInitialized_075488dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildCategoryTabs_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0_BuildCategoryTabs_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"-categories");
    Il2CppMethodInitialized_075488dd = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changed = changed;
    Il2CppCodeGenWriteBarrier(&(__this->fields).changed);
    if (categories != (System_String_array *)0x0) {
      if ((int)categories->max_length < 2) {
        return;
      }
      id_00 = System_String__Concat_52f0320(id,"-categories",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      }
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_00 = pGVar1->__9__20_0;
      if (__this_00 == (System_Func_string__AottgSubtab__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
          pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
        }
        object = (Il2CppObject *)pGVar1->__9;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_AottgSubtab);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this_00,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildCategoryTabs_b__20_0,
                   (MethodInfo_4F19B50 *)0x0);
        pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
        pGVar1->__9__20_0 = __this_00;
        Il2CppCodeGenWriteBarrier(&pGVar1->__9__20_0);
      }
      source = System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)categories,
                          (System_Func_TSource__TResult__o *)__this_00,
                          (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_AottgSubtab);
      tabs = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_AottgSubtab);
      __this_01 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_string);
      System_Action_GisketchActionContext__object____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0_BuildCategoryTabs_b__1
                 ,(MethodInfo_4A88E80 *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
      Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
                (__this_02,id_00,tabs,selected,(System_Action_GisketchActionContext__string__o *)__this_01,
                 (MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$PickerCategories
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PickerCategories (bool hasBuiltin, bool hasCustom, const MethodInfo* method);
// 0x5e9a1b0

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PickerCategories
          (bool hasBuiltin,bool hasCustom,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o **ppSVar2;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_075488de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_075488de = '\x01';
  }
  if ((hasBuiltin) && (hasCustom)) {
    pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    if (pSVar1 == (System_String_array *)0x0) goto label_05e9a2af;
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "Builtin";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
      if ((pSVar1->max_length & 0xfffffffe) != 0) {
        targetAddress = pSVar1->m_Items + 1;
        pSVar1->m_Items[1] = "Custom";
        goto label_05e9a29b;
      }
    }
label_05e9a2aa:
    ThrowIndexOutOfRangeException();
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  if (hasBuiltin) {
    if (pSVar1 == (System_String_array *)0x0) {
label_05e9a2af:
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length == 0) goto label_05e9a2aa;
    ppSVar2 = &"Builtin";
  }
  else {
    if (pSVar1 == (System_String_array *)0x0) goto label_05e9a2af;
    if ((int)pSVar1->max_length == 0) goto label_05e9a2aa;
    ppSVar2 = &"Custom";
  }
  targetAddress = pSVar1->m_Items;
  pSVar1->m_Items[0] = *ppSVar2;
label_05e9a29b:
  Il2CppCodeGenWriteBarrier(targetAddress);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshPicker
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshPicker (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, const MethodInfo* method);
// 0x5e9a7b0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshPicker
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *id,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075488df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488df = '\x01';
  }
  if (nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05e9a896:
    ThrowNullReferenceException();
  }
  if ((int)nodes->max_length == 1) {
    x = (UnityEngine_Object_o *)
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((int)nodes->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        __this = (root->fields)._Overlays_k__BackingField;
        if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                    (__this,id,nodes->m_Items[0],
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor,true,
                     false,10.0,false,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_05e9a896;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshMapPicker
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshMapPicker (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, const MethodInfo* method);
// 0x5e9a8a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshMapPicker
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  
  if (Il2CppMethodInitialized_075488e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_075488e0 = '\x01';
  }
  if (nodes != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)nodes->max_length != 1) {
      return;
    }
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (root->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                (__this,"game-create-map-picker",nodes->m_Items[0],true,true,false,0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenTitanSpawn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawn (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e9a920
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9a933: mov r14, qword ptr [rbx + 8]
// asm:   0x5e9a937: cmp byte ptr [rip + 0x16adfad], 0
// asm:   0x5e9a93e: je 0x5e9a9d6

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawn
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075488e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488e1 = '\x01';
  }
  if (Il2CppMethodInitialized_075488eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488eb = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawn(root,context.fields.GameObject,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenTitanSpawnAfterDropdown
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawnAfterDropdown (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* refreshedAnchorId, const MethodInfo* method);
// 0x5e9ab00

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawnAfterDropdown
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *refreshedAnchorId,
               MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075488e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488e2 = '\x01';
    if (Il2CppMethodInitialized_075488eb != '\0') goto label_05e9ab2e;
label_05e9abef:
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488eb = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075488eb == '\0') goto label_05e9abef;
label_05e9ab2e:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05e9ac3c;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  routine = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame
                      (root,context.fields.GameObject,refreshedAnchorId,in_RCX);
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)root,routine,(MethodInfo *)0x0);
    return;
  }
label_05e9ac3c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowTitanSpawnNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame (Gisketch_Aottg2UI_GisketchUIRoot_o* root, UnityEngine_GameObject_o* anchor, System_String_o* refreshedAnchorId, const MethodInfo* method);
// 0x5e9ac50

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,UnityEngine_GameObject_o *anchor,
          System_String_o *refreshedAnchorId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this;
  
  if (Il2CppMethodInitialized_075488e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26);
    Il2CppMethodInitialized_075488e3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26___ctor
            (__this,0,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root);
  (__this->fields).anchor = anchor;
  Il2CppCodeGenWriteBarrier(&(__this->fields).anchor);
  (__this->fields).refreshedAnchorId = refreshedAnchorId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).refreshedAnchorId);
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowTitanSpawn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawn (Gisketch_Aottg2UI_GisketchUIRoot_o* root, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x5e9aa30

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawn
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_StaticFields *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_075488e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker");
    Il2CppMethodInitialized_075488e4 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields;
  pGVar1->_titanSpawnAnchor = anchor;
  Il2CppCodeGenWriteBarrier(&pGVar1->_titanSpawnAnchor);
  pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes(root,(MethodInfo *)anchor);
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05e9aaee:
    ThrowNullReferenceException();
  }
  if ((int)pGVar2->max_length == 1) {
    if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
       (__this = (root->fields)._Overlays_k__BackingField,
       __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_05e9aaee;
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
              (__this,"game-create-titan-spawn-picker",pGVar2->m_Items[0],
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor,true,
               false,10.0,true,0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildTitanSpawnNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e9acf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9b0de: jmp 0x5e9b0f9

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  Il2CppObject *object;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this_00;
  System_String_array *source;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields *pGVar3;
  System_Func_string__string__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Single_array *pSVar4;
  System_Action_AottgUi__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  
  if (Il2CppMethodInitialized_075488e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildTitanSpawnNodes_b__28_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnJumper");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnAbnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnPunk");
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnNormal");
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnThrower");
    Il2CppMethodInitialized_075488e5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *)0x0)
  goto label_05e9b232;
  (__this_00->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d9 != '\0') goto label_05e9ae80;
label_05e9afac:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d9 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452d9 == '\0') goto label_05e9afac;
label_05e9ae80:
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames;
  source = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if (bVar1 == false) {
    if (source == (System_String_array *)0x0) goto label_05e9b232;
    if ((int)source->max_length == 0) goto label_05e9b22d;
    source->m_Items[0] = "Normal";
    Il2CppCodeGenWriteBarrier(source->m_Items);
    if ((source->max_length & 0xfffffffe) == 0) goto label_05e9b22d;
    source->m_Items[1] = "Abnormal";
    Il2CppCodeGenWriteBarrier(source->m_Items + 1);
    if ((uint)source->max_length < 3) goto label_05e9b22d;
    source->m_Items[2] = "Jumper";
    Il2CppCodeGenWriteBarrier(source->m_Items + 2);
    if ((source->max_length & 0xfffffffc) == 0) goto label_05e9b22d;
    source->m_Items[3] = "Crawler";
    Il2CppCodeGenWriteBarrier(source->m_Items + 3);
    if ((uint)source->max_length < 5) goto label_05e9b22d;
    source->m_Items[4] = "Thrower";
    Il2CppCodeGenWriteBarrier(source->m_Items + 4);
    if ((uint)source->max_length < 6) goto label_05e9b22d;
    source->m_Items[5] = "Punk";
    Il2CppCodeGenWriteBarrier(source->m_Items + 5);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_01 = pGVar3->__9__28_0;
    }
    else {
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      __this_01 = pGVar3->__9__28_0;
    }
    if (__this_01 == (System_Func_string__string__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      }
      object = (Il2CppObject *)pGVar3->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_01,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildTitanSpawnNodes_b__28_0,
                 (MethodInfo_4F19B50 *)0x0);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields;
      pGVar3->__9__28_0 = __this_01;
      Il2CppCodeGenWriteBarrier(&pGVar3->__9__28_0);
    }
    source_00 = System_Linq_Enumerable__Select_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_01,
                           (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
    source = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  }
  else {
    if (source == (System_String_array *)0x0) goto label_05e9b232;
    if ((int)source->max_length == 0) {
label_05e9b22d:
      ThrowIndexOutOfRangeException();
    }
    source->m_Items[0] = "titan.TitanSpawnNormal";
    Il2CppCodeGenWriteBarrier(source->m_Items);
    if ((source->max_length & 0xfffffffe) == 0) goto label_05e9b22d;
    source->m_Items[1] = "titan.TitanSpawnAbnormal";
    Il2CppCodeGenWriteBarrier(source->m_Items + 1);
    if ((uint)source->max_length < 3) goto label_05e9b22d;
    source->m_Items[2] = "titan.TitanSpawnJumper";
    Il2CppCodeGenWriteBarrier(source->m_Items + 2);
    if ((source->max_length & 0xfffffffc) == 0) goto label_05e9b22d;
    source->m_Items[3] = "titan.TitanSpawnCrawler";
    Il2CppCodeGenWriteBarrier(source->m_Items + 3);
    if ((uint)source->max_length < 5) goto label_05e9b22d;
    source->m_Items[4] = "titan.TitanSpawnThrower";
    Il2CppCodeGenWriteBarrier(source->m_Items + 4);
    if ((uint)source->max_length < 6) goto label_05e9b22d;
    source->m_Items[5] = "titan.TitanSpawnPunk";
    Il2CppCodeGenWriteBarrier(source->m_Items + 5);
  }
  (__this_00->fields).labels = source;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).labels);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities((MethodInfo *)0x0);
  (__this_00->fields).values = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).values);
  __this = (__this_00->fields).root;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_02,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__1
             ,(MethodInfo_4A81BE0 *)0x0);
  if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                       (__this,"game-create-titan-spawn-picker",__this_02,"game-create-titan-spawn-picker",(MethodInfo *)0x0);
    return pGVar5;
  }
label_05e9b232:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshTitanSpawn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshTitanSpawn (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e9b250

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshTitanSpawn
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_075488e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker");
    Il2CppMethodInitialized_075488e6 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes(root,method);
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05e9b351:
    ThrowNullReferenceException();
  }
  if ((int)pGVar2->max_length == 1) {
    x = (UnityEngine_Object_o *)
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((int)pGVar2->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        __this = (root->fields)._Overlays_k__BackingField;
        if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                    (__this,"game-create-titan-spawn-picker",pGVar2->m_Items[0],
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor,
                     true,false,10.0,false,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_05e9b351;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildMapNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildMapNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_Collections_Generic_HashSet_string__o* allowed, System_String_array* categories, bool showCategories, System_Action_string__string__o* selected, const MethodInfo* method);
// 0x5e99470

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildMapNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_Collections_Generic_HashSet_string__o *allowed,
          System_String_array *categories,bool showCategories,System_Action_string__string__o *selected,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_075488e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_075488e7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *)0x0) {
    (__this_00->fields).showCategories = showCategories;
    (__this_00->fields).categories = categories;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).categories);
    (__this_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
    (__this_00->fields).allowed = allowed;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).allowed);
    (__this_00->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).selected);
    __this = (__this_00->fields).root;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__1,
               (MethodInfo_4A81BE0 *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-map-picker",__this_01,"game-create-map-picker",(MethodInfo *)0x0);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$MapCategories
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__MapCategories (System_Collections_Generic_HashSet_string__o* allowed, const MethodInfo* method);
// 0x5e990e0

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__MapCategories
          (System_Collections_Generic_HashSet_string__o *allowed,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *__this;
  System_String_array *pSVar1;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  
  if (Il2CppMethodInitialized_075488e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0_MapCategories_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0);
    Il2CppMethodInitialized_075488e8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0
                     );
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).allowed = allowed;
  Il2CppCodeGenWriteBarrier(&(__this->fields).allowed);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar1 = Map_BuiltinLevels__GetMapCategories((MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0_MapCategories_b__0,
             (MethodInfo_4F19300 *)0x0);
  source = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$CategoryFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__CategoryFor (System_String_o* mapName, System_String_o* preferredCategory, System_String_array* categories, const MethodInfo* method);
// 0x5e99200
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9931e: nop 
// asm:   0x5e993af: jmp 0x5e993f5

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__CategoryFor
          (System_String_o *mapName,System_String_o *preferredCategory,System_String_array *categories,
          MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *category;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  System_String_o **ppSVar6;
  
  if (Il2CppMethodInitialized_075488e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_075488e9 = '\x01';
  }
  bVar2 = System_Linq_Enumerable__Contains_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)categories,
                     (Il2CppObject *)preferredCategory,
                     (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
  if (!bVar2) goto label_05e99300;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar3 = Map_BuiltinLevels__GetMapNames(preferredCategory,(MethodInfo *)0x0);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05e992c7;
label_05e99432:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05e99432;
label_05e992c7:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  bVar2 = System_Linq_Enumerable__Contains_object__34e6650
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,(Il2CppObject *)mapName,
                     (System_Collections_Generic_IEqualityComparer_TSource__o *)
                     TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                     (MethodInfo_34E6650 *)MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
  if (bVar2) {
    return preferredCategory;
  }
label_05e99300:
  if (categories == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar4 = categories->max_length;
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      if ((uVar4 & 0xffffffff) <= uVar5) goto label_05e99464;
      category = categories->m_Items[uVar5];
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar3 = Map_BuiltinLevels__GetMapNames(category,(MethodInfo *)0x0);
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
        if (Il2CppMethodInitialized_07542886 != '\0') goto label_05e9936b;
label_05e993ce:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_07542886 = '\x01';
        uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_07542886 == '\0') goto label_05e993ce;
label_05e9936b:
        uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      bVar2 = System_Linq_Enumerable__Contains_object__34e6650
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,(Il2CppObject *)mapName,
                         (System_Collections_Generic_IEqualityComparer_TSource__o *)
                         TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                         (MethodInfo_34E6650 *)MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
      if (bVar2) {
        return category;
      }
      uVar5 = uVar5 + 1;
      uVar4 = categories->max_length;
    } while ((long)uVar5 < (long)(int)uVar4);
  }
  if (uVar4 == 0) {
    ppSVar6 = &"General";
  }
  else {
    if ((int)uVar4 == 0) {
label_05e99464:
      ThrowIndexOutOfRangeException();
    }
    ppSVar6 = categories->m_Items;
  }
  return *ppSVar6;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$PreviewSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite (System_String_o* mapName, const MethodInfo* method);
// 0x5e98340

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite(System_String_o *mapName,MethodInfo *method)

{
  System_String_o *path;
  undefined1 auVar1 [16];
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_String_o *resourcePath;
  System_String_o *name;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Sprite_o *sprite;
  UnityEngine_Sprite_o *local_38;
  
  if (Il2CppMethodInitialized_075488ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"/Previews/");
    il2cpp_codegen_initialize_runtime_metadata(&"Previews/");
    Il2CppMethodInitialized_075488ea = '\x01';
  }
  local_38 = (UnityEngine_Sprite_o *)0x0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  resourcePath = System_String__Concat_5302810
                           (TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps,"/Previews/",
                            mapName,"Preview",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
  }
  bVar2 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                    (resourcePath,&local_38,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps;
    name = System_String__Concat_5301f10
                     ("Previews/",mapName,"Preview",(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    texture = (UnityEngine_Texture2D_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,name,false,false,(MethodInfo *)0x0);
    if ((texture == (UnityEngine_Texture2D_o *)0x0) || (texture->klass != TypeInfo_UnityEngine_Texture2D)) {
      resourcePath = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      iVar3 = (*(TypeInfo_UnityEngine_Texture2D->vtable)._5_get_width.methodPtr)
                        (texture,(TypeInfo_UnityEngine_Texture2D->vtable)._5_get_width.method);
      iVar4 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                        (texture,(texture->klass->vtable)._7_get_height.method);
      auVar1._4_4_ = (float)iVar4;
      auVar1._0_4_ = (float)iVar3;
      auVar1._8_8_ = 0;
      sprite = UnityEngine_Sprite__Create_68ba7d0
                         (texture,(UnityEngine_Rect_o)(auVar1 << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store(resourcePath,sprite,(MethodInfo *)0x0);
    }
  }
  return resourcePath;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__Root (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e99060

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__Root
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_075488eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488eb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    return pGVar2;
  }
  return (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenCustomContentManager
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenCustomContentManager (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, System_String_o* title, System_String_o* description, System_String_array* names, System_Action_o* import, System_Action_string__o* modify, System_Action_string__o* delete, System_Action_o* openFolder, const MethodInfo* method);
// 0x5e9b370
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9b3aa: mov r14, qword ptr [rbx + 8]
// asm:   0x5e9b3ae: cmp byte ptr [rip + 0x16ad536], 0
// asm:   0x5e9b3b5: je 0x5e9b45f
// asm:   0x5e9b426: add rsp, 0x28
// asm:   0x5e9b42a: jmp 0x5e9b4f0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenCustomContentManager
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
               System_String_o *title,System_String_o *description,System_String_array *names,
               System_Action_o *import,System_Action_string__o *modify,System_Action_string__o *delete,
               System_Action_o *openFolder,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075488ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488ec = '\x01';
  }
  if (Il2CppMethodInitialized_075488eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488eb = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x5e9b422;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode = false;
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowCustomContentManager
              (root,id,title,description,names,import,modify,delete,openFolder,method_00);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowCustomContentManager
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowCustomContentManager (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* id, System_String_o* title, System_String_o* description, System_String_array* names, System_Action_o* import, System_Action_string__o* modify, System_Action_string__o* delete, System_Action_o* openFolder, const MethodInfo* method);
// 0x5e9b500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9b6b5: add rsp, 0x18

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowCustomContentManager
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *id,System_String_o *title,
               System_String_o *description,System_String_array *names,System_Action_o *import,
               System_Action_string__o *modify,System_Action_string__o *delete,System_Action_o *openFolder,
               MethodInfo *method)

{
  System_String_o **targetAddress;
  Gisketch_Aottg2UI_GisketchUIRoot_o **targetAddress_00;
  System_String_o *ownerId;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_075488ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0);
    Il2CppMethodInitialized_075488ed = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *)0x0) {
    (__this_00->fields).title = title;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).title);
    targetAddress = &(__this_00->fields).id;
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(targetAddress);
    targetAddress_00 = &(__this_00->fields).root;
    (__this_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    (__this_00->fields).import = import;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).import);
    (__this_00->fields).description = description;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).description);
    (__this_00->fields).names = names;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).names);
    (__this_00->fields).delete = delete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).delete);
    (__this_00->fields).modify = modify;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).modify);
    (__this_00->fields).openFolder = openFolder;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).openFolder);
    ownerId = (__this_00->fields).id;
    pGVar1 = (__this_00->fields).root;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar2 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                           (pGVar1,ownerId,__this_01,*targetAddress,(MethodInfo *)0x0),
       pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
      if ((int)pGVar2->max_length == 1) {
        pGVar1 = *targetAddress_00;
        if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
           (__this = (pGVar1->fields)._Overlays_k__BackingField,
           __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_05e9b6c4;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                  (__this,*targetAddress,pGVar2->m_Items[0],true,true,true,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_05e9b6c4:
  ThrowNullReferenceException();
}


