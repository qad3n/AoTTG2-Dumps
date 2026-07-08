// Type: Gisketch.Aottg2UI.Code.AottgUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgUi.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x3af6ec0

void Gisketch_Aottg2UI_Code_AottgUi_<>c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$<Callout>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___Callout_b__0 (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* callout, const MethodInfo* method);
// 0x3af8a80

void Gisketch_Aottg2UI_Code_AottgUi_<>c__DisplayClass4_0__<Callout>b__0
               (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *callout,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *id;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (DAT_0570147f == '\0') {
    il2cpp_init_method_metadata(&"-border");
    il2cpp_init_method_metadata(&"calloutBorder");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"calloutText");
    il2cpp_init_method_metadata(&"-text");
    DAT_0570147f = '\x01';
  }
  pSVar3 = (System_String_o *)0x0;
  pSVar2 = System_String__Concat("calloutBorder",(__this->fields).suffix,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar3 = System_String__Concat((__this->fields).id,"-border",(MethodInfo *)0x0);
  }
  if (DAT_0570147c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"point");
    DAT_0570147c = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 7.0;
    (__this_00->fields).unit = "point";
    il2cpp_runtime_glue(&(__this_00->fields).unit);
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      ((Gisketch_Aottg2UI_Data_GisketchLength_Fields *)&method_00->invoker_method)->value = 100.0;
      method_00->name = (char *)"percent";
      il2cpp_runtime_glue(&method_00->name);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffc0);
      if (callout != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        id = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (callout,pSVar2,(System_Action_AottgUi__o *)0x0,pSVar3,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        pSVar2 = (__this->fields).text;
        bVar1 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
        pSVar3 = "calloutText";
        if ((char)bVar1 == '\0') {
          id = System_String__Concat((__this->fields).id,"-text",(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (callout,pSVar2,pSVar3,id,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$TextArea
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__TextArea (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxCharacters, const MethodInfo* method);
// 0x3af65c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__TextArea
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder
          ,System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxCharacters,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if (DAT_05701457 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgInputType);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"TextArea");
    DAT_05701457 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "TextArea";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).placeholder = placeholder;
    il2cpp_runtime_glue(&(pGVar1->fields).placeholder);
    local_48.klass = TypeInfo_AottgInputType;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = 0;
    pSVar2 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    (pGVar1->fields).inputType = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).inputType,pSVar2);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(pGVar1->fields).search,layout);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion,enter);
    (pGVar1->fields).max.fields.value = (float)maxCharacters;
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Skeleton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Skeleton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, System_String_o* style, System_String_o* visibleKey, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x3af6720

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Skeleton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,System_String_o *style,
          System_String_o *visibleKey,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05701458 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"fade");
    il2cpp_init_method_metadata(&"Skeleton");
    DAT_05701458 = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).type = "Skeleton";
    il2cpp_runtime_glue(&pGVar3->fields);
    (pGVar3->fields).id = id;
    il2cpp_runtime_glue(&(pGVar3->fields).id,id);
    (pGVar3->fields).style = style;
    il2cpp_runtime_glue(&(pGVar3->fields).style,style);
    (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(pGVar3->fields).search);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    bVar2 = System_String__IsNullOrEmpty(visibleKey,(MethodInfo *)0x0);
    *(char *)((long)&(pGVar3->fields).hasIcon + 2) = (char)bVar2;
    bVar2 = System_String__IsNullOrEmpty(visibleKey,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0
                );
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto LAB_03af6947;
      (__this_00->fields).alignItems = visibleKey;
      il2cpp_runtime_glue(&(__this_00->fields).alignItems,visibleKey);
    }
    (pGVar3->fields).contentLayout = __this_00;
    il2cpp_runtime_glue(&(pGVar3->fields).contentLayout);
    pSVar1 = "fade";
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      if (DAT_0570147b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDefinition);
        DAT_0570147b = '\x01';
      }
      enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchMotionDefinition);
      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(enter,(MethodInfo *)0x0);
      if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto LAB_03af6947;
      (enter->fields).preset = pSVar1;
      il2cpp_runtime_glue(&enter->fields,pSVar1);
      (enter->fields).group = (System_String_o *)0x0;
      il2cpp_runtime_glue(&(enter->fields).group,0);
      (enter->fields).duration = 0.12;
      (enter->fields).delay = 0.0;
      (enter->fields).stagger = 0.0;
      (enter->fields).order = 0;
    }
    (pGVar3->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar3->fields).motion,enter);
    (pGVar3->fields).enter = exit;
    il2cpp_runtime_glue(&(pGVar3->fields).enter);
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar3,method_00);
      return pGVar3;
    }
  }
