// Type: Settings.ToggleColorSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ToggleColorSetting.cs
// Prior real C# source: none
// --------------------------------

// Settings.ToggleColorSetting$$.ctor
// il2cpp: void Settings_ToggleColorSetting___ctor (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x41fd920

void Settings_ToggleColorSetting___ctor(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Utility_Color255_o *pUVar1;
  Settings_ColorSetting_o *__this_01;
  
  if (g_data_057ad8c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    g_data_057ad8c4 = '\x01';
  }
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).Enabled = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields,__this_00);
  pUVar1 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar1,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  __this_01 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  if (g_data_057ad89a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad89a = '\x01';
  }
  Settings_TypedSetting_object____ctor((Settings_TypedSetting_T__o *)__this_01,MethodInfo_TypedSetting_1_Utility_Color255);
  (__this_01->fields).MinAlpha = 0;
  pUVar1 = (Utility_Color255_o *)
           (*(__this_01->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this_01,pUVar1,(__this_01->klass->vtable)._10_SanitizeValue.method);
  (__this_01->fields).DefaultValue = pUVar1;
  il2cpp_runtime_helper_022b4080(&__this_01->fields,pUVar1);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)(__this_01->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).Color = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Color);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ToggleColorSetting$$.ctor
// il2cpp: void Settings_ToggleColorSetting___ctor (Settings_ToggleColorSetting_o* __this, bool defaultEnabled, Utility_Color255_o* defaultColor, const MethodInfo* method);
// 0x4203830

void Settings_ToggleColorSetting___ctor_4103830
               (Settings_ToggleColorSetting_o *__this,bool_conflict defaultEnabled,
               Utility_Color255_o *defaultColor,MethodInfo *method)

{
  Settings_ToggleColorSetting_Fields *pSVar1;
  Settings_ColorSetting_o **ppSVar2;
  Settings_BoolSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  Settings_ColorSetting_o *pSVar5;
  
  if (g_data_057ad8c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    g_data_057ad8c5 = '\x01';
  }
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar3,0,MethodInfo_TypedSetting_1_System_Boolean);
  pSVar1 = &__this->fields;
  (__this->fields).Enabled = pSVar3;
  il2cpp_runtime_helper_022b4080(pSVar1,pSVar3);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  if (g_data_057ad89a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad89a = '\x01';
  }
  Settings_TypedSetting_object____ctor((Settings_TypedSetting_T__o *)pSVar5,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar5->fields).MinAlpha = 0;
  pUVar4 = (Utility_Color255_o *)
           (*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar5,pUVar4,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = pUVar4;
  il2cpp_runtime_helper_022b4080(&pSVar5->fields,pUVar4);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar5->fields).DefaultValue,MethodInfo_Void_set_Value);
  ppSVar2 = &(__this->fields).Color;
  (__this->fields).Color = pSVar5;
  il2cpp_runtime_helper_022b4080(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0
            ((Settings_TypedSetting_bool__o *)pSVar3,defaultEnabled & 0xff,MethodInfo_TypedSetting_1_System_Boolean);
  pSVar1->Enabled = pSVar3;
  il2cpp_runtime_helper_022b4080(pSVar1,pSVar3);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  if (g_data_057ad89a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad89a = '\x01';
  }
  Settings_TypedSetting_object____ctor((Settings_TypedSetting_T__o *)pSVar5,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar5->fields).MinAlpha = 0;
  pUVar4 = (Utility_Color255_o *)
           (*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar5,defaultColor,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = pUVar4;
  il2cpp_runtime_helper_022b4080(&pSVar5->fields,pUVar4);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar5->fields).DefaultValue,MethodInfo_Void_set_Value);
  *ppSVar2 = pSVar5;
  il2cpp_runtime_helper_022b4080(ppSVar2,pSVar5);
  return;
}


// Settings.ToggleColorSetting$$SetDefault
// il2cpp: void Settings_ToggleColorSetting__SetDefault (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x4203ac0

