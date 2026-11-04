// Type: CustomLogic.CustomLogicInputBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicInputBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicInputBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputBuiltin_o* CustomLogic_CustomLogicInputBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203c9f0

CustomLogic_CustomLogicInputBuiltin_o *
CustomLogic_CustomLogicInputBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434642e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin);
    Il2CppMethodInitialized_18434642e = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin);
      if (Il2CppMethodInitialized_184346419 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346419 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicInputBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182044960

void CustomLogic_CustomLogicInputBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346441 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346441 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicInputBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyName>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyName_b__2_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f860

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyName_b__2_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  System_Nullable_uint__Fields local_res18 [2];
  System_Enum_o local_28;
  uint32_t local_18;
  
  if (Il2CppMethodInitialized_184346442 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346442 = '\x01';
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
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (Il2CppMethodInitialized_18434641d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_KeyCode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_18434641d = '\x01';
  }
  local_res18[0].hasValue = false;
  local_res18[0]._1_3_ = 0;
  local_res18[0].value = 0;
  local_res18[0] =
       (System_Nullable_uint__Fields)
       CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar1,(MethodInfo *)0x0);
  if (local_res18[0].hasValue == false) {
    pSVar2 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar1,(MethodInfo *)0x0);
    if (pSVar2 != (Settings_KeybindSetting_o *)0x0) {
      pSVar1 = (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
      return (Il2CppObject *)pSVar1;
    }
    ThrowNullReferenceException();
  }
  local_18 = System_Nullable_uint___get_Value
                       ((System_Nullable_uint__o *)local_res18,
                        (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_KeyCode_get_Value);
  local_28.klass = (System_Enum_c *)TypeInfo_UnityEngine_KeyCode;
  local_28.monitor = &g_data_ffffffffffffffff;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyHold>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyHold_b__3_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f730

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyHold_b__3_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  uint32_t key;
  System_String_o *key_00;
  Settings_KeybindSetting_o *__this_00;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  System_Nullable_uint__Fields local_18 [2];
  
  if (Il2CppMethodInitialized_184346443 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346443 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (Il2CppMethodInitialized_18434641e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
      Il2CppMethodInitialized_18434641e = '\x01';
    }
    local_18[0].hasValue = false;
    local_18[0]._1_3_ = 0;
    local_18[0].value = 0;
    local_18[0] = (System_Nullable_uint__Fields)
                  CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key_00,(MethodInfo *)0x0);
    if (local_18[0].hasValue == false) {
      __this_00 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key_00,(MethodInfo *)0x0);
      if (__this_00 == (Settings_KeybindSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = Settings_KeybindSetting__GetKey(__this_00,true,(MethodInfo *)0x0);
    }
    else {
      key = System_Nullable_uint___get_Value
                      ((System_Nullable_uint__o *)local_18,
                       (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_KeyCode_get_Value);
      bVar1 = UnityEngine_Input__GetKey(key,(MethodInfo *)0x0);
    }
    if (bVar1 == false) {
      local_res18[0] = false;
    }
    else {
      local_res18[0] = CustomLogic_CustomLogicInputBuiltin__CanKey((MethodInfo *)0x0);
    }
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyDown>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyDown_b__4_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f600

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyDown_b__4_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  uint32_t key;
  System_String_o *key_00;
  Settings_KeybindSetting_o *__this_00;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  System_Nullable_uint__Fields local_18 [2];
  
  if (Il2CppMethodInitialized_184346444 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346444 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (Il2CppMethodInitialized_18434641f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
      Il2CppMethodInitialized_18434641f = '\x01';
    }
    local_18[0].hasValue = false;
    local_18[0]._1_3_ = 0;
    local_18[0].value = 0;
    local_18[0] = (System_Nullable_uint__Fields)
                  CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key_00,(MethodInfo *)0x0);
    if (local_18[0].hasValue == false) {
      __this_00 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key_00,(MethodInfo *)0x0);
      if (__this_00 == (Settings_KeybindSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = Settings_KeybindSetting__GetKeyDown(__this_00,true,(MethodInfo *)0x0);
    }
    else {
      key = System_Nullable_uint___get_Value
                      ((System_Nullable_uint__o *)local_18,
                       (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_KeyCode_get_Value);
      bVar1 = UnityEngine_Input__GetKeyDown(key,(MethodInfo *)0x0);
    }
    if (bVar1 == false) {
      local_res18[0] = false;
    }
    else {
      local_res18[0] = CustomLogic_CustomLogicInputBuiltin__CanKey((MethodInfo *)0x0);
    }
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyUp>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyUp_b__5_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f9a0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyUp_b__5_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  uint32_t key;
  System_String_o *key_00;
  Settings_KeybindSetting_o *__this_00;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  System_Nullable_uint__Fields local_18 [2];
  
  if (Il2CppMethodInitialized_184346445 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346445 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (Il2CppMethodInitialized_184346420 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
      Il2CppMethodInitialized_184346420 = '\x01';
    }
    local_18[0].hasValue = false;
    local_18[0]._1_3_ = 0;
    local_18[0].value = 0;
    local_18[0] = (System_Nullable_uint__Fields)
                  CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key_00,(MethodInfo *)0x0);
    if (local_18[0].hasValue == false) {
      __this_00 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key_00,(MethodInfo *)0x0);
      if (__this_00 == (Settings_KeybindSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = Settings_KeybindSetting__GetKeyUp(__this_00,true,(MethodInfo *)0x0);
    }
    else {
      key = System_Nullable_uint___get_Value
                      ((System_Nullable_uint__o *)local_18,
                       (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_KeyCode_get_Value);
      bVar1 = UnityEngine_Input__GetKeyUp(key,(MethodInfo *)0x0);
    }
    if (bVar1 == false) {
      local_res18[0] = false;
    }
    else {
      local_res18[0] = CustomLogic_CustomLogicInputBuiltin__CanKey((MethodInfo *)0x0);
    }
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseAim>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseAim_b__6_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182031500

Il2CppObject*
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseAim_b__6_0(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, MethodInfo* method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  Cameras_BaseCamera_o *pCVar5;
  UnityEngine_Camera_o *__this;
  undefined8 uVar6;
  bool bVar7;
  int32_t layerMask;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Ray_o *pUVar9;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float fVar10;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Ray_o local_a8;
  UnityEngine_RaycastHit_o local_88;
  UnityEngine_Ray_o local_58 [3];
  
  if (Il2CppMethodInitialized_184346421 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346421 = '\x01';
  }
  local_88.fields.m_Normal.fields.y = 0.0;
  local_88.fields.m_Normal.fields.z = 0.0;
  local_88.fields.m_FaceID = 0;
  local_88.fields.m_Point.fields.x = 0.0;
  local_88.fields.m_Point.fields.y = 0.0;
  local_88.fields.m_Point.fields.z = 0.0;
  local_88.fields.m_Normal.fields.x = 0.0;
  local_88.fields.m_Distance = 0.0;
  local_88.fields.m_UV.fields.x = 0.0;
  local_88.fields.m_UV.fields.y = 0.0;
  local_88.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar5 != (Cameras_BaseCamera_o *)0x0) {
    __this = (pCVar5->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar8 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      local_b8.x = (pUVar8->fields).x;
      local_b8.y = (pUVar8->fields).y;
      local_b8.z = (pUVar8->fields).z;
      pUVar9 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                         (local_58,__this,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
      uVar1 = (pUVar9->fields).m_Origin.fields.x;
      uVar3 = (pUVar9->fields).m_Origin.fields.y;
      uVar6._0_4_ = (pUVar9->fields).m_Direction.fields.y;
      uVar6._4_4_ = (pUVar9->fields).m_Direction.fields.z;
      local_b8.z = (pUVar9->fields).m_Direction.fields.z * 1000.0 + (pUVar9->fields).m_Origin.fields.z;
      local_b8.y = (pUVar9->fields).m_Direction.fields.y * 1000.0 + (float)uVar3;
      local_b8.x = (pUVar9->fields).m_Direction.fields.x * 1000.0 + (float)uVar1;
      local_a8.fields.m_Origin.fields.x = (pUVar9->fields).m_Origin.fields.x;
      local_a8.fields.m_Origin.fields.y = (pUVar9->fields).m_Origin.fields.y;
      local_a8.fields._8_8_ = *(undefined8 *)&(pUVar9->fields).m_Origin.fields.z;
      if ((TypeInfo_Characters_Human->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Human);
      }
      layerMask = UnityEngine_Touch__get_fingerId
                            ((UnityEngine_Touch_o *)TypeInfo_Characters_Human->static_fields,(MethodInfo *)0x0
                            );
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      local_a8.fields.m_Direction.fields._4_8_ = uVar6;
      bVar7 = UnityEngine_Physics__Raycast_2fe5050(&local_a8,&local_88,1000.0,layerMask,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar8 = UnityEngine_RaycastHit__get_point
                           ((UnityEngine_Vector3_o *)&local_a8,&local_88,(MethodInfo *)0x0);
        fVar2 = (pUVar8->fields).x;
        fVar4 = (pUVar8->fields).y;
        fVar10 = (pUVar8->fields).z;
      }
      else {
        fVar2 = local_b8.x;
        fVar4 = local_b8.y;
        fVar10 = local_b8.z;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_b8.y = fVar4;
      local_b8.x = fVar2;
      local_b8.z = fVar10;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCursorAimDirection>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetCursorAimDirection_b__7_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182030ec0

Il2CppObject*
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetCursorAimDirection_b__7_0(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, MethodInfo* method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Cameras_BaseCamera_o *pCVar3;
  UnityEngine_Camera_o *__this;
  undefined8 uVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Ray_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  UnityEngine_Ray_o local_30;
  
  if (Il2CppMethodInitialized_184346422 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346422 = '\x01';
  }
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
    __this = (pCVar3->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar5 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      local_58.x = (pUVar5->fields).x;
      local_58.y = (pUVar5->fields).y;
      local_58.z = (pUVar5->fields).z;
      pUVar6 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                         (&local_30,__this,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      local_48.x = (pUVar6->fields).m_Origin.fields.x;
      local_48.y = (pUVar6->fields).m_Origin.fields.y;
      uVar4 = *(undefined8 *)&(pUVar6->fields).m_Origin.fields.z;
      uVar1 = (pUVar6->fields).m_Direction.fields.y;
      uVar2 = (pUVar6->fields).m_Direction.fields.z;
      local_48.z = (float)uVar4;
      fStack_3c = (float)((ulonglong)uVar4 >> 0x20);
      uVar4._4_4_ = (float)uVar1;
      uVar4._0_4_ = fStack_3c;
      fStack_38 = (float)uVar1;
      fStack_34 = (float)uVar2;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_58.z = (float)uVar2;
      local_58._0_8_ = uVar4;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseSpeed>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseSpeed_b__8_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182031870

Il2CppObject*
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseSpeed_b__8_0(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, MethodInfo* method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184346423 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_184346423 = '\x01';
  }
  fVar1 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar2 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_38[0].fields.z = 0.0;
  local_38[0].fields.x = fVar1;
  local_38[0].fields.y = fVar2;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0(__this,local_38,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMousePosition>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMousePosition_b__9_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182031760

Il2CppObject*
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMousePosition_b__9_0(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, MethodInfo* method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  Cameras_BaseCamera_o *pCVar4;
  Cameras_BaseCamera_c *pCVar5;
  UnityEngine_Vector3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346424 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346424 = '\x01';
  }
  pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar4 != (Cameras_BaseCamera_o *)0x0) {
    pCVar5 = pCVar4->klass;
    bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if ((bVar2 <= (pCVar5->_2).typeHierarchyDepth) &&
       ((pCVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      pUVar6 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      goto label_182031820;
    }
  }
  pUVar6 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
label_182031820:
  fVar3 = (pUVar6->fields).z;
  uVar1._0_4_ = (pUVar6->fields).x;
  uVar1._4_4_ = (pUVar6->fields).y;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_28[0]._0_8_ = uVar1;
  local_28[0].z = fVar3;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetScreenDimensions>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetScreenDimensions_b__10_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182031920

Il2CppObject*
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetScreenDimensions_b__10_0(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, MethodInfo* method)

{
  int32_t iVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184346425 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184346425 = '\x01';
  }
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_38[0].fields.z = 0.0;
  local_38[0].fields.x = (float)iVar1;
  local_38[0].fields.y = (float)iVar2;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0(__this,local_38,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyDefaultEnabled>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyDefaultEnabled_b__11_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820417e0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyDefaultEnabled_b__11_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  System_String_o *key;
  Settings_KeybindSetting_o *item;
  
  if (Il2CppMethodInitialized_184346446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346446 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_182041a0c;
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (__a->m_Items[1],
                         (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (Il2CppMethodInitialized_184346426 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
        Il2CppMethodInitialized_184346426 = '\x01';
      }
      item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)item,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
          if (!bVar2) {
            return (Il2CppObject *)0x0;
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                   TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
          if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Remove
                      (pSVar1,(Il2CppObject *)item,
                       (MethodInfo_1766930 *)
                       MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
            return (Il2CppObject *)0x0;
          }
        }
      }
      else {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)item,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
          if (!bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
            if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182041a0c;
            System_Collections_Generic_HashSet_object___Add
                      (pSVar1,(Il2CppObject *)item,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add)
            ;
          }
          return (Il2CppObject *)0x0;
        }
      }
label_182041a0c:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyHold>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyHold_b__12_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041a20

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyHold_b__12_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  System_String_o *key;
  Settings_KeybindSetting_o *item;
  
  if (Il2CppMethodInitialized_184346447 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346447 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_182041c4c;
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (__a->m_Items[1],
                         (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (Il2CppMethodInitialized_184346427 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
        Il2CppMethodInitialized_184346427 = '\x01';
      }
      item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)item,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
          if (!bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
            if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182041c4c;
            System_Collections_Generic_HashSet_object___Add
                      (pSVar1,(Il2CppObject *)item,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add)
            ;
          }
          return (Il2CppObject *)0x0;
        }
      }
      else {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)item,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
          if (!bVar2) {
            return (Il2CppObject *)0x0;
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                   TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
          if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Remove
                      (pSVar1,(Il2CppObject *)item,
                       (MethodInfo_1766930 *)
                       MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
            return (Il2CppObject *)0x0;
          }
        }
      }
label_182041c4c:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCategoryKeysEnabled>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetCategoryKeysEnabled_b__13_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041510

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetCategoryKeysEnabled_b__13_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  System_String_o *category;
  
  if (Il2CppMethodInitialized_184346448 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346448 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    category = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled(category,enabled,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetGeneralKeysEnabled>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetGeneralKeysEnabled_b__14_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820415d0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetGeneralKeysEnabled_b__14_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  
  if (Il2CppMethodInitialized_184346449 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346449 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool
                          );
      if (Il2CppMethodInitialized_184346429 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"General");
        Il2CppMethodInitialized_184346429 = '\x01';
      }
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
                ("General",enabled,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteractionKeysEnabled>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetInteractionKeysEnabled_b__15_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041730

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetInteractionKeysEnabled_b__15_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  
  if (Il2CppMethodInitialized_18434644a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434644a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool
                          );
      if (Il2CppMethodInitialized_18434642a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
        Il2CppMethodInitialized_18434642a = '\x01';
      }
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
                ("Interaction",enabled,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTitanKeysEnabled>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetTitanKeysEnabled_b__16_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042590

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetTitanKeysEnabled_b__16_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  
  if (Il2CppMethodInitialized_18434644b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434644b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool
                          );
      if (Il2CppMethodInitialized_18434642b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Titan");
        Il2CppMethodInitialized_18434642b = '\x01';
      }
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
                ("Titan",enabled,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetHumanKeysEnabled>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetHumanKeysEnabled_b__17_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041680

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetHumanKeysEnabled_b__17_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  
  if (Il2CppMethodInitialized_18434644c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434644c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool
                          );
      if (Il2CppMethodInitialized_18434642c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Human");
        Il2CppMethodInitialized_18434642c = '\x01';
      }
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
                ("Human",enabled,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x1820232a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicInputBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_18434642f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetGeneralKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetScreenDimensions");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyHold");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCategoryKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHumanKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyName");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMouseAim");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyDown");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKeyDefaultEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCursorAimDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMouseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SetInteractionKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMousePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyUp");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTitanKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKeyHold");
    Il2CppMethodInitialized_18434642f = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8b47cad3) {
    if (uVar3 < 0x299fa333) {
      if (uVar3 < 0x1fca2dcc) {
        if (uVar3 == 0x2888963) {
          bVar2 = System_String__op_Equality(name,"GetKeyUp",(MethodInfo *)0x0);
          if (!bVar2) goto label_182024629;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346433 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyUp_b__5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346433 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__5_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9
          ;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object)
          ;
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyUp_b__5_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__5_0 =
               (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__5_0;
        }
        else {
          if (uVar3 != 0x1fca2dcb) goto label_182024629;
          bVar2 = System_String__op_Equality(name,"GetCursorAimDirection",(MethodInfo *)0x0);
          if (!bVar2) goto label_182024629;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346435 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetCursorAimDirection_b__7
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346435 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__7_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9
          ;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object)
          ;
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetCursorAimDirection_b__7
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__7_0 =
               (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__7_0;
        }
      }
      else if (uVar3 == 0x230f7b6c) {
        bVar2 = System_String__op_Equality(name,"SetTitanKeysEnabled",(MethodInfo *)0x0);
        if (!bVar2) goto label_182024629;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434643e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetTitanKeysEnabled_b__16
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_18434643e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__16_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetTitanKeysEnabled_b__16
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__16_0 =
             (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__16_0;
      }
      else {
        if (uVar3 != 0x299fa332) goto label_182024629;
        bVar2 = System_String__op_Equality(name,"SetGeneralKeysEnabled",(MethodInfo *)0x0);
        if (!bVar2) goto label_182024629;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434643c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetGeneralKeysEnabled_b__1
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_18434643c = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__14_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetGeneralKeysEnabled_b__1
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__14_0 =
             (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__14_0;
      }
    }
    else if (uVar3 < 0x423fef7d) {
      if (uVar3 == 0x3ce5bffd) {
        bVar2 = System_String__op_Equality(name,"SetHumanKeysEnabled",(MethodInfo *)0x0);
        if (!bVar2) goto label_182024629;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434643f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetHumanKeysEnabled_b__17
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_18434643f = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__17_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetHumanKeysEnabled_b__17
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__17_0 =
             (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__17_0;
      }
      else {
        if (uVar3 != 0x423fef7c) goto label_182024629;
        bVar2 = System_String__op_Equality(name,"SetKeyDefaultEnabled",(MethodInfo *)0x0);
        if (!bVar2) goto label_182024629;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346439 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyDefaultEnabled_b__11
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_184346439 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__11_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyDefaultEnabled_b__11
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__11_0 =
             (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__11_0;
      }
    }
    else if (uVar3 == 0x779ad7dd) {
      bVar2 = System_String__op_Equality(name,"GetMousePosition",(MethodInfo *)0x0);
      if (!bVar2) goto label_182024629;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346437 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMousePosition_b__9_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346437 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__9_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMousePosition_b__9_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__9_0 =
           (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__9_0;
    }
    else {
      if (uVar3 != 0x8b47cad2) goto label_182024629;
      bVar2 = System_String__op_Equality(name,"SetInteractionKeysEnabled",(MethodInfo *)0x0);
      if (!bVar2) goto label_182024629;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434643d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetInteractionKeysEnabled
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434643d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__15_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetInteractionKeysEnabled
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__15_0 =
           (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__15_0;
    }
  }
  else if (uVar3 < 0xbd218aad) {
    if (uVar3 < 0xa3a3c236) {
      if (uVar3 == 0xa17036af) {
        bVar2 = System_String__op_Equality(name,"GetKeyHold",(MethodInfo *)0x0);
        if (!bVar2) goto label_182024629;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346431 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyHold_b__3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_184346431 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__3_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyHold_b__3_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__3_0 =
             (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__3_0;
      }
      else {
        if (uVar3 != 0xa3a3c235) goto label_182024629;
        bVar2 = System_String__op_Equality(name,"GetMouseSpeed",(MethodInfo *)0x0);
        if (!bVar2) goto label_182024629;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346436 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseSpeed_b__8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_184346436 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__8_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseSpeed_b__8_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__8_0;
      }
    }
    else if (uVar3 == 0xa4899163) {
      bVar2 = System_String__op_Equality(name,"SetKeyHold",(MethodInfo *)0x0);
      if (!bVar2) goto label_182024629;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434643a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyHold_b__12_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434643a = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__12_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyHold_b__12_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__12_0 =
           (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__12_0;
    }
    else {
      if (uVar3 != 0xbd218aac) goto label_182024629;
      bVar2 = System_String__op_Equality(name,"SetCategoryKeysEnabled",(MethodInfo *)0x0);
      if (!bVar2) goto label_182024629;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434643b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetCategoryKeysEnabled_b
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434643b = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__13_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetCategoryKeysEnabled_b
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__13_0 =
           (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__13_0;
    }
  }
  else if (uVar3 < 0xca5c42a8) {
    if (uVar3 == 0xc37a5fcd) {
      bVar2 = System_String__op_Equality(name,"GetKeyName",(MethodInfo *)0x0);
      if (!bVar2) goto label_182024629;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346430 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyName_b__2_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346430 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__2_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyName_b__2_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__2_0 =
           (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__2_0;
    }
    else {
      if (uVar3 != 0xca5c42a7) goto label_182024629;
      bVar2 = System_String__op_Equality(name,"GetMouseAim",(MethodInfo *)0x0);
      if (!bVar2) goto label_182024629;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346434 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseAim_b__6_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346434 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseAim_b__6_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__6_0;
    }
  }
  else if (uVar3 == 0xd098c4f6) {
    bVar2 = System_String__op_Equality(name,"GetKeyDown",(MethodInfo *)0x0);
    if (!bVar2) goto label_182024629;
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346432 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyDown_b__4_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346432 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__4_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyDown_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__4_0;
  }
  else {
    if (uVar3 != 0xd6be4d6a) {
label_182024629:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    bVar2 = System_String__op_Equality(name,"GetScreenDimensions",(MethodInfo *)0x0);
    if (!bVar2) goto label_182024629;
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346438 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetScreenDimensions_b__10
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346438 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__10_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820245fa;
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetScreenDimensions_b__10
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__10_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_1820245fa:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName (const MethodInfo* method);
// 0x182027c30

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346430 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyName_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346430 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyName_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyHold
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold (const MethodInfo* method);
// 0x182027b10

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346431 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyHold_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346431 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyHold_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyDown
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown (const MethodInfo* method);
// 0x1820279f0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346432 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyDown_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346432 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyDown_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyUp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp (const MethodInfo* method);
// 0x182027d50

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346433 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyUp_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346433 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyUp_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseAim
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim (const MethodInfo* method);
// 0x182027f90

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346434 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseAim_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346434 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseAim_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetCursorAimDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection (const MethodInfo* method);
// 0x182027690

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346435 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetCursorAimDirection_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346435 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetCursorAimDirection_b__7
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed (const MethodInfo* method);
// 0x1820281d0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346436 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseSpeed_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346436 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseSpeed_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMousePosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition (const MethodInfo* method);
// 0x1820280b0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346437 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMousePosition_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346437 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMousePosition_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetScreenDimensions
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions (const MethodInfo* method);
// 0x182028650

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346438 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetScreenDimensions_b__10
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346438 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetScreenDimensions_b__10
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyDefaultEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled (const MethodInfo* method);
// 0x18202aba0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346439 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyDefaultEnabled_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346439 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyDefaultEnabled_b__11
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyHold
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold (const MethodInfo* method);
// 0x18202acc0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434643a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyHold_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434643a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyHold_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetCategoryKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled (const MethodInfo* method);
// 0x18202a710

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434643b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetCategoryKeysEnabled_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434643b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetCategoryKeysEnabled_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetGeneralKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled (const MethodInfo* method);
// 0x18202a830

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434643c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetGeneralKeysEnabled_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434643c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetGeneralKeysEnabled_b__1
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetInteractionKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled (const MethodInfo* method);
// 0x18202aa80

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434643d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetInteractionKeysEnabled
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434643d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetInteractionKeysEnabled
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetTitanKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled (const MethodInfo* method);
// 0x18202b950

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434643e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetTitanKeysEnabled_b__16
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434643e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetTitanKeysEnabled_b__16
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetHumanKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled (const MethodInfo* method);
// 0x18202a950

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434643f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetHumanKeysEnabled_b__17
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434643f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetHumanKeysEnabled_b__17
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicInputBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182030ad0

void CustomLogic_CustomLogicInputBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346440 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetGeneralKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetScreenDimensions");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyHold");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCategoryKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHumanKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyName");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMouseAim");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyDown");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKeyDefaultEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCursorAimDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMouseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SetInteractionKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMousePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyUp");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTitanKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKeyHold");
    Il2CppMethodInitialized_184346440 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKeyName",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKeyHold",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKeyDown",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKeyUp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetMouseAim",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetCursorAimDirection",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetMouseSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetMousePosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetScreenDimensions",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetKeyDefaultEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetKeyHold",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCategoryKeysEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetGeneralKeysEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetInteractionKeysEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTitanKeysEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetHumanKeysEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin___ctor (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x1820322e0

void CustomLogic_CustomLogicInputBuiltin___ctor
               (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346419 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346419 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeybind
// il2cpp: Settings_KeybindSetting_o* CustomLogic_CustomLogicInputBuiltin__GetKeybind (System_String_o* key, const MethodInfo* method);
// 0x1820313b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820314da: jmp 0x1820314a8

Settings_KeybindSetting_o *
CustomLogic_CustomLogicInputBuiltin__GetKeybind(System_String_o *key,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  System_Collections_Specialized_OrderedDictionary_o *__this;
  System_String_array *pSVar3;
  Il2CppObject *pIVar4;
  Settings_KeybindSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_18434641a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SaveableSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_18434641a = '\x01';
  }
  if (key != (System_String_o *)0x0) {
    pSVar3 = System_String__Split(key,0x2f,0,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if ((pSVar2 != (Settings_InputSettings_o *)0x0) && (pSVar3 != (System_String_array *)0x0)) {
      if ((int)pSVar3->max_length == 0) {
label_1820314fa:
        ThrowIndexOutOfRangeException();
      }
      __this = (pSVar2->fields).Settings;
      if ((__this != (System_Collections_Specialized_OrderedDictionary_o *)0x0) &&
         (pIVar4 = System_Collections_Specialized_OrderedDictionary__get_Item
                             (__this,(Il2CppObject *)pSVar3->m_Items[0],(MethodInfo *)0x0),
         pIVar4 != (Il2CppObject *)0x0)) {
        bVar1 = (TypeInfo_Settings_SaveableSettingsContainer->_2).typeHierarchyDepth;
        if (((pIVar4->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_SaveableSettingsContainer)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,TypeInfo_Settings_SaveableSettingsContainer);
        }
        if ((uint)pSVar3->max_length < 2) goto label_1820314fa;
        if (pIVar4[1].monitor != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          pSVar5 = (Settings_KeybindSetting_o *)
                   System_Collections_Specialized_OrderedDictionary__get_Item
                             (pIVar4[1].monitor,(Il2CppObject *)pSVar3->m_Items[1],(MethodInfo *)0x0);
          if (pSVar5 != (Settings_KeybindSetting_o *)0x0) {
            bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
            if (((pSVar5->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pSVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar5,TypeInfo_Settings_KeybindSetting);
            }
          }
          return pSVar5;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$GetCustomKeyCode
// il2cpp: System_Nullable_KeyCode__o CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode (System_String_o* key, const MethodInfo* method);
// 0x182030fe0

System_Nullable_KeyCode__o
CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  System_Nullable_KeyCode__Fields SVar2;
  int32_t local_res8 [4];
  System_Nullable_KeyCode__Fields local_res18 [2];
  
  if (Il2CppMethodInitialized_18434641b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_KeyCode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"CustomKey/");
    Il2CppMethodInitialized_18434641b = '\x01';
  }
  local_res8[0] = 0;
  if (key != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(key,"CustomKey/",(MethodInfo *)0x0);
    if (bVar1) {
      if ("CustomKey/" == (System_String_o *)0x0) goto label_1820310bf;
      value = System_String__Substring(key,("CustomKey/"->fields)._stringLength,(MethodInfo *)0x0);
      if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e58);
      }
      bVar1 = System_Enum__TryParse_Int32Enum_
                        (value,local_res8,(MethodInfo_6B1BB0 *)MethodInfo_System_Enum_TryParse_KeyCode);
      if (bVar1) {
        local_res18[0].hasValue = false;
        local_res18[0]._1_3_ = 0;
        local_res18[0].value = 0;
        System_Data_SqlTypes_SqlInt32___ctor_ae2660
                  ((System_Data_SqlTypes_SqlInt32_o *)local_res18,local_res8[0],
                   MethodInfo_System_Nullable_KeyCode_ctor);
        return (System_Nullable_KeyCode__o)local_res18[0];
      }
    }
    SVar2.hasValue = false;
    SVar2._1_3_ = 0;
    SVar2.value = 0;
    return (System_Nullable_KeyCode__o)SVar2;
  }
label_1820310bf:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$CanKey
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__CanKey (const MethodInfo* method);
// 0x182030da0

bool CustomLogic_CustomLogicInputBuiltin__CanKey(MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434641c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_18434641c = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
  }
  if (*(char *)((longlong)&(*(uint64_t *)((char *)pGVar2 + 0x80)) + 2) != '\0') {
    return false;
  }
  bVar3 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar3 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      return TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false;
    }
  }
  return false;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputBuiltin__GetKeyName (System_String_o* key, const MethodInfo* method);
// 0x182031230

System_String_o * CustomLogic_CustomLogicInputBuiltin__GetKeyName(System_String_o *key,MethodInfo *method)

{
  Settings_KeybindSetting_o *pSVar1;
  System_String_o *pSVar2;
  System_Nullable_uint__Fields local_res8 [4];
  System_Enum_o local_28;
  uint32_t local_18;
  
  if (Il2CppMethodInitialized_18434641d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_KeyCode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_18434641d = '\x01';
  }
  local_res8[0].hasValue = false;
  local_res8[0]._1_3_ = 0;
  local_res8[0].value = 0;
  local_res8[0] =
       (System_Nullable_uint__Fields)
       CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,(MethodInfo *)0x0);
  if (local_res8[0].hasValue == false) {
    pSVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,(MethodInfo *)0x0);
    if (pSVar1 != (Settings_KeybindSetting_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
    ThrowNullReferenceException();
  }
  local_18 = System_Nullable_uint___get_Value
                       ((System_Nullable_uint__o *)local_res8,
                        (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_KeyCode_get_Value);
  local_28.klass = (System_Enum_c *)TypeInfo_UnityEngine_KeyCode;
  local_28.monitor = &g_data_ffffffffffffffff;
  pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  return pSVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyHold
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyHold (System_String_o* key, const MethodInfo* method);
// 0x182031180

bool CustomLogic_CustomLogicInputBuiltin__GetKeyHold(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  uint32_t key_00;
  Settings_KeybindSetting_o *__this;
  System_Nullable_uint__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_18434641e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_18434641e = '\x01';
  }
  local_res8[0].hasValue = false;
  local_res8[0]._1_3_ = 0;
  local_res8[0].value = 0;
  local_res8[0] =
       (System_Nullable_uint__Fields)
       CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,(MethodInfo *)0x0);
  if (local_res8[0].hasValue == false) {
    __this = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,(MethodInfo *)0x0);
    if (__this == (Settings_KeybindSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = Settings_KeybindSetting__GetKey(__this,true,(MethodInfo *)0x0);
  }
  else {
    key_00 = System_Nullable_uint___get_Value
                       ((System_Nullable_uint__o *)local_res8,
                        (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_KeyCode_get_Value);
    bVar1 = UnityEngine_Input__GetKey(key_00,(MethodInfo *)0x0);
  }
  if (bVar1 == false) {
    return false;
  }
  bVar1 = CustomLogic_CustomLogicInputBuiltin__CanKey((MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyDown
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyDown (System_String_o* key, const MethodInfo* method);
// 0x1820310d0

bool CustomLogic_CustomLogicInputBuiltin__GetKeyDown(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  uint32_t key_00;
  Settings_KeybindSetting_o *__this;
  System_Nullable_uint__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_18434641f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_18434641f = '\x01';
  }
  local_res8[0].hasValue = false;
  local_res8[0]._1_3_ = 0;
  local_res8[0].value = 0;
  local_res8[0] =
       (System_Nullable_uint__Fields)
       CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,(MethodInfo *)0x0);
  if (local_res8[0].hasValue == false) {
    __this = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,(MethodInfo *)0x0);
    if (__this == (Settings_KeybindSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = Settings_KeybindSetting__GetKeyDown(__this,true,(MethodInfo *)0x0);
  }
  else {
    key_00 = System_Nullable_uint___get_Value
                       ((System_Nullable_uint__o *)local_res8,
                        (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_KeyCode_get_Value);
    bVar1 = UnityEngine_Input__GetKeyDown(key_00,(MethodInfo *)0x0);
  }
  if (bVar1 == false) {
    return false;
  }
  bVar1 = CustomLogic_CustomLogicInputBuiltin__CanKey((MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyUp
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyUp (System_String_o* key, const MethodInfo* method);
// 0x182031300

bool CustomLogic_CustomLogicInputBuiltin__GetKeyUp(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  uint32_t key_00;
  Settings_KeybindSetting_o *__this;
  System_Nullable_uint__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184346420 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_184346420 = '\x01';
  }
  local_res8[0].hasValue = false;
  local_res8[0]._1_3_ = 0;
  local_res8[0].value = 0;
  local_res8[0] =
       (System_Nullable_uint__Fields)
       CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,(MethodInfo *)0x0);
  if (local_res8[0].hasValue == false) {
    __this = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,(MethodInfo *)0x0);
    if (__this == (Settings_KeybindSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = Settings_KeybindSetting__GetKeyUp(__this,true,(MethodInfo *)0x0);
  }
  else {
    key_00 = System_Nullable_uint___get_Value
                       ((System_Nullable_uint__o *)local_res8,
                        (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_KeyCode_get_Value);
    bVar1 = UnityEngine_Input__GetKeyUp(key_00,(MethodInfo *)0x0);
  }
  if (bVar1 == false) {
    return false;
  }
  bVar1 = CustomLogic_CustomLogicInputBuiltin__CanKey((MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMouseAim
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMouseAim (const MethodInfo* method);
// 0x182031500

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicInputBuiltin__GetMouseAim(MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  Cameras_BaseCamera_o *pCVar5;
  UnityEngine_Camera_o *__this;
  undefined8 uVar6;
  bool bVar7;
  int32_t layerMask;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Ray_o *pUVar9;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float fVar10;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Ray_o local_a8;
  UnityEngine_RaycastHit_o local_88;
  UnityEngine_Ray_o local_58 [3];
  
  if (Il2CppMethodInitialized_184346421 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346421 = '\x01';
  }
  local_88.fields.m_Normal.fields.y = 0.0;
  local_88.fields.m_Normal.fields.z = 0.0;
  local_88.fields.m_FaceID = 0;
  local_88.fields.m_Point.fields.x = 0.0;
  local_88.fields.m_Point.fields.y = 0.0;
  local_88.fields.m_Point.fields.z = 0.0;
  local_88.fields.m_Normal.fields.x = 0.0;
  local_88.fields.m_Distance = 0.0;
  local_88.fields.m_UV.fields.x = 0.0;
  local_88.fields.m_UV.fields.y = 0.0;
  local_88.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar5 != (Cameras_BaseCamera_o *)0x0) {
    __this = (pCVar5->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar8 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      local_b8.x = (pUVar8->fields).x;
      local_b8.y = (pUVar8->fields).y;
      local_b8.z = (pUVar8->fields).z;
      pUVar9 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                         (local_58,__this,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
      uVar1 = (pUVar9->fields).m_Origin.fields.x;
      uVar3 = (pUVar9->fields).m_Origin.fields.y;
      uVar6._0_4_ = (pUVar9->fields).m_Direction.fields.y;
      uVar6._4_4_ = (pUVar9->fields).m_Direction.fields.z;
      local_b8.z = (pUVar9->fields).m_Direction.fields.z * 1000.0 + (pUVar9->fields).m_Origin.fields.z;
      local_b8.y = (pUVar9->fields).m_Direction.fields.y * 1000.0 + (float)uVar3;
      local_b8.x = (pUVar9->fields).m_Direction.fields.x * 1000.0 + (float)uVar1;
      local_a8.fields.m_Origin.fields.x = (pUVar9->fields).m_Origin.fields.x;
      local_a8.fields.m_Origin.fields.y = (pUVar9->fields).m_Origin.fields.y;
      local_a8.fields._8_8_ = *(undefined8 *)&(pUVar9->fields).m_Origin.fields.z;
      if ((TypeInfo_Characters_Human->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Human);
      }
      layerMask = UnityEngine_Touch__get_fingerId
                            ((UnityEngine_Touch_o *)TypeInfo_Characters_Human->static_fields,(MethodInfo *)0x0
                            );
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      local_a8.fields.m_Direction.fields._4_8_ = uVar6;
      bVar7 = UnityEngine_Physics__Raycast_2fe5050(&local_a8,&local_88,1000.0,layerMask,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar8 = UnityEngine_RaycastHit__get_point
                           ((UnityEngine_Vector3_o *)&local_a8,&local_88,(MethodInfo *)0x0);
        fVar2 = (pUVar8->fields).x;
        fVar4 = (pUVar8->fields).y;
        fVar10 = (pUVar8->fields).z;
      }
      else {
        fVar2 = local_b8.x;
        fVar4 = local_b8.y;
        fVar10 = local_b8.z;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_b8.y = fVar4;
      local_b8.x = fVar2;
      local_b8.z = fVar10;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$GetCursorAimDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection (const MethodInfo* method);
// 0x182030ec0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection(MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Cameras_BaseCamera_o *pCVar3;
  UnityEngine_Camera_o *__this;
  undefined8 uVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Ray_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  UnityEngine_Ray_o local_30;
  
  if (Il2CppMethodInitialized_184346422 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346422 = '\x01';
  }
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
    __this = (pCVar3->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar5 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      local_58.x = (pUVar5->fields).x;
      local_58.y = (pUVar5->fields).y;
      local_58.z = (pUVar5->fields).z;
      pUVar6 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                         (&local_30,__this,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      local_48.x = (pUVar6->fields).m_Origin.fields.x;
      local_48.y = (pUVar6->fields).m_Origin.fields.y;
      uVar4 = *(undefined8 *)&(pUVar6->fields).m_Origin.fields.z;
      uVar1 = (pUVar6->fields).m_Direction.fields.y;
      uVar2 = (pUVar6->fields).m_Direction.fields.z;
      local_48.z = (float)uVar4;
      fStack_3c = (float)((ulonglong)uVar4 >> 0x20);
      uVar4._4_4_ = (float)uVar1;
      uVar4._0_4_ = fStack_3c;
      fStack_38 = (float)uVar1;
      fStack_34 = (float)uVar2;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_58.z = (float)uVar2;
      local_58._0_8_ = uVar4;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$GetMouseSpeed
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed (const MethodInfo* method);
// 0x182031870

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed(MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184346423 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_184346423 = '\x01';
  }
  fVar1 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar2 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_38[0].fields.z = 0.0;
  local_38[0].fields.x = fVar1;
  local_38[0].fields.y = fVar2;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0(__this,local_38,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMousePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMousePosition (const MethodInfo* method);
// 0x182031760

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMousePosition(MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  Cameras_BaseCamera_o *pCVar4;
  Cameras_BaseCamera_c *pCVar5;
  UnityEngine_Vector3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346424 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346424 = '\x01';
  }
  pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar4 != (Cameras_BaseCamera_o *)0x0) {
    pCVar5 = pCVar4->klass;
    bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if ((bVar2 <= (pCVar5->_2).typeHierarchyDepth) &&
       ((pCVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      pUVar6 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      goto label_182031820;
    }
  }
  pUVar6 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
label_182031820:
  fVar3 = (pUVar6->fields).z;
  uVar1._0_4_ = (pUVar6->fields).x;
  uVar1._4_4_ = (pUVar6->fields).y;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_28[0]._0_8_ = uVar1;
  local_28[0].z = fVar3;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$GetScreenDimensions
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions (const MethodInfo* method);
// 0x182031920

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184346425 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184346425 = '\x01';
  }
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_38[0].fields.z = 0.0;
  local_38[0].fields.x = (float)iVar1;
  local_38[0].fields.y = (float)iVar2;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0(__this,local_38,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$SetKeyDefaultEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled (System_String_o* key, bool enabled, const MethodInfo* method);
// 0x182031f60

void CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled
               (System_String_o *key,bool enabled,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  Settings_KeybindSetting_o *item;
  
  if (Il2CppMethodInitialized_184346426 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
    Il2CppMethodInitialized_184346426 = '\x01';
  }
  item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,(MethodInfo *)0x0);
  if (enabled) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)item,
                         (MethodInfo_1759E40 *)
                         MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1820320ec;
        System_Collections_Generic_HashSet_object___Remove
                  (pSVar1,(Il2CppObject *)item,
                   (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
      }
      return;
    }
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)item,
                         (MethodInfo_1759E40 *)
                         MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
      if (bVar2) {
        return;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)item,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
        return;
      }
    }
  }
label_1820320ec:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$SetKeyHold
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetKeyHold (System_String_o* key, bool enabled, const MethodInfo* method);
// 0x182032100

void CustomLogic_CustomLogicInputBuiltin__SetKeyHold(System_String_o *key,bool enabled,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  Settings_KeybindSetting_o *item;
  
  if (Il2CppMethodInitialized_184346427 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
    Il2CppMethodInitialized_184346427 = '\x01';
  }
  item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,(MethodInfo *)0x0);
  if (enabled) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)item,
                         (MethodInfo_1759E40 *)
                         MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
      if (bVar2) {
        return;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)item,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
        return;
      }
    }
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)item,
                         (MethodInfo_1759E40 *)
                         MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18203228c;
        System_Collections_Generic_HashSet_object___Remove
                  (pSVar1,(Il2CppObject *)item,
                   (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
      }
      return;
    }
  }
label_18203228c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$SetCategoryKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled (System_String_o* category, bool enabled, const MethodInfo* method);
// 0x1820319b0
// eh: try 0x182031b80..0x182031dcc -> pad 0x183317fd0 catch Il2CppExceptionWrapper
// eh: try 0x182031e0a..0x182031e20 -> pad 0x180026a30 cleanup
// eh: try 0x182031e58..0x182031e85 -> pad 0x183317fd0 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182031df6: lea rcx, [rsp + 0x38]
// asm:   0x182031dfb: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x182031e00: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182031e05: test rcx, rcx
// asm:   0x182031e08: jne 0x182031e85
// asm:   0x182031e0a: jmp 0x182031e47
// asm:   0x182031e85: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
               (System_String_o *category,bool enabled,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Settings_InputSettings_o *pSVar3;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  longlong *plVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  bool bVar9;
  Il2CppObject *pIVar10;
  void *pvVar11;
  VirtualInvokeData *pVVar12;
  System_String_o *message;
  ushort uVar13;
  Il2CppObject *local_res20;
  Il2CppObject *local_58 [2];
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_184346428 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SaveableSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid input category: ");
    il2cpp_codegen_initialize_runtime_metadata(&". Valid categories are: General, Human, Titan, Interaction");
    Il2CppMethodInitialized_184346428 = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_58[0] = (Il2CppObject *)0x0;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if ((pSVar3 != (Settings_InputSettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).Settings, pSVar4 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)
     ) {
    bVar9 = System_Collections_Specialized_OrderedDictionary__Contains
                      (pSVar4,(Il2CppObject *)category,(MethodInfo *)0x0);
    if (!bVar9) {
      message = System_String__Concat_1969b70
                          ("Invalid input category: ",category,". Valid categories are: General, Human, Titan, Interaction",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Settings,
        pSVar4 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
       (pIVar10 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar4,(Il2CppObject *)category,(MethodInfo *)0x0),
       pIVar10 != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_Settings_SaveableSettingsContainer->_2).typeHierarchyDepth;
      if (((pIVar10->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar10->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_SaveableSettingsContainer)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar10,TypeInfo_Settings_SaveableSettingsContainer);
      }
      plVar5 = pIVar10[1].monitor;
      if (plVar5 != (longlong *)0x0) {
        local_res20 = (Il2CppObject *)(**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        local_48 = 0;
        local_40 = &local_res20;
        local_38 = local_58;
        do {
          if (local_res20 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar11 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res20);
          pIVar10 = local_res20;
          if ((char)pvVar11 == '\0') {
            local_58[0] = il2cpp_vm_Object_IsInst(local_res20,(Il2CppClass *)TypeInfo_System_IDisposable);
            if (local_58[0] == (Il2CppObject *)0x0) {
              return;
            }
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_58[0]);
            return;
          }
          if (local_res20 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar6 = local_res20->klass;
          uVar2 = (pIVar6->_2).interface_offsets_count;
          if (uVar2 != 0) {
            uVar13 = 0;
            pIVar7 = (pIVar6->_1).interfaceOffsets;
            do {
              if (pIVar7[uVar13].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                pVVar12 = pIVar6->vtable + (pIVar7[uVar13].offset + 1);
                goto label_182031c09;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar2);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (local_res20,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_182031c09:
          pIVar10 = (*pVVar12->methodPtr)(pIVar10,pVVar12->method);
          if (pIVar10 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pIVar10->klass->_1).element_class !=
              (TypeInfo_System_Collections_DictionaryEntry->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar10,TypeInfo_System_Collections_DictionaryEntry);
          }
          pvVar11 = il2cpp_object_unbox(pIVar10);
          pIVar10 = *(Il2CppObject **)((longlong)pvVar11 + 8);
          if (pIVar10 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
            if ((bVar1 <= (pIVar10->klass->_2).typeHierarchyDepth) &&
               ((pIVar10->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
              if (enabled) {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                         TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
                if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar8,pIVar10,
                                   (MethodInfo_1759E40 *)
                                   MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
                if (bVar9) {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                           TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
                  if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_HashSet_object___Remove
                            (pSVar8,pIVar10,
                             (MethodInfo_1766930 *)
                             MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
                }
              }
              else {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                         TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
                if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar8,pIVar10,
                                   (MethodInfo_1759E40 *)
                                   MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
                if (!bVar9) {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                           TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
                  if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar8,pIVar10,
                             (MethodInfo_1757CE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
                }
              }
            }
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$SetGeneralKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled (bool enabled, const MethodInfo* method);
// 0x182031ea0

void CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled(bool enabled,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346429 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_184346429 = '\x01';
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("General",enabled,(MethodInfo *)0x0)
  ;
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetInteractionKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled (bool enabled, const MethodInfo* method);
// 0x182031f20

void CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled(bool enabled,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434642a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_18434642a = '\x01';
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Interaction",enabled,(MethodInfo *)0x0)
  ;
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetTitanKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled (bool enabled, const MethodInfo* method);
// 0x1820322a0

void CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(bool enabled,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434642b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_18434642b = '\x01';
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Titan",enabled,(MethodInfo *)0x0)
  ;
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetHumanKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled (bool enabled, const MethodInfo* method);
// 0x182031ee0

void CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(bool enabled,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434642c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_18434642c = '\x01';
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Human",enabled,(MethodInfo *)0x0)
  ;
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputBuiltin__get_ClassName (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x182032330

System_String_o *
CustomLogic_CustomLogicInputBuiltin__get_ClassName
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434642d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Input");
    Il2CppMethodInitialized_18434642d = '\x01';
  }
  return "Input";
}


// CustomLogic.CustomLogicInputBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_IsAbstract (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputBuiltin__get_IsAbstract(CustomLogic_CustomLogicInputBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_IsStatic (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputBuiltin__get_IsStatic(CustomLogic_CustomLogicInputBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicInputBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