LAB_03af6947:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Slider
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Slider (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, float value, bool showValue, System_String_o* actionId, System_String_o* style, float min, float max, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af6a10

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Slider
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,float value,
          bool_conflict showValue,System_String_o *actionId,System_String_o *style,float min,
          float max,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar2;
  MethodInfo *method_01;
  float __this_00;
  float local_4c;
  undefined8 local_48;
  undefined8 local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  local_4c = value;
  if (DAT_05701459 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"Slider");
    DAT_05701459 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Slider";
    local_38 = __this;
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar2 = System_Single__ToString
                       (__this_00,(System_IFormatProvider_o *)&local_4c,(MethodInfo *)method_00);
    (pGVar1->fields).value = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).value,pSVar2);
    local_40 = 0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_40,min,MethodInfo_Nullable_1_Single);
    *(undefined8 *)&(pGVar1->fields).enabled.fields.value = local_40;
    local_48 = 0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_48,max,MethodInfo_Nullable_1_Single);
    *(undefined8 *)&(pGVar1->fields).referenceHeight = local_48;
    *(char *)&(pGVar1->fields).debounceSeconds.fields.value = (char)showValue;
    (pGVar1->fields).action = actionId;
    il2cpp_runtime_glue(&(pGVar1->fields).action,actionId);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion,enter);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(local_38,pGVar1,method_01);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Slider
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Slider (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, float value, bool showValue, System_Action_GisketchActionContext__o* action, System_String_o* style, float min, float max, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af6bd0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Slider
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,float value,
          bool_conflict showValue,System_Action_GisketchActionContext__o *action,
          System_String_o *style,float min,float max,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                     (__this,id,value,showValue & 0xff,actionId,style,min,max,enter,
                      in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Callout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Callout (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_String_o* id, const MethodInfo* method);
// 0x3af6c70

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Callout
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  System_Enum_o local_40;
  int32_t local_30;
  
  if (DAT_0570145a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgCalloutVariant);
    il2cpp_init_method_metadata(&MethodInfo_Void__Callout_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"callout");
    il2cpp_init_method_metadata(&"Row");
    DAT_0570145a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = id;
    il2cpp_runtime_glue(&__this_00[1].monitor,id);
    __this_00[2].klass = (Il2CppClass *)text;
    il2cpp_runtime_glue(__this_00 + 2);
    local_40.klass = TypeInfo_AottgCalloutVariant;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = variant;
    pIVar1 = (Il2CppClass *)System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    __this_00[1].klass = pIVar1;
    il2cpp_runtime_glue(__this_00 + 1,pIVar1);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id_00 = __this_00[1].monitor;
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
      method_00 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,12.0,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffb0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (__this,"callout",build,id_00,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
      return pGVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Checkbox
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Checkbox (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x3af6ed0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Checkbox
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *text,
          bool_conflict value,System_Action_GisketchActionContext__o *action,System_String_o *icon,
          System_String_o *tooltip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (DAT_0570145b == '\0') {
    il2cpp_init_method_metadata(&"Checkbox");
    in_stack_ffffffffffffffc0 = (MethodInfo *)0x3af6f16;
    il2cpp_init_method_metadata(&"checkbox");
    DAT_0570145b = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Checkbox",id,text,value & 0xff,action,"checkbox",icon,tooltip,
                      in_stack_ffffffffffffffc0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Radio
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Radio (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x3af7100

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Radio
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *text,
          bool_conflict value,System_Action_GisketchActionContext__o *action,System_String_o *icon,
          System_String_o *tooltip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (DAT_0570145c == '\0') {
    il2cpp_init_method_metadata(&"Radio");
    in_stack_ffffffffffffffc0 = (MethodInfo *)0x3af7146;
    il2cpp_init_method_metadata(&"radio");
    DAT_0570145c = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Radio",id,text,value & 0xff,action,"radio",icon,tooltip,
                      in_stack_ffffffffffffffc0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Switch
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Switch (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, bool value, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3af7190

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Switch
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,bool_conflict value,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_0570145d == '\0') {
    il2cpp_init_method_metadata(&"switch");
    il2cpp_init_method_metadata(&"Switch");
    DAT_0570145d = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Switch",id,
                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),value & 0xff,action,
                      "switch",(System_String_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffd0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Toggle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Toggle (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* type, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* style, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x3af6f60

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Toggle
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *type,System_String_o *id,
          System_String_o *text,bool_conflict value,System_Action_GisketchActionContext__o *action,
          System_String_o *style,System_String_o *icon,System_String_o *tooltip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  undefined8 *puVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (DAT_0570145e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    DAT_0570145e = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = type;
    il2cpp_runtime_glue(&pGVar1->fields,type);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).text = text;
    il2cpp_runtime_glue(&(pGVar1->fields).text,text);
    if ((char)value == '\0') {
      puVar2 = &"false";
    }
    else {
      puVar2 = &"true";
    }
    (pGVar1->fields).value = (System_String_o *)*puVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).value);
    __this_00 = (__this->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    (pGVar1->fields).action = pSVar3;
    il2cpp_runtime_glue(&(pGVar1->fields).action);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style);
    (pGVar1->fields).icon = icon;
    il2cpp_runtime_glue(&(pGVar1->fields).icon);
    (pGVar1->fields).choiceOptionRenderer = tooltip;
    il2cpp_runtime_glue(&(pGVar1->fields).choiceOptionRenderer);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Icon
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Icon (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* icon, System_String_o* style, System_String_o* id, const MethodInfo* method);
// 0x3af7230

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Icon
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *icon,System_String_o *style,
          System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_0570145f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Icon");
    DAT_0570145f = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Icon";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).icon = icon;
    il2cpp_runtime_glue(&(pGVar1->fields).icon,icon);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$IconButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__IconButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* icon, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af7300

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__IconButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *icon,
          System_Action_GisketchActionContext__o *action,System_String_o *id,
          System_String_o *tooltip,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (DAT_05701460 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Button");
    DAT_05701460 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Button";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).icon = icon;
    il2cpp_runtime_glue(&(pGVar1->fields).icon);
    *(undefined1 *)&(pGVar1->fields).hasIcon = 1;
    pSVar2 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,(MethodInfo *)icon);
    (pGVar1->fields).style = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).style,pSVar2);
    __this_00 = (__this->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    (pGVar1->fields).action = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).action);
    (pGVar1->fields).choiceOptionRenderer = tooltip;
    il2cpp_runtime_glue(&(pGVar1->fields).choiceOptionRenderer,tooltip);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion,enter);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Separator
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Separator (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af7500

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Separator
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_05701461 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"separator");
    il2cpp_init_method_metadata(&"Divider");
    DAT_05701461 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Divider";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).style = "separator";
    il2cpp_runtime_glue(&(pGVar1->fields).style);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion,enter);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3af75e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_05701462 == '\0') {
    il2cpp_init_method_metadata(&"Dropdown");
    DAT_05701462 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,in_RAX);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3af7750

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_05701463 == '\0') {
    il2cpp_init_method_metadata(&"Dropdown");
    DAT_05701463 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8)
  ;
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).action = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).action);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3af7820

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_05701464 == '\0') {
    il2cpp_init_method_metadata(&"Dropdown");
    DAT_05701464 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8)
  ;
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).action = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).action);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3af79f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_05701465 == '\0') {
    il2cpp_init_method_metadata(&"Select");
    DAT_05701465 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,in_RAX);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3af7a60

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_05701466 == '\0') {
    il2cpp_init_method_metadata(&"Select");
    DAT_05701466 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8)
  ;
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).action = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).action);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3af7b30

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_05701467 == '\0') {
    il2cpp_init_method_metadata(&"Select");
    DAT_05701467 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8)
  ;
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).action = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).action);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Choice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Choice (System_String_o* type, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3af7650

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Choice
          (System_String_o *type,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  
  if (DAT_05701468 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    DAT_05701468 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = type;
    il2cpp_runtime_glue(&__this->fields,type);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).value = value;
    il2cpp_runtime_glue(&(__this->fields).value,value);
    *(System_String_array **)&(__this->fields).maxVisibleItems = options;
    il2cpp_runtime_glue(&(__this->fields).maxVisibleItems);
    (__this->fields).debounceSeconds.fields.hasValue = maxVisibleItems;
    if (type != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(type,(MethodInfo *)0x0);
      (__this->fields).style = pSVar1;
      il2cpp_runtime_glue(&(__this->fields).style,pSVar1);
      (__this->fields).motion = enter;
      il2cpp_runtime_glue(&(__this->fields).motion,enter);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Choice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Choice (System_String_o* type, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3af78f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Choice
          (System_String_o *type,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  
  if (DAT_05701469 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    DAT_05701469 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = type;
    il2cpp_runtime_glue(&__this->fields,type);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).value = value;
    il2cpp_runtime_glue(&(__this->fields).value,value);
    (__this->fields).options = (System_String_array *)options;
    il2cpp_runtime_glue(&(__this->fields).options);
    (__this->fields).debounceSeconds.fields.hasValue = maxVisibleItems;
    if (type != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(type,(MethodInfo *)0x0);
      (__this->fields).style = pSVar1;
      il2cpp_runtime_glue(&(__this->fields).style,pSVar1);
      (__this->fields).motion = enter;
      il2cpp_runtime_glue(&(__this->fields).motion,enter);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$BuildDetached
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgUi__BuildDetached (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_Action_AottgUi__o* build, System_String_o* ownerId, const MethodInfo* method);
// 0x3af7c00

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_Action_AottgUi__o *build,
          System_String_o *ownerId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (DAT_0570146a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUi);
    DAT_0570146a = '\x01';
  }
  if (ownerId == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_glue(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)
              ((build->fields).method_code,__this_01,(build->fields).method);
  }
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (DAT_05701471 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_GisketchNodeDefinition___ToArray);
      DAT_05701471 = '\x01';
    }
    __this_00 = (__this_01->fields)._children;
    if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
               System_Collections_Generic_List<object>__ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition___ToArray);
      return pGVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Image
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Image (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* style, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af7cc0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Image
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *style,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_0570146b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Image");
    DAT_0570146b = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Image";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).sprite = sprite;
    il2cpp_runtime_glue(&(pGVar1->fields).sprite,sprite);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(pGVar1->fields).search,layout);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion,enter);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SpriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* label, System_String_o* actionId, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af7dc0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *label,
          System_String_o *actionId,System_String_o *id,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_0570146c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"SpriteButton");
    DAT_0570146c = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "SpriteButton";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).text = label;
    il2cpp_runtime_glue(&(pGVar1->fields).text,label);
    (pGVar1->fields).sprite = sprite;
    il2cpp_runtime_glue(&(pGVar1->fields).sprite,sprite);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    (pGVar1->fields).action = actionId;
    il2cpp_runtime_glue(&(pGVar1->fields).action,actionId);
    (pGVar1->fields).choiceOptionRenderer = label;
    il2cpp_runtime_glue(&(pGVar1->fields).choiceOptionRenderer,label);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(pGVar1->fields).search);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SpriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* label, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af7f20

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
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
    actionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     (__this,sprite,label,actionId,id,style,layout,enter,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$SearchPalette
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SearchPalette (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, const MethodInfo* method);
// 0x3af62f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SearchPalette
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder
          ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_0570146d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"SearchPalette");
    il2cpp_init_method_metadata(&"searchPalette");
    DAT_0570146d = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "SearchPalette";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).placeholder = placeholder;
    il2cpp_runtime_glue(&(pGVar1->fields).placeholder,placeholder);
    (pGVar1->fields).style = "searchPalette";
    il2cpp_runtime_glue(&(pGVar1->fields).style);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Search
