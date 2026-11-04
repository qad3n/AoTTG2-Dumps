// Type: Gisketch.Aottg2UI.Code.AottgUi
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___ctor(Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$<Callout>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___Callout_b__0 (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* callout, const MethodInfo* method);
// 0x1818d9f70
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818da008: mov ebp, r15d
// asm:   0x1818da00b: jmp 0x1818da023
// asm:   0x1818da126: mov rax, r15
// asm:   0x1818da129: jmp 0x1818da13e

void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___Callout_b__0
               (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *callout,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_1843420a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-border");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutBorder");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutText");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_1843420a8 = '\x01';
  }
  pSVar2 = System_String__Concat_1969e50("calloutBorder",(__this->fields).suffix,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
  id = (System_String_o *)0x0;
  pSVar3 = id;
  if (!bVar1) {
    pSVar3 = System_String__Concat_1969e50((__this->fields).id,"-border",(MethodInfo *)0x0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(7.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (callout == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (callout,pSVar2,(System_Action_AottgUi__o *)0x0,pSVar3,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).text;
  bVar1 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
  pSVar2 = "calloutText";
  if (!bVar1) {
    id = System_String__Concat_1969e50((__this->fields).id,"-text",(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (callout,pSVar3,pSVar2,id,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$TextArea
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__TextArea (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxCharacters, const MethodInfo* method);
// 0x1818cab00

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__TextArea
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxCharacters,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *value;
  bool bVar2;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if (Il2CppMethodInitialized_184342079 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    Il2CppMethodInitialized_184342079 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "TextArea";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"TextArea");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).placeholder = placeholder;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).placeholder,placeholder);
  local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
  local_48.monitor = &g_data_ffffffffffffffff;
  local_38 = 0;
  value = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  (__this_00->fields).inputType = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).inputType,value);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
  (__this_00->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,layout);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
  bVar2 = Il2CppMethodInitialized_18434209b == '\0';
  (__this_00->fields).maxCharacters = maxCharacters;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Skeleton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Skeleton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, System_String_o* style, System_String_o* visibleKey, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x1818c9ed0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c9fc1: mov ebx, r14d
// asm:   0x1818c9fc4: jmp 0x1818c9ff8

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Skeleton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,System_String_o *style,
          System_String_o *visibleKey,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  System_String_o *value;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_18434207a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"fade");
    il2cpp_codegen_initialize_runtime_metadata(&"Skeleton");
    Il2CppMethodInitialized_18434207a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Skeleton";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Skeleton");
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    (__this_00->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
    (__this_00->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,layout);
    bVar2 = System_String__IsNullOrEmpty(visibleKey,(MethodInfo *)0x0);
    (__this_00->fields).active = bVar2;
    bVar2 = System_String__IsNullOrEmpty(visibleKey,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
    if (!bVar2) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818ca100;
      (__this_01->fields).visible = visibleKey;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible,visibleKey);
    }
    (__this_00->fields).bind = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bind,__this_01);
    value = "fade";
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      if (Il2CppMethodInitialized_1843420a4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
        Il2CppMethodInitialized_1843420a4 = '\x01';
      }
      enter = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)enter,(MethodInfo *)0x0);
      if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto label_1818ca100;
      (enter->fields).preset = value;
      Il2CppCodeGenWriteBarrier(&(enter->fields).preset,value);
      (enter->fields).group = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(enter->fields).group,(void *)0x0);
      (enter->fields).duration = 0.12;
      (enter->fields).delay = 0.0;
      (enter->fields).stagger = 0.0;
      (enter->fields).order = 0;
    }
    (__this_00->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
    (__this_00->fields).exit = exit;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).exit,exit);
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_18434209b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        Il2CppMethodInitialized_18434209b = '\x01';
      }
      pSVar1 = (__this->fields)._children;
      if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        return __this_00;
      }
    }
  }
label_1818ca100:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Slider
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Slider (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, float value, bool showValue, System_String_o* actionId, System_String_o* style, float min, float max, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818ca320

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Slider
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,float value,bool showValue,
          System_String_o *actionId,System_String_o *style,float min,float max,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *value_00;
  float local_res18 [4];
  System_Nullable_float__Fields local_38;
  System_Nullable_float__Fields local_30 [2];
  
  local_res18[0] = value;
  if (Il2CppMethodInitialized_18434207b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    Il2CppMethodInitialized_18434207b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "Slider";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Slider");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  value_00 = System_Single__ToString_1b49fe0
                       (local_res18,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  (__this_00->fields).value = value_00;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,value_00);
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_38,min,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  (__this_00->fields).min.fields = local_38;
  local_30[0].hasValue = false;
  local_30[0]._1_3_ = 0;
  local_30[0].value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)local_30,max,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  (__this_00->fields).max.fields = local_30[0];
  (__this_00->fields).action = actionId;
  (__this_00->fields).showValue = showValue;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,actionId);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Slider
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Slider (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, float value, bool showValue, System_Action_GisketchActionContext__o* action, System_String_o* style, float min, float max, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818ca110

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Slider_18ca110
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,float value,bool showValue,
          System_Action_GisketchActionContext__o *action,System_String_o *style,float min,float max,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *value_01;
  System_Nullable_float__Fields local_res8;
  System_Nullable_float__Fields local_res10 [2];
  float local_res20 [2];
  
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  local_res20[0] = value;
  if (Il2CppMethodInitialized_18434207b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    Il2CppMethodInitialized_18434207b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "Slider";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Slider");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  value_01 = System_Single__ToString_1b49fe0
                       (local_res20,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  (__this_00->fields).value = value_01;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,value_01);
  local_res8.hasValue = false;
  local_res8._1_3_ = 0;
  local_res8.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_res8,min,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  (__this_00->fields).min.fields = local_res8;
  local_res10[0].hasValue = false;
  local_res10[0]._1_3_ = 0;
  local_res10[0].value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)local_res10,max,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  (__this_00->fields).max.fields = local_res10[0];
  (__this_00->fields).showValue = showValue;
  (__this_00->fields).action = value_00;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,value_00);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Callout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Callout (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_String_o* id, const MethodInfo* method);
