// Type: Gisketch.Aottg2UI.Code.AottgUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x5368640

void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$<Callout>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___Callout_b__0 (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* callout, const MethodInfo* method);
// 0x536acd0

void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___Callout_b__0
               (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *callout,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *id;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07542a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-border");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutBorder");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutText");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_07542a26 = '\x01';
  }
  pSVar3 = (System_String_o *)0x0;
  pSVar2 = System_String__Concat_52f0320("calloutBorder",(__this->fields).suffix,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-border",(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_07542a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542a23 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 7.0;
    (__this_00->fields).unit = "point";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    method_00 = (MethodInfo *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      ((Gisketch_Aottg2UI_Data_GisketchLength_Fields *)&method_00->invoker_method)->value = 100.0;
      method_00->name = (char *)"percent";
      Il2CppCodeGenWriteBarrier(&method_00->name);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffc0);
      if (callout != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        id = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (callout,pSVar2,(System_Action_AottgUi__o *)0x0,pSVar3,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        pSVar2 = (__this->fields).text;
        bVar1 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
        pSVar3 = "calloutText";
        if (!bVar1) {
          id = System_String__Concat_52f0320((__this->fields).id,"-text",(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (callout,pSVar2,pSVar3,id,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$TextArea
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__TextArea (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxCharacters, const MethodInfo* method);
// 0x5367d40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__TextArea
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxCharacters,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if (Il2CppMethodInitialized_075429f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    Il2CppMethodInitialized_075429f7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).type = "TextArea";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
  (__this_00->fields).placeholder = placeholder;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).placeholder);
  local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = 0;
  pSVar1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  (__this_00->fields).inputType = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).inputType);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
  (__this_00->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter);
  (__this_00->fields).maxCharacters = maxCharacters;
  Gisketch_Aottg2UI_Code_AottgUi__Add(__this,__this_00,method_00);
  return __this_00;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Skeleton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Skeleton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, System_String_o* style, System_String_o* visibleKey, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x5367ea0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Skeleton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,System_String_o *style,
          System_String_o *visibleKey,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075429f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"fade");
    il2cpp_codegen_initialize_runtime_metadata(&"Skeleton");
    Il2CppMethodInitialized_075429f8 = '\x01';
  }
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).type = "Skeleton";
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).type);
    (pGVar3->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).id);
    (pGVar3->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
    (pGVar3->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
    bVar2 = System_String__IsNullOrEmpty(visibleKey,(MethodInfo *)0x0);
    (pGVar3->fields).active = bVar2;
    bVar2 = System_String__IsNullOrEmpty(visibleKey,(MethodInfo *)0x0);
    if (!bVar2) {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_053680ce;
      (__this_00->fields).visible = visibleKey;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
    }
    (pGVar3->fields).bind = __this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
    pSVar1 = "fade";
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      if (Il2CppMethodInitialized_07542a22 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
        Il2CppMethodInitialized_07542a22 = '\x01';
      }
      enter = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(enter,(MethodInfo *)0x0);
      if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto label_053680ce;
      (enter->fields).preset = pSVar1;
      Il2CppCodeGenWriteBarrier(&(enter->fields).preset);
      (enter->fields).group = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(enter->fields).group);
      (enter->fields).duration = 0.12;
      (enter->fields).delay = 0.0;
      (enter->fields).stagger = 0.0;
      (enter->fields).order = 0;
    }
    (pGVar3->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).enter);
    (pGVar3->fields).exit = exit;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).exit);
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar3,method_00);
      return pGVar3;
    }
  }
