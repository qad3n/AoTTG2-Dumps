// Type: CustomSkins.TitanSkinSelection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomSkins/TitanSkinSelection.cs
// Prior real C# source: none
// --------------------------------

// CustomSkins.TitanSkinSelection$$CreateSet
// il2cpp: Settings_TitanCustomSet_o* CustomSkins_TitanSkinSelection__CreateSet (CustomSkins_TitanSkinSelection_o* __this, Characters_BasicTitanSetup_o* setup, const MethodInfo* method);
// 0x181e97920

Settings_TitanCustomSet_o *
CustomSkins_TitanSkinSelection__CreateSet
          (CustomSkins_TitanSkinSelection_o *__this,Characters_BasicTitanSetup_o *setup,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  Settings_TitanCustomSet_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344fd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344fd2 = '\x01';
  }
  if (setup != (Characters_BasicTitanSetup_o *)0x0) {
    pSVar2 = Characters_BasicTitanSetup__CreateRandomSet(setup,(__this->fields).Head,(MethodInfo *)0x0);
    if ((pSVar2 != (Settings_TitanCustomSet_o *)0x0) &&
       (pSVar1 = (pSVar2->fields).Body, pSVar1 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar1,(__this->fields).Body,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar1 = (pSVar2->fields).Eye;
      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar1,(__this->fields).Eye,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        __this_00 = (pSVar2->fields).Hair;
        if (__this_00 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(__this->fields).Hair,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          return pSVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinSelection$$ApplyTo
// il2cpp: Settings_TitanCustomSet_o* CustomSkins_TitanSkinSelection__ApplyTo (CustomSkins_TitanSkinSelection_o* __this, Settings_TitanCustomSet_o* set, const MethodInfo* method);
// 0x181e97790

Settings_TitanCustomSet_o *
CustomSkins_TitanSkinSelection__ApplyTo
          (CustomSkins_TitanSkinSelection_o *__this,Settings_TitanCustomSet_o *set,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  Settings_TitanCustomSet_o *__this_00;
  
  if (Il2CppMethodInitialized_184344fd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344fd3 = '\x01';
  }
  if ((set != (Settings_TitanCustomSet_o *)0x0) &&
     (pSVar1 = (set->fields).Body, pSVar1 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar1->fields)._value == (__this->fields).Body) {
      pSVar1 = (set->fields).Head;
      if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e9791a;
      if ((pSVar1->fields)._value == (__this->fields).Head) {
        pSVar1 = (set->fields).Eye;
        if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e9791a;
        if ((pSVar1->fields)._value == (__this->fields).Eye) {
          pSVar2 = (set->fields).Hair;
          if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_181e9791a;
          bVar3 = System_String__op_Equality((pSVar2->fields)._value,(__this->fields).Hair,(MethodInfo *)0x0);
          if (bVar3) {
            return set;
          }
        }
      }
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSet);
    Settings_TitanCustomSet___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Settings_TitanCustomSet_o *)0x0) {
      (*(__this_00->klass->vtable)._10_Copy.methodPtr)
                (__this_00,(Settings_BaseSetting_o *)set,(__this_00->klass->vtable)._10_Copy.method);
      pSVar1 = (__this_00->fields).Body;
      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar1,(__this->fields).Body,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar1 = (__this_00->fields).Head;
        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar1,(__this->fields).Head,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar1 = (__this_00->fields).Eye;
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar1,(__this->fields).Eye,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar2 = (__this_00->fields).Hair;
            if (pSVar2 != (Settings_StringSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)(__this->fields).Hair,
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              return __this_00;
            }
          }
        }
      }
    }
  }
label_181e9791a:
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinSelection$$.ctor
// il2cpp: void CustomSkins_TitanSkinSelection___ctor (CustomSkins_TitanSkinSelection_o* __this, const MethodInfo* method);
// 0x181e979d0

void CustomSkins_TitanSkinSelection___ctor(CustomSkins_TitanSkinSelection_o *__this,MethodInfo *method)

{
  System_String_o *value;
  
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).Hair = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hair,value);
  (__this->fields).SkinSlot = -1;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