// 0x1818c7500

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Callout
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,System_String_o *id,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_18434207c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgCalloutVariant);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0_Callout_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"callout");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_18434207c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *)0x0) {
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    (object->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(object->fields).text,text);
    local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgCalloutVariant;
    local_48.monitor = &g_data_ffffffffffffffff;
    local_38 = variant;
    pSVar1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    (object->fields).suffix = pSVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).suffix,pSVar1);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0_Callout_b__0,
               (MethodInfo *)0x0);
    pSVar1 = (object->fields).id;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (__this,"callout",(System_Action_AottgUi__o *)__this_00,pSVar1,layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return pGVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Checkbox
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Checkbox (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x1818c7720

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Checkbox
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *text,bool value,
          System_Action_GisketchActionContext__o *action,System_String_o *icon,System_String_o *tooltip,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_18434207d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
    il2cpp_codegen_initialize_runtime_metadata(&"checkbox");
    Il2CppMethodInitialized_18434207d = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Checkbox",id,text,value,action,"checkbox",icon,tooltip,
                      (MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Radio
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Radio (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x1818c9380

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Radio
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *text,bool value,
          System_Action_GisketchActionContext__o *action,System_String_o *icon,System_String_o *tooltip,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_18434207e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Radio");
    il2cpp_codegen_initialize_runtime_metadata(&"radio");
    Il2CppMethodInitialized_18434207e = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Radio",id,text,value,action,"radio",icon,tooltip,
                      (MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Switch
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Switch (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, bool value, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x1818caa60

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Switch
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,bool value,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_18434207f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"switch");
    il2cpp_codegen_initialize_runtime_metadata(&"Switch");
    Il2CppMethodInitialized_18434207f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Switch",id,
                      (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),value,action,
                      "switch",(System_String_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Toggle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Toggle (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* type, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* style, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x1818caf10

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Toggle
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *type,System_String_o *id,
          System_String_o *text,bool value,System_Action_GisketchActionContext__o *action,
          System_String_o *style,System_String_o *icon,System_String_o *tooltip,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184342080 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184342080 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = type;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,type);
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    (__this_00->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,text);
    pSVar2 = "false";
    if (value) {
      pSVar2 = "true";
    }
    (__this_00->fields).value = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar2);
    if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    (__this_00->fields).action = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,pSVar2);
    (__this_00->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
    (__this_00->fields).icon = icon;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).icon,icon);
    (__this_00->fields).tooltip = tooltip;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,tooltip);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Icon
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Icon (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* icon, System_String_o* style, System_String_o* id, const MethodInfo* method);
// 0x1818c8880

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Icon
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *icon,System_String_o *style,
          System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184342081 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_184342081 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "Icon";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Icon");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).icon,icon);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$IconButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__IconButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* icon, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818c8700

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__IconButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *icon,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184342082 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_184342082 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Button");
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    (__this_00->fields).icon = icon;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).icon,icon);
    (__this_00->fields).hasIcon = true;
    pSVar2 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,(MethodInfo *)0x0);
    (__this_00->fields).style = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,pSVar2);
    if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    (__this_00->fields).action = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,pSVar2);
    (__this_00->fields).tooltip = tooltip;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,tooltip);
    (__this_00->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Separator
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Separator (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818c9dc0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Separator
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184342083 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"separator");
    il2cpp_codegen_initialize_runtime_metadata(&"Divider");
    Il2CppMethodInitialized_184342083 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "Divider";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Divider");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).style = "separator";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"separator");
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x1818c7ac0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184342084 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_184342084 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (__this->fields)._children;
    if (pSVar1 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
  }
  return pGVar2;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x1818c7b80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown_18c7b80
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184342085 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_184342085 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).action = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action,value_00);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      return pGVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x1818c79c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown_18c79c0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184342086 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_184342086 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice_18c77c0
                     ("Dropdown",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).action = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action,value_00);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      return pGVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x1818c9c00

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184342087 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    Il2CppMethodInitialized_184342087 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (__this->fields)._children;
    if (pSVar1 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
  }
  return pGVar2;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x1818c9b00

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select_18c9b00
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184342088 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    Il2CppMethodInitialized_184342088 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).action = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action,value_00);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      return pGVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x1818c9cc0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select_18c9cc0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184342089 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    Il2CppMethodInitialized_184342089 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice_18c77c0
                     ("Select",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).action = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action,value_00);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      return pGVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Choice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Choice (System_String_o* type, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x1818c78b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Choice
          (System_String_o *type,System_String_o *id,System_String_o *value,System_String_array *options,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_18434208a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Il2CppMethodInitialized_18434208a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).type = type;
  Il2CppCodeGenWriteBarrier(&(__this->fields).type,type);
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
  (__this->fields).value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).value,value);
  (__this->fields).options = options;
  Il2CppCodeGenWriteBarrier(&(__this->fields).options,options);
  (__this->fields).maxVisibleItems = maxVisibleItems;
  if (type != (System_String_o *)0x0) {
    value_00 = System_String__ToLowerInvariant(type,(MethodInfo *)0x0);
    (__this->fields).style = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,value_00);
    (__this->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(__this->fields).enter,enter);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Choice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Choice (System_String_o* type, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x1818c77c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Choice_18c77c0
          (System_String_o *type,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_18434208b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Il2CppMethodInitialized_18434208b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).type = type;
  Il2CppCodeGenWriteBarrier(&(__this->fields).type,type);
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
  (__this->fields).value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).value,value);
  (__this->fields).choiceOptions = options;
  Il2CppCodeGenWriteBarrier(&(__this->fields).choiceOptions,options);
  (__this->fields).maxVisibleItems = maxVisibleItems;
  if (type != (System_String_o *)0x0) {
    value_00 = System_String__ToLowerInvariant(type,(MethodInfo *)0x0);
    (__this->fields).style = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,value_00);
    (__this->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(__this->fields).enter,enter);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$BuildDetached
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgUi__BuildDetached (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_Action_AottgUi__o* build, System_String_o* ownerId, const MethodInfo* method);
// 0x1818c6d50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_Action_AottgUi__o *build,System_String_o *ownerId,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar1;
  
  if (Il2CppMethodInitialized_18434208c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    Il2CppMethodInitialized_18434208c = '\x01';
  }
  if (ownerId == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,(MethodInfo *)0x0);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_01,(build->fields).method);
  }
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (Il2CppMethodInitialized_18434209a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      Il2CppMethodInitialized_18434209a = '\x01';
    }
    __this_00 = (__this_01->fields)._children;
    if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      pUVar1 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          (MethodInfo_929FE0 *)
                          MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pUVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormInput (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* placeholder, int32_t type, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_Action_GisketchActionContext__o* change, float debounceSeconds, int32_t maxCharacters, System_Action_GisketchActionContext__o* commit, System_String_o* key, const MethodInfo* method);