label_053680ce:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Slider
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Slider (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, float value, bool showValue, System_String_o* actionId, System_String_o* style, float min, float max, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x53681a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Slider
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,float value,bool showValue,
          System_String_o *actionId,System_String_o *style,float min,float max,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  float local_4c;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  local_4c = value;
  if (Il2CppMethodInitialized_075429f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    Il2CppMethodInitialized_075429f9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).type = "Slider";
  local_38 = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Single__ToString_54d09f0(&local_4c,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  (__this_00->fields).value = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
  local_40.hasValue = false;
  local_40._1_3_ = 0;
  local_40.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_40,min,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this_00->fields).min.fields = local_40;
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_48,max,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this_00->fields).max.fields = local_48;
  (__this_00->fields).showValue = showValue;
  (__this_00->fields).action = actionId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).action);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter);
  Gisketch_Aottg2UI_Code_AottgUi__Add(local_38,__this_00,method_00);
  return __this_00;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Slider
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Slider (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, float value, bool showValue, System_Action_GisketchActionContext__o* action, System_String_o* style, float min, float max, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x5368360

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Slider_5268360
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,float value,bool showValue,
          System_Action_GisketchActionContext__o *action,System_String_o *style,float min,float max,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                     (__this,id,value,showValue,actionId,style,min,max,enter,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Callout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Callout (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_String_o* id, const MethodInfo* method);
// 0x5368400

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Callout
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,System_String_o *id,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *__this_00;
  System_String_o *pSVar1;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  System_Enum_o local_40;
  int32_t local_30;
  
  if (Il2CppMethodInitialized_075429fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgCalloutVariant);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0_Callout_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"callout");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075429fa = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *)0x0) {
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    (__this_00->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    local_40.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgCalloutVariant;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = variant;
    pSVar1 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    (__this_00->fields).suffix = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).suffix);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0_Callout_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    pSVar1 = (__this_00->fields).id;
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
      method_00 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,12.0,__this_02,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffb0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (__this,"callout",__this_01,pSVar1,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
      return pGVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Checkbox
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Checkbox (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x5368650

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Checkbox
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *text,bool value,
          System_Action_GisketchActionContext__o *action,System_String_o *icon,System_String_o *tooltip,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_075429fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
    in_stack_ffffffffffffffc0 = (MethodInfo *)0x5368696;
    il2cpp_codegen_initialize_runtime_metadata(&"checkbox");
    Il2CppMethodInitialized_075429fb = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Checkbox",id,text,value,action,"checkbox",icon,tooltip,
                      in_stack_ffffffffffffffc0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Radio
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Radio (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x5368880

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Radio
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *text,bool value,
          System_Action_GisketchActionContext__o *action,System_String_o *icon,System_String_o *tooltip,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_075429fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Radio");
    in_stack_ffffffffffffffc0 = (MethodInfo *)0x53688c6;
    il2cpp_codegen_initialize_runtime_metadata(&"radio");
    Il2CppMethodInitialized_075429fc = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Radio",id,text,value,action,"radio",icon,tooltip,
                      in_stack_ffffffffffffffc0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Switch
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Switch (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, bool value, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x5368910

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Switch
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,bool value,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_075429fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"switch");
    il2cpp_codegen_initialize_runtime_metadata(&"Switch");
    Il2CppMethodInitialized_075429fd = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Switch",id,
                      (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),value,action,
                      "switch",(System_String_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffd0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Toggle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Toggle (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* type, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* style, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x53686e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Toggle
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *type,System_String_o *id,
          System_String_o *text,bool value,System_Action_GisketchActionContext__o *action,
          System_String_o *style,System_String_o *icon,System_String_o *tooltip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o **ppSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075429fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_075429fe = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).type = type;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
  (pGVar1->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
  (pGVar1->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).text);
  if (value) {
    ppSVar2 = &"true";
  }
  else {
    ppSVar2 = &"false";
  }
  (pGVar1->fields).value = *ppSVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).value);
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  (pGVar1->fields).action = pSVar3;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).action);
  (pGVar1->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
  (pGVar1->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).icon);
  (pGVar1->fields).tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).tooltip);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Icon
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Icon (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* icon, System_String_o* style, System_String_o* id, const MethodInfo* method);
// 0x53689b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Icon
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *icon,System_String_o *style,
          System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075429ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_075429ff = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).type = "Icon";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
  (pGVar1->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
  (pGVar1->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).icon);
  (pGVar1->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$IconButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__IconButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* icon, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x5368a80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__IconButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *icon,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_07542a00 = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).type = "Button";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
  (pGVar1->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
  (pGVar1->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).icon);
  (pGVar1->fields).hasIcon = true;
  pSVar2 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,(MethodInfo *)icon);
  (pGVar1->fields).style = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  (pGVar1->fields).action = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).action);
  (pGVar1->fields).tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).tooltip);
  (pGVar1->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Separator
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Separator (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x5368c90

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Separator
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"separator");
    il2cpp_codegen_initialize_runtime_metadata(&"Divider");
    Il2CppMethodInitialized_07542a01 = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).type = "Divider";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
  (pGVar1->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
  (pGVar1->fields).style = "separator";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
  (pGVar1->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x5368d70

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_07542a02 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,in_RAX);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x5368ee0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268ee0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07542a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_07542a03 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8);
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).action = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).action);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x5368fb0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268fb0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07542a04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_07542a04 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice_5269080
                     ("Dropdown",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8);
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).action = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).action);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x5369180

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    Il2CppMethodInitialized_07542a05 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,in_RAX);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x53691f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select_52691f0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07542a06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    Il2CppMethodInitialized_07542a06 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8);
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).action = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).action);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x53692c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select_52692c0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07542a07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    Il2CppMethodInitialized_07542a07 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice_5269080
                     ("Select",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8);
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).action = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).action);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Choice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Choice (System_String_o* type, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x5368de0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Choice
          (System_String_o *type,System_String_o *id,System_String_o *value,System_String_array *options,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Il2CppMethodInitialized_07542a08 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = type;
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).value);
    (__this->fields).options = options;
    Il2CppCodeGenWriteBarrier(&(__this->fields).options);
    (__this->fields).maxVisibleItems = maxVisibleItems;
    if (type != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(type,(MethodInfo *)0x0);
      (__this->fields).style = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).style);
      (__this->fields).enter = enter;
      Il2CppCodeGenWriteBarrier(&(__this->fields).enter);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Choice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Choice (System_String_o* type, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x5369080

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Choice_5269080
          (System_String_o *type,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Il2CppMethodInitialized_07542a09 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = type;
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).value);
    (__this->fields).choiceOptions = options;
    Il2CppCodeGenWriteBarrier(&(__this->fields).choiceOptions);
    (__this->fields).maxVisibleItems = maxVisibleItems;
    if (type != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(type,(MethodInfo *)0x0);
      (__this->fields).style = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).style);
      (__this->fields).enter = enter;
      Il2CppCodeGenWriteBarrier(&(__this->fields).enter);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$BuildDetached
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgUi__BuildDetached (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_Action_AottgUi__o* build, System_String_o* ownerId, const MethodInfo* method);
// 0x5369390

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_Action_AottgUi__o *build,System_String_o *ownerId,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_07542a0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    Il2CppMethodInitialized_07542a0a = '\x01';
  }
  if (ownerId == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_01,(build->fields).method);
  }
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (Il2CppMethodInitialized_07542a18 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      Il2CppMethodInitialized_07542a18 = '\x01';
    }
    __this_00 = (__this_01->fields)._children;
    if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)
                          MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormInput (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* placeholder, int32_t type, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_Action_GisketchActionContext__o* change, float debounceSeconds, int32_t maxCharacters, System_Action_GisketchActionContext__o* commit, System_String_o* key, const MethodInfo* method);