// il2cpp: Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Search (System_String_o* title, System_String_o* keywords, bool hidden, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x3af7fa0

Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Search
          (System_String_o *title,System_String_o *keywords,bool_conflict hidden,
          System_String_o *icon,System_String_o *kind,System_String_o *sectionId,
          System_String_o *sectionTitle,bool_conflict autoAddKeywords,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this;
  
  if (DAT_0570146e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSearchDefinition);
    DAT_0570146e = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchSearchDefinition);
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    (__this->fields).title = title;
    il2cpp_runtime_glue(&__this->fields,title);
    (__this->fields).keywords = keywords;
    il2cpp_runtime_glue(&(__this->fields).keywords,keywords);
    *(char *)((long)&(__this->fields).autoAddKeywords + 1) = (char)hidden;
    (__this->fields).icon = icon;
    il2cpp_runtime_glue(&(__this->fields).icon,icon);
    (__this->fields).kind = kind;
    il2cpp_runtime_glue(&(__this->fields).kind,kind);
    (__this->fields).sectionId = sectionId;
    il2cpp_runtime_glue(&(__this->fields).sectionId,sectionId);
    (__this->fields).sectionTitle = sectionTitle;
    il2cpp_runtime_glue(&(__this->fields).sectionTitle);
    *(undefined1 *)&(__this->fields).autoAddKeywords = (undefined1)autoAddKeywords;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___ctor (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* ownerId, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af5ba0

void Gisketch_Aottg2UI_Code_AottgUi___ctor
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *ownerId,
               Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  
  if (DAT_0570146f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefini);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchNodeDefinition);
    DAT_0570146f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)
              il2cpp_runtime_glue(TypeInfo_List_GisketchNodeDefinition);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefini);
  (__this->fields)._children = __this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._ownerId = ownerId;
  il2cpp_runtime_glue(&(__this->fields)._ownerId,ownerId);
  (__this->fields)._actions = actions;
  il2cpp_runtime_glue(&(__this->fields)._actions,actions);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$get_HasChildren
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgUi__get_HasChildren (Gisketch_Aottg2UI_Code_AottgUi_o* __this, const MethodInfo* method);
// 0x3af8090

