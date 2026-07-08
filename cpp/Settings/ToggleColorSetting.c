// Type: Settings.ToggleColorSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/ToggleColorSetting.cs
// Prior source: NEW in this update
// --------------------------------

// Settings.ToggleColorSetting$$.ctor
// il2cpp: void Settings_ToggleColorSetting___ctor (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x3f114a0

void Settings_ToggleColorSetting___ctor(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Utility_Color255_o *pUVar1;
  Settings_ColorSetting_o *__this_01;
  
  if (DAT_05703c9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    DAT_05703c9c = '\x01';
  }
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  if (DAT_05703c6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Boolean);
    DAT_05703c6e = '\x01';
  }
  Settings_TypedSetting<bool>___ctor((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).Enabled = __this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  pUVar1 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar1,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  __this_01 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)__this_01,MethodInfo_TypedSetting_1_Utility_Color255);
  (__this_01->fields).MinAlpha = 0;
  pUVar1 = (Utility_Color255_o *)
           (*(__this_01->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this_01,pUVar1,(__this_01->klass->vtable)._10_SanitizeValue.method);
  (__this_01->fields).DefaultValue = pUVar1;
  il2cpp_runtime_glue(&__this_01->fields,pUVar1);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)__this_01,
             (Il2CppObject *)(__this_01->fields).DefaultValue,MethodInfo_Void_set_Value);
  (__this->fields).Color = __this_01;
  il2cpp_runtime_glue(&(__this->fields).Color);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ToggleColorSetting$$.ctor
// il2cpp: void Settings_ToggleColorSetting___ctor (Settings_ToggleColorSetting_o* __this, bool defaultEnabled, Utility_Color255_o* defaultColor, const MethodInfo* method);
// 0x3f11620

void Settings_ToggleColorSetting___ctor
               (Settings_ToggleColorSetting_o *__this,bool_conflict defaultEnabled,
               Utility_Color255_o *defaultColor,MethodInfo *method)

{
  Settings_ToggleColorSetting_Fields *pSVar1;
  Settings_ColorSetting_o **ppSVar2;
  Settings_BoolSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  Settings_ColorSetting_o *pSVar5;
  
  if (DAT_05703c9d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    DAT_05703c9d = '\x01';
  }
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  if (DAT_05703c6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Boolean);
    DAT_05703c6e = '\x01';
  }
  Settings_TypedSetting<bool>___ctor((Settings_TypedSetting_bool__o *)pSVar3,0,MethodInfo_TypedSetting_1_System_Boolean);
  pSVar1 = &__this->fields;
  (__this->fields).Enabled = pSVar3;
  il2cpp_runtime_glue(pSVar1,pSVar3);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar5,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar5->fields).MinAlpha = 0;
  pUVar4 = (Utility_Color255_o *)
           (*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar5,pUVar4,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = pUVar4;
  il2cpp_runtime_glue(&pSVar5->fields,pUVar4);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar5->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  ppSVar2 = &(__this->fields).Color;
  (__this->fields).Color = pSVar5;
  il2cpp_runtime_glue(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  if (DAT_05703c6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Boolean);
    DAT_05703c6e = '\x01';
  }
  Settings_TypedSetting<bool>___ctor
            ((Settings_TypedSetting_bool__o *)pSVar3,defaultEnabled & 0xff,MethodInfo_TypedSetting_1_System_Boolean);
  pSVar1->Enabled = pSVar3;
  il2cpp_runtime_glue(pSVar1,pSVar3);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar5,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar5->fields).MinAlpha = 0;
  pUVar4 = (Utility_Color255_o *)
           (*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar5,defaultColor,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = pUVar4;
  il2cpp_runtime_glue(&pSVar5->fields,pUVar4);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar5->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  *ppSVar2 = pSVar5;
  il2cpp_runtime_glue(ppSVar2,pSVar5);
  return;
}


