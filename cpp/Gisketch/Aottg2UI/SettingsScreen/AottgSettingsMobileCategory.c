// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsMobileCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow.<>c__DisplayClass2_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x5e49390

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow.<>c__DisplayClass2_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0___Build_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5e493a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0___Build_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int32_t role;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *value;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  System_String_o *pSVar6;
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (Il2CppMethodInitialized_07548609 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_c__DisplayClass2_0_Build_71ca128
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"mobile.layout.open");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"settingLabel");
    Il2CppMethodInitialized_07548609 = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,(__this->fields).label,"settingLabel",(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o *)0x0) {
        pSVar6 = (__this->fields).id;
        role = (pGVar1->fields)._role;
        if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
        }
        value = UI_MobileInputLayoutManager__GetSelectedLayoutName(role,(MethodInfo *)0x0);
        options = (__this->fields).choices;
        __this_00 = (__this->fields).__9__1;
        if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (__this_00,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_c__DisplayClass2_0_Build_71ca128
                     ,(MethodInfo_4A803E0 *)0x0);
          (__this->fields).__9__1 = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
        }
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268fb0
                           (row,pSVar6,value,options,__this_00,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row","Center","Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).layout = pGVar4;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                             (row,3,"Common.Edit","mobile.layout.open",(System_String_o *)0x0,
                              (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              (System_String_o *)0x0,(MethodInfo *)0x0);
          pGVar1 = (__this->fields).__4__this;
          if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o *)0x0) {
            SStack_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
            SStack_48.monitor = (void *)0xffffffffffffffff;
            iStack_38 = (pGVar1->fields)._role;
            pSVar6 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar2->fields).value = pSVar6;
              Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
              pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(140.0,(MethodInfo *)0x0);
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar3,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              (pGVar2->fields).layout = pGVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow.<>c__DisplayClass2_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0___Build_b__1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e497f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0___Build_b__1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int32_t role;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o *pGVar1;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_0754860a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_0754860a = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if ((pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o *)0x0) ||
     (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    ThrowNullReferenceException();
  }
  role = (pGVar1->fields)._role;
  name = ((context.fields.Node)->fields).value;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  UI_MobileInputLayoutManager__SetSelectedLayoutName(role,name,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o* __this, int32_t role, const MethodInfo* method);
// 0x5e48eb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o *__this,int32_t role,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._role = role;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e48f80

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0_o *__this_00;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this_01;
  System_Action_AottgUi__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  ulong uVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array **targetAddress;
  long lVar6;
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (Il2CppMethodInitialized_07548608 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_c__DisplayClass2_0_Build
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_c__DisplayClass2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-layout-");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_07548608 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_c__DisplayClass2_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 !=
      (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow___c__DisplayClass2_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    SStack_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
    SStack_48.monitor = (void *)0xffffffffffffffff;
    iStack_38 = (__this->fields)._role;
    pSVar2 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_52f0320("settings-mobile-layout-",pSVar2,(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    pSVar2 = UI_MobileInputLayoutUtil__GetRoleLabel((__this->fields)._role,(MethodInfo *)0x0);
    (__this_00->fields).label = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).label);
    iVar1 = (__this->fields)._role;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    pSVar3 = UI_MobileInputLayoutManager__GetLayoutNames(iVar1,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,
                          (uint32_t)pSVar3->max_length);
      targetAddress = &(__this_00->fields).choices;
      (__this_00->fields).choices = pGVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
      if (0 < (int)pSVar3->max_length) {
        lVar6 = 0x20;
        uVar5 = 0;
        do {
          pGVar4 = *targetAddress;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition
                                );
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_01,(MethodInfo *)0x0);
          if ((uint)pSVar3->max_length <= uVar5) {
label_05e49377:
            ThrowIndexOutOfRangeException();
          }
          if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_05e4937c;
          (__this_01->fields).value = *(System_String_o **)((long)pSVar3->m_Items + lVar6 + -0x20);
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).value);
          if ((uint)pSVar3->max_length <= uVar5) goto label_05e49377;
          iVar1 = (__this->fields)._role;
          pSVar2 = *(System_String_o **)((long)pSVar3->m_Items + lVar6 + -0x20);
          if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
          }
          pSVar2 = UI_MobileInputLayoutManager__GetLayoutDisplayName(iVar1,pSVar2,(MethodInfo *)0x0);
          (__this_01->fields).text = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).text);
          if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_05e4937c;
          if ((uint)pGVar4->max_length <= uVar5) goto label_05e49377;
          *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o **)((long)pGVar4->m_Items + lVar6 + -0x20)
               = __this_01;
          Il2CppCodeGenWriteBarrier((void **)((long)pGVar4->m_Items + lVar6 + -0x20));
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 8;
        } while ((long)uVar5 < (long)(int)pSVar3->max_length);
      }
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_02,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_c__DisplayClass2_0_Build
                 ,(MethodInfo_4A81BE0 *)0x0);
      pSVar2 = System_String__Concat_52f0320((__this_00->fields).id,"-row",(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_02,pSVar2,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05e4937c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c___cctor (const MethodInfo* method);
// 0x5e49870

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754860b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c);
    Il2CppMethodInitialized_0754860b = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_o* __this, const MethodInfo* method);