bool_conflict
Gisketch_Aottg2UI_Code_AottgUi__get_HasChildren
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  
  if (DAT_05701470 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05701470 = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),0 < (pSVar1->fields)._size);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$ToArray
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgUi__ToArray (Gisketch_Aottg2UI_Code_AottgUi_o* __this, const MethodInfo* method);
// 0x3af5c50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgUi__ToArray(Gisketch_Aottg2UI_Code_AottgUi_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (DAT_05701471 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchNodeDefinition___ToArray);
    DAT_05701471 = '\x01';
  }
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             System_Collections_Generic_List<object>__ToArray
                       ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition___ToArray);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Add
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Add (Gisketch_Aottg2UI_Code_AottgUi_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3af5720

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Add
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  long lVar4;
  
  if (DAT_05701472 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05701472 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
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
        il2cpp_runtime_glue(pGVar3->m_Items + (int)uVar2,node);
        return node;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)node,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return node;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Component
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi__Component (Gisketch_Aottg2UI_Code_AottgUi_o* __this, Gisketch_Aottg2UI_Code_AottgComponent_o* component, const MethodInfo* method);
// 0x3af80d0

void Gisketch_Aottg2UI_Code_AottgUi__Component
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,
               Gisketch_Aottg2UI_Code_AottgComponent_o *component,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar1;
  code *vtable_dispatch;
  
  if (component != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
    pGVar1 = component->klass;
    vtable_dispatch = pGVar1[1]._1.image;
    (*vtable_dispatch)(component,__this,pGVar1[1]._1.gc_desc,pGVar1,vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Panel
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Panel (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af4fe0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Panel
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,
          System_Action_AottgUi__o *build,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
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
  if (DAT_05701473 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Panel");
    DAT_05701473 = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_glue(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method_00);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)
              ((build->fields).method_code,__this_01,(build->fields).method);
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Panel";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(pGVar1->fields).search);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (DAT_05701471 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_GisketchNodeDefinition___ToArray);
        DAT_05701471 = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List<object>__ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition___ToArray);
        (pGVar1->fields).deferredChildren = pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).deferredChildren,pGVar2);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_01);
        return pGVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Text
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Text (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* text, System_String_o* style, System_String_o* id, System_String_o* bindText, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af8100

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Text
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *text,System_String_o *style,
          System_String_o *id,System_String_o *bindText,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05701474 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"Text");
    DAT_05701474 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "Text";
    il2cpp_runtime_glue(&pGVar2->fields);
    (pGVar2->fields).id = id;
    il2cpp_runtime_glue(&(pGVar2->fields).id,id);
    (pGVar2->fields).text = text;
    il2cpp_runtime_glue(&(pGVar2->fields).text,text);
    (pGVar2->fields).style = style;
    il2cpp_runtime_glue(&(pGVar2->fields).style);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    bVar1 = System_String__IsNullOrEmpty(bindText,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0
                );
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto LAB_03af8250;
      (__this_00->fields).direction = bindText;
      il2cpp_runtime_glue(&__this_00->fields,bindText);
    }
    (pGVar2->fields).contentLayout = __this_00;
    il2cpp_runtime_glue(&(pGVar2->fields).contentLayout,__this_00);
    (pGVar2->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar2->fields).motion,enter);
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar2,method_00);
      return pGVar2;
    }
  }
