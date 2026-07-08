// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPicker
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPicker.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.Definition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o __this, System_String_o* id, bool enableAlpha, System_Action_GisketchActionContext__o* save, bool livePreview, const MethodInfo* method);
// 0x3afe7f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o __this,System_String_o *id
               ,bool_conflict enableAlpha,System_Action_GisketchActionContext__o *save,
               bool_conflict livePreview,MethodInfo *method)

{
  System_String_Fields SVar1;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000034;
  
  SVar1._4_4_ = in_register_0000000c;
  SVar1._stringLength = livePreview;
  id->klass = (System_String_c *)CONCAT44(in_register_00000034,enableAlpha);
  il2cpp_runtime_glue();
  *(char *)&id->monitor = (char)save;
  id->fields = SVar1;
  il2cpp_runtime_glue(&id->fields,SVar1);
  *(char *)&id[1].klass = (char)method;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x3afefb0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_<>c__DisplayClass15_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass15_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0___Build_b__0 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x3b021f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_<>c__DisplayClass15_0__<Build>b__0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *action;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffff68;
  MethodInfo *in_stack_ffffffffffffff78;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (DAT_057014b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__1);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"subtext");
    il2cpp_init_method_metadata(&"-label");
    il2cpp_init_method_metadata(&"text");
    DAT_057014b9 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    pSVar2 = (pGVar1->fields)._label;
    pSVar3 = System_String__Concat((pGVar1->fields)._id,"-label",(MethodInfo *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (row,pSVar2,"subtext",pSVar3,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,in_stack_ffffffffffffff68)
      ;
      pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      action = (__this->fields).__9__1;
      if (action == (System_Action_GisketchActionContext__o *)0x0) {
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
        System_Action<GisketchActionContext>___ctor();
        (__this->fields).__9__1 = action;
        il2cpp_runtime_glue(&(__this->fields).__9__1,action);
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
        pSVar3 = (pGVar1->fields)._id;
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057014b5 == '\0') {
          il2cpp_init_method_metadata(&"-button");
          DAT_057014b5 = '\x01';
        }
        pSVar3 = System_String__Concat(pSVar3,"-button",(MethodInfo *)0x0);
        __this_00 = (row->fields)._actions;
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          actionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        else {
          actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                               (__this_00,(row->fields)._ownerId,action,(MethodInfo *)0x0);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (row,3,pSVar2,actionId,pSVar3,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (System_String_o *)0x0,in_stack_ffffffffffffff78);
        if (DAT_0570147c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
          il2cpp_init_method_metadata(&"point");
          DAT_0570147c = '\x01';
        }
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
        Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          (pGVar5->fields).value = 58.0;
          (pGVar5->fields).unit = "point";
          il2cpp_runtime_glue(&(pGVar5->fields).unit);
          if (DAT_0570147c == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
            il2cpp_init_method_metadata(&"point");
            DAT_0570147c = '\x01';
          }
          __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
          Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            (__this_01->fields).value = 58.0;
            (__this_01->fields).unit = "point";
            il2cpp_runtime_glue(&(__this_01->fields).unit);
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,__this_01,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffb0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
              il2cpp_runtime_glue(&(pGVar4->fields).search,pGVar6);
              pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                       il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,1);
              pGVar1 = (__this->fields).__4__this;
              if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
                pSVar2 = (pGVar1->fields)._id;
                if (DAT_057014b6 == '\0') {
                  il2cpp_init_method_metadata(&"-swatch");
                  DAT_057014b6 = '\x01';
                }
                pSVar3 = System_String__Concat(pSVar2,"-swatch",(MethodInfo *)0x0);
                pSVar2 = (__this->fields).value;
                if (DAT_0570147c == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                  il2cpp_init_method_metadata(&"point");
                  DAT_0570147c = '\x01';
                }
                pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength)
                ;
                Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
                if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                  (pGVar5->fields).value = 42.0;
                  (pGVar5->fields).unit = "point";
                  il2cpp_runtime_glue(&(pGVar5->fields).unit);
                  if (DAT_0570147c == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                    il2cpp_init_method_metadata(&"point");
                    DAT_0570147c = '\x01';
                  }
                  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,(MethodInfo *)0x0)
                  ;
                  if (method_00 != (MethodInfo *)0x0) {
                    ((Gisketch_Aottg2UI_Data_GisketchLength_Fields *)&method_00->invoker_method)->
                    value = 42.0;
                    method_00->name = (char *)"point";
                    il2cpp_runtime_glue(&method_00->name);
                    method_01 = (MethodInfo *)0x0;
                    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,
                                        0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffb0);
                    pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                       (pSVar3,pSVar2,pGVar6,method_01);
                    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                      if ((int)pGVar7->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pGVar7->m_Items[0] = pGVar8;
                      il2cpp_runtime_glue(pGVar7->m_Items,pGVar8);
                      (pGVar4->fields).deferredChildren = pGVar7;
                      il2cpp_runtime_glue(&(pGVar4->fields).deferredChildren,pGVar7);
                      pGVar1 = (__this->fields).__4__this;
                      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
                        pSVar2 = (__this->fields).value;
                        pSVar3 = (pGVar1->fields)._id;
                        if (DAT_057014b7 == '\0') {
                          il2cpp_init_method_metadata(&"-value");
                          DAT_057014b7 = '\x01';
                        }
                        pSVar3 = System_String__Concat(pSVar3,"-value",(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Code_AottgUi__Text
                                  (row,pSVar2,"text",pSVar3,(System_String_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                   method_00);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass15_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0___Build_b__1 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b027a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_<>c__DisplayClass15_0__<Build>b__1
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass15_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *id;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_057014ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_057014ba = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    id = (pGVar1->fields)._id;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,id,1,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x3aff1f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_<>c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<BuildCompact>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___BuildCompact_b__0 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x3b02830

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_<>c__DisplayClass16_0__<BuildCompact>b__0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *action;
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
  
  if (DAT_057014bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildCompact_b__1);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-label");
    il2cpp_init_method_metadata(&"accountInputLabel");
    DAT_057014bb = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    pSVar2 = (pGVar1->fields)._label;
    pSVar3 = System_String__Concat((pGVar1->fields)._id,"-label",(MethodInfo *)0x0);
    if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (field,pSVar2,"accountInputLabel",pSVar3,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,in_stack_ffffffffffffff78)
      ;
      pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      action = (__this->fields).__9__1;
      if (action == (System_Action_GisketchActionContext__o *)0x0) {
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
        System_Action<GisketchActionContext>___ctor();
        (__this->fields).__9__1 = action;
        il2cpp_runtime_glue(&(__this->fields).__9__1,action);
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
        pSVar3 = (pGVar1->fields)._id;
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057014b5 == '\0') {
          il2cpp_init_method_metadata(&"-button");
          DAT_057014b5 = '\x01';
        }
        pSVar3 = System_String__Concat(pSVar3,"-button",(MethodInfo *)0x0);
        __this_00 = (field->fields)._actions;
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          actionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        else {
          actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                               (__this_00,(field->fields)._ownerId,action,(MethodInfo *)0x0);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (field,3,pSVar2,actionId,pSVar3,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (System_String_o *)0x0,in_stack_ffffffffffffff88);
        if (DAT_0570147c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
          il2cpp_init_method_metadata(&"point");
          DAT_0570147c = '\x01';
        }
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
        Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          (pGVar5->fields).value = 58.0;
          (pGVar5->fields).unit = "point";
          il2cpp_runtime_glue(&(pGVar5->fields).unit);
          if (DAT_0570147c == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
            il2cpp_init_method_metadata(&"point");
            DAT_0570147c = '\x01';
          }
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
          Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            (pGVar6->fields).value = 58.0;
            (pGVar6->fields).unit = "point";
            il2cpp_runtime_glue(&(pGVar6->fields).unit);
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffc0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
              il2cpp_runtime_glue(&(pGVar4->fields).search,pGVar7);
              pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                       il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,1);
              pGVar1 = (__this->fields).__4__this;
              if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
                pSVar2 = (pGVar1->fields)._id;
                if (DAT_057014b6 == '\0') {
                  il2cpp_init_method_metadata(&"-swatch");
                  DAT_057014b6 = '\x01';
                }
                pSVar3 = System_String__Concat(pSVar2,"-swatch",(MethodInfo *)0x0);
                pSVar2 = (__this->fields).value;
                if (DAT_0570147c == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                  il2cpp_init_method_metadata(&"point");
                  DAT_0570147c = '\x01';
                }
                pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength)
                ;
                Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
                if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                  (pGVar5->fields).value = 42.0;
                  (pGVar5->fields).unit = "point";
                  il2cpp_runtime_glue(&(pGVar5->fields).unit);
                  if (DAT_0570147c == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                    il2cpp_init_method_metadata(&"point");
                    DAT_0570147c = '\x01';
                  }
                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
                           il2cpp_runtime_glue(TypeInfo_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
                  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (pGVar6->fields).value = 42.0;
                    (pGVar6->fields).unit = "point";
                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                    method_00 = (MethodInfo *)0x0;
                    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,
                                        pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,
                                        0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffc0);
                    pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                       (pSVar3,pSVar2,pGVar7,method_00);
                    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                      if ((int)pGVar8->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pGVar8->m_Items[0] = pGVar9;
                      il2cpp_runtime_glue(pGVar8->m_Items,pGVar9);
                      (pGVar4->fields).deferredChildren = pGVar8;
                      il2cpp_runtime_glue(&(pGVar4->fields).deferredChildren,pGVar8);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<BuildCompact>b__1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___BuildCompact_b__1 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b02d70

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_<>c__DisplayClass16_0__<BuildCompact>b__1
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  System_String_o *id;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_057014bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_057014bc = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    id = (pGVar1->fields)._id;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,id,1,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___cctor (const MethodInfo* method);
// 0x3afe0d0

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___cctor(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *pSVar3;
  long lVar4;
  System_String_o *value;
  void *pvVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  Il2CppObject *value_00;
  undefined1 *puVar9;
  undefined8 uVar10;
  
  if (DAT_0570149c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Cod);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Definition);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildVisual);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    il2cpp_init_method_metadata(&"GisketchUIColorPickerVisual");
    DAT_0570149c = '\x01';
    if (*(int *)(TypeInfo_StringComparer + 0xe4) != 0) goto LAB_03afe0fc;
LAB_03afe301:
    il2cpp_init_class();
    if (DAT_0570136f != '\0') goto LAB_03afe109;
LAB_03afe313:
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) goto LAB_03afe301;
LAB_03afe0fc:
    if (DAT_0570136f == '\0') goto LAB_03afe313;
LAB_03afe109:
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
            (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_string__Definition)
  ;
  System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>___ctor
            (__this,pSVar3,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Cod);
  **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchUIColorPicker + 0xb8),__this);
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
            (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar8,pSVar3,MethodInfo_Dictionary_2_System_String_System_String);
  lVar4 = *(long *)(TypeInfo_GisketchUIColorPicker + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 8) = pSVar8;
  il2cpp_runtime_glue(lVar4 + 8);
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = **(long **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  pvVar5 = MethodInfo_Boolean_BuildVisual;
  value_00[1].klass = (Il2CppClass *)*(undefined8 *)((long)MethodInfo_Boolean_BuildVisual + 8);
  value_00[2].monitor = pvVar5;
  value_00[2].klass = (Il2CppClass *)0x0;
  il2cpp_runtime_glue(value_00 + 2);
  cVar1 = *(char *)((long)pvVar5 + 0x52);
  value_00[4].klass = (Il2CppClass *)value_00;
  cVar6 = il2cpp_glue_02274970(pvVar5);
  if (cVar6 == '\0') {
    if (cVar1 != '\x03') {
      uVar10 = il2cpp_glue_022dc730(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar10,0);
    }
    puVar9 = &LAB_0205e5c0;
  }
  else {
    if (cVar1 != '\x04') {
      uVar10 = value_00[2].klass;
      value_00[1].monitor = value_00[1].klass;
      value_00[4].klass = (Il2CppClass *)uVar10;
      value_00[3].monitor = &LAB_0205e550;
      value = "GisketchUIColorPickerVisual";
      goto joined_r0x03afe366;
    }
    puVar9 = &LAB_0205e5f0;
  }
  value_00[1].monitor = puVar9;
  value_00[3].monitor = &LAB_0205e550;
  value = "GisketchUIColorPickerVisual";
joined_r0x03afe366:
  "GisketchUIColorPickerVisual" = value;
  if (lVar4 != 0) {
    if (DAT_057014e2 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
      DAT_057014e2 = '\x01';
    }
    bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x10);
    if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar8,(Il2CppObject *)value,value_00,MethodInfo_Void_set_Item);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, System_Action_GisketchActionContext__o* save, bool enableAlpha, bool livePreview, bool compact, const MethodInfo* method);