// 0x5369450

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormInput
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *placeholder,int32_t type,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_Action_GisketchActionContext__o *change,float debounceSeconds,int32_t maxCharacters,
          System_Action_GisketchActionContext__o *commit,System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                     (__this,id,placeholder,type,style,layout,enter,change,debounceSeconds,maxCharacters,
                      commit,in_stack_ffffffffffffffd8);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (key != (System_String_o *)0x0) {
      id = key;
    }
    (pGVar1->fields).formKey = id;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formKey);
    (pGVar1->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formLabel);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormTextArea
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormTextArea (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* placeholder, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxCharacters, System_String_o* key, const MethodInfo* method);
// 0x5369790

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormTextArea
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *placeholder,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxCharacters,System_String_o *key,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextArea
                     (__this,id,placeholder,style,layout,enter,maxCharacters,in_stack_ffffffffffffffe0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (key != (System_String_o *)0x0) {
      id = key;
    }
    (pGVar1->fields).formKey = id;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formKey);
    (pGVar1->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formLabel);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormSelect
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormSelect (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, System_String_o* key, const MethodInfo* method);
// 0x5369810
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53698fc: jmp 0x5369899

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormSelect
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *value,System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *method_00;
  undefined4 in_stack_ffffffffffffffb8;
  undefined4 in_stack_ffffffffffffffbc;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    if (Il2CppMethodInitialized_07542a05 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Select");
      Il2CppMethodInitialized_07542a05 = '\x01';
    }
    node = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,
                      (MethodInfo *)CONCAT44(in_stack_ffffffffffffffbc,in_stack_ffffffffffffffb8));
    Gisketch_Aottg2UI_Code_AottgUi__Add(__this,node,method_00);
  }
  else {
    node = Gisketch_Aottg2UI_Code_AottgUi__Select_52691f0
                     (__this,id,value,options,action,enter,maxVisibleItems,in_stack_ffffffffffffffc0);
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (key != (System_String_o *)0x0) {
      id = key;
    }
    (node->fields).formKey = id;
    Il2CppCodeGenWriteBarrier(&(node->fields).formKey);
    (node->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(node->fields).formLabel);
  }
  return node;
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormSelect
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormSelect (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, System_String_o* key, const MethodInfo* method);
// 0x5369900

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormSelect_5269900
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *value,Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Select_52692c0
                     (__this,id,value,options,action,enter,maxVisibleItems,in_stack_ffffffffffffffe0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (key != (System_String_o *)0x0) {
      id = key;
    }
    (pGVar1->fields).formKey = id;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formKey);
    (pGVar1->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formLabel);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormDropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormDropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, System_String_o* key, const MethodInfo* method);
