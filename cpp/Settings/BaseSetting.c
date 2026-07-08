// Type: Settings.BaseSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/BaseSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/BaseSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.BaseSetting$$SerializeToJsonString
// il2cpp: System_String_o* Settings_BaseSetting__SerializeToJsonString (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x3f0b8a0

System_String_o *
Settings_BaseSetting__SerializeToJsonString(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  System_String_o *pSVar3;
  
  plVar2 = (long *)(*(__this->klass->vtable)._5_unknown.methodPtr)
                             (__this,(__this->klass->vtable)._5_unknown.method);
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    pSVar3 = (System_String_o *)
             (**(code **)(lVar1 + 0x318))
                       (plVar2,4,*(undefined8 *)(lVar1 + 800),lVar1,*(code **)(lVar1 + 0x318));
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.BaseSetting$$DeserializeFromJsonString
// il2cpp: void Settings_BaseSetting__DeserializeFromJsonString (Settings_BaseSetting_o* __this, System_String_o* json, const MethodInfo* method);
// 0x3f0b8e0

void Settings_BaseSetting__DeserializeFromJsonString
               (Settings_BaseSetting_o *__this,System_String_o *json,MethodInfo *method)

{
  Settings_BaseSetting_c *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pSVar1 = __this->klass;
  vtable_dispatch = (pSVar1->vtable)._6_unknown.methodPtr;
  (*vtable_dispatch)
            (__this,pSVar2,(pSVar1->vtable)._6_unknown.method,pSVar1,vtable_dispatch);
  return;
}


// Settings.BaseSetting$$Copy
// il2cpp: void Settings_BaseSetting__Copy (Settings_BaseSetting_o* __this, Settings_BaseSetting_o* other, const MethodInfo* method);
// 0x3f0b910

void Settings_BaseSetting__Copy
               (Settings_BaseSetting_o *__this,Settings_BaseSetting_o *other,MethodInfo *method)

{
  Settings_BaseSetting_c *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar2;
  
  if (other != (Settings_BaseSetting_o *)0x0) {
    uVar2 = (*(other->klass->vtable)._5_unknown.methodPtr)
                      (other,(other->klass->vtable)._5_unknown.method);
    pSVar1 = __this->klass;
    vtable_dispatch = (pSVar1->vtable)._6_unknown.methodPtr;
    (*vtable_dispatch)
              (__this,uVar2,(pSVar1->vtable)._6_unknown.method,pSVar1,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.BaseSetting$$.ctor
// il2cpp: void Settings_BaseSetting___ctor (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x3f0b950

void Settings_BaseSetting___ctor(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