// 0x3afe450

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *value,
               System_Action_GisketchActionContext__o *save,bool_conflict enableAlpha,
               bool_conflict livePreview,bool_conflict compact,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._label = label;
  il2cpp_runtime_glue(&(__this->fields)._label,label);
  (__this->fields)._value = value;
  il2cpp_runtime_glue(&(__this->fields)._value,value);
  (__this->fields)._save = save;
  il2cpp_runtime_glue(&(__this->fields)._save,save);
  *(char *)&(__this->fields)._enableAlpha = (char)enableAlpha;
  *(undefined1 *)&(__this->fields)._livePreview = (undefined1)livePreview;
  *(undefined1 *)((long)&(__this->fields)._livePreview + 1) = (undefined1)compact;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value (System_String_o* id, System_String_o* fallback, bool enableAlpha, const MethodInfo* method);
// 0x3afe4e0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
          (System_String_o *id,System_String_o *fallback,bool_conflict enableAlpha,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  MethodInfo *method_00;
  System_String_o *local_28;
  
  if (DAT_0570149d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_0570149d = '\x01';
  }
  local_28 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_GisketchUIColorPicker + 0xb8) + 8);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_00 = MethodInfo_Boolean_TryGetValue;
  bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (__this,(Il2CppObject *)id,(Il2CppObject **)&local_28,
                     (MethodInfo_308E3E0 *)MethodInfo_Boolean_TryGetValue);
  if ((char)bVar1 == '\0') {
    local_28 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                         (fallback,enableAlpha & 0xff,(System_String_o *)0x0,method_00);
  }
  return local_28;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Register
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register (System_String_o* id, System_String_o* value, System_Action_GisketchActionContext__o* save, bool enableAlpha, bool livePreview, const MethodInfo* method);
// 0x3afe6a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
               (System_String_o *id,System_String_o *value,
               System_Action_GisketchActionContext__o *save,bool_conflict enableAlpha,
               bool_conflict livePreview,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o value_00;
  bool_conflict bVar1;
  System_String_o *value_01;
  undefined4 in_register_0000000c;
  MethodInfo *method_00;
  System_String_o *local_50;
  undefined8 uStack_48;
  System_Action_GisketchActionContext__o *pSStack_40;
  undefined8 uStack_38;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000000c,enableAlpha);
  if (DAT_0570149e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_0570149e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_GisketchUIColorPicker + 0xb8) + 8);
  value_01 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                       (value,enableAlpha & 0xff,(System_String_o *)0x0,method_00);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)value_01,MethodInfo_Void_set_Item);
    __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
    uStack_48 = 0;
    pSStack_40 = (System_Action_GisketchActionContext__o *)0x0;
    uStack_38 = 0;
    local_50 = id;
    il2cpp_runtime_glue(&local_50,id);
    uStack_48 = CONCAT71(uStack_48._1_7_,(char)enableAlpha);
    pSStack_40 = save;
    il2cpp_runtime_glue(&pSStack_40,save);
    uStack_38 = CONCAT71(uStack_38._1_7_,(char)livePreview);
    if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      value_00.fields._8_8_ = uStack_48;
      value_00.fields.Id = local_50;
      value_00.fields.Save = pSStack_40;
      value_00.fields._24_8_ = uStack_38;
      System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>__set_Item
                (__this_00,(Il2CppObject *)id,value_00,MethodInfo_Void_set_Item);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue (System_String_o* id, System_String_o* value, bool enableAlpha, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3afe830

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
               (System_String_o *id,System_String_o *value,bool_conflict enableAlpha,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  System_String_o *value_00;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_48;
  
  if (DAT_0570149f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570149f = '\x01';
  }
  local_48.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.LivePreview = 0;
  local_48.fields._28_4_ = 0;
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.EnableAlpha = 0;
  local_48.fields._12_4_ = 0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
      **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)id,&local_48,
                       MethodInfo_Boolean_TryGetValue);
    pMVar4 = (MethodInfo *)(ulong)((byte)local_48.fields.EnableAlpha & 1);
    if ((char)bVar1 == '\0') {
      pMVar4 = (MethodInfo *)(ulong)(enableAlpha & 0xff);
    }
    value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                         (value,(bool_conflict)pMVar4,(System_String_o *)0x0,pMVar4);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_GisketchUIColorPicker + 0xb8) + 8);
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar4 = MethodInfo_Void_set_Item;
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (__this,(Il2CppObject *)id,(Il2CppObject *)value_00,
                 (MethodInfo_308C840 *)MethodInfo_Void_set_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar2 = (UnityEngine_Transform_o *)0x0;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if ((source == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_03afea50;
        pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057014b6 == '\0') {
        il2cpp_init_method_metadata(&"-swatch");
        DAT_057014b6 = '\x01';
      }
      pSVar3 = System_String__Concat(id,"-swatch",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch(pUVar2,pSVar3,value_00,pMVar4);
      if (DAT_057014b7 == '\0') {
        il2cpp_init_method_metadata(&"-value");
        DAT_057014b7 = '\x01';
      }
      pSVar3 = System_String__Concat(id,"-value",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText(pUVar2,pSVar3,value_00,pMVar4);
      return;
    }
  }
LAB_03afea50:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Build (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x3afeca0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Build
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *save;
  bool_conflict bVar3;
  bool_conflict bVar4;
  Il2CppObject *__this_00;
  undefined8 *puVar5;
  System_String_o *pSVar6;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *pMVar7;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (DAT_057014a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass15_0);
    il2cpp_init_method_metadata(&"-color-picker");
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"#FFFFFF");
    il2cpp_init_method_metadata(&"row");
    DAT_057014a0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass15_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    pSVar6 = (__this->fields)._id;
    pSVar2 = (__this->fields)._value;
    save = (__this->fields)._save;
    bVar3 = (__this->fields)._enableAlpha;
    bVar4 = (__this->fields)._livePreview;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
              (pSVar6,pSVar2,save,(uint)(byte)bVar3,(uint)(byte)bVar4,in_R9);
    pSVar6 = (__this->fields)._id;
    bVar1 = (byte)(__this->fields)._enableAlpha;
    if (bVar1 == 0) {
      puVar5 = &"#FFFFFF";
    }
    else {
      puVar5 = &"#FFFFFFFF";
    }
    pMVar7 = (MethodInfo *)&TypeInfo_GisketchUIColorPicker;
    pSVar2 = (System_String_o *)*puVar5;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar6,pSVar2,(uint)bVar1,pMVar7);
    __this_00[1].monitor = pSVar6;
    il2cpp_runtime_glue(&__this_00[1].monitor,pSVar6);
    if (*(char *)((long)&(__this->fields)._livePreview + 1) != '\0') {
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact
                (__this,ui,__this_00[1].monitor,pMVar7);
      return;
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    pSVar6 = System_String__Concat((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = 100.0;
      (__this_01->fields).unit = "percent";
      il2cpp_runtime_glue(&(__this_01->fields).unit);
      pMVar7 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,10.0,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,in_stack_ffffffffffffffb0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"row",build,pSVar6,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar7);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildCompact
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* value, const MethodInfo* method);
// 0x3afefc0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_057014a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildCompact_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"-color-picker");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Center");
    DAT_057014a1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    __this_00[1].monitor = value;
    il2cpp_runtime_glue(&__this_00[1].monitor,value);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id = System_String__Concat((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
    if (DAT_0570147c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570147c = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = 70.0;
      (__this_01->fields).unit = "point";
      il2cpp_runtime_glue(&(__this_01->fields).unit);
      method_00 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,4.0,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffd0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",build,id,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current (System_String_o* id, bool enableAlpha, const MethodInfo* method);
// 0x3aff200

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current
          (System_String_o *id,bool_conflict enableAlpha,MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  
  if (DAT_057014a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"#FFFFFF");
    DAT_057014a2 = '\x01';
  }
  if ((char)enableAlpha == '\0') {
    puVar1 = &"#FFFFFF";
  }
  else {
    puVar1 = &"#FFFFFFFF";
  }
  pSVar2 = (System_String_o *)*puVar1;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar2,enableAlpha & 0xff,in_RCX);
  return pSVar2;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Commit
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3aff280

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit
               (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_00;
  undefined8 uVar1;
  System_Action_GisketchActionContext__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  System_String_o local_98;
  undefined8 uStack_80;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_78;
  System_String_c *local_58;
  void *pvStack_50;
  System_String_Fields local_48;
  undefined8 uStack_40;
  
  if (DAT_057014a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"save");
    DAT_057014a3 = '\x01';
  }
  local_78.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_78.fields.LivePreview = 0;
  local_78.fields._28_4_ = 0;
  local_78.fields.Id = (System_String_o *)0x0;
  local_78.fields._8_8_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
      **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) ==
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
LAB_03aff602:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>__TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)id,&local_78,
                     MethodInfo_Boolean_TryGetValue);
  uVar1 = local_78.fields._8_8_;
  if ((char)bVar3 != '\0') {
    if (DAT_057014ca == '\0') {
      il2cpp_init_method_metadata();
      DAT_057014ca = '\x01';
    }
    color.fields.r = (float)(value.fields._0_4_ & 0xff) / 255.0;
    fVar7 = (float)(value.fields._1_4_ & 0xff) / 255.0;
    color.fields.b = (float)(value.fields._2_4_ & 0xff) / 255.0;
    fVar8 = (float)(value.fields._3_4_ & 0xff) / 255.0;
    if ((uVar1 & 1) == 0) {
      color.fields.g = fVar7;
      color.fields.a = fVar8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
    }
    else {
      color_00.fields.g = fVar7;
      color_00.fields.r = color.fields.r;
      color_00.fields.a = fVar8;
      color_00.fields.b = color.fields.b;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    }
    pSVar4 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_GisketchUIColorPicker + 0xb8) + 8);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03aff602;
    method_00 = MethodInfo_Void_set_Item;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)pSVar4,(MethodInfo_308C840 *)MethodInfo_Void_set_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar5 = (UnityEngine_Transform_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      if ((source == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar5 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03aff602;
      pUVar5 = UnityEngine_Transform__get_root(pUVar5,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057014b6 == '\0') {
      il2cpp_init_method_metadata(&"-swatch");
      DAT_057014b6 = '\x01';
    }
    pSVar6 = System_String__Concat(id,"-swatch",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch(pUVar5,pSVar6,pSVar4,method_00);
    if (DAT_057014b7 == '\0') {
      il2cpp_init_method_metadata(&"-value");
      DAT_057014b7 = '\x01';
    }
    pSVar6 = System_String__Concat(id,"-value",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText(pUVar5,pSVar6,pSVar4,method_00);
    pSVar2 = local_78.fields.Save;
    if (local_78.fields.Save != (System_Action_GisketchActionContext__o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_03aff602;
      (__this_01->fields).id = "save";
      il2cpp_runtime_glue(&(__this_01->fields).id);
      (__this_01->fields).value = pSVar4;
      il2cpp_runtime_glue(&(__this_01->fields).value,pSVar4);
      local_98.fields._stringLength = 0;
      local_98.fields._firstChar = 0;
      local_98.fields._6_2_ = 0;
      uStack_80 = 0;
      local_98.klass = (System_String_c *)0x0;
      local_98.monitor = (void *)0x0;
      __this_00.fields.ElementId._4_4_ = in_stack_ffffffffffffff3c;
      __this_00.fields.ElementId._0_4_ = in_stack_ffffffffffffff38;
      __this_00.fields.GameObject._0_4_ = in_stack_ffffffffffffff40;
      __this_00.fields.GameObject._4_4_ = in_stack_ffffffffffffff44;
      __this_00.fields.Node._0_4_ = in_stack_ffffffffffffff48;
      __this_00.fields.Node._4_4_ = in_stack_ffffffffffffff4c;
      __this_00.fields.InputSource = in_stack_ffffffffffffff50;
      __this_00.fields._28_4_ = in_stack_ffffffffffffff54;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this_00,&local_98,(UnityEngine_GameObject_o *)id,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)source,(MethodInfo *)__this_01);
      local_48 = local_98.fields;
      uStack_40 = uStack_80;
      local_58 = local_98.klass;
      pvStack_50 = local_98.monitor;
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Preview
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3aff6b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
               (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this;
  undefined8 uVar1;
  System_Action_GisketchActionContext__o *pSVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  undefined4 in_stack_ffffffffffffff28;
  undefined4 in_stack_ffffffffffffff2c;
  undefined4 in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff34;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_98;
  System_String_o local_78;
  undefined8 uStack_60;
  System_String_c *local_58;
  void *pvStack_50;
  System_String_Fields local_48;
  undefined8 uStack_40;
  
  if (DAT_057014a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"preview");
    DAT_057014a4 = '\x01';
  }
  local_98.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_98.fields._24_8_ = 0;
  local_98.fields.Id = (System_String_o *)0x0;
  local_98.fields._8_8_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
      **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)id,&local_98,
                       MethodInfo_Boolean_TryGetValue);
    pSVar2 = local_98.fields.Save;
    if ((((char)bVar3 != '\0') && ((local_98.fields._24_8_ & 1) != 0)) &&
       (local_98.fields.Save != (System_Action_GisketchActionContext__o *)0x0)) {
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_03aff8ff;
      (__this_00->fields).id = "preview";
      il2cpp_runtime_glue();
      uVar1 = local_98.fields._8_8_;
      if (DAT_057014ca == '\0') {
        il2cpp_init_method_metadata();
        DAT_057014ca = '\x01';
      }
      color.fields.r = (float)(value.fields._0_4_ & 0xff) / 255.0;
      fVar5 = (float)(value.fields._1_4_ & 0xff) / 255.0;
      color.fields.b = (float)(value.fields._2_4_ & 0xff) / 255.0;
      fVar6 = (float)(value.fields._3_4_ & 0xff) / 255.0;
      if ((uVar1 & 1) == 0) {
        color.fields.g = fVar5;
        color.fields.a = fVar6;
        pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
      }
      else {
        color_00.fields.g = fVar5;
        color_00.fields.r = color.fields.r;
        color_00.fields.a = fVar6;
        color_00.fields.b = color.fields.b;
        pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      }
      pSVar4 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
      (__this_00->fields).value = pSVar4;
      il2cpp_runtime_glue(&(__this_00->fields).value,pSVar4);
      local_78.fields._stringLength = 0;
      local_78.fields._firstChar = 0;
      local_78.fields._6_2_ = 0;
      uStack_60 = 0;
      local_78.klass = (System_String_c *)0x0;
      local_78.monitor = (void *)0x0;
      __this.fields.ElementId._4_4_ = in_stack_ffffffffffffff2c;
      __this.fields.ElementId._0_4_ = in_stack_ffffffffffffff28;
      __this.fields.GameObject._0_4_ = in_stack_ffffffffffffff30;
      __this.fields.GameObject._4_4_ = in_stack_ffffffffffffff34;
      __this.fields.Node._0_4_ = in_stack_ffffffffffffff38;
      __this.fields.Node._4_4_ = in_stack_ffffffffffffff3c;
      __this.fields.InputSource = in_stack_ffffffffffffff40;
      __this.fields._28_4_ = in_stack_ffffffffffffff44;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this,&local_78,(UnityEngine_GameObject_o *)id,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)source,(MethodInfo *)__this_00);
      local_48 = local_78.fields;
      uStack_40 = uStack_60;
      local_58 = local_78.klass;
      pvStack_50 = local_78.monitor;
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
    }
    return;
  }