// 0x5369980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5369a6c: jmp 0x5369a09

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormDropdown
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *value,System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *method_00;
  undefined4 in_stack_ffffffffffffffb8;
  undefined4 in_stack_ffffffffffffffbc;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    if (Il2CppMethodInitialized_07542a02 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
      Il2CppMethodInitialized_07542a02 = '\x01';
    }
    node = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,
                      (MethodInfo *)CONCAT44(in_stack_ffffffffffffffbc,in_stack_ffffffffffffffb8));
    Gisketch_Aottg2UI_Code_AottgUi__Add(__this,node,method_00);
  }
  else {
    node = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268ee0
                     (__this,id,value,options,action,enter,maxVisibleItems,in_stack_ffffffffffffffc0);
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (key != (System_String_o *)0x0) {
      id = key;
    }
    (node->fields).formKey = id;
    Il2CppCodeGenWriteBarrier(&(node->fields).formKey);
    (node->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(node->fields).formLabel);
  }
  return node;
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormDropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormDropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, System_String_o* key, const MethodInfo* method);
// 0x5369a70

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormDropdown_5269a70
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *value,Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268fb0
                     (__this,id,value,options,action,enter,maxVisibleItems,in_stack_ffffffffffffffe0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (key != (System_String_o *)0x0) {
      id = key;
    }
    (pGVar1->fields).formKey = id;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formKey);
    (pGVar1->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formLabel);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormDraft
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormDraft (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* key, System_String_o* value, System_String_o* label, System_String_o* id, const MethodInfo* method);
// 0x5369af0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormDraft
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *key,System_String_o *value,
          System_String_o *label,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"-form-draft");
    il2cpp_codegen_initialize_runtime_metadata(&"FormDraft");
    Il2CppMethodInitialized_07542a0b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "FormDraft";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
    if (bVar1) {
      id = System_String__Concat_52f0320(key,"-form-draft",(MethodInfo *)0x0);
    }
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    (__this_00->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    (__this_00->fields).active = false;
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(__this,__this_00,method_00);
      (__this_00->fields).formKey = key;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).formKey);
      (__this_00->fields).formLabel = label;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).formLabel);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$TrackForm
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__TrackForm (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* key, System_String_o* label, const MethodInfo* method);
// 0x5369740

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__TrackForm
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *key,System_String_o *label,
          MethodInfo *method)

