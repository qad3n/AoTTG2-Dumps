// Type: Gisketch.Aottg2UI.SettingsScreen.AottgActionRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgActionRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.ActionButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, int32_t variant, bool disabled, System_String_o* textKey, const MethodInfo* method);
// 0x1821e9130

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *__this,System_String_o *text,
               System_Action_GisketchActionContext__o *action,int32_t variant,bool disabled,
               System_String_o *textKey,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Text,text);
  (__this->fields).TextKey = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TextKey,textKey);
  (__this->fields).Action = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Action,action);
  (__this->fields).Disabled = disabled;
  (__this->fields).Variant = variant;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.<>c__DisplayClass14_0$$<BuildButtons>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0___BuildButtons_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x182201050
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822010e4: xorps xmm6, xmm6
// asm:   0x1822010e7: nop word ptr [rax + rax]
// asm:   0x182201359: jmp 0x1822010f0

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0___BuildButtons_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int32_t variant;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *pGVar2;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  bool bVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *pGVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  System_String_o *str2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_Nullable_bool__Fields local_res8 [4];
  uint local_res20 [2];
  
  if (Il2CppMethodInitialized_18434706e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-button-");
    Il2CppMethodInitialized_18434706e = '\x01';
  }
  pGVar6 = (__this->fields).__4__this;
  local_res20[0] = 0;
  if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) {
    while (pGVar1 = (pGVar6->fields)._buttons,
          pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
      if ((int)pGVar1->max_length <= (int)local_res20[0]) {
        return;
      }
      pGVar6 = (__this->fields).__4__this;
      if ((pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) ||
         (pGVar1 = (pGVar6->fields)._buttons,
         pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0)) break;
      if ((uint)pGVar1->max_length <= local_res20[0]) {
        ThrowIndexOutOfRangeException();
      }
      pGVar2 = pGVar1->m_Items[(int)local_res20[0]];
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *)0x0) break;
      bVar5 = System_String__IsNullOrEmpty((pGVar2->fields).TextKey,(MethodInfo *)0x0);
      pGVar6 = (__this->fields).__4__this;
      if (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) break;
      variant = (pGVar2->fields).Variant;
      pSVar8 = (pGVar6->fields)._id;
      if (bVar5) {
        pSVar3 = (pGVar2->fields).Text;
        pSVar4 = (pGVar2->fields).Action;
        pSVar7 = System_Int32__ToString((int32_t *)local_res20,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_1969b70(pSVar8,"-button-",pSVar7,(MethodInfo *)0x0);
        if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                           (row,variant,pSVar3,pSVar4,pSVar8,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
      }
      else {
        pSVar3 = (pGVar2->fields).TextKey;
        pSVar7 = (pGVar2->fields).Text;
        pSVar4 = (pGVar2->fields).Action;
        str2 = System_Int32__ToString((int32_t *)local_res20,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_1969b70(pSVar8,"-button-",str2,(MethodInfo *)0x0);
        if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_18c6e10
                           (row,variant,pSVar3,pSVar7,pSVar4,pSVar8,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
      }
      local_res8[0].hasValue = false;
      local_res8[0].value = false;
      System_Nullable_bool____ctor
                ((System_Data_SqlTypes_SqlByte_o *)local_res8,(pGVar2->fields).Disabled == false,
                 MethodInfo_System_Nullable_bool_ctor);
      if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pGVar9->fields).enabled.fields = local_res8[0];
      (pGVar9->fields).clip = true;
      width = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).buttonWidth,(MethodInfo *)0x0);
      minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).buttonWidth,(MethodInfo *)0x0);
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).buttonWidth,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
      (pGVar9->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar9->fields).layout,value);
      pGVar6 = (__this->fields).__4__this;
      local_res20[0] = local_res20[0] + 1;
      if (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, System_String_o* id, System_String_o* label, System_String_o* tooltip, Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array* buttons, const MethodInfo* method);
