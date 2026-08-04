// Type: Settings.BaseSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BaseSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetting.cs
// --------------------------------

// Settings.BaseSetting$$SerializeToJsonString
// il2cpp: System_String_o* Settings_BaseSetting__SerializeToJsonString (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x41fddc0

System_String_o *
Settings_BaseSetting__SerializeToJsonString(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_BaseSetting_c *pSVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *aJSON;
  
  aJSON = (__this->klass->vtable)._5_unknown.method;
  plVar3 = (long *)(*(__this->klass->vtable)._5_unknown.methodPtr)();
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    pSVar4 = (System_String_o *)
             (**(code **)(lVar1 + 0x318))
                       (plVar3,4,*(undefined8 *)(lVar1 + 800),lVar1,*(code **)(lVar1 + 0x318));
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar5 = SimpleJSONFixed_JSON__Parse((System_String_o *)aJSON,(MethodInfo *)0x0);
  pSVar2 = __this->klass;
  vtableDispatch = (pSVar2->vtable)._6_unknown.methodPtr;
  pSVar4 = (System_String_o *)
           (*vtableDispatch)
                     (__this,pSVar5,(pSVar2->vtable)._6_unknown.method,pSVar2,vtableDispatch);
  return pSVar4;
}


// Settings.BaseSetting$$DeserializeFromJsonString
// il2cpp: void Settings_BaseSetting__DeserializeFromJsonString (Settings_BaseSetting_o* __this, System_String_o* json, const MethodInfo* method);
// 0x41fde00

void Settings_BaseSetting__DeserializeFromJsonString
               (Settings_BaseSetting_o *__this,System_String_o *json,MethodInfo *method)

{
  Settings_BaseSetting_c *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pSVar1 = __this->klass;
  vtableDispatch = (pSVar1->vtable)._6_unknown.methodPtr;
  (*vtableDispatch)(__this,pSVar2,(pSVar1->vtable)._6_unknown.method,pSVar1,vtableDispatch);
  return;
}


// Settings.BaseSetting$$Copy
// il2cpp: void Settings_BaseSetting__Copy (Settings_BaseSetting_o* __this, Settings_BaseSetting_o* other, const MethodInfo* method);
// 0x41fde30

void Settings_BaseSetting__Copy
               (Settings_BaseSetting_o *__this,Settings_BaseSetting_o *other,MethodInfo *method)

{
  Settings_BaseSetting_c *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 uVar2;
  
  if (other != (Settings_BaseSetting_o *)0x0) {
    uVar2 = (*(other->klass->vtable)._5_unknown.methodPtr)(other,(other->klass->vtable)._5_unknown.method);
    pSVar1 = __this->klass;
    vtableDispatch = (pSVar1->vtable)._6_unknown.methodPtr;
    (*vtableDispatch)(__this,uVar2,(pSVar1->vtable)._6_unknown.method,pSVar1,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.BaseSetting$$.ctor
// il2cpp: void Settings_BaseSetting___ctor (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x41fde70

void Settings_BaseSetting___ctor(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


