// Type: Settings.ColorSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ColorSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ColorSetting.cs
// --------------------------------

// Settings.ColorSetting$$.ctor
// il2cpp: void Settings_ColorSetting___ctor (Settings_ColorSetting_o* __this, const MethodInfo* method);
// 0x41fd8a0

void Settings_ColorSetting___ctor(Settings_ColorSetting_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (g_data_057ad899 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
    g_data_057ad899 = '\x01';
  }
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,MethodInfo_TypedSetting_1_Utility_Color255);
  return;
}


// Settings.ColorSetting$$.ctor
// il2cpp: void Settings_ColorSetting___ctor (Settings_ColorSetting_o* __this, Utility_Color255_o* defaultValue, int32_t minAlpha, const MethodInfo* method);
// 0x41fa620

void Settings_ColorSetting___ctor_40fa620
               (Settings_ColorSetting_o *__this,Utility_Color255_o *defaultValue,int32_t minAlpha,
               MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  if (g_data_057ad89a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad89a = '\x01';
  }
  Settings_TypedSetting_object____ctor((Settings_TypedSetting_T__o *)__this,MethodInfo_TypedSetting_1_Utility_Color255);
  (__this->fields).MinAlpha = minAlpha;
  pUVar1 = (Utility_Color255_o *)
           (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this,defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = pUVar1;
  il2cpp_runtime_helper_022b4080(&__this->fields,pUVar1);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)(__this->fields).DefaultValue,MethodInfo_Void_set_Value);
  return;
}


// Settings.ColorSetting$$SanitizeValue
// il2cpp: Utility_Color255_o* Settings_ColorSetting__SanitizeValue (Settings_ColorSetting_o* __this, Utility_Color255_o* value, const MethodInfo* method);
// 0x41ff640

