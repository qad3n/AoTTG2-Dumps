// Type: CustomLogic.CustomLogicCutsceneBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCutsceneBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCutsceneBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicCutsceneBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCutsceneBuiltin_o* CustomLogic_CustomLogicCutsceneBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182016c30

CustomLogic_CustomLogicCutsceneBuiltin_o *
CustomLogic_CustomLogicCutsceneBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843462f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin);
    Il2CppMethodInitialized_1843462f9 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin);
      if (Il2CppMethodInitialized_1843462f1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843462f1 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCutsceneBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCutsceneBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x1820193d0

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346300 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346300 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__Start>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__Start_b__2_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820191d0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__Start_b__2_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicManager_o *__this_00;
  bool bVar1;
  System_String_o *value;
  CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *routine;
  
  if (Il2CppMethodInitialized_184346301 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346301 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_18201934c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (__a->m_Items[1],
                         (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
        if (Il2CppMethodInitialized_1843462f2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
          Il2CppMethodInitialized_1843462f2 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
        if (Il2CppMethodInitialized_1843462f7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
          Il2CppMethodInitialized_1843462f7 = '\x01';
        }
        routine = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6
                            );
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
        (routine->fields).__1__state = 0;
        (routine->fields).name = value;
        Il2CppCodeGenWriteBarrier(&(routine->fields).name,value);
        (routine->fields).full = bVar1;
        if (__this_00 != (CustomLogic_CustomLogicManager_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)routine,
                     (MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      goto label_18201934c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogue>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogue_b__3_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018ff0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogue_b__3_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *obj;
  UI_InGameMenu_o *__this_00;
  System_String_o *icon;
  System_String_o *title;
  System_String_o *content;
  
  if (Il2CppMethodInitialized_184346302 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346302 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      icon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (1 < (uint)__a->max_length) {
        title = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          content = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[2],
                               (MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
            if (Il2CppMethodInitialized_1843462f3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
              Il2CppMethodInitialized_1843462f3 = '\x01';
            }
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            if (__this_00 != (UI_InGameMenu_o *)0x0) {
              bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
              if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
                 ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                UI_InGameMenu__ShowCutsceneMenu
                          (__this_00,icon,title,content,
                           TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene,(MethodInfo *)0x0)
                ;
                return (Il2CppObject *)0x0;
              }
              il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
            }
          }
          goto label_1820191ab;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820191ab:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogueForTime>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogueForTime_b__4_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018e00

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogueForTime_b__4_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicManager_o *__this_00;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *routine;
  float fVar1;
  
  if (Il2CppMethodInitialized_184346303 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346303 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                        );
      if (1 < (uint)__a->max_length) {
        value_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          value_01 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (3 < (uint)__a->max_length) {
            fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (__a->m_Items[3],
                               (MethodInfo_66ED40 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
              if (Il2CppMethodInitialized_1843462f4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
                Il2CppMethodInitialized_1843462f4 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
              if (Il2CppMethodInitialized_1843462f6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
                Il2CppMethodInitialized_1843462f6 = '\x01';
              }
              routine = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5
                                  );
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                         (MethodInfo *)0x0);
              (routine->fields).__1__state = 0;
              (routine->fields).icon = value;
              Il2CppCodeGenWriteBarrier(&(routine->fields).icon,value);
              (routine->fields).title = value_00;
              Il2CppCodeGenWriteBarrier(&(routine->fields).title,value_00);
              (routine->fields).content = value_01;
              Il2CppCodeGenWriteBarrier(&(routine->fields).content,value_01);
              (routine->fields).time = fVar1;
              if (__this_00 != (CustomLogic_CustomLogicManager_o *)0x0) {
                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)__this_00,
                           (System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_182018fe3;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_182018fe3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__HideDialogue>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__HideDialogue_b__5_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182017f20

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__HideDialogue_b__5_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843462f5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      Il2CppMethodInitialized_1843462f5 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)
         ) {
        UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff1050

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  System_Func_CustomLogicCutsceneBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843462fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ShowDialogue");
    il2cpp_codegen_initialize_runtime_metadata(&"Start");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowDialogueForTime");
    il2cpp_codegen_initialize_runtime_metadata(&"HideDialogue");
    Il2CppMethodInitialized_1843462fa = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Start",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843462fb == '\0') {
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
      Il2CppMethodInitialized_1843462fb = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ff1501;
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__Start_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__2_0;
  }
  else {
    bVar2 = System_String__op_Equality(name,"ShowDialogue",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843462fc == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843462fc = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__3_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ff1501;
      if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogue_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__3_0;
    }
    else {
      bVar2 = System_String__op_Equality(name,"ShowDialogueForTime",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462fd == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843462fd = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__4_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ff1501;
        if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object
                           );
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogueForTime_b
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__4_0 =
             (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__4_0;
      }
      else {
        bVar2 = System_String__op_Equality(name,"HideDialogue",(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCutsceneBuiltin not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_CreateMemberBinding);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
        }
        if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462fe == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843462fe = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__5_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ff1501;
        if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object
                           );
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__HideDialogue_b__5_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__5_0 =
             (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__5_0;
      }
    }
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181ff1501:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__Start
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start (const MethodInfo* method);
// 0x1820004b0

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462fb == '\0') {
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
    Il2CppMethodInitialized_1843462fb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__Start_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogue
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue (const MethodInfo* method);
// 0x182000390

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462fc == '\0') {
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
    Il2CppMethodInitialized_1843462fc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogue_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogueForTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime (const MethodInfo* method);
// 0x182000270

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462fd == '\0') {
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
    Il2CppMethodInitialized_1843462fd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogueForTime_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__HideDialogue
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue (const MethodInfo* method);
// 0x181fff2b0

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462fe == '\0') {
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
    Il2CppMethodInitialized_1843462fe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCutsceneBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__HideDialogue_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicCutsceneBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18200abb0

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843462ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ShowDialogue");
    il2cpp_codegen_initialize_runtime_metadata(&"Start");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowDialogueForTime");
    il2cpp_codegen_initialize_runtime_metadata(&"HideDialogue");
    Il2CppMethodInitialized_1843462ff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Start",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowDialogue",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowDialogueForTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HideDialogue",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6___ctor (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6___ctor(CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_IDisposable_Dispose (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_IDisposable_Dispose(CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, MethodInfo* method)

{
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__MoveNext (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x182017cd0

bool CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__MoveNext
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_String_o *className;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  UI_InGameMenu_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184346304 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Start");
    Il2CppMethodInitialized_184346304 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    className = (__this->fields).name;
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
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
        value = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                          (pCVar3,classInstance,"Start",(System_Object_array *)0x0,0,
                           (MethodInfo *)0x0);
        (__this->fields).__2__current = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
label_182017ed0:
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
    if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_182017ed0;
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu))
    {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
    }
    UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
  }
  return false;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x182017ee0

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5___ctor (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5___ctor(CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_IDisposable_Dispose (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_IDisposable_Dispose(CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, MethodInfo* method)

{
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__MoveNext (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x1820194b0

bool CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__MoveNext
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               MethodInfo *method)

{
  float amplificationFactor;
  byte bVar1;
  int iVar2;
  System_String_o *icon;
  System_String_o *title;
  UI_InGameMenu_o *pUVar3;
  System_String_o *content;
  bool bVar4;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  
  if (Il2CppMethodInitialized_184346305 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346305 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    icon = (__this->fields).icon;
    title = (__this->fields).title;
    pUVar3 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    content = (__this->fields).content;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (pUVar3 == (UI_InGameMenu_o *)0x0) {
label_1820196a8:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    UI_InGameMenu__ShowCutsceneMenu
              (pUVar3,icon,title,content,TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene,
               (MethodInfo *)0x0);
    amplificationFactor = (__this->fields).time;
    __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_00,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    bVar4 = true;
    (__this->fields).__1__state = 1;
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar3 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_1820196a8;
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UI_InGameMenu);
      }
      UI_InGameMenu__HideCutsceneMenu(pUVar3,(MethodInfo *)0x0);
    }
    bVar4 = false;
  }
  return bVar4;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x1820196c0

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin___ctor (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x18200caa0

void CustomLogic_CustomLogicCutsceneBuiltin___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843462f1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$Start
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__Start (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* name, bool full, const MethodInfo* method);
// 0x18200c9d0

void CustomLogic_CustomLogicCutsceneBuiltin__Start
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *name,bool full,
               MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this_00;
  CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *routine;
  
  if (Il2CppMethodInitialized_1843462f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462f2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  if (Il2CppMethodInitialized_1843462f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
    Il2CppMethodInitialized_1843462f7 = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(routine->fields).name,name);
  (routine->fields).full = full;
  if (__this_00 != (CustomLogic_CustomLogicManager_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogue
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, const MethodInfo* method);
// 0x18200c840

void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843462f3 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
    {
      UI_InGameMenu__ShowCutsceneMenu
                (__this_00,icon,title,content,TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene
                 ,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogueForTime
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, float time, const MethodInfo* method);
// 0x18200c740

void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,float time,MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this_00;
  CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *routine;
  
  if (Il2CppMethodInitialized_1843462f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462f4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  if (Il2CppMethodInitialized_1843462f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
    Il2CppMethodInitialized_1843462f6 = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)
                       TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(routine->fields).icon,icon);
  (routine->fields).title = title;
  Il2CppCodeGenWriteBarrier(&(routine->fields).title,title);
  (routine->fields).content = content;
  Il2CppCodeGenWriteBarrier(&(routine->fields).content,content);
  (routine->fields).time = time;
  if (__this_00 != (CustomLogic_CustomLogicManager_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$HideDialogue
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x18200c690

void CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843462f5 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
    {
      UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$routine_ShowDialogueForTime
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, float time, const MethodInfo* method);
// 0x18200cb20

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
          System_String_o *content,float time,MethodInfo *method)

{
  CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
    Il2CppMethodInitialized_1843462f6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).icon,icon);
  (__this_00->fields).title = title;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).title,title);
  (__this_00->fields).content = content;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).content,content);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$StartCutscene
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* name, bool full, const MethodInfo* method);
// 0x18200c950

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *name,bool full,MethodInfo *method
          )

{
  CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
    Il2CppMethodInitialized_1843462f7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).name,name);
  (__this_00->fields).full = full;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCutsceneBuiltin__get_ClassName (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x18200caf0

System_String_o *
CustomLogic_CustomLogicCutsceneBuiltin__get_ClassName
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cutscene");
    Il2CppMethodInitialized_1843462f8 = '\x01';
  }
  return "Cutscene";
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsAbstract (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCutsceneBuiltin__get_IsAbstract(CustomLogic_CustomLogicCutsceneBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsStatic (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCutsceneBuiltin__get_IsStatic(CustomLogic_CustomLogicCutsceneBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCutsceneBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicCutsceneBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


