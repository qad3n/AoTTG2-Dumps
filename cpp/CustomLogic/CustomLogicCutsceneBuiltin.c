// Type: CustomLogic.CustomLogicCutsceneBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCutsceneBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCutsceneBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicCutsceneBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCutsceneBuiltin_o* CustomLogic_CustomLogicCutsceneBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ac9fe0

CustomLogic_CustomLogicCutsceneBuiltin_o *
CustomLogic_CustomLogicCutsceneBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin);
    Il2CppMethodInitialized_07546cfc = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCutsceneBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin);
  if (Il2CppMethodInitialized_07546cf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546cf4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicCutsceneBuiltin_o *)__this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5aca910

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546d03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d03 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5aca980

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__Start>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__Start_b__2_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aca990

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__Start_b__2_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool full;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_07546d04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546d04 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05acaa42:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      full = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (__a->m_Items[1],
                        (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
        CustomLogic_CustomLogicCutsceneBuiltin__Start(__c,name,full,method);
        return (Il2CppObject *)0x0;
      }
      goto label_05acaa42;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogue>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogue_b__3_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5acaa50

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogue_b__3_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *icon;
  System_String_o *title;
  System_String_o *content;
  CustomLogic_CustomLogicCutsceneBuiltin_o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07546d05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546d05 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05acab18:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    icon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      title = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicCutsceneBuiltin_o *)__a->m_Items[2];
        content = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
          CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue(__this_00,icon,title,content,in_R8);
          return (Il2CppObject *)0x0;
        }
        goto label_05acab18;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogueForTime>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogueForTime_b__4_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5acab20

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogueForTime_b__4_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *icon;
  System_String_o *title;
  System_String_o *content;
  MethodInfo *in_R8;
  float time;
  
  if (Il2CppMethodInitialized_07546d06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546d06 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05acac1a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    icon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      title = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        content = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[2],
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if ((__a->max_length & 0xfffffffc) != 0) {
          time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[3],
                            (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
            CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime(__c,icon,title,content,time,in_R8);
            return (Il2CppObject *)0x0;
          }
          goto label_05acac1a;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__HideDialogue>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__HideDialogue_b__5_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5acac20

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__HideDialogue_b__5_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
            ((CustomLogic_CustomLogicCutsceneBuiltin_o *)__this,(MethodInfo *)__c);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aca100

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546cfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ShowDialogue");
    il2cpp_codegen_initialize_runtime_metadata(&"Start");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowDialogueForTime");
    il2cpp_codegen_initialize_runtime_metadata(&"HideDialogue");
    Il2CppMethodInitialized_07546cfd = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Start",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ShowDialogue",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ShowDialogueForTime",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"HideDialogue",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCutsceneBuiltin not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings)
    ;
    pCVar2 = CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__Start
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start (const MethodInfo* method);
// 0x5aca2e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aca315: jmp 0x5aca385

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCutsceneBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546cfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__Start_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546cfe = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__Start_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogue
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue (const MethodInfo* method);
// 0x5aca420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aca455: jmp 0x5aca4c5

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCutsceneBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546cff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogue_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546cff = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogue_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogueForTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime (const MethodInfo* method);
// 0x5aca560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aca595: jmp 0x5aca605

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCutsceneBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogueForTime_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d00 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogueForTime_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__HideDialogue
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue (const MethodInfo* method);
// 0x5aca6a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aca6d5: jmp 0x5aca745

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCutsceneBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__HideDialogue_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d01 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__HideDialogue_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5aca7e0

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546d02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ShowDialogue");
    il2cpp_codegen_initialize_runtime_metadata(&"Start");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowDialogueForTime");
    il2cpp_codegen_initialize_runtime_metadata(&"HideDialogue");
    Il2CppMethodInitialized_07546d02 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Start",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowDialogue",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowDialogueForTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HideDialogue",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6___ctor (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5ac9f60

void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_IDisposable_Dispose (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x5acac40

void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_IDisposable_Dispose
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__MoveNext (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x5acac50

bool CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__MoveNext
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  System_String_o *className;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_07546d07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Start");
    Il2CppMethodInitialized_07546d07 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    className = (__this->fields).name;
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      classInstance =
           CustomLogic_CustomLogicEvaluator__CreateClassInstance
                     (pCVar3,className,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,
                      true,(MethodInfo *)0x0);
      CustomLogic_CustomLogicManager__ToggleCutscene((__this->fields).full,(MethodInfo *)0x0);
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                           (pCVar3,classInstance,"Start",(System_Object_array *)0x0,0,
                            (MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        goto label_05acae1c;
      }
    }
label_05acae30:
    ThrowNullReferenceException();
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    CustomLogic_CustomLogicManager__ToggleCutscene(false,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_05acae30;
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
  }
label_05acae1c:
  return iVar2 == 0;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x5acae40

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x5acae50

void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x5acae90

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5___ctor (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5ac9f40

void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_IDisposable_Dispose (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x5acaea0

void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_IDisposable_Dispose
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__MoveNext (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x5acaeb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acb08f: mov rdi, r14

bool CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__MoveNext
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  System_String_o *icon;
  System_String_o *title;
  System_String_o *content;
  UnityEngine_WaitForSeconds_o *__this_00;
  UI_InGameMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_07546d08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07546d08 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    icon = (__this->fields).icon;
    title = (__this->fields).title;
    content = (__this->fields).content;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (__this_01 == (UI_InGameMenu_o *)0x0) {
label_05acb097:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
label_05acb092:
      il2cpp_codegen_raise_invalid_cast_exception(__this_01);
    }
    UI_InGameMenu__ShowCutsceneMenu
              (__this_01,icon,title,content,TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene,
               (MethodInfo *)0x0);
    seconds = (__this->fields).time;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_05acb097;
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu))
    goto label_05acb092;
    UI_InGameMenu__HideCutsceneMenu(__this_01,(MethodInfo *)0x0);
  }
  return iVar2 == 0;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x5acb0a0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x5acb0b0

void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5_System_Collections_IEnum
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x5acb0f0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin___ctor (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x5ac99d0

void CustomLogic_CustomLogicCutsceneBuiltin___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546cf4 = '\x01';
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


// CustomLogic.CustomLogicCutsceneBuiltin$$Start
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__Start (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* name, bool full, const MethodInfo* method);
// 0x5ac9a40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac9b33: jmp 0x5ac9a97

void CustomLogic_CustomLogicCutsceneBuiltin__Start
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *name,bool full,
               MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicManager_o *__this_00;
  CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this_01;
  
  if (Il2CppMethodInitialized_07546cf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546cf5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicManager_o **)
                 ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields;
  }
  if (Il2CppMethodInitialized_07546cfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
    Il2CppMethodInitialized_07546cfa = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).__1__state = 0;
  (__this_01->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).name);
  (__this_01->fields).full = full;
  if (__this_00 == (CustomLogic_CustomLogicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_01,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogue
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, const MethodInfo* method);
// 0x5ac9bb0

void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_07546cf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07546cf6 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  UI_InGameMenu__ShowCutsceneMenu
            (__this_00,icon,title,content,TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogueForTime
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, float time, const MethodInfo* method);
// 0x5ac9ca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac9dcc: jmp 0x5ac9d06

void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,float time,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicManager_o *__this_00;
  CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this_01;
  
  if (Il2CppMethodInitialized_07546cf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546cf7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicManager_o **)
                 ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields;
  }
  if (Il2CppMethodInitialized_07546cf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
    Il2CppMethodInitialized_07546cf9 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).__1__state = 0;
  (__this_01->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).icon);
  (__this_01->fields).title = title;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).title);
  (__this_01->fields).content = content;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).content);
  (__this_01->fields).time = time;
  if (__this_00 == (CustomLogic_CustomLogicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_01,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$HideDialogue
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x5ac9e80

void CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_07546cf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07546cf8 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$routine_ShowDialogueForTime
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, float time, const MethodInfo* method);
// 0x5ac9de0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
          System_String_o *content,float time,MethodInfo *method)

{
  CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_07546cf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
    Il2CppMethodInitialized_07546cf9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).icon);
  (__this_00->fields).title = title;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).title);
  (__this_00->fields).content = content;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).content);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$StartCutscene
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* name, bool full, const MethodInfo* method);
// 0x5ac9b40

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *name,bool full,MethodInfo *method
          )

{
  CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_07546cfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
    Il2CppMethodInitialized_07546cfa = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).name);
  (__this_00->fields).full = full;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCutsceneBuiltin__get_ClassName (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x5ac9f80

System_String_o *
CustomLogic_CustomLogicCutsceneBuiltin__get_ClassName
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546cfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cutscene");
    Il2CppMethodInitialized_07546cfb = '\x01';
  }
  return "Cutscene";
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsAbstract (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x5ac9fb0

bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsStatic (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x5ac9fc0

bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsStatic
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x5ac9fd0

bool CustomLogic_CustomLogicCutsceneBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


