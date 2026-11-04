// Type: Settings.TypedSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/TypedSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/TypedSetting.cs
// --------------------------------

// Settings.TypedSetting<bool>$$get_Value
// il2cpp: bool Settings_TypedSetting_bool___get_Value (Settings_TypedSetting_bool__o* __this, const MethodInfo_E8F450* method);
// 0x180e8f450

bool
Settings_TypedSetting_bool___get_Value(Settings_TypedSetting_bool__o* __this, MethodInfo_E8F450* method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<int>$$get_Value
// il2cpp: int32_t Settings_TypedSetting_int___get_Value (Settings_TypedSetting_int__o* __this, const MethodInfo_D23EC0* method);
// 0x180d23ec0

int32_t
Settings_TypedSetting_int___get_Value(Settings_TypedSetting_int__o* __this, MethodInfo_D23EC0* method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<object>$$get_Value
// il2cpp: Il2CppObject* Settings_TypedSetting_object___get_Value (Settings_TypedSetting_T__o* __this, const MethodInfo_5852B0* method);
// 0x1805852b0

Il2CppObject*
Settings_TypedSetting_object___get_Value(Settings_TypedSetting_T__o* __this, MethodInfo_5852B0* method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<float>$$get_Value
// il2cpp: float Settings_TypedSetting_float___get_Value (Settings_TypedSetting_float__o* __this, const MethodInfo_E8F460* method);
// 0x180e8f460

float
Settings_TypedSetting_float___get_Value(Settings_TypedSetting_float__o* __this, MethodInfo_E8F460* method)

{
  return (__this->fields)._value;
}


// Settings.TypedSetting<Vector3>$$get_Value
// il2cpp: UnityEngine_Vector3_o Settings_TypedSetting_Vector3___get_Value (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_E8F470* method);
// 0x180e8f470

UnityEngine_Vector3_o *
Settings_TypedSetting_Vector3___get_Value
          (UnityEngine_Vector3_o *__return_storage_ptr__,Settings_TypedSetting_Vector3__o *__this,
          MethodInfo_E8F470 *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields)._value.fields.z;
  fVar2 = (__this->fields)._value.fields.y;
  (__return_storage_ptr__->fields).x = (__this->fields)._value.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Settings_TypedSetting___Il2CppFullySharedGenericType___get_Value (Settings_TypedSetting_T__o* __this, const MethodInfo_B131A0* method);
// 0x180b131a0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Settings_TypedSetting___Il2CppFullySharedGenericType___get_Value(Settings_TypedSetting_T__o* __this, MethodInfo_B131A0* method)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar4;
  ulonglong size;
  undefined8 auStack_50 [5];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_T->_2).stack_slot_size;
  uVar2 = size + 0xf;
  if (uVar2 <= size) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x180b131e7;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  pvVar3 = (method->klass->rgctx_data->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180b13210;
  pvVar3 = il2cpp_codegen_get_instance_field_data_pointer
                     (__return_storage_ptr__,(void *)((longlong)pvVar3 + 0x20));
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180b1321e;
  memcpy(&stack0xffffffffffffffd8 + lVar1,pvVar3,size);
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180b1322c;
  pUVar4 = memcpy(__this,&stack0xffffffffffffffd8 + lVar1,size);
  return pUVar4;
}


// Settings.TypedSetting<bool>$$set_Value
// il2cpp: void Settings_TypedSetting_bool___set_Value (Settings_TypedSetting_bool__o* __this, bool value, const MethodInfo_E8F540* method);
// 0x180e8f540

void Settings_TypedSetting_bool___set_Value
               (Settings_TypedSetting_bool__o *__this,bool value,MethodInfo_E8F540 *method)

{
  bool bVar1;
  
  bVar1 = (bool)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                          (__this,value,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = bVar1;
  return;
}


// Settings.TypedSetting<int>$$set_Value
// il2cpp: void Settings_TypedSetting_int___set_Value (Settings_TypedSetting_int__o* __this, int32_t value, const MethodInfo_E8F570* method);
// 0x180e8f570

void Settings_TypedSetting_int___set_Value
               (Settings_TypedSetting_int__o *__this,int32_t value,MethodInfo_E8F570 *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,value,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$set_Value
// il2cpp: void Settings_TypedSetting_object___set_Value (Settings_TypedSetting_T__o* __this, Il2CppObject* value, const MethodInfo_E8F4C0* method);
// 0x180e8f4c0

void Settings_TypedSetting_object___set_Value
               (Settings_TypedSetting_T__o *__this,Il2CppObject *value,MethodInfo_E8F4C0 *method)

{
  Il2CppObject *value_00;
  
  value_00 = (Il2CppObject *)
             (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                       (__this,value,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value,value_00);
  return;
}


// Settings.TypedSetting<float>$$set_Value
// il2cpp: void Settings_TypedSetting_float___set_Value (Settings_TypedSetting_float__o* __this, float value, const MethodInfo_E8F490* method);
// 0x180e8f490

void Settings_TypedSetting_float___set_Value
               (Settings_TypedSetting_float__o *__this,float value,MethodInfo_E8F490 *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                           (__this,value,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = fVar1;
  return;
}


// Settings.TypedSetting<Vector3>$$set_Value
// il2cpp: void Settings_TypedSetting_Vector3___set_Value (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, const MethodInfo_E8F4F0* method);
// 0x180e8f4f0

void Settings_TypedSetting_Vector3___set_Value
               (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o *value,
               MethodInfo_E8F4F0 *method)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  float local_20;
  undefined1 local_18 [16];
  
  local_28._0_4_ = (value->fields).x;
  local_28._4_4_ = (value->fields).y;
  local_20 = (value->fields).z;
  puVar3 = (undefined8 *)
           (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                     (local_18,__this,&local_28,(__this->klass->vtable)._11_SanitizeValue.method);
  uVar1 = *puVar3;
  fVar2 = *(float *)(puVar3 + 1);
  (__this->fields)._value.fields.x = (float)(int)uVar1;
  (__this->fields)._value.fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (__this->fields)._value.fields.z = fVar2;
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType___set_Value (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_E8F5A0* method);
// 0x180e8f5a0

void Settings_TypedSetting___Il2CppFullySharedGenericType___set_Value
               (Settings_TypedSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,MethodInfo_E8F5A0 *method)

{
  longlong lVar1;
  uint uVar2;
  Settings_TypedSetting_T__c *pSVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  InvokerMethod pIVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  undefined8 *destination;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res10;
  undefined8 auStack_80 [5];
  longlong alStack_58 [2];
  void *local_48;
  longlong local_40;
  
  uVar2 = (method->klass->rgctx_data->_1_T->_2).stack_slot_size;
  size = (ulonglong)uVar2;
  uVar10 = size + 0xf;
  if (uVar10 <= size) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x180e8f5f3;
  lVar8 = -(uVar10 & 0xfffffffffffffff0);
  uVar10 = size + 0xf;
  destination = (undefined8 *)((longlong)&local_48 + lVar8);
  if (uVar10 <= size) {
    uVar10 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar8) = 0x180e8f610;
  lVar9 = -(uVar10 & 0xfffffffffffffff0);
  lVar1 = (longlong)&local_48 + lVar9 + lVar8;
  source = &local_res10;
  if ((int)(method->klass->rgctx_data->_1_T->_1).byval_arg.bits < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8) = 0x180e8f63e;
  local_res10.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  memcpy(destination,source,size);
  if (-1 < (int)(method->klass->rgctx_data->_1_T->_1).byval_arg.bits) {
    destination = (undefined8 *)*destination;
  }
  pSVar3 = __this->klass;
  local_48 = destination;
  local_40 = lVar1;
  *(longlong *)((longlong)alStack_58 + lVar9 + lVar8) = lVar1;
  pMVar4 = (pSVar3->vtable)._11_SanitizeValue.method;
  pIVar5 = pMVar4->virtualMethodPointer;
  pIVar6 = pMVar4->invoker_method;
  *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8) = 0x180e8f683;
  (*pIVar6)(pIVar5,pMVar4,__this,&local_48,*(void **)((longlong)alStack_58 + lVar9 + lVar8));
  pvVar7 = (method->klass->rgctx_data->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8) = 0x180e8f6aa;
  il2cpp_runtime_helper_180417320(__this,(longlong)pvVar7 + 0x20,lVar1,uVar2);
  return;
}


// Settings.TypedSetting<bool>$$.ctor
// il2cpp: void Settings_TypedSetting_bool____ctor (Settings_TypedSetting_bool__o* __this, const MethodInfo_E8F180* method);
// 0x180e8f180

void
Settings_TypedSetting_bool____ctor(Settings_TypedSetting_bool__o* __this, MethodInfo_E8F180* method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<int>$$.ctor
// il2cpp: void Settings_TypedSetting_int____ctor (Settings_TypedSetting_int__o* __this, const MethodInfo_E8F180* method);
// 0x180e8f180

void
Settings_TypedSetting_int____ctor(Settings_TypedSetting_int__o* __this, MethodInfo_E8F180* method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<object>$$.ctor
// il2cpp: void Settings_TypedSetting_object____ctor (Settings_TypedSetting_T__o* __this, const MethodInfo_E8F180* method);
// 0x180e8f180

void
Settings_TypedSetting_object____ctor(Settings_TypedSetting_T__o* __this, MethodInfo_E8F180* method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<float>$$.ctor
// il2cpp: void Settings_TypedSetting_float____ctor (Settings_TypedSetting_float__o* __this, const MethodInfo_E8F180* method);
// 0x180e8f180

void
Settings_TypedSetting_float____ctor(Settings_TypedSetting_float__o* __this, MethodInfo_E8F180* method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<Vector3>$$.ctor
// il2cpp: void Settings_TypedSetting_Vector3____ctor (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_E8F180* method);
// 0x180e8f180

void
Settings_TypedSetting_Vector3____ctor(Settings_TypedSetting_Vector3__o* __this, MethodInfo_E8F180* method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor (Settings_TypedSetting_T__o* __this, const MethodInfo_E8F180* method);
// 0x180e8f180

void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
               (Settings_TypedSetting_T__o *__this,MethodInfo_E8F180 *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.TypedSetting<bool>$$.ctor
// il2cpp: void Settings_TypedSetting_bool____ctor (Settings_TypedSetting_bool__o* __this, bool defaultValue, const MethodInfo_E8F2C0* method);
// 0x180e8f2c0

void Settings_TypedSetting_bool____ctor_e8f2c0
               (Settings_TypedSetting_bool__o *__this,bool defaultValue,MethodInfo_E8F2C0 *method)

{
  bool bVar1;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  bVar1 = (bool)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                          (__this,(ulonglong)defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = bVar1;
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.TypedSetting<int>$$.ctor
// il2cpp: void Settings_TypedSetting_int____ctor (Settings_TypedSetting_int__o* __this, int32_t defaultValue, const MethodInfo_E8F1F0* method);
// 0x180e8f1f0

void Settings_TypedSetting_int____ctor_e8f1f0
               (Settings_TypedSetting_int__o *__this,int32_t defaultValue,MethodInfo_E8F1F0 *method)

{
  int32_t iVar1;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  iVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,(ulonglong)(uint)defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = iVar1;
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.TypedSetting<object>$$.ctor
// il2cpp: void Settings_TypedSetting_object____ctor (Settings_TypedSetting_T__o* __this, Il2CppObject* defaultValue, const MethodInfo_E8F190* method);
// 0x180e8f190

void Settings_TypedSetting_object____ctor_e8f190
               (Settings_TypedSetting_T__o *__this,Il2CppObject *defaultValue,MethodInfo_E8F190 *method)

{
  Il2CppObject *value;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  value = (Il2CppObject *)
          (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue,value);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.TypedSetting<float>$$.ctor
// il2cpp: void Settings_TypedSetting_float____ctor (Settings_TypedSetting_float__o* __this, float defaultValue, const MethodInfo_E8F120* method);
// 0x180e8f120

void Settings_TypedSetting_float____ctor_e8f120
               (Settings_TypedSetting_float__o *__this,float defaultValue,MethodInfo_E8F120 *method)

{
  Settings_TypedSetting_float__c *pSVar1;
  float fVar2;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  fVar2 = (float)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                           (__this,defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  pSVar1 = __this->klass;
  (__this->fields).DefaultValue = fVar2;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(__this,(pSVar1->vtable)._4_SetDefault.method);
  return;
}


// Settings.TypedSetting<Vector3>$$.ctor
// il2cpp: void Settings_TypedSetting_Vector3____ctor (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o defaultValue, const MethodInfo_E8F240* method);
// 0x180e8f240

void Settings_TypedSetting_Vector3____ctor_e8f240
               (Settings_TypedSetting_Vector3__o *__this,UnityEngine_Vector3_o *defaultValue,
               MethodInfo_E8F240 *method)

{
  undefined8 uVar1;
  float fVar2;
  Settings_TypedSetting_Vector3__c *pSVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  float local_20;
  undefined1 local_18 [16];
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  local_28._0_4_ = (defaultValue->fields).x;
  local_28._4_4_ = (defaultValue->fields).y;
  local_20 = (defaultValue->fields).z;
  puVar4 = (undefined8 *)
           (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                     (local_18,__this,&local_28,(__this->klass->vtable)._11_SanitizeValue.method);
  fVar2 = *(float *)(puVar4 + 1);
  uVar1 = *puVar4;
  pSVar3 = __this->klass;
  (__this->fields).DefaultValue.fields.x = (float)(int)uVar1;
  (__this->fields).DefaultValue.fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (__this->fields).DefaultValue.fields.z = fVar2;
  (*(pSVar3->vtable)._4_SetDefault.methodPtr)(__this,(pSVar3->vtable)._4_SetDefault.method);
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, const MethodInfo_E8F310* method);
// 0x180e8f310

void Settings_TypedSetting___Il2CppFullySharedGenericType____ctor_e8f310
               (Settings_TypedSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *defaultValue,MethodInfo_E8F310 *method)

{
  longlong lVar1;
  uint uVar2;
  Settings_TypedSetting_T__c *pSVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  InvokerMethod pIVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  undefined8 *destination;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res10;
  undefined8 auStack_70 [5];
  longlong alStack_48 [2];
  void *local_38;
  longlong local_30;
  
  uVar2 = (method->klass->rgctx_data->_1_T->_2).stack_slot_size;
  size = (ulonglong)uVar2;
  uVar10 = size + 0xf;
  if (uVar10 <= size) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x180e8f36b;
  lVar8 = -(uVar10 & 0xfffffffffffffff0);
  uVar10 = size + 0xf;
  destination = (undefined8 *)((longlong)&local_38 + lVar8);
  if (uVar10 <= size) {
    uVar10 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar8) = 0x180e8f388;
  lVar9 = -(uVar10 & 0xfffffffffffffff0);
  lVar1 = (longlong)&local_38 + lVar9 + lVar8;
  *(undefined8 *)((longlong)auStack_70 + lVar9 + lVar8) = 0x180e8f39a;
  local_res10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)defaultValue;
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res10;
  if ((int)(method->klass->rgctx_data->_1_T->_1).byval_arg.bits < 0) {
    source = defaultValue;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar9 + lVar8) = 0x180e8f3c0;
  memcpy(destination,source,size);
  if (-1 < (int)(method->klass->rgctx_data->_1_T->_1).byval_arg.bits) {
    destination = (undefined8 *)*destination;
  }
  pSVar3 = __this->klass;
  local_38 = destination;
  local_30 = lVar1;
  *(longlong *)((longlong)alStack_48 + lVar9 + lVar8) = lVar1;
  pMVar4 = (pSVar3->vtable)._11_SanitizeValue.method;
  pIVar5 = pMVar4->virtualMethodPointer;
  pIVar6 = pMVar4->invoker_method;
  *(undefined8 *)((longlong)auStack_70 + lVar9 + lVar8) = 0x180e8f405;
  (*pIVar6)(pIVar5,pMVar4,__this,&local_38,*(void **)((longlong)alStack_48 + lVar9 + lVar8));
  pvVar7 = (method->klass->rgctx_data->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)((longlong)auStack_70 + lVar9 + lVar8) = 0x180e8f428;
  il2cpp_runtime_helper_180417320(__this,pvVar7,lVar1,uVar2);
  pMVar4 = (__this->klass->vtable)._4_SetDefault.method;
  pIVar5 = (__this->klass->vtable)._4_SetDefault.methodPtr;
  *(undefined8 *)((longlong)auStack_70 + lVar9 + lVar8) = 0x180e8f43b;
  (*pIVar5)(__this,pMVar4);
  return;
}


// Settings.TypedSetting<bool>$$SetDefault
// il2cpp: void Settings_TypedSetting_bool___SetDefault (Settings_TypedSetting_bool__o* __this, const MethodInfo_E8ED70* method);
// 0x180e8ed70

void Settings_TypedSetting_bool___SetDefault(Settings_TypedSetting_bool__o *__this,MethodInfo_E8ED70 *method)

{
  bool bVar1;
  
  bVar1 = (bool)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                          (__this,(ulonglong)(__this->fields).DefaultValue,
                           (__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = bVar1;
  return;
}


// Settings.TypedSetting<int>$$SetDefault
// il2cpp: void Settings_TypedSetting_int___SetDefault (Settings_TypedSetting_int__o* __this, const MethodInfo_E8EBE0* method);
// 0x180e8ebe0

void Settings_TypedSetting_int___SetDefault(Settings_TypedSetting_int__o *__this,MethodInfo_E8EBE0 *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,(ulonglong)(uint)(__this->fields).DefaultValue,
                     (__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = iVar1;
  return;
}


// Settings.TypedSetting<object>$$SetDefault
// il2cpp: void Settings_TypedSetting_object___SetDefault (Settings_TypedSetting_T__o* __this, const MethodInfo_E8EBA0* method);
// 0x180e8eba0

void Settings_TypedSetting_object___SetDefault(Settings_TypedSetting_T__o *__this,MethodInfo_E8EBA0 *method)

{
  Il2CppObject *value;
  
  value = (Il2CppObject *)
          (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,(__this->fields).DefaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value,value);
  return;
}


// Settings.TypedSetting<float>$$SetDefault
// il2cpp: void Settings_TypedSetting_float___SetDefault (Settings_TypedSetting_float__o* __this, const MethodInfo_E8ECF0* method);
// 0x180e8ecf0

void Settings_TypedSetting_float___SetDefault
               (Settings_TypedSetting_float__o *__this,MethodInfo_E8ECF0 *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                           (__this,(__this->fields).DefaultValue,
                            (__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields)._value = fVar1;
  return;
}


// Settings.TypedSetting<Vector3>$$SetDefault
// il2cpp: void Settings_TypedSetting_Vector3___SetDefault (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_E8ED20* method);
// 0x180e8ed20

void Settings_TypedSetting_Vector3___SetDefault
               (Settings_TypedSetting_Vector3__o *__this,MethodInfo_E8ED20 *method)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  float local_20;
  undefined1 local_18 [16];
  
  local_28._0_4_ = (__this->fields).DefaultValue.fields.x;
  local_28._4_4_ = (__this->fields).DefaultValue.fields.y;
  local_20 = (__this->fields).DefaultValue.fields.z;
  puVar3 = (undefined8 *)
           (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                     (local_18,__this,&local_28,(__this->klass->vtable)._11_SanitizeValue.method);
  uVar1 = *puVar3;
  fVar2 = *(float *)(puVar3 + 1);
  (__this->fields)._value.fields.x = (float)(int)uVar1;
  (__this->fields)._value.fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (__this->fields)._value.fields.z = fVar2;
  return;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SetDefault
// il2cpp: void Settings_TypedSetting___Il2CppFullySharedGenericType___SetDefault (Settings_TypedSetting_T__o* __this, const MethodInfo_E8EC10* method);
// 0x180e8ec10

void Settings_TypedSetting___Il2CppFullySharedGenericType___SetDefault
               (Settings_TypedSetting_T__o *__this,MethodInfo_E8EC10 *method)

{
  Settings_TypedSetting_T__c *pSVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  undefined8 *destination;
  ulonglong size;
  void *local_res10;
  undefined8 auStack_50 [5];
  undefined8 auStack_28 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_T->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x180e8ec5d;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  destination = (undefined8 *)(&stack0xffffffffffffffe8 + lVar5);
  pvVar7 = (method->klass->rgctx_data->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)((longlong)auStack_50 + lVar5) = 0x180e8ec82;
  pvVar7 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar7);
  *(undefined8 *)((longlong)auStack_50 + lVar5) = 0x180e8ec90;
  memcpy(destination,pvVar7,size);
  if (-1 < (int)(method->klass->rgctx_data->_1_T->_1).byval_arg.bits) {
    destination = (undefined8 *)*destination;
  }
  pSVar1 = method->klass;
  *(undefined8 **)((longlong)auStack_28 + lVar5) = destination;
  pMVar2 = pSVar1->rgctx_data->_3_Settings_TypedSetting_T__set_Value;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_50 + lVar5) = 0x180e8ecd5;
  local_res10 = destination;
  (*pIVar4)(pIVar3,pMVar2,__this,&local_res10,*(void **)((longlong)auStack_28 + lVar5));
  return;
}


// Settings.TypedSetting<bool>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_bool___GetDefaultValue (Settings_TypedSetting_bool__o* __this, const MethodInfo_E8EAA0* method);
// 0x180e8eaa0

Il2CppObject *
Settings_TypedSetting_bool___GetDefaultValue(Settings_TypedSetting_bool__o *__this,MethodInfo_E8EAA0 *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  local_res8[0] = (__this->fields).DefaultValue;
  pIVar1 = il2cpp_value_box(method->klass->rgctx_data->_1_T,local_res8);
  return pIVar1;
}


// Settings.TypedSetting<int>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_int___GetDefaultValue (Settings_TypedSetting_int__o* __this, const MethodInfo_E8EB00* method);
// 0x180e8eb00

Il2CppObject*
Settings_TypedSetting_int___GetDefaultValue(Settings_TypedSetting_int__o* __this, MethodInfo_E8EB00* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)&(__this->fields).current;
  pIVar1 = il2cpp_value_box(method->klass->rgctx_data->_1_T,local_res8);
  return pIVar1;
}


// Settings.TypedSetting<object>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_object___GetDefaultValue (Settings_TypedSetting_T__o* __this, const MethodInfo_573E90* method);
// 0x180573e90

Il2CppObject*
Settings_TypedSetting_object___GetDefaultValue(Settings_TypedSetting_T__o* __this, MethodInfo_573E90* method)

{
  return (__this->fields).DefaultValue;
}


// Settings.TypedSetting<float>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_float___GetDefaultValue (Settings_TypedSetting_float__o* __this, const MethodInfo_E8EAD0* method);
// 0x180e8ead0

Il2CppObject*
Settings_TypedSetting_float___GetDefaultValue(Settings_TypedSetting_float__o* __this, MethodInfo_E8EAD0* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)&(__this->fields).current;
  pIVar1 = il2cpp_value_box(method->klass->rgctx_data->_1_T,local_res8);
  return pIVar1;
}


// Settings.TypedSetting<Vector3>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting_Vector3___GetDefaultValue (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_E8EB30* method);
// 0x180e8eb30

Il2CppObject*
Settings_TypedSetting_Vector3___GetDefaultValue(Settings_TypedSetting_Vector3__o* __this, MethodInfo_E8EB30* method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)&(*(uint64_t *)((char *)__this + 0x20));
  local_18 = (__this->fields).current;
  pIVar1 = il2cpp_value_box(method->klass->rgctx_data->_1_T,&local_18);
  return pIVar1;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_TypedSetting___Il2CppFullySharedGenericType___GetDefaultValue (Settings_TypedSetting_T__o* __this, const MethodInfo_C8CFB0* method);
// 0x180c8cfb0

Il2CppObject*
Settings_TypedSetting___Il2CppFullySharedGenericType___GetDefaultValue(Settings_TypedSetting_T__o* __this, MethodInfo_C8CFB0* method)

{
  Il2CppClass *klass;
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  Il2CppObject *pIVar4;
  ulonglong size;
  undefined8 auStack_50 [5];
  undefined1 local_28 [8];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_T->_2).stack_slot_size;
  uVar2 = size + 0xf;
  if (uVar2 <= size) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x180c8cff5;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  pvVar3 = (method->klass->rgctx_data->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180c8d01a;
  pvVar3 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar3);
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180c8d028;
  memcpy(local_28 + lVar1,pvVar3,size);
  klass = method->klass->rgctx_data->_1_T;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180c8d03f;
  pIVar4 = il2cpp_value_box(klass,local_28 + lVar1);
  return pIVar4;
}


// Settings.TypedSetting<bool>$$SanitizeValue
// il2cpp: bool Settings_TypedSetting_bool___SanitizeValue (Settings_TypedSetting_bool__o* __this, bool value, const MethodInfo_C8A970* method);
// 0x180c8a970

bool
Settings_TypedSetting_bool___SanitizeValue(Settings_TypedSetting_bool__o* __this, bool value, MethodInfo_C8A970* method)

{
  return value;
}


// Settings.TypedSetting<int>$$SanitizeValue
// il2cpp: int32_t Settings_TypedSetting_int___SanitizeValue (Settings_TypedSetting_int__o* __this, int32_t value, const MethodInfo_C8A8C0* method);
// 0x180c8a8c0

int32_t
Settings_TypedSetting_int___SanitizeValue(Settings_TypedSetting_int__o* __this, int32_t value, MethodInfo_C8A8C0* method)

{
  return value;
}


// Settings.TypedSetting<object>$$SanitizeValue
// il2cpp: Il2CppObject* Settings_TypedSetting_object___SanitizeValue (Settings_TypedSetting_T__o* __this, Il2CppObject* value, const MethodInfo_8E13A0* method);
// 0x1808e13a0

Il2CppObject*
Settings_TypedSetting_object___SanitizeValue(Settings_TypedSetting_T__o* __this, Il2CppObject* value, MethodInfo_8E13A0* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Settings.TypedSetting<float>$$SanitizeValue
// il2cpp: float Settings_TypedSetting_float___SanitizeValue (Settings_TypedSetting_float__o* __this, float value, const MethodInfo_E8EB90* method);
// 0x180e8eb90

float
Settings_TypedSetting_float___SanitizeValue(Settings_TypedSetting_float__o* __this, float value, MethodInfo_E8EB90* method)

{
  return value;
}


// Settings.TypedSetting<Vector3>$$SanitizeValue
// il2cpp: UnityEngine_Vector3_o Settings_TypedSetting_Vector3___SanitizeValue (Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, const MethodInfo_E8EB70* method);
// 0x180e8eb70

UnityEngine_Vector3_o
Settings_TypedSetting_Vector3___SanitizeValue(Settings_TypedSetting_Vector3__o* __this, UnityEngine_Vector3_o value, MethodInfo_E8EB70* method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = (container->fields).m_Position.fields.m_Z;
  iVar2 = (container->fields).m_Position.fields.m_Y;
  (__return_storage_ptr__->fields).m_X = (container->fields).m_Position.fields.m_X;
  (__return_storage_ptr__->fields).m_Y = iVar2;
  (__return_storage_ptr__->fields).m_Z = iVar1;
  return __return_storage_ptr__;
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SanitizeValue
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Settings_TypedSetting___Il2CppFullySharedGenericType___SanitizeValue (Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_C8A980* method);
// 0x180c8a980

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Settings_TypedSetting___Il2CppFullySharedGenericType___SanitizeValue(Settings_TypedSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, MethodInfo_C8A980* method)

{
  longlong lVar1;
  ulonglong uVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar3;
  UnityEngine_Rendering_SerializedDictionary_K__V__o *source;
  ulonglong size;
  UnityEngine_Rendering_SerializedDictionary_K__V__c *local_res10;
  undefined8 auStack_40 [5];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_T->_2).stack_slot_size;
  uVar2 = size + 0xf;
  if (uVar2 <= size) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x180c8a9d1;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  source = (UnityEngine_Rendering_SerializedDictionary_K__V__o *)&local_res10;
  if ((int)(method->klass->rgctx_data->_1_T->_1).byval_arg.bits < 0) {
    source = __this;
  }
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x180c8a9ff;
  local_res10 = (UnityEngine_Rendering_SerializedDictionary_K__V__c *)__this;
  memcpy(&stack0xffffffffffffffe8 + lVar1,source,size);
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x180c8aa0d;
  pUVar3 = memcpy(val,&stack0xffffffffffffffe8 + lVar1,size);
  return pUVar3;
}


// Settings.TypedSetting<bool>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_bool___ToString (Settings_TypedSetting_bool__o* __this, const MethodInfo_E8EF10* method);
// 0x180e8ef10

System_String_o *
Settings_TypedSetting_bool___ToString(Settings_TypedSetting_bool__o *__this,MethodInfo_E8EF10 *method)

{
  System_String_o *pSVar1;
  bool local_res8 [32];
  
  local_res8[0] = (__this->fields)._value;
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  pSVar1 = System_Boolean__ToString
                     (local_res8,(MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<int>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_int___ToString (Settings_TypedSetting_int__o* __this, const MethodInfo_E8F0F0* method);
// 0x180e8f0f0

System_String_o *
Settings_TypedSetting_int___ToString(Settings_TypedSetting_int__o *__this,MethodInfo_E8F0F0 *method)

{
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  local_res8[0] = (__this->fields)._value;
  pSVar1 = System_Int32__ToString
                     (local_res8,(MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<object>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_object___ToString (Settings_TypedSetting_T__o* __this, const MethodInfo_E8EF60* method);
// 0x180e8ef60

System_String_o *
Settings_TypedSetting_object___ToString(Settings_TypedSetting_T__o *__this,MethodInfo_E8EF60 *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  
  pIVar1 = (__this->fields)._value;
  if (pIVar1 != (Il2CppObject *)0x0) {
    pSVar2 = (System_String_o *)(*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Settings.TypedSetting<float>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_float___ToString (Settings_TypedSetting_float__o* __this, const MethodInfo_E8EF90* method);
// 0x180e8ef90

System_String_o *
Settings_TypedSetting_float___ToString(Settings_TypedSetting_float__o *__this,MethodInfo_E8EF90 *method)

{
  System_String_o *pSVar1;
  float local_res8 [8];
  
  local_res8[0] = (__this->fields)._value;
  pSVar1 = System_Single__ToString
                     (local_res8,(MethodInfo *)method->klass->rgctx_data[1]._0_Settings_TypedSetting_T_);
  return pSVar1;
}


// Settings.TypedSetting<Vector3>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting_Vector3___ToString (Settings_TypedSetting_Vector3__o* __this, const MethodInfo_E8EFC0* method);
// 0x180e8efc0

System_String_o *
Settings_TypedSetting_Vector3___ToString(Settings_TypedSetting_Vector3__o *__this,MethodInfo_E8EFC0 *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *pSVar2;
  System_Globalization_NumberFormatInfo_o *provider;
  System_String_o *arg0;
  System_String_o *arg1;
  System_String_o *pSVar3;
  undefined8 local_18;
  float local_10 [2];
  
  local_18._0_4_ = (__this->fields)._value.fields.x;
  local_18._4_4_ = (__this->fields)._value.fields.y;
  local_10[0] = (__this->fields)._value.fields.z;
  if (Il2CppMethodInitialized_18433dee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"F2");
    il2cpp_codegen_initialize_runtime_metadata(&"({0}, {1}, {2})");
    Il2CppMethodInitialized_18433dee8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)0x0;
  if (bVar1) {
    pSVar3 = "F2";
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar2 != (System_Globalization_CultureInfo_o *)0x0) {
    provider = (*(pSVar2->klass->vtable)._14_get_NumberFormat.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._14_get_NumberFormat.method);
    arg0 = System_Single__ToString_1b4a0d0
                     ((float *)&local_18,pSVar3,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    arg1 = System_Single__ToString_1b4a0d0
                     ((float *)((longlong)&local_18 + 4),pSVar3,(System_IFormatProvider_o *)provider,
                      (MethodInfo *)0x0);
    pSVar3 = System_Single__ToString_1b4a0d0
                       (local_10,pSVar3,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    pSVar3 = System_String__Format_196d050
                       ("({0}, {1}, {2})",(Il2CppObject *)arg0,(Il2CppObject *)arg1,(Il2CppObject *)pSVar3
                        ,(MethodInfo *)0x0);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* Settings_TypedSetting___Il2CppFullySharedGenericType___ToString (Settings_TypedSetting_T__o* __this, const MethodInfo_E8EDA0* method);
// 0x180e8eda0

System_String_o *
Settings_TypedSetting___Il2CppFullySharedGenericType___ToString
          (Settings_TypedSetting_T__o *__this,MethodInfo_E8EDA0 *method)

{
  System_String_o *source;
  undefined1 *destination;
  Settings_TypedSetting_T__c *pSVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Settings_TypedSetting_T__RGCTXs *pSVar5;
  Il2CppClass *pIVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  Il2CppClass *pIVar11;
  ulonglong uVar12;
  ulonglong size;
  System_String_o *local_res10;
  undefined8 auStack_60 [5];
  longlong alStack_38 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_T->_2).stack_slot_size;
  pIVar11 = method->klass->rgctx_data->_1_T;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    auStack_60[0] = 0x180e8edf5;
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
  }
  uVar10 = (pIVar11->_2).stack_slot_size + 0x10;
  uVar12 = (ulonglong)uVar10 + 0xf;
  if (uVar12 <= uVar10) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x180e8ee1f;
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = size + 0xf;
  if (uVar12 <= size) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar7) = 0x180e8ee3c;
  lVar8 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = size + 0xf;
  source = (System_String_o *)(&stack0xffffffffffffffd8 + lVar8 + lVar7);
  if (uVar12 <= size) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar8 + lVar7) = 0x180e8ee59;
  lVar9 = -(uVar12 & 0xfffffffffffffff0);
  destination = &stack0xffffffffffffffd8 + lVar9 + lVar8 + lVar7;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180e8ee6e;
  il2cpp_runtime_helper_180522500(destination,0,size);
  pSVar1 = method->klass;
  *(System_String_o **)((longlong)alStack_38 + lVar9 + lVar8 + lVar7) = source;
  pMVar2 = pSVar1->rgctx_data->_4_Settings_TypedSetting_T__get_Value;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180e8ee97;
  local_res10 = source;
  (*pIVar4)(pIVar3,pMVar2,__this,&local_res10,*(void **)((longlong)alStack_38 + lVar9 + lVar8 + lVar7));
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180e8eea5;
  memcpy(destination,source,size);
  pSVar5 = method->klass->rgctx_data;
  pIVar11 = pSVar5->_1_T;
  pIVar6 = pSVar5[1]._0_Settings_TypedSetting_T_;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180e8eec9;
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
  }
  *(System_String_o ***)((longlong)alStack_38 + lVar9 + lVar8 + lVar7 + 8) = &local_res10;
  *(undefined8 *)((longlong)alStack_38 + lVar9 + lVar8 + lVar7) = 0;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180e8eeec;
  il2cpp_runtime_helper_1804171d0(pIVar11,pIVar6,&stack0xffffffffffffffd8 + lVar7,destination);
  return local_res10;
}


