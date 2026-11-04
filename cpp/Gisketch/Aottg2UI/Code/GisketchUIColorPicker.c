// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPicker
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPicker.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.Definition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o __this, System_String_o* id, bool enableAlpha, System_Action_GisketchActionContext__o* save, bool livePreview, bool disabled, const MethodInfo* method);
// 0x1818da420

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o *__this,System_String_o *id,
               bool enableAlpha,System_Action_GisketchActionContext__o *save,bool livePreview,bool disabled,
               MethodInfo *method)

{
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier((void **)__this,id);
  (__this->fields).EnableAlpha = enableAlpha;
  (__this->fields).Save = save;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Save,save);
  (__this->fields).LivePreview = livePreview;
  (__this->fields).Disabled = disabled;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___ctor(Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__0 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1818f3450

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value_00;
  System_Nullable_bool__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184342100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0_Build_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184342100 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    pSVar2 = (pGVar1->fields)._label;
    pSVar3 = System_String__Concat_1969e50((pGVar1->fields)._id,"-label",(MethodInfo *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (row,pSVar2,"subtext",pSVar3,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__1;
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
        __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0_Build_b__1,
                   (MethodInfo_1387DC0 *)0x0);
        (__this->fields).__9__1 = (System_Action_GisketchActionContext__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
        pSVar3 = (pGVar1->fields)._id;
        if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
        }
        pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId(pSVar3,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                           (row,3,pSVar2,(System_Action_GisketchActionContext__o *)__this_00,pSVar3,
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (System_String_o *)0x0,(MethodInfo *)0x0);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
          local_res8[0].hasValue = false;
          local_res8[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Data_SqlTypes_SqlByte_o *)local_res8,(pGVar1->fields)._disabled == false,
                     MethodInfo_System_Nullable_bool_ctor);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).enabled.fields = local_res8[0];
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar4->fields).layout = pGVar7;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,pGVar7);
            value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                    SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
            pGVar1 = (__this->fields).__4__this;
            if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
              pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId
                                 ((pGVar1->fields)._id,(MethodInfo *)0x0);
              pSVar2 = (__this->fields).value;
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
              pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                   (pSVar3,pSVar2,pGVar7,(MethodInfo *)0x0);
              if (value != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                if ((int)value->max_length == 0) {
                  ThrowIndexOutOfRangeException();
                }
                value->m_Items[0] = value_00;
                Il2CppCodeGenWriteBarrier(value->m_Items,value_00);
                (pGVar4->fields).children = value;
                Il2CppCodeGenWriteBarrier(&(pGVar4->fields).children,value);
                pGVar1 = (__this->fields).__4__this;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
                  pSVar2 = (__this->fields).value;
                  pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId
                                     ((pGVar1->fields)._id,(MethodInfo *)0x0);
                  Gisketch_Aottg2UI_Code_AottgUi__Text
                            (row,pSVar2,"text",pSVar3,(System_String_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__1 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1818f3910

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__1
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184342101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184342101 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    id = (pGVar1->fields)._id;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(&local_28,id,true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___ctor(Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$<BuildCompact>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__0 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x1818f39a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value_00;
  System_Nullable_bool__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184342102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    Il2CppMethodInitialized_184342102 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    pSVar2 = (pGVar1->fields)._label;
    pSVar3 = System_String__Concat_1969e50((pGVar1->fields)._id,"-label",(MethodInfo *)0x0);
    if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (field,pSVar2,"accountInputLabel",pSVar3,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__1;
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
        __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__1
                   ,(MethodInfo_1387DC0 *)0x0);
        (__this->fields).__9__1 = (System_Action_GisketchActionContext__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
        pSVar3 = (pGVar1->fields)._id;
        if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
        }
        pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId(pSVar3,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                           (field,3,pSVar2,(System_Action_GisketchActionContext__o *)__this_00,pSVar3,
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (System_String_o *)0x0,(MethodInfo *)0x0);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
          local_res8[0].hasValue = false;
          local_res8[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Data_SqlTypes_SqlByte_o *)local_res8,(pGVar1->fields)._disabled == false,
                     MethodInfo_System_Nullable_bool_ctor);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).enabled.fields = local_res8[0];
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar4->fields).layout = pGVar7;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,pGVar7);
            value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                    SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
            pGVar1 = (__this->fields).__4__this;
            if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
              pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId
                                 ((pGVar1->fields)._id,(MethodInfo *)0x0);
              pSVar2 = (__this->fields).value;
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
              pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                   (pSVar3,pSVar2,pGVar7,(MethodInfo *)0x0);
              if (value != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                if ((int)value->max_length != 0) {
                  value->m_Items[0] = value_00;
                  Il2CppCodeGenWriteBarrier(value->m_Items,value_00);
                  (pGVar4->fields).children = value;
                  Il2CppCodeGenWriteBarrier(&(pGVar4->fields).children,value);
                  return;
                }
                ThrowIndexOutOfRangeException();
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$<BuildCompact>b__1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__1 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1818f3de0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__1
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184342103 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184342103 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    id = (pGVar1->fields)._id;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(&local_28,id,true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___cctor (const MethodInfo* method);
// 0x1818d8430

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *pSVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_02;
  
  if (Il2CppMethodInitialized_1843420e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd6f8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_BuildVisual);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIColorPickerVisual");
    Il2CppMethodInitialized_1843420e3 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar1 = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition
                        );
  System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)pSVar1,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_ctor);
  TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions,__this_00);
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar1 = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)pSVar1,
             (MethodInfo_1453150 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd6f8
            );
  TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values = __this_01;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values,__this_01);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_02,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_BuildVisual,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"GisketchUIColorPickerVisual",__this_02,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, System_Action_GisketchActionContext__o* save, bool enableAlpha, bool livePreview, bool compact, bool disabled, const MethodInfo* method);