LAB_03af8250:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Button (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_String_o* actionId, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x3af44f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Button
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_String_o *actionId,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,
          MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05701475 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Button");
    DAT_05701475 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "Button";
    il2cpp_runtime_glue(&pGVar2->fields);
    (pGVar2->fields).id = id;
    il2cpp_runtime_glue(&(pGVar2->fields).id,id);
    (pGVar2->fields).text = text;
    il2cpp_runtime_glue(&(pGVar2->fields).text,text);
    (pGVar2->fields).icon = icon;
    il2cpp_runtime_glue(&(pGVar2->fields).icon);
    method_01 = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
    *(byte *)&(pGVar2->fields).hasIcon = (byte)bVar1 ^ 1;
    pSVar3 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,method_01);
    (pGVar2->fields).style = pSVar3;
    il2cpp_runtime_glue(&(pGVar2->fields).style,pSVar3);
    (pGVar2->fields).action = actionId;
    il2cpp_runtime_glue(&(pGVar2->fields).action,actionId);
    (pGVar2->fields).choiceOptionRenderer = tooltip;
    il2cpp_runtime_glue(&(pGVar2->fields).choiceOptionRenderer,tooltip);
    (pGVar2->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar2->fields).motion);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar2,method_00);
    return pGVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Button (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x3af46b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Button
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_Action_GisketchActionContext__o *action,System_String_o *id,
          System_String_o *tooltip,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
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
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__InputField (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, int32_t type, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_Action_GisketchActionContext__o* change, float debounceSeconds, int32_t maxCharacters, const MethodInfo* method);
// 0x3af8260

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__InputField
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder
          ,int32_t type,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_Action_GisketchActionContext__o *change,float debounceSeconds,int32_t maxCharacters
          ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (DAT_05701476 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgInputType);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"InputField");
    DAT_05701476 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "InputField";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).placeholder = placeholder;
    il2cpp_runtime_glue(&(pGVar1->fields).placeholder);
    local_48.klass = TypeInfo_AottgInputType;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = type;
    pSVar2 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    (pGVar1->fields).inputType = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).inputType,pSVar2);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(pGVar1->fields).search,layout);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion);
    (pGVar1->fields).max.fields.value = (float)maxCharacters;
    if ((change == (System_Action_GisketchActionContext__o *)0x0) ||
       (__this_00 = (__this->fields)._actions,
       __this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,change,(MethodInfo *)0x0);
    }
    (pGVar1->fields).action = pSVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).action);
    if (change == (System_Action_GisketchActionContext__o *)0x0) {
      *(undefined8 *)&(pGVar1->fields).min.fields.value = 0;
      method_00 = extraout_RDX;
    }
    else {
      local_48.klass = (System_Enum_c *)0x0;
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&local_48,debounceSeconds,MethodInfo_Nullable_1_Single);
      *(System_Enum_c **)&(pGVar1->fields).min.fields.value = local_48.klass;
      method_00 = extraout_RDX_00;
    }
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
      return pGVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$ScrollView
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ScrollView (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* contentLayout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af8460

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ScrollView
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,
          System_Action_AottgUi__o *build,System_String_o *id,
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
  if (DAT_05701477 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"ScrollView");
    DAT_05701477 = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_glue(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method_00);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)
              ((build->fields).method_code,__this_01,(build->fields).method);
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "ScrollView";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(pGVar1->fields).search);
    (pGVar1->fields).layout = contentLayout;
    il2cpp_runtime_glue(&(pGVar1->fields).layout);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (DAT_05701471 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_GisketchNodeDefinition___ToArray);
        DAT_05701471 = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List<object>__ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition___ToArray);
        (pGVar1->fields).deferredChildren = pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).deferredChildren,pGVar2);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_01);
        return pGVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$ScaleBox
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ScaleBox (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, float referenceWidth, float referenceHeight, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* contentLayout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3af8630

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
  if (DAT_05701478 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"ScaleBox");
    DAT_05701478 = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_glue(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method_00);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)
              ((build->fields).method_code,__this_01,(build->fields).method);
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "ScaleBox";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_glue(&(pGVar1->fields).id,id);
    (pGVar1->fields).style = style;
    il2cpp_runtime_glue(&(pGVar1->fields).style,style);
    (pGVar1->fields).active = (bool_conflict)referenceWidth;
    (pGVar1->fields).enabled.fields.hasValue = (bool_conflict)referenceHeight;
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_glue(&(pGVar1->fields).search);
    (pGVar1->fields).layout = contentLayout;
    il2cpp_runtime_glue(&(pGVar1->fields).layout);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_glue(&(pGVar1->fields).motion);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (DAT_05701471 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_GisketchNodeDefinition___ToArray);
        DAT_05701471 = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List<object>__ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition___ToArray);
        (pGVar1->fields).deferredChildren = pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).deferredChildren,pGVar2);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_01);
        return pGVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Stepper
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Stepper (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, Gisketch_Aottg2UI_Code_AottgStepperStep_array* steps, const MethodInfo* method);
// 0x3af8820

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Stepper
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,
          Gisketch_Aottg2UI_Code_AottgStepperStep_array *steps,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  ulong uVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *method_01;
  float *pfVar6;
  ulong uVar7;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (DAT_05701479 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchStepperStepDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Stepper");
    DAT_05701479 = '\x01';
  }
  if (steps == (Gisketch_Aottg2UI_Code_AottgStepperStep_array *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    method_00 = (MethodInfo *)(ulong)(uint)steps->max_length;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_glue_02274930(TypeInfo_GisketchStepperStepDefinition);
    if (0 < (int)steps->max_length) {
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
        if (steps->m_Items[0] != (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(steps->m_Items[0],method_00);
        }
        goto LAB_03af8a71;
      }
      uVar3 = steps->max_length & 0xffffffff;
      pfVar6 = &(pGVar2->fields).duration;
      uVar7 = 0;
      do {
        if (uVar3 <= uVar7) {
LAB_03af8a5e:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_00 = steps->m_Items[uVar7];
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          uVar1 = *(uint *)&(pGVar2->fields).group;
        }
        else {
          if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto LAB_03af8a71;
          method_00 = (MethodInfo *)
                      Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_00,method_00);
          uVar1 = *(uint *)&(pGVar2->fields).group;
        }
        if (uVar1 <= uVar7) goto LAB_03af8a5e;
        *(MethodInfo **)pfVar6 = method_00;
        il2cpp_runtime_glue(pfVar6);
        uVar7 = uVar7 + 1;
        uVar1 = (uint)steps->max_length;
        uVar3 = (ulong)uVar1;
        pfVar6 = pfVar6 + 2;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
  }
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar4->fields).type = "Stepper";
    il2cpp_runtime_glue(&pGVar4->fields);
    (pGVar4->fields).style = style;
    il2cpp_runtime_glue(&(pGVar4->fields).style,style);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,in_stack_ffffffffffffffc0);
    (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
    il2cpp_runtime_glue(&(pGVar4->fields).search,pGVar5);
    (pGVar4->fields).exit = pGVar2;
    il2cpp_runtime_glue(&(pGVar4->fields).exit,pGVar2);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar4,method_01);
    return pGVar4;
  }