{
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).formKey = key;
    Il2CppCodeGenWriteBarrier(&(node->fields).formKey);
    (node->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(node->fields).formLabel);
  }
  return node;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Image
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Image (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* style, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x5369c40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Image
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *style,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_07542a0c = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).type = "Image";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
  (pGVar1->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
  (pGVar1->fields).sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).sprite);
  (pGVar1->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
  (pGVar1->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
  (pGVar1->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SpriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* label, System_String_o* actionId, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x5369d40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *label,
          System_String_o *actionId,System_String_o *id,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_07542a0d = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).type = "SpriteButton";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
  (pGVar1->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
  (pGVar1->fields).text = label;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).text);
  (pGVar1->fields).sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).sprite);
  (pGVar1->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
  (pGVar1->fields).action = actionId;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).action);
  (pGVar1->fields).tooltip = label;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).tooltip);
  (pGVar1->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
  (pGVar1->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SpriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* label, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x5369ea0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SpriteButton_5269ea0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *label,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     (__this,sprite,label,actionId,id,style,layout,enter,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$TextKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__TextKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* key, System_String_o* style, System_String_o* id, System_String_o* bindText, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x5369f30

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__TextKey
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *key,System_String_o *style,
          System_String_o *id,System_String_o *bindText,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  MethodInfo *in_RAX;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07542a0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_07542a0e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text(__this,text,style,id,bindText,enter,in_RAX);
  pGVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(pGVar1,key,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$ButtonKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ButtonKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* key, System_String_o* actionId, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x536a120

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *key,
          System_String_o *actionId,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  if (Il2CppMethodInitialized_07542a0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_07542a0f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this,variant,text,actionId,id,tooltip,enter,icon,in_stack_ffffffffffffffa8);
  pGVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(pGVar1,key,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$ButtonKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ButtonKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* key, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x536a1d0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *key,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  if (Il2CppMethodInitialized_07542a10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_07542a10 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this,variant,text,actionId,id,tooltip,enter,icon,in_stack_ffffffffffffffa8);
  pGVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(pGVar1,key,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$InputFieldKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholderKey, int32_t type, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_Action_GisketchActionContext__o* change, float debounceSeconds, int32_t maxCharacters, System_Action_GisketchActionContext__o* commit, const MethodInfo* method);
// 0x536a2c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholderKey,
          int32_t type,System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_Action_GisketchActionContext__o *change,float debounceSeconds,int32_t maxCharacters,
          System_Action_GisketchActionContext__o *commit,MethodInfo *method)

{
  System_String_o *placeholder;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (Il2CppMethodInitialized_07542a11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_07542a11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  placeholder = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(placeholderKey,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                     (__this,id,placeholder,type,style,layout,enter,change,debounceSeconds,maxCharacters,
                      commit,in_stack_ffffffffffffff98);
  pGVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(pGVar1,placeholderKey,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$CalloutKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__CalloutKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* key, System_String_o* id, const MethodInfo* method);
// 0x536a3a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__CalloutKey
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *key,System_String_o *id,
          MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  bool bVar3;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_07542a12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_07542a12 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Callout(__this,variant,text,id,method);
  if ((pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (pGVar5 = (pGVar4->fields).children, pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0
     )) {
    return pGVar4;
  }
  uVar6 = 0;
  do {
    uVar1 = (uint)pGVar5->max_length;
    if ((long)(int)uVar1 <= (long)uVar6) {
      return pGVar4;
    }
    if (uVar1 <= uVar6) {
label_0536a4ae:
      ThrowIndexOutOfRangeException();
    }
    if ((pGVar5->m_Items[uVar6] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (bVar3 = System_String__op_Equality
                          ((pGVar5->m_Items[uVar6]->fields).type,"Text",(MethodInfo *)0x0),
       bVar3)) {
      pGVar5 = (pGVar4->fields).children;
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
      if ((uint)pGVar5->max_length <= uVar6) goto label_0536a4ae;
      pGVar2 = pGVar5->m_Items[uVar6];
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      (pGVar2->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
    }
    uVar6 = uVar6 + 1;
    pGVar5 = (pGVar4->fields).children;
  } while (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0);
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$SearchKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SearchKey (System_String_o* titleKey, System_String_o* keywords, bool hidden, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x536a4c0

Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SearchKey
          (System_String_o *titleKey,System_String_o *keywords,bool hidden,System_String_o *icon,
          System_String_o *kind,System_String_o *sectionId,System_String_o *sectionTitle,bool autoAddKeywords,
          MethodInfo *method)

{
  System_String_o *title;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07542a13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_07542a13 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(titleKey,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Search
                     (title,keywords,hidden,icon,kind,sectionId,sectionTitle,autoAddKeywords,
                      in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$SearchPalette
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SearchPalette (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, System_String_o* scopeScreenId, bool showFullPath, System_String_array* extraScopeScreenIds, const MethodInfo* method);
// 0x5367a30

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SearchPalette
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          System_String_o *scopeScreenId,bool showFullPath,System_String_array *extraScopeScreenIds,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"SearchPalette");
    il2cpp_codegen_initialize_runtime_metadata(&"searchPalette");
    Il2CppMethodInitialized_07542a14 = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).type = "SearchPalette";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
  (pGVar1->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
  (pGVar1->fields).placeholder = placeholder;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).placeholder);
  (pGVar1->fields).style = "searchPalette";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
  (pGVar1->fields).searchScopeScreenId = scopeScreenId;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).searchScopeScreenId);
  (pGVar1->fields).searchScopeScreenIds = extraScopeScreenIds;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).searchScopeScreenIds);
  (pGVar1->fields).searchShowFullPath = showFullPath;
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Search
// il2cpp: Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Search (System_String_o* title, System_String_o* keywords, bool hidden, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x536a550

Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Search
          (System_String_o *title,System_String_o *keywords,bool hidden,System_String_o *icon,
          System_String_o *kind,System_String_o *sectionId,System_String_o *sectionTitle,bool autoAddKeywords,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07542a15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    Il2CppMethodInitialized_07542a15 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields).title);
  (__this->fields).keywords = keywords;
  Il2CppCodeGenWriteBarrier(&(__this->fields).keywords);
  (__this->fields).hidden = hidden;
  (__this->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).icon);
  (__this->fields).kind = kind;
  Il2CppCodeGenWriteBarrier(&(__this->fields).kind);
  (__this->fields).sectionId = sectionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).sectionId);
  (__this->fields).sectionTitle = sectionTitle;
  Il2CppCodeGenWriteBarrier(&(__this->fields).sectionTitle);
  (__this->fields).autoAddKeywords = autoAddKeywords;
  return __this;
}


// Gisketch.Aottg2UI.Code.AottgUi$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___ctor (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* ownerId, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5367190

void Gisketch_Aottg2UI_Code_AottgUi___ctor
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *ownerId,
               Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  
  if (Il2CppMethodInitialized_07542a16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    Il2CppMethodInitialized_07542a16 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
  (__this->fields)._children = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._children);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._ownerId = ownerId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ownerId);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$get_HasChildren
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgUi__get_HasChildren (Gisketch_Aottg2UI_Code_AottgUi_o* __this, const MethodInfo* method);
// 0x536a640

bool Gisketch_Aottg2UI_Code_AottgUi__get_HasChildren
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  
  if (Il2CppMethodInitialized_07542a17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Count);
    Il2CppMethodInitialized_07542a17 = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    ThrowNullReferenceException();
  }
  return 0 < (pSVar1->fields)._size;
}