void Settings_ToggleColorSetting__SetDefault(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  char cVar4;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONObject_o *__this_00;
  undefined8 uVar6;
  Settings_TypedSetting_Vector3__o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  undefined8 extraout_RDX;
  long lVar9;
  long *plVar10;
  Settings_TypedSetting_Vector3__o *__this_01;
  undefined4 uVar11;
  float in_XMM1_Da;
  UnityEngine_Vector3_o value;
  
  pSVar1 = (__this->fields).Enabled;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)();
    pSVar2 = (__this->fields).Color;
    if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
      vtableDispatch = (pSVar2->klass->vtable)._4_SetDefault.methodPtr;
      (*vtableDispatch)
                (pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Enabled");
    g_data_057ad8c6 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  pSVar7 = (Settings_TypedSetting_Vector3__o *)0x0;
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  plVar10 = *(long **)(lVar9 + 0x10);
  if (plVar10 != (long *)0x0) {
    pSVar7 = *(Settings_TypedSetting_Vector3__o **)(*plVar10 + 400);
    uVar6 = (**(code **)(*plVar10 + 0x188))();
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      pSVar7 = "Enabled";
      (*(__this_00->klass->vtable)._20_Add.methodPtr)
                (__this_00,"Enabled",uVar6,(__this_00->klass->vtable)._20_Add.method);
      plVar3 = *(long **)(lVar9 + 0x18);
      plVar10 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
        (*(__this_00->klass->vtable)._20_Add.methodPtr)
                  (__this_00,"Color",uVar6,(__this_00->klass->vtable)._20_Add.method);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Enabled");
    g_data_057ad8c7 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = pSVar7;
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_04203c58:
    (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    return;
  }
  if (pSVar7 != (Settings_TypedSetting_Vector3__o *)0x0) {
    cVar4 = (*(code *)pSVar7->klass[1]._1.declaringType)(pSVar7,pSVar7->klass[1]._1.parent);
    if (cVar4 == '\0') {
      pSVar7 = (Settings_TypedSetting_Vector3__o *)(*(code *)pSVar7->klass[2]._1.castClass)(pSVar7);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pSVar7;
      bVar5 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_04203c58;
      if (pSVar7 != (Settings_TypedSetting_Vector3__o *)0x0) {
        pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar7->klass->vtable)._7_SerializeToJsonString.methodPtr)
                           (pSVar7,"Enabled",(pSVar7->klass->vtable)._7_SerializeToJsonString.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          plVar3 = (long *)plVar10[2];
          __this_01 = pSVar7;
          uVar6 = (*(pSVar7->klass->vtable)._7_SerializeToJsonString.methodPtr)
                            (pSVar7,"Enabled",(pSVar7->klass->vtable)._7_SerializeToJsonString.method);
          if (plVar3 == (long *)0x0) goto label_04203e33;
          (**(code **)(*plVar3 + 0x198))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x1a0));
        }
        pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar7->klass->vtable)._7_SerializeToJsonString.methodPtr)
                           (pSVar7,"Color",(pSVar7->klass->vtable)._7_SerializeToJsonString.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        plVar10 = (long *)plVar10[3];
        uVar6 = (*(pSVar7->klass->vtable)._7_SerializeToJsonString.methodPtr)
                          (pSVar7,"Color",(pSVar7->klass->vtable)._7_SerializeToJsonString.method);
        __this_01 = pSVar7;
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          (**(code **)(lVar9 + 0x198))
                    (plVar10,uVar6,*(undefined8 *)(lVar9 + 0x1a0),lVar9,*(code **)(lVar9 + 0x198));
          return;
        }
      }
    }
    else {
      plVar3 = (long *)plVar10[3];
      __this_01 = (Settings_TypedSetting_Vector3__o *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x198))(plVar3,pSVar7,*(undefined8 *)(*plVar3 + 0x1a0));
        __this_01 = (Settings_TypedSetting_Vector3__o *)0x0;
        if ((Settings_TypedSetting_bool__o *)plVar10[2] != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)plVar10[2],1,MethodInfo_Void_set_Value);
          return;
        }
      }
    }
  }
label_04203e33:
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad8c9 = '\x01';
  }
  Settings_TypedSetting_Vector3____ctor(__this_01,MethodInfo_TypedSetting_1_UnityEngine_Vector3);
  value.fields._0_8_ =
       (*(__this_01->klass->vtable)._10_SanitizeValue.methodPtr)
                 (uVar11,__this_01,(__this_01->klass->vtable)._10_SanitizeValue.method);
  (__this_01->fields).DefaultValue.fields.x = (float)(int)value.fields._0_8_;
  (__this_01->fields).DefaultValue.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this_01->fields).DefaultValue.fields.z = in_XMM1_Da;
  value.fields.z = in_XMM1_Da;
  Settings_TypedSetting_Vector3___set_Value(__this_01,value,MethodInfo_Void_set_Value);
  return;
}


// Settings.ToggleColorSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ToggleColorSetting__SerializeToJsonObject (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x4203b00

