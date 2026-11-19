// Type: CustomLogic.CustomLogicUIBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUIBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicUIBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicUIBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUIBuiltin_o* CustomLogic_CustomLogicUIBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b0d6e0

CustomLogic_CustomLogicUIBuiltin_o *
CustomLogic_CustomLogicUIBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicUIBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07547033 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547033 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicUIBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  if (Il2CppMethodInitialized_07547001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07547001 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b12410

void CustomLogic_CustomLogicUIBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547065 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b12480

void CustomLogic_CustomLogicUIBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabel>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabel_b__5_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12490
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1253f: cmp byte ptr [rip + 0x1a34ac3], 0
// asm:   0x5b12546: je 0x5b12581

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabel_b__5_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_07547066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547066 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      if (Il2CppMethodInitialized_07547009 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
        Il2CppMethodInitialized_07547009 = '\x01';
        uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__SetLabel(label,message,0.0,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelForTime>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTime_b__6_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b125c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b126a2: cmp byte ptr [rip + 0x1a34961], 0
// asm:   0x5b126a9: je 0x5b126eb

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTime_b__6_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  float time;
  
  if (Il2CppMethodInitialized_07547067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547067 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (((__a->max_length & 0xfffffffe) != 0) &&
       (message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string),
       2 < (uint)__a->max_length)) {
      time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (__a->m_Items[2],
                        (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      if (Il2CppMethodInitialized_0754700a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
        Il2CppMethodInitialized_0754700a = '\x01';
        uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__SetLabel(label,message,time,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelAll>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelAll_b__7_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12730

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelAll_b__7_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547068 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547068 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      method_00 = extraout_RDX;
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicUIBuiltin__SetLabelAll(label,message,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelForTimeAll>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTimeAll_b__8_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12800

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTimeAll_b__8_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float time;
  
  if (Il2CppMethodInitialized_07547069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547069 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (2 < (uint)__a->max_length) {
        time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[2],
                          (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        method_00 = extraout_RDX;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          method_00 = extraout_RDX_00;
        }
        CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll(label,message,time,method_00);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreatePopup>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__CreatePopup_b__9_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12910

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__CreatePopup_b__9_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t width;
  int32_t height;
  System_String_o *pSVar1;
  System_String_o *title;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_0754706a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754706a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      title = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        width = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (__a->m_Items[2],
                           (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        if ((__a->max_length & 0xfffffffc) != 0) {
          height = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (__a->m_Items[3],
                              (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
          ;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          pSVar1 = CustomLogic_CustomLogicUIBuiltin__CreatePopup(pSVar1,title,width,height,in_R8);
          return (Il2CppObject *)pSVar1;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowPopup>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowPopup_b__10_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12a30

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowPopup_b__10_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754706b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754706b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  popupName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__ShowPopup(popupName,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__HidePopup>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__HidePopup_b__11_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12ae0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__HidePopup_b__11_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754706c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754706c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  popupName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__HidePopup(popupName,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearPopup>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ClearPopup_b__12_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12b90

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ClearPopup_b__12_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754706d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754706d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  popupName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__ClearPopup(popupName,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupLabel>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupLabel_b__13_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12c40

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupLabel_b__13_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  System_String_o *label;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754706e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754706e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    popupName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      method_00 = extraout_RDX;
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicUIBuiltin__AddPopupLabel(popupName,label,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupButton>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButton_b__14_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12d10

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButton_b__14_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  System_String_o *callback;
  System_String_o *label;
  
  if (Il2CppMethodInitialized_0754706f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754706f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    popupName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                           );
      if (2 < (uint)__a->max_length) {
        label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[2],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
        ;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        }
        CustomLogic_CustomLogicUIBuiltin__AddPopupButton(popupName,callback,label,method);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupBottomButton>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupBottomButton_b__15_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12e10

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupBottomButton_b__15_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  System_String_o *callback;
  System_String_o *label;
  
  if (Il2CppMethodInitialized_07547070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547070 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    popupName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                           );
      if (2 < (uint)__a->max_length) {
        label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[2],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
        ;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        }
        CustomLogic_CustomLogicUIBuiltin__AddPopupBottomButton(popupName,callback,label,method);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupButtons>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButtons_b__16_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b12f10

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButtons_b__16_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  CustomLogic_CustomLogicListBuiltin_o *callbacks;
  CustomLogic_CustomLogicListBuiltin_o *labels;
  
  if (Il2CppMethodInitialized_07547071 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547071 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    popupName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      callbacks = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
      if (2 < (uint)__a->max_length) {
        labels = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[2],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        }
        CustomLogic_CustomLogicUIBuiltin__AddPopupButtons(popupName,callbacks,labels,method);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__WrapStyleTag>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__WrapStyleTag_b__17_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b130de: jmp 0x5b13118

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__WrapStyleTag_b__17_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o *style;
  System_String_o *arg;
  
  if (Il2CppMethodInitialized_07547072 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547072 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      style = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((int)__a->max_length < 3) {
        arg = (System_String_o *)0x0;
        uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
      }
      else {
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        arg = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      pSVar3 = CustomLogic_CustomLogicUIBuiltin__WrapStyleTag(pSVar3,style,arg,method);
      return (Il2CppObject *)pSVar3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowChangeCharacterMenu>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowChangeCharacterMenu_b__18_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13140

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowChangeCharacterMenu_b__18_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07547073 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547073 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin;
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin = (CustomLogic_CustomLogicUIBuiltin_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu((MethodInfo *)klass);
    return (Il2CppObject *)0x0;
  }
  CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu((MethodInfo *)klass);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScoreboardHeader>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardHeader_b__19_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b131a0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardHeader_b__19_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547074 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547074 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_05b132c4;
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    if (Il2CppMethodInitialized_07547017 != '\0') goto label_05b1323b;
label_05b13286:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547017 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07547017 == '\0') goto label_05b13286;
label_05b1323b:
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar2->fields).ScoreboardHeader = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pCVar2->fields).ScoreboardHeader);
    return (Il2CppObject *)0x0;
  }
label_05b132c4:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScoreboardProperty>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardProperty_b__20_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b132d0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardProperty_b__20_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *property;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547075 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  property = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__SetScoreboardProperty(property,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetThemeColor>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetThemeColor_b__21_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13380

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetThemeColor_b__21_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *panel;
  System_String_o *category;
  System_String_o *item;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547076 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547076 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    panel = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      category = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                           );
      if (2 < (uint)__a->max_length) {
        item = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        }
        pCVar1 = CustomLogic_CustomLogicUIBuiltin__GetThemeColor(panel,category,item,method);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPopupActive>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__IsPopupActive_b__22_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13470

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__IsPopupActive_b__22_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_String_o *popupName;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07547077 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547077 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  popupName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  local_9 = CustomLogic_CustomLogicUIBuiltin__IsPopupActive(popupName,method_00);
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar1;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelActive>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelActive_b__23_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13540

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelActive_b__23_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  System_String_o *label;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547078 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                         (__a->m_Items[1],
                          (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX;
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicUIBuiltin__SetLabelActive(label,active,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelBackgroundColor>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelBackgroundColor_b__24_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13620

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelBackgroundColor_b__24_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547079 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547079 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
      method_00 = extraout_RDX;
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColor(label,color,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelBackgroundColorAll>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelBackgroundColorAll_b__25_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13700

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelBackgroundColorAll_b__25_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754707a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754707a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin;
  color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColorAll(color,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKDRPanelActive>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetKDRPanelActive_b__26_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b137b0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetKDRPanelActive_b__26_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754707b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754707b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__SetKDRPanelActive(active,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetMinimapActive>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetMinimapActive_b__27_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13860

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetMinimapActive_b__27_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754707c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754707c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__SetMinimapActive(active,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetChatPanelActive>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetChatPanelActive_b__28_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13910

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetChatPanelActive_b__28_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754707d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754707d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__SetChatPanelActive(active,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFeedPanelActive>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetFeedPanelActive_b__29_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b139c0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetFeedPanelActive_b__29_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754707e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754707e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__SetFeedPanelActive(active,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBottomHUDActive>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetBottomHUDActive_b__30_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13a70

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetBottomHUDActive_b__30_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754707f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754707f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__SetBottomHUDActive(active,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetRootVisualElement>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetRootVisualElement_b__31_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13b20

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetRootVisualElement_b__31_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07547080 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547080 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin;
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin = (CustomLogic_CustomLogicUIBuiltin_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement((MethodInfo *)klass);
    return (Il2CppObject *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement((MethodInfo *)klass);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__VisualElement>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__VisualElement_b__32_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13b80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b13ba8: cmp byte ptr [rip + 0x1a33476], 0
// asm:   0x5b13c52: jmp 0x5b13bd0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__VisualElement_b__32_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07547081 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547081 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_VisualElement);
    Il2CppMethodInitialized_07547025 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_01,__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Button>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Button_b__33_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b13d42: jmp 0x5b13d63

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Button_b__33_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  System_String_o *text;
  CustomLogic_UserMethod_o *clickEvent;
  CustomLogic_CustomLogicButtonBuiltin_o *pCVar3;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  System_Object_array *method_00;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547082 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547082 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__a->max_length == 0) {
    text = "";
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    text = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    method_00 = extraout_RDX_00;
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      clickEvent = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (pIVar2,(MethodInfo_34BDE00 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
      uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
      method_00 = extraout_RDX_01;
      goto joined_r0x05b13d61;
    }
  }
  clickEvent = (CustomLogic_UserMethod_o *)0x0;
  uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
joined_r0x05b13d61:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    method_00 = extraout_RDX_02;
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__Button(text,clickEvent,(MethodInfo *)method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Label>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Label_b__34_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13d90

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Label_b__34_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  System_String_o *text;
  CustomLogic_CustomLogicLabelBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_07547083 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547083 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__a->max_length == 0) {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    text = "";
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __c = (CustomLogic_CustomLogicUIBuiltin_o *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
    text = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__Label(text,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__Label(text,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextField>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__TextField_b__35_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13e70

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__TextField_b__35_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  System_String_o *label;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_07547084 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547084 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__a->max_length == 0) {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    label = "";
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __c = (CustomLogic_CustomLogicUIBuiltin_o *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__TextField(label,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__TextField(label,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Toggle>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Toggle_b__36_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b13f50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b14032: jmp 0x5b14053

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Toggle_b__36_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  System_String_o *label;
  CustomLogic_UserMethod_o *valueChangedEvent;
  CustomLogic_CustomLogicToggleBuiltin_o *pCVar3;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  System_Object_array *method_00;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547085 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547085 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__a->max_length == 0) {
    label = "";
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    method_00 = extraout_RDX_00;
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      valueChangedEvent =
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
      uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
      method_00 = extraout_RDX_01;
      goto joined_r0x05b14051;
    }
  }
  valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
  uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
joined_r0x05b14051:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    method_00 = extraout_RDX_02;
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__Toggle(label,valueChangedEvent,(MethodInfo *)method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slider>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Slider_b__37_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b14080
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1416d: jmp 0x5b14187
// asm:   0x5b1429e: movss xmm2, dword ptr [rsp + 0xc]
// asm:   0x5b142a4: movss xmm1, dword ptr [rsp + 8]
// asm:   0x5b142c7: jmp 0x5b14187

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Slider_b__37_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar3;
  System_String_o *label;
  CustomLogic_UserMethod_o *valueChangedEvent;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  System_Object_array *extraout_RDX_03;
  System_Object_array *extraout_RDX_04;
  System_Object_array *extraout_RDX_05;
  System_Object_array *method_00;
  float lowValue;
  float highValue;
  float tickInterval;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547086 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547086 = '\x01';
    method_00 = extraout_RDX;
  }
  label = "";
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  tickInterval = 0.0;
  highValue = 100.0;
  if (__a->max_length == 0) {
    valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
    lowValue = 0.0;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    lowValue = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (pIVar2,(MethodInfo_34BDFE0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
      tickInterval = 0.0;
      highValue = 100.0;
      uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
      method_00 = extraout_RDX_00;
    }
    else {
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      highValue = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (pIVar2,(MethodInfo_34BDFE0 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((int)__a->max_length < 3) {
        valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
        tickInterval = 0.0;
        method_00 = extraout_RDX_02;
      }
      else {
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        tickInterval = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 (pIVar2,(MethodInfo_34BDFE0 *)
                                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((int)__a->max_length < 4) {
          valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
          method_00 = extraout_RDX_03;
        }
        else {
          pIVar2 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar2,(MethodInfo_34BDE00 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if ((int)__a->max_length < 5) {
            valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
            method_00 = extraout_RDX_04;
          }
          else {
            pIVar2 = __a->m_Items[4];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            valueChangedEvent =
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar2,(MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
            method_00 = extraout_RDX_05;
          }
        }
      }
      uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    }
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    method_00 = extraout_RDX_01;
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__Slider
                     (lowValue,highValue,tickInterval,label,valueChangedEvent,(MethodInfo *)method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SliderInt>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SliderInt_b__38_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b142e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1442e: jmp 0x5b14448
// asm:   0x5b144ee: jmp 0x5b14448

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SliderInt_b__38_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  int32_t lowValue;
  int32_t highValue;
  int32_t tickInterval;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar3;
  System_String_o *label;
  CustomLogic_UserMethod_o *valueChangedEvent;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547087 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547087 = '\x01';
  }
  label = "";
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  tickInterval = 1;
  highValue = 100;
  if (__a->max_length == 0) {
    lowValue = 0;
label_05b14433:
    valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    lowValue = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                         (pIVar2,(MethodInfo_34BDC20 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      highValue = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (pIVar2,(MethodInfo_34BDC20 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (2 < (int)__a->max_length) {
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        tickInterval = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                                 (pIVar2,(MethodInfo_34BDC20 *)
                                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        if (3 < (int)__a->max_length) {
          pIVar2 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar2,(MethodInfo_34BDE00 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (4 < (int)__a->max_length) {
            pIVar2 = __a->m_Items[4];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            valueChangedEvent =
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar2,(MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
            uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
            goto joined_r0x05b14446;
          }
          goto label_05b14433;
        }
      }
    }
    valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
joined_r0x05b14446:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__SliderInt
                     (lowValue,highValue,tickInterval,label,valueChangedEvent,in_R9);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dropdown>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Dropdown_b__39_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b14500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b146a9: jmp 0x5b14647

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Dropdown_b__39_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  int32_t defaultIndex;
  CustomLogic_CustomLogicListBuiltin_o *choices;
  System_String_o *label;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar3;
  CustomLogic_UserMethod_o *valueChangedEvent;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547088 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547088 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar2 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  choices = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  label = "";
  if ((int)__a->max_length < 2) {
    defaultIndex = 0;
  }
  else {
    pIVar2 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    defaultIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (pIVar2,(MethodInfo_34BDC20 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (2 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (3 < (int)__a->max_length) {
        pIVar2 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        valueChangedEvent =
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
        uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
        goto joined_r0x05b146a7;
      }
    }
  }
  valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
  uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
joined_r0x05b146a7:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__Dropdown(choices,defaultIndex,label,valueChangedEvent,in_R8);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ProgressBar>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ProgressBar_b__40_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b146c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b147a7: jmp 0x5b147c1
// asm:   0x5b14891: movss xmm1, dword ptr [rsp + 0xc]
// asm:   0x5b148b4: jmp 0x5b147c1

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ProgressBar_b__40_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicProgressBarBuiltin_o *pCVar3;
  System_String_o *title;
  CustomLogic_UserMethod_o *valueChangedEvent;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  System_Object_array *extraout_RDX_03;
  System_Object_array *extraout_RDX_04;
  System_Object_array *method_00;
  float lowValue;
  float highValue;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547089 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547089 = '\x01';
    method_00 = extraout_RDX;
  }
  title = "";
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  highValue = 100.0;
  if (__a->max_length == 0) {
    lowValue = 0.0;
    valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    lowValue = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (pIVar2,(MethodInfo_34BDFE0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
      highValue = 100.0;
      uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
      method_00 = extraout_RDX_00;
    }
    else {
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      highValue = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (pIVar2,(MethodInfo_34BDFE0 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((int)__a->max_length < 3) {
        valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
        method_00 = extraout_RDX_02;
      }
      else {
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        title = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if ((int)__a->max_length < 4) {
          valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
          method_00 = extraout_RDX_03;
        }
        else {
          pIVar2 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          valueChangedEvent =
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
          method_00 = extraout_RDX_04;
        }
      }
      uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    }
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    method_00 = extraout_RDX_01;
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__ProgressBar
                     (lowValue,highValue,title,valueChangedEvent,(MethodInfo *)method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollView>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ScrollView_b__41_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b148d0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ScrollView_b__41_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754708a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754708a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin;
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin = (CustomLogic_CustomLogicUIBuiltin_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__ScrollView((MethodInfo *)klass);
    return (Il2CppObject *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__ScrollView((MethodInfo *)klass);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Icon>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Icon_b__42_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b14930

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Icon_b__42_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  System_String_o *iconPath;
  CustomLogic_CustomLogicIconBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_0754708b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754708b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__a->max_length == 0) {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    iconPath = "";
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __c = (CustomLogic_CustomLogicUIBuiltin_o *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
    iconPath = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__Icon(iconPath,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__Icon(iconPath,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Image>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Image_b__43_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b14a10

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Image_b__43_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  System_String_o *iconPath;
  CustomLogic_CustomLogicImageBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_0754708c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754708c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__a->max_length == 0) {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    iconPath = "";
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __c = (CustomLogic_CustomLogicUIBuiltin_o *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
    iconPath = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__Image(iconPath,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__Image(iconPath,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUIBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b0d800

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUIBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicUIBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07547034 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelActive");
    il2cpp_codegen_initialize_runtime_metadata(&"SetScoreboardHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBar");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceHideNames");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"GetRootVisualElement");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowChangeCharacterMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelForTime");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelBackgroundColorAll");
    il2cpp_codegen_initialize_runtime_metadata(&"LegacyLabels");
    il2cpp_codegen_initialize_runtime_metadata(&"CreatePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SetScoreboardProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"AddPopupButton");
    il2cpp_codegen_initialize_runtime_metadata(&"WrapStyleTag");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"AddPopupBottomButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SetMinimapActive");
    il2cpp_codegen_initialize_runtime_metadata(&"GetThemeColor");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPopups");
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    il2cpp_codegen_initialize_runtime_metadata(&"SetChatPanelActive");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"HidePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"SliderInt");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelAll");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"SetBottomHUDActive");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKDRPanelActive");
    il2cpp_codegen_initialize_runtime_metadata(&"AddPopupLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPopupActive");
    il2cpp_codegen_initialize_runtime_metadata(&"TextField");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelForTimeAll");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFeedPanelActive");
    il2cpp_codegen_initialize_runtime_metadata(&"AddPopupButtons");
    il2cpp_codegen_initialize_runtime_metadata(&"VisualElement");
    Il2CppMethodInitialized_07547034 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x70e4ec15) {
    if (uVar2 < 0x4326a2ef) {
      if (uVar2 < 0x2ccf9d28) {
        if (uVar2 < 0x1ee00fa6) {
          if (uVar2 == 0x13ce3a06) {
            bVar1 = System_String__op_Equality(name,"SetLabelBackgroundColor",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColor
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x1ee00fa5) {
            bVar1 = System_String__op_Equality(name,"LegacyLabels",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__LegacyLabels
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x23021f22) {
          bVar1 = System_String__op_Equality(name,"SetLabelForTimeAll",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTimeAll
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x23322007) {
          bVar1 = System_String__op_Equality(name,"IsPopupActive",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__IsPopupActive
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x2ccf9d27) {
          bVar1 = System_String__op_Equality(name,"SetChatPanelActive",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetChatPanelActive
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x324642bf) {
        if (uVar2 == 0x2f841609) {
          bVar1 = System_String__op_Equality(name,"SetFeedPanelActive",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetFeedPanelActive
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x324642be) {
          bVar1 = System_String__op_Equality(name,"AddPopupButton",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButton
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x33881a91) {
        bVar1 = System_String__op_Equality(name,"Button",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Button
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x3868216a) {
        bVar1 = System_String__op_Equality(name,"TextField",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__TextField
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x4326a2ee) {
        bVar1 = System_String__op_Equality(name,"SetLabelAll",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelAll
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x5de6f45c) {
      if (uVar2 < 0x4f9b1f06) {
        if (uVar2 == 0x4f65f048) {
          bVar1 = System_String__op_Equality(name,"SetScoreboardHeader",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardHeader
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x4f9b1f05) {
          bVar1 = System_String__op_Equality(name,"SliderInt",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SliderInt
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x53573f1f) {
        bVar1 = System_String__op_Equality(name,"ProgressBar",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ProgressBar
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x590ca79a) {
        bVar1 = System_String__op_Equality(name,"Image",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Image
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x5de6f45b) {
        bVar1 = System_String__op_Equality(name,"VisualElement",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__VisualElement
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x612ae108) {
      if (uVar2 == 0x60c9e8c4) {
        bVar1 = System_String__op_Equality(name,"ForceHideNames",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__ForceHideNames
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x610a18c5) {
        bVar1 = System_String__op_Equality(name,"SetLabelActive",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelActive
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x612ae107) {
        bVar1 = System_String__op_Equality(name,"SetBottomHUDActive",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetBottomHUDActive
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0x68e6cb10) {
      bVar1 = System_String__op_Equality(name,"Icon",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Icon((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x6cf1ba25) {
      bVar1 = System_String__op_Equality(name,"Toggle",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Toggle
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x70e4ec14) {
      bVar1 = System_String__op_Equality(name,"ClearPopup",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ClearPopup
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xbbd01376) {
    if (uVar2 < 0x9eccf29e) {
      if (uVar2 < 0x8e6a8408) {
        if (uVar2 == 0x8105de5a) {
          bVar1 = System_String__op_Equality(name,"SetKDRPanelActive",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetKDRPanelActive
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x8e6a8407) {
          bVar1 = System_String__op_Equality(name,"SetLabelForTime",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTime
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x9a3972f4) {
        bVar1 = System_String__op_Equality(name,"AddPopupLabel",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupLabel
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x9b74c01c) {
        bVar1 = System_String__op_Equality(name,"Slider",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Slider
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x9eccf29d) {
        bVar1 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Label
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0xab9e5c86) {
      if (uVar2 == 0xa76f5664) {
        bVar1 = System_String__op_Equality(name,"ShowChangeCharacterMenu",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowChangeCharacterMenu
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xab9e5c85) {
        bVar1 = System_String__op_Equality(name,"HidePopup",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__HidePopup
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xb3a837ef) {
      bVar1 = System_String__op_Equality(name,"GetThemeColor",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetThemeColor
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xb6dc3cfc) {
      bVar1 = System_String__op_Equality(name,"GetPopups",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar3 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__GetPopups
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xbbd01375) {
      bVar1 = System_String__op_Equality(name,"ScrollView",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ScrollView
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xd4660d27) {
    if (uVar2 < 0xc1afe526) {
      if (uVar2 == 0xbfe92359) {
        bVar1 = System_String__op_Equality(name,"GetRootVisualElement",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetRootVisualElement
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xc1afe525) {
        bVar1 = System_String__op_Equality(name,"SetLabelBackgroundColorAll",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColorAll
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xc3967d6b) {
      bVar1 = System_String__op_Equality(name,"SetLabel",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabel
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xccadec40) {
      bVar1 = System_String__op_Equality(name,"SetScoreboardProperty",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardProperty
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xd4660d26) {
      bVar1 = System_String__op_Equality(name,"ShowPopup",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowPopup
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xf19b28b8) {
    if (uVar2 == 0xdbe78666) {
      bVar1 = System_String__op_Equality(name,"WrapStyleTag",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__WrapStyleTag
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe4462ef8) {
      bVar1 = System_String__op_Equality(name,"Dropdown",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Dropdown
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xf19b28b7) {
      bVar1 = System_String__op_Equality(name,"AddPopupButtons",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButtons
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xf654e26c) {
    bVar1 = System_String__op_Equality(name,"SetMinimapActive",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetMinimapActive
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xfc401d15) {
    bVar1 = System_String__op_Equality(name,"CreatePopup",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__CreatePopup
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xfeca8df1) {
    bVar1 = System_String__op_Equality(name,"AddPopupBottomButton",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupBottomButton
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicUIBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__LegacyLabels
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__LegacyLabels (const MethodInfo* method);
// 0x5b0e780

CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__LegacyLabels(MethodInfo *method)

{
  System_Func_CustomLogicUIBuiltin__object__o *__this;
  System_Action_CustomLogicUIBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07547035 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicUIBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object);
    Il2CppMethodInitialized_07547035 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicUIBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__ForceHideNames
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__ForceHideNames (const MethodInfo* method);
// 0x5b0e860

CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__ForceHideNames(MethodInfo *method)

{
  System_Func_CustomLogicUIBuiltin__object__o *__this;
  System_Action_CustomLogicUIBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07547036 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicUIBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____setter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object);
    Il2CppMethodInitialized_07547036 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicUIBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____setter_3
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__GetPopups
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__GetPopups (const MethodInfo* method);
// 0x5b0e940

CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__GetPopups(MethodInfo *method)

{
  System_Func_CustomLogicUIBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547037 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__GetPopups_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object);
    Il2CppMethodInitialized_07547037 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__GetPopups_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabel (const MethodInfo* method);
// 0x5b0e9e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0ea15: jmp 0x5b0ea85

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabel(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547038 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabel_b__5_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547038 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabel_b__5_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelForTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTime (const MethodInfo* method);
// 0x5b0eb20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0eb55: jmp 0x5b0ebc5

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTime(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547039 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTime_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547039 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTime_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelAll (const MethodInfo* method);
// 0x5b0ec60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0ec95: jmp 0x5b0ed05

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754703a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelAll_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754703a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelAll_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelForTimeAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTimeAll (const MethodInfo* method);
// 0x5b0eda0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0edd5: jmp 0x5b0ee45

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTimeAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754703b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTimeAll_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754703b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTimeAll_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__CreatePopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__CreatePopup (const MethodInfo* method);
// 0x5b0eee0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0ef15: jmp 0x5b0ef85

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__CreatePopup(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754703c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__CreatePopup_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754703c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__CreatePopup_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ShowPopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowPopup (const MethodInfo* method);
// 0x5b0f020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0f055: jmp 0x5b0f0c5

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowPopup(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754703d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowPopup_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754703d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowPopup_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__HidePopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__HidePopup (const MethodInfo* method);
// 0x5b0f160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0f195: jmp 0x5b0f205

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__HidePopup(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754703e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__HidePopup_b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754703e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__HidePopup_b__11_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ClearPopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ClearPopup (const MethodInfo* method);
// 0x5b0f2a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0f2d5: jmp 0x5b0f345

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ClearPopup(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754703f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ClearPopup_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754703f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ClearPopup_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupLabel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupLabel (const MethodInfo* method);
// 0x5b0f3e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0f415: jmp 0x5b0f485

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupLabel(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupLabel_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547040 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupLabel_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupButton
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButton (const MethodInfo* method);
// 0x5b0f520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0f555: jmp 0x5b0f5c5

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButton(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547041 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButton_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547041 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButton_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupBottomButton
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupBottomButton (const MethodInfo* method);
// 0x5b0f660
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0f695: jmp 0x5b0f705

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupBottomButton(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547042 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupBottomButton_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547042 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupBottomButton_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupButtons
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButtons (const MethodInfo* method);
// 0x5b0f7a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0f7d5: jmp 0x5b0f845

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButtons(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547043 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButtons_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547043 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButtons_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__WrapStyleTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__WrapStyleTag (const MethodInfo* method);
// 0x5b0f8e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0f915: jmp 0x5b0f985

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__WrapStyleTag(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547044 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__WrapStyleTag_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547044 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__WrapStyleTag_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ShowChangeCharacterMenu
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowChangeCharacterMenu (const MethodInfo* method);
// 0x5b0fa20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0fa55: jmp 0x5b0fac5

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowChangeCharacterMenu(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547045 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowChangeCharacterMenu_b__18
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547045 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowChangeCharacterMenu_b__18
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetScoreboardHeader
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardHeader (const MethodInfo* method);
// 0x5b0fb60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0fb95: jmp 0x5b0fc05

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardHeader(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547046 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardHeader_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547046 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardHeader_b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetScoreboardProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardProperty (const MethodInfo* method);
// 0x5b0fca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0fcd8: jmp 0x5b0fd4b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardProperty(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547047 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardProperty_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547047 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardProperty_b__20_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__GetThemeColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetThemeColor (const MethodInfo* method);
// 0x5b0fde0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0fe18: jmp 0x5b0fe8b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetThemeColor(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547048 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetThemeColor_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547048 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetThemeColor_b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__IsPopupActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__IsPopupActive (const MethodInfo* method);
// 0x5b0ff20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0ff58: jmp 0x5b0ffcb

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__IsPopupActive(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547049 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__IsPopupActive_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547049 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__IsPopupActive_b__22_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelActive (const MethodInfo* method);
// 0x5b10060
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10098: jmp 0x5b1010b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelActive(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754704a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelActive_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754704a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelActive_b__23_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelBackgroundColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColor (const MethodInfo* method);
// 0x5b101a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b101d8: jmp 0x5b1024b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColor(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754704b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColor_b__24
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754704b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColor_b__24
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelBackgroundColorAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColorAll (const MethodInfo* method);
// 0x5b102e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10318: jmp 0x5b1038b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColorAll
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754704c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColorAll_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754704c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColorAll_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetKDRPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetKDRPanelActive (const MethodInfo* method);
// 0x5b10420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10458: jmp 0x5b104cb

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetKDRPanelActive(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754704d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetKDRPanelActive_b__26_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754704d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetKDRPanelActive_b__26_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetMinimapActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetMinimapActive (const MethodInfo* method);
// 0x5b10560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10598: jmp 0x5b1060b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetMinimapActive(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754704e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetMinimapActive_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754704e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetMinimapActive_b__27_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetChatPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetChatPanelActive (const MethodInfo* method);
// 0x5b106a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b106d8: jmp 0x5b1074b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetChatPanelActive(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754704f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetChatPanelActive_b__28_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754704f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetChatPanelActive_b__28_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetFeedPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetFeedPanelActive (const MethodInfo* method);
// 0x5b107e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10818: jmp 0x5b1088b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetFeedPanelActive(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetFeedPanelActive_b__29_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547050 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetFeedPanelActive_b__29_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetBottomHUDActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetBottomHUDActive (const MethodInfo* method);
// 0x5b10920
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10958: jmp 0x5b109cb

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetBottomHUDActive(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547051 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetBottomHUDActive_b__30_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547051 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetBottomHUDActive_b__30_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__GetRootVisualElement
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetRootVisualElement (const MethodInfo* method);
// 0x5b10a60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10a98: jmp 0x5b10b0b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetRootVisualElement(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547052 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetRootVisualElement_b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547052 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetRootVisualElement_b__31_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__VisualElement
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__VisualElement (const MethodInfo* method);
// 0x5b10ba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10bd8: jmp 0x5b10c4b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__VisualElement(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547053 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__VisualElement_b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547053 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__VisualElement_b__32_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Button
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Button (const MethodInfo* method);
// 0x5b10ce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10d18: jmp 0x5b10d8b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Button(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547054 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Button_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547054 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Button_b__33_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Label
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Label (const MethodInfo* method);
// 0x5b10e20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10e58: jmp 0x5b10ecb

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Label(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547055 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Label_b__34_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547055 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Label_b__34_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__TextField
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__TextField (const MethodInfo* method);
// 0x5b10f60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b10f98: jmp 0x5b1100b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__TextField(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547056 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__TextField_b__35_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547056 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__TextField_b__35_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Toggle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Toggle (const MethodInfo* method);
// 0x5b110a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b110d8: jmp 0x5b1114b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Toggle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547057 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Toggle_b__36_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547057 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__36_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__36_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Toggle_b__36_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__36_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__36_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Slider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Slider (const MethodInfo* method);
// 0x5b111e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b11218: jmp 0x5b1128b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Slider(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547058 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Slider_b__37_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547058 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__37_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__37_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Slider_b__37_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__37_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__37_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SliderInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SliderInt (const MethodInfo* method);
// 0x5b11320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b11358: jmp 0x5b113cb

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SliderInt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SliderInt_b__38_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547059 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__38_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__38_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SliderInt_b__38_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__38_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__38_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Dropdown
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Dropdown (const MethodInfo* method);
// 0x5b11460
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b11498: jmp 0x5b1150b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Dropdown(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754705a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Dropdown_b__39_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754705a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__39_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__39_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Dropdown_b__39_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__39_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ProgressBar
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ProgressBar (const MethodInfo* method);
// 0x5b115a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b115d8: jmp 0x5b1164b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ProgressBar(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754705b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ProgressBar_b__40_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754705b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__40_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__40_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ProgressBar_b__40_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__40_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__40_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ScrollView
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ScrollView (const MethodInfo* method);
// 0x5b116e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b11718: jmp 0x5b1178b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ScrollView(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754705c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ScrollView_b__41_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754705c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__41_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__41_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ScrollView_b__41_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__41_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__41_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Icon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Icon (const MethodInfo* method);
// 0x5b11820
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b11858: jmp 0x5b118cb

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Icon(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754705d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Icon_b__42_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754705d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__42_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__42_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Icon_b__42_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__42_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__42_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Image
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Image (const MethodInfo* method);
// 0x5b11960
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b11998: jmp 0x5b11a0b

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Image(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicUIBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754705e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Image_b__43_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754705e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__43_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__43_0;
  }
  if (__this == (System_Func_CustomLogicUIBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Image_b__43_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields;
    pCVar2->__9__43_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__43_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b11aa0

void CustomLogic_CustomLogicUIBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754705f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelActive");
    il2cpp_codegen_initialize_runtime_metadata(&"SetScoreboardHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBar");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceHideNames");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"GetRootVisualElement");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowChangeCharacterMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelForTime");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelBackgroundColorAll");
    il2cpp_codegen_initialize_runtime_metadata(&"LegacyLabels");
    il2cpp_codegen_initialize_runtime_metadata(&"CreatePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SetScoreboardProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"AddPopupButton");
    il2cpp_codegen_initialize_runtime_metadata(&"WrapStyleTag");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"AddPopupBottomButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SetMinimapActive");
    il2cpp_codegen_initialize_runtime_metadata(&"GetThemeColor");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPopups");
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    il2cpp_codegen_initialize_runtime_metadata(&"SetChatPanelActive");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"HidePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"SliderInt");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelAll");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"SetBottomHUDActive");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKDRPanelActive");
    il2cpp_codegen_initialize_runtime_metadata(&"AddPopupLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPopupActive");
    il2cpp_codegen_initialize_runtime_metadata(&"TextField");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelForTimeAll");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFeedPanelActive");
    il2cpp_codegen_initialize_runtime_metadata(&"AddPopupButtons");
    il2cpp_codegen_initialize_runtime_metadata(&"VisualElement");
    Il2CppMethodInitialized_0754705f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LegacyLabels",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ForceHideNames",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetPopups",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabel",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelForTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelForTimeAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CreatePopup",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowPopup",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HidePopup",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearPopup",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddPopupLabel",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddPopupButton",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddPopupBottomButton",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddPopupButtons",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WrapStyleTag",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowChangeCharacterMenu",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetScoreboardHeader",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetScoreboardProperty",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetThemeColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPopupActive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelActive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelBackgroundColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelBackgroundColorAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetKDRPanelActive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetMinimapActive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetChatPanelActive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetFeedPanelActive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetBottomHUDActive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetRootVisualElement",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"VisualElement",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Button",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Label",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextField",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Toggle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slider",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SliderInt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dropdown",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ProgressBar",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollView",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Icon",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Image",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__LegacyLabels>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__LegacyLabels_g____getter_2_0 (CustomLogic_CustomLogicUIBuiltin_o* __i, const MethodInfo* method);
// 0x5b120c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b120e1: cmp byte ptr [rip + 0x1a34fa5], 0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__LegacyLabels_g____getter_2_0
          (CustomLogic_CustomLogicUIBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07547060 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547060 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_0754708d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754708d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  local_9 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__LegacyLabels>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__LegacyLabels_g____setter_2_1 (CustomLogic_CustomLogicUIBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b12180

void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__LegacyLabels_g____setter_2_1
               (CustomLogic_CustomLogicUIBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547061 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547061 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels(value,method_00);
    return;
  }
  CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels(value,method_00);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__ForceHideNames>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____getter_3_0 (CustomLogic_CustomLogicUIBuiltin_o* __i, const MethodInfo* method);
// 0x5b12210
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b12231: cmp byte ptr [rip + 0x1a34e56], 0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____getter_3_0
          (CustomLogic_CustomLogicUIBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07547062 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547062 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_0754708e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754708e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  local_9 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__ForceHideNames>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____setter_3_1 (CustomLogic_CustomLogicUIBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b122d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1234a: cmp byte ptr [rip + 0x1a34d3e], 0
// asm:   0x5b12351: je 0x5b1237f

void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____setter_3_1
               (CustomLogic_CustomLogicUIBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547063 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547063 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_0754708f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754708f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames = bVar2;
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__GetPopups>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__GetPopups_g____getter_4_0 (CustomLogic_CustomLogicUIBuiltin_o* __i, const MethodInfo* method);
// 0x5b123b0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__GetPopups_g____getter_4_0
          (CustomLogic_CustomLogicUIBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07547064 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547064 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin;
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin = (CustomLogic_CustomLogicUIBuiltin_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__get_GetPopups((MethodInfo *)klass);
    return (Il2CppObject *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__get_GetPopups((MethodInfo *)klass);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin$$get_Menu
// il2cpp: UI_InGameMenu_o* CustomLogic_CustomLogicUIBuiltin__get_Menu (const MethodInfo* method);
// 0x5b09b10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b09b3d: jmp 0x5b09bb3

UI_InGameMenu_o * CustomLogic_CustomLogicUIBuiltin__get_Menu(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar3 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    pUVar3 = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (pUVar3 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
  }
  return pUVar3;
}


// CustomLogic.CustomLogicUIBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin___ctor (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x5b09bc0

void CustomLogic_CustomLogicUIBuiltin___ctor(CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07547001 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$OnPlayerJoin
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin (CustomLogic_CustomLogicUIBuiltin_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5b09c30
// eh: try 0x5b09da3..0x5b09fba -> pad 0x5b09fc7 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b09feb..0x5b09ff0 -> pad 0x5b0a015 cleanup
// eh: try 0x5b0a018..0x5b0a022 -> pad 0x5b0a02a catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b09cf8: jmp 0x5b09f56
// asm:   0x5b09d9e: nop 
// asm:   0x5b09fbf: jmp 0x5b09fd3
// asm:   0x5b09fc1: jmp 0x5b09fd3
// asm:   0x5b09fc3: jmp 0x5b09fd3
// asm:   0x5b09fc5: jmp 0x5b09fd3
// asm:   0x5b09fc7: jmp 0x5b09fd3
// asm:   0x5b09fc9: jmp 0x5b09fd3
// asm:   0x5b09fcb: jmp 0x5b09fd3
// asm:   0x5b09fcd: jmp 0x5b09fd3
// asm:   0x5b09fcf: jmp 0x5b09fd3
// asm:   0x5b09fd1: jmp 0x5b09fd3
// asm:   0x5b09fd3: mov rbx, rax
// asm:   0x5b09fd6: cmp edx, 1
// asm:   0x5b09fd9: jne 0x5b0a018
// asm:   0x5b09fdb: mov rdi, rbx
// asm:   0x5b09fde: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b09fe3: mov rbx, qword ptr [rax]
// asm:   0x5b09fe6: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5b09feb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b09ff0: lea rax, [rip + 0x1786199]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
// asm:   0x5b09ff7: mov rsi, qword ptr [rax]
// asm:   0x5b09ffa: lea rdi, [rsp + 0x10]
// asm:   0x5b09fff: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b0a004: test rbx, rbx
// asm:   0x5b0a007: je 0x5b09f56
// asm:   0x5b0a00d: mov rdi, rbx
// asm:   0x5b0a010: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b0a015: mov rbx, rax
// asm:   0x5b0a018: lea rdi, [rsp + 0x30]
// asm:   0x5b0a01d: call 0x2fd6670  ; il2cpp_runtime_helper_02fd6670()
// asm:   0x5b0a022: mov rdi, rbx
// asm:   0x5b0a025: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b0a02a: mov rdi, rax
// asm:   0x5b0a02d: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin
               (CustomLogic_CustomLogicUIBuiltin_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Object_array *pSVar2;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  Il2CppObject *pIVar4;
  System_String_o *obj;
  Il2CppObject *pIVar5;
  undefined4 local_6c;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547002 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelRPC");
    Il2CppMethodInitialized_07547002 = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar3) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (pSVar1,(MethodInfo_4AAD0F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys)
       , __this_01 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
               __this_01,
               (MethodInfo_511A520 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_string_GetEnumerator);
    local_68.fields._currentKey = local_38;
    local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
    local_68.fields._index = local_48._8_4_;
    local_68.fields._version = local_48._12_4_;
    local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_48._8_8_ = &local_68;
    while (bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (&local_68,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_MoveNext
                             ), pIVar5 = local_68.fields._currentKey, bVar3) {
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
      if (pSVar2 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar2->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)pSVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
      obj = System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar1,pIVar5,
                       (MethodInfo_4AAD450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if (pSVar2 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((obj != (System_String_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pSVar2->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((pSVar2->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2->m_Items[1] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
      local_6c = 0;
      pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,&local_6c);
      if (pSVar2 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar2->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((uint)pSVar2->max_length < 3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2->m_Items[2] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
      __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
        ThrowNullReferenceException();
      }
      Photon_Pun_PhotonView__RPC_56e5850
                (__this_00,"SetLabelRPC",player,
                 TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (&local_68,
               (MethodInfo_4CE7070 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
              );
  }
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$ClearLabels
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ClearLabels (const MethodInfo* method);
// 0x5b0a040

void CustomLogic_CustomLogicUIBuiltin__ClearLabels(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547003 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    Il2CppMethodInitialized_07547003 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->static_fields;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear;
  }
  MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear = method_00;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear(__this,(MethodInfo_4AAD690 *)method_00);
  CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels(true,method_00);
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames = false;
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$get_LegacyLabels
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_LegacyLabels (const MethodInfo* method);
// 0x5b0a210

bool CustomLogic_CustomLogicUIBuiltin__get_LegacyLabels(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547004 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547004 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    return TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->static_fields + 0x11);
}


// CustomLogic.CustomLogicUIBuiltin$$set_LegacyLabels
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels (bool value, const MethodInfo* method);
// 0x5b0a0f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0a17e: jmp 0x5b0a1fe

void CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels(bool value,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547005 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547005 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels = value;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        UI_InGameMenu__SetLegacyLabels(__this,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$get_ForceHideNames
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_ForceHideNames (const MethodInfo* method);
// 0x5b0a280

bool CustomLogic_CustomLogicUIBuiltin__get_ForceHideNames(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547006 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    return TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->static_fields + 0x10);
}


// CustomLogic.CustomLogicUIBuiltin$$set_ForceHideNames
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__set_ForceHideNames (bool value, const MethodInfo* method);
// 0x5b0a2f0

void CustomLogic_CustomLogicUIBuiltin__set_ForceHideNames(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547007 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames = value;
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$GetForceHideNames
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__GetForceHideNames (const MethodInfo* method);
// 0x5b0a340

bool CustomLogic_CustomLogicUIBuiltin__GetForceHideNames(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547008 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    return TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->static_fields + 0x10);
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabel
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabel (System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x5b0a3b0

void CustomLogic_CustomLogicUIBuiltin__SetLabel
               (System_String_o *label,System_String_o *message,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07547009 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__SetLabel(label,message,0.0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelForTime
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelForTime (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x5b0a410

void CustomLogic_CustomLogicUIBuiltin__SetLabelForTime
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754700a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_0754700a = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__SetLabel(label,message,time,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelAll
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelAll (System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x5b0a480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0a4c2: jmp 0x5b0a784

void CustomLogic_CustomLogicUIBuiltin__SetLabelAll
               (System_String_o *label,System_String_o *message,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Object_array *pSVar2;
  Photon_Pun_PhotonView_o *__this;
  bool bVar3;
  System_String_o *b;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_2c;
  
  if (Il2CppMethodInitialized_0754700b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelRPC");
    Il2CppMethodInitialized_0754700b = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05b0a4b3;
label_05b0a539:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05b0a539;
label_05b0a4b3:
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar3) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b0a792;
  bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)label,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
  if (bVar3) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b0a792;
    b = System_Collections_Generic_Dictionary_object__object___get_Item
                  (pSVar1,(Il2CppObject *)label,
                   (MethodInfo_4AAD450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    bVar3 = System_String__op_Inequality(message,b,(MethodInfo *)0x0);
    if (bVar3) goto label_05b0a5e3;
  }
  else {
label_05b0a5e3:
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    if (pSVar2 == (System_Object_array *)0x0) goto label_05b0a792;
    if ((label != (System_String_o *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)label,(((pSVar2->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) {
label_05b0a79c:
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((int)pSVar2->max_length == 0) {
label_05b0a797:
      ThrowIndexOutOfRangeException();
    }
    pSVar2->m_Items[0] = (Il2CppObject *)label;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    if (pSVar2 == (System_Object_array *)0x0) goto label_05b0a792;
    if ((message != (System_String_o *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar2->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) goto label_05b0a79c;
    if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05b0a797;
    pSVar2->m_Items[1] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
    pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    local_2c = 0;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_2c);
    if (pSVar2 == (System_Object_array *)0x0) goto label_05b0a792;
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar2->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) goto label_05b0a79c;
    if ((uint)pSVar2->max_length < 3) goto label_05b0a797;
    pSVar2->m_Items[2] = pIVar4;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
    __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    if (__this == (Photon_Pun_PhotonView_o *)0x0) goto label_05b0a792;
    Photon_Pun_PhotonView__RPC
              (__this,"SetLabelRPC",0,
               TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs,(MethodInfo *)0x0);
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)label,(Il2CppObject *)message,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    return;
  }
label_05b0a792:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelForTimeAll
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x5b0a7b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0a7ea: jmp 0x5b0a9b2

void CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  System_Object_array *pSVar1;
  Photon_Pun_PhotonView_o *__this;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_24 [4];
  
  if (Il2CppMethodInitialized_0754700c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelRPC");
    Il2CppMethodInitialized_0754700c = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05b0a7df;
label_05b0a839:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05b0a839;
label_05b0a7df:
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar2) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
  if (pSVar1 != (System_Object_array *)0x0) {
    if ((label != (System_String_o *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)label,(((pSVar1->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
label_05b0a9c8:
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if ((int)pSVar1->max_length == 0) {
label_05b0a9c3:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = (Il2CppObject *)label;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    if (pSVar1 != (System_Object_array *)0x0) {
      if ((message != (System_String_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar1->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) goto label_05b0a9c8;
      if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05b0a9c3;
      pSVar1->m_Items[1] = (Il2CppObject *)message;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,local_24);
      if (pSVar1 != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar1->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) goto label_05b0a9c8;
        if ((uint)pSVar1->max_length < 3) goto label_05b0a9c3;
        pSVar1->m_Items[2] = pIVar3;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC
                    (__this,"SetLabelRPC",0,
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$CreatePopup
// il2cpp: System_String_o* CustomLogic_CustomLogicUIBuiltin__CreatePopup (System_String_o* popupName, System_String_o* title, int32_t width, int32_t height, const MethodInfo* method);
// 0x5b0a9e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0aa18: cmp byte ptr [rip + 0x1a3c5e1], 0

System_String_o *
CustomLogic_CustomLogicUIBuiltin__CreatePopup
          (System_String_o *popupName,System_String_o *title,int32_t width,int32_t height,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_0754700d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754700d = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__CreateCustomPopup(__this,popupName,title,(float)width,(float)height,(MethodInfo *)0x0);
  return popupName;
}


// CustomLogic.CustomLogicUIBuiltin$$ShowPopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ShowPopup (System_String_o* popupName, const MethodInfo* method);
// 0x5b0ab40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0ab63: cmp byte ptr [rip + 0x1a3c496], 0
// asm:   0x5b0ab93: jmp 0x5b0ac6c

void CustomLogic_CustomLogicUIBuiltin__ShowPopup(System_String_o *popupName,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_0754700e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754700e = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar3 != (UI_CustomPopup_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$HidePopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__HidePopup (System_String_o* popupName, const MethodInfo* method);
// 0x5b0ac80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0aca3: cmp byte ptr [rip + 0x1a3c356], 0
// asm:   0x5b0acd3: jmp 0x5b0adac

void CustomLogic_CustomLogicUIBuiltin__HidePopup(System_String_o *popupName,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_0754700f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754700f = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar3 != (UI_CustomPopup_o *)0x0) {
      (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$ClearPopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ClearPopup (System_String_o* popupName, const MethodInfo* method);
// 0x5b0adc0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0ade3: cmp byte ptr [rip + 0x1a3c216], 0
// asm:   0x5b0ae13: jmp 0x5b0aee0

void CustomLogic_CustomLogicUIBuiltin__ClearPopup(System_String_o *popupName,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_07547010 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547010 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__Clear(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupLabel
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupLabel (System_String_o* popupName, System_String_o* label, const MethodInfo* method);
// 0x5b0aef0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0af17: cmp byte ptr [rip + 0x1a3c0e2], 0
// asm:   0x5b0af47: jmp 0x5b0b015

void CustomLogic_CustomLogicUIBuiltin__AddPopupLabel
               (System_String_o *popupName,System_String_o *label,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_07547011 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547011 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddLabel(__this_00,label,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupButton
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupButton (System_String_o* popupName, System_String_o* callback, System_String_o* label, const MethodInfo* method);
// 0x5b0b020
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0b04d: cmp byte ptr [rip + 0x1a3bfac], 0
// asm:   0x5b0b07d: jmp 0x5b0b154

void CustomLogic_CustomLogicUIBuiltin__AddPopupButton
               (System_String_o *popupName,System_String_o *callback,System_String_o *label,MethodInfo *method
               )

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_07547012 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547012 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddButton(__this_00,callback,label,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupBottomButton
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupBottomButton (System_String_o* popupName, System_String_o* callback, System_String_o* label, const MethodInfo* method);
// 0x5b0b160
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0b18d: cmp byte ptr [rip + 0x1a3be6c], 0
// asm:   0x5b0b1bd: jmp 0x5b0b294

void CustomLogic_CustomLogicUIBuiltin__AddPopupBottomButton
               (System_String_o *popupName,System_String_o *callback,System_String_o *label,MethodInfo *method
               )

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_07547013 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547013 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddBottomButton(__this_00,callback,label,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupButtons
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupButtons (System_String_o* popupName, CustomLogic_CustomLogicListBuiltin_o* callbacks, CustomLogic_CustomLogicListBuiltin_o* labels, const MethodInfo* method);
// 0x5b0b2a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0b2cd: cmp byte ptr [rip + 0x1a3bd2c], 0
// asm:   0x5b0b2fd: jmp 0x5b0b3e1

void CustomLogic_CustomLogicUIBuiltin__AddPopupButtons
               (System_String_o *popupName,CustomLogic_CustomLogicListBuiltin_o *callbacks,
               CustomLogic_CustomLogicListBuiltin_o *labels,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_07547014 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547014 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (((callbacks != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
        (labels != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) && (__this_00 != (UI_CustomPopup_o *)0x0)) {
      UI_CustomPopup__AddButtons(__this_00,(callbacks->fields).List,(labels->fields).List,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$WrapStyleTag
// il2cpp: System_String_o* CustomLogic_CustomLogicUIBuiltin__WrapStyleTag (System_String_o* text, System_String_o* style, System_String_o* arg, const MethodInfo* method);
// 0x5b0b3f0

System_String_o *
CustomLogic_CustomLogicUIBuiltin__WrapStyleTag
          (System_String_o *text,System_String_o *style,System_String_o *arg,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_07547015 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"=");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"</");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07547015 = '\x01';
  }
  if (arg == (System_String_o *)0x0) {
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
    if (values == (System_String_array *)0x0) goto label_05b0b680;
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      Il2CppCodeGenWriteBarrier(values->m_Items);
      if ((values->max_length & 0xfffffffe) != 0) {
        values->m_Items[1] = style;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2);
          if ((values->max_length & 0xfffffffc) != 0) {
            values->m_Items[3] = text;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = style;
                Il2CppCodeGenWriteBarrier(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  targetAddress = values->m_Items + 6;
                  values->m_Items[6] = ">";
label_05b0b661:
                  Il2CppCodeGenWriteBarrier(targetAddress);
                  pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                  return pSVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,9);
    if (values == (System_String_array *)0x0) {
label_05b0b680:
      ThrowNullReferenceException();
    }
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      Il2CppCodeGenWriteBarrier(values->m_Items);
      if ((values->max_length & 0xfffffffe) != 0) {
        values->m_Items[1] = style;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = "=";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2);
          if ((values->max_length & 0xfffffffc) != 0) {
            values->m_Items[3] = arg;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ">";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = text;
                Il2CppCodeGenWriteBarrier(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = "</";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                  if ((values->max_length & 0xfffffff8) != 0) {
                    values->m_Items[7] = style;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 7);
                    if (8 < (uint)values->max_length) {
                      targetAddress = values->m_Items + 8;
                      values->m_Items[8] = ">";
                      goto label_05b0b661;
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


// CustomLogic.CustomLogicUIBuiltin$$ShowChangeCharacterMenu
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu (const MethodInfo* method);
// 0x5b0b690
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0b885: mov rdi, rbx

void CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu(MethodInfo *method)

{
  byte bVar1;
  UI_KeybindPopup_o *pUVar2;
  UI_KeybindPopup_c *pUVar3;
  bool bVar4;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_07547016 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547016 = '\x01';
  }
  __this = (UI_InGameMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this == (UI_InGameMenu_o *)0x0) goto label_05b0b880;
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05b0b888;
  pUVar2 = (__this->fields).KeybindPopup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar4) || (pUVar2 = (__this->fields).KeybindPopup, pUVar2 == (UI_KeybindPopup_o *)0x0)) {
    return;
  }
  pUVar3 = pUVar2->klass;
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((pUVar3->_2).typeHierarchyDepth < bVar1) {
    return;
  }
  if ((pUVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    if (Il2CppMethodInitialized_07547000 != '\0') goto label_05b0b7b9;
label_05b0b82e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05b0b7d0;
label_05b0b864:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    if (Il2CppMethodInitialized_07547000 == '\0') goto label_05b0b82e;
label_05b0b7b9:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05b0b864;
label_05b0b7d0:
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      UI_InGameMenu__ShowCharacterChangeMenu(__this,(MethodInfo *)0x0);
      return;
    }
label_05b0b888:
    il2cpp_codegen_raise_invalid_cast_exception(__this);
  }
label_05b0b880:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetScoreboardHeader
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetScoreboardHeader (System_String_o* header, const MethodInfo* method);
// 0x5b0b890

void CustomLogic_CustomLogicUIBuiltin__SetScoreboardHeader(System_String_o *header,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07547017 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547017 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).ScoreboardHeader = header;
  Il2CppCodeGenWriteBarrier(&(pCVar2->fields).ScoreboardHeader);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetScoreboardProperty
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetScoreboardProperty (System_String_o* property, const MethodInfo* method);
// 0x5b0b920

void CustomLogic_CustomLogicUIBuiltin__SetScoreboardProperty(System_String_o *property,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547018 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CL:");
    Il2CppMethodInitialized_07547018 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  pSVar2 = System_String__Concat_52f0320("CL:",property,(MethodInfo *)0x0);
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).ScoreboardProperty = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pCVar1->fields).ScoreboardProperty);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$GetThemeColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicUIBuiltin__GetThemeColor (System_String_o* panel, System_String_o* category, System_String_o* item, const MethodInfo* method);
// 0x5b0b9b0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__GetThemeColor
          (System_String_o *panel,System_String_o *category,System_String_o *item,MethodInfo *method)

{
  Utility_Color255_o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07547019 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_07547019 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  color = UI_UIManager__GetThemeColor(panel,category,item,"DefaultPanel",(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7790(__this,color,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_00,__this,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$IsPopupActive
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__IsPopupActive (System_String_o* popupName, const MethodInfo* method);
// 0x5b0ba90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0bab3: cmp byte ptr [rip + 0x1a3b546], 0
// asm:   0x5b0bae3: jmp 0x5b0bbae

bool CustomLogic_CustomLogicUIBuiltin__IsPopupActive(System_String_o *popupName,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_0754701a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754701a = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar3 != (UI_CustomPopup_o *)0x0) {
      return (pUVar3->fields).IsActive;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$get_GetPopups
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicUIBuiltin__get_GetPopups (const MethodInfo* method);
// 0x5b0bbc0
// eh: try 0x5b0bd8f..0x5b0be2f -> pad 0x5b0be33 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b0be4f..0x5b0be54 -> pad 0x5b0be73 cleanup
// eh: try 0x5b0be76..0x5b0be80 -> pad 0x5b0be88 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0bc5e: cmp byte ptr [rip + 0x1a3b39b], 0
// asm:   0x5b0bc65: je 0x5b0bc9d
// asm:   0x5b0bc8a: jmp 0x5b0be25
// asm:   0x5b0bd6d: lea r15, [rip + 0x1782d8c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
// asm:   0x5b0bd74: mov rbx, rsp
// asm:   0x5b0bd77: lea r12, [rip + 0x1789e82]  ; MethodInfo_System_Collections_Generic_List_object_Add
// asm:   0x5b0bd7e: jmp 0x5b0bd94
// asm:   0x5b0be2f: jmp 0x5b0be37
// asm:   0x5b0be31: jmp 0x5b0be37
// asm:   0x5b0be33: jmp 0x5b0be37
// asm:   0x5b0be35: jmp 0x5b0be37
// asm:   0x5b0be37: mov rbx, rax
// asm:   0x5b0be3a: cmp edx, 1
// asm:   0x5b0be3d: jne 0x5b0be76
// asm:   0x5b0be3f: mov rdi, rbx
// asm:   0x5b0be42: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b0be47: mov rbx, qword ptr [rax]
// asm:   0x5b0be4a: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b0be4f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b0be54: lea rax, [rip + 0x1782c9d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b0be5b: mov rsi, qword ptr [rax]
// asm:   0x5b0be5e: mov rdi, rsp
// asm:   0x5b0be61: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b0be66: test rbx, rbx
// asm:   0x5b0be69: je 0x5b0be0c
// asm:   0x5b0be6b: mov rdi, rbx
// asm:   0x5b0be6e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b0be73: mov rbx, rax
// asm:   0x5b0be76: lea rdi, [rsp + 0x20]
// asm:   0x5b0be7b: call 0x2fd66a0  ; il2cpp_runtime_helper_02fd66a0()
// asm:   0x5b0be80: mov rdi, rbx
// asm:   0x5b0be83: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b0be88: mov rdi, rax
// asm:   0x5b0be8b: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicUIBuiltin__get_GetPopups(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  UI_InGameMenu_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o SStack_58;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (Il2CppMethodInitialized_0754701b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    Il2CppMethodInitialized_0754701b = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar2 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_02 = UI_InGameMenu__GetAllCustomPopups(__this,(MethodInfo *)0x0);
    if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_38,
                 (System_Collections_Generic_List_object__o *)__this_02,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      SStack_58.fields._current = pIStack_28;
      SStack_58.fields._list = (System_Collections_Generic_List_T__o *)auStack_38._0_8_;
      SStack_58.fields._index = auStack_38._8_4_;
      SStack_58.fields._version = auStack_38._12_4_;
      auStack_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_38._8_8_ = &SStack_58;
      if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        auStack_38._8_8_ = &SStack_58;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&SStack_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        if (bVar7) {
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&SStack_58,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
              pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add, bVar7) {
          __this_00 = (__this_01->fields).List;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_05b0be1b:
            ThrowNullReferenceException();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_05b0be1b;
          uVar4 = (__this_00->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = SStack_58.fields._current;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,SStack_58.fields._current,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&SStack_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelActive (System_String_o* label, bool active, const MethodInfo* method);
// 0x5b0be90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0bebd: cmp byte ptr [rip + 0x1a3b13c], 0

void CustomLogic_CustomLogicUIBuiltin__SetLabelActive(System_String_o *label,bool active,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_0754701c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754701c = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__SetLabelActive(__this,label,active,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelBackgroundColor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColor (System_String_o* label, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b0bfe0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0c007: cmp byte ptr [rip + 0x1a3aff2], 0
// asm:   0x5b0c037: jmp 0x5b0c0e4

void CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColor
               (System_String_o *label,CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o color_00;
  
  if (Il2CppMethodInitialized_0754701d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754701d = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this);
    }
  }
  if (((color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
      (__this_00 = (color->fields).Value, __this_00 == (Utility_Color255_o *)0x0)) ||
     (color_00 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0), __this == (UI_InGameMenu_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_InGameMenu__SetLabelBackgroundColor(__this,label,color_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelBackgroundColorAll
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColorAll (CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b0c120
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0c143: cmp byte ptr [rip + 0x1a3aeb6], 0
// asm:   0x5b0c173: jmp 0x5b0c220

void CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColorAll
               (CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o color_00;
  
  if (Il2CppMethodInitialized_0754701e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754701e = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this);
    }
  }
  if (((color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
      (__this_00 = (color->fields).Value, __this_00 == (Utility_Color255_o *)0x0)) ||
     (color_00 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0), __this == (UI_InGameMenu_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_InGameMenu__SetLabelBackgroundColorAll(__this,color_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetKDRPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetKDRPanelActive (bool active, const MethodInfo* method);
// 0x5b0c260
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0c289: cmp byte ptr [rip + 0x1a3ad70], 0

void CustomLogic_CustomLogicUIBuiltin__SetKDRPanelActive(bool active,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_0754701f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754701f = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__SetKDRPanelActive(__this,active,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetMinimapActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetMinimapActive (bool active, const MethodInfo* method);
// 0x5b0c3a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0c3c9: cmp byte ptr [rip + 0x1a3ac30], 0

void CustomLogic_CustomLogicUIBuiltin__SetMinimapActive(bool active,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_07547020 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547020 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__SetMinimapActive(__this,active,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetChatPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetChatPanelActive (bool active, const MethodInfo* method);
// 0x5b0c4e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0c509: cmp byte ptr [rip + 0x1a3aaf0], 0

void CustomLogic_CustomLogicUIBuiltin__SetChatPanelActive(bool active,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_07547021 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547021 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__SetChatPanelActive(__this,active,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetFeedPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetFeedPanelActive (bool active, const MethodInfo* method);
// 0x5b0c620
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0c649: cmp byte ptr [rip + 0x1a3a9b0], 0

void CustomLogic_CustomLogicUIBuiltin__SetFeedPanelActive(bool active,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_07547022 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547022 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__SetFeedPanelActive(__this,active,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetBottomHUDActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetBottomHUDActive (bool active, const MethodInfo* method);
// 0x5b0c760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0c789: cmp byte ptr [rip + 0x1a3a870], 0

void CustomLogic_CustomLogicUIBuiltin__SetBottomHUDActive(bool active,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_07547023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_07547023 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__SetBottomHUDActive(__this,active,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$GetRootVisualElement
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement (const MethodInfo* method);
// 0x5b0c8a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0c8c8: cmp byte ptr [rip + 0x1a3a731], 0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07547024 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    Il2CppMethodInitialized_07547024 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_07547000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547000 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  visualElement = UI_InGameMenu__get_RootVisualElement(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,visualElement,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$VisualElement
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicUIBuiltin__VisualElement (const MethodInfo* method);
// 0x5b0ca10

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__VisualElement(MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07547025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_VisualElement);
    Il2CppMethodInitialized_07547025 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,__this,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Button
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Button (System_String_o* text, CustomLogic_UserMethod_o* clickEvent, const MethodInfo* method);
// 0x5b0ca90

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Button
          (System_String_o *text,CustomLogic_UserMethod_o *clickEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this;
  CustomLogic_CustomLogicButtonBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547026 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin);
    Il2CppMethodInitialized_07547026 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Button);
  UnityEngine_UIElements_Button___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_UIElements_Button_o *)0x0) {
    (*(__this->klass->vtable)._212_set_text.methodPtr)
              (__this,text,(__this->klass->vtable)._212_set_text.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin);
    CustomLogic_CustomLogicButtonBuiltin___ctor(__this_00,__this,method_00);
    if (__this_00 != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) {
      (__this_00->fields)._clickEvent = clickEvent;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._clickEvent);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$Label
// il2cpp: CustomLogic_CustomLogicLabelBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Label (System_String_o* text, const MethodInfo* method);
// 0x5b0cb50

CustomLogic_CustomLogicLabelBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Label(System_String_o *text,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *__this;
  CustomLogic_CustomLogicLabelBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07547027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLabelBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Label);
    Il2CppMethodInitialized_07547027 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Label);
  UnityEngine_UIElements_Label___ctor(__this,(MethodInfo *)0x0);
  if (__this == (UnityEngine_UIElements_Label_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__this->klass->vtable)._212_set_text.methodPtr)(__this,text,(__this->klass->vtable)._212_set_text.method)
  ;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
  (__this_00->fields)._label = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._label);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$TextField
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicUIBuiltin__TextField (System_String_o* label, const MethodInfo* method);
// 0x5b0cc00

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__TextField(System_String_o *label,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  CustomLogic_CustomLogicTextFieldBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07547028 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_TextField);
    Il2CppMethodInitialized_07547028 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_TextField);
  UnityEngine_UIElements_TextField___ctor_6beac00(__this,label,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
  (__this_00->fields)._textField = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._textField);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Toggle
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Toggle (System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5b0cc90

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Toggle
          (System_String_o *label,CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  CustomLogic_CustomLogicToggleBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547029 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Toggle);
    Il2CppMethodInitialized_07547029 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Toggle);
  UnityEngine_UIElements_Toggle___ctor_6c41860(__this,label,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin);
  CustomLogic_CustomLogicToggleBuiltin___ctor(__this_00,__this,method_00);
  if (__this_00 == (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Slider
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Slider (float lowValue, float highValue, float tickInterval, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5b0cd30

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Slider
          (float lowValue,float highValue,float tickInterval,System_String_o *label,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *__this;
  CustomLogic_CustomLogicSliderBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754702a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Slider);
    Il2CppMethodInitialized_0754702a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Slider);
  UnityEngine_UIElements_Slider___ctor_6c37410(__this,label,lowValue,highValue,0,0.0,(MethodInfo *)0x0);
  if (0.0 < tickInterval) {
    if (__this == (UnityEngine_UIElements_Slider_o *)0x0) goto label_05b0ce17;
    (*(__this->klass->vtable)._166_set_pageSize.methodPtr)
              (__this,(__this->klass->vtable)._166_set_pageSize.method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
  CustomLogic_CustomLogicSliderBuiltin___ctor(__this_00,__this,method_00);
  if (__this_00 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    (__this_00->fields)._valueChangedEvent = valueChangedEvent;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent);
    return __this_00;
  }
label_05b0ce17:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SliderInt
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicUIBuiltin__SliderInt (int32_t lowValue, int32_t highValue, int32_t tickInterval, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5b0ce20

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__SliderInt
          (int32_t lowValue,int32_t highValue,int32_t tickInterval,System_String_o *label,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this;
  CustomLogic_CustomLogicSliderBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754702b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_SliderInt);
    Il2CppMethodInitialized_0754702b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_SliderInt);
  UnityEngine_UIElements_SliderInt___ctor_6c38430(__this,label,lowValue,highValue,0,0.0,(MethodInfo *)0x0);
  if (1 < tickInterval) {
    if (__this == (UnityEngine_UIElements_SliderInt_o *)0x0) goto label_05b0cef8;
    (*(__this->klass->vtable)._166_set_pageSize.methodPtr)
              (__this,(float)tickInterval,(__this->klass->vtable)._166_set_pageSize.method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
  CustomLogic_CustomLogicSliderBuiltin___ctor_5a04630(__this_00,__this,method_00);
  if (__this_00 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    (__this_00->fields)._valueChangedEvent = valueChangedEvent;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent);
    return __this_00;
  }
label_05b0cef8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$Dropdown
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Dropdown (CustomLogic_CustomLogicListBuiltin_o* choices, int32_t defaultIndex, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5b0cf00
// eh: try 0x5b0d06f..0x5b0d11e -> pad 0x5b0d21f (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b0d237..0x5b0d23c -> pad 0x5b0d261 cleanup
// eh: try 0x5b0d264..0x5b0d26e -> pad 0x5b0d276 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b0d0e9: nop dword ptr [rax]
// asm:   0x5b0d217: jmp 0x5b0d21f
// asm:   0x5b0d219: jmp 0x5b0d21f
// asm:   0x5b0d21b: jmp 0x5b0d21f
// asm:   0x5b0d21d: jmp 0x5b0d21f
// asm:   0x5b0d21f: mov rbx, rax
// asm:   0x5b0d222: cmp edx, 1
// asm:   0x5b0d225: jne 0x5b0d264
// asm:   0x5b0d227: mov rdi, rbx
// asm:   0x5b0d22a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b0d22f: mov rbx, qword ptr [rax]
// asm:   0x5b0d232: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5b0d237: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b0d23c: lea rax, [rip + 0x17813d5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x5b0d243: mov rsi, qword ptr [rax]
// asm:   0x5b0d246: lea rdi, [rsp + 0x10]
// asm:   0x5b0d24b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b0d250: test rbx, rbx
// asm:   0x5b0d253: je 0x5b0d132
// asm:   0x5b0d259: mov rdi, rbx
// asm:   0x5b0d25c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b0d261: mov rbx, rax
// asm:   0x5b0d264: lea rdi, [rsp + 0x28]
// asm:   0x5b0d269: call 0x2fd66d0  ; il2cpp_runtime_helper_02fd66d0()
// asm:   0x5b0d26e: mov rdi, rbx
// asm:   0x5b0d271: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b0d276: mov rdi, rax
// asm:   0x5b0d279: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Dropdown
          (CustomLogic_CustomLogicListBuiltin_o *choices,int32_t defaultIndex,System_String_o *label,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *choices_00;
  System_String_o *pSVar6;
  UnityEngine_UIElements_DropdownField_o *__this_00;
  CustomLogic_CustomLogicDropdownBuiltin_o *__this_01;
  MethodInfo *method_00;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *pIStack_58;
  undefined1 auStack_50 [16];
  Il2CppObject *pIStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_0754702c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_DropdownField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"No options");
    Il2CppMethodInitialized_0754702c = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  choices_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)choices_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((choices != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (choices->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    pSStack_38 = label;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,__this,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    pIStack_58 = pIStack_40;
    auStack_68 = (undefined1  [8])auStack_50._0_8_;
    puStack_60 = (undefined1 *)auStack_50._8_8_;
    auStack_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_50._8_8_ = auStack_68;
    if (choices_00 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
        if (!bVar5) goto label_05b0d11e;
      } while (pIStack_58 == (Il2CppObject *)0x0);
      (*pIStack_58->klass->vtable[3].methodPtr)(pIStack_58,pIStack_58->klass->vtable[3].method);
label_05b0d119:
      ThrowNullReferenceException();
    }
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      if (!bVar5) break;
      if (pIStack_58 != (Il2CppObject *)0x0) {
        pSVar6 = (System_String_o *)
                 (*pIStack_58->klass->vtable[3].methodPtr)(pIStack_58,pIStack_58->klass->vtable[3].method);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(choices_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (choices_00->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_05b0d119;
        uVar2 = (choices_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (choices_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)choices_00,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
    }
label_05b0d11e:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    pSVar6 = "No options";
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (choices_00 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((choices_00->fields)._size == 0) {
        piVar1 = &(choices_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (choices_00->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_05b0d212;
        if ((int)pSVar3->max_length == 0) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)choices_00,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        else {
          (choices_00->fields)._size = 1;
          pSVar3->m_Items[0] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
        }
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_DropdownField);
      UnityEngine_UIElements_DropdownField___ctor_6bdc5f0
                (__this_00,pSStack_38,choices_00,defaultIndex,(System_Func_string__string__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin);
      CustomLogic_CustomLogicDropdownBuiltin___ctor(__this_01,__this_00,method_00);
      if (__this_01 != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
        (__this_01->fields)._valueChangedEvent = valueChangedEvent;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._valueChangedEvent);
        return __this_01;
      }
    }
  }
label_05b0d212:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$ProgressBar
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicUIBuiltin__ProgressBar (float lowValue, float highValue, System_String_o* title, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5b0d280

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__ProgressBar
          (float lowValue,float highValue,System_String_o *title,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  CustomLogic_CustomLogicProgressBarBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754702d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ProgressBar);
    Il2CppMethodInitialized_0754702d = '\x01';
  }
  __this = (UnityEngine_UIElements_AbstractProgressBar_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_ProgressBar);
  UnityEngine_UIElements_ProgressBar___ctor((UnityEngine_UIElements_ProgressBar_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this,lowValue,(MethodInfo *)0x0);
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this,highValue,(MethodInfo *)0x0);
    UnityEngine_UIElements_AbstractProgressBar__set_title(__this,title,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin);
    CustomLogic_CustomLogicProgressBarBuiltin___ctor
              (__this_00,(UnityEngine_UIElements_ProgressBar_o *)__this,method_00);
    if (__this_00 != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) {
      (__this_00->fields)._valueChangedEvent = valueChangedEvent;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$ScrollView
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicUIBuiltin__ScrollView (const MethodInfo* method);
// 0x5b0d360

CustomLogic_CustomLogicScrollViewBuiltin_o * CustomLogic_CustomLogicUIBuiltin__ScrollView(MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_0754702e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ScrollView);
    Il2CppMethodInitialized_0754702e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_ScrollView);
  UnityEngine_UIElements_ScrollView___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
  (__this_00->fields)._scrollView = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._scrollView);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Icon
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Icon (System_String_o* iconPath, const MethodInfo* method);
// 0x5b0d3f0

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Icon(System_String_o *iconPath,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UIElements_Image_o *__this;
  CustomLogic_CustomLogicIconBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754702f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Image);
    Il2CppMethodInitialized_0754702f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Image);
  UnityEngine_UIElements_Image___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
  (__this_00->fields)._image = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._image);
  (__this_00->fields)._currentIconPath = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._currentIconPath);
  bVar1 = System_String__IsNullOrEmpty(iconPath,(MethodInfo *)0x0);
  if (!bVar1) {
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__this_00,iconPath,method_00);
  }
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Image
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Image (System_String_o* iconPath, const MethodInfo* method);
// 0x5b0d4c0

CustomLogic_CustomLogicImageBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Image(System_String_o *iconPath,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicImageBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547030 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin);
    Il2CppMethodInitialized_07547030 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin);
  if (Il2CppMethodInitialized_07546f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546f6b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentImagePath);
  (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentTexture);
  bVar1 = System_String__IsNullOrEmpty(iconPath,(MethodInfo *)0x0);
  if (!bVar1) {
    CustomLogic_CustomLogicImageBuiltin__SetImage(__this,iconPath,method_00);
  }
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUIBuiltin__get_ClassName (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x5b0d5a0

System_String_o *
CustomLogic_CustomLogicUIBuiltin__get_ClassName(CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547031 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    Il2CppMethodInitialized_07547031 = '\x01';
  }
  return "UI";
}


// CustomLogic.CustomLogicUIBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_IsAbstract (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x5b0d5d0

bool CustomLogic_CustomLogicUIBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicUIBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_IsStatic (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x5b0d5e0

bool CustomLogic_CustomLogicUIBuiltin__get_IsStatic
               (CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicUIBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x5b0d5f0

bool CustomLogic_CustomLogicUIBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicUIBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin___cctor (const MethodInfo* method);
// 0x5b0d600

void CustomLogic_CustomLogicUIBuiltin___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicUIBuiltin_StaticFields *pCVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Object_array *pSVar2;
  
  if (Il2CppMethodInitialized_07547032 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07547032 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels);
  pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields;
  pCVar1->SetLabelRpcArgs = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->SetLabelRpcArgs);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields;
  pCVar1->_forceHideCharacterNames = false;
  pCVar1->_legacyLabels = true;
  return;
}