LAB_03aff8ff:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel (System_String_o* id, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3aff910

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel
               (System_String_o *id,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this;
  System_Action_GisketchActionContext__o *pSVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  System_String_o local_88;
  undefined8 uStack_70;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_68;
  System_String_c *local_48;
  void *pvStack_40;
  System_String_Fields local_38;
  undefined8 uStack_30;
  
  if (DAT_057014a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"cancel");
    DAT_057014a5 = '\x01';
  }
  local_68.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_68.fields._24_8_ = 0;
  local_68.fields.Id = (System_String_o *)0x0;
  local_68.fields.EnableAlpha = 0;
  local_68.fields._12_4_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
      **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)id,&local_68,
                       MethodInfo_Boolean_TryGetValue);
    pSVar1 = local_68.fields.Save;
    if ((((char)bVar2 != '\0') && ((local_68.fields._24_8_ & 1) != 0)) &&
       (local_68.fields.Save != (System_Action_GisketchActionContext__o *)0x0)) {
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_03affa7e;
      (__this_00->fields).id = "cancel";
      il2cpp_runtime_glue(&(__this_00->fields).id);
      local_88.fields._stringLength = 0;
      local_88.fields._firstChar = 0;
      local_88.fields._6_2_ = 0;
      uStack_70 = 0;
      local_88.klass = (System_String_c *)0x0;
      local_88.monitor = (void *)0x0;
      __this.fields.ElementId._4_4_ = in_stack_ffffffffffffff5c;
      __this.fields.ElementId._0_4_ = in_stack_ffffffffffffff58;
      __this.fields.GameObject._0_4_ = in_stack_ffffffffffffff60;
      __this.fields.GameObject._4_4_ = in_stack_ffffffffffffff64;
      __this.fields.Node._0_4_ = in_stack_ffffffffffffff68;
      __this.fields.Node._4_4_ = in_stack_ffffffffffffff6c;
      __this.fields.InputSource = in_stack_ffffffffffffff70;
      __this.fields._28_4_ = in_stack_ffffffffffffff74;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this,&local_88,(UnityEngine_GameObject_o *)id,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)source,(MethodInfo *)__this_00);
      local_38 = local_88.fields;
      uStack_30 = uStack_70;
      local_48 = local_88.klass;
      pvStack_40 = local_88.monitor;
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    }
    return;
  }