// Gisketch.Aottg2UI.Code.AottgUi$$ToArray
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgUi__ToArray (Gisketch_Aottg2UI_Code_AottgUi_o* __this, const MethodInfo* method);
// 0x5367240

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgUi__ToArray(Gisketch_Aottg2UI_Code_AottgUi_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_07542a18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    Il2CppMethodInitialized_07542a18 = '\x01';
  }
  __this_00 = (__this->fields)._children;
  if (__this_00 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
           System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this_00,
                      (MethodInfo_395F5A0 *)
                      MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Add
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Add (Gisketch_Aottg2UI_Code_AottgUi_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5366d10

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Add
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07542a19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_07542a19 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  }
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (__this_00->fields)._items;
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pGVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pGVar3->m_Items[(int)uVar2] = node;
        Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
        return node;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)node,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return node;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Component
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi__Component (Gisketch_Aottg2UI_Code_AottgUi_o* __this, Gisketch_Aottg2UI_Code_AottgComponent_o* component, const MethodInfo* method);
// 0x536a680

void Gisketch_Aottg2UI_Code_AottgUi__Component
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,Gisketch_Aottg2UI_Code_AottgComponent_o *component,
               MethodInfo *method)

{
  if (component == (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
    return;
  }
  (*(component->klass->vtable)._4_Build.methodPtr)
            (component,__this,(component->klass->vtable)._4_Build.method);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Panel
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Panel (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x53665e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Panel
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,System_Action_AottgUi__o *build,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *ownerId;
  
  method_00 = (MethodInfo *)id;
  if (Il2CppMethodInitialized_07542a1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07542a1a = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method_00);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_01,(build->fields).method);
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
    (pGVar1->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
    (pGVar1->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
    (pGVar1->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
    (pGVar1->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_07542a18 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        Il2CppMethodInitialized_07542a18 = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (MethodInfo_395F5A0 *)
                            MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        (pGVar1->fields).children = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).children);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_01);
        return pGVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Text
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Text (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* text, System_String_o* style, System_String_o* id, System_String_o* bindText, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x5369fc0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Text
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *text,System_String_o *style,
          System_String_o *id,System_String_o *bindText,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_07542a1b = '\x01';
  }
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type);
    (pGVar2->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id);
    (pGVar2->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).text);
    (pGVar2->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
    bVar1 = System_String__IsNullOrEmpty(bindText,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_0536a110;
      (__this_00->fields).text = bindText;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    }
    (pGVar2->fields).bind = __this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
    (pGVar2->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).enter);
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar2,method_00);
      return pGVar2;
    }
  }
