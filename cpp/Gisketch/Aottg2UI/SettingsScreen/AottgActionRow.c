// Type: Gisketch.Aottg2UI.SettingsScreen.AottgActionRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgActionRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.ActionButton$$get_IsIcon
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton__get_IsIcon (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o* __this, const MethodInfo* method);
// 0x5dba630

bool Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton__get_IsIcon
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).Icon,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.ActionButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o* __this, System_String_o* textKey, System_Action_GisketchActionContext__o* action, int32_t variant, bool disabled, System_String_o* icon, const MethodInfo* method);
// 0x5dba950

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *__this,
               System_String_o *textKey,System_Action_GisketchActionContext__o *action,int32_t variant,
               bool disabled,System_String_o *icon,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).TextKey = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TextKey);
  (__this->fields).Action = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Action);
  (__this->fields).Variant = variant;
  (__this->fields).Disabled = disabled;
  (__this->fields).Icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5dba940

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.<>c__DisplayClass18_0$$<BuildButtons>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0___BuildButtons_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5dba9c0

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0___BuildButtons_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *pGVar3;
  bool bVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *pGVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  System_Nullable_bool__Fields aSStack_40 [2];
  uint uStack_3c;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStack_38;
  
  if (Il2CppMethodInitialized_07548149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-button-");
    Il2CppMethodInitialized_07548149 = '\x01';
  }
  uStack_3c = 0;
  pGVar5 = (__this->fields).__4__this;
  if (pGVar5 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) {
    do {
      pGVar2 = (pGVar5->fields)._buttons;
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) break;
      uVar1 = (uint)pGVar2->max_length;
      if ((int)uVar1 <= (int)uStack_3c) {
        return;
      }
      if (uVar1 <= uStack_3c) {
        ThrowIndexOutOfRangeException();
      }
      pGVar3 = pGVar2->m_Items[(int)uStack_3c];
      pSVar7 = (pGVar5->fields)._id;
      pSVar6 = System_Int32__ToString((int32_t *)&uStack_3c,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_5301f10(pSVar7,"-button-",pSVar6,(MethodInfo *)0x0);
      if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *)0x0) break;
      bVar4 = System_String__IsNullOrEmpty((pGVar3->fields).Icon,(MethodInfo *)0x0);
      if (bVar4) {
        if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                           (row,(pGVar3->fields).Variant,(pGVar3->fields).TextKey,(pGVar3->fields).Action,
                            pSVar7,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (pGVar8->fields).clip = true;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).textWidth,(MethodInfo *)0x0);
        pGStack_38 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).textWidth,(MethodInfo *)0x0);
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).textWidth,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGStack_38,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar10,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
        (pGVar8->fields).layout = pGVar11;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).layout);
      }
      else {
        pSVar6 = (pGVar3->fields).TextKey;
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar6,(MethodInfo *)0x0);
        if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                           (row,(pGVar3->fields).Variant,(pGVar3->fields).Icon,(pGVar3->fields).Action,pSVar7,
                            pSVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
        ;
        if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (pGVar8->fields).formLabel = pSVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).formLabel);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,pGVar10,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
        (pGVar8->fields).layout = pGVar11;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).layout);
      }
      aSStack_40[0].hasValue = false;
      aSStack_40[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)aSStack_40,(pGVar3->fields).Disabled == false,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      (pGVar8->fields).enabled.fields = aSStack_40[0];
      uStack_3c = uStack_3c + 1;
      pGVar5 = (__this->fields).__4__this;
    } while (pGVar5 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, System_String_o* id, System_String_o* label, Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array* buttons, const MethodInfo* method);
// 0x5dba000

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,System_String_o *id,
               System_String_o *label,
               Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons,MethodInfo *method)

{
  MethodInfo *in_R9;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor_5cba010
            (__this,id,label,(System_String_o *)0x0,buttons,in_R9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, System_String_o* id, System_String_o* label, System_String_o* labelKey, Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array* buttons, const MethodInfo* method);
// 0x5dba010

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor_5cba010
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *labelKey,
               Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array);
    Il2CppMethodInitialized_07548144 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  (__this->fields)._labelKey = labelKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey);
  if (buttons == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array,0);
  }
  (__this->fields)._buttons = buttons;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buttons);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$Keyed
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Keyed (System_String_o* id, System_String_o* labelKey, Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array* buttons, const MethodInfo* method);
// 0x5dba0c0

Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *
Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Keyed
          (System_String_o *id,System_String_o *labelKey,
          Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons,MethodInfo *method)

