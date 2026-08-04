// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSkinSetNameDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x4465e60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (g_data_057ae7c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Copy Skin Set");
    il2cpp_runtime_helper_023445d0(&"Rename Skin Set");
    il2cpp_runtime_helper_023445d0(&"Create Skin Set");
    g_data_057ae7c5 = '\x01';
  }
  if (g_data_057ae84f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    g_data_057ae84f = '\x01';
  }
  iVar1 = *(int *)(*(long *)(TypeInfo_AottgSkinSetActions + 0xb8) + 8);
  if (iVar1 == 2) {
    puVar2 = &"Copy Skin Set";
  }
  else {
    puVar2 = &"Create Skin Set";
    if (iVar1 == 1) {
      puVar2 = &"Rename Skin Set";
    }
  }
  return (System_String_o *)*puVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x4465f80

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x4465f90

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae7c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7c1 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(420.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x4466060

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae7c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057ae7c2 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4466120

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  uint uVar1;
  System_String_Fields __this_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_Object_array *pSVar5;
  UnityEngine_Object_o *__this_04;
  System_String_o *pSVar6;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text;
  ulong uVar7;
  MethodInfo *__this_05;
  MethodInfo *method_01;
  System_String_o *pSVar8;
  System_String_o *unaff_R14;
  MethodInfo *in_stack_ffffffffffffff38;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (g_data_057ae7c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Set name");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7c3 = '\x01';
  }
  width = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
          Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_05 = (MethodInfo *)0x0;
  pSVar8 = (System_String_o *)0x0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar8 = "inputField";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (body,"setting-skin-set-name-input","Set name",0,"inputField",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x28,(MethodInfo *)0x0);
    if (g_data_057ae84f == '\0') {
      body = (Gisketch_Aottg2UI_Code_AottgUi_o *)&TypeInfo_AottgSkinSetActions;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae84f = '\x01';
    }
    if (*(int *)(*(long *)(TypeInfo_AottgSkinSetActions + 0xb8) + 8) == 0) {
      __this_05 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      width = layout;
    }
    else {
      __this_05 = (MethodInfo *)
                  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName((MethodInfo *)body);
      width = layout;
    }
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).value = (System_String_o *)__this_05;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).value);
      return;
    }
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  method_01 = __this_05;
  if (g_data_057ae7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae7c4 = '\x01';
  }
  if (__this_05 != (MethodInfo *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)__this_05,"Cancel","overlay.close",
               (MethodInfo *)0x0);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x446636e;
    System_Action_GisketchActionContext____ctor();
    pSVar6 = "Save";
    action_00 = (System_Action_GisketchActionContext__o *)0x0;
    __this_00 = *(System_String_Fields *)&__this_05->invoker_method;
    if (__this_00 == (System_String_Fields)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)__this_05->name ==
          (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)__this_05->name,
                            (System_String_o *)__this_05->klass,action_00,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_05,(int32_t)pSVar6,text,pSVar3,pSVar8,
                 (System_String_o *)width,enter,(System_String_o *)method_00,in_stack_ffffffffffffff38);
      return;
    }
    if (*(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)__this_00 + 0x18) ==
        (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar8 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (*(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)__this_00 + 0x18),
                          *(System_String_o **)((long)__this_00 + 0x20),action,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,0,pSVar6,pSVar8,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae7c6 = '\x01';
  }
  pSVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText
                     ((UnityEngine_GameObject_o *)unaff_R14,method_01);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName(pSVar8,method_01);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = unaff_R14;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (unaff_R14 != (System_String_o *)0x0) {
    __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_
                          ((UnityEngine_GameObject_o *)unaff_R14,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_02 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      return;
    }
    __this_01 = (__this_02->fields)._Theme_k__BackingField;
    if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,1,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-skin-set-name-input");
    g_data_057ae7c7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (System_String_o *)0x0;
  pSVar6 = pSVar8;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_044664f3:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = pSVar3;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    if ((pSVar3 != (System_String_o *)0x0) &&
       (pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)pSVar3,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField), pSVar6 = pSVar3,
       pSVar5 != (System_Object_array *)0x0)) {
      if ((int)pSVar5->max_length < 1) {
        return;
      }
      uVar7 = 0;
      if ((pSVar5->max_length & 0xffffffff) != 0) {
        do {
          pSVar8 = (System_String_o *)pSVar5->m_Items[uVar7];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = pSVar8;
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if ((pSVar8 == (System_String_o *)0x0) ||
               (pSVar6 = pSVar8,
               __this_04 = (UnityEngine_Object_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0),
               __this_04 == (UnityEngine_Object_o *)0x0)) goto label_04466620;
            pSVar6 = UnityEngine_Object__get_name(__this_04,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(pSVar6,"setting-skin-set-name-input",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              pSVar6 = (System_String_o *)0x0;
              if (pSVar8[0x16].fields != (System_String_Fields)0x0) {
                System_String__Trim((System_String_o *)pSVar8[0x16].fields,(MethodInfo *)0x0);
                return;
              }
              goto label_04466620;
            }
          }
          uVar7 = uVar7 + 1;
          uVar1 = (uint)pSVar5->max_length;
          if ((long)(int)uVar1 <= (long)uVar7) {
            return;
          }
          pSVar3 = pSVar6;
        } while (uVar7 < uVar1);
      }
      goto Gisketch_Aottg2UI_Code_AottgDialog___ctor;
    }
  }
  else if ((pSVar8 != (System_String_o *)0x0) &&
          (__this_03 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0), pSVar6 = pSVar8,
          __this_03 != (UnityEngine_Transform_o *)0x0)) {
    pSVar3 = (System_String_o *)UnityEngine_Transform__get_root(__this_03,(MethodInfo *)0x0);
    goto label_044664f3;
  }