// 0x1818c8130

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
  
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                     (__this,id,placeholder,type,style,layout,enter,change,debounceSeconds,maxCharacters,
                      commit,(MethodInfo *)0x0);
  if (key == (System_String_o *)0x0) {
    key = id;
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).formKey = key;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formKey,key);
    (pGVar1->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formLabel,label);
    return pGVar1;
  }
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormTextArea
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormTextArea (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* placeholder, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxCharacters, System_String_o* key, const MethodInfo* method);
// 0x1818c8540

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormTextArea
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *placeholder,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxCharacters,System_String_o *key,
          MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *value;
  bool bVar2;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if (Il2CppMethodInitialized_184342079 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    Il2CppMethodInitialized_184342079 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "TextArea";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"TextArea");
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    (__this_00->fields).placeholder = placeholder;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).placeholder,placeholder);
    local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
    local_48.monitor = &g_data_ffffffffffffffff;
    local_38 = 0;
    value = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    (__this_00->fields).inputType = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).inputType,value);
    (__this_00->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
    (__this_00->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,layout);
    (__this_00->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
    bVar2 = Il2CppMethodInitialized_18434209b == '\0';
    (__this_00->fields).maxCharacters = maxCharacters;
    if (bVar2) {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      if (key == (System_String_o *)0x0) {
        key = id;
      }
      (__this_00->fields).formKey = key;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).formKey,key);
      (__this_00->fields).formLabel = label;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).formLabel,label);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormSelect
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormSelect (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, System_String_o* key, const MethodInfo* method);
// 0x1818c8220
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c82c4: jmp 0x1818c8387

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormSelect
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *value,System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *value_00;
  
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    if (Il2CppMethodInitialized_184342087 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Select");
      Il2CppMethodInitialized_184342087 = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                       ("Select",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    }
  }
  else {
    if (Il2CppMethodInitialized_184342088 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Select");
      Il2CppMethodInitialized_184342088 = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                       ("Select",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
    if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818c83ec;
    (pGVar2->fields).action = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action,value_00);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    if (key == (System_String_o *)0x0) {
      key = id;
    }
    (pGVar2->fields).formKey = key;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formKey,key);
    (pGVar2->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formLabel,label);
    return pGVar2;
  }
label_1818c83ec:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormSelect
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormSelect (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, System_String_o* key, const MethodInfo* method);
// 0x1818c8400

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormSelect_18c8400
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *value,Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184342089 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    Il2CppMethodInitialized_184342089 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice_18c77c0
                     ("Select",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).action = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action,value_00);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      if (key == (System_String_o *)0x0) {
        key = id;
      }
      (pGVar2->fields).formKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formKey,key);
      (pGVar2->fields).formLabel = label;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formLabel,label);
      return pGVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormDropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormDropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, System_String_o* key, const MethodInfo* method);