{
  System_String_o *label;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07548145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
    Il2CppMethodInitialized_07548145 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  label = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(labelKey,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor_5cba010(__this,id,label,labelKey,buttons,in_R9);
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5dba160

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui
               ,MethodInfo *method)

{
  uint uVar1;
  int32_t layoutMode;
  System_String_o *id;
  System_String_o *label;
  System_String_o *labelKey;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_Fields searchContext;
  bool bVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar3;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  uint uVar4;
  float fVar5;
  float fVar6;
  MethodInfo *in_stack_ffffffffffffff80;
  
  if (Il2CppMethodInitialized_07548146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_BuildButtons);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07548146 = '\x01';
  }
  pGVar3 = (__this->fields)._buttons;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    id = (__this->fields)._id;
    label = (__this->fields)._label;
    uVar4 = 0;
    fVar6 = 0.0;
    do {
      uVar1 = (uint)pGVar3->max_length;
      if ((int)uVar1 <= (int)uVar4) {
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar6 = System_Math__Max_54bad70(180.0,fVar6,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_BuildButtons,
                   (MethodInfo_4A81BE0 *)0x0);
        labelKey = (__this->fields)._labelKey;
        layoutMode = (__this->fields)._layoutMode;
        searchContext = (__this->fields)._searchContext.fields;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
                  (__this_01,id,label,fVar6,__this_00,(System_String_o *)0x0,(System_String_o *)0x0,
                   (System_String_o *)0x0,(System_String_o *)0x0,(System_Nullable_float__o)0x0,labelKey,
                   (System_String_o *)0x0,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)searchContext,
                   (System_Func_string__o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,layoutMode,
                   in_stack_ffffffffffffff80);
        if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar3->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *)0x0
         ) break;
      bVar2 = System_String__IsNullOrEmpty((pGVar3->m_Items[(int)uVar4]->fields).Icon,(MethodInfo *)0x0);
      fVar5 = 150.0;
      if (!bVar2) {
        fVar5 = 50.0;
      }
      fVar6 = fVar6 + fVar5;
      uVar4 = uVar4 + 1;
      pGVar3 = (__this->fields)._buttons;
    } while (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5dba5f0

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  (__this->fields)._searchContext.fields.GroupTitle = context.fields.GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = context.fields.CategoryTitle;
  (__this->fields)._searchContext.fields.GroupId = context.fields.GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = context.fields.ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = context.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x5dba620

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ApplyLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,int32_t mode,MethodInfo *method)

{
  (__this->fields)._layoutMode = mode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$ControlWidth
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ControlWidth (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, const MethodInfo* method);
// 0x5dba3a0

float Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__ControlWidth
                (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  pGVar3 = (__this->fields)._buttons;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    fVar5 = 0.0;
    lVar4 = 0;
    do {
      uVar1 = (uint)pGVar3->max_length;
      if ((int)uVar1 <= (int)(uint)lVar4) {
        return fVar5;
      }
      if (uVar1 <= (uint)lVar4) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar3->m_Items[lVar4] == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *)0x0)
      break;
      bVar2 = System_String__IsNullOrEmpty((pGVar3->m_Items[lVar4]->fields).Icon,(MethodInfo *)0x0);
      fVar6 = 150.0;
      if (!bVar2) {
        fVar6 = 50.0;
      }
      fVar5 = fVar5 + fVar6;
      pGVar3 = (__this->fields)._buttons;
      lVar4 = lVar4 + 1;
    } while (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$TextButtonWidth
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__TextButtonWidth (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, const MethodInfo* method);
// 0x5dba640

float Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__TextButtonWidth
                (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float local_1c;
  
  if (Il2CppMethodInitialized_07548147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07548147 = '\x01';
  }
  pGVar2 = (__this->fields)._buttons;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    local_1c = 0.0;
    lVar4 = 0;
    iVar5 = 0;
    do {
      uVar3 = (uint)pGVar2->max_length;
      if ((int)uVar3 <= (int)(uint)lVar4) {
        if (((__this->fields)._layoutMode != 1) || (iVar5 == 0)) {
          return 140.0;
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar6 = System_Math__Min_54baee0
                          (140.0,(((float)(int)(uVar3 - 1) * -8.0 + 300.0) - local_1c) / (float)iVar5,
                           (MethodInfo *)0x0);
        return fVar6;
      }
      if (uVar3 <= (uint)lVar4) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar2->m_Items[lVar4] == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *)0x0)
      break;
      bVar1 = System_String__IsNullOrEmpty((pGVar2->m_Items[lVar4]->fields).Icon,(MethodInfo *)0x0);
      if (!bVar1) {
        local_1c = local_1c + 42.0;
      }
      iVar5 = iVar5 + (uint)bVar1;
      pGVar2 = (__this->fields)._buttons;
      lVar4 = lVar4 + 1;
    } while (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$BuildButtons
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__BuildButtons (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dba770

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__BuildButtons
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *method_00;
  float fVar1;
  
  if (Il2CppMethodInitialized_07548148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass18_0_BuildButtons_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07548148 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass18_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___c__DisplayClass18_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    method_00 = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    fVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__TextButtonWidth(__this,(MethodInfo *)method_00);
    (__this_00->fields).textWidth = fVar1;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass18_0_BuildButtons_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    id = System_String__Concat_52f0320((__this->fields)._id,"-actions",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (control,"clear",__this_01,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


