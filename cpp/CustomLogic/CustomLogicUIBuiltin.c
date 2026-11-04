// Type: CustomLogic.CustomLogicUIBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUIBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicUIBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicUIBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUIBuiltin_o* CustomLogic_CustomLogicUIBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074940

CustomLogic_CustomLogicUIBuiltin_o *
CustomLogic_CustomLogicUIBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicUIBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434666e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434666e = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      if (Il2CppMethodInitialized_18434663c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434663c = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicUIBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b430

void CustomLogic_CustomLogicUIBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843466a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843466a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicUIBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabel>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabel_b__5_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820797d0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabel_b__5_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843466a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a1 = '\x01';
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
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      if (Il2CppMethodInitialized_184346644 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
        Il2CppMethodInitialized_184346644 = '\x01';
      }
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
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
// 0x182079680

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTime_b__6_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  float time;
  
  if (Il2CppMethodInitialized_1843466a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                        );
      if (1 < (uint)__a->max_length) {
        message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                            );
        if (2 < (uint)__a->max_length) {
          time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[2],
                            (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          if (Il2CppMethodInitialized_184346645 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
            Il2CppMethodInitialized_184346645 = '\x01';
          }
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          GameManagers_InGameManager__SetLabel(label,message,time,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelAll>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelAll_b__7_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079200

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelAll_b__7_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843466a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a3 = '\x01';
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
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      CustomLogic_CustomLogicUIBuiltin__SetLabelAll(label,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelForTimeAll>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTimeAll_b__8_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079560

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTimeAll_b__8_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  float time;
  
  if (Il2CppMethodInitialized_1843466a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                        );
      if (1 < (uint)__a->max_length) {
        message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                            );
        if (2 < (uint)__a->max_length) {
          time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[2],
                            (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll(label,message,time,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreatePopup>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__CreatePopup_b__9_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076ce0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__CreatePopup_b__9_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t iVar1;
  int32_t iVar2;
  System_String_o *name;
  System_String_o *title;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (1 < (uint)__a->max_length) {
        title = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (__a->m_Items[2],
                             (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          if (3 < (uint)__a->max_length) {
            iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                              (__a->m_Items[3],
                               (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
            ;
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
            }
            if (Il2CppMethodInitialized_184346648 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
              Il2CppMethodInitialized_184346648 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
            }
            __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
            if (__this_00 != (UI_InGameMenu_o *)0x0) {
              UI_InGameMenu__CreateCustomPopup
                        (__this_00,name,title,(float)iVar1,(float)iVar2,(MethodInfo *)0x0);
              return (Il2CppObject *)name;
            }
            goto label_182076e60;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_182076e60:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowPopup>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowPopup_b__10_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207a3b0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowPopup_b__10_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  UI_InGameMenu_o *__this_00;
  UI_CustomPopup_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843466a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346649 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_184346649 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      pUVar1 = UI_InGameMenu__GetCustomPopup(__this_00,name,(MethodInfo *)0x0);
      if (pUVar1 != (UI_CustomPopup_o *)0x0) {
        (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__HidePopup>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__HidePopup_b__11_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077780

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__HidePopup_b__11_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  UI_InGameMenu_o *__this_00;
  UI_CustomPopup_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843466a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_18434664a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_18434664a = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      pUVar1 = UI_InGameMenu__GetCustomPopup(__this_00,name,(MethodInfo *)0x0);
      if (pUVar1 != (UI_CustomPopup_o *)0x0) {
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearPopup>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ClearPopup_b__12_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076be0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ClearPopup_b__12_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  UI_InGameMenu_o *__this_00;
  UI_CustomPopup_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_18434664b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_18434664b = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      __this_01 = UI_InGameMenu__GetCustomPopup(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UI_CustomPopup_o *)0x0) {
        UI_CustomPopup__Clear(__this_01,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupLabel>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupLabel_b__13_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076730

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupLabel_b__13_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  System_String_o *label;
  UI_InGameMenu_o *__this_00;
  UI_CustomPopup_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466a9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_18207684d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      if (Il2CppMethodInitialized_18434664c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        Il2CppMethodInitialized_18434664c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
      if (__this_00 != (UI_InGameMenu_o *)0x0) {
        __this_01 = UI_InGameMenu__GetCustomPopup(__this_00,name,(MethodInfo *)0x0);
        if (__this_01 != (UI_CustomPopup_o *)0x0) {
          UI_CustomPopup__AddLabel(__this_01,label,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      goto label_18207684d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupButton>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButton_b__14_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076460

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButton_b__14_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  System_String_o *name_00;
  System_String_o *title;
  UI_InGameMenu_o *__this_00;
  UI_CustomPopup_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466aa = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (1 < (uint)__a->max_length) {
        name_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                            );
        if (2 < (uint)__a->max_length) {
          title = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[2],
                             (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                            );
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          if (Il2CppMethodInitialized_18434664d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
            Il2CppMethodInitialized_18434664d = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
          if (__this_00 != (UI_InGameMenu_o *)0x0) {
            __this_01 = UI_InGameMenu__GetCustomPopup(__this_00,name,(MethodInfo *)0x0);
            if (__this_01 != (UI_CustomPopup_o *)0x0) {
              UI_CustomPopup__AddButton(__this_01,name_00,title,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_1820765a7;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820765a7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupBottomButton>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupBottomButton_b__15_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076300

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupBottomButton_b__15_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  System_String_o *name_00;
  System_String_o *title;
  UI_InGameMenu_o *__this_00;
  UI_CustomPopup_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466ab = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (1 < (uint)__a->max_length) {
        name_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                            );
        if (2 < (uint)__a->max_length) {
          title = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[2],
                             (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                            );
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          if (Il2CppMethodInitialized_18434664e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
            Il2CppMethodInitialized_18434664e = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
          if (__this_00 != (UI_InGameMenu_o *)0x0) {
            __this_01 = UI_InGameMenu__GetCustomPopup(__this_00,name,(MethodInfo *)0x0);
            if (__this_01 != (UI_CustomPopup_o *)0x0) {
              UI_CustomPopup__AddBottomButton(__this_01,name_00,title,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_182076447;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_182076447:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupButtons>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButtons_b__16_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820765c0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButtons_b__16_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  UI_InGameMenu_o *__this_00;
  UI_CustomPopup_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466ac = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (1 < (uint)__a->max_length) {
        pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
        if (2 < (uint)__a->max_length) {
          pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          if (Il2CppMethodInitialized_18434664f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
            Il2CppMethodInitialized_18434664f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
          if (__this_00 != (UI_InGameMenu_o *)0x0) {
            __this_01 = UI_InGameMenu__GetCustomPopup(__this_00,name,(MethodInfo *)0x0);
            if (((pCVar1 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
                (pCVar2 != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) &&
               (__this_01 != (UI_CustomPopup_o *)0x0)) {
              UI_CustomPopup__AddButtons
                        (__this_01,(pCVar1->fields).List,(pCVar2->fields).List,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_18207671f;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_18207671f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__WrapStyleTag>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__WrapStyleTag_b__17_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207af60

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__WrapStyleTag_b__17_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o *style;
  System_String_o *arg;
  
  if (Il2CppMethodInitialized_1843466ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466ad = '\x01';
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
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      style = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      arg = (System_String_o *)0x0;
      uVar1 = (uint)__a->max_length;
      if (2 < (int)uVar1) {
        if (uVar1 < 3) goto label_18207b07b;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        arg = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      }
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      pSVar3 = CustomLogic_CustomLogicUIBuiltin__WrapStyleTag(pSVar3,style,arg,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar3;
    }
  }
label_18207b07b:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowChangeCharacterMenu>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowChangeCharacterMenu_b__18_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207a230

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowChangeCharacterMenu_b__18_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  GameManagers_BaseGameManager_c *x;
  void *pvVar3;
  bool bVar4;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466ae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_184346651 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346651 = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
    x = (*(uint64_t *)((char *)pGVar2 + 0x78));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar4) && ((*(uint64_t *)((char *)pGVar2 + 0x78)) != (GameManagers_BaseGameManager_c *)0x0)) {
      pvVar3 = (((*(Il2CppClass **)((char *)pGVar2 + 0x78)))->_1).image;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= *(byte *)((longlong)pvVar3 + 0x130)) &&
         (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar3 + 200) + -8 + (ulonglong)bVar1 * 8) ==
          TypeInfo_Characters_Human)) {
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        }
        __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
        if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_18207a39c;
        UI_InGameMenu__ShowCharacterChangeMenu(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
label_18207a39c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScoreboardHeader>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardHeader_b__19_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079ac0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardHeader_b__19_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843466af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466af = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346652 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_184346652 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar1->fields).ScoreboardHeader = value;
      Il2CppCodeGenWriteBarrier(&(pCVar1->fields).ScoreboardHeader,value);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScoreboardProperty>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardProperty_b__20_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079bc0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardProperty_b__20_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843466b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346653 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      il2cpp_codegen_initialize_runtime_metadata(&"CL:");
      Il2CppMethodInitialized_184346653 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    pSVar2 = System_String__Concat_1969e50("CL:",pSVar2,(MethodInfo *)0x0);
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar1->fields).ScoreboardProperty = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pCVar1->fields).ScoreboardProperty,pSVar2);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetThemeColor>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetThemeColor_b__21_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820774d0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetThemeColor_b__21_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  undefined8 uVar1;
  undefined8 uVar2;
  System_String_o *panel;
  System_String_o *category;
  System_String_o *item;
  UnityEngine_Color_o *pUVar3;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843466b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      panel = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                        );
      if (1 < (uint)__a->max_length) {
        category = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          item = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[2],
                            (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
          ;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
          }
          if (Il2CppMethodInitialized_184346654 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
            il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
            Il2CppMethodInitialized_184346654 = '\x01';
          }
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar3 = UI_UIManager__GetThemeColor
                             ((UnityEngine_Color_o *)local_28,panel,category,item,"DefaultPanel",
                              (MethodInfo *)0x0);
          uVar1._0_4_ = (pUVar3->fields).r;
          uVar1._4_4_ = (pUVar3->fields).g;
          uVar2._0_4_ = (pUVar3->fields).b;
          uVar2._4_4_ = (pUVar3->fields).a;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          local_28[0]._0_8_ = uVar1;
          local_28[0]._8_8_ = uVar2;
          Utility_Color255___ctor_23327a0(__this_00,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_01,__this_00,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPopupActive>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__IsPopupActive_b__22_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077b40

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__IsPopupActive_b__22_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_String_o *name;
  UI_InGameMenu_o *__this_00;
  UI_CustomPopup_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843466b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346655 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_184346655 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      pUVar1 = UI_InGameMenu__GetCustomPopup(__this_00,name,(MethodInfo *)0x0);
      if (pUVar1 != (UI_CustomPopup_o *)0x0) {
        local_res18[0] = (pUVar1->fields).IsActive;
        pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelActive>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelActive_b__23_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820790d0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelActive_b__23_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  System_String_o *label;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820791ea:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                         (__a->m_Items[1],
                          (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      if (Il2CppMethodInitialized_184346657 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        Il2CppMethodInitialized_184346657 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
      if (__this_00 != (UI_InGameMenu_o *)0x0) {
        UI_InGameMenu__SetLabelActive(__this_00,label,active,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_1820791ea;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelBackgroundColor>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelBackgroundColor_b__24_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079400

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelBackgroundColor_b__24_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Utility_Color255_o *__this_00;
  System_String_o *label;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  UI_InGameMenu_o *__this_01;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843466b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_18207954b:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      if (Il2CppMethodInitialized_184346658 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        Il2CppMethodInitialized_184346658 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
      __this_01 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
      if ((pCVar1 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
         (__this_00 = (pCVar1->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
        pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UI_InGameMenu_o *)0x0) {
          local_18.r = (pUVar2->fields).r;
          local_18.g = (pUVar2->fields).g;
          local_18.b = (pUVar2->fields).b;
          local_18.a = (pUVar2->fields).a;
          UI_InGameMenu__SetLabelBackgroundColor
                    (__this_01,label,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      goto label_18207954b;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelBackgroundColorAll>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelBackgroundColorAll_b__25_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820792d0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelBackgroundColorAll_b__25_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  UI_InGameMenu_o *__this_01;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843466b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346659 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_184346659 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_01 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if ((pCVar1 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_00 = (pCVar1->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
      pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UI_InGameMenu_o *)0x0) {
        local_18.r = (pUVar2->fields).r;
        local_18.g = (pUVar2->fields).g;
        local_18.b = (pUVar2->fields).b;
        local_18.a = (pUVar2->fields).a;
        UI_InGameMenu__SetLabelBackgroundColorAll
                  (__this_01,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKDRPanelActive>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetKDRPanelActive_b__26_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078fe0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetKDRPanelActive_b__26_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_18434665a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_18434665a = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      UI_InGameMenu__SetKDRPanelActive(__this_00,active,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetMinimapActive>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetMinimapActive_b__27_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820798e0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetMinimapActive_b__27_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_18434665b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_18434665b = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      UI_InGameMenu__SetMinimapActive(__this_00,active,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetChatPanelActive>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetChatPanelActive_b__28_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078b90

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetChatPanelActive_b__28_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_18434665c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_18434665c = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      UI_InGameMenu__SetChatPanelActive(__this_00,active,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFeedPanelActive>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetFeedPanelActive_b__29_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078c80

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetFeedPanelActive_b__29_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466b9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_18434665d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_18434665d = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      UI_InGameMenu__SetFeedPanelActive(__this_00,active,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBottomHUDActive>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetBottomHUDActive_b__30_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078aa0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetBottomHUDActive_b__30_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool active;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466ba = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    active = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_18434665e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_18434665e = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      UI_InGameMenu__SetBottomHUDActive(__this_00,active,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetRootVisualElement>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetRootVisualElement_b__31_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077380

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetRootVisualElement_b__31_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  UI_InGameMenu_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_18434665f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    Il2CppMethodInitialized_18434665f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    visualElement = UI_InGameMenu__get_RootVisualElement(__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin)
    ;
    CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_01,visualElement,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__VisualElement>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__VisualElement_b__32_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207aeb0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__VisualElement_b__32_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_184346660 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_VisualElement);
    Il2CppMethodInitialized_184346660 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_01,__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Button>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Button_b__33_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076860
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18207690b: mov rdi, qword ptr [rip + 0x2008616]  ; ""

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Button_b__33_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  CustomLogic_UserMethod_o *value;
  UnityEngine_UIElements_Button_o *pUVar4;
  CustomLogic_CustomLogicButtonBuiltin_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *__this_01;
  System_Action_o *__this_02;
  
  if (Il2CppMethodInitialized_1843466bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466bd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pSVar3 = "";
    if (__a->max_length != 0) {
      if ((int)__a->max_length == 0) goto label_182076a8d;
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    }
    value = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) {
label_182076a8d:
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346661 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Button);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin);
      Il2CppMethodInitialized_184346661 = '\x01';
    }
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Button);
    UnityEngine_UIElements_Button___ctor(pUVar4,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_Button_o *)0x0) {
      (*(pUVar4->klass->vtable)._212_set_text.methodPtr)
                (pUVar4,pSVar3,(pUVar4->klass->vtable)._212_set_text.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin);
      if (Il2CppMethodInitialized_184346568 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick);
        Il2CppMethodInitialized_184346568 = '\x01';
      }
      CustomLogic_CustomLogicVisualElementBuiltin___ctor
                ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
                 (UnityEngine_UIElements_VisualElement_o *)pUVar4,(MethodInfo *)0x0);
      (__this_00->fields)._button = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._button,pUVar4);
      pUVar4 = (__this_00->fields)._button;
      if (pUVar4 != (UnityEngine_UIElements_Button_o *)0x0) {
        __this_01 = UnityEngine_UIElements_Button__get_clickable
                              ((UnityEngine_UIElements_PopupWindow_o *)pUVar4,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        System_Action___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
          UnityEngine_UIElements_Clickable__add_clicked
                    ((UnityEngine_UIElements_Clickable_o *)__this_01,__this_02,(MethodInfo *)0x0);
          (__this_00->fields)._clickEvent = value;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._clickEvent,value);
          return (Il2CppObject *)__this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Label>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Label_b__34_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077c50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182077ce5: mov rbx, qword ptr [rip + 0x200723c]  ; ""

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Label_b__34_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  UnityEngine_UIElements_Label_o *__this_00;
  CustomLogic_CustomLogicLabelBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466be = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pSVar1 = "";
    if (__a->max_length != 0) {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346662 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLabelBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Label);
      Il2CppMethodInitialized_184346662 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Label);
    UnityEngine_UIElements_Label___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UIElements_Label_o *)0x0) {
      (*(__this_00->klass->vtable)._212_set_text.methodPtr)
                (__this_00,pSVar1,(__this_00->klass->vtable)._212_set_text.method);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin);
      CustomLogic_CustomLogicVisualElementBuiltin___ctor
                ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_01,
                 (UnityEngine_UIElements_VisualElement_o *)__this_00,(MethodInfo *)0x0);
      (__this_01->fields)._label = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._label,__this_00);
      return (Il2CppObject *)__this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextField>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__TextField_b__35_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207ab50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18207abe0: mov rbx, qword ptr [rip + 0x2004341]  ; ""

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__TextField_b__35_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  UnityEngine_UIElements_TextField_o *__this_00;
  CustomLogic_CustomLogicTextFieldBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466bf = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  label = "";
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_184346663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_TextField);
    Il2CppMethodInitialized_184346663 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_TextField);
  UnityEngine_UIElements_TextField___ctor_31e0ff0(__this_00,label,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_01,
             (UnityEngine_UIElements_VisualElement_o *)__this_00,(MethodInfo *)0x0);
  (__this_01->fields)._textField = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._textField,__this_00);
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Toggle>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Toggle_b__36_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207ac90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18207ad36: mov rdi, qword ptr [rip + 0x20041eb]  ; ""

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Toggle_b__36_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *label;
  CustomLogic_UserMethod_o *value;
  UnityEngine_UIElements_Toggle_o *pUVar3;
  CustomLogic_CustomLogicToggleBuiltin_o *__this_00;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  
  if (Il2CppMethodInitialized_1843466c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466c0 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  label = "";
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) goto label_18207ae9d;
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  }
  value = (CustomLogic_UserMethod_o *)0x0;
  uVar1 = (uint)__a->max_length;
  if (1 < (int)uVar1) {
    if (uVar1 < 2) {
label_18207ae9d:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_184346664 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Toggle);
    Il2CppMethodInitialized_184346664 = '\x01';
  }
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Toggle);
  UnityEngine_UIElements_Toggle___ctor_324b9a0(pUVar3,label,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin);
  if (Il2CppMethodInitialized_184346628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_bool
              );
    Il2CppMethodInitialized_184346628 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)pUVar3,(MethodInfo *)0x0);
  (__this_00->fields)._toggle = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._toggle,pUVar3);
  pUVar3 = (__this_00->fields)._toggle;
  __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_bool);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0,(MethodInfo_EB6EC0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)pUVar3,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_01,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_bool
            );
  (__this_00->fields)._valueChangedEvent = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent,value);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slider>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Slider_b__37_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207a7f0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Slider_b__37_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *label;
  CustomLogic_UserMethod_o *value;
  UnityEngine_UIElements_Slider_o *pUVar3;
  CustomLogic_CustomLogicSliderBuiltin_o *__this_00;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  float start;
  float end;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843466c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466c1 = '\x01';
  }
  label = "";
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      start = 0.0;
    }
    else {
      if ((int)__a->max_length == 0) goto label_18207ab48;
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar2,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      end = 100.0;
    }
    else {
      if (uVar1 < 2) goto label_18207ab48;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar2,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    }
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 3) {
      fVar4 = 0.0;
    }
    else {
      if (uVar1 < 3) goto label_18207ab48;
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar2,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    uVar1 = (uint)__a->max_length;
    if (3 < (int)uVar1) {
      if (uVar1 < 4) goto label_18207ab48;
      pIVar2 = __a->m_Items[3];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    }
    value = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (4 < (int)uVar1) {
      if (uVar1 < 5) {
label_18207ab48:
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = __a->m_Items[4];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346665 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Slider);
      Il2CppMethodInitialized_184346665 = '\x01';
    }
    pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Slider);
    UnityEngine_UIElements_Slider___ctor_32328b0(pUVar3,label,start,end,0,0.0,(MethodInfo *)0x0);
    if (0.0 < fVar4) {
      if (pUVar3 == (UnityEngine_UIElements_Slider_o *)0x0) goto label_18207ab42;
      (*(pUVar3->klass->vtable)._166_set_pageSize.methodPtr)(pUVar3,fVar4);
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
    if (Il2CppMethodInitialized_1843465e6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
                );
      Il2CppMethodInitialized_1843465e6 = '\x01';
    }
    CustomLogic_CustomLogicVisualElementBuiltin___ctor
              ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
               (UnityEngine_UIElements_VisualElement_o *)pUVar3,(MethodInfo *)0x0);
    (__this_00->fields)._floatSlider = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._floatSlider,pUVar3);
    (__this_00->fields)._isIntSlider = false;
    pUVar3 = (__this_00->fields)._floatSlider;
    __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0,(MethodInfo_EB6EC0 *)0x0)
    ;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
              ((UnityEngine_UIElements_INotifyValueChanged_T__o *)pUVar3,
               (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_01,
               (MethodInfo_7118E0 *)
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
              );
    (__this_00->fields)._valueChangedEvent = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent,value);
    return (Il2CppObject *)__this_00;
  }
label_18207ab42:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SliderInt>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SliderInt_b__38_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207a4c0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SliderInt_b__38_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  int32_t start;
  int32_t end;
  int32_t iVar3;
  System_String_o *label;
  CustomLogic_UserMethod_o *value;
  UnityEngine_UIElements_SliderInt_o *pUVar4;
  CustomLogic_CustomLogicSliderBuiltin_o *__this_00;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  
  if (Il2CppMethodInitialized_1843466c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466c2 = '\x01';
  }
  label = "";
  if (__a != (System_Object_array *)0x0) {
    start = 0;
    if (__a->max_length != 0) {
      if ((int)__a->max_length == 0) goto label_18207a7e5;
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                        );
    }
    uVar1 = (uint)__a->max_length;
    end = 100;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_18207a7e5;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    }
    uVar1 = (uint)__a->max_length;
    iVar3 = 1;
    if (2 < (int)uVar1) {
      if (uVar1 < 3) goto label_18207a7e5;
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                        );
    }
    uVar1 = (uint)__a->max_length;
    if (3 < (int)uVar1) {
      if (uVar1 < 4) goto label_18207a7e5;
      pIVar2 = __a->m_Items[3];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    }
    value = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (4 < (int)uVar1) {
      if (uVar1 < 5) {
label_18207a7e5:
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = __a->m_Items[4];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346666 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_SliderInt);
      Il2CppMethodInitialized_184346666 = '\x01';
    }
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_SliderInt);
    UnityEngine_UIElements_SliderInt___ctor_3231dd0(pUVar4,label,start,end,0,0.0,(MethodInfo *)0x0);
    if (1 < iVar3) {
      if (pUVar4 == (UnityEngine_UIElements_SliderInt_o *)0x0) goto label_18207a7df;
      (*(pUVar4->klass->vtable)._166_set_pageSize.methodPtr)
                (pUVar4,(float)iVar3,(pUVar4->klass->vtable)._166_set_pageSize.method);
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
    if (Il2CppMethodInitialized_1843465e7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_int);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_int
                );
      Il2CppMethodInitialized_1843465e7 = '\x01';
    }
    CustomLogic_CustomLogicVisualElementBuiltin___ctor
              ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
               (UnityEngine_UIElements_VisualElement_o *)pUVar4,(MethodInfo *)0x0);
    (__this_00->fields)._intSlider = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._intSlider,pUVar4);
    pUVar4 = (__this_00->fields)._intSlider;
    (__this_00->fields)._isIntSlider = true;
    __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_int);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0,(MethodInfo_EB6EC0 *)0x0)
    ;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
              ((UnityEngine_UIElements_INotifyValueChanged_T__o *)pUVar4,
               (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_01,
               (MethodInfo_7118E0 *)
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_int
              );
    (__this_00->fields)._valueChangedEvent = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent,value);
    return (Il2CppObject *)__this_00;
  }
label_18207a7df:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dropdown>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Dropdown_b__39_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076f70

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Dropdown_b__39_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  int32_t defaultIndex;
  CustomLogic_CustomLogicListBuiltin_o *choices;
  System_String_o *label;
  CustomLogic_UserMethod_o *valueChangedEvent;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843466c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466c3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    choices = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    label = "";
    defaultIndex = 0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_182077126;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      defaultIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                               (pIVar2,(MethodInfo_66E9A0 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    }
    uVar1 = (uint)__a->max_length;
    if (2 < (int)uVar1) {
      if (uVar1 < 3) goto label_182077126;
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      label = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    }
    valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (3 < (int)uVar1) {
      if (uVar1 < 4) goto label_182077126;
      pIVar2 = __a->m_Items[3];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      valueChangedEvent =
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    pCVar3 = CustomLogic_CustomLogicUIBuiltin__Dropdown
                       (choices,defaultIndex,label,valueChangedEvent,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar3;
  }
label_182077126:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ProgressBar>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ProgressBar_b__40_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078270

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ProgressBar_b__40_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_UIElements_ProgressBar_o *control;
  System_String_o *value;
  CustomLogic_UserMethod_o *value_00;
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  CustomLogic_CustomLogicProgressBarBuiltin_o *__this_01;
  DG_Tweening_Core_DOSetter_T__o *__this_02;
  float value_01;
  float value_02;
  
  if (Il2CppMethodInitialized_1843466c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466c4 = '\x01';
  }
  value = "";
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      value_01 = 0.0;
    }
    else {
      if ((int)__a->max_length == 0) goto label_182078547;
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value_01 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar2,(MethodInfo_66ED40 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      value_02 = 100.0;
    }
    else {
      if (uVar1 < 2) goto label_182078547;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value_02 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar2,(MethodInfo_66ED40 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    uVar1 = (uint)__a->max_length;
    if (2 < (int)uVar1) {
      if (uVar1 < 3) goto label_182078547;
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    }
    value_00 = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (3 < (int)uVar1) {
      if (uVar1 < 4) {
label_182078547:
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = __a->m_Items[3];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar2,(MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184346668 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ProgressBar);
      Il2CppMethodInitialized_184346668 = '\x01';
    }
    __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_ProgressBar);
    UnityEngine_UIElements_ProgressBar___ctor
              ((UnityEngine_UIElements_ProgressBar_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
      UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this_00,value_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this_00,value_02,(MethodInfo *)0x0);
      UnityEngine_UIElements_AbstractProgressBar__set_title(__this_00,value,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin)
      ;
      if (Il2CppMethodInitialized_1843465b8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
                  );
        Il2CppMethodInitialized_1843465b8 = '\x01';
      }
      CustomLogic_CustomLogicVisualElementBuiltin___ctor
                ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_01,
                 (UnityEngine_UIElements_VisualElement_o *)__this_00,(MethodInfo *)0x0);
      (__this_01->fields)._progressBar = (UnityEngine_UIElements_ProgressBar_o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._progressBar,__this_00);
      control = (__this_01->fields)._progressBar;
      __this_02 = (DG_Tweening_Core_DOSetter_T__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
      UnityEngine_UIElements_EventCallback_object____ctor
                (__this_02,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0,
                 (MethodInfo_EB6EC0 *)0x0);
      UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
                ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
                 (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_02,
                 (MethodInfo_7118E0 *)
                 MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
                );
      (__this_01->fields)._valueChangedEvent = value_00;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._valueChangedEvent,value_00);
      return (Il2CppObject *)__this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollView>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ScrollView_b__41_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820789e0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ScrollView_b__41_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_1843466c5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_184346669 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ScrollView);
    Il2CppMethodInitialized_184346669 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_ScrollView);
  UnityEngine_UIElements_ScrollView___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_01,
             (UnityEngine_UIElements_VisualElement_o *)__this_00,(MethodInfo *)0x0);
  (__this_01->fields)._scrollView = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._scrollView,__this_00);
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Icon>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Icon_b__42_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182077925: mov rsi, qword ptr [rip + 0x20075fc]  ; ""

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Icon_b__42_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *value;
  bool bVar1;
  System_String_o *value_00;
  UnityEngine_UIElements_Image_o *__this_00;
  CustomLogic_CustomLogicIconBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843466c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466c6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  value_00 = "";
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_18434666a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Image);
    Il2CppMethodInitialized_18434666a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Image);
  UnityEngine_UIElements_Image___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_01,
             (UnityEngine_UIElements_VisualElement_o *)__this_00,(MethodInfo *)0x0);
  (__this_01->fields)._image = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._image,__this_00);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this_01->fields)._currentIconPath = value;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._currentIconPath,value);
  bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if (!bVar1) {
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__this_01,value_00,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Image>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Image_b__43_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077a10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182077aa5: mov rdi, qword ptr [rip + 0x200747c]  ; ""

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Image_b__43_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicUIBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool bVar1;
  System_String_o *value;
  CustomLogic_CustomLogicImageBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_1843466c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843466c7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182077b25:
    ThrowNullReferenceException();
  }
  value = "";
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_18434666b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin);
    Il2CppMethodInitialized_18434666b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin);
  CustomLogic_CustomLogicImageBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (__this_00 == (CustomLogic_CustomLogicImageBuiltin_o *)0x0) goto label_182077b25;
    CustomLogic_CustomLogicImageBuiltin__SetImage(__this_00,value,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUIBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182044ff0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUIBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  System_Func_CustomLogicUIBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this_00;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_18434666f == '\0') {
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
    Il2CppMethodInitialized_18434666f = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (0x70e4ec14 < uVar3) {
    if (uVar3 < 0xbbd01376) {
      if (uVar3 < 0x9eccf29e) {
        if (uVar3 < 0x8e6a8408) {
          if (uVar3 == 0x8105de5a) {
            bVar2 = System_String__op_Equality(name,"SetKDRPanelActive",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184346688 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetKDRPanelActive_b__26_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                Il2CppMethodInitialized_184346688 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__26_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
                   ) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetKDRPanelActive_b__26_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__26_0 =
                     (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__26_0,
                           pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
          }
          else if (uVar3 == 0x8e6a8407) {
            bVar2 = System_String__op_Equality(name,"SetLabelForTime",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184346674 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTime_b__6_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                Il2CppMethodInitialized_184346674 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__6_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
                   ) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTime_b__6_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__6_0 =
                     (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__6_0,
                           pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
          }
        }
        else if (uVar3 == 0x9a3972f4) {
          bVar2 = System_String__op_Equality(name,"AddPopupLabel",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434667b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupLabel_b__13_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434667b = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__13_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupLabel_b__13_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__13_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__13_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x9b74c01c) {
          bVar2 = System_String__op_Equality(name,"Slider",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346693 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Slider_b__37_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346693 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__37_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Slider_b__37_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__37_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__37_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x9eccf29d) {
          bVar2 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346690 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Label_b__34_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346690 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__34_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Label_b__34_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__34_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__34_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
      else {
        if (0xab9e5c85 < uVar3) {
          if (uVar3 == 0xb3a837ef) {
            bVar2 = System_String__op_Equality(name,"GetThemeColor",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184346683 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetThemeColor_b__21_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                Il2CppMethodInitialized_184346683 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__21_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
                   ) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetThemeColor_b__21_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__21_0 =
                     (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__21_0,
                           pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
            goto label_1820489fb;
          }
          if (uVar3 != 0xb6dc3cfc) {
            if (uVar3 == 0xbbd01375) {
              bVar2 = System_String__op_Equality(name,"ScrollView",(MethodInfo *)0x0);
              if (bVar2) {
                if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
                }
                if (Il2CppMethodInitialized_184346697 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ScrollView_b__41_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                  Il2CppMethodInitialized_184346697 = '\x01';
                }
                if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
                   ) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                }
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__41_0;
                if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                      0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
                  }
                  pIVar1 = (Il2CppObject *)
                           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
                  pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                           il2cpp_codegen_object_new
                                     ((Il2CppClass *)
                                      TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
                  System_Func_object__object__object____ctor
                            (pEVar4,pIVar1,
                             (intptr_t)
                             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ScrollView_b__41_0
                             ,(MethodInfo *)0x0);
                  TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__41_0 =
                       (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
                  Il2CppCodeGenWriteBarrier
                            (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__41_0,
                             pEVar4);
                }
                pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
                CustomLogic_CLMethodBinding_object____ctor
                          (pSVar5,(System_String_o *)pEVar4,
                           MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
                return (CustomLogic_ICLMemberBinding_o *)pSVar5;
              }
            }
            goto label_1820489fb;
          }
          bVar2 = System_String__op_Equality(name,"GetPopups",(MethodInfo *)0x0);
          if (!bVar2) goto label_1820489fb;
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346672 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__GetPopups_g____getter_4_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object);
            Il2CppMethodInitialized_184346672 = '\x01';
          }
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__GetPopups_g____getter_4_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
          goto label_1820489d6;
        }
        if (uVar3 == 0xa76f5664) {
          bVar2 = System_String__op_Equality(name,"ShowChangeCharacterMenu",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346680 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowChangeCharacterMenu_b__18
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346680 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__18_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowChangeCharacterMenu_b__18
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__18_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__18_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0xab9e5c85) {
          bVar2 = System_String__op_Equality(name,"HidePopup",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346679 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__HidePopup_b__11_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346679 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__11_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__HidePopup_b__11_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__11_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__11_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
    }
    else if (uVar3 < 0xd4660d27) {
      if (uVar3 < 0xc1afe526) {
        if (uVar3 == 0xbfe92359) {
          bVar2 = System_String__op_Equality(name,"GetRootVisualElement",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434668d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetRootVisualElement_b__31_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434668d = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__31_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetRootVisualElement_b__31_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__31_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__31_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0xc1afe525) {
          bVar2 = System_String__op_Equality(name,"SetLabelBackgroundColorAll",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346687 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColorAll_b
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346687 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__25_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColorAll_b
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__25_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__25_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
      else if (uVar3 == 0xc3967d6b) {
        bVar2 = System_String__op_Equality(name,"SetLabel",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346673 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabel_b__5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346673 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__5_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabel_b__5_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__5_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__5_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xccadec40) {
        bVar2 = System_String__op_Equality(name,"SetScoreboardProperty",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346682 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardProperty_b__20_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346682 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__20_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardProperty_b__20_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__20_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__20_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xd4660d26) {
        bVar2 = System_String__op_Equality(name,"ShowPopup",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346678 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowPopup_b__10_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346678 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__10_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowPopup_b__10_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__10_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__10_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
    }
    else if (uVar3 < 0xf19b28b8) {
      if (uVar3 == 0xdbe78666) {
        bVar2 = System_String__op_Equality(name,"WrapStyleTag",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434667f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__WrapStyleTag_b__17_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434667f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__17_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__WrapStyleTag_b__17_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__17_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__17_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xe4462ef8) {
        bVar2 = System_String__op_Equality(name,"Dropdown",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346695 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Dropdown_b__39_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346695 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__39_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Dropdown_b__39_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__39_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__39_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xf19b28b7) {
        bVar2 = System_String__op_Equality(name,"AddPopupButtons",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434667e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButtons_b__16_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434667e = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__16_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButtons_b__16_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__16_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__16_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
    }
    else if (uVar3 == 0xf654e26c) {
      bVar2 = System_String__op_Equality(name,"SetMinimapActive",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        if (Il2CppMethodInitialized_184346689 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetMinimapActive_b__27_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346689 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__27_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetMinimapActive_b__27_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__27_0 =
               (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__27_0,pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0xfc401d15) {
      bVar2 = System_String__op_Equality(name,"CreatePopup",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        if (Il2CppMethodInitialized_184346677 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__CreatePopup_b__9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346677 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__9_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__CreatePopup_b__9_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__9_0 =
               (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__9_0,pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0xfeca8df1) {
      bVar2 = System_String__op_Equality(name,"AddPopupBottomButton",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        if (Il2CppMethodInitialized_18434667d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupBottomButton_b__15_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434667d = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__15_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupBottomButton_b__15_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__15_0 =
               (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__15_0,pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
label_1820489fb:
    pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicUIBuiltin not found");
    str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
    pMVar7 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
  }
  if (uVar3 < 0x4326a2ef) {
    if (0x2ccf9d27 < uVar3) {
      if (uVar3 < 0x324642bf) {
        if (uVar3 == 0x2f841609) {
          bVar2 = System_String__op_Equality(name,"SetFeedPanelActive",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434668b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetFeedPanelActive_b__29_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434668b = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__29_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetFeedPanelActive_b__29_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__29_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__29_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x324642be) {
          bVar2 = System_String__op_Equality(name,"AddPopupButton",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434667c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButton_b__14_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434667c = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__14_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButton_b__14_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__14_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__14_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
      else if (uVar3 == 0x33881a91) {
        bVar2 = System_String__op_Equality(name,"Button",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434668f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Button_b__33_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434668f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__33_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Button_b__33_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__33_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__33_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x3868216a) {
        bVar2 = System_String__op_Equality(name,"TextField",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346691 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__TextField_b__35_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346691 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__35_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__TextField_b__35_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__35_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__35_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x4326a2ee) {
        bVar2 = System_String__op_Equality(name,"SetLabelAll",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346675 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelAll_b__7_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346675 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__7_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelAll_b__7_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__7_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__7_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_1820489fb;
    }
    if (0x1ee00fa5 < uVar3) {
      if (uVar3 == 0x23021f22) {
        bVar2 = System_String__op_Equality(name,"SetLabelForTimeAll",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346676 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTimeAll_b__8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346676 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__8_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTimeAll_b__8_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__8_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__8_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x23322007) {
        bVar2 = System_String__op_Equality(name,"IsPopupActive",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346684 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__IsPopupActive_b__22_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346684 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__22_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__IsPopupActive_b__22_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__22_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__22_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x2ccf9d27) {
        bVar2 = System_String__op_Equality(name,"SetChatPanelActive",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434668a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetChatPanelActive_b__28_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434668a = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__28_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetChatPanelActive_b__28_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__28_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__28_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_1820489fb;
    }
    if (uVar3 == 0x13ce3a06) {
      bVar2 = System_String__op_Equality(name,"SetLabelBackgroundColor",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings)
          ;
        }
        if (Il2CppMethodInitialized_184346686 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColor_b__24
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346686 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__24_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColor_b__24
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__24_0 =
               (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__24_0,pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
      goto label_1820489fb;
    }
    if (uVar3 != 0x1ee00fa5) goto label_1820489fb;
    bVar2 = System_String__op_Equality(name,"LegacyLabels",(MethodInfo *)0x0);
    if (!bVar2) goto label_1820489fb;
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346670 == '\0') {
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
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object);
      Il2CppMethodInitialized_184346670 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____getter_2_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicUIBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____setter_2_1
    ;
  }
  else {
    if (uVar3 < 0x5de6f45c) {
      if (uVar3 < 0x4f9b1f06) {
        if (uVar3 == 0x4f65f048) {
          bVar2 = System_String__op_Equality(name,"SetScoreboardHeader",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346681 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardHeader_b__19_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346681 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__19_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardHeader_b__19_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__19_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__19_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x4f9b1f05) {
          bVar2 = System_String__op_Equality(name,"SliderInt",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346694 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SliderInt_b__38_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346694 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__38_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object
                                 );
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SliderInt_b__38_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__38_0 =
                   (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__38_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
      else if (uVar3 == 0x53573f1f) {
        bVar2 = System_String__op_Equality(name,"ProgressBar",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346696 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ProgressBar_b__40_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346696 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__40_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ProgressBar_b__40_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__40_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__40_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x590ca79a) {
        bVar2 = System_String__op_Equality(name,"Image",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346699 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Image_b__43_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346699 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__43_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Image_b__43_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__43_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__43_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x5de6f45b) {
        bVar2 = System_String__op_Equality(name,"VisualElement",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434668e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__VisualElement_b__32_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434668e = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__32_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__VisualElement_b__32_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__32_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__32_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_1820489fb;
    }
    if (0x612ae107 < uVar3) {
      if (uVar3 == 0x68e6cb10) {
        bVar2 = System_String__op_Equality(name,"Icon",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346698 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Icon_b__42_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346698 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__42_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Icon_b__42_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__42_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__42_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x6cf1ba25) {
        bVar2 = System_String__op_Equality(name,"Toggle",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346692 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Toggle_b__36_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346692 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__36_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Toggle_b__36_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__36_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__36_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x70e4ec14) {
        bVar2 = System_String__op_Equality(name,"ClearPopup",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434667a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ClearPopup_b__12_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434667a = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__12_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ClearPopup_b__12_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__12_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__12_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_1820489fb;
    }
    if (uVar3 != 0x60c9e8c4) {
      if (uVar3 == 0x610a18c5) {
        bVar2 = System_String__op_Equality(name,"SetLabelActive",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346685 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelActive_b__23_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346685 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__23_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelActive_b__23_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__23_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__23_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x612ae107) {
        bVar2 = System_String__op_Equality(name,"SetBottomHUDActive",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434668c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetBottomHUDActive_b__30_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434668c = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__30_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetBottomHUDActive_b__30_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__30_0 =
                 (System_Func_CustomLogicUIBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__30_0,pEVar4)
            ;
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_1820489fb;
    }
    bVar2 = System_String__op_Equality(name,"ForceHideNames",(MethodInfo *)0x0);
    if (!bVar2) goto label_1820489fb;
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346671 == '\0') {
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
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object);
      Il2CppMethodInitialized_184346671 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____getter_3
               ,(MethodInfo_16E67D0 *)0x0);
    __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicUIBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____setter_3
    ;
  }
  System_Action_object__object____ctor
            (__this_01,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
label_1820489d6:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_01,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__LegacyLabels
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__LegacyLabels (const MethodInfo* method);
// 0x182062b40

CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__LegacyLabels(MethodInfo *method)

{
  System_Func_CustomLogicUIBuiltin__object__o *__this;
  System_Action_CustomLogicUIBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346670 == '\0') {
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
    Il2CppMethodInitialized_184346670 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicUIBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__ForceHideNames
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__ForceHideNames (const MethodInfo* method);
// 0x182061d80

CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__ForceHideNames(MethodInfo *method)

{
  System_Func_CustomLogicUIBuiltin__object__o *__this;
  System_Action_CustomLogicUIBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346671 == '\0') {
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
    Il2CppMethodInitialized_184346671 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicUIBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____setter_3
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__GetPopups
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__GetPopups (const MethodInfo* method);
// 0x182061fb0

CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__GetPopups(MethodInfo *method)

{
  System_Func_CustomLogicUIBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184346672 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__GetPopups_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object);
    Il2CppMethodInitialized_184346672 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__GetPopups_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabel (const MethodInfo* method);
// 0x18205e6a0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabel(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346673 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabel_b__5_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346673 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabel_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelForTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTime (const MethodInfo* method);
// 0x18205e580

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTime(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346674 == '\0') {
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
    Il2CppMethodInitialized_184346674 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTime_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelAll (const MethodInfo* method);
// 0x18205e0e0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346675 == '\0') {
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
    Il2CppMethodInitialized_184346675 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelAll_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelForTimeAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTimeAll (const MethodInfo* method);
// 0x18205e460

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTimeAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346676 == '\0') {
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
    Il2CppMethodInitialized_184346676 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTimeAll_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__CreatePopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__CreatePopup (const MethodInfo* method);
// 0x1820591d0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__CreatePopup(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346677 == '\0') {
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
    Il2CppMethodInitialized_184346677 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__CreatePopup_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ShowPopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowPopup (const MethodInfo* method);
// 0x18205f7b0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowPopup(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346678 == '\0') {
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
    Il2CppMethodInitialized_184346678 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowPopup_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__HidePopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__HidePopup (const MethodInfo* method);
// 0x18205a230

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__HidePopup(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346679 == '\0') {
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
    Il2CppMethodInitialized_184346679 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__HidePopup_b__11_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ClearPopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ClearPopup (const MethodInfo* method);
// 0x182058e60

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ClearPopup(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434667a == '\0') {
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
    Il2CppMethodInitialized_18434667a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ClearPopup_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupLabel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupLabel (const MethodInfo* method);
// 0x182057210

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupLabel(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434667b == '\0') {
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
    Il2CppMethodInitialized_18434667b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupLabel_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupButton
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButton (const MethodInfo* method);
// 0x182056fd0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButton(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434667c == '\0') {
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
    Il2CppMethodInitialized_18434667c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButton_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupBottomButton
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupBottomButton (const MethodInfo* method);
// 0x182056eb0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupBottomButton(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434667d == '\0') {
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
    Il2CppMethodInitialized_18434667d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupBottomButton_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupButtons
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButtons (const MethodInfo* method);
// 0x1820570f0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButtons(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434667e == '\0') {
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
    Il2CppMethodInitialized_18434667e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButtons_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__WrapStyleTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__WrapStyleTag (const MethodInfo* method);
// 0x182061670

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__WrapStyleTag(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434667f == '\0') {
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
    Il2CppMethodInitialized_18434667f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__WrapStyleTag_b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ShowChangeCharacterMenu
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowChangeCharacterMenu (const MethodInfo* method);
// 0x18205f690

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowChangeCharacterMenu(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346680 == '\0') {
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
    Il2CppMethodInitialized_184346680 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowChangeCharacterMenu_b__18
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetScoreboardHeader
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardHeader (const MethodInfo* method);
// 0x18205ea10

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardHeader(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346681 == '\0') {
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
    Il2CppMethodInitialized_184346681 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardHeader_b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetScoreboardProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardProperty (const MethodInfo* method);
// 0x18205eb30

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardProperty(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346682 == '\0') {
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
    Il2CppMethodInitialized_184346682 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__20_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardProperty_b__20_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__20_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__20_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__GetThemeColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetThemeColor (const MethodInfo* method);
// 0x182059fd0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetThemeColor(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346683 == '\0') {
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
    Il2CppMethodInitialized_184346683 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetThemeColor_b__21_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__21_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__IsPopupActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__IsPopupActive (const MethodInfo* method);
// 0x18205a5b0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__IsPopupActive(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346684 == '\0') {
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
    Il2CppMethodInitialized_184346684 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__IsPopupActive_b__22_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelActive (const MethodInfo* method);
// 0x18205dfb0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelActive(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346685 == '\0') {
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
    Il2CppMethodInitialized_184346685 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelActive_b__23_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__23_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelBackgroundColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColor (const MethodInfo* method);
// 0x18205e330

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColor(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346686 == '\0') {
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
    Il2CppMethodInitialized_184346686 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColor_b__24
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__24_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelBackgroundColorAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColorAll (const MethodInfo* method);
// 0x18205e200

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelBackgroundColorAll
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346687 == '\0') {
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
    Il2CppMethodInitialized_184346687 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColorAll_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__25_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetKDRPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetKDRPanelActive (const MethodInfo* method);
// 0x18205de80

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetKDRPanelActive(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346688 == '\0') {
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
    Il2CppMethodInitialized_184346688 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__26_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetKDRPanelActive_b__26_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__26_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__26_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetMinimapActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetMinimapActive (const MethodInfo* method);
// 0x18205e7c0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetMinimapActive(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346689 == '\0') {
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
    Il2CppMethodInitialized_184346689 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__27_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetMinimapActive_b__27_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__27_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__27_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetChatPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetChatPanelActive (const MethodInfo* method);
// 0x18205d8c0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetChatPanelActive(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434668a == '\0') {
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
    Il2CppMethodInitialized_18434668a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__28_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetChatPanelActive_b__28_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__28_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__28_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetFeedPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetFeedPanelActive (const MethodInfo* method);
// 0x18205d9f0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetFeedPanelActive(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434668b == '\0') {
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
    Il2CppMethodInitialized_18434668b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetFeedPanelActive_b__29_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetBottomHUDActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetBottomHUDActive (const MethodInfo* method);
// 0x18205d790

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetBottomHUDActive(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434668c == '\0') {
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
    Il2CppMethodInitialized_18434668c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetBottomHUDActive_b__30_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__GetRootVisualElement
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetRootVisualElement (const MethodInfo* method);
// 0x182059ea0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetRootVisualElement(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434668d == '\0') {
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
    Il2CppMethodInitialized_18434668d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetRootVisualElement_b__31_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__VisualElement
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__VisualElement (const MethodInfo* method);
// 0x182061410

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__VisualElement(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434668e == '\0') {
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
    Il2CppMethodInitialized_18434668e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__VisualElement_b__32_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Button
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Button (const MethodInfo* method);
// 0x182058c10

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Button(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434668f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Button_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434668f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__33_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Button_b__33_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__33_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__33_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Label
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Label (const MethodInfo* method);
// 0x18205a810

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Label(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346690 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Label_b__34_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346690 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Label_b__34_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__TextField
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__TextField (const MethodInfo* method);
// 0x18205fc60

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__TextField(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346691 == '\0') {
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
    Il2CppMethodInitialized_184346691 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__35_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__TextField_b__35_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__35_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__35_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Toggle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Toggle (const MethodInfo* method);
// 0x182060bd0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Toggle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346692 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Toggle_b__36_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346692 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__36_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Toggle_b__36_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__36_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__36_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Slider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Slider (const MethodInfo* method);
// 0x18205fa00

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Slider(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346693 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Slider_b__37_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346693 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__37_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Slider_b__37_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__37_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__37_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SliderInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SliderInt (const MethodInfo* method);
// 0x18205f8d0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SliderInt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346694 == '\0') {
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
    Il2CppMethodInitialized_184346694 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__38_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SliderInt_b__38_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__38_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__38_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Dropdown
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Dropdown (const MethodInfo* method);
// 0x1820592f0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Dropdown(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346695 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Dropdown_b__39_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346695 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__39_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Dropdown_b__39_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__39_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__39_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ProgressBar
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ProgressBar (const MethodInfo* method);
// 0x18205c430

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ProgressBar(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346696 == '\0') {
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
    Il2CppMethodInitialized_184346696 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__40_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ProgressBar_b__40_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__40_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__40_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ScrollView
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ScrollView (const MethodInfo* method);
// 0x18205d530

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ScrollView(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346697 == '\0') {
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
    Il2CppMethodInitialized_184346697 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__41_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ScrollView_b__41_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__41_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__41_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Icon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Icon (const MethodInfo* method);
// 0x18205a350

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Icon(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346698 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Icon_b__42_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346698 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__42_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Icon_b__42_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__42_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__42_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Image
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Image (const MethodInfo* method);
// 0x18205a480

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Image(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346699 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Image_b__43_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346699 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__43_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUIBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Image_b__43_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__43_0 =
         (System_Func_CustomLogicUIBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c->static_fields->__9__43_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicUIBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182065060

void CustomLogic_CustomLogicUIBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434669a == '\0') {
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
    Il2CppMethodInitialized_18434669a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LegacyLabels",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ForceHideNames",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetPopups",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabel",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelForTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelForTimeAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CreatePopup",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowPopup",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HidePopup",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearPopup",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddPopupLabel",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddPopupButton",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddPopupBottomButton",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddPopupButtons",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WrapStyleTag",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowChangeCharacterMenu",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetScoreboardHeader",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetScoreboardProperty",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetThemeColor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPopupActive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelActive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelBackgroundColor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLabelBackgroundColorAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetKDRPanelActive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetMinimapActive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetChatPanelActive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetFeedPanelActive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetBottomHUDActive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetRootVisualElement",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"VisualElement",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Button",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Label",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextField",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Toggle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slider",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SliderInt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dropdown",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ProgressBar",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollView",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Icon",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Image",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUIBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__LegacyLabels>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__LegacyLabels_g____getter_2_0 (CustomLogic_CustomLogicUIBuiltin_o* __i, const MethodInfo* method);
// 0x182055520

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__LegacyLabels_g____getter_2_0
          (CustomLogic_CustomLogicUIBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_18434669b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434669b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_18434676c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434676c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  local_res18[0] = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels;
  pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__LegacyLabels>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__LegacyLabels_g____setter_2_1 (CustomLogic_CustomLogicUIBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820555c0

void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__LegacyLabels_g____setter_2_1
               (CustomLogic_CustomLogicUIBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_18434669c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434669c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__ForceHideNames>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____getter_3_0 (CustomLogic_CustomLogicUIBuiltin_o* __i, const MethodInfo* method);
// 0x182054780

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____getter_3_0
          (CustomLogic_CustomLogicUIBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_18434669d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434669d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_18434676d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434676d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  local_res18[0] = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames;
  pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__ForceHideNames>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____setter_3_1 (CustomLogic_CustomLogicUIBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054820

void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____setter_3_1
               (CustomLogic_CustomLogicUIBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434669e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434669e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_18434676e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434676e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames = bVar1;
    return;
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames = bVar1;
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__GetPopups>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__GetPopups_g____getter_4_0 (CustomLogic_CustomLogicUIBuiltin_o* __i, const MethodInfo* method);
// 0x1820549b0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__GetPopups_g____getter_4_0
          (CustomLogic_CustomLogicUIBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434669f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434669f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  pCVar1 = CustomLogic_CustomLogicUIBuiltin__get_GetPopups((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicUIBuiltin$$get_Menu
// il2cpp: UI_InGameMenu_o* CustomLogic_CustomLogicUIBuiltin__get_Menu (const MethodInfo* method);
// 0x18206d070

UI_InGameMenu_o * CustomLogic_CustomLogicUIBuiltin__get_Menu(MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434663b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434663b = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 == (UI_InGameMenu_o *)0x0) {
    return (UI_InGameMenu_o *)0x0;
  }
  bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
  if ((bVar1 <= (((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth) &&
     ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    return pUVar2;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_InGameMenu);
}


// CustomLogic.CustomLogicUIBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin___ctor (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x18206cd50

void CustomLogic_CustomLogicUIBuiltin___ctor(CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434663c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434663c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$OnPlayerJoin
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin (CustomLogic_CustomLogicUIBuiltin_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18206b1e0
// eh: try 0x18206b333..0x18206b57d -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18206b4f5: mov rdx, qword ptr [rip + 0x2053044]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
// asm:   0x18206b4fc: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18206b501: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18206b506: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18206b50b: test rcx, rcx
// asm:   0x18206b50e: jne 0x18206b57d
// asm:   0x18206b57d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin
               (CustomLogic_CustomLogicUIBuiltin_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Object_array *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Photon_Pun_PhotonView_o *__this_02;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  Il2CppObject *pIVar3;
  System_String_o *obj;
  Il2CppObject *pIVar4;
  undefined4 local_res20 [2];
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_18434663d == '\0') {
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
    Il2CppMethodInitialized_18434663d = '\x01';
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
  if ((__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
     (__this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys),
     __this_03 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_50,
             __this_03,
             (MethodInfo_F1E4D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_string_GetEnumerator);
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
  local_38.fields._index = local_50._8_4_;
  local_38.fields._version = local_50._12_4_;
  local_38.fields._currentKey = local_40;
  local_50._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50._8_8_ = &local_38;
  while( true ) {
    bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                      (&local_38,
                       (MethodInfo_156BDD0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_MoveNext
                      );
    pIVar4 = local_38.fields._currentKey;
    if (!bVar2) {
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_38,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
                );
      return;
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    if (pSVar1 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar1->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((int)pSVar1->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = pIVar4;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pIVar4);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    obj = System_Collections_Generic_Dictionary_object__object___get_Item
                    (__this_01,pIVar4,
                     (MethodInfo_147A5B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    if (pSVar1 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((obj != (System_String_o *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pSVar1->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((uint)pSVar1->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[1] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,obj);
    pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    local_res20[0] = 0;
    pIVar4 = il2cpp_value_box(g_data_184354e38,local_res20);
    if (pSVar1 == (System_Object_array *)0x0) break;
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar1->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((uint)pSVar1->max_length < 3) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[2] = pIVar4;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2,pIVar4);
    __this_02 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    if (__this_02 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Photon_Pun_PhotonView__RPC_1d4d8d0
              (__this_02,"SetLabelRPC",player,
               TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$ClearLabels
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ClearLabels (const MethodInfo* method);
// 0x18206a800

void CustomLogic_CustomLogicUIBuiltin__ClearLabels(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_18434663e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    Il2CppMethodInitialized_18434663e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
  if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels(true,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames = false;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$get_LegacyLabels
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_LegacyLabels (const MethodInfo* method);
// 0x18206d020

bool CustomLogic_CustomLogicUIBuiltin__get_LegacyLabels(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434663f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434663f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  return TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels;
}


// CustomLogic.CustomLogicUIBuiltin$$set_LegacyLabels
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels (bool value, const MethodInfo* method);
// 0x18206d180

void CustomLogic_CustomLogicUIBuiltin__set_LegacyLabels(bool value,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346640 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346640 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels = value;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        UI_InGameMenu__SetLegacyLabels(__this,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$get_ForceHideNames
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_ForceHideNames (const MethodInfo* method);
// 0x18206cdd0

bool CustomLogic_CustomLogicUIBuiltin__get_ForceHideNames(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346641 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346641 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  return TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames;
}


// CustomLogic.CustomLogicUIBuiltin$$set_ForceHideNames
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__set_ForceHideNames (bool value, const MethodInfo* method);
// 0x18206d120

void CustomLogic_CustomLogicUIBuiltin__set_ForceHideNames(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346642 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346642 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames = value;
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$GetForceHideNames
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__GetForceHideNames (const MethodInfo* method);
// 0x18206ad00

bool CustomLogic_CustomLogicUIBuiltin__GetForceHideNames(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346643 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346643 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  return TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabel
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabel (System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x18206c0e0

void CustomLogic_CustomLogicUIBuiltin__SetLabel
               (System_String_o *label,System_String_o *message,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346644 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184346644 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__SetLabel(label,message,0.0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelForTime
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelForTime (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x18206c070

void CustomLogic_CustomLogicUIBuiltin__SetLabelForTime
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346645 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184346645 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__SetLabel(label,message,time,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelAll
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelAll (System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x18206b990

void CustomLogic_CustomLogicUIBuiltin__SetLabelAll
               (System_String_o *label,System_String_o *message,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Object_array *pSVar2;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar3;
  System_String_o *b;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_res20 [2];
  
  if (Il2CppMethodInitialized_184346646 == '\0') {
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
    Il2CppMethodInitialized_184346646 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
  if (__this == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_18206bc91;
  bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)label,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
  if (bVar3) {
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18206bc91;
    b = System_Collections_Generic_Dictionary_object__object___get_Item
                  (pSVar1,(Il2CppObject *)label,
                   (MethodInfo_147A5B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    bVar3 = System_String__op_Inequality(message,b,(MethodInfo *)0x0);
    if (bVar3) goto label_18206bace;
  }
  else {
label_18206bace:
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    if (pSVar2 == (System_Object_array *)0x0) {
label_18206bccd:
      ThrowNullReferenceException();
    }
    if ((label != (System_String_o *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)label,(((pSVar2->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((int)pSVar2->max_length == 0) {
label_18206bcc7:
      ThrowIndexOutOfRangeException();
    }
    pSVar2->m_Items[0] = (Il2CppObject *)label;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,label);
    pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    if (pSVar2 == (System_Object_array *)0x0) goto label_18206bccd;
    if ((message != (System_String_o *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar2->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((uint)pSVar2->max_length < 2) goto label_18206bcc7;
    pSVar2->m_Items[1] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,message);
    pSVar2 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    local_res20[0] = 0;
    pIVar4 = il2cpp_value_box(g_data_184354e38,local_res20);
    if (pSVar2 == (System_Object_array *)0x0) goto label_18206bccd;
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar2->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((uint)pSVar2->max_length < 3) goto label_18206bcc7;
    pSVar2->m_Items[2] = pIVar4;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pIVar4);
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_18206bccd;
    Photon_Pun_PhotonView__RPC
              (__this_00,"SetLabelRPC",0,
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
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    return;
  }
label_18206bc91:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelForTimeAll
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x18206be30

void CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  System_Object_array *pSVar1;
  Photon_Pun_PhotonView_o *__this;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float local_28 [8];
  
  if (Il2CppMethodInitialized_184346647 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SetLabelRPC");
    Il2CppMethodInitialized_184346647 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
  if (pSVar1 != (System_Object_array *)0x0) {
    if ((label != (System_String_o *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)label,(((pSVar1->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if ((int)pSVar1->max_length == 0) {
label_18206c064:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = (Il2CppObject *)label;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,label);
    pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
    if (pSVar1 != (System_Object_array *)0x0) {
      if ((message != (System_String_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar1->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((uint)pSVar1->max_length < 2) goto label_18206c064;
      pSVar1->m_Items[1] = (Il2CppObject *)message;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,message);
      pSVar1 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs;
      local_28[0] = time;
      pIVar3 = il2cpp_value_box(g_data_184354e38,local_28);
      if (pSVar1 != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar1->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((uint)pSVar1->max_length < 3) goto label_18206c064;
        pSVar1->m_Items[2] = pIVar3;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2,pIVar3);
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
// 0x18206a900

System_String_o *
CustomLogic_CustomLogicUIBuiltin__CreatePopup
          (System_String_o *popupName,System_String_o *title,int32_t width,int32_t height,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_184346648 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346648 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    UI_InGameMenu__CreateCustomPopup(__this,popupName,title,(float)width,(float)height,(MethodInfo *)0x0);
    return popupName;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$ShowPopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ShowPopup (System_String_o* popupName, const MethodInfo* method);
// 0x18206c400

void CustomLogic_CustomLogicUIBuiltin__ShowPopup(System_String_o *popupName,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346649 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346649 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    pUVar1 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar1 != (UI_CustomPopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$HidePopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__HidePopup (System_String_o* popupName, const MethodInfo* method);
// 0x18206aef0

void CustomLogic_CustomLogicUIBuiltin__HidePopup(System_String_o *popupName,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *pUVar1;
  
  if (Il2CppMethodInitialized_18434664a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434664a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    pUVar1 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar1 != (UI_CustomPopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$ClearPopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ClearPopup (System_String_o* popupName, const MethodInfo* method);
// 0x18206a890

void CustomLogic_CustomLogicUIBuiltin__ClearPopup(System_String_o *popupName,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_18434664b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434664b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
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
// 0x18206a630

void CustomLogic_CustomLogicUIBuiltin__AddPopupLabel
               (System_String_o *popupName,System_String_o *label,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_18434664c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434664c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddLabel(__this_00,label,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupButton
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupButton (System_String_o* popupName, System_String_o* label, System_String_o* callback, const MethodInfo* method);
// 0x18206a500

void CustomLogic_CustomLogicUIBuiltin__AddPopupButton
               (System_String_o *popupName,System_String_o *label,System_String_o *callback,MethodInfo *method
               )

{
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_18434664d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434664d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddButton(__this_00,label,callback,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupBottomButton
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupBottomButton (System_String_o* popupName, System_String_o* label, System_String_o* callback, const MethodInfo* method);
// 0x18206a470

void CustomLogic_CustomLogicUIBuiltin__AddPopupBottomButton
               (System_String_o *popupName,System_String_o *label,System_String_o *callback,MethodInfo *method
               )

{
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_18434664e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434664e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddBottomButton(__this_00,label,callback,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupButtons
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupButtons (System_String_o* popupName, CustomLogic_CustomLogicListBuiltin_o* labels, CustomLogic_CustomLogicListBuiltin_o* callbacks, const MethodInfo* method);
// 0x18206a590

void CustomLogic_CustomLogicUIBuiltin__AddPopupButtons
               (System_String_o *popupName,CustomLogic_CustomLogicListBuiltin_o *labels,
               CustomLogic_CustomLogicListBuiltin_o *callbacks,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_18434664f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434664f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (((labels != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
        (callbacks != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) && (__this_00 != (UI_CustomPopup_o *)0x0))
    {
      UI_CustomPopup__AddButtons(__this_00,(labels->fields).List,(callbacks->fields).List,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$WrapStyleTag
// il2cpp: System_String_o* CustomLogic_CustomLogicUIBuiltin__WrapStyleTag (System_String_o* text, System_String_o* style, System_String_o* arg, const MethodInfo* method);
// 0x18206c9c0

System_String_o *
CustomLogic_CustomLogicUIBuiltin__WrapStyleTag
          (System_String_o *text,System_String_o *style,System_String_o *arg,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_184346650 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"=");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"</");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_184346650 = '\x01';
  }
  if (arg == (System_String_o *)0x0) {
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
    pSVar1 = "<";
    if (values == (System_String_array *)0x0) goto label_18206cc37;
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = style;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,style);
        pSVar1 = ">";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = text;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,text);
            pSVar1 = "</";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = style;
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,style);
                pSVar1 = ">";
                if (6 < (uint)values->max_length) {
                  targetAddress = values->m_Items + 6;
                  values->m_Items[6] = ">";
label_18206cc14:
                  Il2CppCodeGenWriteBarrier(targetAddress,pSVar1);
                  pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
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
    pSVar1 = "<";
    if (values == (System_String_array *)0x0) {
label_18206cc37:
      ThrowNullReferenceException();
    }
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = style;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,style);
        pSVar1 = "=";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = "=";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = arg;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,arg);
            pSVar1 = ">";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ">";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = text;
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,text);
                pSVar1 = "</";
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = "</";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar1);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = style;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 7,style);
                    pSVar1 = ">";
                    if (8 < (uint)values->max_length) {
                      targetAddress = values->m_Items + 8;
                      values->m_Items[8] = ">";
                      goto label_18206cc14;
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
// 0x18206c2b0

void CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu(MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  GameManagers_BaseGameManager_c *x;
  void *pvVar3;
  bool bVar4;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_184346651 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346651 = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
    x = (*(uint64_t *)((char *)pGVar2 + 0x78));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar4) && ((*(uint64_t *)((char *)pGVar2 + 0x78)) != (GameManagers_BaseGameManager_c *)0x0)) {
      pvVar3 = (((*(Il2CppClass **)((char *)pGVar2 + 0x78)))->_1).image;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= *(byte *)((longlong)pvVar3 + 0x130)) &&
         (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar3 + 200) + -8 + (ulonglong)bVar1 * 8) ==
          TypeInfo_Characters_Human)) {
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        }
        __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
        if (__this != (UI_InGameMenu_o *)0x0) {
          UI_InGameMenu__ShowCharacterChangeMenu(__this,(MethodInfo *)0x0);
          return;
        }
        goto label_18206c3ee;
      }
    }
    return;
  }
label_18206c3ee:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetScoreboardHeader
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetScoreboardHeader (System_String_o* header, const MethodInfo* method);
// 0x18206c1a0

void CustomLogic_CustomLogicUIBuiltin__SetScoreboardHeader(System_String_o *header,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346652 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346652 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).ScoreboardHeader = header;
    Il2CppCodeGenWriteBarrier(&(pCVar1->fields).ScoreboardHeader,header);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetScoreboardProperty
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetScoreboardProperty (System_String_o* property, const MethodInfo* method);
// 0x18206c210

void CustomLogic_CustomLogicUIBuiltin__SetScoreboardProperty(System_String_o *property,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346653 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CL:");
    Il2CppMethodInitialized_184346653 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  value = System_String__Concat_1969e50("CL:",property,(MethodInfo *)0x0);
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).ScoreboardProperty = value;
    Il2CppCodeGenWriteBarrier(&(pCVar1->fields).ScoreboardProperty,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$GetThemeColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicUIBuiltin__GetThemeColor (System_String_o* panel, System_String_o* category, System_String_o* item, const MethodInfo* method);
// 0x18206adf0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__GetThemeColor
          (System_String_o *panel,System_String_o *category,System_String_o *item,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_Color_o *pUVar3;
  Utility_Color255_o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346654 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_184346654 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar3 = UI_UIManager__GetThemeColor
                     ((UnityEngine_Color_o *)local_28,panel,category,item,"DefaultPanel",
                      (MethodInfo *)0x0);
  uVar1._0_4_ = (pUVar3->fields).r;
  uVar1._4_4_ = (pUVar3->fields).g;
  uVar2._0_4_ = (pUVar3->fields).b;
  uVar2._4_4_ = (pUVar3->fields).a;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  local_28[0]._0_8_ = uVar1;
  local_28[0]._8_8_ = uVar2;
  Utility_Color255___ctor_23327a0(__this,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,__this,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$IsPopupActive
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__IsPopupActive (System_String_o* popupName, const MethodInfo* method);
// 0x18206b0c0

bool CustomLogic_CustomLogicUIBuiltin__IsPopupActive(System_String_o *popupName,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346655 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346655 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    pUVar1 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar1 != (UI_CustomPopup_o *)0x0) {
      return (pUVar1->fields).IsActive;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$get_GetPopups
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicUIBuiltin__get_GetPopups (const MethodInfo* method);
// 0x18206ce20
// eh: try 0x18206cf30..0x18206d016 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18206cfcc: mov rdx, qword ptr [rip + 0x202a945]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18206cfd3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18206cfd8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18206cfdd: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18206cfe2: test rcx, rcx
// asm:   0x18206cfe5: jne 0x18206d016
// asm:   0x18206cfe7: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x18206d016: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicUIBuiltin__get_GetPopups(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  UI_InGameMenu_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346656 == '\0') {
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
    Il2CppMethodInitialized_184346656 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this_01 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this_01 != (UI_InGameMenu_o *)0x0) {
    __this_02 = UI_InGameMenu__GetAllCustomPopups(__this_01,(MethodInfo *)0x0);
    if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return __this_00;
        }
        if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this = (__this_00->fields).List;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) break;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = local_28.fields._current;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,local_28.fields._current);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,local_28.fields._current,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelActive (System_String_o* label, bool active, const MethodInfo* method);
// 0x18206b920

void CustomLogic_CustomLogicUIBuiltin__SetLabelActive(System_String_o *label,bool active,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_184346657 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346657 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    UI_InGameMenu__SetLabelActive(__this,label,active,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelBackgroundColor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColor (System_String_o* label, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x18206bd80

void CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColor
               (System_String_o *label,CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  Utility_Color255_o *__this;
  UI_InGameMenu_o *__this_00;
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346658 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this = (color->fields).Value, __this != (Utility_Color255_o *)0x0)) {
    pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this,(MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      local_18.r = (pUVar1->fields).r;
      local_18.g = (pUVar1->fields).g;
      local_18.b = (pUVar1->fields).b;
      local_18.a = (pUVar1->fields).a;
      UI_InGameMenu__SetLabelBackgroundColor
                (__this_00,label,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelBackgroundColorAll
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColorAll (CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x18206bce0

void CustomLogic_CustomLogicUIBuiltin__SetLabelBackgroundColorAll
               (CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  Utility_Color255_o *__this;
  UI_InGameMenu_o *__this_00;
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346659 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_184346659 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this_00 = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this = (color->fields).Value, __this != (Utility_Color255_o *)0x0)) {
    pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this,(MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      local_18.r = (pUVar1->fields).r;
      local_18.g = (pUVar1->fields).g;
      local_18.b = (pUVar1->fields).b;
      local_18.a = (pUVar1->fields).a;
      UI_InGameMenu__SetLabelBackgroundColorAll(__this_00,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetKDRPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetKDRPanelActive (bool active, const MethodInfo* method);
// 0x18206b8c0

void CustomLogic_CustomLogicUIBuiltin__SetKDRPanelActive(bool active,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_18434665a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434665a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    UI_InGameMenu__SetKDRPanelActive(__this,active,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetMinimapActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetMinimapActive (bool active, const MethodInfo* method);
// 0x18206c140

void CustomLogic_CustomLogicUIBuiltin__SetMinimapActive(bool active,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_18434665b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434665b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    UI_InGameMenu__SetMinimapActive(__this,active,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetChatPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetChatPanelActive (bool active, const MethodInfo* method);
// 0x18206b800

void CustomLogic_CustomLogicUIBuiltin__SetChatPanelActive(bool active,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_18434665c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434665c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    UI_InGameMenu__SetChatPanelActive(__this,active,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetFeedPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetFeedPanelActive (bool active, const MethodInfo* method);
// 0x18206b860

void CustomLogic_CustomLogicUIBuiltin__SetFeedPanelActive(bool active,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_18434665d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434665d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    UI_InGameMenu__SetFeedPanelActive(__this,active,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$SetBottomHUDActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetBottomHUDActive (bool active, const MethodInfo* method);
// 0x18206b7a0

void CustomLogic_CustomLogicUIBuiltin__SetBottomHUDActive(bool active,MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_18434665e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434665e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    UI_InGameMenu__SetBottomHUDActive(__this,active,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$GetRootVisualElement
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement (const MethodInfo* method);
// 0x18206ad50

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement(MethodInfo *method)

{
  UI_InGameMenu_o *__this;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434665f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    Il2CppMethodInitialized_18434665f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  __this = CustomLogic_CustomLogicUIBuiltin__get_Menu((MethodInfo *)0x0);
  if (__this != (UI_InGameMenu_o *)0x0) {
    visualElement = UI_InGameMenu__get_RootVisualElement(__this,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin)
    ;
    CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,visualElement,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$VisualElement
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicUIBuiltin__VisualElement (const MethodInfo* method);
// 0x18206c940

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__VisualElement(MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184346660 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_VisualElement);
    Il2CppMethodInitialized_184346660 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,__this,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Button
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Button (System_String_o* text, CustomLogic_UserMethod_o* clickEvent, const MethodInfo* method);
// 0x18206a6b0

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Button
          (System_String_o *text,CustomLogic_UserMethod_o *clickEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  CustomLogic_CustomLogicButtonBuiltin_o *__this;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  System_Action_o *__this_01;
  
  if (Il2CppMethodInitialized_184346661 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin);
    Il2CppMethodInitialized_184346661 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Button);
  UnityEngine_UIElements_Button___ctor(pUVar1,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UIElements_Button_o *)0x0) {
    (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
              (pUVar1,text,(pUVar1->klass->vtable)._212_set_text.method);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin);
    if (Il2CppMethodInitialized_184346568 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick);
      Il2CppMethodInitialized_184346568 = '\x01';
    }
    CustomLogic_CustomLogicVisualElementBuiltin___ctor
              ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
               (UnityEngine_UIElements_VisualElement_o *)pUVar1,(MethodInfo *)0x0);
    (__this->fields)._button = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._button,pUVar1);
    pUVar1 = (__this->fields)._button;
    if (pUVar1 != (UnityEngine_UIElements_Button_o *)0x0) {
      __this_00 = UnityEngine_UIElements_Button__get_clickable
                            ((UnityEngine_UIElements_PopupWindow_o *)pUVar1,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
      System_Action___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
        UnityEngine_UIElements_Clickable__add_clicked
                  ((UnityEngine_UIElements_Clickable_o *)__this_00,__this_01,(MethodInfo *)0x0);
        (__this->fields)._clickEvent = clickEvent;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._clickEvent,clickEvent);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$Label
// il2cpp: CustomLogic_CustomLogicLabelBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Label (System_String_o* text, const MethodInfo* method);
// 0x18206b130

CustomLogic_CustomLogicLabelBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Label(System_String_o *text,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *__this;
  CustomLogic_CustomLogicLabelBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184346662 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLabelBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Label);
    Il2CppMethodInitialized_184346662 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Label);
  UnityEngine_UIElements_Label___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_UIElements_Label_o *)0x0) {
    (*(__this->klass->vtable)._212_set_text.methodPtr)
              (__this,text,(__this->klass->vtable)._212_set_text.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin);
    CustomLogic_CustomLogicVisualElementBuiltin___ctor
              ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
               (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
    (__this_00->fields)._label = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._label,__this);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$TextField
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicUIBuiltin__TextField (System_String_o* label, const MethodInfo* method);
// 0x18206c7a0

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__TextField(System_String_o *label,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  CustomLogic_CustomLogicTextFieldBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184346663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_TextField);
    Il2CppMethodInitialized_184346663 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_TextField);
  UnityEngine_UIElements_TextField___ctor_31e0ff0(__this,label,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
  (__this_00->fields)._textField = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._textField,__this);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Toggle
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Toggle (System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x18206c830

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Toggle
          (System_String_o *label,CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  CustomLogic_CustomLogicToggleBuiltin_o *__this;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_184346664 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Toggle);
    Il2CppMethodInitialized_184346664 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Toggle);
  UnityEngine_UIElements_Toggle___ctor_324b9a0(pUVar1,label,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin);
  if (Il2CppMethodInitialized_184346628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_bool
              );
    Il2CppMethodInitialized_184346628 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)pUVar1,(MethodInfo *)0x0);
  (__this->fields)._toggle = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toggle,pUVar1);
  pUVar1 = (__this->fields)._toggle;
  __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_bool);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0,(MethodInfo_EB6EC0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)pUVar1,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_bool
            );
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent,valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin$$Slider
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Slider (float lowValue, float highValue, float tickInterval, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x18206c5f0

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Slider
          (float lowValue,float highValue,float tickInterval,System_String_o *label,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  CustomLogic_CustomLogicSliderBuiltin_o *__this;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_184346665 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Slider);
    Il2CppMethodInitialized_184346665 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Slider);
  UnityEngine_UIElements_Slider___ctor_32328b0(pUVar1,label,lowValue,highValue,0,0.0,(MethodInfo *)0x0);
  if (0.0 < tickInterval) {
    if (pUVar1 == (UnityEngine_UIElements_Slider_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._166_set_pageSize.methodPtr)(pUVar1,tickInterval);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
  if (Il2CppMethodInitialized_1843465e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
              );
    Il2CppMethodInitialized_1843465e6 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)pUVar1,(MethodInfo *)0x0);
  (__this->fields)._floatSlider = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._floatSlider,pUVar1);
  pUVar1 = (__this->fields)._floatSlider;
  (__this->fields)._isIntSlider = false;
  __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0,(MethodInfo_EB6EC0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)pUVar1,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
            );
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent,valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin$$SliderInt
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicUIBuiltin__SliderInt (int32_t lowValue, int32_t highValue, int32_t tickInterval, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x18206c480

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__SliderInt
          (int32_t lowValue,int32_t highValue,int32_t tickInterval,System_String_o *label,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  CustomLogic_CustomLogicSliderBuiltin_o *__this;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_184346666 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_SliderInt);
    Il2CppMethodInitialized_184346666 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_SliderInt);
  UnityEngine_UIElements_SliderInt___ctor_3231dd0(pUVar1,label,lowValue,highValue,0,0.0,(MethodInfo *)0x0);
  if (1 < tickInterval) {
    if (pUVar1 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._166_set_pageSize.methodPtr)
              (pUVar1,(float)tickInterval,(pUVar1->klass->vtable)._166_set_pageSize.method);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin);
  if (Il2CppMethodInitialized_1843465e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_int)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_int
              );
    Il2CppMethodInitialized_1843465e7 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)pUVar1,(MethodInfo *)0x0);
  (__this->fields)._intSlider = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._intSlider,pUVar1);
  pUVar1 = (__this->fields)._intSlider;
  (__this->fields)._isIntSlider = true;
  __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_int);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0,(MethodInfo_EB6EC0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)pUVar1,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_int)
  ;
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent,valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin$$Dropdown
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Dropdown (CustomLogic_CustomLogicListBuiltin_o* choices, int32_t defaultIndex, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x18206a990
// eh: try 0x18206aae0..0x18206aceb -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18206ab3d: mov rdx, qword ptr [rip + 0x2024344]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x18206ab44: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x18206ab49: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18206ab4e: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18206ab53: test rcx, rcx
// asm:   0x18206ab56: jne 0x18206aceb
// asm:   0x18206ab5c: xor esi, esi
// asm:   0x18206ab5e: mov r12, qword ptr [rsp + 0xd8]
// asm:   0x18206ab66: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x18206ab6e: mov r15d, dword ptr [rsp + 0xc8]
// asm:   0x18206ab76: mov rdi, qword ptr [rsp + 0xc0]
// asm:   0x18206aceb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Dropdown
          (CustomLogic_CustomLogicListBuiltin_o *choices,int32_t defaultIndex,System_String_o *label,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_String_array *pSVar3;
  System_String_o *item;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *choices_00;
  undefined8 uVar6;
  UnityEngine_UIElements_DropdownField_o *pUVar7;
  CustomLogic_CustomLogicDropdownBuiltin_o *__this_00;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Il2CppObject *local_48;
  
  if (Il2CppMethodInitialized_184346667 == '\0') {
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
    Il2CppMethodInitialized_184346667 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  choices_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)choices_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((choices != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (choices->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_58 = (undefined1  [8])local_70._0_8_;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
    local_48 = local_60;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      if (!bVar5) break;
      if (local_48 != (Il2CppObject *)0x0) {
        uVar6 = (*local_48->klass->vtable[3].methodPtr)(local_48,local_48->klass->vtable[3].method);
        if (choices_00 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(choices_00,uVar6,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
               MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    item = "No options";
    if (choices_00 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((choices_00->fields)._size == 0) {
        piVar1 = &(choices_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (choices_00->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_18206acdf;
        uVar2 = (choices_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (choices_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)choices_00,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_DropdownField);
      UnityEngine_UIElements_DropdownField___ctor_31d0480
                (pUVar7,label,choices_00,defaultIndex,(System_Func_string__string__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin);
      if (Il2CppMethodInitialized_184346574 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_ctor_b__2_0);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
                  );
        Il2CppMethodInitialized_184346574 = '\x01';
      }
      CustomLogic_CustomLogicVisualElementBuiltin___ctor
                ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
                 (UnityEngine_UIElements_VisualElement_o *)pUVar7,(MethodInfo *)0x0);
      (__this_00->fields)._dropdown = pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._dropdown,pUVar7);
      pUVar7 = (__this_00->fields)._dropdown;
      __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
      UnityEngine_UIElements_EventCallback_object____ctor
                (__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_ctor_b__2_0,
                 (MethodInfo_EB6EC0 *)0x0);
      UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
                ((UnityEngine_UIElements_INotifyValueChanged_T__o *)pUVar7,
                 (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_01,
                 (MethodInfo_7118E0 *)
                 MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
                );
      (__this_00->fields)._valueChangedEvent = valueChangedEvent;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent,valueChangedEvent);
      return __this_00;
    }
  }
label_18206acdf:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$ProgressBar
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicUIBuiltin__ProgressBar (float lowValue, float highValue, System_String_o* title, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x18206b590

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__ProgressBar
          (float lowValue,float highValue,System_String_o *title,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *control;
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  CustomLogic_CustomLogicProgressBarBuiltin_o *__this_00;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  
  if (Il2CppMethodInitialized_184346668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ProgressBar);
    Il2CppMethodInitialized_184346668 = '\x01';
  }
  __this = (UnityEngine_UIElements_AbstractProgressBar_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_ProgressBar);
  UnityEngine_UIElements_ProgressBar___ctor((UnityEngine_UIElements_ProgressBar_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this,lowValue,(MethodInfo *)0x0);
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this,highValue,(MethodInfo *)0x0);
    UnityEngine_UIElements_AbstractProgressBar__set_title(__this,title,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin);
    if (Il2CppMethodInitialized_1843465b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
                );
      Il2CppMethodInitialized_1843465b8 = '\x01';
    }
    CustomLogic_CustomLogicVisualElementBuiltin___ctor
              ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
               (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
    (__this_00->fields)._progressBar = (UnityEngine_UIElements_ProgressBar_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._progressBar,__this);
    control = (__this_00->fields)._progressBar;
    __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0,
               (MethodInfo_EB6EC0 *)0x0);
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
              ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
               (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_01,
               (MethodInfo_7118E0 *)
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
              );
    (__this_00->fields)._valueChangedEvent = valueChangedEvent;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._valueChangedEvent,valueChangedEvent);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUIBuiltin$$ScrollView
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicUIBuiltin__ScrollView (const MethodInfo* method);
// 0x18206b710

CustomLogic_CustomLogicScrollViewBuiltin_o * CustomLogic_CustomLogicUIBuiltin__ScrollView(MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184346669 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ScrollView);
    Il2CppMethodInitialized_184346669 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_ScrollView);
  UnityEngine_UIElements_ScrollView___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
  (__this_00->fields)._scrollView = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._scrollView,__this);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Icon
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Icon (System_String_o* iconPath, const MethodInfo* method);
// 0x18206af70

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Icon(System_String_o *iconPath,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  UnityEngine_UIElements_Image_o *__this;
  CustomLogic_CustomLogicIconBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434666a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_Image);
    Il2CppMethodInitialized_18434666a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_UIElements_Image);
  UnityEngine_UIElements_Image___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,(MethodInfo *)0x0);
  (__this_00->fields)._image = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._image,__this);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this_00->fields)._currentIconPath = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._currentIconPath,value);
  bVar1 = System_String__IsNullOrEmpty(iconPath,(MethodInfo *)0x0);
  if (!bVar1) {
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__this_00,iconPath,(MethodInfo *)0x0);
  }
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Image
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Image (System_String_o* iconPath, const MethodInfo* method);
// 0x18206b040

CustomLogic_CustomLogicImageBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Image(System_String_o *iconPath,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicImageBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_18434666b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin);
    Il2CppMethodInitialized_18434666b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin);
  CustomLogic_CustomLogicImageBuiltin___ctor(__this,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(iconPath,(MethodInfo *)0x0);
  if (!bVar1) {
    if (__this == (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicImageBuiltin__SetImage(__this,iconPath,(MethodInfo *)0x0);
  }
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUIBuiltin__get_ClassName (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x18206cda0

System_String_o *
CustomLogic_CustomLogicUIBuiltin__get_ClassName(CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434666c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    Il2CppMethodInitialized_18434666c = '\x01';
  }
  return "UI";
}


// CustomLogic.CustomLogicUIBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_IsAbstract (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicUIBuiltin__get_IsAbstract(CustomLogic_CustomLogicUIBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicUIBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_IsStatic (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicUIBuiltin__get_IsStatic(CustomLogic_CustomLogicUIBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicUIBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicUIBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicUIBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicUIBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin___cctor (const MethodInfo* method);
// 0x18206cc50

void CustomLogic_CustomLogicUIBuiltin___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Object_array *value;
  
  if (Il2CppMethodInitialized_18434666d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_18434666d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->LastSetLabels,__this);
  value = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->SetLabelRpcArgs,value);
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames = false;
  TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels = true;
  return;
}