// 0x1818c7f50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c7ff4: jmp 0x1818c80b7

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormDropdown
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *value,System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *value_00;
  
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    if (Il2CppMethodInitialized_184342084 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
      Il2CppMethodInitialized_184342084 = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                       ("Dropdown",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    }
  }
  else {
    if (Il2CppMethodInitialized_184342085 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
      Il2CppMethodInitialized_184342085 = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                       ("Dropdown",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
    if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818c811c;
    (pGVar2->fields).action = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action,value_00);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    if (key == (System_String_o *)0x0) {
      key = id;
    }
    (pGVar2->fields).formKey = key;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formKey,key);
    (pGVar2->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formLabel,label);
    return pGVar2;
  }
label_1818c811c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormDropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormDropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, System_String_o* key, const MethodInfo* method);
// 0x1818c7e10

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormDropdown_18c7e10
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *label,
          System_String_o *value,Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,
          System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184342086 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_184342086 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Choice_18c77c0
                     ("Dropdown",id,value,options,enter,maxVisibleItems,(MethodInfo *)0x0);
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    value_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).action = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).action,value_00);
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (__this->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,pGVar2,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      if (key == (System_String_o *)0x0) {
        key = id;
      }
      (pGVar2->fields).formKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formKey,key);
      (pGVar2->fields).formLabel = label;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formLabel,label);
      return pGVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$FormDraft
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__FormDraft (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* key, System_String_o* value, System_String_o* label, System_String_o* id, const MethodInfo* method);
// 0x1818c7c80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__FormDraft
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *key,System_String_o *value,
          System_String_o *label,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_18434208d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"-form-draft");
    il2cpp_codegen_initialize_runtime_metadata(&"FormDraft");
    Il2CppMethodInitialized_18434208d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "FormDraft";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"FormDraft");
    bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
    if (bVar2) {
      id = System_String__Concat_1969e50(key,"-form-draft",(MethodInfo *)0x0);
    }
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    (__this_00->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,value);
    (__this_00->fields).active = false;
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_18434209b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        Il2CppMethodInitialized_18434209b = '\x01';
      }
      pSVar1 = (__this->fields)._children;
      if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        (__this_00->fields).formKey = key;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).formKey,key);
        (__this_00->fields).formLabel = label;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).formLabel,label);
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$TrackForm
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__TrackForm (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* key, System_String_o* label, const MethodInfo* method);
// 0x1818cb0a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__TrackForm
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *key,System_String_o *label,
          MethodInfo *method)

{
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).formKey = key;
    Il2CppCodeGenWriteBarrier(&(node->fields).formKey,key);
    (node->fields).formLabel = label;
    Il2CppCodeGenWriteBarrier(&(node->fields).formLabel,label);
    return node;
  }
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Image
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Image (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* style, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818c8970

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Image
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *style,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_18434208e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_18434208e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "Image";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Image");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,sprite);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
  (__this_00->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,layout);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SpriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* label, System_String_o* actionId, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818ca680

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *label,
          System_String_o *actionId,System_String_o *id,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_18434208f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_18434208f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "SpriteButton";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"SpriteButton");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).text = label;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,label);
  (__this_00->fields).sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,sprite);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
  (__this_00->fields).action = actionId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,actionId);
  (__this_00->fields).tooltip = label;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,label);
  (__this_00->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,layout);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SpriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* label, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818ca4f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SpriteButton_18ca4f0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *label,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    value = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                      ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_18434208f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_18434208f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "SpriteButton";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"SpriteButton");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).text = label;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,label);
  (__this_00->fields).sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,sprite);
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
  (__this_00->fields).action = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,value);
  (__this_00->fields).tooltip = label;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,label);
  (__this_00->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,layout);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$TextKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__TextKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* key, System_String_o* fallback, System_String_o* style, System_String_o* id, System_String_o* bindText, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818cac80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__TextKey
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *key,System_String_o *fallback,
          System_String_o *style,System_String_o *id,System_String_o *bindText,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342090 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342090 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text(__this,text,style,id,bindText,enter,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).textKey = key;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$ButtonKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ButtonKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* key, System_String_o* fallback, System_String_o* actionId, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x1818c6f10

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *key,
          System_String_o *fallback,System_String_o *actionId,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342091 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342091 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this,variant,text,actionId,id,tooltip,enter,icon,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).textKey = key;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$ButtonKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ButtonKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* key, System_String_o* fallback, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x1818c6e10

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_18c6e10
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *key,
          System_String_o *fallback,System_Action_GisketchActionContext__o *action,System_String_o *id,
          System_String_o *tooltip,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_String_o *icon,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342092 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342092 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this,variant,text,actionId,id,tooltip,enter,icon,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).textKey = key;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$InputFieldKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholderKey, System_String_o* placeholder, int32_t type, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_Action_GisketchActionContext__o* change, float debounceSeconds, int32_t maxCharacters, System_Action_GisketchActionContext__o* commit, const MethodInfo* method);
// 0x1818c8a90

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholderKey,
          System_String_o *placeholder,int32_t type,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_Action_GisketchActionContext__o *change,float debounceSeconds,int32_t maxCharacters,
          System_Action_GisketchActionContext__o *commit,MethodInfo *method)