// 0x5e498e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.<>c$$<Groups>b__2_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c___Groups_b__2_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e498f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c___Groups_b__2_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754860c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_0754860c = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
    return;
  }
  Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.<>c$$<Groups>b__2_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c___Groups_b__2_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e49950

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c___Groups_b__2_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754860d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_0754860d = '\x01';
    uVar1 = (TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    UI_MobileInputLayoutManager__RefreshControls((MethodInfo *)0x0);
    return;
  }
  UI_MobileInputLayoutManager__RefreshControls((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e48200

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)ui;
  if (g_data_07548606 == '\0') {
    method_00 = &"mobile";
    il2cpp_codegen_initialize_runtime_metadata(&"mobile");
    g_data_07548606 = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory__Groups((MethodInfo *)method_00);
  categoryId = "mobile";
  if (Il2CppMethodInitialized_075485a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_075485a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,context,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e48e90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory__Groups((MethodInfo *)root);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory__Groups (const MethodInfo* method);
// 0x5e482d0
// eh: try 0x5e485cf..0x5e48e16 -> pad 0x5e48e43 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5e48e5e..0x5e48e63 -> pad 0x5e48e68 cleanup
// eh: try 0x5e48e6b..0x5e48e75 -> pad 0x5e48e7d catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4859c: lea r15, [rip + 0x1430e55]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5e485a3: lea r13, [rip + 0x1437cd6]  ; TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow
// asm:   0x5e485aa: lea r14, [rip + 0x144adc7]  ; MethodInfo_System_Collections_Generic_List_AottgComponent_Add
// asm:   0x5e485b1: jmp 0x5e485e8
// asm:   0x5e485da: mov rbx, qword ptr [rsp + 8]
// asm:   0x5e485df: test rbx, rbx
// asm:   0x5e485e2: je 0x5e48dff
// asm:   0x5e48e2f: mov rdi, r12
// asm:   0x5e48e32: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e48e37: jmp 0x5e48e43
// asm:   0x5e48e39: jmp 0x5e48e43
// asm:   0x5e48e3b: jmp 0x5e48e43
// asm:   0x5e48e3d: jmp 0x5e48e43
// asm:   0x5e48e3f: jmp 0x5e48e43
// asm:   0x5e48e41: jmp 0x5e48e43
// asm:   0x5e48e43: mov rbx, rax
// asm:   0x5e48e46: cmp edx, 1
// asm:   0x5e48e49: jne 0x5e48e6b
// asm:   0x5e48e4b: mov rdi, rbx
// asm:   0x5e48e4e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e48e53: mov r12, qword ptr [rax]
// asm:   0x5e48e56: mov qword ptr [rsp + 0x40], r12
// asm:   0x5e48e5b: xor r14d, r14d
// asm:   0x5e48e5e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e48e63: jmp 0x5e4879a
// asm:   0x5e48e68: mov rbx, rax
// asm:   0x5e48e6b: lea rdi, [rsp + 0x40]
// asm:   0x5e48e70: call 0x2fe12c0  ; il2cpp_runtime_helper_02fe12c0()
// asm:   0x5e48e75: mov rdi, rbx
// asm:   0x5e48e78: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e48e7d: mov rdi, rax
// asm:   0x5e48e80: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory__Groups(MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Settings_UISettings_o *pSVar5;
  Il2CppType *handle;
  System_String_o *pSVar6;
  System_String_o *id;
  Settings_GeneralSettings_o *pSVar7;
  char cVar8;
  System_Collections_Generic_List_object__o *__this;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  int32_t *piVar11;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_o *item;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar12;
  Gisketch_Aottg2UI_Code_AottgComponent_array *rows;
  System_Action_GisketchActionContext__o *pSVar13;
  Il2CppObject *pIVar14;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_StaticFields *pGVar15;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar16;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks;
  System_Object_array *pSVar17;
  MethodInfo *pMVar18;
  System_String_o *pSVar19;
  ulong uVar20;
  Settings_BoolSetting_o *pSVar21;
  Settings_BoolSetting_o *item_00;
  long lVar22;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffff78;
  Il2CppObject *local_80;
  Il2CppObject *local_78;
  Settings_BoolSetting_o *local_70;
  Settings_GeneralSettings_o *local_68;
  Il2CppObject *local_60;
  System_String_o *local_58;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07548607 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c_Groups_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c_Groups_b__2_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileGyroscopeVerticalSensitivity");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-icons");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileInputEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLookStabilization");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileHorizontalSafePadding");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-layouts");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-input");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-gyro-y");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileGyroscopeHorizontalSensitivity");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-gyro-x");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileGyroscope");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-look");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-safe-area");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-mobile-gyro");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileButtonIcons");
    Il2CppMethodInitialized_07548607 = '\x01';
  }
  local_60 = (Il2CppObject *)0x0;
  local_68 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((local_68 == (Settings_GeneralSettings_o *)0x0) ||
     (TypeInfo_Settings_SettingsManager->static_fields->UISettings == (Settings_UISettings_o *)0x0)) {
    pGVar12 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,0);
    return pGVar12;
  }
  __this = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            (__this,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  handle = TypeRef_UI_MobileInputLayoutRole;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 != (System_Array_o *)0x0) {
    pIVar9 = (Il2CppObject *)System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
    local_48 = 0;
    local_40 = &local_80;
    local_38 = &local_60;
    do {
      local_80 = pIVar9;
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIVar9->klass;
      uVar20 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar20 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar22) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar22);
            goto label_05e48643;
          }
          lVar22 = lVar22 + 0x10;
        } while (uVar20 * 0x10 != lVar22);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05e48643:
      cVar8 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      pIVar9 = local_80;
      if (cVar8 == '\0') {
        pIVar9 = il2cpp_vm_Object_IsInst(local_80,(Il2CppClass *)TypeInfo_System_IDisposable);
        local_60 = pIVar9;
        if (pIVar9 == (Il2CppObject *)0x0) goto label_05e48816;
        pIVar3 = pIVar9->klass;
        uVar20 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar20 == 0) goto label_05e487ef;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar22 = 0;
        goto label_05e487e0;
      }
      if (local_80 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = local_80->klass;
      uVar20 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar20 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar22) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar10 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar22) + 1);
            goto label_05e486d7;
          }
          lVar22 = lVar22 + 0x10;
        } while (uVar20 * 0x10 != lVar22);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_80,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05e486d7:
      pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar9->klass->_1).element_class != (TypeInfo_UI_MobileInputLayoutRole->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar9);
      }
      piVar11 = il2cpp_vm_Object_Unbox(pIVar9);
      iVar1 = *piVar11;
      item = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow);
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((Gisketch_Aottg2UI_Code_AottgComponent_o *)item,(MethodInfo *)0x0);
      (item->fields)._role = iVar1;
      pMVar18 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
      if (__this == (System_Collections_Generic_List_object__o *)0x0) {
label_05e48dfa:
        ThrowNullReferenceException();
      }
      piVar11 = &(__this->fields)._version;
      *piVar11 = *piVar11 + 1;
      pSVar17 = (__this->fields)._items;
      if (pSVar17 == (System_Object_array *)0x0) goto label_05e48dfa;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar17->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar17->m_Items[(int)uVar2] = (Il2CppObject *)item;
        Il2CppCodeGenWriteBarrier(pSVar17->m_Items + (int)uVar2);
        pIVar9 = local_80;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,(Il2CppObject *)item,(MethodInfo_395D230 *)pMVar18->klass->rgctx_data[0xe].method);
        pIVar9 = local_80;
      }
    } while( true );
  }
  goto label_05e48e1b;
  while (lVar22 = lVar22 + 0x10, uVar20 * 0x10 != lVar22) {
label_05e487e0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar22) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar22);
      goto label_05e4880d;
    }
  }
