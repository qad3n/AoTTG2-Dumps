// Type: Settings.TypedSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/TypedSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/TypedSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.TypedSetting<bool>$$get_Value
// il2cpp: bool Settings_TypedSetting_bool___get_Value (Settings_TypedSetting_bool__o* __this, const MethodInfo_29B4090* method);
// 0x2ab4090

bool_conflict
Settings_TypedSetting<bool>__get_Value
          (Settings_TypedSetting_bool__o *__this,MethodInfo_29B4090 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields).DefaultValue + 1));
}


// Settings.TypedSetting<int>$$get_Value
// il2cpp: int32_t Settings_TypedSetting_int___get_Value (Settings_TypedSetting_int__o* __this, const MethodInfo_29B41A0* method);
// 0x2ab41a0

int32_t Settings_TypedSetting<int>__get_Value
                  (Settings_TypedSetting_int__o *__this,MethodInfo_29B41A0 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<object>$$get_Value
// il2cpp: Il2CppObject* Settings_TypedSetting_object___get_Value (Settings_TypedSetting_T__o* __this, const MethodInfo_29B4290* method);
// 0x2ab4290

Il2CppObject *
Settings_TypedSetting<object>__get_Value
          (Settings_TypedSetting_T__o *__this,MethodInfo_29B4290 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<float>$$get_Value
// il2cpp: float Settings_TypedSetting_float___get_Value (Settings_TypedSetting_float__o* __this, const MethodInfo_29B43B0* method);
// 0x2ab43b0

float Settings_TypedSetting<float>__get_Value
                (Settings_TypedSetting_float__o *__this,MethodInfo_29B43B0 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<Vector3>$$get_Value
// il2cpp: UnityEngine_Vector3_o Settings_TypedSetting_Vector3___get_Value (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_29B44B0* method);
// 0x2ab44b0

UnityEngine_Vector3_o
Settings_TypedSetting<Vector3>__get_Value
          (Settings_TypedSetting_Vector3__o *__this,MethodInfo_29B44B0 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._value.fields;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Settings_TypedSetting___Il2CppFullySharedGenericType___get_Value (Settings_TypedSetting_T__o* __this, const MethodInfo_29B45D0* method);
// 0x2ab45d0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Settings_TypedSetting<__Il2CppFullySharedGenericType>__get_Value
          (Settings_TypedSetting_T__o *__this,MethodInfo_29B45D0 *method)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *__src;
  long in_RDX;
  void *extraout_RDX;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar4;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(*(long *)(in_RDX + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar1[1] + 0xfc);
  lVar3 = -(__n + 0xf & 0xfffffffffffffff0);
  lVar2 = *(long *)(*plVar1 + 0x80);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x2ab4617;
  __src = (void *)il2cpp_glue_022fa440(__this,lVar2 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x2ab4625;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x2ab4633;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// Settings.TypedSetting<bool>$$set_Value
// il2cpp: void Settings_TypedSetting_bool___set_Value (Settings_TypedSetting_bool__o* __this, bool value, const MethodInfo_29B40A0* method);
// 0x2ab40a0

void Settings_TypedSetting<bool>__set_Value
               (Settings_TypedSetting_bool__o *__this,bool_conflict value,MethodInfo_29B40A0 *method
               )

{
  undefined1 uVar1;
  
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,value,(__this->klass->vtable)._10_SanitizeValue.method);
  *(undefined1 *)((long)&(__this->fields).DefaultValue + 1) = uVar1;
  return;
}


// Settings.TypedSetting<int>$$set_Value
// il2cpp: void Settings_TypedSetting_int___set_Value (Settings_TypedSetting_int__o* __this, int32_t value, const MethodInfo_29B41B0* method);
// 0x2ab41b0

void Settings_TypedSetting<int>__set_Value
               (Settings_TypedSetting_int__o *__this,int32_t value,MethodInfo_29B41B0 *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,value,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$set_Value
// il2cpp: void Settings_TypedSetting_object___set_Value (Settings_TypedSetting_T__o* __this, Il2CppObject* value, const MethodInfo_29B42A0* method);
// 0x2ab42a0

void Settings_TypedSetting<object>__set_Value
               (Settings_TypedSetting_T__o *__this,Il2CppObject *value,MethodInfo_29B42A0 *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this,value,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = pIVar1;
  il2cpp_runtime_glue(&(__this->fields)._value,pIVar1);
  return;
}


// Settings.TypedSetting<float>$$set_Value
// il2cpp: void Settings_TypedSetting_float___set_Value (Settings_TypedSetting_float__o* __this, float value, const MethodInfo_29B43C0* method);
// 0x2ab43c0

void Settings_TypedSetting<float>__set_Value
               (Settings_TypedSetting_float__o *__this,float value,MethodInfo_29B43C0 *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                           (__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = fVar1;
  return;
}


// Settings.TypedSetting<Vector3>$$set_Value
// il2cpp: void Settings_TypedSetting_Vector3___set_Value (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, const MethodInfo_29B44C0* method);
// 0x2ab44c0

void Settings_TypedSetting<Vector3>__set_Value
               (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o value,
               MethodInfo_29B44C0 *method)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = value.fields.z;
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (value.fields._0_8_,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value.fields.x = (float)(int)uVar1;
  (__this->fields)._value.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields)._value.fields.z = fVar2;
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType___set_Value (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_29B4640* method);
// 0x2ab4640

void Settings_TypedSetting<__Il2CppFullySharedGenericType>__set_Value
               (Settings_TypedSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
               MethodInfo_29B4640 *method)

{
  long lVar1;
  long lVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  ulong uVar6;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  void *pvVar7;
  undefined8 uStack_60;
  void *local_58 [3];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  void *local_38;
  
  local_38 = value.monitor;
  local_40 = value.klass;
  lVar1 = *(long *)((long)local_38 + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  __n = (ulong)*(uint *)(lVar2 + 0xfc);
  uVar6 = __n + 0xf & 0xfffffffffffffff0;
  __dest = (undefined8 *)((long)local_58 - uVar6);
  pvVar7 = (void *)((long)__dest - uVar6);
  __src = local_40;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffc0;
  }
  *(undefined8 *)((long)pvVar7 + -8) = 0x2ab46a4;
  memcpy(__dest,__src,__n);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pMVar3 = (__this->klass->vtable)._10_SanitizeValue.method;
  pIVar4 = pMVar3->virtualMethodPointer;
  pIVar5 = pMVar3->invoker_method;
  local_58[0] = __dest;
  local_58[1] = pvVar7;
  *(undefined8 *)((long)pvVar7 + -8) = 0x2ab46db;
  (*pIVar5)(pIVar4,pMVar3,__this,local_58,pvVar7);
  lVar1 = *(long *)(**(long **)(*(long *)((long)local_38 + 0x20) + 0xc0) + 0x80);
  *(undefined8 *)((long)pvVar7 + -8) = 0x2ab4706;
  il2cpp_glue_02274860(__this,lVar1 + 0x20,pvVar7,__n);
  return;
}


// Settings.TypedSetting<bool>$$.ctor
// il2cpp: void Settings_TypedSetting_bool____ctor (Settings_TypedSetting_bool__o* __this, const MethodInfo_29B40C0* method);
// 0x2ab40c0

void Settings_TypedSetting<bool>___ctor
               (Settings_TypedSetting_bool__o *__this,MethodInfo_29B40C0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<int>$$.ctor
// il2cpp: void Settings_TypedSetting_int____ctor (Settings_TypedSetting_int__o* __this, const MethodInfo_29B41D0* method);
// 0x2ab41d0

void Settings_TypedSetting<int>___ctor
               (Settings_TypedSetting_int__o *__this,MethodInfo_29B41D0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<object>$$.ctor
// il2cpp: void Settings_TypedSetting_object____ctor (Settings_TypedSetting_T__o* __this, const MethodInfo_29B42D0* method);
// 0x2ab42d0

void Settings_TypedSetting<object>___ctor
               (Settings_TypedSetting_T__o *__this,MethodInfo_29B42D0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<float>$$.ctor
// il2cpp: void Settings_TypedSetting_float____ctor (Settings_TypedSetting_float__o* __this, const MethodInfo_29B43E0* method);
// 0x2ab43e0

void Settings_TypedSetting<float>___ctor
               (Settings_TypedSetting_float__o *__this,MethodInfo_29B43E0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<Vector3>$$.ctor
// il2cpp: void Settings_TypedSetting_Vector3____ctor (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_29B44E0* method);
// 0x2ab44e0

void Settings_TypedSetting<Vector3>___ctor
               (Settings_TypedSetting_Vector3__o *__this,MethodInfo_29B44E0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor (Settings_TypedSetting_T__o* __this, const MethodInfo_29B4720* method);
// 0x2ab4720

void Settings_TypedSetting<__Il2CppFullySharedGenericType>___ctor
               (Settings_TypedSetting_T__o *__this,MethodInfo_29B4720 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<bool>$$.ctor
// il2cpp: void Settings_TypedSetting_bool____ctor (Settings_TypedSetting_bool__o* __this, bool defaultValue, const MethodInfo_29B40D0* method);
// 0x2ab40d0

void Settings_TypedSetting<bool>___ctor
               (Settings_TypedSetting_bool__o *__this,bool_conflict defaultValue,
               MethodInfo_29B40D0 *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined1 uVar1;
  undefined8 extraout_RDX;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  *(undefined1 *)&(__this->fields).DefaultValue = uVar1;
  if (__this != (Settings_TypedSetting_bool__o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.TypedSetting<int>$$.ctor
// il2cpp: void Settings_TypedSetting_int____ctor (Settings_TypedSetting_int__o* __this, int32_t defaultValue, const MethodInfo_29B41E0* method);
// 0x2ab41e0

void Settings_TypedSetting<int>___ctor
               (Settings_TypedSetting_int__o *__this,int32_t defaultValue,MethodInfo_29B41E0 *method
               )

{
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar1;
  undefined8 extraout_RDX;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  iVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = iVar1;
  if (__this != (Settings_TypedSetting_int__o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.TypedSetting<object>$$.ctor
// il2cpp: void Settings_TypedSetting_object____ctor (Settings_TypedSetting_T__o* __this, Il2CppObject* defaultValue, const MethodInfo_29B42E0* method);
// 0x2ab42e0

void Settings_TypedSetting<object>___ctor
               (Settings_TypedSetting_T__o *__this,Il2CppObject *defaultValue,
               MethodInfo_29B42E0 *method)

{
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar1;
  undefined8 extraout_RDX;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this,defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = pIVar1;
  il2cpp_runtime_glue(&__this->fields,pIVar1);
  if (__this != (Settings_TypedSetting_T__o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.TypedSetting<float>$$.ctor
// il2cpp: void Settings_TypedSetting_float____ctor (Settings_TypedSetting_float__o* __this, float defaultValue, const MethodInfo_29B43F0* method);
// 0x2ab43f0

void Settings_TypedSetting<float>___ctor
               (Settings_TypedSetting_float__o *__this,float defaultValue,MethodInfo_29B43F0 *method
               )

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  float fVar1;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  fVar1 = (float)(*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                           (defaultValue,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = fVar1;
  if (__this != (Settings_TypedSetting_float__o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.TypedSetting<Vector3>$$.ctor
// il2cpp: void Settings_TypedSetting_Vector3____ctor (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o defaultValue, const MethodInfo_29B44F0* method);
// 0x2ab44f0

void Settings_TypedSetting<Vector3>___ctor
               (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o defaultValue,
               MethodInfo_29B44F0 *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar1;
  undefined8 extraout_RDX;
  float fVar2;
  float local_18;
  
  fVar2 = defaultValue.fields.z;
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  local_18 = defaultValue.fields.x;
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (local_18,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue.fields.x = (float)(int)uVar1;
  (__this->fields).DefaultValue.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields).DefaultValue.fields.z = fVar2;
  if (__this != (Settings_TypedSetting_Vector3__o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, const MethodInfo_29B4730* method);
// 0x2ab4730

void Settings_TypedSetting<__Il2CppFullySharedGenericType>___ctor
               (Settings_TypedSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,
               MethodInfo_29B4730 *method)

{
  long lVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  undefined8 uVar5;
  char *__n;
  void *pvVar6;
  undefined8 *__dest;
  void *pvVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 uStack_60;
  void *local_58 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  void *local_40;
  char *local_38;
  
  pvVar6 = defaultValue.monitor;
  local_38 = (char *)(ulong)*(uint *)(*(long *)(*(long *)(*(long *)((long)pvVar6 + 0x20) + 0xc0) + 8
                                               ) + 0xfc);
  __dest = (undefined8 *)((long)local_58 - ((ulong)(local_38 + 0xf) & 0xfffffffffffffff0));
  pvVar7 = (void *)((long)__dest - ((ulong)(local_38 + 0xf) & 0xfffffffffffffff0));
  local_48 = defaultValue.klass;
  *(undefined8 *)((long)pvVar7 + -8) = 0x2ab4788;
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  __n = local_38;
  lVar1 = *(long *)((long)pvVar6 + 0x20);
  __src = defaultValue.klass;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
  }
  local_40 = pvVar6;
  *(undefined8 *)((long)pvVar7 + -8) = 0x2ab47b9;
  memcpy(__dest,__src,(size_t)__n);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pMVar2 = (__this->klass->vtable)._10_SanitizeValue.method;
  pIVar3 = pMVar2->virtualMethodPointer;
  pIVar4 = pMVar2->invoker_method;
  local_58[0] = __dest;
  local_58[1] = pvVar7;
  *(undefined8 *)((long)pvVar7 + -8) = 0x2ab47f1;
  (*pIVar4)(pIVar3,pMVar2,__this,local_58,pvVar7);
  uVar5 = *(undefined8 *)(**(long **)(*(long *)((long)local_40 + 0x20) + 0xc0) + 0x80);
  *(undefined8 *)((long)pvVar7 + -8) = 0x2ab4818;
  il2cpp_glue_02274860(__this,uVar5,pvVar7,(ulong)__n & 0xffffffff);
  if (__this != (Settings_TypedSetting_T__o *)0x0) {
    pMVar2 = (__this->klass->vtable)._4_SetDefault.method;
    pIVar3 = (__this->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)pvVar7 + -8) = 0x2ab4831;
    (*pIVar3)(__this,pMVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)pvVar7 + -8) = &UNK_02ab4845;
  il2cpp_raise_exception();
}


// Settings.TypedSetting<bool>$$SetDefault
// il2cpp: void Settings_TypedSetting_bool___SetDefault (Settings_TypedSetting_bool__o* __this, const MethodInfo_29B4120* method);
// 0x2ab4120

void Settings_TypedSetting<bool>__SetDefault
               (Settings_TypedSetting_bool__o *__this,MethodInfo_29B4120 *method)

{
  undefined1 uVar1;
  
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,(ulong)(byte)(__this->fields).DefaultValue,
                     (__this->klass->vtable)._10_SanitizeValue.method);
  *(undefined1 *)((long)&(__this->fields).DefaultValue + 1) = uVar1;
  return;
}


// Settings.TypedSetting<int>$$SetDefault
// il2cpp: void Settings_TypedSetting_int___SetDefault (Settings_TypedSetting_int__o* __this, const MethodInfo_29B4230* method);
// 0x2ab4230

void Settings_TypedSetting<int>__SetDefault
               (Settings_TypedSetting_int__o *__this,MethodInfo_29B4230 *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,(ulong)(uint)(__this->fields).DefaultValue,
                     (__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$SetDefault
// il2cpp: void Settings_TypedSetting_object___SetDefault (Settings_TypedSetting_T__o* __this, const MethodInfo_29B4340* method);
// 0x2ab4340

void Settings_TypedSetting<object>__SetDefault
               (Settings_TypedSetting_T__o *__this,MethodInfo_29B4340 *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this,(__this->fields).DefaultValue,
                      (__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = pIVar1;
  il2cpp_runtime_glue(&(__this->fields)._value,pIVar1);
  return;
}


// Settings.TypedSetting<float>$$SetDefault
// il2cpp: void Settings_TypedSetting_float___SetDefault (Settings_TypedSetting_float__o* __this, const MethodInfo_29B4450* method);
// 0x2ab4450

void Settings_TypedSetting<float>__SetDefault
               (Settings_TypedSetting_float__o *__this,MethodInfo_29B4450 *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                           ((__this->fields).DefaultValue,__this,
                            (__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = fVar1;
  return;
}


// Settings.TypedSetting<Vector3>$$SetDefault
// il2cpp: void Settings_TypedSetting_Vector3___SetDefault (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_29B4560* method);
// 0x2ab4560

void Settings_TypedSetting<Vector3>__SetDefault
               (Settings_TypedSetting_Vector3__o *__this,MethodInfo_29B4560 *method)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1._0_4_ = (__this->fields).DefaultValue.fields.x;
  uVar1._4_4_ = (__this->fields).DefaultValue.fields.y;
  fVar2 = (__this->fields).DefaultValue.fields.z;
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (uVar1,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value.fields.x = (float)(int)uVar1;
  (__this->fields)._value.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields)._value.fields.z = fVar2;
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SetDefault
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType___SetDefault (Settings_TypedSetting_T__o* __this, const MethodInfo_29B4850* method);
// 0x2ab4850

void Settings_TypedSetting<__Il2CppFullySharedGenericType>__SetDefault
               (Settings_TypedSetting_T__o *__this,MethodInfo_29B4850 *method)

{
  Settings_TypedSetting_T__RGCTXs *pSVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *__dest;
  ulong __n;
  undefined8 *apuStack_40 [3];
  
  pSVar1 = method->klass->rgctx_data;
  __n = (ulong)(pSVar1->_1_T->_2).actualSize;
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apuStack_40 + lVar5 + 8);
  pvVar6 = (pSVar1->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x2ab489c;
  pvVar6 = (void *)il2cpp_glue_022fa440(__this,pvVar6);
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x2ab48aa;
  memcpy(__dest,pvVar6,__n);
  pSVar1 = method->klass->rgctx_data;
  pMVar2 = pSVar1->_3_Settings_TypedSetting_T__set_Value;
  pIVar3 = pMVar2->methodPointer;
  if (-1 < (int)(pSVar1->_1_T->_1).byval_arg.bits) {
    __dest = (undefined8 *)*__dest;
  }
  pIVar4 = pMVar2->invoker_method;
  apuStack_40[2] = __dest;
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x2ab48da;
  (*pIVar4)(pIVar3,pMVar2,__this,apuStack_40 + 2,__dest);
  return;
}


// Settings.TypedSetting<bool>$$SanitizeValue
// il2cpp: bool Settings_TypedSetting_bool___SanitizeValue (Settings_TypedSetting_bool__o* __this, bool value, const MethodInfo_29B4140* method);
// 0x2ab4140

bool_conflict
Settings_TypedSetting<bool>__SanitizeValue
          (Settings_TypedSetting_bool__o *__this,bool_conflict value,MethodInfo_29B4140 *method)

{
  return value;
}


// Settings.TypedSetting<int>$$SanitizeValue
// il2cpp: int32_t Settings_TypedSetting_int___SanitizeValue (Settings_TypedSetting_int__o* __this, int32_t value, const MethodInfo_29B4250* method);
// 0x2ab4250

int32_t Settings_TypedSetting<int>__SanitizeValue
                  (Settings_TypedSetting_int__o *__this,int32_t value,MethodInfo_29B4250 *method)

{
  return value;
}


// Settings.TypedSetting<object>$$SanitizeValue
// il2cpp: Il2CppObject* Settings_TypedSetting_object___SanitizeValue (Settings_TypedSetting_T__o* __this, Il2CppObject* value, const MethodInfo_29B4370* method);
// 0x2ab4370

Il2CppObject *
Settings_TypedSetting<object>__SanitizeValue
          (Settings_TypedSetting_T__o *__this,Il2CppObject *value,MethodInfo_29B4370 *method)

{
  return value;
}


// Settings.TypedSetting<float>$$SanitizeValue
// il2cpp: float Settings_TypedSetting_float___SanitizeValue (Settings_TypedSetting_float__o* __this, float value, const MethodInfo_29B4470* method);
// 0x2ab4470

float Settings_TypedSetting<float>__SanitizeValue
                (Settings_TypedSetting_float__o *__this,float value,MethodInfo_29B4470 *method)

{
  return value;
}


// Settings.TypedSetting<Vector3>$$SanitizeValue
// il2cpp: UnityEngine_Vector3_o Settings_TypedSetting_Vector3___SanitizeValue (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, const MethodInfo_29B4590* method);
// 0x2ab4590

UnityEngine_Vector3_o
Settings_TypedSetting<Vector3>__SanitizeValue
          (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o value,
          MethodInfo_29B4590 *method)

{
  return (UnityEngine_Vector3_o)value.fields;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SanitizeValue
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Settings_TypedSetting___Il2CppFullySharedGenericType___SanitizeValue (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_29B48F0* method);
// 0x2ab48f0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Settings_TypedSetting<__Il2CppFullySharedGenericType>__SanitizeValue
          (Settings_TypedSetting_T__o *__this,
          Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_29B48F0 *method)

{
  Il2CppClass *pIVar1;
  long lVar2;
  void *extraout_RDX;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar3;
  undefined8 uStack_30;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_28;
  
  local_28 = value.klass;
  pIVar1 = method->klass->rgctx_data->_1_T;
  __n = (ulong)(pIVar1->_2).actualSize;
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = local_28;
  if (-1 < (int)(pIVar1->_1).byval_arg.bits) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffd8;
  }
  *(undefined8 *)((long)&uStack_30 + lVar2) = 0x2ab493f;
  memcpy((undefined1 *)((long)&stack0xffffffffffffffd8 + lVar2),__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar2) = 0x2ab494d;
  UVar3.klass = memcpy(value.monitor,(undefined1 *)((long)&stack0xffffffffffffffd8 + lVar2),__n);
  UVar3.monitor = extraout_RDX;
  return UVar3;
}


// Settings.TypedSetting<bool>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_bool___ToString (Settings_TypedSetting_bool__o* __this, const MethodInfo_29B4150* method);
// 0x2ab4150

System_String_o *
Settings_TypedSetting<bool>__ToString
          (Settings_TypedSetting_bool__o *__this,MethodInfo_29B4150 *method)

{
  System_String_o *pSVar1;
  undefined1 local_9;
  
  local_9 = *(undefined1 *)((long)&(__this->fields).DefaultValue + 1);
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Boolean__ToString
                     ((bool_conflict)&local_9,
                      (MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<int>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_int___ToString (Settings_TypedSetting_int__o* __this, const MethodInfo_29B4260* method);
// 0x2ab4260

System_String_o *
Settings_TypedSetting<int>__ToString
          (Settings_TypedSetting_int__o *__this,MethodInfo_29B4260 *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  pSVar1 = System_Int32__ToString
                     ((int32_t)auStack_4,
                      (MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<object>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_object___ToString (Settings_TypedSetting_T__o* __this, const MethodInfo_29B4380* method);
// 0x2ab4380

System_String_o *
Settings_TypedSetting<object>__ToString
          (Settings_TypedSetting_T__o *__this,MethodInfo_29B4380 *method)

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pIVar1 = (__this->fields)._value;
  if (pIVar1 != (Il2CppObject *)0x0) {
    vtable_dispatch = pIVar1->klass->vtable[3].methodPtr;
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (pIVar1,pIVar1->klass->vtable[3].method,in_RDX,vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.TypedSetting<float>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_float___ToString (Settings_TypedSetting_float__o* __this, const MethodInfo_29B4480* method);
// 0x2ab4480

System_String_o *
Settings_TypedSetting<float>__ToString
          (Settings_TypedSetting_float__o *__this,MethodInfo_29B4480 *method)

{
  System_String_o *pSVar1;
  float in_XMM0_Da;
  
  pSVar1 = System_Single__ToString(in_XMM0_Da,(MethodInfo *)&stack0xfffffffffffffffc);
  return pSVar1;
}


// Settings.TypedSetting<Vector3>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_Vector3___ToString (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_29B45A0* method);
// 0x2ab45a0

System_String_o *
Settings_TypedSetting<Vector3>__ToString
          (Settings_TypedSetting_Vector3__o *__this,MethodInfo_29B45A0 *method)

{
  System_String_o *pSVar1;
  undefined8 local_10;
  float local_8;
  
  local_10._0_4_ = (__this->fields)._value.fields.x;
  local_10._4_4_ = (__this->fields)._value.fields.y;
  local_8 = (__this->fields)._value.fields.z;
  pSVar1 = (System_String_o *)il2cpp_glue_0241fd00(&local_10,0,0,0);
  return pSVar1;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting___Il2CppFullySharedGenericType___ToString (Settings_TypedSetting_T__o* __this, const MethodInfo_29B4960* method);
// 0x2ab4960

/* WARNING: Type propagation algorithm not settling */

System_String_o *
Settings_TypedSetting<__Il2CppFullySharedGenericType>__ToString
          (Settings_TypedSetting_T__o *__this,MethodInfo_29B4960 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  System_String_c *pSVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  Il2CppClass *pIVar10;
  Settings_TypedSetting_T__RGCTXs *pSVar11;
  void *__s;
  System_String_o *__src;
  ulong __n;
  Settings_TypedSetting_T__c *pSVar12;
  undefined8 uStack_50;
  System_String_o local_48;
  
  pSVar12 = method->klass;
  pIVar10 = pSVar12->rgctx_data->_1_T;
  uVar7 = (pIVar10->_2).actualSize;
  __n = (ulong)uVar7;
  local_48.monitor = __this;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    uStack_50 = 0x2ab499f;
    lVar8 = il2cpp_glue_022c28b0();
    uVar7 = *(uint *)(lVar8 + 0xfc);
    pSVar12 = method->klass;
  }
  lVar8 = (long)&local_48 - ((ulong)(uVar7 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = (System_String_o *)(lVar8 - uVar9);
  __s = (void *)((long)__src - uVar9);
  local_48.klass = (System_String_c *)method;
  *(undefined8 *)((long)__s + -8) = 0x2ab49e8;
  memset(__s,0,__n);
  pvVar6 = local_48.monitor;
  pMVar1 = pSVar12->rgctx_data->_4_Settings_TypedSetting_T__get_Value;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_48.fields = (System_String_Fields)__src;
  *(undefined8 *)((long)__s + -8) = 0x2ab4a08;
  (*pIVar3)(pIVar2,pMVar1,pvVar6,(void **)&local_48.fields,__src);
  pSVar5 = local_48.klass;
  *(undefined8 *)((long)__s + -8) = 0x2ab4a1a;
  memcpy(__s,__src,__n);
  pSVar11 = ((pSVar5->_1).byval_arg.data)->rgctx_data;
  pIVar10 = pSVar11->_1_T;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x2ab4a37;
    pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
    pSVar11 = ((pSVar5->_1).byval_arg.data)->rgctx_data;
  }
  pIVar4 = pSVar11[1]._0_Settings_TypedSetting_T_;
  *(undefined8 *)((long)__s + -8) = 0x2ab4a5b;
  il2cpp_glue_022754b0(pIVar10,pIVar4,lVar8,__s,0,&local_48.fields);
  return (System_String_o *)local_48.fields;
}