{
  System_String_o *placeholder_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342093 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342093 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  placeholder_00 =
       Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(placeholderKey,placeholder,(MethodInfo *)0x0)
  ;
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                     (__this,id,placeholder_00,type,style,layout,enter,change,debounceSeconds,maxCharacters,
                      commit,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).textKey = placeholderKey;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,placeholderKey);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$CalloutKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__CalloutKey (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* key, System_String_o* fallback, System_String_o* id, const MethodInfo* method);
// 0x1818c71d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c7444: mov ebx, ebp
// asm:   0x1818c7446: mov ecx, ebp
// asm:   0x1818c7448: nop dword ptr [rax + rax]

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__CalloutKey
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *key,
          System_String_o *fallback,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  bool bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  uint uVar6;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_184342094 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_184342094 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434207c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgCalloutVariant);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0_Callout_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"callout");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_18434207c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
  (object->fields).text = pSVar4;
  Il2CppCodeGenWriteBarrier(&(object->fields).text,pSVar4);
  local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgCalloutVariant;
  local_48.monitor = &g_data_ffffffffffffffff;
  local_38 = variant;
  pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  (object->fields).suffix = pSVar4;
  Il2CppCodeGenWriteBarrier(&(object->fields).suffix,pSVar4);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0_Callout_b__0,
             (MethodInfo *)0x0);
  pSVar4 = (object->fields).id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar6 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                     (__this,"callout",(System_Action_AottgUi__o *)__this_00,pSVar4,layout,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     ((pGVar5->fields).children == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    return pGVar5;
  }
  while (pGVar1 = (pGVar5->fields).children,
        pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar6) {
      return pGVar5;
    }
    if ((uint)pGVar1->max_length <= uVar6) {
label_1818c74eb:
      ThrowIndexOutOfRangeException();
    }
    if ((pGVar1->m_Items[(int)uVar6] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (bVar3 = System_String__op_Equality
                          ((((pGVar5->fields).children)->m_Items[(int)uVar6]->fields).type,
                           "Text",(MethodInfo *)0x0), bVar3)) {
      pGVar1 = (pGVar5->fields).children;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
      if ((uint)pGVar1->max_length <= uVar6) goto label_1818c74eb;
      pGVar2 = pGVar1->m_Items[(int)uVar6];
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      (pGVar2->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,key);
    }
    uVar6 = uVar6 + 1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$SearchKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SearchKey (System_String_o* titleKey, System_String_o* fallbackTitle, System_String_o* keywords, bool hidden, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x1818c9810

Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SearchKey
          (System_String_o *titleKey,System_String_o *fallbackTitle,System_String_o *keywords,bool hidden,
          System_String_o *icon,System_String_o *kind,System_String_o *sectionId,System_String_o *sectionTitle
          ,bool autoAddKeywords,MethodInfo *method)

{
  System_String_o *title;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342095 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342095 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(titleKey,fallbackTitle,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Search
                     (title,keywords,hidden,icon,kind,sectionId,sectionTitle,autoAddKeywords,(MethodInfo *)0x0
                     );
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$SearchPalette
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SearchPalette (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, System_String_o* scopeScreenId, bool showFullPath, System_String_array* extraScopeScreenIds, const MethodInfo* method);
// 0x1818c98d0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SearchPalette
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          System_String_o *scopeScreenId,bool showFullPath,System_String_array *extraScopeScreenIds,
          MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184342096 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"SearchPalette");
    il2cpp_codegen_initialize_runtime_metadata(&"searchPalette");
    Il2CppMethodInitialized_184342096 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "SearchPalette";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"SearchPalette");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).placeholder = placeholder;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).placeholder,placeholder);
  (__this_00->fields).style = "searchPalette";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"searchPalette");
  (__this_00->fields).searchScopeScreenId = scopeScreenId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).searchScopeScreenId,scopeScreenId);
  (__this_00->fields).searchScopeScreenIds = extraScopeScreenIds;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).searchScopeScreenIds,extraScopeScreenIds);
  bVar2 = Il2CppMethodInitialized_18434209b == '\0';
  (__this_00->fields).searchShowFullPath = showFullPath;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Search
