// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPicker
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPicker.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.Definition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o __this, System_String_o* id, bool enableAlpha, System_Action_GisketchActionContext__o* save, bool livePreview, bool disabled, const MethodInfo* method);
// 0x5372700

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o *__this,System_String_o *id,
               bool enableAlpha,System_Action_GisketchActionContext__o *save,bool livePreview,bool disabled,
               MethodInfo *method)

{
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).EnableAlpha = enableAlpha;
  (__this->fields).Save = save;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Save);
  (__this->fields).LivePreview = livePreview;
  (__this->fields).Disabled = disabled;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5372ed0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__0 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5376150
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53762af: cmp byte ptr [rip + 0x21cc7c5], 0
// asm:   0x53762b6: jne 0x53762cb
// asm:   0x537630c: jmp 0x53762cb

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *__this_02;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffff68;
  MethodInfo *in_stack_ffffffffffffff78;
  MethodInfo *in_stack_ffffffffffffffb0;
  System_Nullable_bool__Fields aSStack_48 [4];
  System_String_o *pSStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  if (Il2CppMethodInitialized_07542a7f == '\0') {
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
    Il2CppMethodInitialized_07542a7f = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    pSVar7 = (pGVar1->fields)._label;
    pSVar2 = System_String__Concat_52f0320((pGVar1->fields)._id,"-label",(MethodInfo *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (row,pSVar7,"subtext",pSVar2,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,in_stack_ffffffffffffff68);
      pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      __this_02 = (__this->fields).__9__1;
      if (__this_02 == (System_Action_GisketchActionContext__o *)0x0) {
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_02,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0_Build_b__1,
                   (MethodInfo_4A803E0 *)0x0);
        (__this->fields).__9__1 = __this_02;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
        pSVar2 = (pGVar1->fields)._id;
        if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
        }
        if (Il2CppMethodInitialized_07542a7b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-button");
          Il2CppMethodInitialized_07542a7b = '\x01';
        }
        pSVar2 = System_String__Concat_52f0320(pSVar2,"-button",(MethodInfo *)0x0);
        __this_00 = (row->fields)._actions;
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else {
          actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                               (__this_00,(row->fields)._ownerId,__this_02,(MethodInfo *)0x0);
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (row,3,pSVar7,actionId,pSVar2,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            in_stack_ffffffffffffff78);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
          aSStack_48[0].hasValue = false;
          aSStack_48[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o *)aSStack_48,(pGVar1->fields)._disabled == false,
                     (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).enabled.fields = aSStack_48[0];
            pGStack_38 = row;
            if (Il2CppMethodInitialized_07542a23 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
              il2cpp_codegen_initialize_runtime_metadata(&"point");
              Il2CppMethodInitialized_07542a23 = '\x01';
            }
            pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
            Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar4,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
              (pGVar4->fields).value = 58.0;
              (pGVar4->fields).unit = "point";
              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).unit);
              if (Il2CppMethodInitialized_07542a23 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                il2cpp_codegen_initialize_runtime_metadata(&"point");
                Il2CppMethodInitialized_07542a23 = '\x01';
              }
              __this_03 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
              Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_03,(MethodInfo *)0x0);
              if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                (__this_03->fields).value = 58.0;
                (__this_03->fields).unit = "point";
                Il2CppCodeGenWriteBarrier(&(__this_03->fields).unit);
                pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,__this_03,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffb0);
                (pGVar3->fields).layout = pGVar5;
                Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
                pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                         SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
                pGVar1 = (__this->fields).__4__this;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
                  pSVar7 = (pGVar1->fields)._id;
                  if (Il2CppMethodInitialized_07542a7c == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&"-swatch");
                    Il2CppMethodInitialized_07542a7c = '\x01';
                  }
                  pSVar7 = System_String__Concat_52f0320(pSVar7,"-swatch",(MethodInfo *)0x0);
                  pSStack_40 = (__this->fields).value;
                  if (Il2CppMethodInitialized_07542a23 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                    il2cpp_codegen_initialize_runtime_metadata(&"point");
                    Il2CppMethodInitialized_07542a23 = '\x01';
                  }
                  pGVar4 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar4,(MethodInfo *)0x0);
                  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (pGVar4->fields).value = 42.0;
                    (pGVar4->fields).unit = "point";
                    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).unit);
                    if (Il2CppMethodInitialized_07542a23 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                      il2cpp_codegen_initialize_runtime_metadata(&"point");
                      Il2CppMethodInitialized_07542a23 = '\x01';
                    }
                    method_00 = (MethodInfo *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,(MethodInfo *)0x0);
                    if (method_00 != (MethodInfo *)0x0) {
                      ((Gisketch_Aottg2UI_Data_GisketchLength_Fields *)&method_00->invoker_method)->value =
                           42.0;
                      method_00->name = (char *)"point";
                      Il2CppCodeGenWriteBarrier(&method_00->name);
                      method_01 = (MethodInfo *)0x0;
                      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                          0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffb0);
                      pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                         (pSVar7,pSStack_40,pGVar5,method_01);
                      __this_01 = pGStack_38;
                      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                        if ((int)pGVar6->max_length == 0) {
                          ThrowIndexOutOfRangeException();
                        }
                        pGVar6->m_Items[0] = pGVar8;
                        Il2CppCodeGenWriteBarrier(pGVar6->m_Items);
                        (pGVar3->fields).children = pGVar6;
                        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).children);
                        pGVar1 = (__this->fields).__4__this;
                        if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
                          pSVar7 = (__this->fields).value;
                          pSVar2 = (pGVar1->fields)._id;
                          if (Il2CppMethodInitialized_07542a7d == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&"-value");
                            Il2CppMethodInitialized_07542a7d = '\x01';
                          }
                          pSVar2 = System_String__Concat_52f0320
                                             (pSVar2,"-value",(MethodInfo *)0x0);
                          Gisketch_Aottg2UI_Code_AottgUi__Text
                                    (__this_01,pSVar7,"text",pSVar2,(System_String_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
                          return;
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__1 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5376740

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__1
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *id;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07542a80 = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    ThrowNullReferenceException();
  }
  id = (pGVar1->fields)._id;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,id,true,method_00);
    return;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,id,true,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x5373100

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$<BuildCompact>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__0 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x53767b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5376902: cmp byte ptr [rip + 0x21cc172], 0
// asm:   0x5376909: jne 0x537691e
// asm:   0x5376961: jmp 0x537691e

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *__this_01;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffff78;
  MethodInfo *in_stack_ffffffffffffff88;
  MethodInfo *in_stack_ffffffffffffffc0;
  System_Nullable_bool__Fields aSStack_38 [4];
  
  if (Il2CppMethodInitialized_07542a81 == '\0') {
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
    Il2CppMethodInitialized_07542a81 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    pSVar2 = (pGVar1->fields)._label;
    pSVar3 = System_String__Concat_52f0320((pGVar1->fields)._id,"-label",(MethodInfo *)0x0);
    if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (field,pSVar2,"accountInputLabel",pSVar3,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,in_stack_ffffffffffffff78);
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      __this_01 = (__this->fields).__9__1;
      if (__this_01 == (System_Action_GisketchActionContext__o *)0x0) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__1
                   ,(MethodInfo_4A803E0 *)0x0);
        (__this->fields).__9__1 = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
        pSVar3 = (pGVar1->fields)._id;
        if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
        }
        if (Il2CppMethodInitialized_07542a7b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-button");
          Il2CppMethodInitialized_07542a7b = '\x01';
        }
        pSVar3 = System_String__Concat_52f0320(pSVar3,"-button",(MethodInfo *)0x0);
        __this_00 = (field->fields)._actions;
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else {
          actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                               (__this_00,(field->fields)._ownerId,__this_01,(MethodInfo *)0x0);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (field,3,pSVar2,actionId,pSVar3,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            in_stack_ffffffffffffff88);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
          aSStack_38[0].hasValue = false;
          aSStack_38[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o *)aSStack_38,(pGVar1->fields)._disabled == false,
                     (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).enabled.fields = aSStack_38[0];
            if (Il2CppMethodInitialized_07542a23 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
              il2cpp_codegen_initialize_runtime_metadata(&"point");
              Il2CppMethodInitialized_07542a23 = '\x01';
            }
            pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
            Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
            if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
              (pGVar5->fields).value = 58.0;
              (pGVar5->fields).unit = "point";
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
              if (Il2CppMethodInitialized_07542a23 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                il2cpp_codegen_initialize_runtime_metadata(&"point");
                Il2CppMethodInitialized_07542a23 = '\x01';
              }
              pGVar6 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
              Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
              if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                (pGVar6->fields).value = 58.0;
                (pGVar6->fields).unit = "point";
                Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffc0);
                (pGVar4->fields).layout = pGVar7;
                Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
                pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                         SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
                pGVar1 = (__this->fields).__4__this;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
                  pSVar2 = (pGVar1->fields)._id;
                  if (Il2CppMethodInitialized_07542a7c == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&"-swatch");
                    Il2CppMethodInitialized_07542a7c = '\x01';
                  }
                  pSVar3 = System_String__Concat_52f0320(pSVar2,"-swatch",(MethodInfo *)0x0);
                  pSVar2 = (__this->fields).value;
                  if (Il2CppMethodInitialized_07542a23 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                    il2cpp_codegen_initialize_runtime_metadata(&"point");
                    Il2CppMethodInitialized_07542a23 = '\x01';
                  }
                  pGVar5 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
                  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (pGVar5->fields).value = 42.0;
                    (pGVar5->fields).unit = "point";
                    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
                    if (Il2CppMethodInitialized_07542a23 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                      il2cpp_codegen_initialize_runtime_metadata(&"point");
                      Il2CppMethodInitialized_07542a23 = '\x01';
                    }
                    pGVar6 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
                    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                      (pGVar6->fields).value = 42.0;
                      (pGVar6->fields).unit = "point";
                      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                      method_00 = (MethodInfo *)0x0;
                      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                          0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffc0);
                      pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                         (pSVar3,pSVar2,pGVar7,method_00);
                      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                        if ((int)pGVar8->max_length == 0) {
                          ThrowIndexOutOfRangeException();
                        }
                        pGVar8->m_Items[0] = pGVar9;
                        Il2CppCodeGenWriteBarrier(pGVar8->m_Items);
                        (pGVar4->fields).children = pGVar8;
                        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).children);
                        return;
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$<BuildCompact>b__1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__1 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5376d30

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__1
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *id;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07542a82 = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    ThrowNullReferenceException();
  }
  id = (pGVar1->fields)._id;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,id,true,method_00);
    return;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,id,true,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___cctor (const MethodInfo* method);