LAB_03affa7e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PopoverNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode (System_String_o* id, const MethodInfo* method);
// 0x3affa90

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  byte bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar10;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  uint uVar12;
  byte bVar13;
  MethodInfo *in_stack_ffffffffffffff80;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_50;
  
  if (DAT_057014a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIColorPicker_Definition_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"-hex-row");
    il2cpp_init_method_metadata(&"-hex-label");
    il2cpp_init_method_metadata(&"-title");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"-cancel");
    il2cpp_init_method_metadata(&"buttonPrimary");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-b-field");
    il2cpp_init_method_metadata(&"g");
    il2cpp_init_method_metadata(&"R");
    il2cpp_init_method_metadata(&"subtext");
    il2cpp_init_method_metadata(&"-save");
    il2cpp_init_method_metadata(&"-footer");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"G");
    il2cpp_init_method_metadata(&"Color Picker");
    il2cpp_init_method_metadata(&"b");
    il2cpp_init_method_metadata(&"HEX");
    il2cpp_init_method_metadata(&"-popover");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Panel");
    il2cpp_init_method_metadata(&"r");
    il2cpp_init_method_metadata(&"B");
    il2cpp_init_method_metadata(&"GisketchUIColorPickerVisual");
    il2cpp_init_method_metadata(&"-rgb-row");
    il2cpp_init_method_metadata(&"-r-field");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"-g-field");
    il2cpp_init_method_metadata(&"popover");
    il2cpp_init_method_metadata(&"buttonQuiet");
    DAT_057014a6 = '\x01';
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) goto LAB_03affc94;
LAB_03affac5:
    __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) != 0) goto LAB_03affac5;