// 0x1821ea2d0

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *tooltip,
               Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434706b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array);
    Il2CppMethodInitialized_18434706b = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._labelKey = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey,(void *)0x0);
  (__this->fields)._tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,tooltip);
  if (buttons == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array,0);
  }
  (__this->fields)._buttons = buttons;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buttons,buttons);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, System_String_o* id, System_String_o* label, System_String_o* tooltip, System_String_o* labelKey, Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array* buttons, const MethodInfo* method);
// 0x1821ea380

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor_21ea380
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *tooltip,System_String_o *labelKey,
               Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434706b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array);
    Il2CppMethodInitialized_18434706b = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._labelKey = labelKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey,labelKey);
  (__this->fields)._tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,tooltip);
  if (buttons == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array,0);
  }
  (__this->fields)._buttons = buttons;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buttons,buttons);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1821ea090

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui
               ,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t layoutMode;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar2;
  System_String_o *label;
  System_String_o *id;
  System_String_o *tooltip;
  System_String_o *labelKey;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  float controlWidth;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_98 [2];
  
  if (Il2CppMethodInitialized_18434706c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_BuildButtons);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18434706c = '\x01';
  }
  pGVar2 = (__this->fields)._buttons;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    label = (__this->fields)._label;
    id = (__this->fields)._id;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    controlWidth = System_Math__Max_1b2c160(180.0,(float)(int)pGVar2->max_length * 150.0,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_BuildButtons,
               (MethodInfo *)0x0);
    tooltip = (__this->fields)._tooltip;
    labelKey = (__this->fields)._labelKey;
    pSVar3 = (__this->fields)._searchContext.fields.ScreenTitle;
    pSVar4 = (__this->fields)._searchContext.fields.CategoryId;
    pSVar5 = (__this->fields)._searchContext.fields.CategoryTitle;
    pSVar6 = (__this->fields)._searchContext.fields.GroupId;
    pSVar1 = (__this->fields)._searchContext.fields.GroupTitle;
    layoutMode = (__this->fields)._layoutMode;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    local_98[0].fields.ScreenTitle = pSVar3;
    local_98[0].fields.CategoryId = pSVar4;
    local_98[0].fields.CategoryTitle = pSVar5;
    local_98[0].fields.GroupId = pSVar6;
    local_98[0].fields.GroupTitle = pSVar1;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
              (__this_01,id,label,controlWidth,(System_Action_AottgUi__o *)__this_00,tooltip,
               (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
               (System_Nullable_float__o)0x0,labelKey,(System_String_o *)0x0,(System_String_o *)0x0,local_98,
               (System_Func_string__o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,layoutMode,
               (MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x1821e9db0

void
Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ApplySearchContext(Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, MethodInfo* method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  pSVar1 = (context->fields).CategoryId;
  pSVar2 = (context->fields).CategoryTitle;
  pSVar3 = (context->fields).GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = (context->fields).ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = pSVar1;
  pSVar1 = (context->fields).GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = pSVar2;
  (__this->fields)._searchContext.fields.GroupId = pSVar3;
  (__this->fields)._searchContext.fields.GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x181b6a390

void
Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ApplyLayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, int32_t mode, MethodInfo* method)

{
  (__this->fields)._layoutMode.fields._overlap_0._at_rgba.rgba = (int32_t)value.fields._overlap_0;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$BuildButtons
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__BuildButtons (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x1821e9de0

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__BuildButtons
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434706d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass14_0_BuildButtons_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass14_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_18434706d = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass14_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass14_0_o *)0x0)
  goto label_1821ea080;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  if ((__this->fields)._layoutMode == 1) {
    pGVar1 = (__this->fields)._buttons;
    if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0)
    goto label_1821ea080;
    if (pGVar1->max_length == 0) goto label_1821e9f2e;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar2 = System_Math__Min_1b2c340
                      (140.0,(300.0 - (float)((int)pGVar1->max_length + -1) * 8.0) /
                             (float)(int)pGVar1->max_length,(MethodInfo *)0x0);
  }
  else {
label_1821e9f2e:
    fVar2 = 140.0;
  }
  (object->fields).buttonWidth = fVar2;
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass14_0_BuildButtons_b__0,
             (MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields)._id,"-actions",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_1821ea080:
  ThrowNullReferenceException();
}