label_04466620:
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = pSVar6;
Gisketch_Aottg2UI_Code_AottgDialog___ctor:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x44662d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  MethodInfo *in_RAX;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_String_o *x;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *__this_04;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text;
  ulong uVar7;
  MethodInfo *method_00;
  System_String_o *in_R8;
  System_String_o *in_R9;
  System_String_o *unaff_R14;
  MethodInfo *in_stack_ffffffffffffff90;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  method_00 = (MethodInfo *)footer;
  if (g_data_057ae7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae7c4 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x446636e;
    System_Action_GisketchActionContext____ctor();
    pSVar5 = "Save";
    action_00 = (System_Action_GisketchActionContext__o *)0x0;
    __this_00 = (footer->fields)._ui;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = (__this_00->fields)._actions;
      if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar4 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (pGVar2,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button
                (__this_00,0,pSVar5,pSVar4,(System_String_o *)0x0,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,in_RAX);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar2 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._actions;
    if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar4 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar2,(((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._ownerId,action_00,
                          (MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)footer,(int32_t)pSVar5,text,pSVar4,in_R8,in_R9,enter,
               (System_String_o *)in_RAX,in_stack_ffffffffffffff90);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae7c6 = '\x01';
  }
  pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText
                     ((UnityEngine_GameObject_o *)unaff_R14,method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName(pSVar5,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = unaff_R14;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (unaff_R14 != (System_String_o *)0x0) {
    __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_
                          ((UnityEngine_GameObject_o *)unaff_R14,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_02 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      return;
    }
    __this_01 = (__this_02->fields)._Theme_k__BackingField;
    if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,1,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-skin-set-name-input");
    g_data_057ae7c7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (System_String_o *)0x0;
  pSVar4 = pSVar5;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_044664f3:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = x;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    if ((x != (System_String_o *)0x0) &&
       (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)x,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField), pSVar4 = x,
       pSVar6 != (System_Object_array *)0x0)) {
      if ((int)pSVar6->max_length < 1) {
        return;
      }
      uVar7 = 0;
      if ((pSVar6->max_length & 0xffffffff) != 0) {
        do {
          pSVar5 = (System_String_o *)pSVar6->m_Items[uVar7];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = pSVar5;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if ((pSVar5 == (System_String_o *)0x0) ||
               (pSVar4 = pSVar5,
               __this_04 = (UnityEngine_Object_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
               __this_04 == (UnityEngine_Object_o *)0x0)) goto label_04466620;
            pSVar4 = UnityEngine_Object__get_name(__this_04,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar4,"setting-skin-set-name-input",(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              pSVar4 = (System_String_o *)0x0;
              if (pSVar5[0x16].fields != (System_String_Fields)0x0) {
                System_String__Trim((System_String_o *)pSVar5[0x16].fields,(MethodInfo *)0x0);
                return;
              }
              goto label_04466620;
            }
          }
          uVar7 = uVar7 + 1;
          uVar1 = (uint)pSVar6->max_length;
          if ((long)(int)uVar1 <= (long)uVar7) {
            return;
          }
          x = pSVar4;
        } while (uVar7 < uVar1);
      }
      goto Gisketch_Aottg2UI_Code_AottgDialog___ctor;
    }
  }
  else if ((pSVar5 != (System_String_o *)0x0) &&
          (__this_03 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pSVar5,(MethodInfo *)0x0), pSVar4 = pSVar5,
          __this_03 != (UnityEngine_Transform_o *)0x0)) {
    x = (System_String_o *)UnityEngine_Transform__get_root(__this_03,(MethodInfo *)0x0);
    goto label_044664f3;
  }
label_04466620:
  il2cpp_runtime_helper_022b2c90();
  x = pSVar4;
Gisketch_Aottg2UI_Code_AottgDialog___ctor:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)x,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$TitleText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__TitleText (const MethodInfo* method);
// 0x4465ef0

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__TitleText(MethodInfo *method)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (g_data_057ae7c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Copy Skin Set");
    il2cpp_runtime_helper_023445d0(&"Rename Skin Set");
    il2cpp_runtime_helper_023445d0(&"Create Skin Set");
    g_data_057ae7c5 = '\x01';
  }
  if (g_data_057ae84f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    g_data_057ae84f = '\x01';
  }
  iVar1 = *(int *)(*(long *)(TypeInfo_AottgSkinSetActions + 0xb8) + 8);
  if (iVar1 == 2) {
    puVar2 = &"Copy Skin Set";
  }
  else {
    puVar2 = &"Create Skin Set";
    if (iVar1 == 1) {
      puVar2 = &"Rename Skin Set";
    }
  }
  return (System_String_o *)*puVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x44663a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  System_String_o *x;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this_02;
  System_String_o *a;
  ulong uVar5;
  MethodInfo *in_RSI;
  
  if (g_data_057ae7c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae7c6 = '\x01';
  }
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText
                     (context.fields.GameObject,in_RSI);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName(pSVar3,in_RSI);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (System_String_o *)context.fields.GameObject;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      return;
    }
    __this = (__this_00->fields)._Theme_k__BackingField;
    if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-skin-set-name-input");
    g_data_057ae7c7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (System_String_o *)0x0;
  a = pSVar3;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_044664f3:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a = x;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    if ((x != (System_String_o *)0x0) &&
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)x,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField), a = x,
       pSVar4 != (System_Object_array *)0x0)) {
      if ((int)pSVar4->max_length < 1) {
        return;
      }
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          pSVar3 = (System_String_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          a = pSVar3;
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if ((pSVar3 == (System_String_o *)0x0) ||
               (a = pSVar3,
               __this_02 = (UnityEngine_Object_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0),
               __this_02 == (UnityEngine_Object_o *)0x0)) goto label_04466620;
            a = UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(a,"setting-skin-set-name-input",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              a = (System_String_o *)0x0;
              if (pSVar3[0x16].fields != (System_String_Fields)0x0) {
                System_String__Trim((System_String_o *)pSVar3[0x16].fields,(MethodInfo *)0x0);
                return;
              }
              goto label_04466620;
            }
          }
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar5) {
            return;
          }
          x = a;
        } while (uVar5 < uVar1);
      }
      goto Gisketch_Aottg2UI_Code_AottgDialog___ctor;
    }
  }
  else if ((pSVar3 != (System_String_o *)0x0) &&
          (__this_01 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pSVar3,(MethodInfo *)0x0), a = pSVar3,
          __this_01 != (UnityEngine_Transform_o *)0x0)) {
    x = (System_String_o *)UnityEngine_Transform__get_root(__this_01,(MethodInfo *)0x0);
    goto label_044664f3;
  }
