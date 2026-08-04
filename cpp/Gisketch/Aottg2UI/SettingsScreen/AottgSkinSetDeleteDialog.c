// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSkinSetDeleteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, const MethodInfo* method);
// 0x4465b50

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,MethodInfo *method)

{
  if (g_data_057ae7bc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Delete Skin Set");
    g_data_057ae7bc = '\x01';
  }
  return "Delete Skin Set";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, const MethodInfo* method);
// 0x4465b80

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, const MethodInfo* method);
// 0x4465b90

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae7bd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7bd = '\x01';
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


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4465c60

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_03;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text;
  MethodInfo *method_01;
  UnityEngine_Object_o *__this_04;
  System_String_o *in_R8;
  System_String_o *in_R9;
  UnityEngine_Object_o *unaff_R14;
  MethodInfo *in_stack_ffffffffffffff88;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (g_data_057ae7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"?");
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *)&"Delete ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7be = '\x01';
  }
  __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
              Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName((MethodInfo *)__this);
  method_01 = "Delete ";
  pSVar4 = System_String__Concat_3af7150
                     ((System_String_o *)"Delete ",(System_String_o *)__this_02,"?",
                      (MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Callout(body,3,pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Delete);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Delete");
    method_01 = (MethodInfo *)&"Cancel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7bf = '\x01';
  }
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)__this_02,"Cancel","overlay.close",
               (MethodInfo *)0x0);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x4465d6e;
    System_Action_GisketchActionContext____ctor();
    pSVar4 = "Delete";
    action_00 = (System_Action_GisketchActionContext__o *)0x0;
    __this_00 = (__this_02->fields)._children;
    if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      pGVar1 = *(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)&(__this_00->fields)._size;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (pGVar1,(System_String_o *)(__this_00->fields)._syncRoot,action,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,0,pSVar4,pSVar3,(System_String_o *)0x0,
                 (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (System_String_o *)0x0,method_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar1 = (__this_02->fields)._actions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(__this_02->fields)._ownerId,action_00,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_02,(int32_t)pSVar4,text,pSVar3,in_R8,in_R9,enter,(System_String_o *)method_00,
               in_stack_ffffffffffffff88);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    method_01 = (MethodInfo *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7c0 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected(method_01);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = unaff_R14;
  bVar2 = UnityEngine_Object__op_Inequality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (unaff_R14 == (UnityEngine_Object_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      return;
    }
    __this_03 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_
                          ((UnityEngine_GameObject_o *)unaff_R14,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_03 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this_01 = (__this_03->fields)._Theme_k__BackingField;
      if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_03,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x4465cd0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RAX;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_02;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text;
  System_String_o *pSVar4;
  UnityEngine_Object_o *__this_03;
  System_String_o *in_R8;
  System_String_o *in_R9;
  UnityEngine_Object_o *unaff_R14;
  MethodInfo *in_stack_ffffffffffffff90;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (g_data_057ae7bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Delete);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Delete");
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *)&"Cancel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7bf = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x4465d6e;
    System_Action_GisketchActionContext____ctor();
    pSVar4 = "Delete";
    action_00 = (System_Action_GisketchActionContext__o *)0x0;
    __this_00 = (footer->fields)._ui;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = (__this_00->fields)._actions;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (pGVar1,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button
                (__this_00,0,pSVar4,pSVar3,(System_String_o *)0x0,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,in_RAX);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar1 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._actions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._ownerId,action_00,
                          (MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)footer,(int32_t)pSVar4,text,pSVar3,in_R8,in_R9,enter,
               (System_String_o *)in_RAX,in_stack_ffffffffffffff90);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7c0 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected((MethodInfo *)__this);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = unaff_R14;
  bVar2 = UnityEngine_Object__op_Inequality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (unaff_R14 == (UnityEngine_Object_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      return;
    }
    __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_
                          ((UnityEngine_GameObject_o *)unaff_R14,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_02 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this_01 = (__this_02->fields)._Theme_k__BackingField;
      if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$Delete
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__Delete (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4465da0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__Delete
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if (g_data_057ae7c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    method = (MethodInfo *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7c0 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected(method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = context.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (__this_00->fields)._Theme_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, const MethodInfo* method);
// 0x4465e50

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


