// Type: Settings.TypedSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/TypedSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/TypedSetting.cs
// --------------------------------

// Settings.TypedSetting<bool>$$get_Value
// il2cpp: bool Settings_TypedSetting_bool___get_Value (Settings_TypedSetting_bool__o* __this, const MethodInfo_42DA010* method);
// 0x43da010

bool Settings_TypedSetting_bool___get_Value(Settings_TypedSetting_bool__o *__this,MethodInfo_42DA010 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<int>$$get_Value
// il2cpp: int32_t Settings_TypedSetting_int___get_Value (Settings_TypedSetting_int__o* __this, const MethodInfo_42DA150* method);
// 0x43da150

int32_t Settings_TypedSetting_int___get_Value(Settings_TypedSetting_int__o *__this,MethodInfo_42DA150 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<object>$$get_Value
// il2cpp: Il2CppObject* Settings_TypedSetting_object___get_Value (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA270* method);
// 0x43da270

Il2CppObject *
Settings_TypedSetting_object___get_Value(Settings_TypedSetting_T__o *__this,MethodInfo_42DA270 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<float>$$get_Value
// il2cpp: float Settings_TypedSetting_float___get_Value (Settings_TypedSetting_float__o* __this, const MethodInfo_42DA3A0* method);
// 0x43da3a0

float Settings_TypedSetting_float___get_Value
                (Settings_TypedSetting_float__o *__this,MethodInfo_42DA3A0 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<Vector3>$$get_Value
// il2cpp: UnityEngine_Vector3_o Settings_TypedSetting_Vector3___get_Value (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_42DA4C0* method);
// 0x43da4c0

UnityEngine_Vector3_o
Settings_TypedSetting_Vector3___get_Value(Settings_TypedSetting_Vector3__o *__this,MethodInfo_42DA4C0 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._value.fields;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Settings_TypedSetting___Il2CppFullySharedGenericType___get_Value (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA610* method);
// 0x43da610

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Settings_TypedSetting___Il2CppFullySharedGenericType___get_Value
          (Settings_TypedSetting_T__o *__this,MethodInfo_42DA610 *method)

{
  uint uVar1;
  long *plVar2;
  void *__src;
  long in_RDX;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar3;
  
  plVar2 = *(long **)(*(long *)(in_RDX + 0x20) + 0xc0);
  uVar1 = *(uint *)(plVar2[1] + 0xfc);
  __src = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)(*(long *)(*plVar2 + 0x80) + 0x20));
  UVar3.klass = memmove(method,__src,(ulong)uVar1);
  UVar3.monitor = UVar3.monitor;
  return UVar3;
}


// Settings.TypedSetting<bool>$$set_Value
// il2cpp: void Settings_TypedSetting_bool___set_Value (Settings_TypedSetting_bool__o* __this, bool value, const MethodInfo_42DA020* method);
// 0x43da020

void Settings_TypedSetting_bool___set_Value
               (Settings_TypedSetting_bool__o *__this,bool value,MethodInfo_42DA020 *method)

{
  bool bVar1;
  
  bVar1 = (bool)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                          (__this,value,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = bVar1;
  return;
}


// Settings.TypedSetting<int>$$set_Value
// il2cpp: void Settings_TypedSetting_int___set_Value (Settings_TypedSetting_int__o* __this, int32_t value, const MethodInfo_42DA160* method);
// 0x43da160

void Settings_TypedSetting_int___set_Value
               (Settings_TypedSetting_int__o *__this,int32_t value,MethodInfo_42DA160 *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,value,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$set_Value
// il2cpp: void Settings_TypedSetting_object___set_Value (Settings_TypedSetting_T__o* __this, Il2CppObject* value, const MethodInfo_42DA280* method);
// 0x43da280

void Settings_TypedSetting_object___set_Value
               (Settings_TypedSetting_T__o *__this,Il2CppObject *value,MethodInfo_42DA280 *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                     (__this,value,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = pIVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value);
  return;
}


// Settings.TypedSetting<float>$$set_Value
// il2cpp: void Settings_TypedSetting_float___set_Value (Settings_TypedSetting_float__o* __this, float value, const MethodInfo_42DA3B0* method);
// 0x43da3b0

void Settings_TypedSetting_float___set_Value
               (Settings_TypedSetting_float__o *__this,float value,MethodInfo_42DA3B0 *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                           (__this,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = fVar1;
  return;
}


// Settings.TypedSetting<Vector3>$$set_Value
// il2cpp: void Settings_TypedSetting_Vector3___set_Value (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, const MethodInfo_42DA4D0* method);
// 0x43da4d0

void Settings_TypedSetting_Vector3___set_Value
               (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o value,
               MethodInfo_42DA4D0 *method)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = value.fields.z;
  uVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (value.fields._0_8_,__this,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value.fields.x = (float)(int)uVar1;
  (__this->fields)._value.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields)._value.fields.z = fVar2;
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType___set_Value (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_42DA660* method);
// 0x43da660

void Settings_TypedSetting___Il2CppFullySharedGenericType___set_Value
               (Settings_TypedSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_42DA660 *method)

{
  uint size;
  long lVar1;
  long lVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  ulong uVar6;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  void *data;
  undefined8 uStack_60;
  void *local_58 [3];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  void *local_38;
  
  local_38 = value.monitor;
  local_40 = value.klass;
  lVar1 = *(long *)((long)local_38 + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  size = *(uint *)(lVar2 + 0xfc);
  uVar6 = (ulong)size + 0xf & 0xfffffffffffffff0;
  __dest = (undefined8 *)((long)local_58 - uVar6);
  data = (void *)((long)__dest - uVar6);
  __src = local_40;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_40;
  }
  *(undefined8 *)((long)data + -8) = 0x43da6c4;
  memcpy(__dest,__src,(ulong)size);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pMVar3 = (__this->klass->vtable)._11_SanitizeValue.method;
  pIVar4 = pMVar3->virtualMethodPointer;
  pIVar5 = pMVar3->invoker_method;
  local_58[0] = __dest;
  local_58[1] = data;
  *(undefined8 *)((long)data + -8) = 0x43da6fb;
  (*pIVar5)(pIVar4,pMVar3,__this,local_58,data);
  lVar1 = *(long *)(**(long **)(*(long *)((long)local_38 + 0x20) + 0xc0) + 0x80);
  *(undefined8 *)((long)data + -8) = 0x43da726;
  il2cpp_codegen_write_instance_field_data(__this,(void *)(lVar1 + 0x20),data,size);
  return;
}


// Settings.TypedSetting<bool>$$.ctor
// il2cpp: void Settings_TypedSetting_bool____ctor (Settings_TypedSetting_bool__o* __this, const MethodInfo_42DA040* method);
// 0x43da040

void Settings_TypedSetting_bool____ctor(Settings_TypedSetting_bool__o *__this,MethodInfo_42DA040 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<int>$$.ctor
// il2cpp: void Settings_TypedSetting_int____ctor (Settings_TypedSetting_int__o* __this, const MethodInfo_42DA180* method);
// 0x43da180

void Settings_TypedSetting_int____ctor(Settings_TypedSetting_int__o *__this,MethodInfo_42DA180 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<object>$$.ctor
// il2cpp: void Settings_TypedSetting_object____ctor (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA2B0* method);
// 0x43da2b0

void Settings_TypedSetting_object____ctor(Settings_TypedSetting_T__o *__this,MethodInfo_42DA2B0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<float>$$.ctor
// il2cpp: void Settings_TypedSetting_float____ctor (Settings_TypedSetting_float__o* __this, const MethodInfo_42DA3D0* method);
// 0x43da3d0

void Settings_TypedSetting_float____ctor(Settings_TypedSetting_float__o *__this,MethodInfo_42DA3D0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<Vector3>$$.ctor
// il2cpp: void Settings_TypedSetting_Vector3____ctor (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_42DA4F0* method);
// 0x43da4f0

void Settings_TypedSetting_Vector3____ctor
               (Settings_TypedSetting_Vector3__o *__this,MethodInfo_42DA4F0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA740* method);
// 0x43da740

void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
               (Settings_TypedSetting_T__o *__this,MethodInfo_42DA740 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<bool>$$.ctor
// il2cpp: void Settings_TypedSetting_bool____ctor (Settings_TypedSetting_bool__o* __this, bool defaultValue, const MethodInfo_42DA050* method);
// 0x43da050

void Settings_TypedSetting_bool____ctor_42da050
               (Settings_TypedSetting_bool__o *__this,bool defaultValue,MethodInfo_42DA050 *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool bVar1;
  undefined8 extraout_RDX;
  undefined7 in_register_00000031;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  bVar1 = (bool)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                          (__this,CONCAT71(in_register_00000031,defaultValue) & 0xffffffff,
                           (__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = bVar1;
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.TypedSetting<int>$$.ctor
// il2cpp: void Settings_TypedSetting_int____ctor (Settings_TypedSetting_int__o* __this, int32_t defaultValue, const MethodInfo_42DA190* method);
// 0x43da190

void Settings_TypedSetting_int____ctor_42da190
               (Settings_TypedSetting_int__o *__this,int32_t defaultValue,MethodInfo_42DA190 *method)

{
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar1;
  undefined8 extraout_RDX;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  iVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = iVar1;
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.TypedSetting<object>$$.ctor
// il2cpp: void Settings_TypedSetting_object____ctor (Settings_TypedSetting_T__o* __this, Il2CppObject* defaultValue, const MethodInfo_42DA2C0* method);
// 0x43da2c0

void Settings_TypedSetting_object____ctor_42da2c0
               (Settings_TypedSetting_T__o *__this,Il2CppObject *defaultValue,MethodInfo_42DA2C0 *method)

{
  Il2CppObject *pIVar1;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                     (__this,defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = pIVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.TypedSetting<float>$$.ctor
// il2cpp: void Settings_TypedSetting_float____ctor (Settings_TypedSetting_float__o* __this, float defaultValue, const MethodInfo_42DA3E0* method);
// 0x43da3e0

void Settings_TypedSetting_float____ctor_42da3e0
               (Settings_TypedSetting_float__o *__this,float defaultValue,MethodInfo_42DA3E0 *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  float fVar1;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  fVar1 = (float)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                           (defaultValue,__this,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = fVar1;
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.TypedSetting<Vector3>$$.ctor
// il2cpp: void Settings_TypedSetting_Vector3____ctor (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o defaultValue, const MethodInfo_42DA500* method);
// 0x43da500

void Settings_TypedSetting_Vector3____ctor_42da500
               (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o defaultValue,
               MethodInfo_42DA500 *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 uVar1;
  undefined8 extraout_RDX;
  float fVar2;
  float local_18;
  
  fVar2 = defaultValue.fields.z;
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  local_18 = defaultValue.fields.x;
  uVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (local_18,__this,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue.fields.x = (float)(int)uVar1;
  (__this->fields).DefaultValue.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields).DefaultValue.fields.z = fVar2;
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, const MethodInfo_42DA750* method);
// 0x43da750

void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor_42da750
               (Settings_TypedSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,MethodInfo_42DA750 *method)

{
  uint size;
  long lVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  void *data;
  undefined8 uStack_60;
  void *local_58 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  void *local_40;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_38;
  
  pvVar6 = defaultValue.monitor;
  local_48 = defaultValue.klass;
  size = *(uint *)(*(long *)(*(long *)(*(long *)((long)pvVar6 + 0x20) + 0xc0) + 8) + 0xfc);
  uVar5 = (ulong)size + 0xf & 0xfffffffffffffff0;
  __dest = (undefined8 *)((long)local_58 - uVar5);
  data = (void *)((long)__dest - uVar5);
  local_38 = local_48;
  *(undefined8 *)((long)data + -8) = 0x43da7a6;
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  lVar1 = *(long *)((long)pvVar6 + 0x20);
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_48;
  if (*(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28) < 0) {
    __src = local_38;
  }
  local_40 = pvVar6;
  *(undefined8 *)((long)data + -8) = 0x43da7d1;
  memcpy(__dest,__src,(ulong)size);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pMVar2 = (__this->klass->vtable)._11_SanitizeValue.method;
  pIVar3 = pMVar2->virtualMethodPointer;
  pIVar4 = pMVar2->invoker_method;
  local_58[0] = __dest;
  local_58[1] = data;
  *(undefined8 *)((long)data + -8) = 0x43da809;
  (*pIVar4)(pIVar3,pMVar2,__this,local_58,data);
  pvVar6 = *(void **)(**(long **)(*(long *)((long)local_40 + 0x20) + 0xc0) + 0x80);
  *(undefined8 *)((long)data + -8) = 0x43da830;
  il2cpp_codegen_write_instance_field_data(__this,pvVar6,data,size);
  pMVar2 = (__this->klass->vtable)._4_SetDefault.method;
  pIVar3 = (__this->klass->vtable)._4_SetDefault.methodPtr;
  *(undefined8 *)((long)data + -8) = 0x43da844;
  (*pIVar3)(__this,pMVar2);
  return;
}


// Settings.TypedSetting<bool>$$SetDefault
// il2cpp: void Settings_TypedSetting_bool___SetDefault (Settings_TypedSetting_bool__o* __this, const MethodInfo_42DA0A0* method);
// 0x43da0a0

void Settings_TypedSetting_bool___SetDefault(Settings_TypedSetting_bool__o *__this,MethodInfo_42DA0A0 *method)

{
  bool bVar1;
  
  bVar1 = (bool)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                          (__this,(ulong)(__this->fields).DefaultValue,
                           (__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = bVar1;
  return;
}


// Settings.TypedSetting<int>$$SetDefault
// il2cpp: void Settings_TypedSetting_int___SetDefault (Settings_TypedSetting_int__o* __this, const MethodInfo_42DA1E0* method);
// 0x43da1e0

void Settings_TypedSetting_int___SetDefault(Settings_TypedSetting_int__o *__this,MethodInfo_42DA1E0 *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,(ulong)(uint)(__this->fields).DefaultValue,
                     (__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$SetDefault
// il2cpp: void Settings_TypedSetting_object___SetDefault (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA320* method);
// 0x43da320

void Settings_TypedSetting_object___SetDefault(Settings_TypedSetting_T__o *__this,MethodInfo_42DA320 *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                     (__this,(__this->fields).DefaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = pIVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value);
  return;
}


// Settings.TypedSetting<float>$$SetDefault
// il2cpp: void Settings_TypedSetting_float___SetDefault (Settings_TypedSetting_float__o* __this, const MethodInfo_42DA430* method);
// 0x43da430

void Settings_TypedSetting_float___SetDefault
               (Settings_TypedSetting_float__o *__this,MethodInfo_42DA430 *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                           ((__this->fields).DefaultValue,__this,
                            (__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = fVar1;
  return;
}


// Settings.TypedSetting<Vector3>$$SetDefault
// il2cpp: void Settings_TypedSetting_Vector3___SetDefault (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_42DA560* method);
// 0x43da560

void Settings_TypedSetting_Vector3___SetDefault
               (Settings_TypedSetting_Vector3__o *__this,MethodInfo_42DA560 *method)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1._0_4_ = (__this->fields).DefaultValue.fields.x;
  uVar1._4_4_ = (__this->fields).DefaultValue.fields.y;
  fVar2 = (__this->fields).DefaultValue.fields.z;
  uVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (uVar1,__this,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value.fields.x = (float)(int)uVar1;
  (__this->fields)._value.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields)._value.fields.z = fVar2;
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SetDefault
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType___SetDefault (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA860* method);
// 0x43da860

void Settings_TypedSetting___Il2CppFullySharedGenericType___SetDefault
               (Settings_TypedSetting_T__o *__this,MethodInfo_42DA860 *method)

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
  __n = (ulong)(pSVar1->_1_T->_2).stack_slot_size;
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apuStack_40 + lVar5 + 8);
  pvVar6 = (pSVar1->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x43da8ac;
  pvVar6 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar6);
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x43da8ba;
  memcpy(__dest,pvVar6,__n);
  pSVar1 = method->klass->rgctx_data;
  pMVar2 = pSVar1->_3_Settings_TypedSetting_T__set_Value;
  pIVar3 = pMVar2->methodPointer;
  if (-1 < (int)(pSVar1->_1_T->_1).byval_arg.bits) {
    __dest = (undefined8 *)*__dest;
  }
  pIVar4 = pMVar2->invoker_method;
  apuStack_40[2] = __dest;
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x43da8ea;
  (*pIVar4)(pIVar3,pMVar2,__this,apuStack_40 + 2,__dest);
  return;
}


// Settings.TypedSetting<bool>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_bool___GetDefaultValue (Settings_TypedSetting_bool__o* __this, const MethodInfo_42DA0C0* method);
// 0x43da0c0

Il2CppObject *
Settings_TypedSetting_bool___GetDefaultValue(Settings_TypedSetting_bool__o *__this,MethodInfo_42DA0C0 *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  pIVar1 = il2cpp_vm_Object_Box(method->klass->rgctx_data->_1_T,&uStack_1);
  return pIVar1;
}


// Settings.TypedSetting<int>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_int___GetDefaultValue (Settings_TypedSetting_int__o* __this, const MethodInfo_42DA200* method);
// 0x43da200

Il2CppObject *
Settings_TypedSetting_int___GetDefaultValue(Settings_TypedSetting_int__o *__this,MethodInfo_42DA200 *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(method->klass->rgctx_data->_1_T,auStack_4);
  return pIVar1;
}


// Settings.TypedSetting<object>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_object___GetDefaultValue (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA350* method);
// 0x43da350

Il2CppObject *
Settings_TypedSetting_object___GetDefaultValue(Settings_TypedSetting_T__o *__this,MethodInfo_42DA350 *method)

{
  return (__this->fields).DefaultValue;
}


// Settings.TypedSetting<float>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_float___GetDefaultValue (Settings_TypedSetting_float__o* __this, const MethodInfo_42DA450* method);
// 0x43da450

Il2CppObject *
Settings_TypedSetting_float___GetDefaultValue
          (Settings_TypedSetting_float__o *__this,MethodInfo_42DA450 *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(method->klass->rgctx_data->_1_T,auStack_4);
  return pIVar1;
}


// Settings.TypedSetting<Vector3>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_Vector3___GetDefaultValue (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_42DA590* method);
// 0x43da590

Il2CppObject *
Settings_TypedSetting_Vector3___GetDefaultValue
          (Settings_TypedSetting_Vector3__o *__this,MethodInfo_42DA590 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_10;
  float local_8;
  
  local_8 = (__this->fields).DefaultValue.fields.z;
  local_10._0_4_ = (__this->fields).DefaultValue.fields.x;
  local_10._4_4_ = (__this->fields).DefaultValue.fields.y;
  pIVar1 = il2cpp_vm_Object_Box(method->klass->rgctx_data->_1_T,&local_10);
  return pIVar1;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting___Il2CppFullySharedGenericType___GetDefaultValue (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA900* method);
// 0x43da900

Il2CppObject *
Settings_TypedSetting___Il2CppFullySharedGenericType___GetDefaultValue
          (Settings_TypedSetting_T__o *__this,MethodInfo_42DA900 *method)

{
  Settings_TypedSetting_T__RGCTXs *pSVar1;
  Il2CppClass *klass;
  long lVar2;
  void *pvVar3;
  Il2CppObject *pIVar4;
  ulong __n;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  pSVar1 = method->klass->rgctx_data;
  __n = (ulong)(pSVar1->_1_T->_2).stack_slot_size;
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  pvVar3 = (pSVar1->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)(auStack_28 + lVar2 + -8) = 0x43da943;
  pvVar3 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar3);
  *(undefined8 *)(auStack_28 + lVar2 + -8) = 0x43da951;
  memcpy(auStack_28 + lVar2,pvVar3,__n);
  klass = method->klass->rgctx_data->_1_T;
  *(undefined8 *)(auStack_28 + lVar2 + -8) = 0x43da968;
  pIVar4 = il2cpp_vm_Object_Box(klass,auStack_28 + lVar2);
  return pIVar4;
}


// Settings.TypedSetting<bool>$$SanitizeValue
// il2cpp: bool Settings_TypedSetting_bool___SanitizeValue (Settings_TypedSetting_bool__o* __this, bool value, const MethodInfo_42DA0F0* method);
// 0x43da0f0

bool Settings_TypedSetting_bool___SanitizeValue
               (Settings_TypedSetting_bool__o *__this,bool value,MethodInfo_42DA0F0 *method)

{
  return value;
}


// Settings.TypedSetting<int>$$SanitizeValue
// il2cpp: int32_t Settings_TypedSetting_int___SanitizeValue (Settings_TypedSetting_int__o* __this, int32_t value, const MethodInfo_42DA230* method);
// 0x43da230

int32_t Settings_TypedSetting_int___SanitizeValue
                  (Settings_TypedSetting_int__o *__this,int32_t value,MethodInfo_42DA230 *method)

{
  return value;
}


// Settings.TypedSetting<object>$$SanitizeValue
// il2cpp: Il2CppObject* Settings_TypedSetting_object___SanitizeValue (Settings_TypedSetting_T__o* __this, Il2CppObject* value, const MethodInfo_42DA360* method);
// 0x43da360

Il2CppObject *
Settings_TypedSetting_object___SanitizeValue
          (Settings_TypedSetting_T__o *__this,Il2CppObject *value,MethodInfo_42DA360 *method)

{
  return value;
}


// Settings.TypedSetting<float>$$SanitizeValue
// il2cpp: float Settings_TypedSetting_float___SanitizeValue (Settings_TypedSetting_float__o* __this, float value, const MethodInfo_42DA480* method);
// 0x43da480

float Settings_TypedSetting_float___SanitizeValue
                (Settings_TypedSetting_float__o *__this,float value,MethodInfo_42DA480 *method)

{
  return value;
}


// Settings.TypedSetting<Vector3>$$SanitizeValue
// il2cpp: UnityEngine_Vector3_o Settings_TypedSetting_Vector3___SanitizeValue (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, const MethodInfo_42DA5D0* method);
// 0x43da5d0

UnityEngine_Vector3_o
Settings_TypedSetting_Vector3___SanitizeValue
          (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o value,MethodInfo_42DA5D0 *method)

{
  return (UnityEngine_Vector3_o)value.fields;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SanitizeValue
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Settings_TypedSetting___Il2CppFullySharedGenericType___SanitizeValue (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_42DA980* method);
// 0x43da980

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Settings_TypedSetting___Il2CppFullySharedGenericType___SanitizeValue
          (Settings_TypedSetting_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
          MethodInfo_42DA980 *method)

{
  Il2CppClass *pIVar1;
  void *extraout_RDX;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_8;
  
  pUStack_8 = value.klass;
  pIVar1 = method->klass->rgctx_data->_1_T;
  __src = pUStack_8;
  if (-1 < (int)(pIVar1->_1).byval_arg.bits) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&pUStack_8;
  }
  memmove(value.monitor,__src,(ulong)(pIVar1->_2).stack_slot_size);
  UVar2.monitor = extraout_RDX;
  UVar2.klass = pUStack_8;
  return UVar2;
}


// Settings.TypedSetting<bool>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_bool___ToString (Settings_TypedSetting_bool__o* __this, const MethodInfo_42DA100* method);
// 0x43da100

System_String_o *
Settings_TypedSetting_bool___ToString(Settings_TypedSetting_bool__o *__this,MethodInfo_42DA100 *method)

{
  System_String_o *pSVar1;
  bool local_9;
  
  local_9 = (__this->fields)._value;
  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  pSVar1 = System_Boolean__ToString
                     (&local_9,(MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<int>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_int___ToString (Settings_TypedSetting_int__o* __this, const MethodInfo_42DA240* method);
// 0x43da240

System_String_o *
Settings_TypedSetting_int___ToString(Settings_TypedSetting_int__o *__this,MethodInfo_42DA240 *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  pSVar1 = System_Int32__ToString
                     (&iStack_4,(MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<object>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_object___ToString (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA370* method);
// 0x43da370

System_String_o *
Settings_TypedSetting_object___ToString(Settings_TypedSetting_T__o *__this,MethodInfo_42DA370 *method)

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pIVar1 = (__this->fields)._value;
  if (pIVar1 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = pIVar1->klass->vtable[3].methodPtr;
  pSVar2 = (System_String_o *)
           (*vtableDispatch)(pIVar1,pIVar1->klass->vtable[3].method,in_RDX,vtableDispatch);
  return pSVar2;
}


// Settings.TypedSetting<float>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_float___ToString (Settings_TypedSetting_float__o* __this, const MethodInfo_42DA490* method);
// 0x43da490

System_String_o *
Settings_TypedSetting_float___ToString(Settings_TypedSetting_float__o *__this,MethodInfo_42DA490 *method)

{
  System_String_o *pSVar1;
  float fStack_4;
  
  pSVar1 = System_Single__ToString
                     (&fStack_4,(MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<Vector3>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_Vector3___ToString (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_42DA5E0* method);
// 0x43da5e0

System_String_o *
Settings_TypedSetting_Vector3___ToString(Settings_TypedSetting_Vector3__o *__this,MethodInfo_42DA5E0 *method)

{
  System_String_o *pSVar1;
  undefined8 local_10;
  float local_8;
  
  local_10._0_4_ = (__this->fields)._value.fields.x;
  local_10._4_4_ = (__this->fields)._value.fields.y;
  local_8 = (__this->fields)._value.fields.z;
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_03296cc0(&local_10,0,0,0);
  return pSVar1;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting___Il2CppFullySharedGenericType___ToString (Settings_TypedSetting_T__o* __this, const MethodInfo_42DA9B0* method);
// 0x43da9b0

System_String_o *
Settings_TypedSetting___Il2CppFullySharedGenericType___ToString
          (Settings_TypedSetting_T__o *__this,MethodInfo_42DA9B0 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *pIVar5;
  Settings_TypedSetting_T__c *pSVar6;
  Settings_TypedSetting_T__RGCTXs *pSVar7;
  uint uVar8;
  ulong uVar9;
  void *__dest;
  System_String_o *__src;
  long lVar10;
  ulong __n;
  undefined8 uStack_40;
  System_String_o *local_38;
  
  pSVar6 = method->klass;
  pIVar5 = pSVar6->rgctx_data->_1_T;
  uVar8 = (pIVar5->_2).stack_slot_size;
  __n = (ulong)uVar8;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    uStack_40 = 0x43da9ee;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    uVar8 = (pIVar5->_2).stack_slot_size;
    pSVar6 = method->klass;
  }
  lVar10 = (long)&local_38 - ((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = (System_String_o *)(lVar10 - uVar9);
  __dest = (void *)((long)__src - uVar9);
  pMVar1 = pSVar6->rgctx_data->_4_Settings_TypedSetting_T__get_Value;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_38 = __src;
  *(undefined8 *)((long)__dest + -8) = 0x43daa45;
  (*pIVar3)(pIVar2,pMVar1,__this,&local_38,__src);
  *(undefined8 *)((long)__dest + -8) = 0x43daa53;
  memcpy(__dest,__src,__n);
  pSVar7 = method->klass->rgctx_data;
  pIVar5 = pSVar7->_1_T;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)__dest + -8) = 0x43daa70;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pSVar7 = method->klass->rgctx_data;
  }
  pIVar4 = pSVar7[1]._0_Settings_TypedSetting_T_;
  *(undefined8 *)((long)__dest + -8) = 0x43daa94;
  il2cpp_runtime_helper_030d6e00(pIVar5,pIVar4,lVar10,__dest,0,&local_38);
  return local_38;
}