// il2cpp: Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Search (System_String_o* title, System_String_o* keywords, bool hidden, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x1818c9a10

Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Search
          (System_String_o *title,System_String_o *keywords,bool hidden,System_String_o *icon,
          System_String_o *kind,System_String_o *sectionId,System_String_o *sectionTitle,bool autoAddKeywords,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184342097 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    Il2CppMethodInitialized_184342097 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    (__this->fields).title = title;
    Il2CppCodeGenWriteBarrier(&(__this->fields).title,title);
    (__this->fields).keywords = keywords;
    Il2CppCodeGenWriteBarrier(&(__this->fields).keywords,keywords);
    (__this->fields).hidden = hidden;
    (__this->fields).icon = icon;
    Il2CppCodeGenWriteBarrier(&(__this->fields).icon,icon);
    (__this->fields).kind = kind;
    Il2CppCodeGenWriteBarrier(&(__this->fields).kind,kind);
    (__this->fields).sectionId = sectionId;
    Il2CppCodeGenWriteBarrier(&(__this->fields).sectionId,sectionId);
    (__this->fields).sectionTitle = sectionTitle;
    Il2CppCodeGenWriteBarrier(&(__this->fields).sectionTitle,sectionTitle);
    (__this->fields).autoAddKeywords = autoAddKeywords;
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___ctor (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* ownerId, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818cb220

void Gisketch_Aottg2UI_Code_AottgUi___ctor
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *ownerId,
               Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  
  if (Il2CppMethodInitialized_184342098 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    Il2CppMethodInitialized_184342098 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
  (__this->fields)._children = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._children,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._ownerId = ownerId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ownerId,ownerId);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions,actions);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$get_HasChildren
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgUi__get_HasChildren (Gisketch_Aottg2UI_Code_AottgUi_o* __this, const MethodInfo* method);
// 0x1818cb2c0

bool Gisketch_Aottg2UI_Code_AottgUi__get_HasChildren
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  
  if (Il2CppMethodInitialized_184342099 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Count);
    Il2CppMethodInitialized_184342099 = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$ToArray
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgUi__ToArray (Gisketch_Aottg2UI_Code_AottgUi_o* __this, const MethodInfo* method);
// 0x1818caec0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgUi__ToArray(Gisketch_Aottg2UI_Code_AottgUi_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar1;
  
  if (Il2CppMethodInitialized_18434209a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    Il2CppMethodInitialized_18434209a = '\x01';
  }
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    pUVar1 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                       ((System_Collections_Generic_List_T__o *)__this_00,
                        (MethodInfo_929FE0 *)
                        MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pUVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Add
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Add (Gisketch_Aottg2UI_Code_AottgUi_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818c6cf0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Add
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (__this->fields)._children;
    if (pSVar1 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_runtime_helper_180012890(pSVar1,node,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
  }
  return node;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Component
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi__Component (Gisketch_Aottg2UI_Code_AottgUi_o* __this, Gisketch_Aottg2UI_Code_AottgComponent_o* component, const MethodInfo* method);
// 0x1818c79a0

void Gisketch_Aottg2UI_Code_AottgUi__Component
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,Gisketch_Aottg2UI_Code_AottgComponent_o *component,
               MethodInfo *method)

{
  if (component != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
    (*(component->klass->vtable)._4_Build.methodPtr)
              (component,__this,(component->klass->vtable)._4_Build.method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Panel
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Panel (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818c90a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Panel
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,System_Action_AottgUi__o *build,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  System_String_o *ownerId;
  
  if (Il2CppMethodInitialized_18434209c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_18434209c = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_00,ownerId,actions,(MethodInfo *)0x0);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_00,(build->fields).method);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_01->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).type = "Panel";
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"Panel");
  (__this_01->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).id,id);
  (__this_01->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,style);
  (__this_01->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,layout);
  (__this_01->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).enter,enter);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (Il2CppMethodInitialized_18434209a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      Il2CppMethodInitialized_18434209a = '\x01';
    }
    pSVar1 = (__this_00->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                        ((System_Collections_Generic_List_T__o *)pSVar1,
                         (MethodInfo_929FE0 *)
                         MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      (__this_01->fields).children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)value;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).children,value);
      if (Il2CppMethodInitialized_18434209b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        Il2CppMethodInitialized_18434209b = '\x01';
      }
      pSVar1 = (__this->fields)._children;
      if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar1,__this_01,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Text
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Text (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* text, System_String_o* style, System_String_o* id, System_String_o* bindText, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818cad40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Text
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *text,System_String_o *style,
          System_String_o *id,System_String_o *bindText,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_18434209d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_18434209d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Text");
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    (__this_00->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,text);
    (__this_00->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
    bVar2 = System_String__IsNullOrEmpty(bindText,(MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
    }
    else {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818caeba;
      (__this_01->fields).text = bindText;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).text,bindText);
    }
    (__this_00->fields).bind = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bind,__this_01);
    (__this_00->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_18434209b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        Il2CppMethodInitialized_18434209b = '\x01';
      }
      pSVar1 = (__this->fields)._children;
      if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        return __this_00;
      }
    }
  }