label_05e487ef:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e4880d:
  (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
label_05e48816:
  local_50 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,2);
  rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
         SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7);
  pSVar21 = (local_68->fields).MobileInputEnabled;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c);
  }
  pSVar19 = "settings-mobile-enabled";
  pSVar6 = "General";
  pGVar15 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->static_fields;
  pSVar13 = pGVar15->__9__2_0;
  local_58 = "settings-mobile-input";
  item_00 = (Settings_BoolSetting_o *)"MobileInputEnabled";
  if (pSVar13 == (System_Action_GisketchActionContext__o *)0x0) {
    local_70 = (Settings_BoolSetting_o *)"MobileInputEnabled";
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c);
      pGVar15 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->static_fields;
    }
    local_78 = (Il2CppObject *)pGVar15->__9;
    pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar13,local_78,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c_Groups_b__2_0,
               (MethodInfo_4A803E0 *)0x0);
    pGVar15 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->static_fields;
    pGVar15->__9__2_0 = pSVar13;
    Il2CppCodeGenWriteBarrier(&pGVar15->__9__2_0);
    item_00 = local_70;
  }
  pIVar9 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     (pSVar19,pSVar6,(System_String_o *)item_00,pSVar21,(System_String_o *)0x0,pSVar13,
                      in_stack_ffffffffffffff78);
  pSVar7 = local_68;
  if (rows != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (pIVar14 = il2cpp_vm_Object_IsInst(pIVar9,(((rows->obj).klass)->_1).element_class),
       pIVar14 == (Il2CppObject *)0x0)) {
label_05e48e20:
      pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
    }
    if ((int)rows->max_length != 0) {
      rows->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
      Il2CppCodeGenWriteBarrier(rows->m_Items);
      pSVar21 = (pSVar7->fields).MobileButtonIcons;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c);
      }
      id = "settings-mobile-icons";
      pSVar19 = "MobileButtonIcons";
      pSVar6 = "Keybinds";
      pGVar15 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->static_fields;
      pSVar13 = pGVar15->__9__2_1;
      if (pSVar13 == (System_Action_GisketchActionContext__o *)0x0) {
        local_70 = pSVar21;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c);
          pGVar15 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->static_fields;
        }
        local_78 = (Il2CppObject *)pGVar15->__9;
        pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (pSVar13,local_78,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c_Groups_b__2_1,
                   (MethodInfo_4A803E0 *)0x0);
        pGVar15 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c->static_fields;
        pGVar15->__9__2_1 = pSVar13;
        Il2CppCodeGenWriteBarrier(&pGVar15->__9__2_1);
        pSVar21 = local_70;
      }
      pIVar9 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                         (id,pSVar6,pSVar19,pSVar21,(System_String_o *)0x0,pSVar13,in_stack_ffffffffffffff78);
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (pIVar14 = il2cpp_vm_Object_IsInst(pIVar9,(((rows->obj).klass)->_1).element_class),
         pIVar14 == (Il2CppObject *)0x0)) goto label_05e48e20;
      pSVar7 = local_68;
      if ((rows->max_length & 0xfffffffe) != 0) {
        rows->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
        Il2CppCodeGenWriteBarrier(rows->m_Items + 1);
        pIVar9 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-mobile-gyro","General","MobileGyroscope",
                            (pSVar7->fields).MobileGyroscope,(System_String_o *)0x0,
                            (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffff78);
        if ((pIVar9 != (Il2CppObject *)0x0) &&
           (pIVar14 = il2cpp_vm_Object_IsInst(pIVar9,(((rows->obj).klass)->_1).element_class),
           pIVar14 == (Il2CppObject *)0x0)) goto label_05e48e20;
        if (2 < (uint)rows->max_length) {
          rows->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
          Il2CppCodeGenWriteBarrier(rows->m_Items + 2);
          pIVar9 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                             ("settings-mobile-gyro-x","General","MobileGyroscopeHorizontalSensitivity",
                              (pSVar7->fields).MobileGyroscopeHorizontalSensitivity,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffff78);
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (pIVar14 = il2cpp_vm_Object_IsInst(pIVar9,(((rows->obj).klass)->_1).element_class),
             pIVar14 == (Il2CppObject *)0x0)) goto label_05e48e20;
          if ((rows->max_length & 0xfffffffc) != 0) {
            rows->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
            Il2CppCodeGenWriteBarrier(rows->m_Items + 3);
            pIVar9 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                               ("settings-mobile-gyro-y","General","MobileGyroscopeVerticalSensitivity",
                                (pSVar7->fields).MobileGyroscopeVerticalSensitivity,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffff78);
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (pIVar14 = il2cpp_vm_Object_IsInst(pIVar9,(((rows->obj).klass)->_1).element_class),
               pIVar14 == (Il2CppObject *)0x0)) goto label_05e48e20;
            if (4 < (uint)rows->max_length) {
              rows->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
              Il2CppCodeGenWriteBarrier(rows->m_Items + 4);
              pIVar9 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                 ("settings-mobile-look","General","MobileLookStabilization",
                                  (pSVar7->fields).MobileLookStabilization,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffff78);
              if ((pIVar9 != (Il2CppObject *)0x0) &&
                 (pIVar14 = il2cpp_vm_Object_IsInst(pIVar9,(((rows->obj).klass)->_1).element_class),
                 pIVar14 == (Il2CppObject *)0x0)) goto label_05e48e20;
              if (5 < (uint)rows->max_length) {
                rows->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                Il2CppCodeGenWriteBarrier(rows->m_Items + 5);
                pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                if (pSVar5 == (Settings_UISettings_o *)0x0) goto label_05e48e1b;
                pMVar18 = (MethodInfo *)(pSVar5->fields).MobileHorizontalSafePadding;
                method_00 = (MethodInfo *)0x0;
                pIVar9 = (Il2CppObject *)
                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                   ("settings-mobile-safe-area","UI","MobileHorizontalSafePadding",
                                    (Settings_FloatSetting_o *)pMVar18,(System_String_o *)0x0,
                                    (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffff78);
                if ((pIVar9 != (Il2CppObject *)0x0) &&
                   (pIVar14 = il2cpp_vm_Object_IsInst(pIVar9,(((rows->obj).klass)->_1).element_class),
                   pIVar14 == (Il2CppObject *)0x0)) goto label_05e48e20;
                if (6 < (uint)rows->max_length) {
                  rows->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                  Il2CppCodeGenWriteBarrier(rows->m_Items + 6);
                  pGVar16 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar16,local_58,rows,pMVar18);
                  pGVar12 = local_50;
                  if (local_50 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
                    if ((int)local_50->max_length == 0) goto label_05e48e16;
                    local_50->m_Items[0] = pGVar16;
                    Il2CppCodeGenWriteBarrier(local_50->m_Items);
                    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
                             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,
                                        1);
                    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
                      pMVar18 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
                      pSVar17 = System_Collections_Generic_List_object___ToArray
                                          (__this,(MethodInfo_395F5A0 *)
                                                  MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray
                                          );
                      pMVar18 = (MethodInfo *)
                                Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SingleColumn
                                          ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pSVar17,pMVar18);
                      if (blocks != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
                        if ((int)blocks->max_length != 0) {
                          blocks->m_Items[0] =
                               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)pMVar18;
                          Il2CppCodeGenWriteBarrier(blocks->m_Items);
                          pGVar16 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)
                                               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
                          pSVar6 = "settings-mobile-layouts";
                          pSVar19 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey
                                              ("settings-mobile-layouts",pMVar18);
                          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_5d40ea0
                                    (pGVar16,pSVar6,(System_String_o *)0x0,pSVar19,blocks,method_00);
                          if ((pGVar12->max_length & 0xfffffffe) != 0) {
                            pGVar12->m_Items[1] = pGVar16;
                            Il2CppCodeGenWriteBarrier(pGVar12->m_Items + 1);
                            return pGVar12;
                          }
                        }
                        goto label_05e48e16;
                      }
                    }
                  }
                  goto label_05e48e1b;
                }
              }
            }
          }
        }
      }
    }
label_05e48e16:
    ThrowIndexOutOfRangeException();
  }
label_05e48e1b:
  ThrowNullReferenceException();
}