label_0536a110:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Button (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_String_o* actionId, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x5365610

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Button
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_String_o *actionId,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07542a1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_07542a1c = '\x01';
  }
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar2->fields).type = "Button";
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type);
  (pGVar2->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id);
  (pGVar2->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).text);
  (pGVar2->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).icon);
  method_01 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  (pGVar2->fields).hasIcon = !bVar1;
  pSVar3 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,method_01);
  (pGVar2->fields).style = pSVar3;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style);
  (pGVar2->fields).action = actionId;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action);
  (pGVar2->fields).tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).tooltip);
  (pGVar2->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).enter);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar2,method_00);
  return pGVar2;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Button (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x5365860

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this,variant,text,actionId,id,tooltip,enter,icon,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$InputField
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__InputField (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, int32_t type, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_Action_GisketchActionContext__o* change, float debounceSeconds, int32_t maxCharacters, System_Action_GisketchActionContext__o* commit, const MethodInfo* method);
// 0x53694f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__InputField
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          int32_t type,System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_Action_GisketchActionContext__o *change,float debounceSeconds,int32_t maxCharacters,
          System_Action_GisketchActionContext__o *commit,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Enum_o local_50;
  int32_t local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  if (Il2CppMethodInitialized_07542a1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    Il2CppMethodInitialized_07542a1d = '\x01';
  }
  local_38 = __this;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "InputField";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).type);
    (__this_01->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).id);
    (__this_01->fields).placeholder = placeholder;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).placeholder);
    local_50.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
    local_50.monitor = (void *)0xffffffffffffffff;
    local_40 = type;
    pSVar2 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
    (__this_01->fields).inputType = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).inputType);
    (__this_01->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).style);
    (__this_01->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout);
    (__this_01->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).enter);
    __this_00 = local_38;
    (__this_01->fields).maxCharacters = maxCharacters;
    if ((change == (System_Action_GisketchActionContext__o *)0x0) ||
       (pGVar1 = (local_38->fields)._actions, pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0))
    {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(local_38->fields)._ownerId,change,(MethodInfo *)0x0);
    }
    (__this_01->fields).action = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).action);
    if ((commit == (System_Action_GisketchActionContext__o *)0x0) ||
       (pGVar1 = (__this_00->fields)._actions, pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0))
    {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(__this_00->fields)._ownerId,commit,(MethodInfo *)0x0);
    }
    (__this_01->fields).commitAction = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).commitAction);
    if (change == (System_Action_GisketchActionContext__o *)0x0) {
      (__this_01->fields).debounceSeconds.fields = (System_Nullable_float__Fields)0x0;
      method_00 = extraout_RDX;
    }
    else {
      local_50.klass = (System_Enum_c *)0x0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_50,debounceSeconds,
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      (__this_01->fields).debounceSeconds.fields = (System_Nullable_float__Fields)local_50.klass;
      method_00 = extraout_RDX_00;
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(__this_00,__this_01,method_00);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$ScrollView
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ScrollView (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* contentLayout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x536a6b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ScrollView
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,System_Action_AottgUi__o *build,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *ownerId;
  
  method_00 = (MethodInfo *)id;
  if (Il2CppMethodInitialized_07542a1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_07542a1e = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method_00);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_01,(build->fields).method);
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "ScrollView";
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
    (pGVar1->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
    (pGVar1->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
    (pGVar1->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
    (pGVar1->fields).contentLayout = contentLayout;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).contentLayout);
    (pGVar1->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_07542a18 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        Il2CppMethodInitialized_07542a18 = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (MethodInfo_395F5A0 *)
                            MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        (pGVar1->fields).children = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).children);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_01);
        return pGVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$ScaleBox
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ScaleBox (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, float referenceWidth, float referenceHeight, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* contentLayout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x536a880

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,float referenceWidth,
          float referenceHeight,System_Action_AottgUi__o *build,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *ownerId;
  
  method_00 = (MethodInfo *)id;
  if (Il2CppMethodInitialized_07542a1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleBox");
    Il2CppMethodInitialized_07542a1f = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method_00);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_01,(build->fields).method);
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "ScaleBox";
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
    (pGVar1->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
    (pGVar1->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
    (pGVar1->fields).referenceWidth = referenceWidth;
    (pGVar1->fields).referenceHeight = referenceHeight;
    (pGVar1->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
    (pGVar1->fields).contentLayout = contentLayout;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).contentLayout);
    (pGVar1->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_07542a18 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        Il2CppMethodInitialized_07542a18 = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (MethodInfo_395F5A0 *)
                            MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        (pGVar1->fields).children = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).children);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_01);
        return pGVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Stepper
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Stepper (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, Gisketch_Aottg2UI_Code_AottgStepperStep_array* steps, const MethodInfo* method);
// 0x536aa70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x536ab56: jmp 0x536acad
// asm:   0x536ab93: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x536ab98: jmp 0x536ab9d

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Stepper
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,
          Gisketch_Aottg2UI_Code_AottgStepperStep_array *steps,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar2;
  ulong uVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *method_01;
  long lVar6;
  ulong uVar7;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07542a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Stepper");
    Il2CppMethodInitialized_07542a20 = '\x01';
  }
  if (steps == (Gisketch_Aottg2UI_Code_AottgStepperStep_array *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0;
  }
  else {
    uVar1 = (uint)steps->max_length;
    method_00 = (MethodInfo *)(ulong)uVar1;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array,uVar1);
    if (0 < (int)steps->max_length) {
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) {
        if (steps->m_Items[0] != (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(steps->m_Items[0],method_00);
        }
        goto label_0536acc1;
      }
      uVar3 = steps->max_length & 0xffffffff;
      lVar6 = 0x20;
      uVar7 = 0;
      do {
        if (uVar3 <= uVar7) {
label_0536acad:
          ThrowIndexOutOfRangeException();
        }
        __this_00 = steps->m_Items[uVar7];
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          uVar1 = (uint)pGVar2->max_length;
        }
        else {
          if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto label_0536acc1;
          method_00 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_00,method_00)
          ;
          uVar1 = (uint)pGVar2->max_length;
        }
        if (uVar1 <= uVar7) goto label_0536acad;
        pGVar2->m_Items[uVar7] = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)method_00;
        Il2CppCodeGenWriteBarrier((void **)((long)pGVar2->m_Items + lVar6 + -0x20));
        uVar7 = uVar7 + 1;
        uVar1 = (uint)steps->max_length;
        uVar3 = (ulong)uVar1;
        lVar6 = lVar6 + 8;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
  }
  pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar4->fields).type = "Stepper";
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type);
    (pGVar4->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,in_stack_ffffffffffffffc0);
    (pGVar4->fields).layout = pGVar5;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
    (pGVar4->fields).steps = pGVar2;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).steps);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar4,method_01);
    return pGVar4;
  }
