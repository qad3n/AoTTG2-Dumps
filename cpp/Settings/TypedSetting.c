// Type: Settings.TypedSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/TypedSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/TypedSetting.cs
// --------------------------------

// Settings.TypedSetting<bool>$$get_Value
// il2cpp: bool Settings_TypedSetting_bool___get_Value (Settings_TypedSetting_bool__o* __this, const MethodInfo_2A23E80* method);
// 0x2b23e80

bool_conflict
Settings_TypedSetting_bool___get_Value(Settings_TypedSetting_bool__o *__this,MethodInfo_2A23E80 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields).DefaultValue + 1));
}


// Settings.TypedSetting<int>$$get_Value
// il2cpp: int32_t Settings_TypedSetting_int___get_Value (Settings_TypedSetting_int__o* __this, const MethodInfo_2A23F90* method);
// 0x2b23f90

int32_t Settings_TypedSetting_int___get_Value(Settings_TypedSetting_int__o *__this,MethodInfo_2A23F90 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<object>$$get_Value
// il2cpp: Il2CppObject* Settings_TypedSetting_object___get_Value (Settings_TypedSetting_T__o* __this, const MethodInfo_2A24080* method);
// 0x2b24080

Il2CppObject *
Settings_TypedSetting_object___get_Value(Settings_TypedSetting_T__o *__this,MethodInfo_2A24080 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<float>$$get_Value
// il2cpp: float Settings_TypedSetting_float___get_Value (Settings_TypedSetting_float__o* __this, const MethodInfo_2A241A0* method);
// 0x2b241a0

float Settings_TypedSetting_float___get_Value
                (Settings_TypedSetting_float__o *__this,MethodInfo_2A241A0 *method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<Vector3>$$get_Value
// il2cpp: UnityEngine_Vector3_o Settings_TypedSetting_Vector3___get_Value (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_2A242A0* method);
// 0x2b242a0

UnityEngine_Vector3_o
Settings_TypedSetting_Vector3___get_Value(Settings_TypedSetting_Vector3__o *__this,MethodInfo_2A242A0 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._value.fields;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Settings_TypedSetting___Il2CppFullySharedGenericType___get_Value (Settings_TypedSetting_T__o* __this, const MethodInfo_2A243C0* method);
// 0x2b243c0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Settings_TypedSetting___Il2CppFullySharedGenericType___get_Value
          (Settings_TypedSetting_T__o *__this,MethodInfo_2A243C0 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x2b24407;
  __src = (void *)il2cpp_runtime_helper_02338550(__this,lVar2 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x2b24415;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x2b24423;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// Settings.TypedSetting<bool>$$set_Value
// il2cpp: void Settings_TypedSetting_bool___set_Value (Settings_TypedSetting_bool__o* __this, bool value, const MethodInfo_2A23E90* method);
// 0x2b23e90

void Settings_TypedSetting_bool___set_Value
               (Settings_TypedSetting_bool__o *__this,bool_conflict value,MethodInfo_2A23E90 *method)

{
  undefined1 uVar1;
  
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,value,(__this->klass->vtable)._10_SanitizeValue.method);
  *(undefined1 *)((long)&(__this->fields).DefaultValue + 1) = uVar1;
  return;
}


// Settings.TypedSetting<int>$$set_Value
// il2cpp: void Settings_TypedSetting_int___set_Value (Settings_TypedSetting_int__o* __this, int32_t value, const MethodInfo_2A23FA0* method);
// 0x2b23fa0

void Settings_TypedSetting_int___set_Value
               (Settings_TypedSetting_int__o *__this,int32_t value,MethodInfo_2A23FA0 *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,value,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$set_Value
// il2cpp: void Settings_TypedSetting_object___set_Value (Settings_TypedSetting_T__o* __this, Il2CppObject* value, const MethodInfo_2A24090* method);
// 0x2b24090

void Settings_TypedSetting_object___set_Value
               (Settings_TypedSetting_T__o *__this,Il2CppObject *value,MethodInfo_2A24090 *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this,value,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = pIVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._value,pIVar1);
  return;
}


// Settings.TypedSetting<float>$$set_Value
// il2cpp: void Settings_TypedSetting_float___set_Value (Settings_TypedSetting_float__o* __this, float value, const MethodInfo_2A241B0* method);
// 0x2b241b0

void Settings_TypedSetting_float___set_Value
               (Settings_TypedSetting_float__o *__this,float value,MethodInfo_2A241B0 *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                           (__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = fVar1;
  return;
}


// Settings.TypedSetting<Vector3>$$set_Value
// il2cpp: void Settings_TypedSetting_Vector3___set_Value (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, const MethodInfo_2A242B0* method);
// 0x2b242b0

void Settings_TypedSetting_Vector3___set_Value
               (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o value,
               MethodInfo_2A242B0 *method)

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
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType___set_Value (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_2A24430* method);
// 0x2b24430

void Settings_TypedSetting___Il2CppFullySharedGenericType___set_Value
               (Settings_TypedSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_2A24430 *method)

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
  *(undefined8 *)((long)pvVar7 + -8) = 0x2b24494;
  memcpy(__dest,__src,__n);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pMVar3 = (__this->klass->vtable)._10_SanitizeValue.method;
  pIVar4 = pMVar3->virtualMethodPointer;
  pIVar5 = pMVar3->invoker_method;
  local_58[0] = __dest;
  local_58[1] = pvVar7;
  *(undefined8 *)((long)pvVar7 + -8) = 0x2b244cb;
  (*pIVar5)(pIVar4,pMVar3,__this,local_58,pvVar7);
  lVar1 = *(long *)(**(long **)(*(long *)((long)local_38 + 0x20) + 0xc0) + 0x80);
  *(undefined8 *)((long)pvVar7 + -8) = 0x2b244f6;
  il2cpp_runtime_helper_022b2970(__this,lVar1 + 0x20,pvVar7,__n);
  return;
}


// Settings.TypedSetting<bool>$$.ctor
// il2cpp: void Settings_TypedSetting_bool____ctor (Settings_TypedSetting_bool__o* __this, const MethodInfo_2A23EB0* method);
// 0x2b23eb0

void Settings_TypedSetting_bool____ctor(Settings_TypedSetting_bool__o *__this,MethodInfo_2A23EB0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<int>$$.ctor
// il2cpp: void Settings_TypedSetting_int____ctor (Settings_TypedSetting_int__o* __this, const MethodInfo_2A23FC0* method);
// 0x2b23fc0

void Settings_TypedSetting_int____ctor(Settings_TypedSetting_int__o *__this,MethodInfo_2A23FC0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<object>$$.ctor
// il2cpp: void Settings_TypedSetting_object____ctor (Settings_TypedSetting_T__o* __this, const MethodInfo_2A240C0* method);
// 0x2b240c0

void Settings_TypedSetting_object____ctor(Settings_TypedSetting_T__o *__this,MethodInfo_2A240C0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<float>$$.ctor
// il2cpp: void Settings_TypedSetting_float____ctor (Settings_TypedSetting_float__o* __this, const MethodInfo_2A241D0* method);
// 0x2b241d0

void Settings_TypedSetting_float____ctor(Settings_TypedSetting_float__o *__this,MethodInfo_2A241D0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<Vector3>$$.ctor
// il2cpp: void Settings_TypedSetting_Vector3____ctor (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_2A242D0* method);
// 0x2b242d0

void Settings_TypedSetting_Vector3____ctor
               (Settings_TypedSetting_Vector3__o *__this,MethodInfo_2A242D0 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor (Settings_TypedSetting_T__o* __this, const MethodInfo_2A24510* method);
// 0x2b24510

void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
               (Settings_TypedSetting_T__o *__this,MethodInfo_2A24510 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<bool>$$.ctor
// il2cpp: void Settings_TypedSetting_bool____ctor (Settings_TypedSetting_bool__o* __this, bool defaultValue, const MethodInfo_2A23EC0* method);
// 0x2b23ec0

void Settings_TypedSetting_bool____ctor_2a23ec0
               (Settings_TypedSetting_bool__o *__this,bool_conflict defaultValue,MethodInfo_2A23EC0 *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined1 uVar1;
  undefined8 extraout_RDX;
  Settings_TypedSetting_bool__o *pSVar2;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  pSVar2 = __this;
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  *(undefined1 *)&(__this->fields).DefaultValue = uVar1;
  if (__this != (Settings_TypedSetting_bool__o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar1 = (*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)();
  *(undefined1 *)((long)&(pSVar2->fields).DefaultValue + 1) = uVar1;
  return;
}


// Settings.TypedSetting<int>$$.ctor
// il2cpp: void Settings_TypedSetting_int____ctor (Settings_TypedSetting_int__o* __this, int32_t defaultValue, const MethodInfo_2A23FD0* method);
// 0x2b23fd0

void Settings_TypedSetting_int____ctor_2a23fd0
               (Settings_TypedSetting_int__o *__this,int32_t defaultValue,MethodInfo_2A23FD0 *method)

{
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar1;
  undefined8 extraout_RDX;
  Settings_TypedSetting_int__o *pSVar2;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  pSVar2 = __this;
  iVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = iVar1;
  if (__this != (Settings_TypedSetting_int__o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar1 = (*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)();
  (pSVar2->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$.ctor
// il2cpp: void Settings_TypedSetting_object____ctor (Settings_TypedSetting_T__o* __this, Il2CppObject* defaultValue, const MethodInfo_2A240D0* method);
// 0x2b240d0

void Settings_TypedSetting_object____ctor_2a240d0
               (Settings_TypedSetting_T__o *__this,Il2CppObject *defaultValue,MethodInfo_2A240D0 *method)

{
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  Settings_TypedSetting_T__Fields *pSVar3;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this,defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  pSVar3 = &__this->fields;
  (__this->fields).DefaultValue = pIVar1;
  il2cpp_runtime_helper_022b4080(pSVar3,pIVar1);
  if (__this != (Settings_TypedSetting_T__o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar2 = (*pSVar3->DefaultValue[0x1d].monitor)();
  *(undefined8 *)((long)(pSVar3 + 1) + 8) = uVar2;
  il2cpp_runtime_helper_022b4080((long)(pSVar3 + 1) + 8,uVar2);
  return;
}


// Settings.TypedSetting<float>$$.ctor
// il2cpp: void Settings_TypedSetting_float____ctor (Settings_TypedSetting_float__o* __this, float defaultValue, const MethodInfo_2A241E0* method);
// 0x2b241e0

void Settings_TypedSetting_float____ctor_2a241e0
               (Settings_TypedSetting_float__o *__this,float defaultValue,MethodInfo_2A241E0 *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  Settings_TypedSetting_float__o *pSVar1;
  float fVar2;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  pSVar1 = __this;
  fVar2 = (float)(*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                           (defaultValue,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = fVar2;
  if (__this != (Settings_TypedSetting_float__o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  fVar2 = (float)(*(pSVar1->klass->vtable)._10_SanitizeValue.methodPtr)((pSVar1->fields).DefaultValue);
  (pSVar1->fields)._value = fVar2;
  return;
}


// Settings.TypedSetting<Vector3>$$.ctor
// il2cpp: void Settings_TypedSetting_Vector3____ctor (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o defaultValue, const MethodInfo_2A242E0* method);
// 0x2b242e0

void Settings_TypedSetting_Vector3____ctor_2a242e0
               (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o defaultValue,
               MethodInfo_2A242E0 *method)

{
  undefined4 uVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  Settings_TypedSetting_Vector3__o *pSVar3;
  float fVar4;
  float local_18;
  
  fVar4 = defaultValue.fields.z;
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  local_18 = defaultValue.fields.x;
  pSVar3 = __this;
  uVar2 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (local_18,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue.fields.x = (float)(int)uVar2;
  (__this->fields).DefaultValue.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).DefaultValue.fields.z = fVar4;
  if (__this != (Settings_TypedSetting_Vector3__o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar1 = (pSVar3->fields).DefaultValue.fields.x;
  fVar4 = (pSVar3->fields).DefaultValue.fields.z;
  uVar2 = (*(pSVar3->klass->vtable)._10_SanitizeValue.methodPtr)(uVar1);
  (pSVar3->fields)._value.fields.x = (float)(int)uVar2;
  (pSVar3->fields)._value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (pSVar3->fields)._value.fields.z = fVar4;
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, const MethodInfo_2A24520* method);
// 0x2b24520

void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor_2a24520
               (Settings_TypedSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,MethodInfo_2A24520 *method)

{
  long lVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *__n;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *__dest;
  undefined8 *puVar9;
  long lVar10;
  Settings_TypedSetting_T__o *pSVar11;
  ulong __n_00;
  void *pvVar12;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 auStack_98 [2];
  size_t asStack_88 [5];
  undefined8 uStack_60;
  void *local_58 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  void *local_40;
  char *local_38;
  
  pvVar7 = defaultValue.monitor;
  local_38 = (char *)(ulong)*(uint *)(*(long *)(*(long *)(*(long *)((long)pvVar7 + 0x20) + 0xc0) + 8) + 0xfc);
  puVar8 = (undefined8 *)((long)local_58 - ((ulong)(local_38 + 0xf) & 0xfffffffffffffff0));
  pvVar12 = (void *)((long)puVar8 - ((ulong)(local_38 + 0xf) & 0xfffffffffffffff0));
  local_48 = defaultValue.klass;
  *(undefined8 *)((long)pvVar12 + -8) = 0x2b24578;
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  __n = local_38;
  lVar1 = *(long *)((long)pvVar7 + 0x20);
  __src = defaultValue.klass;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
  }
  local_40 = pvVar7;
  *(undefined8 *)((long)pvVar12 + -8) = 0x2b245a9;
  memcpy(puVar8,__src,(size_t)__n);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    puVar8 = (undefined8 *)*puVar8;
  }
  pMVar2 = (__this->klass->vtable)._10_SanitizeValue.method;
  pIVar3 = pMVar2->virtualMethodPointer;
  pIVar4 = pMVar2->invoker_method;
  local_58[0] = puVar8;
  local_58[1] = pvVar12;
  *(undefined8 *)((long)pvVar12 + -8) = 0x2b245e1;
  (*pIVar4)(pIVar3,pMVar2,__this,local_58,pvVar12);
  lVar10 = *(long *)(**(long **)(*(long *)((long)local_40 + 0x20) + 0xc0) + 0x80);
  *(undefined8 *)((long)pvVar12 + -8) = 0x2b24608;
  pSVar11 = __this;
  il2cpp_runtime_helper_022b2970(__this,lVar10,pvVar12,(ulong)__n & 0xffffffff);
  if (__this != (Settings_TypedSetting_T__o *)0x0) {
    pMVar2 = (__this->klass->vtable)._4_SetDefault.method;
    pIVar3 = (__this->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)pvVar12 + -8) = 0x2b24621;
    (*pIVar3)(__this,pMVar2);
    return;
  }
  *(undefined8 *)((long)pvVar12 + -8) = 0x2b24635;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)((long)pvVar12 + -8) = &stack0xfffffffffffffff8;
  *(long *)((long)pvVar12 + -0x10) = lVar1;
  *(char **)((long)pvVar12 + -0x18) = __n;
  *(undefined8 *)((long)pvVar12 + -0x20) = 0;
  *(undefined8 **)((long)pvVar12 + -0x28) = puVar8;
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 8) + 0xfc);
  __dest = (undefined8 *)((long)pvVar12 + (-0x38 - (__n_00 + 0xf & 0xfffffffffffffff0)));
  __dest[-1] = 0x2b2468c;
  pvVar7 = (void *)il2cpp_runtime_helper_02338550();
  __dest[-1] = 0x2b2469a;
  memcpy(__dest,pvVar7,__n_00);
  lVar1 = *(long *)(*(long *)(lVar10 + 0x20) + 0xc0);
  puVar8 = *(undefined8 **)(lVar1 + 0x18);
  uVar5 = *puVar8;
  puVar9 = __dest;
  if (-1 < *(int *)(*(long *)(lVar1 + 8) + 0x28)) {
    puVar9 = (undefined8 *)*__dest;
  }
  *(undefined8 **)((long)pvVar12 + -0x30) = puVar9;
  pcVar6 = (code *)puVar8[2];
  __dest[-1] = 0x2b246ca;
  (*pcVar6)(uVar5,puVar8,pSVar11,(long)pvVar12 + -0x30,puVar9);
  return;
}


// Settings.TypedSetting<bool>$$SetDefault
// il2cpp: void Settings_TypedSetting_bool___SetDefault (Settings_TypedSetting_bool__o* __this, const MethodInfo_2A23F10* method);
// 0x2b23f10

void Settings_TypedSetting_bool___SetDefault(Settings_TypedSetting_bool__o *__this,MethodInfo_2A23F10 *method)

{
  undefined1 uVar1;
  
  uVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,(ulong)(byte)(__this->fields).DefaultValue,
                     (__this->klass->vtable)._10_SanitizeValue.method);
  *(undefined1 *)((long)&(__this->fields).DefaultValue + 1) = uVar1;
  return;
}


// Settings.TypedSetting<int>$$SetDefault
// il2cpp: void Settings_TypedSetting_int___SetDefault (Settings_TypedSetting_int__o* __this, const MethodInfo_2A24020* method);
// 0x2b24020

void Settings_TypedSetting_int___SetDefault(Settings_TypedSetting_int__o *__this,MethodInfo_2A24020 *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,(ulong)(uint)(__this->fields).DefaultValue,
                     (__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$SetDefault
// il2cpp: void Settings_TypedSetting_object___SetDefault (Settings_TypedSetting_T__o* __this, const MethodInfo_2A24130* method);
// 0x2b24130

void Settings_TypedSetting_object___SetDefault(Settings_TypedSetting_T__o *__this,MethodInfo_2A24130 *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (Il2CppObject *)
           (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this,(__this->fields).DefaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = pIVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._value,pIVar1);
  return;
}


// Settings.TypedSetting<float>$$SetDefault
// il2cpp: void Settings_TypedSetting_float___SetDefault (Settings_TypedSetting_float__o* __this, const MethodInfo_2A24240* method);
// 0x2b24240

void Settings_TypedSetting_float___SetDefault
               (Settings_TypedSetting_float__o *__this,MethodInfo_2A24240 *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                           ((__this->fields).DefaultValue,__this,
                            (__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields)._value = fVar1;
  return;
}


// Settings.TypedSetting<Vector3>$$SetDefault
// il2cpp: void Settings_TypedSetting_Vector3___SetDefault (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_2A24350* method);
// 0x2b24350

void Settings_TypedSetting_Vector3___SetDefault
               (Settings_TypedSetting_Vector3__o *__this,MethodInfo_2A24350 *method)

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
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType___SetDefault (Settings_TypedSetting_T__o* __this, const MethodInfo_2A24640* method);
// 0x2b24640

void Settings_TypedSetting___Il2CppFullySharedGenericType___SetDefault
               (Settings_TypedSetting_T__o *__this,MethodInfo_2A24640 *method)

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
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x2b2468c;
  pvVar6 = (void *)il2cpp_runtime_helper_02338550(__this,pvVar6);
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x2b2469a;
  memcpy(__dest,pvVar6,__n);
  pSVar1 = method->klass->rgctx_data;
  pMVar2 = pSVar1->_3_Settings_TypedSetting_T__set_Value;
  pIVar3 = pMVar2->methodPointer;
  if (-1 < (int)(pSVar1->_1_T->_1).byval_arg.bits) {
    __dest = (undefined8 *)*__dest;
  }
  pIVar4 = pMVar2->invoker_method;
  apuStack_40[2] = __dest;
  *(undefined8 *)((long)apuStack_40 + lVar5) = 0x2b246ca;
  (*pIVar4)(pIVar3,pMVar2,__this,apuStack_40 + 2,__dest);
  return;
}


// Settings.TypedSetting<bool>$$SanitizeValue
// il2cpp: bool Settings_TypedSetting_bool___SanitizeValue (Settings_TypedSetting_bool__o* __this, bool value, const MethodInfo_2A23F30* method);
// 0x2b23f30

bool_conflict
Settings_TypedSetting_bool___SanitizeValue
          (Settings_TypedSetting_bool__o *__this,bool_conflict value,MethodInfo_2A23F30 *method)

{
  return value;
}


// Settings.TypedSetting<int>$$SanitizeValue
// il2cpp: int32_t Settings_TypedSetting_int___SanitizeValue (Settings_TypedSetting_int__o* __this, int32_t value, const MethodInfo_2A24040* method);
// 0x2b24040

int32_t Settings_TypedSetting_int___SanitizeValue
                  (Settings_TypedSetting_int__o *__this,int32_t value,MethodInfo_2A24040 *method)

{
  return value;
}


// Settings.TypedSetting<object>$$SanitizeValue
// il2cpp: Il2CppObject* Settings_TypedSetting_object___SanitizeValue (Settings_TypedSetting_T__o* __this, Il2CppObject* value, const MethodInfo_2A24160* method);
// 0x2b24160

Il2CppObject *
Settings_TypedSetting_object___SanitizeValue
          (Settings_TypedSetting_T__o *__this,Il2CppObject *value,MethodInfo_2A24160 *method)

{
  return value;
}


// Settings.TypedSetting<float>$$SanitizeValue
// il2cpp: float Settings_TypedSetting_float___SanitizeValue (Settings_TypedSetting_float__o* __this, float value, const MethodInfo_2A24260* method);
// 0x2b24260

float Settings_TypedSetting_float___SanitizeValue
                (Settings_TypedSetting_float__o *__this,float value,MethodInfo_2A24260 *method)

{
  return value;
}


// Settings.TypedSetting<Vector3>$$SanitizeValue
// il2cpp: UnityEngine_Vector3_o Settings_TypedSetting_Vector3___SanitizeValue (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, const MethodInfo_2A24380* method);
// 0x2b24380

UnityEngine_Vector3_o
Settings_TypedSetting_Vector3___SanitizeValue
          (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o value,MethodInfo_2A24380 *method)

{
  return (UnityEngine_Vector3_o)value.fields;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SanitizeValue
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Settings_TypedSetting___Il2CppFullySharedGenericType___SanitizeValue (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_2A246E0* method);
// 0x2b246e0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Settings_TypedSetting___Il2CppFullySharedGenericType___SanitizeValue
          (Settings_TypedSetting_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
          MethodInfo_2A246E0 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar2) = 0x2b2472f;
  memcpy((undefined1 *)((long)&stack0xffffffffffffffd8 + lVar2),__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar2) = 0x2b2473d;
  UVar3.klass = memcpy(value.monitor,(undefined1 *)((long)&stack0xffffffffffffffd8 + lVar2),__n);
  UVar3.monitor = extraout_RDX;
  return UVar3;
}


// Settings.TypedSetting<bool>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_bool___ToString (Settings_TypedSetting_bool__o* __this, const MethodInfo_2A23F40* method);
// 0x2b23f40

System_String_o *
Settings_TypedSetting_bool___ToString(Settings_TypedSetting_bool__o *__this,MethodInfo_2A23F40 *method)

{
  System_String_o *pSVar1;
  undefined1 local_9;
  
  local_9 = *(undefined1 *)((long)&(__this->fields).DefaultValue + 1);
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_Boolean__ToString
                     ((bool_conflict)&local_9,
                      (MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<int>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_int___ToString (Settings_TypedSetting_int__o* __this, const MethodInfo_2A24050* method);
// 0x2b24050

System_String_o *
Settings_TypedSetting_int___ToString(Settings_TypedSetting_int__o *__this,MethodInfo_2A24050 *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  pSVar1 = System_Int32__ToString
                     ((int32_t)auStack_4,
                      (MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<object>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_object___ToString (Settings_TypedSetting_T__o* __this, const MethodInfo_2A24170* method);
// 0x2b24170

System_String_o *
Settings_TypedSetting_object___ToString(Settings_TypedSetting_T__o *__this,MethodInfo_2A24170 *method)

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pIVar1 = (__this->fields)._value;
  if (pIVar1 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar1->klass->vtable[3].methodPtr;
    pSVar2 = (System_String_o *)
             (*vtableDispatch)(pIVar1,pIVar1->klass->vtable[3].method,in_RDX,vtableDispatch);
    return pSVar2;
  }
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar2;
}


// Settings.TypedSetting<float>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_float___ToString (Settings_TypedSetting_float__o* __this, const MethodInfo_2A24270* method);
// 0x2b24270

System_String_o *
Settings_TypedSetting_float___ToString(Settings_TypedSetting_float__o *__this,MethodInfo_2A24270 *method)

{
  System_String_o *pSVar1;
  float in_XMM0_Da;
  
  pSVar1 = System_Single__ToString(in_XMM0_Da,(MethodInfo *)&stack0xfffffffffffffffc);
  return pSVar1;
}


// Settings.TypedSetting<Vector3>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_Vector3___ToString (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_2A24390* method);
// 0x2b24390

System_String_o *
Settings_TypedSetting_Vector3___ToString(Settings_TypedSetting_Vector3__o *__this,MethodInfo_2A24390 *method)

{
  System_String_o *pSVar1;
  undefined8 local_10;
  float local_8;
  
  local_10._0_4_ = (__this->fields)._value.fields.x;
  local_10._4_4_ = (__this->fields)._value.fields.y;
  local_8 = (__this->fields)._value.fields.z;
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_024865e0(&local_10,0,0,0);
  return pSVar1;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting___Il2CppFullySharedGenericType___ToString (Settings_TypedSetting_T__o* __this, const MethodInfo_2A24750* method);
// 0x2b24750

System_String_o *
Settings_TypedSetting___Il2CppFullySharedGenericType___ToString
          (Settings_TypedSetting_T__o *__this,MethodInfo_2A24750 *method)

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
    uStack_50 = 0x2b2478f;
    lVar8 = il2cpp_runtime_helper_023009c0();
    uVar7 = *(uint *)(lVar8 + 0xfc);
    pSVar12 = method->klass;
  }
  lVar8 = (long)&local_48 - ((ulong)(uVar7 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = (System_String_o *)(lVar8 - uVar9);
  __s = (void *)((long)__src - uVar9);
  local_48.klass = (System_String_c *)method;
  *(undefined8 *)((long)__s + -8) = 0x2b247d8;
  memset(__s,0,__n);
  pvVar6 = local_48.monitor;
  pMVar1 = pSVar12->rgctx_data->_4_Settings_TypedSetting_T__get_Value;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_48.fields = (System_String_Fields)__src;
  *(undefined8 *)((long)__s + -8) = 0x2b247f8;
  (*pIVar3)(pIVar2,pMVar1,pvVar6,(void **)&local_48.fields,__src);
  pSVar5 = local_48.klass;
  *(undefined8 *)((long)__s + -8) = 0x2b2480a;
  memcpy(__s,__src,__n);
  pSVar11 = ((pSVar5->_1).byval_arg.data)->rgctx_data;
  pIVar10 = pSVar11->_1_T;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x2b24827;
    pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    pSVar11 = ((pSVar5->_1).byval_arg.data)->rgctx_data;
  }
  pIVar4 = pSVar11[1]._0_Settings_TypedSetting_T_;
  *(undefined8 *)((long)__s + -8) = 0x2b2484b;
  il2cpp_runtime_helper_022b35c0(pIVar10,pIVar4,lVar8,__s,0,&local_48.fields);
  return (System_String_o *)local_48.fields;
}