// 0x1818d8670

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *value,System_Action_GisketchActionContext__o *save,
               bool enableAlpha,bool livePreview,bool compact,bool disabled,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value,value);
  (__this->fields)._save = save;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._save,save);
  (__this->fields)._enableAlpha = enableAlpha;
  (__this->fields)._livePreview = livePreview;
  (__this->fields)._compact = compact;
  (__this->fields)._disabled = disabled;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value (System_String_o* id, System_String_o* fallback, bool enableAlpha, const MethodInfo* method);
// 0x1818d8320

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
          (System_String_o *id,System_String_o *fallback,bool enableAlpha,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *local_res8;
  
  if (Il2CppMethodInitialized_1843420e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_1843420e4 = '\x01';
  }
  local_res8 = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)id,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar1) {
      return local_res8;
    }
    pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                       (fallback,enableAlpha,(System_String_o *)0x0,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Register
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register (System_String_o* id, System_String_o* value, System_Action_GisketchActionContext__o* save, bool enableAlpha, bool livePreview, bool disabled, const MethodInfo* method);
// 0x1818d7860

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
               (System_String_o *id,System_String_o *value,System_Action_GisketchActionContext__o *save,
               bool enableAlpha,bool livePreview,bool disabled,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this_00;
  bool bVar1;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_68;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_48;
  
  if (Il2CppMethodInitialized_1843420e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_1843420e5 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
  value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                       (value,enableAlpha,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)value_00,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
    local_68.fields.Id = (System_String_o *)0x0;
    local_68.fields.EnableAlpha = false;
    local_68.fields._9_7_ = 0;
    local_68.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
    local_68.fields.LivePreview = false;
    local_68.fields.Disabled = false;
    local_68.fields._26_6_ = 0;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor
              (&local_68,id,enableAlpha,save,livePreview,disabled,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0)
    {
      local_48.fields.Id = local_68.fields.Id;
      local_48.fields.EnableAlpha = local_68.fields.EnableAlpha;
      local_48.fields._9_7_ = local_68.fields._9_7_;
      local_48.fields.Save = local_68.fields.Save;
      local_48.fields.LivePreview = local_68.fields.LivePreview;
      local_48.fields.Disabled = local_68.fields.Disabled;
      local_48.fields._26_6_ = local_68.fields._26_6_;
      System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)id,
                 &local_48,
                 (MethodInfo_14979B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_set_Item
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue (System_String_o* id, System_String_o* value, bool enableAlpha, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x1818d7fb0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
               (System_String_o *id,System_String_o *value,bool enableAlpha,UnityEngine_GameObject_o *source,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *value_00;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_48;
  
  if (Il2CppMethodInitialized_1843420e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843420e6 = '\x01';
  }
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.EnableAlpha = false;
  local_48.fields._9_7_ = 0;
  local_48.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.LivePreview = false;
  local_48.fields.Disabled = false;
  local_48.fields._26_6_ = 0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this != (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                       &local_48,
                       (MethodInfo_1493C70 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                      );
    if (bVar1) {
      enableAlpha = local_48.fields.EnableAlpha;
    }
    value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                         (value,enableAlpha,(System_String_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)id,(Il2CppObject *)value_00,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((source == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1818d81b9;
        pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
      }
      else {
        pUVar2 = (UnityEngine_Transform_o *)0x0;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      if (Il2CppMethodInitialized_1843420fd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-swatch");
        Il2CppMethodInitialized_1843420fd = '\x01';
      }
      pSVar3 = System_String__Concat_1969e50(id,"-swatch",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch(pUVar2,pSVar3,value_00,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_1843420fe == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-value");
        Il2CppMethodInitialized_1843420fe = '\x01';
      }
      pSVar3 = System_String__Concat_1969e50(id,"-value",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText(pUVar2,pSVar3,value_00,(MethodInfo *)0x0);
      return;
    }
  }
label_1818d81b9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Build (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1818d5410
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d567f: xor r12d, r12d
// asm:   0x1818d57e4: mov rdx, qword ptr [rip + 0x27f85b5]  ; "row"
// asm:   0x1818d57eb: mov r9, rbx
// asm:   0x1818d57ee: mov qword ptr [rsp + 0x30], r12
// asm:   0x1818d57f3: mov r8, rsi
// asm:   0x1818d57f6: mov qword ptr [rsp + 0x28], r12
// asm:   0x1818d57fb: mov qword ptr [rsp + 0x20], rax
// asm:   0x1818d59de: mov rdx, qword ptr [rip + 0x27d59a3]  ; "clear"
// asm:   0x1818d59e5: mov r9, rbx
// asm:   0x1818d59e8: mov qword ptr [rsp + 0x30], r12
// asm:   0x1818d59ed: mov r8, rsi
// asm:   0x1818d59f0: mov qword ptr [rsp + 0x28], r12
// asm:   0x1818d59f5: mov qword ptr [rsp + 0x20], rax
// asm:   0x1818d59fa: jmp 0x1818d5800

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Build
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  bool bVar1;
  bool alpha;
  bool disabled;
  System_Action_GisketchActionContext__o *save;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this_01;
  bool bVar2;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *object;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *object_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_70;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_48;
  
  if (Il2CppMethodInitialized_1843420e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-color-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_1843420e7 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0
                     );
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    bVar1 = (__this->fields)._livePreview;
    pSVar4 = (__this->fields)._id;
    pSVar3 = (__this->fields)._value;
    save = (__this->fields)._save;
    alpha = (__this->fields)._enableAlpha;
    disabled = (__this->fields)._disabled;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    if (Il2CppMethodInitialized_1843420e5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_set_Item
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      Il2CppMethodInitialized_1843420e5 = '\x01';
    }
    bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
      pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                         (pSVar3,alpha,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_1818d5a05:
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar3,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      __this_01 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
      local_70.fields.Id = (System_String_o *)0x0;
      local_70.fields.EnableAlpha = false;
      local_70.fields._9_7_ = 0;
      local_70.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
      local_70.fields.LivePreview = false;
      local_70.fields.Disabled = false;
      local_70.fields._26_6_ = 0;
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor
                (&local_70,pSVar4,alpha,save,bVar1,disabled,(MethodInfo *)0x0);
      if (__this_01 ==
          (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0)
      goto label_1818d5a05;
      local_48.fields.Id = local_70.fields.Id;
      local_48.fields.EnableAlpha = local_70.fields.EnableAlpha;
      local_48.fields._9_7_ = local_70.fields._9_7_;
      local_48.fields.Save = local_70.fields.Save;
      local_48.fields.LivePreview = local_70.fields.LivePreview;
      local_48.fields.Disabled = local_70.fields.Disabled;
      local_48.fields._26_6_ = local_70.fields._26_6_;
      System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)pSVar4,
                 &local_48,
                 (MethodInfo_14979B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_set_Item
                );
    }
    pSVar4 = "#FFFFFF";
    if ((__this->fields)._enableAlpha != false) {
      pSVar4 = "#FFFFFFFF";
    }
    pSVar3 = (__this->fields)._id;
    bVar1 = (__this->fields)._enableAlpha;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    pSVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar3,pSVar4,bVar1,(MethodInfo *)0x0);
    (object->fields).value = pSVar4;
    Il2CppCodeGenWriteBarrier(&(object->fields).value,pSVar4);
    if ((__this->fields)._compact == false) {
      __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_02,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0_Build_b__0,
                 (MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pSVar3 = "row";
    }
    else {
      pSVar4 = (object->fields).value;
      if (Il2CppMethodInitialized_1843420e8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0);
        il2cpp_codegen_initialize_runtime_metadata(&"clear");
        il2cpp_codegen_initialize_runtime_metadata(&"-color-picker");
        il2cpp_codegen_initialize_runtime_metadata(&"Column");
        il2cpp_codegen_initialize_runtime_metadata(&"Center");
        Il2CppMethodInitialized_1843420e8 = '\x01';
      }
      object_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object_00,(MethodInfo *)0x0);
      if (object_00 == (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *)0x0)
      goto label_1818d59ff;
      (object_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object_00->fields).__4__this,__this);
      (object_00->fields).value = pSVar4;
      Il2CppCodeGenWriteBarrier(&(object_00->fields).value,pSVar4);
      __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_02,(Il2CppObject *)object_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__0
                 ,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(70.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,4.0,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      pSVar3 = "clear";
    }
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,pSVar3,(System_Action_AottgUi__o *)__this_02,pSVar4,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_1818d59ff:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildCompact
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* value, const MethodInfo* method);
// 0x1818d5100

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_1843420e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-color-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    Il2CppMethodInitialized_1843420e8 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0
                     );
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).value,value);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__0,
               (MethodInfo *)0x0);
    id = System_String__Concat_1969e50((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(70.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,4.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current (System_String_o* id, bool enableAlpha, const MethodInfo* method);
// 0x1818d6060

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current(System_String_o *id,bool enableAlpha,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843420e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_1843420e9 = '\x01';
  }
  pSVar1 = "#FFFFFF";
  if (enableAlpha) {
    pSVar1 = "#FFFFFFFF";
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  pSVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar1,enableAlpha,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Commit
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x1818d5d70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d6030: mov r14, qword ptr [rsp + 0xa8]

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit
               (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Action_GisketchActionContext__o *pSVar1;
  bool bVar2;
  System_String_o *value_00;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_68;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_1843420ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    Il2CppMethodInitialized_1843420ea = '\x01';
  }
  local_68.fields.Id = (System_String_o *)0x0;
  local_68.fields.EnableAlpha = false;
  local_68.fields._9_7_ = 0;
  local_68.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_68.fields.LivePreview = false;
  local_68.fields.Disabled = false;
  local_68.fields._26_6_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this != (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                       &local_68,
                       (MethodInfo_1493C70 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                      );
    if (bVar2) {
      value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex
                           (value,local_68.fields.EnableAlpha,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1818d6055;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)id,(Il2CppObject *)value_00,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((source == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_1818d6055;
        pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0);
      }
      else {
        pUVar3 = (UnityEngine_Transform_o *)0x0;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      if (Il2CppMethodInitialized_1843420fd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-swatch");
        Il2CppMethodInitialized_1843420fd = '\x01';
      }
      pSVar4 = System_String__Concat_1969e50(id,"-swatch",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch(pUVar3,pSVar4,value_00,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_1843420fe == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-value");
        Il2CppMethodInitialized_1843420fe = '\x01';
      }
      pSVar4 = System_String__Concat_1969e50(id,"-value",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText(pUVar3,pSVar4,value_00,(MethodInfo *)0x0);
      pSVar1 = local_68.fields.Save;
      if (local_68.fields.Save != (System_Action_GisketchActionContext__o *)0x0) {
        node = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        (node->fields).active = true;
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)node,(MethodInfo *)0x0);
        (node->fields).id = "save";
        Il2CppCodeGenWriteBarrier(&(node->fields).id,"save");
        (node->fields).value = value_00;
        Il2CppCodeGenWriteBarrier(&(node->fields).value,value_00);
        local_48.fields.ElementId = (System_String_o *)0x0;
        local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        local_48.fields.InputSource = 0;
        local_48.fields._28_4_ = 0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor(&local_48,id,source,node,(MethodInfo *)0x0);
        local_28 = local_48.fields.ElementId._0_4_;
        uStack_24 = local_48.fields.ElementId._4_4_;
        uStack_20 = local_48.fields.GameObject._0_4_;
        uStack_1c = local_48.fields.GameObject._4_4_;
        local_18 = local_48.fields.Node._0_4_;
        uStack_14 = local_48.fields.Node._4_4_;
        iStack_10 = local_48.fields.InputSource;
        uStack_c = local_48.fields._28_4_;
        (*(code *)(pSVar1->fields).invoke_impl)
                  ((pSVar1->fields).method_code,&local_28,(pSVar1->fields).method);
      }
    }
    return;
  }
label_1818d6055:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Preview
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x1818d76a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d7830: mov rdi, qword ptr [rsp + 0xa8]

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
               (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  System_Action_GisketchActionContext__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_68;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_1843420eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"preview");
    Il2CppMethodInitialized_1843420eb = '\x01';
  }
  local_68.fields.Id = (System_String_o *)0x0;
  local_68.fields.EnableAlpha = false;
  local_68.fields._9_7_ = 0;
  local_68.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_68.fields.LivePreview = false;
  local_68.fields.Disabled = false;
  local_68.fields._26_6_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this == (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                     &local_68,
                     (MethodInfo_1493C70 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                    );
  pSVar1 = local_68.fields.Save;
  if (((bVar2) && (local_68.fields.LivePreview != false)) &&
     (local_68.fields.Save != (System_Action_GisketchActionContext__o *)0x0)) {
    node = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    (node->fields).active = true;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)node,(MethodInfo *)0x0);
    (node->fields).id = "preview";
    Il2CppCodeGenWriteBarrier(&(node->fields).id,"preview");
    value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex
                         (value,local_68.fields.EnableAlpha,(MethodInfo *)0x0);
    (node->fields).value = value_00;
    Il2CppCodeGenWriteBarrier(&(node->fields).value,value_00);
    local_48.fields.ElementId = (System_String_o *)0x0;
    local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
    local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    local_48.fields.InputSource = 0;
    local_48.fields._28_4_ = 0;
    Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor(&local_48,id,source,node,(MethodInfo *)0x0);
    local_28 = local_48.fields.ElementId._0_4_;
    uStack_24 = local_48.fields.ElementId._4_4_;
    uStack_20 = local_48.fields.GameObject._0_4_;
    uStack_1c = local_48.fields.GameObject._4_4_;
    local_18 = local_48.fields.Node._0_4_;
    uStack_14 = local_48.fields.Node._4_4_;
    iStack_10 = local_48.fields.InputSource;
    uStack_c = local_48.fields._28_4_;
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,&local_28,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel (System_String_o* id, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x1818d5be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d5d47: mov rdi, qword ptr [rsp + 0xa8]

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel
               (System_String_o *id,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  System_Action_GisketchActionContext__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_68;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_1843420ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"cancel");
    Il2CppMethodInitialized_1843420ec = '\x01';
  }
  local_68.fields.Id = (System_String_o *)0x0;
  local_68.fields.EnableAlpha = false;
  local_68.fields._9_7_ = 0;
  local_68.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_68.fields.LivePreview = false;
  local_68.fields.Disabled = false;
  local_68.fields._26_6_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this == (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                     &local_68,
                     (MethodInfo_1493C70 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                    );
  pSVar1 = local_68.fields.Save;
  if (((bVar2) && (local_68.fields.LivePreview != false)) &&
     (local_68.fields.Save != (System_Action_GisketchActionContext__o *)0x0)) {
    node = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    (node->fields).active = true;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)node,(MethodInfo *)0x0);
    (node->fields).id = "cancel";
    Il2CppCodeGenWriteBarrier(&(node->fields).id,"cancel");
    local_48.fields.ElementId = (System_String_o *)0x0;
    local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
    local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    local_48.fields.InputSource = 0;
    local_48.fields._28_4_ = 0;
    Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor(&local_48,id,source,node,(MethodInfo *)0x0);
    local_28 = local_48.fields.ElementId._0_4_;
    uStack_24 = local_48.fields.ElementId._4_4_;
    uStack_20 = local_48.fields.GameObject._0_4_;
    uStack_1c = local_48.fields.GameObject._4_4_;
    local_18 = local_48.fields.Node._0_4_;
    uStack_14 = local_48.fields.Node._4_4_;
    iStack_10 = local_48.fields.InputSource;
    uStack_c = local_48.fields._28_4_;
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,&local_28,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PopoverNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode (System_String_o* id, const MethodInfo* method);
// 0x1818d6aa0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  float value_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_58;
  
  if (Il2CppMethodInitialized_1843420ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"-hex-row");
    il2cpp_codegen_initialize_runtime_metadata(&"-hex-label");
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"-cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-b-field");
    il2cpp_codegen_initialize_runtime_metadata(&"g");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"-save");
    il2cpp_codegen_initialize_runtime_metadata(&"-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"G");
    il2cpp_codegen_initialize_runtime_metadata(&"Color Picker");
    il2cpp_codegen_initialize_runtime_metadata(&"b");
    il2cpp_codegen_initialize_runtime_metadata(&"HEX");
    il2cpp_codegen_initialize_runtime_metadata(&"-popover");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"r");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIColorPickerVisual");
    il2cpp_codegen_initialize_runtime_metadata(&"-rgb-row");
    il2cpp_codegen_initialize_runtime_metadata(&"-r-field");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"-g-field");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    Il2CppMethodInitialized_1843420ed = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this != (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
    System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___get_Item
              (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
               (MethodInfo_14655A0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_get_Item
              );
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    (__this_00->fields).active = true;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Panel");
      pSVar1 = System_String__Concat_1969e50(id,"-popover",(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar1);
      (__this_00->fields).style = "popover";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"popover");
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(380.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (__this_00->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,pGVar3);
      value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,6);
      pGVar4 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      (pGVar4->fields).active = true;
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar4,(MethodInfo *)0x0);
      (pGVar4->fields).type = "Text";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type,"Text");
      pSVar1 = System_String__Concat_1969e50(id,"-title",(MethodInfo *)0x0);
      (pGVar4->fields).id = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id,pSVar1);
      (pGVar4->fields).text = "Color Picker";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).text,"Color Picker");
      (pGVar4->fields).style = "subtext";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style,"subtext");
      if (value != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((int)value->max_length != 0) {
          value->m_Items[0] = pGVar4;
          Il2CppCodeGenWriteBarrier(value->m_Items,pGVar4);
          if (Il2CppMethodInitialized_1843420f9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"-preview");
            Il2CppMethodInitialized_1843420f9 = '\x01';
          }
          pSVar1 = System_String__Concat_1969e50(id,"-preview",(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_1843420e9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker)
            ;
            il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
            il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
            Il2CppMethodInitialized_1843420e9 = '\x01';
          }
          pSVar5 = "#FFFFFF";
          if (local_58.fields.EnableAlpha != false) {
            pSVar5 = "#FFFFFFFF";
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
          }
          pSVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                             (id,pSVar5,local_58.fields.EnableAlpha,(MethodInfo *)0x0);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(32.0,(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_1843420f6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
            il2cpp_codegen_initialize_runtime_metadata(&"profileColorSwatch");
            il2cpp_codegen_initialize_runtime_metadata(&"ColorSwatch");
            Il2CppMethodInitialized_1843420f6 = '\x01';
          }
          pGVar4 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          (pGVar4->fields).active = true;
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar4,(MethodInfo *)0x0);
          (pGVar4->fields).type = "ColorSwatch";
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type,"ColorSwatch");
          (pGVar4->fields).id = pSVar1;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id,pSVar1);
          (pGVar4->fields).style = "profileColorSwatch";
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style,"profileColorSwatch");
          (pGVar4->fields).value = pSVar5;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).value,pSVar5);
          (pGVar4->fields).layout = pGVar3;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,pGVar3);
          if (1 < (uint)value->max_length) {
            value->m_Items[1] = pGVar4;
            Il2CppCodeGenWriteBarrier(value->m_Items + 1,pGVar4);
            pGVar4 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
            (pGVar4->fields).active = true;
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar4,(MethodInfo *)0x0)
            ;
            if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818d764e;
            (pGVar4->fields).type = "GisketchUIColorPickerVisual";
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type,"GisketchUIColorPickerVisual");
            if (Il2CppMethodInitialized_1843420fa == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"-visual");
              Il2CppMethodInitialized_1843420fa = '\x01';
            }
            pSVar1 = System_String__Concat_1969e50(id,"-visual",(MethodInfo *)0x0);
            (pGVar4->fields).id = pSVar1;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id,pSVar1);
            (pGVar4->fields).value = id;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).value,id);
            pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
            pSVar1 = "Column";
            if (local_58.fields.EnableAlpha == false) {
              value_00 = 220.0;
            }
            else {
              value_00 = 260.0;
            }
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(value_00,(MethodInfo *)0x0);
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               (pSVar1,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,0.0,pGVar2,pGVar6,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar4->fields).layout = pGVar3;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,pGVar3);
            if (2 < (uint)value->max_length) {
              value->m_Items[2] = pGVar4;
              Il2CppCodeGenWriteBarrier(value->m_Items + 2,pGVar4);
              pSVar1 = System_String__Concat_1969e50(id,"-rgb-row",(MethodInfo *)0x0);
              pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                       SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,3);
              pSVar5 = System_String__Concat_1969e50(id,"-r-field",(MethodInfo *)0x0);
              if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
              }
              pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                 (id,"r",(MethodInfo *)0x0);
              pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                 (pSVar5,"R",pGVar4,(MethodInfo *)0x0);
              if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_1818d764e;
              if ((int)pGVar7->max_length != 0) {
                pGVar7->m_Items[0] = pGVar4;
                Il2CppCodeGenWriteBarrier(pGVar7->m_Items,pGVar4);
                pSVar5 = System_String__Concat_1969e50(id,"-g-field",(MethodInfo *)0x0);
                pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                   (id,"g",(MethodInfo *)0x0);
                pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                   (pSVar5,"G",pGVar4,(MethodInfo *)0x0);
                if (1 < (uint)pGVar7->max_length) {
                  pGVar7->m_Items[1] = pGVar4;
                  Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1,pGVar4);
                  pSVar5 = System_String__Concat_1969e50(id,"-b-field",(MethodInfo *)0x0);
                  pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                     (id,"b",(MethodInfo *)0x0);
                  pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                     (pSVar5,"B",pGVar4,(MethodInfo *)0x0);
                  if (2 < (uint)pGVar7->max_length) {
                    pGVar7->m_Items[2] = pGVar4;
                    Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 2,pGVar4);
                    pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                       (pSVar1,pGVar7,(MethodInfo *)0x0);
                    if (3 < (uint)value->max_length) {
                      value->m_Items[3] = pGVar4;
                      Il2CppCodeGenWriteBarrier(value->m_Items + 3,pGVar4);
                      pSVar1 = System_String__Concat_1969e50(id,"-hex-row",(MethodInfo *)0x0);
                      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,2);
                      pSVar5 = System_String__Concat_1969e50(id,"-hex-label",(MethodInfo *)0x0);
                      pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
                                         (pSVar5,"HEX",42.0,(MethodInfo *)0x0);
                      if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
                      goto label_1818d764e;
                      if ((int)pGVar7->max_length != 0) {
                        pGVar7->m_Items[0] = pGVar4;
                        Il2CppCodeGenWriteBarrier(pGVar7->m_Items,pGVar4);
                        pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput
                                           (id,local_58.fields.EnableAlpha,(MethodInfo *)0x0);
                        if (1 < (uint)pGVar7->max_length) {
                          pGVar7->m_Items[1] = pGVar4;
                          Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1,pGVar4);
                          pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                             (pSVar1,pGVar7,(MethodInfo *)0x0);
                          if (4 < (uint)value->max_length) {
                            value->m_Items[4] = pGVar4;
                            Il2CppCodeGenWriteBarrier(value->m_Items + 4,pGVar4);
                            pSVar1 = System_String__Concat_1969e50(id,"-footer",(MethodInfo *)0x0)
                            ;
                            pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                     SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,2
                                               );
                            pSVar5 = System_String__Concat_1969e50(id,"-cancel",(MethodInfo *)0x0)
                            ;
                            pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                               (pSVar5,"Cancel","buttonQuiet",
                                                (MethodInfo *)0x0);
                            if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
                            goto label_1818d764e;
                            if ((int)pGVar7->max_length != 0) {
                              pGVar7->m_Items[0] = pGVar4;
                              Il2CppCodeGenWriteBarrier(pGVar7->m_Items,pGVar4);
                              pSVar5 = System_String__Concat_1969e50
                                                 (id,"-save",(MethodInfo *)0x0);
                              pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                                 (pSVar5,"Save","buttonPrimary",
                                                  (MethodInfo *)0x0);
                              if (1 < (uint)pGVar7->max_length) {
                                pGVar7->m_Items[1] = pGVar4;
                                Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1,pGVar4);
                                pGVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                   (pSVar1,pGVar7,(MethodInfo *)0x0);
                                if (5 < (uint)value->max_length) {
                                  value->m_Items[5] = pGVar4;
                                  Il2CppCodeGenWriteBarrier(value->m_Items + 5,pGVar4);
                                  (__this_00->fields).children = value;
                                  Il2CppCodeGenWriteBarrier(&(__this_00->fields).children,value);
                                  return __this_00;
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
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1818d764e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Open
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool focusOnOpen, const MethodInfo* method);
// 0x1818d6810

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *id,
               bool focusOnOpen,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root_00;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_01;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_38;
  
  if (Il2CppMethodInitialized_1843420ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerPopover);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"color-picker-");
    Il2CppMethodInitialized_1843420ee = '\x01';
  }
  local_38.fields.Id = (System_String_o *)0x0;
  local_38.fields.EnableAlpha = false;
  local_38.fields._9_7_ = 0;
  local_38.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_38.fields.LivePreview = false;
  local_38.fields.Disabled = false;
  local_38.fields._26_6_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this == (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0)
  goto label_1818d6a8d;
  bVar2 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                     &local_38,
                     (MethodInfo_1493C70 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                    );
  if ((bVar2) && (local_38.fields.Disabled == false)) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (context->fields).GameObject;
      if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_1818d6a8d;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (pUVar1,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    else {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_1818d6a8d:
        ThrowNullReferenceException();
      }
      if ((root->fields)._Overlays_k__BackingField !=
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        __this_00 = (root->fields)._Overlays_k__BackingField;
        id_00 = System_String__Concat_1969e50("color-picker-",id,(MethodInfo *)0x0);
        pUVar1 = (context->fields).GameObject;
        if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
        }
        root_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode(id,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                      (__this_00,id_00,root_00,pUVar1,focusOnOpen,false,8.0,true,0,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((x != (UnityEngine_Object_o *)0x0) &&
             (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                    ((UnityEngine_GameObject_o *)x,
                                     (MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerPopover
                                    ),
             __this_01 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                      (__this_01,id,(context->fields).GameObject,root,(MethodInfo *)0x0);
            return;
          }
          goto label_1818d6a8d;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildVisual
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildVisual (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818d52f0

bool Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildVisual
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_28;
  
  if (Il2CppMethodInitialized_1843420ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_1843420ef = '\x01';
  }
  local_28.fields.Id = (System_String_o *)0x0;
  local_28.fields.EnableAlpha = false;
  local_28.fields._9_7_ = 0;
  local_28.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_28.fields.LivePreview = false;
  local_28.fields.Disabled = false;
  local_28.fields._26_6_ = 0;
  if ((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0), bVar1)) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this != (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)(node->fields).value,&local_28,
                       (MethodInfo_1493C70 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                      );
    if (!bVar1) {
      return true;
    }
    if (((go != (UnityEngine_GameObject_o *)0x0) &&
        (__this_00 = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual)
        , context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) &&
       (__this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                (__this_00,(node->fields).value,local_28.fields.EnableAlpha,(context->fields).Theme,
                 (MethodInfo *)0x0);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$RgbInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput (System_String_o* id, System_String_o* suffix, const MethodInfo* method);
// 0x1818d79c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
          (System_String_o *id,System_String_o *suffix,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_1843420f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_1843420f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).type = "InputField";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type,"InputField");
  pSVar1 = System_String__Concat_1969b70(id,"-",suffix,(MethodInfo *)0x0);
  (__this->fields).id = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id,pSVar1);
  (__this->fields).placeholder = "0";
  Il2CppCodeGenWriteBarrier(&(__this->fields).placeholder,"0");
  local_28.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
  local_28.monitor = &g_data_ffffffffffffffff;
  local_18 = 2;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  (__this->fields).inputType = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).inputType,pSVar1);
  (__this->fields).style = "inputField";
  Il2CppCodeGenWriteBarrier(&(__this->fields).style,"inputField");
  (__this->fields).maxCharacters = 3;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                    ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                     (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                     1.0,(MethodInfo *)0x0);
  (__this->fields).layout = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
  return __this;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput (System_String_o* id, bool alpha, const MethodInfo* method);
// 0x1818d63c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput(System_String_o *id,bool alpha,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_1843420f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"#RRGGBBAA");
    il2cpp_codegen_initialize_runtime_metadata(&"#RRGGBB");
    Il2CppMethodInitialized_1843420f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "InputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"InputField");
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    if (Il2CppMethodInitialized_1843420fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-hex");
      Il2CppMethodInitialized_1843420fb = '\x01';
    }
    pSVar1 = System_String__Concat_1969e50(id,"-hex",(MethodInfo *)0x0);
    (__this->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,pSVar1);
    pSVar1 = "#RRGGBB";
    if (alpha) {
      pSVar1 = "#RRGGBBAA";
    }
    (__this->fields).placeholder = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).placeholder,pSVar1);
    local_28.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
    local_28.monitor = &g_data_ffffffffffffffff;
    local_18 = 0;
    pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    (__this->fields).inputType = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).inputType,pSVar1);
    (__this->fields).style = "inputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,"inputField");
    (__this->fields).maxCharacters = (uint)alpha * 2 + 7;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
    (__this->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Field
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field (System_String_o* id, System_String_o* label, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* input, const MethodInfo* method);
// 0x1818d6100

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
          (System_String_o *id,System_String_o *label,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *input,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_00;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value_01;
  
  if (Il2CppMethodInitialized_1843420f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_1843420f2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).type = "Panel";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Panel");
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
  (__this->fields).style = "clear";
  Il2CppCodeGenWriteBarrier(&(__this->fields).style,"clear");
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                    ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0
                     ,(System_String_o *)0x0,6.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                     1.0,(MethodInfo *)0x0);
  (__this->fields).layout = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
  value_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,2);
  id_00 = System_String__Concat_1969e50(id,"-label",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  value_01 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label(id_00,label,18.0,(MethodInfo *)0x0);
  if (value_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)value_00->max_length != 0) {
      value_00->m_Items[0] = value_01;
      Il2CppCodeGenWriteBarrier(value_00->m_Items,value_01);
      if (1 < (uint)value_00->max_length) {
        value_00->m_Items[1] = input;
        Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,input);
        (__this->fields).children = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).children,value_00);
        return __this;
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Label
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label (System_String_o* id, System_String_o* text, float width, const MethodInfo* method);
// 0x1818d6650

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
          (System_String_o *id,System_String_o *text,float width,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_1843420f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_1843420f3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).type = "Text";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Text");
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
  (__this->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields).text,text);
  (__this->fields).style = "text";
  Il2CppCodeGenWriteBarrier(&(__this->fields).style,"text");
  width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                    ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                     (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                     0.0,(MethodInfo *)0x0);
  (__this->fields).layout = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
  return __this;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Row
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row (System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x1818d7c10

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
          (System_String_o *id,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_1843420f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_1843420f4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).type = "Panel";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Panel");
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
  (__this->fields).style = "clear";
  Il2CppCodeGenWriteBarrier(&(__this->fields).style,"clear");
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                    ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0
                     ,(System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                     1.0,(MethodInfo *)0x0);
  (__this->fields).layout = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
  (__this->fields).children = children;
  Il2CppCodeGenWriteBarrier(&(__this->fields).children,children);
  return __this;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button (System_String_o* id, System_String_o* text, System_String_o* style, const MethodInfo* method);
// 0x1818d5a50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
          (System_String_o *id,System_String_o *text,System_String_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_1843420f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_1843420f5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).type = "Button";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Button");
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
  (__this->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields).text,text);
  (__this->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields).style,style);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                    ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                     (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                     1.0,(MethodInfo *)0x0);
  (__this->fields).layout = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
  return __this;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode (System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x1818d8200

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
          (System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  
  if (Il2CppMethodInitialized_1843420f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profileColorSwatch");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorSwatch");
    Il2CppMethodInitialized_1843420f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).type = "ColorSwatch";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type,"ColorSwatch");
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
  (__this->fields).style = "profileColorSwatch";
  Il2CppCodeGenWriteBarrier(&(__this->fields).style,"profileColorSwatch");
  (__this->fields).value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).value,value);
  (__this->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout,layout);
  return __this;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetSwatch
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x1818d7de0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *x;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_1843420f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843420f7 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  x = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                (root,id,(MethodInfo_68B400 *)
                         MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_18.fields.r = local_28.r;
      local_18.fields.g = local_28.g;
      local_18.fields.b = local_28.b;
      local_18.fields.a = local_28.a;
      (*(x->klass->vtable)._23_set_color.methodPtr)(x,&local_18,(x->klass->vtable)._23_set_color.method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetText
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x1818d7ee0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  TMPro_TextMeshProUGUI_o *x;
  
  if (Il2CppMethodInitialized_1843420f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843420f8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  x = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                (root,id,(MethodInfo_68B400 *)
                         MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TextMeshProUGUI);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(x->klass->vtable)._66_set_text.methodPtr)(x,value,(x->klass->vtable)._66_set_text.method);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_68B400* method);
// 0x18068b400
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068b506: mov rax, rdi
// asm:   0x18068b509: jmp 0x18068b50d

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_68B400 *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar3;
  
  if ((method->rgctx_data == (MethodInfo_68B400_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_68B400_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_665440 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar2 == (System_Object_array *)0x0)) {
label_18068b528:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) goto label_18068b528;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
        if (bVar1) {
          return (Il2CppObject *)x;
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PreviewId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId (System_String_o* id, const MethodInfo* method);
// 0x1818d7660

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843420f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-preview");
    Il2CppMethodInitialized_1843420f9 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,"-preview",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$VisualId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId (System_String_o* id, const MethodInfo* method);
// 0x1818d83f0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843420fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-visual");
    Il2CppMethodInitialized_1843420fa = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,"-visual",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId (System_String_o* id, const MethodInfo* method);
// 0x1818d6380

System_String_o * Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843420fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-hex");
    Il2CppMethodInitialized_1843420fb = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,"-hex",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$ButtonId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId (System_String_o* id, const MethodInfo* method);
// 0x1818d5a10

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843420fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-button");
    Il2CppMethodInitialized_1843420fc = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,"-button",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId (System_String_o* id, const MethodInfo* method);
// 0x1818d81c0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843420fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-swatch");
    Il2CppMethodInitialized_1843420fd = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,"-swatch",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$TextId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId (System_String_o* id, const MethodInfo* method);
// 0x1818d82e0

System_String_o * Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843420fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-value");
    Il2CppMethodInitialized_1843420fe = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,"-value",(MethodInfo *)0x0);
  return pSVar1;
}


