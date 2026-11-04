// Type: CustomLogic.CustomLogicCommandsBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCommandsBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCommandsBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCommandsBuiltin_o* CustomLogic_CustomLogicCommandsBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182016800

CustomLogic_CustomLogicCommandsBuiltin_o *
CustomLogic_CustomLogicCommandsBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843462e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin);
    Il2CppMethodInitialized_1843462e9 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin);
      if (Il2CppMethodInitialized_1843462e4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843462e4 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCommandsBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCommandsBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182019440

void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843462ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462ee = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterCommand>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__RegisterCommand_b__2_0 (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCommandsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820182a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820183a4: mov rsi, qword ptr [rip + 0x2066b7d]  ; ""

Il2CppObject *
CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__RegisterCommand_b__2_0
          (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCommandsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  System_String_o *name;
  CustomLogic_UserMethod_o *callback;
  System_String_o *description;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  uint uVar4;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843462ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843462ef = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar3,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if (1 < (uint)__a->max_length) {
      callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
      pSVar2 = "None";
      uVar4 = (uint)__a->max_length;
      description = "";
      if (2 < (int)uVar4) {
        if (uVar4 < 3) goto label_1820184e2;
        pIVar3 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        description = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (pIVar3,(MethodInfo_66EB70 *)
                                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      }
      uVar4 = (uint)__a->max_length;
      if (3 < (int)uVar4) {
        if (uVar4 < 4) goto label_1820184e2;
        pIVar3 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar3,(MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      }
      if (Il2CppMethodInitialized_1843462e5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
        il2cpp_codegen_initialize_runtime_metadata(&"playeridlist");
        il2cpp_codegen_initialize_runtime_metadata(&"playerid");
        Il2CppMethodInitialized_1843462e5 = '\x01';
      }
      if ((pSVar2 == (System_String_o *)0x0) &&
         (pSVar2 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), pSVar2 == (System_String_o *)0x0)
         ) {
        ThrowNullReferenceException();
      }
      pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,"playerid",(MethodInfo *)0x0);
      if (bVar1) {
        uVar4 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(pSVar2,"playeridlist",(MethodInfo *)0x0);
        uVar4 = -(uint)bVar1 & 2;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_res18[0] =
           GameManagers_ChatManager__RegisterCustomCommand(name,callback,description,uVar4,(MethodInfo *)0x0);
      pIVar3 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar3;
    }
  }
label_1820184e2:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ParseCommands>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__ParseCommands_b__3_0 (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCommandsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820181a0

Il2CppObject *
CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__ParseCommands_b__3_0
          (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCommandsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *text;
  System_String_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462f0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      text = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (Il2CppMethodInitialized_1843462e6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
        Il2CppMethodInitialized_1843462e6 = '\x01';
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      parameterValues = GameManagers_ChatManager__ParseCommandArgs(text,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
      CustomLogic_CustomLogicListBuiltin___ctor_1ed1720
                (__this_00,(System_Object_array *)parameterValues,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCommandsBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ffacc0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicCommandsBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843462ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ParseCommands");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterCommand");
    Il2CppMethodInitialized_1843462ea = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"RegisterCommand",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843462eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__RegisterCommand_b__2_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
      Il2CppMethodInitialized_1843462eb = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ffaf2d;
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__RegisterCommand_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicCommandsBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__2_0;
  }
  else {
    bVar2 = System_String__op_Equality(name,"ParseCommands",(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCommandsBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843462ec == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__ParseCommands_b__3_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
      Il2CppMethodInitialized_1843462ec = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__3_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ffaf2d;
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__ParseCommands_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicCommandsBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__3_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181ffaf2d:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$__CreateMethodBinding__RegisterCommand
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o* CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__RegisterCommand (const MethodInfo* method);
// 0x181fff610

CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__RegisterCommand(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__RegisterCommand_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__RegisterCommand_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicCommandsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$__CreateMethodBinding__ParseCommands
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o* CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__ParseCommands (const MethodInfo* method);
// 0x181fff4f0

CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__ParseCommands(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__ParseCommands_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462ec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__ParseCommands_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicCommandsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182009cb0

void CustomLogic_CustomLogicCommandsBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843462ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ParseCommands");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterCommand");
    Il2CppMethodInitialized_1843462ed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterCommand",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ParseCommands",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCommandsBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin___ctor (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x18200c610

void CustomLogic_CustomLogicCommandsBuiltin___ctor
               (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843462e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin$$RegisterCommand
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__RegisterCommand (System_String_o* command, CustomLogic_UserMethod_o* method, System_String_o* description, System_String_o* autofill, const MethodInfo* method);
// 0x18200c520

bool CustomLogic_CustomLogicCommandsBuiltin__RegisterCommand
               (System_String_o *command,CustomLogic_UserMethod_o *method,System_String_o *description,
               System_String_o *autofill,MethodInfo *methodInfo)

{
  bool bVar1;
  System_String_o *a;
  uint autofillType;
  
  if (Il2CppMethodInitialized_1843462e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"playeridlist");
    il2cpp_codegen_initialize_runtime_metadata(&"playerid");
    Il2CppMethodInitialized_1843462e5 = '\x01';
  }
  if ((autofill == (System_String_o *)0x0) &&
     (autofill = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), autofill == (System_String_o *)0x0)
     ) {
    ThrowNullReferenceException();
  }
  a = System_String__ToLower(autofill,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,"playerid",(MethodInfo *)0x0);
  if (bVar1) {
    autofillType = 1;
  }
  else {
    bVar1 = System_String__op_Equality(a,"playeridlist",(MethodInfo *)0x0);
    autofillType = -(uint)bVar1 & 2;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__RegisterCustomCommand
                    (command,method,description,autofillType,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicCommandsBuiltin$$ParseCommands
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicCommandsBuiltin__ParseCommands (System_String_o* text, const MethodInfo* method);
// 0x18200c490

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicCommandsBuiltin__ParseCommands(System_String_o *text,MethodInfo *method)

{
  System_String_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_1843462e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    Il2CppMethodInitialized_1843462e6 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  parameterValues = GameManagers_ChatManager__ParseCommandArgs(text,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor_1ed1720
            (__this,(System_Object_array *)parameterValues,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCommandsBuiltin$$ClearCommands
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin__ClearCommands (const MethodInfo* method);
// 0x18200c450

void CustomLogic_CustomLogicCommandsBuiltin__ClearCommands(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_1843462e7 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__ClearCustomCommands((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCommandsBuiltin__get_ClassName (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x18200c660

System_String_o *
CustomLogic_CustomLogicCommandsBuiltin__get_ClassName
          (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Commands");
    Il2CppMethodInitialized_1843462e8 = '\x01';
  }
  return "Commands";
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_IsAbstract (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCommandsBuiltin__get_IsAbstract(CustomLogic_CustomLogicCommandsBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_IsStatic (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCommandsBuiltin__get_IsStatic(CustomLogic_CustomLogicCommandsBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCommandsBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicCommandsBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