SimpleJSONFixed_JSONNode_o *
Settings_ToggleColorSetting__SerializeToJsonObject(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_BoolSetting_c *pSVar2;
  void *pvVar3;
  Settings_BoolSetting_Fields SVar4;
  char cVar5;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONObject_o *__this_00;
  undefined8 uVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  MethodInfo *pMVar9;
  undefined4 extraout_var;
  SimpleJSONFixed_JSONNode_o *extraout_RAX_00;
  Settings_BoolSetting_o *pSVar10;
  MethodInfo *__this_01;
  undefined4 uVar11;
  float in_XMM1_Da;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ad8c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Enabled");
    g_data_057ad8c6 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  pMVar9 = (MethodInfo *)0x0;
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  pSVar10 = (__this->fields).Enabled;
  if (pSVar10 != (Settings_BoolSetting_o *)0x0) {
    pMVar9 = (pSVar10->klass->vtable)._5_SerializeToJsonObject.method;
    uVar7 = (*(pSVar10->klass->vtable)._5_SerializeToJsonObject.methodPtr)();
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      pMVar9 = "Enabled";
      (*(__this_00->klass->vtable)._20_Add.methodPtr)
                (__this_00,"Enabled",uVar7,(__this_00->klass->vtable)._20_Add.method);
      pSVar1 = (__this->fields).Color;
      pSVar10 = (Settings_BoolSetting_o *)0x0;
      if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
        uVar7 = (*(pSVar1->klass->vtable)._5_SerializeToJsonObject.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._5_SerializeToJsonObject.method);
        (*(__this_00->klass->vtable)._20_Add.methodPtr)
                  (__this_00,"Color",uVar7,(__this_00->klass->vtable)._20_Add.method);
        return (SimpleJSONFixed_JSONNode_o *)__this_00;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Enabled");
    g_data_057ad8c7 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = pMVar9;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_04203c58:
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar10->klass->vtable)._4_SetDefault.methodPtr)
                       (pSVar10,(pSVar10->klass->vtable)._4_SetDefault.method);
    return pSVar8;
  }
  if (pMVar9 != (MethodInfo *)0x0) {
    cVar5 = (**(code **)(pMVar9->methodPointer + 0x238))
                      (pMVar9,*(undefined8 *)(pMVar9->methodPointer + 0x240));
    if (cVar5 == '\0') {
      pMVar9 = (MethodInfo *)(**(code **)(pMVar9->methodPointer + 0x418))(pMVar9);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pMVar9;
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)pMVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') goto label_04203c58;
      if (pMVar9 != (MethodInfo *)0x0) {
        pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(pMVar9->methodPointer + 0x1a8))
                           (pMVar9,"Enabled",*(undefined8 *)(pMVar9->methodPointer + 0x1b0));
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          SVar4 = pSVar10->fields;
          __this_01 = pMVar9;
          uVar7 = (**(code **)(pMVar9->methodPointer + 0x1a8))
                            (pMVar9,"Enabled",*(undefined8 *)(pMVar9->methodPointer + 0x1b0));
          if (SVar4 == (Settings_BoolSetting_Fields)0x0) goto label_04203e33;
          (**(code **)(*(long *)SVar4 + 0x198))(SVar4,uVar7,*(undefined8 *)(*(long *)SVar4 + 0x1a0));
        }
        pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(pMVar9->methodPointer + 0x1a8))
                           (pMVar9,"Color",*(undefined8 *)(pMVar9->methodPointer + 0x1b0));
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return (SimpleJSONFixed_JSONNode_o *)CONCAT44(extraout_var,bVar6);
        }
        pSVar2 = pSVar10[1].klass;
        uVar7 = (**(code **)(pMVar9->methodPointer + 0x1a8))
                          (pMVar9,"Color",*(undefined8 *)(pMVar9->methodPointer + 0x1b0));
        __this_01 = pMVar9;
        if (pSVar2 != (Settings_BoolSetting_c *)0x0) {
          pvVar3 = (pSVar2->_1).image;
          pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)((long)pvVar3 + 0x198))
                             (pSVar2,uVar7,*(undefined8 *)((long)pvVar3 + 0x1a0),pvVar3,
                              *(code **)((long)pvVar3 + 0x198));
          return pSVar8;
        }
      }
    }
    else {
      pSVar2 = pSVar10[1].klass;
      __this_01 = (MethodInfo *)0x0;
      if (pSVar2 != (Settings_BoolSetting_c *)0x0) {
        pvVar3 = (pSVar2->_1).image;
        (**(code **)((long)pvVar3 + 0x198))(pSVar2,pMVar9,*(undefined8 *)((long)pvVar3 + 0x1a0));
        __this_01 = (MethodInfo *)0x0;
        if (pSVar10->fields != (Settings_BoolSetting_Fields)0x0) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar10->fields,1,MethodInfo_Void_set_Value);
          return extraout_RAX;
        }
      }
    }
  }