LAB_03affc94:
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>__get_Item
              (&local_50,__this,(Il2CppObject *)id,MethodInfo_GisketchUIColorPicker_Definition_get_Item);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "Panel";
      il2cpp_runtime_glue(&__this_00->fields);
      pSVar2 = System_String__Concat(id,"-popover",(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar2;
      il2cpp_runtime_glue(&(__this_00->fields).id,pSVar2);
      (__this_00->fields).style = "popover";
      il2cpp_runtime_glue(&(__this_00->fields).style);
      if (DAT_0570147c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
        il2cpp_init_method_metadata(&"point");
        DAT_0570147c = '\x01';
      }
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar3->fields).value = 380.0;
        (pGVar3->fields).unit = "point";
        il2cpp_runtime_glue(&(pGVar3->fields).unit);
        pMVar11 = (MethodInfo *)0x0;
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                            (System_String_o *)0x0,10.0,pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,0.0,1.0,in_stack_ffffffffffffff80);
        (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_glue(&(__this_00->fields).search,pGVar4);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition);
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition)
        ;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).type = "Text";
          il2cpp_runtime_glue(&pGVar6->fields);
          pSVar2 = System_String__Concat(id,"-title",(MethodInfo *)0x0);
          (pGVar6->fields).id = pSVar2;
          il2cpp_runtime_glue(&(pGVar6->fields).id,pSVar2);
          (pGVar6->fields).text = "Color Picker";
          il2cpp_runtime_glue(&(pGVar6->fields).text);
          (pGVar6->fields).style = "subtext";
          il2cpp_runtime_glue(&(pGVar6->fields).style);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar5->max_length == 0) goto LAB_03b006e4;
            pGVar5->m_Items[0] = pGVar6;
            il2cpp_runtime_glue(pGVar5->m_Items,pGVar6);
            if (DAT_057014b2 == '\0') {
              il2cpp_init_method_metadata(&"-preview");
              DAT_057014b2 = '\x01';
            }
            pSVar2 = System_String__Concat(id,"-preview",(MethodInfo *)0x0);
            bVar13 = (byte)local_50.fields.EnableAlpha & 1;
            if (DAT_057014a2 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
              il2cpp_init_method_metadata(&"#FFFFFFFF");
              il2cpp_init_method_metadata(&"#FFFFFF");
              DAT_057014a2 = '\x01';
            }
            if (bVar13 == 0) {
              puVar7 = &"#FFFFFF";
            }
            else {
              puVar7 = &"#FFFFFFFF";
            }
            pSVar8 = (System_String_o *)*puVar7;
            if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                               (id,pSVar8,(uint)bVar13,pMVar11);
            if (DAT_0570147d == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
              il2cpp_init_method_metadata(&"percent");
              DAT_0570147d = '\x01';
            }
            pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
            Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
              (pGVar3->fields).value = 100.0;
              (pGVar3->fields).unit = "percent";
              il2cpp_runtime_glue(&(pGVar3->fields).unit);
              if (DAT_0570147c == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                il2cpp_init_method_metadata(&"point");
                DAT_0570147c = '\x01';
              }
              pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
              Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar9,(MethodInfo *)0x0);
              if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                (pGVar9->fields).value = 32.0;
                (pGVar9->fields).unit = "point";
                il2cpp_runtime_glue(&(pGVar9->fields).unit);
                pMVar11 = (MethodInfo *)0x0;
                pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar9,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,
                                    0.0,0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffff80);
                pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                   (pSVar2,pSVar8,pGVar4,pMVar11);
                if ((uint)pGVar5->max_length < 2) goto LAB_03b006e4;
                pGVar5->m_Items[1] = pGVar6;
                il2cpp_runtime_glue(pGVar5->m_Items + 1);
                pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                         il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
                Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
                if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (pGVar6->fields).type = "GisketchUIColorPickerVisual";
                  il2cpp_runtime_glue(&pGVar6->fields);
                  if (DAT_057014b3 == '\0') {
                    il2cpp_init_method_metadata(&"-visual");
                    DAT_057014b3 = '\x01';
                  }
                  pSVar2 = System_String__Concat(id,"-visual",(MethodInfo *)0x0);
                  (pGVar6->fields).id = pSVar2;
                  il2cpp_runtime_glue(&(pGVar6->fields).id,pSVar2);
                  (pGVar6->fields).value = id;
                  il2cpp_runtime_glue(&(pGVar6->fields).value);
                  if (DAT_0570147d == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                    il2cpp_init_method_metadata(&"percent");
                    DAT_0570147d = '\x01';
                  }
                  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
                           il2cpp_runtime_glue(TypeInfo_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (pGVar3->fields).value = 100.0;
                    (pGVar3->fields).unit = "percent";
                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                    pSVar2 = "Column";
                    bVar1 = bVar13 * '\x02' ^ 2;
                    if (bVar13 != 0) {
                      bVar1 = bVar13 * '\x02';
                    }
                    uVar12 = (uint)bVar1;
                    if (DAT_0570147c == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                      il2cpp_init_method_metadata(&"point");
                      DAT_0570147c = '\x01';
                    }
                    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
                             il2cpp_runtime_glue(TypeInfo_GisketchLength);
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar9,(MethodInfo *)0x0);
                    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                      (pGVar9->fields).value = *(float *)(&DAT_00cd0f00 + (ulong)bVar13 * 4);
                      (pGVar9->fields).unit = "point";
                      il2cpp_runtime_glue(&(pGVar9->fields).unit);
                      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                         (pSVar2,(System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                                          pGVar9,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0
                                          ,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffff80
                                         );
                      (pGVar6->fields).search =
                           (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
                      il2cpp_runtime_glue(&(pGVar6->fields).search,pGVar4);
                      if (uVar12 < (uint)pGVar5->max_length) {
                        pGVar5->m_Items[uVar12] = pGVar6;
                        il2cpp_runtime_glue(pGVar5->m_Items + uVar12,pGVar6);
                        pSVar2 = System_String__Concat(id,"-rgb-row",(MethodInfo *)0x0);
                        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                  il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,3);
                        pSVar8 = System_String__Concat(id,"-r-field",(MethodInfo *)0x0);
                        pMVar11 = extraout_RDX;
                        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                          il2cpp_init_class();
                          pMVar11 = extraout_RDX_00;
                        }
                        pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                           (id,"r",pMVar11);
                        pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                           (pSVar8,"R",pGVar6,(MethodInfo *)&"R");
                        if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
                        goto LAB_03b006df;
                        if ((int)pGVar10->max_length != 0) {
                          pGVar10->m_Items[0] = pGVar6;
                          il2cpp_runtime_glue(pGVar10->m_Items,pGVar6);
                          pSVar8 = System_String__Concat(id,"-g-field",(MethodInfo *)0x0);
                          pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                             (id,"g",method_00);
                          pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                             (pSVar8,"G",pGVar6,(MethodInfo *)&"G"
                                             );
                          if (1 < (uint)pGVar10->max_length) {
                            pGVar10->m_Items[1] = pGVar6;
                            il2cpp_runtime_glue(pGVar10->m_Items + 1,pGVar6);
                            pSVar8 = System_String__Concat(id,"-b-field",(MethodInfo *)0x0);
                            pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                               (id,"b",method_01);
                            pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                               (pSVar8,"B",pGVar6,
                                                (MethodInfo *)&"B");
                            if (2 < (uint)pGVar10->max_length) {
                              pGVar10->m_Items[2] = pGVar6;
                              il2cpp_runtime_glue(pGVar10->m_Items + 2,pGVar6);
                              pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                 (pSVar2,pGVar10,method_02);
                              if (3 < (uint)pGVar5->max_length) {
                                pGVar5->m_Items[3] = pGVar6;
                                il2cpp_runtime_glue(pGVar5->m_Items + 3,pGVar6);
                                pSVar2 = System_String__Concat(id,"-hex-row",(MethodInfo *)0x0);
                                pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                          il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,2);
                                pSVar8 = System_String__Concat(id,"-hex-label",(MethodInfo *)0x0);
                                pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
                                                   (pSVar8,"HEX",42.0,method_03);
                                if (pGVar10 ==
                                    (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
                                goto LAB_03b006df;
                                if ((int)pGVar10->max_length != 0) {
                                  pGVar10->m_Items[0] = pGVar6;
                                  il2cpp_runtime_glue(pGVar10->m_Items,pGVar6);
                                  pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput
                                                     (id,(uint)bVar13,method_04);
                                  if (1 < (uint)pGVar10->max_length) {
                                    pGVar10->m_Items[1] = pGVar6;
                                    il2cpp_runtime_glue(pGVar10->m_Items + 1,pGVar6);
                                    pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                       (pSVar2,pGVar10,method_05);
                                    if (4 < (uint)pGVar5->max_length) {
                                      pGVar5->m_Items[4] = pGVar6;
                                      il2cpp_runtime_glue(pGVar5->m_Items + 4,pGVar6);
                                      pSVar2 = System_String__Concat
                                                         (id,"-footer",(MethodInfo *)0x0);
                                      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array
                                                 *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,2);
                                      pSVar8 = System_String__Concat
                                                         (id,"-cancel",(MethodInfo *)0x0);
                                      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                                         (pSVar8,"Cancel","buttonQuiet",
                                                          (MethodInfo *)&"buttonQuiet");
                                      if (pGVar10 ==
                                          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0
                                         ) goto LAB_03b006df;
                                      if ((int)pGVar10->max_length != 0) {
                                        pGVar10->m_Items[0] = pGVar6;
                                        il2cpp_runtime_glue(pGVar10->m_Items,pGVar6);
                                        pSVar8 = System_String__Concat
                                                           (id,"-save",(MethodInfo *)0x0);
                                        pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                                           (pSVar8,"Save","buttonPrimary",
                                                            (MethodInfo *)&"buttonPrimary");
                                        if (1 < (uint)pGVar10->max_length) {
                                          pGVar10->m_Items[1] = pGVar6;
                                          il2cpp_runtime_glue(pGVar10->m_Items + 1,pGVar6);
                                          pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                             (pSVar2,pGVar10,method_06);
                                          if (5 < (uint)pGVar5->max_length) {
                                            pGVar5->m_Items[5] = pGVar6;
                                            il2cpp_runtime_glue(pGVar5->m_Items + 5,pGVar6);
                                            (__this_00->fields).deferredChildren = pGVar5;
                                            il2cpp_runtime_glue(&(__this_00->fields).deferredChildren
                                                               ,pGVar5);
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
LAB_03b006e4:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
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
LAB_03b006df:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Open
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool focusOnOpen, const MethodInfo* method);
// 0x3b01590

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
               bool_conflict focusOnOpen,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value;
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  uint8_t uVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  bool_conflict bVar9;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root;
  UnityEngine_Object_o *x_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_01;
  UnityEngine_Transform_o *pUVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  TMPro_TMP_InputField_o *pTVar14;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar15;
  UnityEngine_Events_UnityAction_o *pUVar16;
  System_Delegate_o *b;
  System_Action_GisketchUIColorPickerValue__o *pSVar17;
  System_Delegate_o *pSVar18;
  MethodInfo *pMVar19;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *pGVar20;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_Action_GisketchUIColorPickerValue__o *a;
  bool bVar21;
  UnityEngine_Color_o rgbColor;
  float fStackY_4c;
  float fVar22;
  float fStack_44;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o **ppGVar23;
  
  if (DAT_057014a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIColorPickerPopover_AddComponent_Gisket);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"color-picker-");
    DAT_057014a7 = '\x01';
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) goto LAB_03b01637;
LAB_03b015bd:
    __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) != 0) goto LAB_03b015bd;
LAB_03b01637:
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
  }
  if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
LAB_03b017d1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar9 = System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>__ContainsKey
                    (__this,(Il2CppObject *)id,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar9 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto LAB_03b017d1;
    x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
        UnityEngine_GameObject__GetComponentInParent<object>(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo)
    ;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  if (x == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_03b017d1;
  __this_00 = (x->fields)._Theme_k__BackingField;
  if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    return;
  }
  pMVar19 = (MethodInfo *)id;
  pSVar10 = System_String__Concat("color-picker-",id,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  root = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode(id,pMVar19);
  fStack_44 = 0.0;
  fStackY_4c = 0.0;
  x_00 = (UnityEngine_Object_o *)
         Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                   ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,pSVar10,root,
                    context.fields.GameObject,focusOnOpen & 0xff,0,8.0,1,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar9 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  if ((x_00 == (UnityEngine_Object_o *)0x0) ||
     (__this_01 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            ((UnityEngine_GameObject_o *)x_00,MethodInfo_GisketchUIColorPickerPopover_AddComponent_Gisket),
     __this_01 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) goto LAB_03b017d1;
  if (DAT_057014bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchUIColorPickerValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Cancel);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnVisualChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_Save);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColor);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"-cancel");
    il2cpp_init_method_metadata(&"-save");
    il2cpp_init_method_metadata(&"-g");
    il2cpp_init_method_metadata(&"-r");
    il2cpp_init_method_metadata(&"-b");
    DAT_057014bd = '\x01';
  }
  (__this_01->fields)._id = id;
  il2cpp_runtime_glue(&(__this_01->fields)._id,id);
  (__this_01->fields)._source = context.fields.GameObject;
  il2cpp_runtime_glue(&(__this_01->fields)._source,context.fields.GameObject);
  (__this_01->fields)._root = x;
  il2cpp_runtime_glue(&(__this_01->fields)._root);
  pUVar11 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057014b3 == '\0') {
    il2cpp_init_method_metadata(&"-visual");
    DAT_057014b3 = '\x01';
  }
  pSVar10 = System_String__Concat(id,"-visual",(MethodInfo *)0x0);
  pIVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar11,pSVar10,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColor)
  ;
  pIVar13 = pIVar12 + 9;
  if (pIVar12 == (Il2CppObject *)0x0) {
    pIVar13 = (Il2CppObject *)&(__this_01->fields)._enableAlpha;
  }
  bVar1 = *(byte *)&pIVar13->klass;
  *(byte *)&(__this_01->fields)._enableAlpha = bVar1;
  pGVar20 = __this_01;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_057014a2 == '\0') goto LAB_03b019ca;
LAB_03b01987:
    if (bVar1 != 0) goto LAB_03b0198c;
LAB_03b019fa:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar10 = "#FFFFFF";
  }
  else {
    if (DAT_057014a2 != '\0') goto LAB_03b01987;
LAB_03b019ca:
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"#FFFFFF");
    DAT_057014a2 = '\x01';
    if (bVar1 == 0) goto LAB_03b019fa;