label_1818caeba:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Button (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_String_o* actionId, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x1818c7060

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Button
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_String_o *actionId,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_18434209e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_18434209e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "Button";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Button");
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,text);
  (__this_00->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).icon,icon);
  bVar2 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  (__this_00->fields).hasIcon = !bVar2;
  value = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,(MethodInfo *)0x0);
  (__this_00->fields).style = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,value);
  (__this_00->fields).action = actionId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,actionId);
  (__this_00->fields).tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,tooltip);
  (__this_00->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Button (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x1818c6fe0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this,variant,text,actionId,id,tooltip,enter,icon,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$InputField
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__InputField (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, int32_t type, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_Action_GisketchActionContext__o* change, float debounceSeconds, int32_t maxCharacters, System_Action_GisketchActionContext__o* commit, const MethodInfo* method);
// 0x1818c8b90

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__InputField
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          int32_t type,System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_Action_GisketchActionContext__o *change,float debounceSeconds,int32_t maxCharacters,
          System_Action_GisketchActionContext__o *commit,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  System_Nullable_float__Fields SVar3;
  System_Nullable_float__Fields local_48;
  System_Enum_o local_40;
  int32_t local_30;
  
  if (Il2CppMethodInitialized_18434209f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    Il2CppMethodInitialized_18434209f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "InputField";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"InputField");
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    (__this_00->fields).placeholder = placeholder;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).placeholder,placeholder);
    local_40.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
    local_40.monitor = &g_data_ffffffffffffffff;
    local_30 = type;
    pSVar2 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    (__this_00->fields).inputType = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).inputType,pSVar2);
    (__this_00->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
    (__this_00->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,layout);
    (__this_00->fields).enter = enter;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter,enter);
    (__this_00->fields).maxCharacters = maxCharacters;
    if ((change == (System_Action_GisketchActionContext__o *)0x0) ||
       ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,change,(MethodInfo *)0x0);
    }
    (__this_00->fields).action = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,pSVar2);
    if ((commit == (System_Action_GisketchActionContext__o *)0x0) ||
       ((__this->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         ((__this->fields)._actions,(__this->fields)._ownerId,commit,(MethodInfo *)0x0);
    }
    (__this_00->fields).commitAction = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).commitAction,pSVar2);
    SVar3.hasValue = false;
    SVar3._1_3_ = 0;
    SVar3.value = 0.0;
    if (change != (System_Action_GisketchActionContext__o *)0x0) {
      local_48.hasValue = false;
      local_48._1_3_ = 0;
      local_48.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_48,debounceSeconds,
                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
      SVar3 = local_48;
    }
    (__this_00->fields).debounceSeconds.fields = SVar3;
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_18434209b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        Il2CppMethodInitialized_18434209b = '\x01';
      }
      pSVar1 = (__this->fields)._children;
      if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        return __this_00;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$ScrollView
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ScrollView (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* contentLayout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818c9630

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ScrollView
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,System_Action_AottgUi__o *build,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  System_String_o *ownerId;
  
  if (Il2CppMethodInitialized_1843420a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_1843420a0 = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_00,ownerId,actions,(MethodInfo *)0x0);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_00,(build->fields).method);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_01->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).type = "ScrollView";
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"ScrollView");
  (__this_01->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).id,id);
  (__this_01->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,style);
  (__this_01->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,layout);
  (__this_01->fields).contentLayout = contentLayout;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).contentLayout,contentLayout);
  (__this_01->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).enter,enter);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (Il2CppMethodInitialized_18434209a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      Il2CppMethodInitialized_18434209a = '\x01';
    }
    pSVar1 = (__this_00->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                        ((System_Collections_Generic_List_T__o *)pSVar1,
                         (MethodInfo_929FE0 *)
                         MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      (__this_01->fields).children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)value;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).children,value);
      if (Il2CppMethodInitialized_18434209b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        Il2CppMethodInitialized_18434209b = '\x01';
      }
      pSVar1 = (__this->fields)._children;
      if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar1,__this_01,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$ScaleBox
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ScaleBox (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, float referenceWidth, float referenceHeight, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* contentLayout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x1818c9420

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,float referenceWidth,
          float referenceHeight,System_Action_AottgUi__o *build,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  System_String_o *ownerId;
  
  if (Il2CppMethodInitialized_1843420a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleBox");
    Il2CppMethodInitialized_1843420a1 = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_00,ownerId,actions,(MethodInfo *)0x0);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_00,(build->fields).method);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_01->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).type = "ScaleBox";
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"ScaleBox");
  (__this_01->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).id,id);
  (__this_01->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,style);
  (__this_01->fields).layout = layout;
  (__this_01->fields).referenceWidth = referenceWidth;
  (__this_01->fields).referenceHeight = referenceHeight;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,layout);
  (__this_01->fields).contentLayout = contentLayout;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).contentLayout,contentLayout);
  (__this_01->fields).enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).enter,enter);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (Il2CppMethodInitialized_18434209a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      Il2CppMethodInitialized_18434209a = '\x01';
    }
    pSVar1 = (__this_00->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                        ((System_Collections_Generic_List_T__o *)pSVar1,
                         (MethodInfo_929FE0 *)
                         MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      (__this_01->fields).children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)value;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).children,value);
      if (Il2CppMethodInitialized_18434209b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        Il2CppMethodInitialized_18434209b = '\x01';
      }
      pSVar1 = (__this->fields)._children;
      if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar1,__this_01,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Stepper
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Stepper (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, Gisketch_Aottg2UI_Code_AottgStepperStep_array* steps, const MethodInfo* method);
// 0x1818ca7e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ca89d: mov rdx, r15

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Stepper
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,
          Gisketch_Aottg2UI_Code_AottgStepperStep_array *steps,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar4;
  
  if (Il2CppMethodInitialized_1843420a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Stepper");
    Il2CppMethodInitialized_1843420a2 = '\x01';
  }
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0;
  value = pGVar4;
  if (steps != (Gisketch_Aottg2UI_Code_AottgStepperStep_array *)0x0) {
    value = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array,
                       (uint32_t)steps->max_length);
    pGVar3 = pGVar4;
    while (uVar2 = (uint)pGVar3, (int)uVar2 < (int)steps->max_length) {
      if ((uint)steps->max_length <= uVar2) {
label_1818caa55:
        ThrowIndexOutOfRangeException();
      }
      pGVar3 = pGVar4;
      if (steps->m_Items[(int)uVar2] != (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)
                 Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
                           (steps->m_Items[(int)uVar2],(MethodInfo *)0x0);
      }
      if (value == (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) goto label_1818caa4f;
      if (*(uint *)&value->max_length <= uVar2) goto label_1818caa55;
      value->m_Items[(int)uVar2] = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)pGVar3;
      Il2CppCodeGenWriteBarrier(value->m_Items + (int)uVar2,pGVar3);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)(ulonglong)(uVar2 + 1);
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "Stepper";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Stepper");
  (__this_00->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
  value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
  (__this_00->fields).layout = value_00;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value_00);
  (__this_00->fields).steps = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).steps,value);
  if (Il2CppMethodInitialized_18434209b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_18434209b = '\x01';
  }
  pSVar1 = (__this->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    return __this_00;
  }