// 0x5371fc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5372258: jmp 0x5372311

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___cctor(MethodInfo *method)

{
  uint8_t uVar1;
  uint32_t uVar2;
  System_OrdinalIgnoreCaseComparer_o *pSVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_StaticFields *pGVar4;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *value;
  MethodInfo *pMVar6;
  char cVar7;
  bool bVar8;
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *value_00;
  undefined1 *puVar9;
  Il2CppObject *ex;
  
  if (Il2CppMethodInitialized_07542a62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38);
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
    Il2CppMethodInitialized_07542a62 = '\x01';
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor != 0) goto label_05371fec;
label_053721f1:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05371ff9;
label_05372203:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) goto label_053721f1;
label_05371fec:
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05372203;
label_05371ff9:
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar3 = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition
                        );
  System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition____ctor_4ad5550
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)pSVar3,
             (MethodInfo_4AD5550 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_ctor);
  TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions);
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar3 = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)pSVar3,
             (MethodInfo_4AAC9C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38
            );
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields;
  pGVar4->Values = __this_01;
  Il2CppCodeGenWriteBarrier(&pGVar4->Values);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  value_00 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  pMVar6 = MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_BuildVisual;
  (value_00->fields).method_ptr =
       (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_BuildVisual->virtualMethodPointer;
  (value_00->fields).method = (intptr_t)pMVar6;
  (value_00->fields).m_target = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(value_00->fields).m_target);
  uVar1 = pMVar6->parameters_count;
  (value_00->fields).method_code = (intptr_t)value_00;
  cVar7 = il2cpp_runtime_helper_030d61c0();
  if (cVar7 == '\0') {
    if (uVar1 != 3) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
    puVar9 = &label_02d4ba20;
  }
  else {
    if (uVar1 != 4) {
      (value_00->fields).invoke_impl = (value_00->fields).method_ptr;
      (value_00->fields).method_code = (intptr_t)(value_00->fields).m_target;
      (value_00->fields).extra_arg = (intptr_t)&label_02d4b9b0;
      value = "GisketchUIColorPickerVisual";
      goto joined_r0x05372256;
    }
    puVar9 = &label_02d4ba50;
  }
  (value_00->fields).invoke_impl = (intptr_t)puVar9;
  (value_00->fields).extra_arg = (intptr_t)&label_02d4b9b0;
  value = "GisketchUIColorPickerVisual";
joined_r0x05372256:
  "GisketchUIColorPickerVisual" = value;
  if (pGVar5 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    if (Il2CppMethodInitialized_07542aad == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
      Il2CppMethodInitialized_07542aad = '\x01';
    }
    bVar8 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar5->fields)._factories;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)value,(Il2CppObject *)value_00,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, System_Action_GisketchActionContext__o* save, bool enableAlpha, bool livePreview, bool compact, bool disabled, const MethodInfo* method);
// 0x5372330

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *value,System_Action_GisketchActionContext__o *save,
               bool enableAlpha,bool livePreview,bool compact,bool disabled,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value);
  (__this->fields)._save = save;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._save);
  (__this->fields)._enableAlpha = enableAlpha;
  (__this->fields)._livePreview = livePreview;
  (__this->fields)._compact = compact;
  (__this->fields)._disabled = disabled;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value (System_String_o* id, System_String_o* fallback, bool enableAlpha, const MethodInfo* method);