label_0536acc1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Layout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Layout (System_String_o* direction, System_String_o* justify, System_String_o* alignItems, System_String_o* alignSelf, System_String_o* wrap, float gap, Gisketch_Aottg2UI_Data_GisketchLength_o* width, Gisketch_Aottg2UI_Data_GisketchLength_o* height, Gisketch_Aottg2UI_Data_GisketchLength_o* minWidth, Gisketch_Aottg2UI_Data_GisketchLength_o* minHeight, Gisketch_Aottg2UI_Data_GisketchLength_o* maxWidth, Gisketch_Aottg2UI_Data_GisketchLength_o* maxHeight, float padding, float paddingX, float paddingY, float paddingLeft, float paddingRight, float paddingTop, float paddingBottom, float offsetX, float offsetY, float grow, float shrink, const MethodInfo* method);
// 0x53663c0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Layout
          (System_String_o *direction,System_String_o *justify,System_String_o *alignItems,
          System_String_o *alignSelf,System_String_o *wrap,float gap,
          Gisketch_Aottg2UI_Data_GisketchLength_o *width,Gisketch_Aottg2UI_Data_GisketchLength_o *height,
          Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth,Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight
          ,Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth,
          Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight,float padding,float paddingX,float paddingY,
          float paddingLeft,float paddingRight,float paddingTop,float paddingBottom,float offsetX,
          float offsetY,float grow,float shrink,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07542a21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    Il2CppMethodInitialized_07542a21 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).direction = direction;
  Il2CppCodeGenWriteBarrier(&(__this->fields).direction);
  (__this->fields).justify = justify;
  Il2CppCodeGenWriteBarrier(&(__this->fields).justify);
  (__this->fields).alignItems = alignItems;
  Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems);
  (__this->fields).alignSelf = alignSelf;
  Il2CppCodeGenWriteBarrier(&(__this->fields).alignSelf);
  (__this->fields).wrap = wrap;
  Il2CppCodeGenWriteBarrier(&(__this->fields).wrap);
  (__this->fields).gap = gap;
  (__this->fields).width = width;
  Il2CppCodeGenWriteBarrier(&(__this->fields).width);
  (__this->fields).height = height;
  Il2CppCodeGenWriteBarrier(&(__this->fields).height);
  (__this->fields).minWidth = minWidth;
  Il2CppCodeGenWriteBarrier(&(__this->fields).minWidth);
  (__this->fields).minHeight = minHeight;
  Il2CppCodeGenWriteBarrier(&(__this->fields).minHeight);
  (__this->fields).maxWidth = maxWidth;
  Il2CppCodeGenWriteBarrier(&(__this->fields).maxWidth);
  (__this->fields).maxHeight = maxHeight;
  Il2CppCodeGenWriteBarrier(&(__this->fields).maxHeight);
  (__this->fields).padding = padding;
  (__this->fields).paddingX = paddingX;
  (__this->fields).paddingY = paddingY;
  (__this->fields).paddingLeft = paddingLeft;
  (__this->fields).paddingRight = paddingRight;
  (__this->fields).paddingTop = paddingTop;
  (__this->fields).paddingBottom = paddingBottom;
  (__this->fields).offsetX = offsetX;
  (__this->fields).offsetY = offsetY;
  (__this->fields).grow = grow;
  (__this->fields).shrink = shrink;
  return __this;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Motion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Motion (System_String_o* preset, System_String_o* group, float duration, float delay, float stagger, int32_t order, const MethodInfo* method);
// 0x53680e0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Motion
          (System_String_o *preset,System_String_o *group,float duration,float delay,float stagger,
          int32_t order,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07542a22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
    Il2CppMethodInitialized_07542a22 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).preset = preset;
  Il2CppCodeGenWriteBarrier(&(__this->fields).preset);
  (__this->fields).group = group;
  Il2CppCodeGenWriteBarrier(&(__this->fields).group);
  (__this->fields).duration = duration;
  (__this->fields).delay = delay;
  (__this->fields).stagger = stagger;
  (__this->fields).order = order;
  return __this;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Points
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Code_AottgUi__Points (float value, const MethodInfo* method);
// 0x5366f00

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Code_AottgUi__Points(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_07542a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542a23 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).value = value;
  (__this->fields).unit = "point";
  Il2CppCodeGenWriteBarrier(&(__this->fields).unit);
  return __this;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Percent
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Code_AottgUi__Percent (float value, const MethodInfo* method);
// 0x5366330

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Code_AottgUi__Percent(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_07542a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_07542a24 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).value = value;
  (__this->fields).unit = "percent";
  Il2CppCodeGenWriteBarrier(&(__this->fields).unit);
  return __this;
}


// Gisketch.Aottg2UI.Code.AottgUi$$VariantStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgUi__VariantStyle (int32_t variant, const MethodInfo* method);
// 0x5368bf0

System_String_o * Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(int32_t variant,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"buttonSecondary");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPlain");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonWorkshop");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonDanger");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonHeaderTab");
    Il2CppMethodInitialized_07542a25 = '\x01';
  }
  if (variant - 1U < 7) {
    return *(System_String_o **)(((System_String_o **[]){&"buttonSecondary", &"buttonWorkshop", &"buttonQuiet", &"buttonHeaderTab", &"buttonPlain", &"buttonDanger", &"buttonNegative"}))[(int)(variant - 1U)];
  }
  return "buttonPrimary";
}