LAB_03af8a71:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Layout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Layout (System_String_o* direction, System_String_o* justify, System_String_o* alignItems, System_String_o* alignSelf, System_String_o* wrap, float gap, Gisketch_Aottg2UI_Data_GisketchLength_o* width, Gisketch_Aottg2UI_Data_GisketchLength_o* height, Gisketch_Aottg2UI_Data_GisketchLength_o* minWidth, Gisketch_Aottg2UI_Data_GisketchLength_o* minHeight, Gisketch_Aottg2UI_Data_GisketchLength_o* maxWidth, Gisketch_Aottg2UI_Data_GisketchLength_o* maxHeight, float padding, float paddingX, float paddingY, float paddingLeft, float paddingRight, float paddingTop, float paddingBottom, float offsetX, float offsetY, float grow, float shrink, const MethodInfo* method);
// 0x3af4dc0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Layout
          (System_String_o *direction,System_String_o *justify,System_String_o *alignItems,
          System_String_o *alignSelf,System_String_o *wrap,float gap,
          Gisketch_Aottg2UI_Data_GisketchLength_o *width,
          Gisketch_Aottg2UI_Data_GisketchLength_o *height,
          Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth,
          Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight,
          Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth,
          Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight,float padding,float paddingX,
          float paddingY,float paddingLeft,float paddingRight,float paddingTop,float paddingBottom,
          float offsetX,float offsetY,float grow,float shrink,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (DAT_0570147a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    DAT_0570147a = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = direction;
    il2cpp_runtime_glue(&__this->fields,direction);
    (__this->fields).justify = justify;
    il2cpp_runtime_glue(&(__this->fields).justify,justify);
    (__this->fields).alignItems = alignItems;
    il2cpp_runtime_glue(&(__this->fields).alignItems,alignItems);
    (__this->fields).alignSelf = alignSelf;
    il2cpp_runtime_glue(&(__this->fields).alignSelf,alignSelf);
    (__this->fields).wrap = wrap;
    il2cpp_runtime_glue(&(__this->fields).wrap,wrap);
    (__this->fields).gap = gap;
    (__this->fields).width = width;
    il2cpp_runtime_glue(&(__this->fields).width);
    (__this->fields).height = height;
    il2cpp_runtime_glue(&(__this->fields).height);
    (__this->fields).minWidth = minWidth;
    il2cpp_runtime_glue(&(__this->fields).minWidth);
    (__this->fields).minHeight = minHeight;
    il2cpp_runtime_glue(&(__this->fields).minHeight);
    (__this->fields).maxWidth = maxWidth;
    il2cpp_runtime_glue(&(__this->fields).maxWidth);
    (__this->fields).maxHeight = maxHeight;
    il2cpp_runtime_glue(&(__this->fields).maxHeight);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Motion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Motion (System_String_o* preset, System_String_o* group, float duration, float delay, float stagger, int32_t order, const MethodInfo* method);
// 0x3af6950

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Motion
          (System_String_o *preset,System_String_o *group,float duration,float delay,float stagger,
          int32_t order,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this;
  
  if (DAT_0570147b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDefinition);
    DAT_0570147b = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchMotionDefinition);
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    (__this->fields).preset = preset;
    il2cpp_runtime_glue(&__this->fields,preset);
    (__this->fields).group = group;
    il2cpp_runtime_glue(&(__this->fields).group,group);
    (__this->fields).duration = duration;
    (__this->fields).delay = delay;
    (__this->fields).stagger = stagger;
    (__this->fields).order = order;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Points
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Code_AottgUi__Points (float value, const MethodInfo* method);
// 0x3af5920

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Code_AottgUi__Points(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (DAT_0570147c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"point");
    DAT_0570147c = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "point";
    il2cpp_runtime_glue(&(__this->fields).unit);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Percent
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Code_AottgUi__Percent (float value, const MethodInfo* method);
// 0x3af4d30

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Code_AottgUi__Percent(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (DAT_0570147d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"percent");
    DAT_0570147d = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "percent";
    il2cpp_runtime_glue(&(__this->fields).unit);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgUi$$VariantStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgUi__VariantStyle (int32_t variant, const MethodInfo* method);
// 0x3af7470

System_String_o * Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(int32_t variant,MethodInfo *method)

{
  if (DAT_0570147e == '\0') {
    il2cpp_init_method_metadata(&"buttonSecondary");
    il2cpp_init_method_metadata(&"buttonPrimary");
    il2cpp_init_method_metadata(&"buttonPlain");
    il2cpp_init_method_metadata(&"buttonWorkshop");
    il2cpp_init_method_metadata(&"buttonDanger");
    il2cpp_init_method_metadata(&"buttonNegative");
    il2cpp_init_method_metadata(&"buttonQuiet");
    DAT_0570147e = '\x01';
  }
  if (variant - 1U < 6) {
    return *(System_String_o **)(&PTR_DAT_05176100)[(int)(variant - 1U)];
  }
  return "buttonPrimary";
}