// 0x53723c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5372446: mov rax, qword ptr [rsp]
// asm:   0x537244a: jmp 0x537245a

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
          (System_String_o *id,System_String_o *fallback,bool enableAlpha,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  MethodInfo *method_00;
  System_String_o *local_28;
  
  if (Il2CppMethodInitialized_07542a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07542a63 = '\x01';
  }
  local_28 = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue;
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)id,(Il2CppObject **)&local_28,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  if (!bVar1) {
    local_28 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                         (fallback,enableAlpha,(System_String_o *)0x0,method_00);
  }
  return local_28;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Register
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register (System_String_o* id, System_String_o* value, System_Action_GisketchActionContext__o* save, bool enableAlpha, bool livePreview, bool disabled, const MethodInfo* method);
// 0x5372590

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
               (System_String_o *id,System_String_o *value,System_Action_GisketchActionContext__o *save,
               bool enableAlpha,bool livePreview,bool disabled,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o value_00;
  bool bVar1;
  System_String_o *value_01;
  undefined7 in_register_00000009;
  MethodInfo *method_00;
  System_String_o *local_58;
  undefined8 uStack_50;
  System_Action_GisketchActionContext__o *pSStack_48;
  undefined8 uStack_40;
  System_Action_GisketchActionContext__o *local_38;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000009,enableAlpha);
  if (Il2CppMethodInitialized_07542a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07542a64 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  local_38 = save;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
  value_01 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                       (value,enableAlpha,(System_String_o *)0x0,method_00);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)value_01,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
    uStack_50 = 0;
    pSStack_48 = (System_Action_GisketchActionContext__o *)0x0;
    uStack_40 = 0;
    local_58 = id;
    Il2CppCodeGenWriteBarrier(&local_58);
    uStack_50 = CONCAT71(uStack_50._1_7_,enableAlpha);
    pSStack_48 = local_38;
    Il2CppCodeGenWriteBarrier(&pSStack_48);
    uStack_40._0_2_ = CONCAT11(disabled,livePreview);
    if (__this_00 != (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0)
    {
      value_00.fields._8_8_ = uStack_50;
      value_00.fields.Id = local_58;
      value_00.fields.Save = pSStack_48;
      value_00.fields.LivePreview = livePreview;
      value_00.fields.Disabled = disabled;
      value_00.fields._26_6_ = uStack_40._2_6_;
      System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)id,
                 value_00,(MethodInfo_4AD60C0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_set_Item
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue (System_String_o* id, System_String_o* value, bool enableAlpha, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x5372750
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5372814: movzx esi, bpl
// asm:   0x53728cb: cmp byte ptr [rip + 0x21d01aa], 0
// asm:   0x53728d2: jne 0x53728e7
// asm:   0x5372966: jmp 0x53728e7

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
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_48;
  
  if (Il2CppMethodInitialized_07542a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a65 = '\x01';
  }
  local_48.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.LivePreview = false;
  local_48.fields.Disabled = false;
  local_48.fields._26_6_ = 0;
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.EnableAlpha = false;
  local_48.fields._9_7_ = 0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this != (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
    pMVar4 = 
    MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue;
    bVar1 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                       &local_48,
                       (MethodInfo_4AD81B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                      );
    if (bVar1) {
      enableAlpha = local_48.fields.EnableAlpha;
    }
    value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                         (value,(bool)(enableAlpha & 1),(System_String_o *)0x0,pMVar4);
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar4 = MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)id,(Il2CppObject *)value_00,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pUVar2 = (UnityEngine_Transform_o *)0x0;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((source == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_0537296b;
        pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      if (Il2CppMethodInitialized_07542a7c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-swatch");
        Il2CppMethodInitialized_07542a7c = '\x01';
      }
      pSVar3 = System_String__Concat_52f0320(id,"-swatch",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch(pUVar2,pSVar3,value_00,pMVar4);
      if (Il2CppMethodInitialized_07542a7d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-value");
        Il2CppMethodInitialized_07542a7d = '\x01';
      }
      pSVar3 = System_String__Concat_52f0320(id,"-value",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText(pUVar2,pSVar3,value_00,pMVar4);
      return;
    }
  }
label_0537296b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Build (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5372bb0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Build
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  bool bVar1;
  bool livePreview;
  bool disabled;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *save;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this_00;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *pMVar5;
  MethodInfo *in_stack_ffffffffffffff58;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (Il2CppMethodInitialized_07542a66 == '\0') {
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
    Il2CppMethodInitialized_07542a66 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    pSVar4 = (__this->fields)._id;
    pSVar2 = (__this->fields)._value;
    save = (__this->fields)._save;
    bVar1 = (__this->fields)._enableAlpha;
    livePreview = (__this->fields)._livePreview;
    disabled = (__this->fields)._disabled;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    pMVar5 = (MethodInfo *)(ulong)bVar1;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
              (pSVar4,pSVar2,save,bVar1,livePreview,disabled,in_stack_ffffffffffffff58);
    bVar1 = (__this->fields)._enableAlpha;
    if (bVar1 == false) {
      ppSVar3 = &"#FFFFFF";
    }
    else {
      ppSVar3 = &"#FFFFFFFF";
    }
    pSVar4 = (__this->fields)._id;
    pSVar2 = *ppSVar3;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    pSVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar4,pSVar2,bVar1,pMVar5);
    ppSVar3 = &(__this_00->fields).value;
    (__this_00->fields).value = pSVar4;
    Il2CppCodeGenWriteBarrier(ppSVar3);
    if ((__this->fields)._compact != false) {
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact(__this,ui,*ppSVar3,pMVar5);
      return;
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0_Build_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    pSVar4 = System_String__Concat_52f0320((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_02->fields).value = 100.0;
      (__this_02->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).unit);
      pMVar5 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,__this_02,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffa0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"row",__this_01,pSVar4,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar5);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildCompact
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* value, const MethodInfo* method);
// 0x5372ee0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_07542a67 == '\0') {
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
    Il2CppMethodInitialized_07542a67 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    id = System_String__Concat_52f0320((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07542a23 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542a23 = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_02->fields).value = 70.0;
      (__this_02->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).unit);
      method_00 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,4.0,__this_02,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffd0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_01,id,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current (System_String_o* id, bool enableAlpha, const MethodInfo* method);
// 0x5373110

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current(System_String_o *id,bool enableAlpha,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07542a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_07542a68 = '\x01';
  }
  pSVar1 = "#FFFFFFFF";
  pSVar2 = "#FFFFFF";
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  if (enableAlpha) {
    pSVar2 = pSVar1;
  }
  pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar2,enableAlpha,in_RCX);
  return pSVar2;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Commit
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x53731a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53733e3: cmp byte ptr [rip + 0x21cf692], 0
// asm:   0x53733ea: jne 0x53733ff
// asm:   0x5373521: jmp 0x53733ff

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit
               (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar10;
  byte bVar9;
  byte bVar8;
  byte bVar7;
  byte bVar14;
  byte bVar13;
  byte bVar12;
  byte bVar11;
  undefined1 auVar15 [12];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [15];
  undefined1 auVar19 [14];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  unkuint9 Var37;
  undefined1 auVar38 [15];
  undefined1 auVar39 [11];
  undefined1 auVar40 [15];
  undefined1 auVar41 [14];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [11];
  undefined1 auVar45 [15];
  undefined1 auVar46 [14];
  uint6 uVar47;
  undefined8 uVar48;
  System_Action_GisketchActionContext__o *pSVar49;
  bool bVar50;
  System_String_o *pSVar51;
  UnityEngine_Transform_o *pUVar52;
  System_String_o *pSVar53;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  MethodInfo *method_00;
  uint uVar54;
  undefined1 auVar55 [13];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ushort uVar60;
  ushort uVar61;
  undefined1 auVar62 [13];
  undefined8 in_XMM3_Qb;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_88;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_68;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07542a69 == '\0') {
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
    Il2CppMethodInitialized_07542a69 = '\x01';
  }
  local_68.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_68.fields.LivePreview = false;
  local_68.fields.Disabled = false;
  local_68.fields._26_6_ = 0;
  local_68.fields.Id = (System_String_o *)0x0;
  local_68.fields._8_8_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this == (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
label_05373526:
    ThrowNullReferenceException();
  }
  bVar50 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                      &local_68,
                      (MethodInfo_4AD81B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                     );
  uVar48 = local_68.fields._8_8_;
  if (bVar50) {
    uVar54 = value.fields._0_4_;
    auVar15._4_8_ = in_XMM3_Qb;
    auVar15._0_4_ = value.fields.H;
    auVar57._0_8_ = auVar15._0_8_ << 0x20;
    auVar57._8_4_ = uVar54;
    auVar57._12_4_ = value.fields.H;
    uVar1 = value.fields._2_2_ & 0xff;
    uVar3 = auVar57._11_2_ & 0xff;
    bVar7 = ((value.fields._0_8_ & 0xff0000) != 0) * (uVar1 < 0x100) * value.fields.B - (0xff < uVar1);
    uVar60 = (ushort)bVar7;
    bVar8 = ((auVar57._8_8_ & 0xff000000) != 0) * (uVar3 < 0x100) * value.fields.A - (0xff < uVar3);
    uVar2 = (ushort)bVar8;
    bVar9 = ((value.fields._0_8_ & 0xff0000) != 0) * (uVar1 < 0x100) * value.fields.B - (0xff < uVar1);
    uVar4 = (ushort)bVar9;
    bVar10 = ((auVar57._8_8_ & 0xff000000) != 0) * (uVar3 < 0x100) * value.fields.A - (0xff < uVar3);
    bVar11 = (bVar7 != 0) * (uVar60 < 0x100) * bVar7 - (0xff < uVar60);
    uVar61 = (ushort)bVar11;
    bVar12 = (bVar8 != 0) * (uVar2 < 0x100) * bVar8 - (0xff < uVar2);
    bVar13 = (bVar9 != 0) * (uVar4 < 0x100) * bVar9 - (0xff < uVar4);
    uVar1 = (ushort)bVar10;
    bVar14 = (bVar10 != 0) * (uVar1 < 0x100) * bVar10 - (0xff < uVar1);
    bVar7 = (bVar7 != 0) * (uVar60 < 0x100) * bVar7 - (0xff < uVar60);
    bVar8 = (bVar8 != 0) * (uVar2 < 0x100) * bVar8 - (0xff < uVar2);
    bVar9 = (bVar9 != 0) * (uVar4 < 0x100) * bVar9 - (0xff < uVar4);
    bVar10 = (bVar10 != 0) * (uVar1 < 0x100) * bVar10 - (0xff < uVar1);
    auVar55 = ZEXT413(uVar54);
    uVar1 = (ushort)bVar12;
    auVar62[1] = (bVar12 != 0) * (uVar1 < 0x100) * bVar12 - (0xff < uVar1);
    auVar62[0] = (bVar11 != 0) * (uVar61 < 0x100) * bVar11 - (0xff < uVar61);
    uVar3 = (ushort)bVar13;
    auVar62[2] = (bVar13 != 0) * (uVar3 < 0x100) * bVar13 - (0xff < uVar3);
    uVar2 = (ushort)bVar14;
    auVar62[3] = (bVar14 != 0) * (uVar2 < 0x100) * bVar14 - (0xff < uVar2);
    uVar4 = (ushort)bVar7;
    auVar62[4] = (bVar7 != 0) * (uVar4 < 0x100) * bVar7 - (0xff < uVar4);
    uVar60 = (ushort)bVar8;
    auVar62[5] = (bVar8 != 0) * (uVar60 < 0x100) * bVar8 - (0xff < uVar60);
    uVar5 = (ushort)bVar9;
    auVar62[6] = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
    uVar6 = (ushort)bVar10;
    auVar62[7] = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
    auVar62[8] = (bVar11 != 0) * (uVar61 < 0x100) * bVar11 - (0xff < uVar61);
    auVar62[9] = (bVar12 != 0) * (uVar1 < 0x100) * bVar12 - (0xff < uVar1);
    auVar62[10] = (bVar13 != 0) * (uVar3 < 0x100) * bVar13 - (0xff < uVar3);
    auVar62[0xb] = (bVar14 != 0) * (uVar2 < 0x100) * bVar14 - (0xff < uVar2);
    auVar62[0xc] = (bVar7 != 0) * (uVar4 < 0x100) * bVar7 - (0xff < uVar4);
    auVar59[0xd] = (bVar8 != 0) * (uVar60 < 0x100) * bVar8 - (0xff < uVar60);
    auVar59._0_13_ = auVar62;
    auVar59[0xe] = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
    auVar59[0xf] = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
    if (Il2CppMethodInitialized_07542a90 == '\0') {
      local_48 = ZEXT416(uVar54);
      local_38 = auVar59;
      il2cpp_codegen_initialize_runtime_metadata(&"#");
      auVar55 = local_48._0_13_;
      auVar62 = local_38._0_13_;
      Il2CppMethodInitialized_07542a90 = '\x01';
    }
    auVar18[0xd] = 0;
    auVar18._0_13_ = auVar55;
    auVar18[0xe] = auVar55[7];
    auVar21[0xc] = auVar55[6];
    auVar21._0_12_ = auVar55._0_12_;
    auVar21._13_2_ = auVar18._13_2_;
    auVar23[0xb] = 0;
    auVar23._0_11_ = auVar55._0_11_;
    auVar23._12_3_ = auVar21._12_3_;
    auVar26[10] = auVar55[5];
    auVar26._0_10_ = auVar55._0_10_;
    auVar26._11_4_ = auVar23._11_4_;
    auVar29[9] = 0;
    auVar29._0_9_ = auVar55._0_9_;
    auVar29._10_5_ = auVar26._10_5_;
    auVar31[8] = auVar55[4];
    auVar31._0_8_ = auVar55._0_8_;
    auVar31._9_6_ = auVar29._9_6_;
    auVar36._7_8_ = 0;
    auVar36._0_7_ = auVar31._8_7_;
    Var37 = CONCAT81(SUB158(auVar36 << 0x40,7),auVar55[3]);
    auVar38._9_6_ = 0;
    auVar38._0_9_ = Var37;
    auVar39._1_10_ = SUB1510(auVar38 << 0x30,5);
    auVar39[0] = auVar55[2];
    auVar40._11_4_ = 0;
    auVar40._0_11_ = auVar39;
    auVar33[2] = auVar55[1];
    auVar33._0_2_ = auVar55._0_2_;
    auVar33._3_12_ = SUB1512(auVar40 << 0x20,3);
    auVar35._2_13_ = auVar33._2_13_;
    auVar35._0_2_ = auVar55._0_2_ & 0xff;
    auVar19._10_2_ = 0;
    auVar19._0_10_ = auVar35._0_10_;
    auVar19._12_2_ = (short)Var37;
    uVar47 = CONCAT42(auVar19._10_4_,auVar39._0_2_);
    auVar41._6_8_ = 0;
    auVar41._0_6_ = uVar47;
    auVar27._4_2_ = auVar33._2_2_;
    auVar27._0_4_ = auVar35._0_4_;
    auVar27._6_8_ = SUB148(auVar41 << 0x40,6);
    auVar56._0_4_ = (float)(auVar35._0_4_ & 0xffff);
    auVar56._4_4_ = (float)auVar27._4_4_;
    auVar56._8_4_ = (float)(int)uVar47;
    auVar56._12_4_ = (float)(auVar19._10_4_ >> 0x10);
    auVar57 = divps(auVar56,_DAT_01009880);
    auVar16[0xd] = 0;
    auVar16._0_13_ = auVar62;
    auVar16[0xe] = auVar62[7];
    auVar20[0xc] = auVar62[6];
    auVar20._0_12_ = auVar62._0_12_;
    auVar20._13_2_ = auVar16._13_2_;
    auVar22[0xb] = 0;
    auVar22._0_11_ = auVar62._0_11_;
    auVar22._12_3_ = auVar20._12_3_;
    auVar24[10] = auVar62[5];
    auVar24._0_10_ = auVar62._0_10_;
    auVar24._11_4_ = auVar22._11_4_;
    auVar28[9] = 0;
    auVar28._0_9_ = auVar62._0_9_;
    auVar28._10_5_ = auVar24._10_5_;
    auVar30[8] = auVar62[4];
    auVar30._0_8_ = auVar62._0_8_;
    auVar30._9_6_ = auVar28._9_6_;
    auVar42._7_8_ = 0;
    auVar42._0_7_ = auVar30._8_7_;
    Var37 = CONCAT81(SUB158(auVar42 << 0x40,7),auVar62[3]);
    auVar43._9_6_ = 0;
    auVar43._0_9_ = Var37;
    auVar44._1_10_ = SUB1510(auVar43 << 0x30,5);
    auVar44[0] = auVar62[2];
    auVar45._11_4_ = 0;
    auVar45._0_11_ = auVar44;
    auVar32[2] = auVar62[1];
    auVar32._0_2_ = auVar62._0_2_;
    auVar32._3_12_ = SUB1512(auVar45 << 0x20,3);
    auVar34._2_13_ = auVar32._2_13_;
    auVar34._0_2_ = auVar62._0_2_ & 0xff;
    auVar17._10_2_ = 0;
    auVar17._0_10_ = auVar34._0_10_;
    auVar17._12_2_ = (short)Var37;
    uVar47 = CONCAT42(auVar17._10_4_,auVar44._0_2_);
    auVar46._6_8_ = 0;
    auVar46._0_6_ = uVar47;
    auVar25._4_2_ = auVar32._2_2_;
    auVar25._0_4_ = auVar34._0_4_;
    auVar25._6_8_ = SUB148(auVar46 << 0x40,6);
    auVar58._0_4_ = (float)(auVar34._0_4_ & 0xffff);
    auVar58._4_4_ = (float)auVar25._4_4_;
    auVar58._8_4_ = (float)(int)uVar47;
    auVar58._12_4_ = (float)(auVar17._10_4_ >> 0x10);
    auVar59 = divps(auVar58,_DAT_01009880);
    local_88.fields.ElementId = auVar57._0_8_;
    local_88.fields.GameObject = auVar59._0_8_;
    if (((ulong)SUB81(uVar48,0) & 1) == 0) {
      pSVar51 = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50
                          ((UnityEngine_Color_o *)&local_88,(MethodInfo *)0x0);
    }
    else {
      pSVar51 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                          ((UnityEngine_Color_o *)&local_88,(MethodInfo *)0x0);
    }
    pSVar51 = System_String__Concat_52f0320("#",pSVar51,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Values;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05373526;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)id,(Il2CppObject *)pSVar51,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar52 = (UnityEngine_Transform_o *)0x0;
    bVar50 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar50) {
      if ((source == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar52 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
         pUVar52 == (UnityEngine_Transform_o *)0x0)) goto label_05373526;
      pUVar52 = UnityEngine_Transform__get_root(pUVar52,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    if (Il2CppMethodInitialized_07542a7c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-swatch");
      Il2CppMethodInitialized_07542a7c = '\x01';
    }
    pSVar53 = System_String__Concat_52f0320(id,"-swatch",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch(pUVar52,pSVar53,pSVar51,method_00);
    if (Il2CppMethodInitialized_07542a7d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-value");
      Il2CppMethodInitialized_07542a7d = '\x01';
    }
    pSVar53 = System_String__Concat_52f0320(id,"-value",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText(pUVar52,pSVar53,pSVar51,method_00);
    pSVar49 = local_68.fields.Save;
    if (local_68.fields.Save != (System_Action_GisketchActionContext__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05373526;
      (__this_01->fields).id = "save";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).id);
      (__this_01->fields).value = pSVar51;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).value);
      local_88.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      local_88.fields.InputSource = 0;
      local_88.fields._28_4_ = 0;
      local_88.fields.ElementId = (System_String_o *)0x0;
      local_88.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor(&local_88,id,source,__this_01,(MethodInfo *)0x0);
      (*(code *)(pSVar49->fields).invoke_impl)((pSVar49->fields).method_code,(pSVar49->fields).method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Preview
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x53735e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
               (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar10;
  byte bVar9;
  byte bVar8;
  byte bVar7;
  byte bVar14;
  byte bVar13;
  byte bVar12;
  byte bVar11;
  undefined1 auVar15 [12];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [15];
  undefined1 auVar19 [14];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  unkuint9 Var33;
  undefined1 auVar34 [15];
  undefined1 auVar35 [11];
  undefined1 auVar36 [15];
  undefined1 auVar37 [14];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [11];
  undefined1 auVar41 [15];
  undefined1 auVar42 [14];
  uint6 uVar43;
  undefined1 auVar44 [13];
  undefined3 uVar45;
  uint uVar46;
  undefined5 uVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [14];
  undefined8 uVar50;
  System_Action_GisketchActionContext__o *pSVar51;
  bool bVar52;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar53;
  undefined1 auVar54 [16];
  ushort uVar55;
  ushort uVar56;
  undefined8 in_XMM1_Qb;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_98;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_78;
  undefined1 local_58 [16];
  byte local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  
  if (Il2CppMethodInitialized_07542a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"preview");
    Il2CppMethodInitialized_07542a6a = '\x01';
  }
  local_78.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_78.fields.LivePreview = false;
  local_78.fields.Disabled = false;
  local_78.fields._26_6_ = 0;
  local_78.fields.Id = (System_String_o *)0x0;
  local_78.fields._8_8_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this == (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
label_05373820:
    ThrowNullReferenceException();
  }
  bVar52 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                      &local_78,
                      (MethodInfo_4AD81B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                     );
  pSVar51 = local_78.fields.Save;
  if (((bVar52) && (((ulong)local_78.fields.LivePreview & 1) != 0)) &&
     (local_78.fields.Save != (System_Action_GisketchActionContext__o *)0x0)) {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05373820;
    auVar15._4_8_ = in_XMM1_Qb;
    auVar15._0_4_ = value.fields.H;
    auVar54._0_8_ = auVar15._0_8_ << 0x20;
    auVar54._8_4_ = value.fields._0_4_;
    auVar54._12_4_ = value.fields.H;
    uVar1 = value.fields._2_2_ & 0xff;
    uVar3 = auVar54._11_2_ & 0xff;
    bVar7 = ((value.fields._0_8_ & 0xff0000) != 0) * (uVar1 < 0x100) * value.fields.B - (0xff < uVar1);
    uVar55 = (ushort)bVar7;
    bVar8 = ((auVar54._8_8_ & 0xff000000) != 0) * (uVar3 < 0x100) * value.fields.A - (0xff < uVar3);
    uVar2 = (ushort)bVar8;
    bVar9 = ((value.fields._0_8_ & 0xff0000) != 0) * (uVar1 < 0x100) * value.fields.B - (0xff < uVar1);
    uVar4 = (ushort)bVar9;
    bVar10 = ((auVar54._8_8_ & 0xff000000) != 0) * (uVar3 < 0x100) * value.fields.A - (0xff < uVar3);
    bVar11 = (bVar7 != 0) * (uVar55 < 0x100) * bVar7 - (0xff < uVar55);
    uVar56 = (ushort)bVar11;
    bVar12 = (bVar8 != 0) * (uVar2 < 0x100) * bVar8 - (0xff < uVar2);
    bVar13 = (bVar9 != 0) * (uVar4 < 0x100) * bVar9 - (0xff < uVar4);
    uVar1 = (ushort)bVar10;
    bVar14 = (bVar10 != 0) * (uVar1 < 0x100) * bVar10 - (0xff < uVar1);
    bVar7 = (bVar7 != 0) * (uVar55 < 0x100) * bVar7 - (0xff < uVar55);
    bVar8 = (bVar8 != 0) * (uVar2 < 0x100) * bVar8 - (0xff < uVar2);
    bVar9 = (bVar9 != 0) * (uVar4 < 0x100) * bVar9 - (0xff < uVar4);
    bVar10 = (bVar10 != 0) * (uVar1 < 0x100) * bVar10 - (0xff < uVar1);
    local_58 = ZEXT416(value.fields._0_4_);
    local_48 = (bVar11 != 0) * (uVar56 < 0x100) * bVar11 - (0xff < uVar56);
    uVar1 = (ushort)bVar12;
    cStack_47 = (bVar12 != 0) * (uVar1 < 0x100) * bVar12 - (0xff < uVar1);
    uVar3 = (ushort)bVar13;
    cStack_46 = (bVar13 != 0) * (uVar3 < 0x100) * bVar13 - (0xff < uVar3);
    uVar2 = (ushort)bVar14;
    cStack_45 = (bVar14 != 0) * (uVar2 < 0x100) * bVar14 - (0xff < uVar2);
    uVar4 = (ushort)bVar7;
    cStack_44 = (bVar7 != 0) * (uVar4 < 0x100) * bVar7 - (0xff < uVar4);
    uVar55 = (ushort)bVar8;
    cStack_43 = (bVar8 != 0) * (uVar55 < 0x100) * bVar8 - (0xff < uVar55);
    uVar5 = (ushort)bVar9;
    cStack_42 = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
    uVar6 = (ushort)bVar10;
    cStack_41 = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
    cStack_40 = (bVar11 != 0) * (uVar56 < 0x100) * bVar11 - (0xff < uVar56);
    cStack_3f = (bVar12 != 0) * (uVar1 < 0x100) * bVar12 - (0xff < uVar1);
    cStack_3e = (bVar13 != 0) * (uVar3 < 0x100) * bVar13 - (0xff < uVar3);
    cStack_3d = (bVar14 != 0) * (uVar2 < 0x100) * bVar14 - (0xff < uVar2);
    cStack_3c = (bVar7 != 0) * (uVar4 < 0x100) * bVar7 - (0xff < uVar4);
    cStack_3b = (bVar8 != 0) * (uVar55 < 0x100) * bVar8 - (0xff < uVar55);
    cStack_3a = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
    cStack_39 = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
    (__this_00->fields).id = "preview";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    uVar50 = local_78.fields._8_8_;
    if (Il2CppMethodInitialized_07542a90 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"#");
      Il2CppMethodInitialized_07542a90 = '\x01';
    }
    auVar18[0xd] = 0;
    auVar18._0_13_ = local_58._0_13_;
    auVar18[0xe] = local_58[7];
    auVar20[0xc] = local_58[6];
    auVar20._0_12_ = local_58._0_12_;
    auVar20._13_2_ = auVar18._13_2_;
    auVar22[0xb] = 0;
    auVar22._0_11_ = local_58._0_11_;
    auVar22._12_3_ = auVar20._12_3_;
    auVar24[10] = local_58[5];
    auVar24._0_10_ = local_58._0_10_;
    auVar24._11_4_ = auVar22._11_4_;
    auVar27[9] = 0;
    auVar27._0_9_ = local_58._0_9_;
    auVar27._10_5_ = auVar24._10_5_;
    auVar28[8] = local_58[4];
    auVar28._0_8_ = local_58._0_8_;
    auVar28._9_6_ = auVar27._9_6_;
    auVar32._7_8_ = 0;
    auVar32._0_7_ = auVar28._8_7_;
    Var33 = CONCAT81(SUB158(auVar32 << 0x40,7),local_58[3]);
    auVar34._9_6_ = 0;
    auVar34._0_9_ = Var33;
    auVar35._1_10_ = SUB1510(auVar34 << 0x30,5);
    auVar35[0] = local_58[2];
    auVar36._11_4_ = 0;
    auVar36._0_11_ = auVar35;
    auVar29[2] = local_58[1];
    auVar29._0_2_ = local_58._0_2_;
    auVar29._3_12_ = SUB1512(auVar36 << 0x20,3);
    auVar31._2_13_ = auVar29._2_13_;
    auVar31._0_2_ = local_58._0_2_ & 0xff;
    auVar19._10_2_ = 0;
    auVar19._0_10_ = auVar31._0_10_;
    auVar19._12_2_ = (short)Var33;
    uVar43 = CONCAT42(auVar19._10_4_,auVar35._0_2_);
    auVar37._6_8_ = 0;
    auVar37._0_6_ = uVar43;
    auVar25._4_2_ = auVar29._2_2_;
    auVar25._0_4_ = auVar31._0_4_;
    auVar25._6_8_ = SUB148(auVar37 << 0x40,6);
    auVar58._0_4_ = (float)(auVar31._0_4_ & 0xffff);
    auVar58._4_4_ = (float)auVar25._4_4_;
    auVar58._8_4_ = (float)(int)uVar43;
    auVar58._12_4_ = (float)(auVar19._10_4_ >> 0x10);
    auVar54 = divps(auVar58,_DAT_01009880);
    uVar45 = CONCAT12(cStack_3f,CONCAT11(cStack_40,cStack_41));
    uVar46 = CONCAT13(cStack_3e,uVar45);
    uVar47 = CONCAT14(cStack_3d,uVar46);
    auVar49[5] = cStack_3c;
    auVar49._0_5_ = uVar47;
    auVar49._6_8_ = 0;
    auVar16[0xe] = cStack_41;
    auVar16._0_14_ = auVar49 << 0x38;
    auVar48._4_8_ = 0;
    auVar48._0_4_ = uVar46;
    auVar21._12_3_ = (int3)(CONCAT26(auVar16._13_2_,CONCAT15(cStack_42,uVar47)) >> 0x28);
    auVar21._0_12_ = auVar48 << 0x38;
    auVar26._10_5_ = (int5)(CONCAT44(auVar21._11_4_,CONCAT13(cStack_43,uVar45)) >> 0x18);
    auVar26._0_10_ = (unkuint10)CONCAT11(cStack_40,cStack_41) << 0x38;
    auVar38._7_8_ = 0;
    auVar38._0_7_ = (uint7)(CONCAT62(auVar26._9_6_,CONCAT11(cStack_44,cStack_41)) >> 8);
    Var33 = CONCAT81(SUB158(auVar38 << 0x40,7),cStack_45);
    auVar39._9_6_ = 0;
    auVar39._0_9_ = Var33;
    auVar40._1_10_ = SUB1510(auVar39 << 0x30,5);
    auVar40[0] = cStack_46;
    auVar41._11_4_ = 0;
    auVar41._0_11_ = auVar40;
    auVar44._1_12_ = SUB1512(auVar41 << 0x20,3);
    auVar44[0] = cStack_47;
    auVar30[1] = 0;
    auVar30[0] = local_48;
    auVar30._2_13_ = auVar44;
    auVar17._10_2_ = 0;
    auVar17._0_10_ = auVar30._0_10_;
    auVar17._12_2_ = (short)Var33;
    uVar43 = CONCAT42(auVar17._10_4_,auVar40._0_2_);
    auVar42._6_8_ = 0;
    auVar42._0_6_ = uVar43;
    auVar23._4_2_ = auVar44._0_2_;
    auVar23._0_4_ = auVar30._0_4_;
    auVar23._6_8_ = SUB148(auVar42 << 0x40,6);
    auVar57._0_4_ = (float)(auVar30._0_4_ & 0xffff);
    auVar57._4_4_ = (float)auVar23._4_4_;
    auVar57._8_4_ = (float)(int)uVar43;
    auVar57._12_4_ = (float)(auVar17._10_4_ >> 0x10);
    auVar58 = divps(auVar57,_DAT_01009880);
    local_98.fields.ElementId = auVar54._0_8_;
    local_98.fields.GameObject = auVar58._0_8_;
    if (((ulong)SUB81(uVar50,0) & 1) == 0) {
      pSVar53 = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50
                          ((UnityEngine_Color_o *)&local_98,(MethodInfo *)0x0);
    }
    else {
      pSVar53 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                          ((UnityEngine_Color_o *)&local_98,(MethodInfo *)0x0);
    }
    pSVar53 = System_String__Concat_52f0320("#",pSVar53,(MethodInfo *)0x0);
    (__this_00->fields).value = pSVar53;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    local_98.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    local_98.fields.InputSource = 0;
    local_98.fields._28_4_ = 0;
    local_98.fields.ElementId = (System_String_o *)0x0;
    local_98.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
    Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor(&local_98,id,source,__this_00,(MethodInfo *)0x0);
    (*(code *)(pSVar51->fields).invoke_impl)((pSVar51->fields).method_code,(pSVar51->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel (System_String_o* id, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x5373830

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel
               (System_String_o *id,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  System_Action_GisketchActionContext__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_68;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_48;
  
  if (Il2CppMethodInitialized_07542a6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"cancel");
    Il2CppMethodInitialized_07542a6b = '\x01';
  }
  local_48.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.LivePreview = false;
  local_48.fields.Disabled = false;
  local_48.fields._26_6_ = 0;
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.EnableAlpha = false;
  local_48.fields._9_7_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this == (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
label_05373980:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                     &local_48,
                     (MethodInfo_4AD81B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                    );
  pSVar1 = local_48.fields.Save;
  if (((bVar2) && (((ulong)local_48.fields.LivePreview & 1) != 0)) &&
     (local_48.fields.Save != (System_Action_GisketchActionContext__o *)0x0)) {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05373980;
    (__this_00->fields).id = "cancel";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    local_68.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    local_68.fields.InputSource = 0;
    local_68.fields._28_4_ = 0;
    local_68.fields.ElementId = (System_String_o *)0x0;
    local_68.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
    Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor(&local_68,id,source,__this_00,(MethodInfo *)0x0);
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PopoverNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode (System_String_o* id, const MethodInfo* method);
// 0x5373990
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53739d7: jmp 0x537462e

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  System_String_o *pSVar1;
  bool enableAlpha;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *in_stack_ffffffffffffff90;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_50;
  
  if (Il2CppMethodInitialized_07542a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
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
    il2cpp_codegen_initialize_runtime_metadata(&"b");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"HEX");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.ColorPickPopup.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"-popover");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"r");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIColorPickerVisual");
    il2cpp_codegen_initialize_runtime_metadata(&"-rgb-row");
    il2cpp_codegen_initialize_runtime_metadata(&"-r-field");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"-g-field");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    Il2CppMethodInitialized_07542a6c = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0)
    goto label_05373b9e;
label_053739c4:
    __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor != 0)
    goto label_053739c4;
label_05373b9e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  }
  if (__this != (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0) {
    System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___get_Item
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
               (MethodInfo_4AD6030 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_get_Item
              );
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
      pSVar2 = System_String__Concat_52f0320(id,"-popover",(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
      (__this_00->fields).style = "popover";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
      if (Il2CppMethodInitialized_07542a23 == 0) {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        il2cpp_codegen_initialize_runtime_metadata(&"point");
        Il2CppMethodInitialized_07542a23 = 1;
      }
      pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar3->fields).value = 380.0;
        (pGVar3->fields).unit = "point";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
        pMVar10 = (MethodInfo *)0x0;
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"Stretch",
                            (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,in_stack_ffffffffffffff90);
        (__this_00->fields).layout = pGVar4;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,6);
        pGVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).type = "Text";
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).type);
          pSVar2 = System_String__Concat_52f0320(id,"-title",(MethodInfo *)0x0);
          (pGVar6->fields).id = pSVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).id);
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                             ("SettingsPopup.ColorPickPopup.Title",(MethodInfo *)0x0);
          (pGVar6->fields).text = pSVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).text);
          (pGVar6->fields).style = "subtext";
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).style);
          pGVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key
                             (pGVar6,"SettingsPopup.ColorPickPopup.Title",(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar5->max_length == 0) goto label_05374633;
            pGVar5->m_Items[0] = pGVar6;
            Il2CppCodeGenWriteBarrier(pGVar5->m_Items);
            if (Il2CppMethodInitialized_07542a78 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"-preview");
              Il2CppMethodInitialized_07542a78 = '\x01';
            }
            pSVar2 = System_String__Concat_52f0320(id,"-preview",(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_07542a68 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
              il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
              il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
              Il2CppMethodInitialized_07542a68 = '\x01';
            }
            pSVar1 = "#FFFFFFFF";
            pSVar7 = "#FFFFFF";
            if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
            }
            enableAlpha = (bool)(local_50.fields.EnableAlpha & 1);
            if (enableAlpha != false) {
              pSVar7 = pSVar1;
            }
            pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar7,enableAlpha,pMVar10);
            if (Il2CppMethodInitialized_07542a24 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
              il2cpp_codegen_initialize_runtime_metadata(&"percent");
              Il2CppMethodInitialized_07542a24 = '\x01';
            }
            pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
            Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
              (pGVar3->fields).value = 100.0;
              (pGVar3->fields).unit = "percent";
              Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
              if (Il2CppMethodInitialized_07542a23 == 0) {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                il2cpp_codegen_initialize_runtime_metadata(&"point");
                Il2CppMethodInitialized_07542a23 = 1;
              }
              pGVar8 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
              Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar8,(MethodInfo *)0x0);
              if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                (pGVar8->fields).value = 32.0;
                (pGVar8->fields).unit = "point";
                Il2CppCodeGenWriteBarrier(&(pGVar8->fields).unit);
                pMVar10 = (MethodInfo *)0x0;
                pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar8,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffff90);
                pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                   (pSVar2,pSVar7,pGVar4,pMVar10);
                if ((pGVar5->max_length & 0xfffffffe) == 0) goto label_05374633;
                pGVar5->m_Items[1] = pGVar6;
                Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 1);
                pGVar6 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
                Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
                if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (pGVar6->fields).type = "GisketchUIColorPickerVisual";
                  Il2CppCodeGenWriteBarrier(&(pGVar6->fields).type);
                  if (Il2CppMethodInitialized_07542a79 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&"-visual");
                    Il2CppMethodInitialized_07542a79 = '\x01';
                  }
                  pSVar2 = System_String__Concat_52f0320(id,"-visual",(MethodInfo *)0x0);
                  (pGVar6->fields).id = pSVar2;
                  Il2CppCodeGenWriteBarrier(&(pGVar6->fields).id);
                  (pGVar6->fields).value = id;
                  Il2CppCodeGenWriteBarrier(&(pGVar6->fields).value);
                  if (Il2CppMethodInitialized_07542a24 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                    il2cpp_codegen_initialize_runtime_metadata(&"percent");
                    Il2CppMethodInitialized_07542a24 = '\x01';
                  }
                  pGVar3 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (pGVar3->fields).value = 100.0;
                    (pGVar3->fields).unit = "percent";
                    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
                    pSVar2 = "Column";
                    if ((local_50.fields.EnableAlpha & 1U) == 0) {
                      if ((Il2CppMethodInitialized_07542a23 & 1) == 0) {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                        il2cpp_codegen_initialize_runtime_metadata(&"point");
                        Il2CppMethodInitialized_07542a23 = 1;
                      }
                      pGVar8 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar8,(MethodInfo *)0x0);
                      if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_0537462e;
                      (pGVar8->fields).value = 220.0;
                    }
                    else {
                      if ((Il2CppMethodInitialized_07542a23 & 1) == 0) {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                        il2cpp_codegen_initialize_runtime_metadata(&"point");
                        Il2CppMethodInitialized_07542a23 = 1;
                      }
                      pGVar8 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar8,(MethodInfo *)0x0);
                      if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_0537462e;
                      (pGVar8->fields).value = 260.0;
                    }
                    (pGVar8->fields).unit = "point";
                    Il2CppCodeGenWriteBarrier(&(pGVar8->fields).unit);
                    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                       (pSVar2,(System_String_o *)0x0,(System_String_o *)0x0,
                                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar8,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                                        ,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffff90);
                    (pGVar6->fields).layout = pGVar4;
                    Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout);
                    if (2 < (uint)pGVar5->max_length) {
                      pGVar5->m_Items[2] = pGVar6;
                      Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 2);
                      pSVar2 = System_String__Concat_52f0320(id,"-rgb-row",(MethodInfo *)0x0);
                      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,3);
                      pSVar7 = System_String__Concat_52f0320(id,"-r-field",(MethodInfo *)0x0);
                      pMVar10 = extraout_RDX;
                      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
                        pMVar10 = extraout_RDX_00;
                      }
                      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                         (id,"r",pMVar10);
                      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                         (pSVar7,"R",pGVar6,
                                          (MethodInfo *)&"R");
                      if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
                      goto label_0537462e;
                      if ((int)pGVar9->max_length != 0) {
                        pGVar9->m_Items[0] = pGVar6;
                        Il2CppCodeGenWriteBarrier(pGVar9->m_Items);
                        pSVar7 = System_String__Concat_52f0320(id,"-g-field",(MethodInfo *)0x0);
                        pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                           (id,"g",method_00);
                        pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                           (pSVar7,"G",pGVar6,
                                            (MethodInfo *)&"G");
                        if ((pGVar9->max_length & 0xfffffffe) != 0) {
                          pGVar9->m_Items[1] = pGVar6;
                          Il2CppCodeGenWriteBarrier(pGVar9->m_Items + 1);
                          pSVar7 = System_String__Concat_52f0320(id,"-b-field",(MethodInfo *)0x0);
                          pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                             (id,"b",method_01);
                          pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                             (pSVar7,"B",pGVar6,
                                              (MethodInfo *)&"B");
                          if (2 < (uint)pGVar9->max_length) {
                            pGVar9->m_Items[2] = pGVar6;
                            Il2CppCodeGenWriteBarrier(pGVar9->m_Items + 2);
                            pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                               (pSVar2,pGVar9,method_02);
                            if ((pGVar5->max_length & 0xfffffffc) != 0) {
                              pGVar5->m_Items[3] = pGVar6;
                              Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 3);
                              pSVar2 = System_String__Concat_52f0320
                                                 (id,"-hex-row",(MethodInfo *)0x0);
                              pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                       SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array
                                                  ,2);
                              pSVar7 = System_String__Concat_52f0320
                                                 (id,"-hex-label",(MethodInfo *)0x0);
                              pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
                                                 (pSVar7,"HEX",42.0,method_03);
                              if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
                              goto label_0537462e;
                              if ((int)pGVar9->max_length != 0) {
                                pGVar9->m_Items[0] = pGVar6;
                                Il2CppCodeGenWriteBarrier(pGVar9->m_Items);
                                pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput
                                                   (id,enableAlpha,method_04);
                                if ((pGVar9->max_length & 0xfffffffe) != 0) {
                                  pGVar9->m_Items[1] = pGVar6;
                                  Il2CppCodeGenWriteBarrier(pGVar9->m_Items + 1);
                                  pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                     (pSVar2,pGVar9,method_05);
                                  if (4 < (uint)pGVar5->max_length) {
                                    pGVar5->m_Items[4] = pGVar6;
                                    Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 4);
                                    pSVar2 = System_String__Concat_52f0320
                                                       (id,"-footer",(MethodInfo *)0x0);
                                    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                             SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array
                                                       ,2);
                                    pSVar7 = System_String__Concat_52f0320
                                                       (id,"-cancel",(MethodInfo *)0x0);
                                    pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                                       (pSVar7,"Common.Cancel","buttonQuiet",
                                                        (MethodInfo *)&"buttonQuiet");
                                    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
                                    goto label_0537462e;
                                    if ((int)pGVar9->max_length != 0) {
                                      pGVar9->m_Items[0] = pGVar6;
                                      Il2CppCodeGenWriteBarrier(pGVar9->m_Items);
                                      pSVar7 = System_String__Concat_52f0320
                                                         (id,"-save",(MethodInfo *)0x0);
                                      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                                         (pSVar7,"Common.Save","buttonPrimary",
                                                          (MethodInfo *)&"buttonPrimary");
                                      if ((pGVar9->max_length & 0xfffffffe) != 0) {
                                        pGVar9->m_Items[1] = pGVar6;
                                        Il2CppCodeGenWriteBarrier(pGVar9->m_Items + 1);
                                        pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                           (pSVar2,pGVar9,method_06);
                                        if (5 < (uint)pGVar5->max_length) {
                                          pGVar5->m_Items[5] = pGVar6;
                                          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 5);
                                          (__this_00->fields).children = pGVar5;
                                          Il2CppCodeGenWriteBarrier(&(__this_00->fields).children);
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
label_05374633:
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
label_0537462e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Open
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool focusOnOpen, const MethodInfo* method);
// 0x5375520

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,bool focusOnOpen
               ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root_00;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_01;
  MethodInfo *pMVar2;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_58;
  
  if (Il2CppMethodInitialized_07542a6d == '\0') {
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
    Il2CppMethodInitialized_07542a6d = '\x01';
  }
  local_58.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_58.fields.LivePreview = false;
  local_58.fields.Disabled = false;
  local_58.fields._26_6_ = 0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.EnableAlpha = false;
  local_58.fields._9_7_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->static_fields->Definitions;
  if (__this == (System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *)0x0)
  goto label_05375754;
  bVar1 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                     &local_58,
                     (MethodInfo_4AD81B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                    );
  if ((bVar1) && ((local_58.fields._24_8_ & 0x100) == 0)) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05375754;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_05375754:
        ThrowNullReferenceException();
      }
      __this_00 = (root->fields)._Overlays_k__BackingField;
      if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        pMVar2 = (MethodInfo *)id;
        id_00 = System_String__Concat_52f0320("color-picker-",id,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
        }
        root_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode(id,pMVar2);
        pMVar2 = (MethodInfo *)(ulong)focusOnOpen;
        x = (UnityEngine_Object_o *)
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                      (__this_00,id_00,root_00,context.fields.GameObject,focusOnOpen,false,8.0,true,0,
                       (MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if ((x != (UnityEngine_Object_o *)0x0) &&
             (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                    ((UnityEngine_GameObject_o *)x,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerPopover
                                    ),
             __this_01 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                      (__this_01,id,context.fields.GameObject,root,pMVar2);
            return;
          }
          goto label_05375754;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildVisual
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildVisual (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5375da0

bool Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildVisual
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchUIColorPicker_Definition__o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_48;
  
  if (Il2CppMethodInitialized_07542a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07542a6e = '\x01';
  }
  GStack_48.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_48.fields.LivePreview = false;
  GStack_48.fields.Disabled = false;
  GStack_48.fields._26_6_ = 0;
  GStack_48.fields.Id = (System_String_o *)0x0;
  GStack_48.fields.EnableAlpha = false;
  GStack_48.fields._9_7_ = 0;
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
                       (Il2CppObject *)(node->fields).value,&GStack_48,
                       (MethodInfo_4AD81B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_TryGetValue
                      );
    if (!bVar1) {
      return true;
    }
    if (((go != (UnityEngine_GameObject_o *)0x0) &&
        (__this_00 = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual)
        , context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) &&
       (__this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                (__this_00,(node->fields).value,(bool)(GStack_48.fields.EnableAlpha & 1),
                 (context->fields).Theme,method);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$RgbInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput (System_String_o* id, System_String_o* suffix, const MethodInfo* method);
// 0x53747b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
          (System_String_o *id,System_String_o *suffix,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *in_stack_ffffffffffffffc0;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (Il2CppMethodInitialized_07542a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_07542a6f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "InputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    pSVar1 = System_String__Concat_5301f10(id,"-",suffix,(MethodInfo *)0x0);
    (__this->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).placeholder = "0";
    Il2CppCodeGenWriteBarrier(&(__this->fields).placeholder);
    local_30.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 2;
    pSVar1 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    (__this->fields).inputType = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).inputType);
    (__this->fields).style = "inputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    (__this->fields).maxCharacters = 3;
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,in_stack_ffffffffffffffc0);
      (__this->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput (System_String_o* id, bool alpha, const MethodInfo* method);
// 0x5375070
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5375140: cmp byte ptr [rip + 0x21cd933], 0
// asm:   0x5375147: jne 0x537515c
// asm:   0x5375314: jmp 0x537515c

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput(System_String_o *id,bool alpha,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  MethodInfo *in_stack_ffffffffffffffc0;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (Il2CppMethodInitialized_07542a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"#RRGGBBAA");
    il2cpp_codegen_initialize_runtime_metadata(&"#RRGGBB");
    Il2CppMethodInitialized_07542a70 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "InputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    if (Il2CppMethodInitialized_07542a7a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-hex");
      Il2CppMethodInitialized_07542a7a = '\x01';
    }
    pSVar1 = System_String__Concat_52f0320(id,"-hex",(MethodInfo *)0x0);
    (__this->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    if (alpha) {
      ppSVar2 = &"#RRGGBBAA";
    }
    else {
      ppSVar2 = &"#RRGGBB";
    }
    (__this->fields).placeholder = *ppSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).placeholder);
    local_30.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 0;
    pSVar1 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    (__this->fields).inputType = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).inputType);
    (__this->fields).style = "inputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    (__this->fields).maxCharacters = (uint)alpha * 2 + 7;
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffc0);
      (__this->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Field
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field (System_String_o* id, System_String_o* label, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* input, const MethodInfo* method);
// 0x5374a00

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
          (System_String_o *id,System_String_o *label,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *input,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_07542a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07542a71 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,6.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,in_stack_ffffffffffffffd0);
      (__this->fields).layout = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,2);
      id_00 = System_String__Concat_52f0320(id,"-label",(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
        method_00 = extraout_RDX_00;
      }
      pGVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label(id_00,label,18.0,method_00);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((int)pGVar2->max_length != 0) {
          pGVar2->m_Items[0] = pGVar3;
          Il2CppCodeGenWriteBarrier(pGVar2->m_Items);
          if ((pGVar2->max_length & 0xfffffffe) != 0) {
            pGVar2->m_Items[1] = input;
            Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 1);
            (__this->fields).children = pGVar2;
            Il2CppCodeGenWriteBarrier(&(__this->fields).children);
            return __this;
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Label
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label (System_String_o* id, System_String_o* text, float width, const MethodInfo* method);
// 0x5374ea0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
          (System_String_o *id,System_String_o *text,float width,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_07542a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07542a72 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text);
    (__this->fields).style = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    if (Il2CppMethodInitialized_07542a23 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542a23 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = width;
      (__this_00->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffd0);
      (__this->fields).layout = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Row
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row (System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x5374cb0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
          (System_String_o *id,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (Il2CppMethodInitialized_07542a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07542a73 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,8.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffe0);
      (__this->fields).layout = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
      (__this->fields).children = children;
      Il2CppCodeGenWriteBarrier(&(__this->fields).children);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button (System_String_o* id, System_String_o* key, System_String_o* style, const MethodInfo* method);
// 0x5375320

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
          (System_String_o *id,System_String_o *key,System_String_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_07542a74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_07542a74 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
    (__this->fields).text = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text);
    (__this->fields).textKey = key;
    Il2CppCodeGenWriteBarrier(&(__this->fields).textKey);
    (__this->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffd0);
      (__this->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode (System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x5374680

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
          (System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07542a75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profileColorSwatch");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorSwatch");
    Il2CppMethodInitialized_07542a75 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).type = "ColorSwatch";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type);
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id);
  (__this->fields).style = "profileColorSwatch";
  Il2CppCodeGenWriteBarrier(&(__this->fields).style);
  (__this->fields).value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).value);
  (__this->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
  return __this;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetSwatch
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x53729b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  bool bVar2;
  UnityEngine_UI_Image_o *x;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_07542a76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a76 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  x = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                (root,id,(MethodInfo_353CD00 *)
                         MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                      (value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar1.fields.b = local_28.b;
      UVar1.fields.a = local_28.a;
      UVar1.fields.r = local_28.r;
      UVar1.fields.g = local_28.g;
      (*(x->klass->vtable)._23_set_color.methodPtr)(x,UVar1,(x->klass->vtable)._23_set_color.method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetText
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x5372ae0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  TMPro_TextMeshProUGUI_o *x;
  
  if (Il2CppMethodInitialized_07542a77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a77 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  x = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                (root,id,(MethodInfo_353CD00 *)
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
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_353CD00* method);
// 0x363cd00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x363ce10: jmp 0x363ce14
// asm:   0x363ce12: xor ebp, ebp
// asm:   0x363ce46: jmp 0x363cd47

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_353CD00 *method)

{
  uint32_t uVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar6;
  
  if ((method->rgctx_data == (MethodInfo_353CD00_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_353CD00_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_34B1260 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar4 == (System_Object_array *)0x0)) {
label_0363ce4b:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = pSVar4->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar5 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar6];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) goto label_0363ce4b;
          a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
          if (bVar3) {
            return (Il2CppObject *)x;
          }
        }
        uVar6 = uVar6 + 1;
        uVar2 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar2;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PreviewId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId (System_String_o* id, const MethodInfo* method);
// 0x5374640

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-preview");
    Il2CppMethodInitialized_07542a78 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,"-preview",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$VisualId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId (System_String_o* id, const MethodInfo* method);
// 0x5374770

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-visual");
    Il2CppMethodInitialized_07542a79 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,"-visual",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId (System_String_o* id, const MethodInfo* method);
// 0x53760d0

System_String_o * Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-hex");
    Il2CppMethodInitialized_07542a7a = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,"-hex",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$ButtonId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId (System_String_o* id, const MethodInfo* method);
// 0x5376110

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-button");
    Il2CppMethodInitialized_07542a7b = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,"-button",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId (System_String_o* id, const MethodInfo* method);
// 0x5372970

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-swatch");
    Il2CppMethodInitialized_07542a7c = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,"-swatch",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$TextId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId (System_String_o* id, const MethodInfo* method);
// 0x5372aa0

System_String_o * Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-value");
    Il2CppMethodInitialized_07542a7d = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,"-value",(MethodInfo *)0x0);
  return pSVar1;
}