Utility_Color255_o *
Settings_ColorSetting__SanitizeValue
          (Settings_ColorSetting_o *__this,Utility_Color255_o *value,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  MethodInfo *pMVar1;
  MethodInfo *pMVar2;
  MethodInfo *__this_00;
  SimpleJSONFixed_JSONNumber_o *__this_01;
  long *plVar3;
  Utility_Color255_o *pUVar4;
  Utility_Color255_o *extraout_RAX;
  Utility_Color255_o *extraout_RAX_00;
  int iVar5;
  int iVar6;
  int iVar7;
  MethodInfo *__this_02;
  MethodInfo_2A24090 **__this_03;
  MethodInfo_2A241B0 **ppMVar8;
  float fVar9;
  
  if (value != (Utility_Color255_o *)0x0) {
    iVar5 = (value->fields).R;
    iVar6 = (value->fields).G;
    if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    (value->fields).R = iVar5;
    if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    (value->fields).G = iVar6;
    iVar5 = (value->fields).B;
    if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    (value->fields).B = iVar5;
    iVar5 = (value->fields).A;
    iVar6 = (__this->fields).MinAlpha;
    iVar7 = 0xff;
    if (iVar5 < 0x100) {
      iVar7 = iVar5;
    }
    if (iVar5 < iVar6) {
      iVar7 = iVar6;
    }
    (value->fields).A = iVar7;
    return value;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad89b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ad89b = '\x01';
  }
  pMVar1 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  __this_00 = (MethodInfo *)0x0;
  __this_02 = pMVar1;
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)pMVar1,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    iVar5 = (pUVar4->fields).R;
    pMVar2 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    __this_00 = (MethodInfo *)0x0;
    __this_02 = pMVar2;
    SimpleJSONFixed_JSONNumber___ctor((SimpleJSONFixed_JSONNumber_o *)pMVar2,(double)iVar5,(MethodInfo *)0x0);
    if (pMVar1 != (MethodInfo *)0x0) {
      __this_02 = pMVar1;
      (**(code **)(pMVar1->methodPointer + 0x288))
                (pMVar1,pMVar2,*(undefined8 *)(pMVar1->methodPointer + 0x290));
      pUVar4 = (__this->fields)._value;
      __this_00 = pMVar2;
      if (pUVar4 != (Utility_Color255_o *)0x0) {
        iVar5 = (pUVar4->fields).G;
        __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
        SimpleJSONFixed_JSONNumber___ctor
                  ((SimpleJSONFixed_JSONNumber_o *)__this_00,(double)iVar5,(MethodInfo *)0x0);
        __this_02 = pMVar1;
        (**(code **)(pMVar1->methodPointer + 0x288))
                  (pMVar1,__this_00,*(undefined8 *)(pMVar1->methodPointer + 0x290));
        pUVar4 = (__this->fields)._value;
        if (pUVar4 != (Utility_Color255_o *)0x0) {
          iVar5 = (pUVar4->fields).B;
          __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
          SimpleJSONFixed_JSONNumber___ctor
                    ((SimpleJSONFixed_JSONNumber_o *)__this_00,(double)iVar5,(MethodInfo *)0x0);
          __this_02 = pMVar1;
          (**(code **)(pMVar1->methodPointer + 0x288))
                    (pMVar1,__this_00,*(undefined8 *)(pMVar1->methodPointer + 0x290));
          pUVar4 = (__this->fields)._value;
          if (pUVar4 != (Utility_Color255_o *)0x0) {
            iVar5 = (pUVar4->fields).A;
            __this_01 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
            SimpleJSONFixed_JSONNumber___ctor(__this_01,(double)iVar5,(MethodInfo *)0x0);
            (**(code **)(pMVar1->methodPointer + 0x288))
                      (pMVar1,__this_01,*(undefined8 *)(pMVar1->methodPointer + 0x290));
            return (Utility_Color255_o *)pMVar1;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = __this_00;
  __this_03 = (MethodInfo_2A24090 **)__this_02;
  if (g_data_057ad89c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    __this_03 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad89c = '\x01';
  }
  if (__this_00 != (MethodInfo *)0x0) {
    pMVar1 = (((SimpleJSONFixed_JSONArray_c *)__this_00->methodPointer)->vtable)._45_get_AsArray.method;
    pMVar2 = (MethodInfo *)
             (*(((SimpleJSONFixed_JSONArray_c *)__this_00->methodPointer)->vtable)._45_get_AsArray.methodPtr)
                       ();
    __this_03 = (MethodInfo_2A24090 **)__this_00;
    if (pMVar2 != (MethodInfo *)0x0) {
      pMVar1 = (MethodInfo *)0x0;
      __this_03 = (MethodInfo_2A24090 **)pMVar2;
      plVar3 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->vtable)._5_get_Item.
                         methodPtr)(pMVar2,0,(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->vtable).
                                             _5_get_Item.method);
      if (plVar3 != (long *)0x0) {
        r = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
        pMVar1 = (MethodInfo *)0x1;
        __this_03 = (MethodInfo_2A24090 **)pMVar2;
        plVar3 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->vtable)._5_get_Item.
                           methodPtr)(pMVar2,1,(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->vtable
                                               )._5_get_Item.method);
        if (plVar3 != (long *)0x0) {
          g = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
          pMVar1 = (MethodInfo *)0x2;
          __this_03 = (MethodInfo_2A24090 **)pMVar2;
          plVar3 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->vtable)._5_get_Item.
                             methodPtr)(pMVar2,2,(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->
                                                 vtable)._5_get_Item.method);
          if (plVar3 != (long *)0x0) {
            b = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
            pMVar1 = (MethodInfo *)0x3;
            plVar3 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->vtable)._5_get_Item.
                               methodPtr)(pMVar2,3,(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->
                                                   vtable)._5_get_Item.method);
            __this_03 = (MethodInfo_2A24090 **)pMVar2;
            if (plVar3 != (long *)0x0) {
              a = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
              pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              Utility_Color255___ctor(pUVar4,r,g,b,a,(MethodInfo *)0x0);
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)pUVar4,MethodInfo_Void_set_Value);
              return extraout_RAX;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar8 = (MethodInfo_2A241B0 **)__this_03;
  if (g_data_057ad89f == '\0') {
    ppMVar8 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad89f = '\x01';
  }
  if (pMVar1 != (MethodInfo *)0x0) {
    fVar9 = (float)(*(((SimpleJSONFixed_JSONArray_c *)pMVar1->methodPointer)->vtable)._37_get_AsFloat.
                     methodPtr)(pMVar1,(((SimpleJSONFixed_JSONArray_c *)pMVar1->methodPointer)->vtable).
                                       _37_get_AsFloat.method);
    Settings_TypedSetting_float___set_Value((Settings_TypedSetting_float__o *)__this_03,fVar9,MethodInfo_Void_set_Value);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ad8a0 = '\x01';
  }
  fVar9 = *(float *)((long)&((SimpleJSONFixed_JSONArray_Fields *)&((MethodInfo *)ppMVar8)->invoker_method)->
                            m_List + 4);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor((SimpleJSONFixed_JSONNumber_o *)pUVar4,(double)fVar9,(MethodInfo *)0x0);
  return pUVar4;
}