LAB_03b0198c:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar10 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                      (id,pSVar10,(uint)bVar1,(MethodInfo *)pGVar20);
  value = &(__this_01->fields)._value;
  bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar10,(uint)(byte)(__this_01->fields)._enableAlpha,value,
                     (MethodInfo *)pGVar20);
  if ((char)bVar9 == '\0') {
    fStack_44 = 0.0;
    fStackY_4c = 0.0;
    fVar22 = 0.0;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV
              (rgbColor,&fStackY_4c,(float *)&stack0xffffffffffffffb8,&fStack_44,(MethodInfo *)0x0);
    (value->fields).R = (char)0xffffffff;
    (value->fields).G = (char)(0xffffffff >> 8);
    (value->fields).B = (char)(0xffffffff >> 0x10);
    (value->fields).A = (char)(0xffffffff >> 0x18);
    (value->fields).H = fStackY_4c;
    (__this_01->fields)._value.fields.S = fVar22;
    (__this_01->fields)._value.fields.V = fStack_44;
  }
  pUVar11 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat(id,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar11,pSVar10,MethodInfo_TMP_InputField_Find_TMP_InputField)
  ;
  (__this_01->fields)._r = pTVar14;
  il2cpp_runtime_glue(&(__this_01->fields)._r);
  pUVar11 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat(id,"-g",(MethodInfo *)0x0);
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar11,pSVar10,MethodInfo_TMP_InputField_Find_TMP_InputField)
  ;
  (__this_01->fields)._g = pTVar14;
  il2cpp_runtime_glue(&(__this_01->fields)._g);
  pUVar11 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat(id,"-b",(MethodInfo *)0x0);
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar11,pSVar10,MethodInfo_TMP_InputField_Find_TMP_InputField)
  ;
  (__this_01->fields)._b = pTVar14;
  il2cpp_runtime_glue(&(__this_01->fields)._b);
  pUVar11 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (DAT_057014b4 == '\0') {
    il2cpp_init_method_metadata(&"-hex");
    DAT_057014b4 = '\x01';
  }
  pSVar10 = System_String__Concat(id,"-hex",(MethodInfo *)0x0);
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar11,pSVar10,MethodInfo_TMP_InputField_Find_TMP_InputField)
  ;
  (__this_01->fields)._hex = pTVar14;
  il2cpp_runtime_glue(&(__this_01->fields)._hex);
  pUVar11 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (DAT_057014b3 == '\0') {
    il2cpp_init_method_metadata(&"-visual");
    DAT_057014b3 = '\x01';
  }
  pSVar10 = System_String__Concat(id,"-visual",(MethodInfo *)0x0);
  pGVar15 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar11,pSVar10,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColor)
  ;
  ppGVar23 = &(__this_01->fields)._visual;
  (__this_01->fields)._visual = pGVar15;
  il2cpp_runtime_glue(ppGVar23,pGVar15);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this_01,(__this_01->fields)._r,method_00);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this_01,(__this_01->fields)._g,method_01);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this_01,(__this_01->fields)._b,method_02);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            (__this_01,(__this_01->fields)._hex,method_03);
  pSVar10 = System_String__Concat(id,"-cancel",(MethodInfo *)0x0);
  pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  pMVar19 = (MethodInfo *)0x0;
  UnityEngine_Events_UnityAction___ctor();
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(__this_01,pSVar10,pUVar16,pMVar19)
  ;
  pSVar10 = System_String__Concat(id,"-save",(MethodInfo *)0x0);
  pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  pMVar19 = (MethodInfo *)0x0;
  UnityEngine_Events_UnityAction___ctor();
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(__this_01,pSVar10,pUVar16,pMVar19)
  ;
  pGVar15 = (__this_01->fields)._visual;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar19 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pGVar15 = (__this_01->fields)._visual;
    b = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchUIColorPickerValue);
    System_Action<GisketchUIColorPickerValue>___ctor();
    if (pGVar15 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      if (DAT_057014cf == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_GisketchUIColorPickerValue);
        DAT_057014cf = '\x01';
      }
      a = (pGVar15->fields).Changed;
      do {
        pSVar18 = System_Delegate__Combine((System_Delegate_o *)a,b,(MethodInfo *)0x0);
        uVar8 = TypeInfo_Action_GisketchUIColorPickerValue;
        pMVar19 = (MethodInfo *)0x0;
        if ((pSVar18 != (System_Delegate_o *)0x0) &&
           (pMVar19 = (MethodInfo *)il2cpp_runtime_glue(pSVar18,TypeInfo_Action_GisketchUIColorPickerValue),
           pMVar19 == (MethodInfo *)0x0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar18,uVar8);
        }
        pSVar17 = (System_Action_GisketchUIColorPickerValue__o *)
                  il2cpp_glue_022c2530(&(pGVar15->fields).Changed,pMVar19,a);
        bVar21 = a != pSVar17;
        a = pSVar17;
      } while (bVar21);
      pGVar15 = *ppGVar23;
      if (pGVar15 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        uVar3 = (value->fields).G;
        uVar4 = (value->fields).B;
        uVar5 = (value->fields).A;
        fVar22 = (value->fields).H;
        fVar6 = (__this_01->fields)._value.fields.S;
        fVar7 = (__this_01->fields)._value.fields.V;
        (pGVar15->fields)._value.fields.R = (value->fields).R;
        (pGVar15->fields)._value.fields.G = uVar3;
        (pGVar15->fields)._value.fields.B = uVar4;
        (pGVar15->fields)._value.fields.A = uVar5;
        (pGVar15->fields)._value.fields.H = fVar22;
        (pGVar15->fields)._value.fields.S = fVar6;
        (pGVar15->fields)._value.fields.V = fVar7;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar15,pMVar19);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar15,pMVar19);
        goto LAB_03b01e15;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03b01e15:
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this_01,pMVar19);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildVisual
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildVisual (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b01e40

bool_conflict
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildVisual
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  ulong in_RAX;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  ulong extraout_RAX;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_48;
  
  if (DAT_057014a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_Gisketc);
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_057014a8 = '\x01';
  }
  local_48.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.LivePreview = 0;
  local_48.fields._28_4_ = 0;
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.EnableAlpha = 0;
  local_48.fields._12_4_ = 0;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0);
    in_RAX = (ulong)uVar1;
    if ((char)uVar1 == '\0') {
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
          **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        uVar1 = System_Collections_Generic_Dictionary<object__GisketchUIColorPicker_Definition>__TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),
                           (Il2CppObject *)(node->fields).value,&local_48,MethodInfo_Boolean_TryGetValue);
        in_RAX = (ulong)uVar1;
        if ((char)uVar1 == '\0') goto LAB_03b01f31;
        if (go != (UnityEngine_GameObject_o *)0x0) {
          __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                   UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_GisketchUIColorPickerVisual_AddComponent_Gisketc);
          if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
             (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                      (__this,(node->fields).value,(uint)((byte)local_48.fields.EnableAlpha & 1),
                       (context->fields).Theme,method);
            in_RAX = extraout_RAX;
            goto LAB_03b01f31;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03b01f31:
  return (bool_conflict)CONCAT71((int7)(in_RAX >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$RgbInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput (System_String_o* id, System_String_o* suffix, const MethodInfo* method);
// 0x3b00860

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
  
  if (DAT_057014a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgInputType);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"-");
    il2cpp_init_method_metadata(&"inputField");
    il2cpp_init_method_metadata(&"0");
    DAT_057014a9 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "InputField";
    il2cpp_runtime_glue(&__this->fields);
    pSVar1 = System_String__Concat(id,"-",suffix,(MethodInfo *)0x0);
    (__this->fields).id = pSVar1;
    il2cpp_runtime_glue(&(__this->fields).id,pSVar1);
    (__this->fields).placeholder = "0";
    il2cpp_runtime_glue(&(__this->fields).placeholder);
    local_30.klass = TypeInfo_AottgInputType;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 1;
    pSVar1 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    (__this->fields).inputType = pSVar1;
    il2cpp_runtime_glue(&(__this->fields).inputType,pSVar1);
    (__this->fields).style = "inputField";
    il2cpp_runtime_glue(&(__this->fields).style);
    (__this->fields).max.fields.value = 4.2039e-45;
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      il2cpp_runtime_glue(&(__this_00->fields).unit);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,1.0,1.0,in_stack_ffffffffffffffc0);
      (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(__this->fields).search,pGVar2);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput (System_String_o* id, bool alpha, const MethodInfo* method);
// 0x3b01120

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput
          (System_String_o *id,bool_conflict alpha,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  undefined8 *puVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  MethodInfo *in_stack_ffffffffffffffc0;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (DAT_057014aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgInputType);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"inputField");
    il2cpp_init_method_metadata(&"#RRGGBBAA");
    il2cpp_init_method_metadata(&"#RRGGBB");
    DAT_057014aa = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "InputField";
    il2cpp_runtime_glue(&__this->fields);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057014b4 == '\0') {
      il2cpp_init_method_metadata(&"-hex");
      DAT_057014b4 = '\x01';
    }
    pSVar1 = System_String__Concat(id,"-hex",(MethodInfo *)0x0);
    (__this->fields).id = pSVar1;
    il2cpp_runtime_glue(&(__this->fields).id,pSVar1);
    if ((char)alpha == '\0') {
      puVar2 = &"#RRGGBB";
    }
    else {
      puVar2 = &"#RRGGBBAA";
    }
    (__this->fields).placeholder = (System_String_o *)*puVar2;
    il2cpp_runtime_glue(&(__this->fields).placeholder);
    local_30.klass = TypeInfo_AottgInputType;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 0;
    pSVar1 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    (__this->fields).inputType = pSVar1;
    il2cpp_runtime_glue(&(__this->fields).inputType,pSVar1);
    (__this->fields).style = "inputField";
    il2cpp_runtime_glue(&(__this->fields).style);
    (__this->fields).max.fields.value = (float)((alpha & 0xffU) * 2 + 7);
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      il2cpp_runtime_glue(&(__this_00->fields).unit);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,in_stack_ffffffffffffffc0);
      (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_glue(&(__this->fields).search,pGVar3);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Field
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field (System_String_o* id, System_String_o* label, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* input, const MethodInfo* method);
// 0x3b00ab0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
          (System_String_o *id,System_String_o *label,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *input,MethodInfo *method)

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
  
  if (DAT_057014ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"-label");
    il2cpp_init_method_metadata(&"Panel");
    DAT_057014ab = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).style = "clear";
    il2cpp_runtime_glue(&(__this->fields).style);
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      il2cpp_runtime_glue(&(__this_00->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,6.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,1.0,1.0,in_stack_ffffffffffffffd0);
      (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_glue(&(__this->fields).search,pGVar1);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,2);
      id_00 = System_String__Concat(id,"-label",(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      pGVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label(id_00,label,18.0,method_00);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((int)pGVar2->max_length != 0) {
          pGVar2->m_Items[0] = pGVar3;
          il2cpp_runtime_glue(pGVar2->m_Items,pGVar3);
          if (1 < (uint)pGVar2->max_length) {
            pGVar2->m_Items[1] = input;
            il2cpp_runtime_glue(pGVar2->m_Items + 1,input);
            (__this->fields).deferredChildren = pGVar2;
            il2cpp_runtime_glue(&(__this->fields).deferredChildren,pGVar2);
            return __this;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Label
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label (System_String_o* id, System_String_o* text, float width, const MethodInfo* method);
// 0x3b00f50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
          (System_String_o *id,System_String_o *text,float width,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_057014ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"text");
    DAT_057014ac = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Text";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).text = text;
    il2cpp_runtime_glue(&(__this->fields).text,text);
    (__this->fields).style = "text";
    il2cpp_runtime_glue(&(__this->fields).style);
    if (DAT_0570147c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570147c = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = width;
      (__this_00->fields).unit = "point";
      il2cpp_runtime_glue(&(__this_00->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffd0);
      (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_glue(&(__this->fields).search,pGVar1);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Row
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row (System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x3b00d60

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
          (System_String_o *id,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_057014ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"Panel");
    DAT_057014ad = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).style = "clear";
    il2cpp_runtime_glue(&(__this->fields).style);
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      il2cpp_runtime_glue(&(__this_00->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,8.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,in_stack_ffffffffffffffe0);
      (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_glue(&(__this->fields).search,pGVar1);
      (__this->fields).deferredChildren = children;
      il2cpp_runtime_glue(&(__this->fields).deferredChildren,children);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button (System_String_o* id, System_String_o* text, System_String_o* style, const MethodInfo* method);
// 0x3b013d0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
          (System_String_o *id,System_String_o *text,System_String_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_057014ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Button");
    DAT_057014ae = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Button";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).text = text;
    il2cpp_runtime_glue(&(__this->fields).text,text);
    (__this->fields).style = style;
    il2cpp_runtime_glue(&(__this->fields).style);
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      il2cpp_runtime_glue(&(__this_00->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,in_stack_ffffffffffffffd0);
      (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_glue(&(__this->fields).search,pGVar1);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode (System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x3b00730

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
          (System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  
  if (DAT_057014af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"profileColorSwatch");
    il2cpp_init_method_metadata(&"ColorSwatch");
    DAT_057014af = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "ColorSwatch";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).style = "profileColorSwatch";
    il2cpp_runtime_glue(&(__this->fields).style);
    (__this->fields).value = value;
    il2cpp_runtime_glue(&(__this->fields).value,value);
    (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(__this->fields).search,layout);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetSwatch
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x3afeaa0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,
               MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Color_Fields local_28;
  
  if (DAT_057014b0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_Find_Image);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014b0 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(root,id,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (**(code **)&x->klass[1]._2.naturalAligment)
                (local_28.r,local_28._8_8_,x,x->klass[1].vtable._0_Equals.methodPtr);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetText
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x3afebd0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_Object_c *pUVar1;
  code *vtable_dispatch;
  undefined8 uVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  
  if (DAT_057014b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_Find_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014b1 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(root,id,MethodInfo_TextMeshProUGUI_Find_TextMeshProUGUI);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (x != (UnityEngine_Object_o *)0x0) {
      pUVar1 = x->klass;
      vtable_dispatch = pUVar1[3]._2.genericContainerHandle;
      uVar2._0_4_ = pUVar1[3]._2.instance_size;
      uVar2._4_4_ = pUVar1[3]._2.actualSize;
      (*vtable_dispatch)(x,value,uVar2,vtable_dispatch);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_24F2640* method);
// 0x25f2640

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_24F2640 *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar5;
  
  if ((method->rgctx_data == (MethodInfo_24F2640_RGCTXs *)0x0) &&
     (il2cpp_init_method_metadata(&TypeInfo_Object), method->rgctx_data == (MethodInfo_24F2640_RGCTXs *)0x0)) {
    il2cpp_glue_022c2910(method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)root,1,
                            (MethodInfo_24A5220 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_)
       , pSVar4 == (System_Object_array *)0x0)) {
LAB_025f279c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar3 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
               __this == (UnityEngine_Object_o *)0x0)) goto LAB_025f279c;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return (Il2CppObject *)x;
            }
          }
          uVar5 = uVar5 + 1;
          uVar2 = (uint)pSVar4->max_length;
          if ((long)(int)uVar2 <= (long)uVar5) {
            return (Il2CppObject *)0x0;
          }
        } while (uVar5 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PreviewId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId (System_String_o* id, const MethodInfo* method);
// 0x3b006f0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057014b2 == '\0') {
    il2cpp_init_method_metadata(&"-preview");
    DAT_057014b2 = '\x01';
  }
  pSVar1 = System_String__Concat(id,"-preview",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$VisualId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId (System_String_o* id, const MethodInfo* method);
// 0x3b00820

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057014b3 == '\0') {
    il2cpp_init_method_metadata(&"-visual");
    DAT_057014b3 = '\x01';
  }
  pSVar1 = System_String__Concat(id,"-visual",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId (System_String_o* id, const MethodInfo* method);
// 0x3b02170

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057014b4 == '\0') {
    il2cpp_init_method_metadata(&"-hex");
    DAT_057014b4 = '\x01';
  }
  pSVar1 = System_String__Concat(id,"-hex",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$ButtonId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId (System_String_o* id, const MethodInfo* method);
// 0x3b021b0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057014b5 == '\0') {
    il2cpp_init_method_metadata(&"-button");
    DAT_057014b5 = '\x01';
  }
  pSVar1 = System_String__Concat(id,"-button",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId (System_String_o* id, const MethodInfo* method);
// 0x3afea60

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057014b6 == '\0') {
    il2cpp_init_method_metadata(&"-swatch");
    DAT_057014b6 = '\x01';
  }
  pSVar1 = System_String__Concat(id,"-swatch",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$TextId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId (System_String_o* id, const MethodInfo* method);
// 0x3afeb90

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057014b7 == '\0') {
    il2cpp_init_method_metadata(&"-value");
    DAT_057014b7 = '\x01';
  }
  pSVar1 = System_String__Concat(id,"-value",(MethodInfo *)0x0);
  return pSVar1;
}