label_04203e33:
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad8c9 = '\x01';
  }
  Settings_TypedSetting_Vector3____ctor((Settings_TypedSetting_Vector3__o *)__this_01,MethodInfo_TypedSetting_1_UnityEngine_Vector3);
  value.fields._0_8_ =
       (InvokerMethod)
       (**(code **)(__this_01->methodPointer + 0x1d8))
                 (uVar11,__this_01,*(undefined8 *)(__this_01->methodPointer + 0x1e0));
  __this_01->invoker_method = value.fields._0_8_;
  *(float *)&__this_01->name = in_XMM1_Da;
  value.fields.z = in_XMM1_Da;
  Settings_TypedSetting_Vector3___set_Value((Settings_TypedSetting_Vector3__o *)__this_01,value,MethodInfo_Void_set_Value);
  return extraout_RAX_00;
}


// Settings.ToggleColorSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_ToggleColorSetting__DeserializeFromJsonObject (Settings_ToggleColorSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x4203be0

void Settings_ToggleColorSetting__DeserializeFromJsonObject
               (Settings_ToggleColorSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_ColorSetting_c *pSVar3;
  Il2CppMethodPointer vtableDispatch;
  char cVar4;
  bool_conflict bVar5;
  Settings_TypedSetting_Vector3__o *a;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  undefined8 uVar7;
  Settings_TypedSetting_Vector3__o *__this_00;
  undefined4 uVar8;
  float in_XMM1_Da;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ad8c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Enabled");
    g_data_057ad8c7 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (Settings_TypedSetting_Vector3__o *)json;
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(json,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_04203c58:
    (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
    return;
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar4 = (*(json->klass->vtable)._16_get_IsArray.methodPtr)
                      (json,(json->klass->vtable)._16_get_IsArray.method);
    if (cVar4 == '\0') {
      a = (Settings_TypedSetting_Vector3__o *)(*(json->klass->vtable)._46_get_AsObject.methodPtr)(json);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = a;
      bVar5 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_04203c58;
      if (a != (Settings_TypedSetting_Vector3__o *)0x0) {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                           (a,"Enabled",
                            (((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar2 = (__this->fields).Enabled;
          __this_00 = a;
          uVar7 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                            (a,"Enabled",
                             (((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
          if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto label_04203e33;
          (*(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                    (pSVar2,uVar7,(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.method);
        }
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                           (a,"Color",
                            (((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        pSVar1 = (__this->fields).Color;
        uVar7 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                          (a,"Color",
                           (((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
        __this_00 = a;
        if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
          pSVar3 = pSVar1->klass;
          vtableDispatch = (pSVar3->vtable)._6_DeserializeFromJsonObject.methodPtr;
          (*vtableDispatch)
                    (pSVar1,uVar7,(pSVar3->vtable)._6_DeserializeFromJsonObject.method,pSVar3,
                     vtableDispatch);
          return;
        }
      }
    }
    else {
      pSVar1 = (__this->fields).Color;
      __this_00 = (Settings_TypedSetting_Vector3__o *)0x0;
      if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
        (*(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                  (pSVar1,json,(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.method);
        pSVar2 = (__this->fields).Enabled;
        __this_00 = (Settings_TypedSetting_Vector3__o *)0x0;
        if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
          Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)pSVar2,1,MethodInfo_Void_set_Value);
          return;
        }
      }
    }
  }
label_04203e33:
  uVar8 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad8c9 = '\x01';
  }
  Settings_TypedSetting_Vector3____ctor(__this_00,MethodInfo_TypedSetting_1_UnityEngine_Vector3);
  value.fields._0_8_ =
       (*(__this_00->klass->vtable)._10_SanitizeValue.methodPtr)
                 (uVar8,__this_00,(__this_00->klass->vtable)._10_SanitizeValue.method);
  (__this_00->fields).DefaultValue.fields.x = (float)(int)value.fields._0_8_;
  (__this_00->fields).DefaultValue.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this_00->fields).DefaultValue.fields.z = in_XMM1_Da;
  value.fields.z = in_XMM1_Da;
  Settings_TypedSetting_Vector3___set_Value(__this_00,value,MethodInfo_Void_set_Value);
  return;
}