// Settings.ToggleColorSetting$$SetDefault
// il2cpp: void Settings_ToggleColorSetting__SetDefault (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x3f118b0

void Settings_ToggleColorSetting__SetDefault
               (Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  pSVar1 = (__this->fields).Enabled;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)
              (pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar2 = (__this->fields).Color;
    if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
      vtable_dispatch = (pSVar2->klass->vtable)._4_SetDefault.methodPtr;
      (*vtable_dispatch)
                (pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ToggleColorSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ToggleColorSetting__SerializeToJsonObject (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x3f118f0

SimpleJSONFixed_JSONNode_o *
Settings_ToggleColorSetting__SerializeToJsonObject
          (Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  SimpleJSONFixed_JSONObject_o *__this_00;
  undefined8 uVar3;
  
  if (DAT_05703c9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"Enabled");
    DAT_05703c9e = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).Enabled;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    uVar3 = (*(pSVar1->klass->vtable)._5_SerializeToJsonObject.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._5_SerializeToJsonObject.method);
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_00->klass->vtable)._20_Add.methodPtr)
                (__this_00,"Enabled",uVar3,(__this_00->klass->vtable)._20_Add.method);
      pSVar2 = (__this->fields).Color;
      if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
        uVar3 = (*(pSVar2->klass->vtable)._5_SerializeToJsonObject.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._5_SerializeToJsonObject.method);
        (*(__this_00->klass->vtable)._20_Add.methodPtr)
                  (__this_00,"Color",uVar3,(__this_00->klass->vtable)._20_Add.method);
        return (SimpleJSONFixed_JSONNode_o *)__this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ToggleColorSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_ToggleColorSetting__DeserializeFromJsonObject (Settings_ToggleColorSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f119d0

void Settings_ToggleColorSetting__DeserializeFromJsonObject
               (Settings_ToggleColorSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_ColorSetting_c *pSVar3;
  Il2CppMethodPointer vtable_dispatch;
  char cVar4;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  undefined8 uVar7;
  
  if (DAT_05703c9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"Enabled");
    DAT_05703c9f = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(json,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
LAB_03f11a48:
    (*(__this->klass->vtable)._4_SetDefault.methodPtr)
              (__this,(__this->klass->vtable)._4_SetDefault.method);
    return;
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar4 = (*(json->klass->vtable)._16_get_IsArray.methodPtr)
                      (json,(json->klass->vtable)._16_get_IsArray.method);
    if (cVar4 == '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)(*(json->klass->vtable)._46_get_AsObject.methodPtr)(json);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto LAB_03f11a48;
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(a->klass->vtable)._7_get_Item.methodPtr)
                           (a,"Enabled",(a->klass->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                          (pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar2 = (__this->fields).Enabled;
          uVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                            (a,"Enabled",(a->klass->vtable)._7_get_Item.method);
          if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto LAB_03f11c23;
          (*(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                    (pSVar2,uVar7,(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.method);
        }
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(a->klass->vtable)._7_get_Item.methodPtr)
                           (a,"Color",(a->klass->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                          (pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        pSVar1 = (__this->fields).Color;
        uVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                          (a,"Color",(a->klass->vtable)._7_get_Item.method);
        if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
          pSVar3 = pSVar1->klass;
          vtable_dispatch = (pSVar3->vtable)._6_DeserializeFromJsonObject.methodPtr;
          (*vtable_dispatch)
                    (pSVar1,uVar7,(pSVar3->vtable)._6_DeserializeFromJsonObject.method,pSVar3,
                     vtable_dispatch);
          return;
        }
      }
    }
    else {
      pSVar1 = (__this->fields).Color;
      if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
        (*(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                  (pSVar1,json,(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.method);
        pSVar2 = (__this->fields).Enabled;
        if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
          Settings_TypedSetting<bool>__set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar2,1,MethodInfo_Void_set_Value);
          return;
        }
      }
    }
  }
LAB_03f11c23:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


