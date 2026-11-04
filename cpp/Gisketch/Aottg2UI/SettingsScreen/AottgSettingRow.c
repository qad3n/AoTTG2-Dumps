// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x1812b8cd0

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor_12b8cd0(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._descriptor,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x182310580

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t layoutMode;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  System_String_o *id;
  System_String_o *label;
  System_String_o *searchTitle;
  System_String_o *tooltip;
  System_String_o *searchKeywords;
  System_String_o *icon;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  System_String_o *labelKey;
  System_String_o *tooltipKey;
  System_Func_string__o *dirtyValue;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  float controlWidth;
  float value;
  System_Nullable_float__Fields local_res8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_a8 [2];
  
  if (Il2CppMethodInitialized_184347726 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_184347726 = '\x01';
  }
  if ((__this->fields)._descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    id = (pGVar2->fields).Id;
    label = (((__this->fields)._descriptor)->fields).Label;
    controlWidth = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                             (__this,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildControl,
               (MethodInfo *)0x0);
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      searchTitle = (pGVar2->fields).SearchTitle;
      tooltip = (pGVar2->fields).Tooltip;
      searchKeywords = (pGVar2->fields).SearchKeywords;
      icon = (pGVar2->fields).Icon;
      if ((pGVar2->fields).Kind == 0) {
        value = 58.0;
      }
      else {
        value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                          (__this,(MethodInfo *)0x0);
      }
      local_res8.hasValue = false;
      local_res8._1_3_ = 0;
      local_res8.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_res8,value,
                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pGVar3 = (__this->fields)._descriptor;
        labelKey = (pGVar2->fields).LabelKey;
        tooltipKey = (pGVar3->fields).TooltipKey;
        dirtyValue = (pGVar3->fields).DirtyValue;
        pSVar4 = (__this->fields)._searchContext.fields.ScreenTitle;
        pSVar5 = (__this->fields)._searchContext.fields.CategoryId;
        pSVar6 = (__this->fields)._searchContext.fields.CategoryTitle;
        pSVar7 = (__this->fields)._searchContext.fields.GroupId;
        pSVar1 = (__this->fields)._searchContext.fields.GroupTitle;
        layoutMode = (__this->fields)._layoutMode;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
        local_a8[0].fields.ScreenTitle = pSVar4;
        local_a8[0].fields.CategoryId = pSVar5;
        local_a8[0].fields.CategoryTitle = pSVar6;
        local_a8[0].fields.GroupId = pSVar7;
        local_a8[0].fields.GroupTitle = pSVar1;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
                  (__this_01,id,label,controlWidth,(System_Action_AottgUi__o *)__this_00,tooltip,searchTitle,
                   searchKeywords,icon,(System_Nullable_float__o)local_res8,labelKey,tooltipKey,
                   (System_String_o *)0x0,local_a8,dirtyValue,(System_String_o *)0x0,(System_String_o *)0x0,
                   layoutMode,(MethodInfo *)0x0);
        if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x1821ebcd0

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplySearchContext(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, MethodInfo* method)

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


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182311490

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  System_String_o *rowId;
  
  if (Il2CppMethodInitialized_184347727 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_184347727 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
            (root,(__this->fields)._descriptor,(MethodInfo *)0x0);
  if ((__this->fields)._descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    rowId = (System_String_o *)0x0;
  }
  else {
    rowId = (((__this->fields)._descriptor)->fields).Id;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,rowId,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x18058aa60

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyLayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, int32_t mode, MethodInfo* method)

{
  (__this->fields)._layoutMode.fields._state = (uint32_t)value.fields._state;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildControl
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildControl (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18230f160

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildControl
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_Action_GisketchActionContext__o *action;
  undefined1 value;
  void *pvVar2;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  System_String_o *id;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  float fVar6;
  
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    switch((pGVar1->fields).Kind) {
    case 0:
      if (Il2CppMethodInitialized_184347728 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSwitch_b__10_0);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
        il2cpp_codegen_initialize_runtime_metadata(&"-switch");
        Il2CppMethodInitialized_184347728 = '\x01';
      }
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pSVar3 = System_String__Concat_1969e50((pGVar1->fields).Id,"-switch",(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._descriptor;
        if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
            value = false;
          }
          else {
            pvVar2 = InterfaceInvoker0_Invoke
                               (2,(Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                                (Il2CppObject *)(pGVar1->fields).Adapter);
            value = SUB81(pvVar2,0);
          }
          __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (__this_00,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSwitch_b__10_0
                     ,(MethodInfo_1387DC0 *)0x0);
          if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                               (control,pSVar3,(bool)value,(System_Action_GisketchActionContext__o *)__this_00
                                ,(MethodInfo *)0x0);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
            ;
            UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
            pGVar1 = (__this->fields)._descriptor;
            if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
              pSVar3 = (pGVar1->fields).Id;
              if (Il2CppMethodInitialized_184347736 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
                Il2CppMethodInitialized_184347736 = '\x01';
              }
              pSVar3 = System_String__Concat_1969e50(pSVar3,".controlValue",(MethodInfo *)0x0);
              if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                (__this_01->fields).value = pSVar3;
                Il2CppCodeGenWriteBarrier(&(__this_01->fields).value,pSVar3);
                if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (pGVar5->fields).bind = __this_01;
                  Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,__this_01);
                  fVar6 = 58.0;
                  goto label_18230f32c;
                }
              }
            }
          }
        }
      }
      break;
    case 1:
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown(__this,control,true,(MethodInfo *)0x0);
      return;
    case 2:
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown(__this,control,false,(MethodInfo *)0x0);
      return;
    case 3:
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider(__this,control,(MethodInfo *)0x0);
      return;
    case 4:
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput(__this,control,(MethodInfo *)0x0);
      return;
    case 5:
      if (Il2CppMethodInitialized_18434772f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-button");
        Il2CppMethodInitialized_18434772f = '\x01';
      }
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pSVar3 = (pGVar1->fields).ActionText;
        if ((pGVar1->fields).Action == (System_Action_GisketchActionContext__o *)0x0) {
          if (pSVar3 == (System_String_o *)0x0) {
            if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) break;
            pSVar3 = (pGVar1->fields).Label;
          }
          else if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) break;
          pSVar4 = (pGVar1->fields).ActionId;
          id = System_String__Concat_1969e50((pGVar1->fields).Id,"-button",(MethodInfo *)0x0);
          if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (control,1,pSVar3,pSVar4,id,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0);
        }
        else {
          if (pSVar3 == (System_String_o *)0x0) {
            pSVar3 = (pGVar1->fields).Label;
          }
          action = (pGVar1->fields).Action;
          pSVar4 = System_String__Concat_1969e50((pGVar1->fields).Id,"-button",(MethodInfo *)0x0);
          if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                             (control,1,pSVar3,action,pSVar4,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0);
        }
        fVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                          (__this,(MethodInfo *)0x0);