// Settings.ColorSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ColorSetting__SerializeToJsonObject (Settings_ColorSetting_o* __this, const MethodInfo* method);
// 0x41ff6b0

SimpleJSONFixed_JSONNode_o *
Settings_ColorSetting__SerializeToJsonObject(Settings_ColorSetting_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  MethodInfo *pMVar2;
  MethodInfo *pMVar3;
  MethodInfo *__this_00;
  SimpleJSONFixed_JSONNumber_o *pSVar4;
  long *plVar5;
  Utility_Color255_o *pUVar6;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  SimpleJSONFixed_JSONNode_o *extraout_RAX_00;
  MethodInfo *__this_01;
  MethodInfo_2A24090 **__this_02;
  MethodInfo_2A241B0 **ppMVar7;
  float fVar8;
  
  if (g_data_057ad89b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ad89b = '\x01';
  }
  pMVar2 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  __this_00 = (MethodInfo *)0x0;
  __this_01 = pMVar2;
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)pMVar2,(MethodInfo *)0x0);
  pUVar6 = (__this->fields)._value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    iVar1 = (pUVar6->fields).R;
    pMVar3 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    __this_00 = (MethodInfo *)0x0;
    __this_01 = pMVar3;
    SimpleJSONFixed_JSONNumber___ctor((SimpleJSONFixed_JSONNumber_o *)pMVar3,(double)iVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MethodInfo *)0x0) {
      __this_01 = pMVar2;
      (**(code **)(pMVar2->methodPointer + 0x288))
                (pMVar2,pMVar3,*(undefined8 *)(pMVar2->methodPointer + 0x290));
      pUVar6 = (__this->fields)._value;
      __this_00 = pMVar3;
      if (pUVar6 != (Utility_Color255_o *)0x0) {
        iVar1 = (pUVar6->fields).G;
        __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
        SimpleJSONFixed_JSONNumber___ctor
                  ((SimpleJSONFixed_JSONNumber_o *)__this_00,(double)iVar1,(MethodInfo *)0x0);
        __this_01 = pMVar2;
        (**(code **)(pMVar2->methodPointer + 0x288))
                  (pMVar2,__this_00,*(undefined8 *)(pMVar2->methodPointer + 0x290));
        pUVar6 = (__this->fields)._value;
        if (pUVar6 != (Utility_Color255_o *)0x0) {
          iVar1 = (pUVar6->fields).B;
          __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
          SimpleJSONFixed_JSONNumber___ctor
                    ((SimpleJSONFixed_JSONNumber_o *)__this_00,(double)iVar1,(MethodInfo *)0x0);
          __this_01 = pMVar2;
          (**(code **)(pMVar2->methodPointer + 0x288))
                    (pMVar2,__this_00,*(undefined8 *)(pMVar2->methodPointer + 0x290));
          pUVar6 = (__this->fields)._value;
          if (pUVar6 != (Utility_Color255_o *)0x0) {
            iVar1 = (pUVar6->fields).A;
            pSVar4 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
            SimpleJSONFixed_JSONNumber___ctor(pSVar4,(double)iVar1,(MethodInfo *)0x0);
            (**(code **)(pMVar2->methodPointer + 0x288))
                      (pMVar2,pSVar4,*(undefined8 *)(pMVar2->methodPointer + 0x290));
            return (SimpleJSONFixed_JSONNode_o *)pMVar2;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = __this_00;
  __this_02 = (MethodInfo_2A24090 **)__this_01;
  if (g_data_057ad89c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    __this_02 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad89c = '\x01';
  }
  if (__this_00 != (MethodInfo *)0x0) {
    pMVar2 = (((SimpleJSONFixed_JSONArray_c *)__this_00->methodPointer)->vtable)._45_get_AsArray.method;
    pMVar3 = (MethodInfo *)
             (*(((SimpleJSONFixed_JSONArray_c *)__this_00->methodPointer)->vtable)._45_get_AsArray.methodPtr)
                       ();
    __this_02 = (MethodInfo_2A24090 **)__this_00;
    if (pMVar3 != (MethodInfo *)0x0) {
      pMVar2 = (MethodInfo *)0x0;
      __this_02 = (MethodInfo_2A24090 **)pMVar3;
      plVar5 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar3->methodPointer)->vtable)._5_get_Item.
                         methodPtr)(pMVar3,0,(((SimpleJSONFixed_JSONArray_c *)pMVar3->methodPointer)->vtable).
                                             _5_get_Item.method);
      if (plVar5 != (long *)0x0) {
        r = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
        pMVar2 = (MethodInfo *)0x1;
        __this_02 = (MethodInfo_2A24090 **)pMVar3;
        plVar5 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar3->methodPointer)->vtable)._5_get_Item.
                           methodPtr)(pMVar3,1,(((SimpleJSONFixed_JSONArray_c *)pMVar3->methodPointer)->vtable
                                               )._5_get_Item.method);
        if (plVar5 != (long *)0x0) {
          g = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
          pMVar2 = (MethodInfo *)0x2;
          __this_02 = (MethodInfo_2A24090 **)pMVar3;
          plVar5 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar3->methodPointer)->vtable)._5_get_Item.
                             methodPtr)(pMVar3,2,(((SimpleJSONFixed_JSONArray_c *)pMVar3->methodPointer)->
                                                 vtable)._5_get_Item.method);
          if (plVar5 != (long *)0x0) {
            b = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
            pMVar2 = (MethodInfo *)0x3;
            plVar5 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar3->methodPointer)->vtable)._5_get_Item.
                               methodPtr)(pMVar3,3,(((SimpleJSONFixed_JSONArray_c *)pMVar3->methodPointer)->
                                                   vtable)._5_get_Item.method);
            __this_02 = (MethodInfo_2A24090 **)pMVar3;
            if (plVar5 != (long *)0x0) {
              a = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
              pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              Utility_Color255___ctor(pUVar6,r,g,b,a,(MethodInfo *)0x0);
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)pUVar6,MethodInfo_Void_set_Value);
              return extraout_RAX;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar7 = (MethodInfo_2A241B0 **)__this_02;
  if (g_data_057ad89f == '\0') {
    ppMVar7 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad89f = '\x01';
  }
  if (pMVar2 != (MethodInfo *)0x0) {
    fVar8 = (float)(*(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->vtable)._37_get_AsFloat.
                     methodPtr)(pMVar2,(((SimpleJSONFixed_JSONArray_c *)pMVar2->methodPointer)->vtable).
                                       _37_get_AsFloat.method);
    Settings_TypedSetting_float___set_Value((Settings_TypedSetting_float__o *)__this_02,fVar8,MethodInfo_Void_set_Value);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ad8a0 = '\x01';
  }
  fVar8 = *(float *)((long)&((SimpleJSONFixed_JSONArray_Fields *)&((MethodInfo *)ppMVar7)->invoker_method)->
                            m_List + 4);
  pSVar4 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(pSVar4,(double)fVar8,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)pSVar4;
}