label_04466620:
  il2cpp_runtime_helper_022b2c90();
  x = a;
Gisketch_Aottg2UI_Code_AottgDialog___ctor:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)x,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x4466460

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  System_String_o *extraout_RAX;
  UnityEngine_Transform_o *__this;
  System_String_o *pSVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar5;
  ulong uVar6;
  
  if (g_data_057ae7c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-skin-set-name-input");
    g_data_057ae7c7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (System_String_o *)0x0;
  pSVar5 = (System_String_o *)source;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_044664f3:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = pSVar3;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
label_044665fe:
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if ((pSVar3 != (System_String_o *)0x0) &&
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)pSVar3,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField), pSVar5 = pSVar3,
       pSVar4 != (System_Object_array *)0x0)) {
      if ((int)pSVar4->max_length < 1) goto label_044665fe;
      uVar6 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          pSVar3 = (System_String_o *)pSVar4->m_Items[uVar6];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = pSVar3;
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if ((pSVar3 == (System_String_o *)0x0) ||
               (pSVar5 = pSVar3,
               __this_00 = (UnityEngine_Object_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0),
               __this_00 == (UnityEngine_Object_o *)0x0)) goto label_04466620;
            pSVar5 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(pSVar5,"setting-skin-set-name-input",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              pSVar5 = (System_String_o *)0x0;
              if (pSVar3[0x16].fields != (System_String_Fields)0x0) {
                pSVar5 = System_String__Trim((System_String_o *)pSVar3[0x16].fields,(MethodInfo *)0x0);
                return pSVar5;
              }
              goto label_04466620;
            }
          }
          uVar6 = uVar6 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar6) goto label_044665fe;
          pSVar3 = pSVar5;
        } while (uVar6 < uVar1);
      }
      goto Gisketch_Aottg2UI_Code_AottgDialog___ctor;
    }
  }
  else if ((source != (UnityEngine_GameObject_o *)0x0) &&
          (__this = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
          pSVar5 = (System_String_o *)source, __this != (UnityEngine_Transform_o *)0x0)) {
    pSVar3 = (System_String_o *)UnityEngine_Transform__get_root(__this,(MethodInfo *)0x0);
    goto label_044664f3;
  }
label_04466620:
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = pSVar5;
Gisketch_Aottg2UI_Code_AottgDialog___ctor:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x4466630

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