label_18230f32c:
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
                  (__this,pGVar5,fVar6,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      if (Il2CppMethodInitialized_184347730 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
        il2cpp_codegen_initialize_runtime_metadata(&"Column");
        il2cpp_codegen_initialize_runtime_metadata(&"text");
        il2cpp_codegen_initialize_runtime_metadata(&"-value");
        Il2CppMethodInitialized_184347730 = '\x01';
      }
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pSVar3 = (pGVar1->fields).ReadOnlyText;
        if (pSVar3 == (System_String_o *)0x0) {
          pGVar1 = (__this->fields)._descriptor;
          if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
            pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
          else {
            pSVar3 = InterfaceInvoker0_Invoke
                               (0,(Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                                (Il2CppObject *)(pGVar1->fields).Adapter);
          }
        }
        pGVar1 = (__this->fields)._descriptor;
        if ((pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
           (pSVar4 = System_String__Concat_1969e50
                               ((pGVar1->fields).Id,"-value",(MethodInfo *)0x0),
           control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (control,pSVar3,"text",pSVar4,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          fVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                            (__this,(MethodInfo *)0x0);
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar6,(MethodInfo *)0x0);
          maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,1.0,(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).layout = value_00;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,value_00);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildSwitch
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x1823103b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  undefined1 value;
  System_String_o *pSVar2;
  void *pvVar3;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_184347728 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSwitch_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"-switch");
    Il2CppMethodInitialized_184347728 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar2 = System_String__Concat_1969e50((pGVar1->fields).Id,"-switch",(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        value = false;
      }
      else {
        pvVar3 = InterfaceInvoker0_Invoke
                           (2,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                            (Il2CppObject *)(pGVar1->fields).Adapter);
        value = SUB81(pvVar3,0);
      }
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSwitch_b__10_0,
                 (MethodInfo_1387DC0 *)0x0);
      if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        node = Gisketch_Aottg2UI_Code_AottgUi__Switch
                         (control,pSVar2,(bool)value,(System_Action_GisketchActionContext__o *)__this_00,
                          (MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._descriptor;
        if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          pSVar2 = (pGVar1->fields).Id;
          if (Il2CppMethodInitialized_184347736 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
            Il2CppMethodInitialized_184347736 = '\x01';
          }
          pSVar2 = System_String__Concat_1969e50(pSVar2,".controlValue",(MethodInfo *)0x0);
          if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
            (__this_01->fields).value = pSVar2;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).value,pSVar2);
            if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (node->fields).bind = __this_01;
              Il2CppCodeGenWriteBarrier(&(node->fields).bind,__this_01);
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
                        (__this,node,58.0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildDropdown
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, bool dropdown, const MethodInfo* method);
// 0x18230f6c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230f7be: nop 

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,bool dropdown,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *value;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  uint uVar6;
  float minWidth;
  
  if (Il2CppMethodInitialized_184347729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnValueChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"-select");
    il2cpp_codegen_initialize_runtime_metadata(&"-dropdown");
    Il2CppMethodInitialized_184347729 = '\x01';
  }
  if (Il2CppMethodInitialized_184347739 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    Il2CppMethodInitialized_184347739 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pGVar2 = (pGVar1->fields).Options;
    if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
      pGVar2 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) goto label_18230fa1b;
    }
    options = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,
                         (uint32_t)pGVar2->max_length);
    for (uVar6 = 0; (int)uVar6 < (int)pGVar2->max_length; uVar6 = uVar6 + 1) {
      if ((uint)pGVar2->max_length <= uVar6) {
label_18230fa21:
        ThrowIndexOutOfRangeException();
      }
      value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                        (pGVar2->m_Items + (int)uVar6,(MethodInfo *)0x0);
      if (options == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_18230fa1b;
      if ((uint)options->max_length <= uVar6) goto label_18230fa21;
      options->m_Items[(int)uVar6] = value;
      Il2CppCodeGenWriteBarrier(options->m_Items + (int)uVar6,value);
    }
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        pSVar3 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                            (Il2CppObject *)(pGVar1->fields).Adapter);
      }
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pSVar4 = (pGVar1->fields).Id;
        if (dropdown) {
          pSVar4 = System_String__Concat_1969e50(pSVar4,"-dropdown",(MethodInfo *)0x0);
          pDVar5 = (DG_Tweening_Core_DOSetter_Color2__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (pDVar5,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnValueChanged,
                     (MethodInfo_1387DC0 *)0x0);
          pGVar1 = (__this->fields)._descriptor;
          if ((pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
             (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) goto label_18230fa1b;
          node = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_18c79c0
                           (control,pSVar4,pSVar3,options,(System_Action_GisketchActionContext__o *)pDVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (pGVar1->fields).MaxVisibleItems,(MethodInfo *)0x0);
        }
        else {
          pSVar4 = System_String__Concat_1969e50(pSVar4,"-select",(MethodInfo *)0x0);
          pDVar5 = (DG_Tweening_Core_DOSetter_Color2__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (pDVar5,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnValueChanged,
                     (MethodInfo_1387DC0 *)0x0);
          pGVar1 = (__this->fields)._descriptor;
          if ((pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
             (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) goto label_18230fa1b;
          node = Gisketch_Aottg2UI_Code_AottgUi__Select_18c9cc0
                           (control,pSVar4,pSVar3,options,(System_Action_GisketchActionContext__o *)pDVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (pGVar1->fields).MaxVisibleItems,(MethodInfo *)0x0);
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._descriptor;
        if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          pSVar3 = (pGVar1->fields).Id;
          if (Il2CppMethodInitialized_184347736 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
            Il2CppMethodInitialized_184347736 = '\x01';
          }
          pSVar3 = System_String__Concat_1969e50(pSVar3,".controlValue",(MethodInfo *)0x0);
          if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
            (__this_00->fields).value = pSVar3;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar3);
            if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (node->fields).bind = __this_00;
              Il2CppCodeGenWriteBarrier(&(node->fields).bind,__this_00);
              minWidth = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                                   (__this,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
                        (__this,node,minWidth,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_18230fa1b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildSlider
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x182310130
// asm: 15 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182310367: mov rdx, qword ptr [rip + 0x1dc9f8a]  ; "-slider"
// asm:   0x18231036e: xor r8d, r8d
// asm:   0x182310371: mov rcx, qword ptr [rax + 0x10]
// asm:   0x182310375: call 0x181969e50  ; System_String__Concat()
// asm:   0x18231037a: mov r8, rax
// asm:   0x18231037d: xor r9d, r9d
// asm:   0x182310380: mov rdx, rdi
// asm:   0x182310383: mov rcx, rbx
// asm:   0x182310386: call 0x182311040  ; Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode()
// asm:   0x18231038b: mov rdx, rax
// asm:   0x18231038e: xor r9d, r9d
// asm:   0x182310391: movaps xmm2, xmm6
// asm:   0x182310394: mov rcx, rbx
// asm:   0x182310397: call 0x18230ee60  ; Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout()
// asm:   0x18231039c: jmp 0x182310331

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  float minWidth;
  
  if (Il2CppMethodInitialized_18434772a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-slider-with-value");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-slider");
    Il2CppMethodInitialized_18434772a = '\x01';
  }
  minWidth = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth(__this,(MethodInfo *)0x0)
  ;
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    if ((pGVar1->fields).ShowValue == false) {
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pSVar2 = System_String__Concat_1969e50((pGVar1->fields).Id,"-slider",(MethodInfo *)0x0);
        node = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                         (__this,control,pSVar2,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
                  (__this,node,minWidth,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_0,
                 (MethodInfo *)0x0);
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pSVar2 = System_String__Concat_1969e50((pGVar1->fields).Id,"-slider-with-value",(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(minWidth,(MethodInfo *)0x0);
        maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (control,"clear",(System_Action_AottgUi__o *)__this_00,pSVar2,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, System_String_o* id, const MethodInfo* method);
// 0x182311040

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
          Gisketch_Aottg2UI_Code_AottgUi_o *control,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  System_String_o *pSVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float max;
  float min;
  float value;
  System_Nullable_bool__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_18434772b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_SliderNode_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    Il2CppMethodInitialized_18434772b = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    min = 0.0;
    if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
      value = 0.0;
    }
    else {
      InterfaceInvoker0_Invoke
                (1,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                 (Il2CppObject *)(pGVar1->fields).Adapter);
      value = extraout_XMM0_Da;
    }
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_SliderNode_b__13_0,
               (MethodInfo_1387DC0 *)0x0);
    pSVar3 = "slider";
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      if ((pGVar1->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        InterfaceInvoker0_Invoke
                  (3,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                   (Il2CppObject *)(pGVar1->fields).Adapter);
        min = extraout_XMM0_Da_00;
      }
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
          max = 1.0;
        }
        else {
          InterfaceInvoker0_Invoke
                    (4,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                     (Il2CppObject *)(pGVar1->fields).Adapter);
          max = extraout_XMM0_Da_01;
        }
        if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Slider_18ca110
                             (control,id,value,false,(System_Action_GisketchActionContext__o *)__this_00,
                              pSVar3,min,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              (MethodInfo *)0x0);
          pGVar1 = (__this->fields)._descriptor;
          if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
            local_res8[0].hasValue = false;
            local_res8[0].value = false;
            System_Nullable_bool____ctor
                      ((System_Data_SqlTypes_SqlByte_o *)local_res8,(pGVar1->fields).Disabled == false,
                       MethodInfo_System_Nullable_bool_ctor);
            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar2->fields).enabled.fields = local_res8[0];
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
              Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                        ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
              pGVar1 = (__this->fields)._descriptor;
              if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                pSVar3 = (pGVar1->fields).Id;
                if (Il2CppMethodInitialized_184347736 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
                  Il2CppMethodInitialized_184347736 = '\x01';
                }
                pSVar3 = System_String__Concat_1969e50(pSVar3,".controlValue",(MethodInfo *)0x0);
                if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                  (__this_01->fields).value = pSVar3;
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields).value,pSVar3);
                  (pGVar2->fields).bind = __this_01;
                  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_01);
                  return pGVar2;
                }
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$UpdateSliderValueText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__UpdateSliderValueText (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182311f50

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__UpdateSliderValueText
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_18434772c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434772c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (context->fields).GameObject;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (__this_00,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
            (root,(__this->fields)._descriptor,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x182311310

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar2 = (pGVar1->fields).Id;
    if (Il2CppMethodInitialized_184347735 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&".value");
      Il2CppMethodInitialized_184347735 = '\x01';
    }
    pSVar2 = System_String__Concat_1969e50(pSVar2,".value",(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x182311370

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText_2311380
                     ((__this->fields)._descriptor,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildInput
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18230fa30
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230fb9a: mov esi, ebp
// asm:   0x18230fb9c: jmp 0x18230fba3
// asm:   0x18230fd3c: mov ebx, ebp

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar3;
  Il2CppObject *obj;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_String_o *style;
  int32_t maxCharacters;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  VirtualInvokeData *pVVar6;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  ushort uVar9;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar10;
  int32_t type;
  float value;
  DG_Tweening_Core_DOSetter_Color2__o *local_res8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *local_res10;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar11;
  
  if (Il2CppMethodInitialized_18434772d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputCommitted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-input");
    Il2CppMethodInitialized_18434772d = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_18230ff11;
  id = System_String__Concat_1969e50((pGVar2->fields).Id,"-input",(MethodInfo *)0x0);
  pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if (Il2CppMethodInitialized_18434772e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_18434772e = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_18230ff11;
  pGVar3 = (pGVar2->fields).Adapter;
  pGVar11 = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0;
  maxCharacters = 0;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
label_18230fb9e:
    type = 2;
  }
  else {
    pGVar10 = pGVar11;
    if (pGVar3->klass ==
        (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter) {
      pGVar10 = pGVar3;
    }
    type = maxCharacters;
    if (pGVar10 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
      pGVar3 = (((__this->fields)._descriptor)->fields).Adapter;
      pGVar10 = pGVar11;
      if (pGVar3->klass ==
          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
          TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter) {
        pGVar10 = pGVar3;
      }
      if (pGVar10 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) goto label_18230fb9e;
      type = 1;
    }
  }
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth(__this,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  local_res10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
  local_res8 = (DG_Tweening_Core_DOSetter_Color2__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (local_res8,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputChanged,
             (MethodInfo_1387DC0 *)0x0);
  style = "inputField";
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    if ((pGVar2->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
      obj = (Il2CppObject *)(pGVar2->fields).Adapter;
      pIVar4 = obj->klass;
      uVar1 = (pIVar4->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        do {
          if (pIVar5[(longlong)pGVar11].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            maxCharacters =
                 (*pIVar4->vtable[pIVar5[(longlong)pGVar11].offset + 7].methodPtr)
                           (obj,pIVar4->vtable[pIVar5[(longlong)pGVar11].offset + 7].method);
            goto label_18230fd3e;
          }
          uVar9 = (short)pGVar11 + 1;
          pGVar11 = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)(ulonglong)uVar9;
        } while (uVar9 < uVar1);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,7)
      ;
      maxCharacters = (*pVVar6->methodPtr)(obj,pVVar6->method);
    }
label_18230fd3e:
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputCommitted,
               (MethodInfo_1387DC0 *)0x0);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (control,id,pSVar8,type,style,local_res10,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_Action_GisketchActionContext__o *)local_res8,0.05,maxCharacters,
                          (System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        if ((pGVar2->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        else {
          pSVar8 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                              (Il2CppObject *)(pGVar2->fields).Adapter);
        }
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).value = pSVar8;
          Il2CppCodeGenWriteBarrier(&(pGVar7->fields).value,pSVar8);
          pGVar2 = (__this->fields)._descriptor;
          if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
            local_res8 = (DG_Tweening_Core_DOSetter_Color2__o *)((ulonglong)local_res8 & 0xffffffffffff0000);
            System_Nullable_bool____ctor
                      ((System_Data_SqlTypes_SqlByte_o *)&local_res8,(pGVar2->fields).Disabled == false,
                       MethodInfo_System_Nullable_bool_ctor);
            (pGVar7->fields).enabled.fields = local_res8._0_2_;
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
            ;
            UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
            pGVar2 = (__this->fields)._descriptor;
            if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
              pSVar8 = (pGVar2->fields).Id;
              if (Il2CppMethodInitialized_184347736 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
                Il2CppMethodInitialized_184347736 = '\x01';
              }
              pSVar8 = System_String__Concat_1969e50(pSVar8,".controlValue",(MethodInfo *)0x0);
              if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                (__this_01->fields).value = pSVar8;
                Il2CppCodeGenWriteBarrier(&(__this_01->fields).value,pSVar8);
                (pGVar7->fields).bind = __this_01;
                Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind,__this_01);
                return;
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
label_18230ff11:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$InputType
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__InputType (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x182310a90

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__InputType
                  (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar3;
  
  if (Il2CppMethodInitialized_18434772e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_18434772e = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = (pGVar1->fields).Adapter;
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    return 2;
  }
  pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0;
  if (pGVar2->klass ==
      (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter) {
    pGVar3 = pGVar2;
  }
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    pGVar2 = (((__this->fields)._descriptor)->fields).Adapter;
    pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0;
    if (pGVar2->klass ==
        (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter) {
      pGVar3 = pGVar2;
    }
    return 2 - (uint)(pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0);
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildActionButton
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18230f010

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  System_String_o *id;
  System_String_o *text;
  float minWidth;
  
  if (Il2CppMethodInitialized_18434772f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-button");
    Il2CppMethodInitialized_18434772f = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    text = (pGVar1->fields).ActionText;
    if ((pGVar1->fields).Action == (System_Action_GisketchActionContext__o *)0x0) {
      if (text == (System_String_o *)0x0) {
        if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_18230f158;
        text = (pGVar1->fields).Label;
      }
      else if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_18230f158;
      pSVar2 = (pGVar1->fields).ActionId;
      id = System_String__Concat_1969e50((pGVar1->fields).Id,"-button",(MethodInfo *)0x0);
      if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_18230f158;
      node = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (control,1,text,pSVar2,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    }
    else {
      if (text == (System_String_o *)0x0) {
        text = (pGVar1->fields).Label;
      }
      action = (pGVar1->fields).Action;
      pSVar2 = System_String__Concat_1969e50((pGVar1->fields).Id,"-button",(MethodInfo *)0x0);
      if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_18230f158;
      node = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                       (control,1,text,action,pSVar2,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    }
    minWidth = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                         (__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
              (__this,node,minWidth,(MethodInfo *)0x0);
    return;
  }
label_18230f158:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildReadOnly
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18230ff20

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *text;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  float value_00;
  
  if (Il2CppMethodInitialized_184347730 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"-value");
    Il2CppMethodInitialized_184347730 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    text = (pGVar1->fields).ReadOnlyText;
    if (text == (System_String_o *)0x0) {
      pGVar1 = (__this->fields)._descriptor;
      if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        text = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          (Il2CppObject *)(pGVar1->fields).Adapter);
      }
    }
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      id = System_String__Concat_1969e50((pGVar1->fields).Id,"-value",(MethodInfo *)0x0);
      if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (control,text,"text",id,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        value_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                             (__this,(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(value_00,(MethodInfo *)0x0);
        maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).layout = value;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,value);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnValueChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnValueChanged (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182310dc0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnValueChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ushort uVar7;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347731 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347731 = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar2->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      pIVar3 = obj->klass;
      uVar1 = (pIVar3->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        uVar7 = 0;
        do {
          if (pIVar4[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar6 = pIVar3->vtable + (pIVar4[uVar7].offset + 0xb);
            goto label_182310e79;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar1);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          0xb);
label_182310e79:
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      (*pVVar6->methodPtr)(obj,&local_28,pVVar6->method);
    }
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      if ((pGVar2->fields).Kind != 4) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar5) {
          __this_00 = (context->fields).GameObject;
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_182310f53;
          root = UnityEngine_GameObject__GetComponentInParent_object_
                           (__this_00,
                            (MethodInfo_6F53B0 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        }
        else {
          root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
                  (root,(__this->fields)._descriptor,(MethodInfo *)0x0);
      }
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        local_28.fields.ElementId = (context->fields).ElementId;
        local_28.fields.GameObject = (context->fields).GameObject;
        local_28.fields.Node = (context->fields).Node;
        local_28.fields.InputSource = (context->fields).InputSource;
        local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar2,&local_28,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182310f53:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnInputChanged (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182310b30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182310b99: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnInputChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  VirtualInvokeData *pVVar5;
  ushort uVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347732 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_184347732 = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar2->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      pIVar3 = obj->klass;
      uVar1 = (pIVar3->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        uVar6 = 0;
        do {
          if (pIVar4[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar5 = pIVar3->vtable + (pIVar4[uVar6].offset + 0xb);
            goto label_182310bc5;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          0xb);
label_182310bc5:
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      (*pVVar5->methodPtr)(obj,&local_28,pVVar5->method);
    }
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar2,&local_28,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnInputCommitted
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnInputCommitted (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182310c40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnInputCommitted
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ushort uVar7;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347733 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347733 = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar2->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      pIVar3 = obj->klass;
      uVar1 = (pIVar3->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        uVar7 = 0;
        do {
          if (pIVar4[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar6 = pIVar3->vtable + (pIVar4[uVar7].offset + 0xb);
            goto label_182310ce6;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar1);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          0xb);
label_182310ce6:
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      (*pVVar6->methodPtr)(obj,&local_28,pVVar6->method);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar5) {
      __this_00 = (context->fields).GameObject;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_182310dad;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this_00,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    else {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
              (root,(__this->fields)._descriptor,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar2,&local_28,(MethodInfo *)0x0);
      return;
    }
  }
label_182310dad:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncSliderValue
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncSliderValue (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x182311480

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncSliderValue
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue(root,descriptor,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncValue
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x182311510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823116bd: mov rsi, qword ptr [rsp + 0x50]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Il2CppObject *obj;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_Globalization_CultureInfo_o *provider;
  Il2CppObject *pIVar5;
  float extraout_XMM0_Da;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184347734 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347734 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((!bVar2) && (descriptor != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0)) &&
     ((descriptor->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueKey
                         ((descriptor->fields).Id,(MethodInfo *)0x0);
      obj = (Il2CppObject *)(descriptor->fields).Adapter;
      if (Il2CppMethodInitialized_184347738 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
        Il2CppMethodInitialized_184347738 = '\x01';
      }
      local_res8[0] = 0.0;
      if (obj == (Il2CppObject *)0x0) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        pIVar5 = (Il2CppObject *)0x0;
        if (obj->klass == (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter) {
          pIVar5 = obj;
        }
        if (pIVar5 == (Il2CppObject *)0x0) {
          pSVar4 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                              obj);
        }
        else {
          InterfaceInvoker0_Invoke
                    (1,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,obj);
          local_res8[0] = extraout_XMM0_Da;
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar4 = System_Single__ToString_1b49fe0
                             (local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
        }
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar3,pSVar4,(MethodInfo *)0x0);
    }
    if (((descriptor->fields).ShowValue != false) &&
       (pGVar1 = (root->fields)._State_k__BackingField,
       pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey_23112d0
                         ((descriptor->fields).Id,(MethodInfo *)0x0);
      pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText_2311380
                         (descriptor,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar3,pSVar4,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey (System_String_o* id, const MethodInfo* method);
// 0x1823112d0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey_23112d0
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347735 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".value");
    Il2CppMethodInitialized_184347735 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,".value",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ControlValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueKey (System_String_o* id, const MethodInfo* method);
// 0x182310980

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347736 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
    Il2CppMethodInitialized_184347736 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,".controlValue",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x182311380

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText_2311380
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  System_Globalization_CultureInfo_o *provider;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if (Il2CppMethodInitialized_184347737 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"0.##");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347737 = '\x01';
  }
  local_res8[0] = 0.0;
  if ((descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
     ((descriptor->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) {
    return "0";
  }
  obj = (Il2CppObject *)(descriptor->fields).Adapter;
  pIVar2 = (Il2CppObject *)0x0;
  if (obj->klass == (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter) {
    pIVar2 = obj;
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    pSVar1 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,obj);
    return pSVar1;
  }
  InterfaceInvoker0_Invoke
            (1,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,obj);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Single__ToString_1b4a0d0
                     (local_res8,"0.##",(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ControlValueText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueText (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x1823109c0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueText
          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Globalization_CultureInfo_o *provider;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar2;
  float local_res8 [8];
  
  if (Il2CppMethodInitialized_184347738 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_184347738 = '\x01';
  }
  local_res8[0] = 0.0;
  if (adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pGVar2 = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0;
  if (adapter->klass ==
      (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter) {
    pGVar2 = adapter;
  }
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    pSVar1 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                        (Il2CppObject *)adapter);
    return pSVar1;
  }
  InterfaceInvoker0_Invoke
            (1,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
             (Il2CppObject *)adapter);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Single__ToString_1b49fe0(local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ChoiceOptions
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x182310870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823108f9: nop dword ptr [rax]

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *value;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347739 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    Il2CppMethodInitialized_184347739 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pGVar2 = (pGVar1->fields).Options;
    if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
      pGVar2 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) goto label_182310966;
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,
                        (uint32_t)pGVar2->max_length);
    uVar4 = 0;
    do {
      if ((int)pGVar2->max_length <= (int)uVar4) {
        return pGVar3;
      }
      if ((uint)pGVar2->max_length <= uVar4) {
label_18231096c:
        ThrowIndexOutOfRangeException();
      }
      value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                        (pGVar2->m_Items + (int)uVar4,(MethodInfo *)0x0);
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
      if ((uint)pGVar3->max_length <= uVar4) goto label_18231096c;
      pGVar3->m_Items[(int)uVar4] = value;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar4,value);
      uVar4 = uVar4 + 1;
    } while( true );
  }
label_182310966:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$PreferredControlWidth
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x182310fa0

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  switch((pGVar1->fields).Kind) {
  case 0:
    return 58.0;
  case 1:
  case 2:
    break;
  case 3:
    if ((__this->fields)._layoutMode != 1) {
      return 620.0;
    }
    break;
  case 4:
  case 6:
    if ((__this->fields)._layoutMode != 1) {
      return 360.0;
    }
    break;
  case 5:
    if ((__this->fields)._layoutMode != 1) {
      return 320.0;
    }
    break;
  default:
    return 360.0;
  }
  return 300.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$PreferredControlVisualWidth
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlVisualWidth (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x182310f60

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlVisualWidth
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  float fVar2;
  
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pGVar1->fields).Kind != 0) {
    fVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth(__this,(MethodInfo *)0x0);
    return fVar2;
  }
  return 58.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplyControlLayout
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, float minWidth, const MethodInfo* method);
// 0x18230ee60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,float minWidth,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_Nullable_bool__Fields local_res10 [4];
  
  if (Il2CppMethodInitialized_18434773a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_18434773a = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res10[0].hasValue = false;
    local_res10[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res10,(pGVar1->fields).Disabled == false,
               MethodInfo_System_Nullable_bool_ctor);
    (node->fields).enabled.fields = local_res10[0];
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(minWidth,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Row","Center","Center",
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
    (node->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(node->fields).layout,value);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSwitch>b__10_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSwitch_b__10_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182311bc0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSwitch_b__10_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ushort uVar7;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_18434773b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_18434773b = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar2->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        bVar5 = false;
      }
      else {
        bVar5 = System_String__op_Equality
                          ((((context->fields).Node)->fields).value,"true",(MethodInfo *)0x0);
      }
      pIVar3 = obj->klass;
      uVar7 = 0;
      uVar1 = (pIVar3->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        do {
          if (pIVar4[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar6 = pIVar3->vtable + (pIVar4[uVar7].offset + 8);
            goto label_182311ca5;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar1);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,8)
      ;
label_182311ca5:
      (*pVVar6->methodPtr)(obj,bVar5,pVVar6->method);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar5) {
      __this_00 = (context->fields).GameObject;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_182311d5c;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this_00,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    else {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
              (root,(__this->fields)._descriptor,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar2,&local_28,(MethodInfo *)0x0);
      return;
    }
  }
label_182311d5c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSlider>b__12_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__12_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823116d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__12_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  System_Nullable_bool__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_18434773c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-value-button");
    il2cpp_codegen_initialize_runtime_metadata(&"-slider");
    Il2CppMethodInitialized_18434773c = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar2 = System_String__Concat_1969e50((pGVar1->fields).Id,"-slider",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode(__this,row,pSVar2,(MethodInfo *)0x0)
    ;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).layout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,pGVar5);
      pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText_2311380
                         ((__this->fields)._descriptor,(MethodInfo *)0x0);
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_1,
                 (MethodInfo_1387DC0 *)0x0);
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        id = System_String__Concat_1969e50((pGVar1->fields).Id,"-value-button",(MethodInfo *)0x0);
        if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                             (row,5,pSVar2,(System_Action_GisketchActionContext__o *)__this_00,id,
                              (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              (System_String_o *)0x0,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._descriptor;
          if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
            pSVar2 = (pGVar1->fields).Id;
            if (Il2CppMethodInitialized_184347735 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&".value");
              Il2CppMethodInitialized_184347735 = '\x01';
            }
            pSVar2 = System_String__Concat_1969e50(pSVar2,".value",(MethodInfo *)0x0);
            if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
              (__this_01->fields).text = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).text,pSVar2);
              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar3->fields).bind = __this_01;
                Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind,__this_01);
                pGVar1 = (__this->fields)._descriptor;
                if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                  local_res8[0].hasValue = false;
                  local_res8[0].value = false;
                  System_Nullable_bool____ctor
                            ((System_Data_SqlTypes_SqlByte_o *)local_res8,(pGVar1->fields).Disabled == false,
                             MethodInfo_System_Nullable_bool_ctor);
                  (pGVar3->fields).enabled.fields = local_res8[0];
                  (pGVar3->fields).clip = true;
                  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(80.0,(MethodInfo *)0x0);
                  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(80.0,(MethodInfo *)0x0);
                  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(80.0,(MethodInfo *)0x0);
                  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                      0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                  (pGVar3->fields).layout = pGVar5;
                  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,pGVar5);
                  return;
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


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSlider>b__12_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__12_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182311af0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__12_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *value;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  value = (__this->fields)._descriptor;
  if (Il2CppMethodInitialized_184347751 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value");
    Il2CppMethodInitialized_184347751 = '\x01';
  }
  if (((value != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
      ((value->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) &&
     ((value->fields).Disabled == false)) {
    __this_00 = (context->fields).GameObject;
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor =
         value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->
                _descriptor,value);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                         (__this_00,
                          (MethodInfo_6F53B0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
         (__this_01 = (pGVar1->fields)._Overlays_k__BackingField,
         __this_01 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (__this_01,"setting-slider-value",true,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<SliderNode>b__13_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___SliderNode_b__13_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182311d70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___SliderNode_b__13_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Il2CppObject *obj;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *s;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  UnityEngine_Object_o *x;
  bool bVar6;
  System_Globalization_CultureInfo_o *provider;
  VirtualInvokeData *pVVar7;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ushort uVar8;
  float value;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_38;
  
  if (Il2CppMethodInitialized_18434773d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_18434773d = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar2->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      pGVar3 = (context->fields).Node;
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_182311f4a;
      s = (pGVar3->fields).value;
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      value = System_Single__Parse_1b49890(s,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      pIVar4 = obj->klass;
      uVar1 = (pIVar4->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        uVar8 = 0;
        do {
          if (pIVar5[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar7 = pIVar4->vtable + (pIVar5[uVar8].offset + 9);
            goto label_182311e67;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,9)
      ;
label_182311e67:
      (*pVVar7->methodPtr)(obj,value,pVVar7->method);
    }
    x = (UnityEngine_Object_o *)(context->fields).GameObject;
    if (Il2CppMethodInitialized_18434772c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434772c = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_182311f4a;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       ((UnityEngine_GameObject_o *)x,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    else {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
              (root,(__this->fields)._descriptor,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      local_38.fields.ElementId = (context->fields).ElementId;
      local_38.fields.GameObject = (context->fields).GameObject;
      local_38.fields.Node = (context->fields).Node;
      local_38.fields.InputSource = (context->fields).InputSource;
      local_38.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar2,&local_38,(MethodInfo *)0x0);
      return;
    }
  }
label_182311f4a:
  ThrowNullReferenceException();
}