// Settings.ColorSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_ColorSetting__DeserializeFromJsonObject (Settings_ColorSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x41ff860

void Settings_ColorSetting__DeserializeFromJsonObject
               (Settings_ColorSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Settings_ColorSetting_o *pSVar1;
  long *plVar2;
  Utility_Color255_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  MethodInfo_2A24090 **__this_02;
  MethodInfo_2A241B0 **ppMVar4;
  float fVar5;
  
  pMVar3 = (MethodInfo *)json;
  __this_02 = (MethodInfo_2A24090 **)__this;
  if (g_data_057ad89c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    __this_02 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad89c = '\x01';
    method = extraout_RDX;
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar3 = (json->klass->vtable)._45_get_AsArray.method;
    pSVar1 = (Settings_ColorSetting_o *)(*(json->klass->vtable)._45_get_AsArray.methodPtr)(json,pMVar3,method)
    ;
    __this_02 = (MethodInfo_2A24090 **)json;
    if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
      pMVar3 = (MethodInfo *)0x0;
      __this_02 = (MethodInfo_2A24090 **)pSVar1;
      plVar2 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar1->klass)->vtable)._5_get_Item.methodPtr)
                                 (pSVar1,0,(((SimpleJSONFixed_JSONNode_c *)pSVar1->klass)->vtable)._5_get_Item
                                           .method);
      if (plVar2 != (long *)0x0) {
        r = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
        pMVar3 = (MethodInfo *)0x1;
        __this_02 = (MethodInfo_2A24090 **)pSVar1;
        plVar2 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar1->klass)->vtable)._5_get_Item.methodPtr)
                                   (pSVar1,1,(((SimpleJSONFixed_JSONNode_c *)pSVar1->klass)->vtable).
                                             _5_get_Item.method);
        if (plVar2 != (long *)0x0) {
          g = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
          pMVar3 = (MethodInfo *)0x2;
          __this_02 = (MethodInfo_2A24090 **)pSVar1;
          plVar2 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar1->klass)->vtable)._5_get_Item.methodPtr)
                                     (pSVar1,2,(((SimpleJSONFixed_JSONNode_c *)pSVar1->klass)->vtable).
                                               _5_get_Item.method);
          if (plVar2 != (long *)0x0) {
            b = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
            pMVar3 = (MethodInfo *)0x3;
            plVar2 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar1->klass)->vtable)._5_get_Item.methodPtr)
                                       (pSVar1,3,(((SimpleJSONFixed_JSONNode_c *)pSVar1->klass)->vtable).
                                                 _5_get_Item.method);
            __this_02 = (MethodInfo_2A24090 **)pSVar1;
            if (plVar2 != (long *)0x0) {
              a = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
              __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,MethodInfo_Void_set_Value);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar4 = (MethodInfo_2A241B0 **)__this_02;
  if (g_data_057ad89f == '\0') {
    ppMVar4 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad89f = '\x01';
  }
  if (pMVar3 != (MethodInfo *)0x0) {
    fVar5 = (float)(*(((SimpleJSONFixed_JSONNode_c *)pMVar3->methodPointer)->vtable)._37_get_AsFloat.methodPtr
                   )(pMVar3,(((SimpleJSONFixed_JSONNode_c *)pMVar3->methodPointer)->vtable)._37_get_AsFloat.
                            method);
    Settings_TypedSetting_float___set_Value((Settings_TypedSetting_float__o *)__this_02,fVar5,MethodInfo_Void_set_Value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ad8a0 = '\x01';
  }
  fVar5 = *(float *)((long)&(((Settings_ColorSetting_o *)ppMVar4)->fields).DefaultValue + 4);
  __this_01 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_01,(double)fVar5,(MethodInfo *)0x0);
  return;
}