label_1818caa4f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Layout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Layout (System_String_o* direction, System_String_o* justify, System_String_o* alignItems, System_String_o* alignSelf, System_String_o* wrap, float gap, Gisketch_Aottg2UI_Data_GisketchLength_o* width, Gisketch_Aottg2UI_Data_GisketchLength_o* height, Gisketch_Aottg2UI_Data_GisketchLength_o* minWidth, Gisketch_Aottg2UI_Data_GisketchLength_o* minHeight, Gisketch_Aottg2UI_Data_GisketchLength_o* maxWidth, Gisketch_Aottg2UI_Data_GisketchLength_o* maxHeight, float padding, float paddingX, float paddingY, float paddingLeft, float paddingRight, float paddingTop, float paddingBottom, float offsetX, float offsetY, float grow, float shrink, const MethodInfo* method);
// 0x1818c8df0

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
  
  if (Il2CppMethodInitialized_1843420a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    Il2CppMethodInitialized_1843420a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  (__this->fields).shrink = 1.0;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).direction = direction;
  Il2CppCodeGenWriteBarrier(&(__this->fields).direction,direction);
  (__this->fields).justify = justify;
  Il2CppCodeGenWriteBarrier(&(__this->fields).justify,justify);
  (__this->fields).alignItems = alignItems;
  Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems,alignItems);
  (__this->fields).alignSelf = alignSelf;
  Il2CppCodeGenWriteBarrier(&(__this->fields).alignSelf,alignSelf);
  (__this->fields).wrap = wrap;
  Il2CppCodeGenWriteBarrier(&(__this->fields).wrap,wrap);
  (__this->fields).gap = gap;
  (__this->fields).width = width;
  Il2CppCodeGenWriteBarrier(&(__this->fields).width,width);
  (__this->fields).height = height;
  Il2CppCodeGenWriteBarrier(&(__this->fields).height,height);
  (__this->fields).minWidth = minWidth;
  Il2CppCodeGenWriteBarrier(&(__this->fields).minWidth,minWidth);
  (__this->fields).minHeight = minHeight;
  Il2CppCodeGenWriteBarrier(&(__this->fields).minHeight,minHeight);
  (__this->fields).maxWidth = maxWidth;
  Il2CppCodeGenWriteBarrier(&(__this->fields).maxWidth,maxWidth);
  (__this->fields).maxHeight = maxHeight;
  Il2CppCodeGenWriteBarrier(&(__this->fields).maxHeight,maxHeight);
  (__this->fields).padding = padding;
  (__this->fields).paddingY = paddingY;
  (__this->fields).paddingX = paddingX;
  (__this->fields).paddingRight = paddingRight;
  (__this->fields).paddingLeft = paddingLeft;
  (__this->fields).paddingBottom = paddingBottom;
  (__this->fields).paddingTop = paddingTop;
  (__this->fields).offsetY = offsetY;
  (__this->fields).offsetX = offsetX;
  (__this->fields).shrink = shrink;
  (__this->fields).grow = grow;
  return __this;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Motion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Motion (System_String_o* preset, System_String_o* group, float duration, float delay, float stagger, int32_t order, const MethodInfo* method);
// 0x1818c8fe0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Motion
          (System_String_o *preset,System_String_o *group,float duration,float delay,float stagger,
          int32_t order,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this;
  
  if (Il2CppMethodInitialized_1843420a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
    Il2CppMethodInitialized_1843420a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    (__this->fields).preset = preset;
    Il2CppCodeGenWriteBarrier(&(__this->fields).preset,preset);
    (__this->fields).group = group;
    Il2CppCodeGenWriteBarrier(&(__this->fields).group,group);
    (__this->fields).order = order;
    (__this->fields).duration = duration;
    (__this->fields).delay = delay;
    (__this->fields).stagger = stagger;
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Points
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Code_AottgUi__Points (float value, const MethodInfo* method);
// 0x1818c92f0

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Code_AottgUi__Points(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_1843420a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_1843420a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "point";
    Il2CppCodeGenWriteBarrier(&(__this->fields).unit,"point");
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$Percent
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Code_AottgUi__Percent (float value, const MethodInfo* method);
// 0x1818c9260

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Code_AottgUi__Percent(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_1843420a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_1843420a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this->fields).unit,"percent");
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgUi$$VariantStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgUi__VariantStyle (int32_t variant, const MethodInfo* method);
// 0x1818cb100

System_String_o * Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(int32_t variant,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843420a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"buttonSecondary");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPlain");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonWorkshop");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonDanger");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonHeaderTab");
    Il2CppMethodInitialized_1843420a7 = '\x01';
  }
  switch(variant) {
  case 1:
    return "buttonSecondary";
  case 2:
    return "buttonWorkshop";
  case 3:
    return "buttonQuiet";
  case 4:
    return "buttonHeaderTab";
  case 5:
    return "buttonPlain";
  case 6:
    return "buttonDanger";
  case 7:
    return "buttonNegative";
  default:
    return "buttonPrimary";
  }
}


