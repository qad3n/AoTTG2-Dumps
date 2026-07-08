// Type: CustomLogic.CustomLogicGameBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicGameBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicGameBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicGameBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicGameBuiltin_o* CustomLogic_CustomLogicGameBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3eba210

CustomLogic_CustomLogicGameBuiltin_o *
CustomLogic_CustomLogicGameBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicGameBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057038c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicGameBuiltin);
    DAT_057038c1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicGameBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicGameBuiltin);
      CustomLogic_CustomLogicGameBuiltin___ctor(__this,method);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicGameBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicGameBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ec1080

void CustomLogic_CustomLogicGameBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703906 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703906 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ec10f0

void CustomLogic_CustomLogicGameBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__Debug>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__Debug_b__21_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1100

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__Debug>b__21_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__Debug
                ((CustomLogic_CustomLogicGameBuiltin_o *)__this,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__Print>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__Print_b__22_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1130

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__Print>b__22_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__Print
                ((CustomLogic_CustomLogicGameBuiltin_o *)__this,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__PrintAll>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__PrintAll_b__23_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1160

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__PrintAll>b__23_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *message;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = __a->m_Items[0];
      if (DAT_05703897 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_ChatManager);
        DAT_05703897 = '\x01';
      }
      if (pIVar1 != (Il2CppObject *)0x0) {
        message = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__SendChatAll(message,3,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetGeneralSetting>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetGeneralSetting_b__24_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec11f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__GetGeneralSetting>b__24_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703907 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703907 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    settingName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetGeneralSetting
                         (__this_00,settingName,method_00);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTitanSetting>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetTitanSetting_b__25_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1280

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__GetTitanSetting>b__25_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703908 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703908 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    settingName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetTitanSetting(__this_00,settingName,method_00);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMiscSetting>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetMiscSetting_b__26_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1310

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__GetMiscSetting>b__26_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703909 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703909 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    settingName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetMiscSetting(__this_00,settingName,method_00);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadGeneralSetting>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGeneralSetting_b__27_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec13a0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPreloadGeneralSetting>b__27_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *settingName;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined1 local_19;
  
  if (DAT_0570390a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570390a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec144f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    settingName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicGameBuiltin__SetPreloadGeneralSetting
                          (__this_00,settingName,__a->m_Items[1],method);
        local_19 = (undefined1)bVar1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
        return pIVar2;
      }
      goto LAB_03ec144f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadTitanSetting>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadTitanSetting_b__28_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1460

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPreloadTitanSetting>b__28_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *settingName;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined1 local_19;
  
  if (DAT_0570390b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570390b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec150f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    settingName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting
                          (__this_00,settingName,__a->m_Items[1],method);
        local_19 = (undefined1)bVar1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
        return pIVar2;
      }
      goto LAB_03ec150f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadMiscSetting>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMiscSetting_b__29_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1520

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPreloadMiscSetting>b__29_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *settingName;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined1 local_19;
  
  if (DAT_0570390c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570390c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec15cf:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    settingName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting
                          (__this_00,settingName,__a->m_Items[1],method);
        local_19 = (undefined1)bVar1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
        return pIVar2;
      }
      goto LAB_03ec15cf;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadModeSetting>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadModeSetting_b__30_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec15e0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPreloadModeSetting>b__30_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *settingName;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined1 local_19;
  
  if (DAT_0570390d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570390d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec168f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    settingName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting
                          (__this_00,settingName,__a->m_Items[1],method);
        local_19 = (undefined1)bVar1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
        return pIVar2;
      }
      goto LAB_03ec168f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadMap>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMap_b__31_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec16a0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPreloadMap>b__31_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *mapCategory;
  System_String_o *mapName;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_0570390e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570390e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec1764:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    mapCategory = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      mapName = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                          ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicGameBuiltin__SetPreloadMap
                          (__this_00,mapCategory,mapName,method);
        uStack_28 = CONCAT17((char)bVar1,(undefined7)uStack_28);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_28 + 7);
        return pIVar2;
      }
      goto LAB_03ec1764;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadGameMode>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGameMode_b__32_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1770

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPreloadGameMode>b__32_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *gameMode;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_0570390f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570390f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    gameMode = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                         ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode(__this_00,gameMode,method_00);
      uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadPreloadPreset>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__LoadPreloadPreset_b__33_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1820

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__LoadPreloadPreset>b__33_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *presetName;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05703910 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703910 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    presetName = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicGameBuiltin__LoadPreloadPreset(__this_00,presetName,method_00);
      uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__RestartWithPreloadSettings>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__RestartWithPreloadSettings_b__34_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec18d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__RestartWithPreloadSettings>b__34_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  undefined1 uVar3;
  undefined1 local_9;
  
  if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_057038a2 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
      DAT_057038a2 = '\x01';
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = 0;
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
      uVar3 = 1;
    }
    local_9 = uVar3;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__End>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__End_b__35_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1970

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__End>b__35_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float delay;
  
  if (DAT_05703911 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703911 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = MethodInfo_Single_ConvertTo_Single;
    delay = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                      ((Il2CppObject *)__this_00,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__End(__this_00,delay,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindCharacterByViewID>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__FindCharacterByViewID_b__36_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1a00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__FindCharacterByViewID>b__36_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool_conflict bVar1;
  int32_t viewId;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar2;
  
  if (DAT_05703912 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703912 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    viewId = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      if (DAT_057038a4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
        il2cpp_init_method_metadata(&TypeInfo_Object);
        il2cpp_init_method_metadata(&TypeInfo_Util);
        DAT_057038a4 = '\x01';
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      character = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (character == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(char *)&(character->fields).FeedVictimName == '\0') {
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) != 0) {
            pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
                               (character,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar2;
          }
          il2cpp_init_class();
          pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
                             (character,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar2;
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitan>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitan_b__37_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1a90

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnTitan>b__37_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  Il2CppObject *obj;
  char cVar3;
  bool_conflict bVar4;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  System_String_o *type;
  
  if (DAT_05703913 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703913 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    type = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      if (DAT_057038a5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
        DAT_057038a5 = '\x01';
        iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_init_class();
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      else {
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      if (cVar3 != '\0') {
        if (DAT_0570387c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_InGameManager);
          il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
          DAT_0570387c = '\x01';
        }
        __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
          titan = GameManagers_InGameManager__SpawnAITitan(__this_00,type,(MethodInfo *)0x0);
          __this_01 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
          CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitanAt>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitanAt_b__38_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1b20

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnTitanAt>b__38_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicTitanBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float rotationY;
  
  if (DAT_05703914 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703914 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec1c1f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    type = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      position = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           ((Il2CppObject *)__this_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      rotationY = 0.0;
      if (2 < (int)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                              ((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt
                           (__this_00,type,position,rotationY,method);
        return (Il2CppObject *)pCVar1;
      }
      goto LAB_03ec1c1f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitans>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitans_b__39_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1c30

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnTitans>b__39_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703915 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703915 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec1cdd:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    type = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      count = CustomLogic_CustomLogicEvaluator__ConvertTo<int>
                        ((Il2CppObject *)__this_00,MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitans(__this_00,type,count,method);
        return (Il2CppObject *)pCVar1;
      }
      goto LAB_03ec1cdd;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAsync>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAsync_b__40_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1cf0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnTitansAsync>b__40_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703916 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703916 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec1da0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    type = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      count = CustomLogic_CustomLogicEvaluator__ConvertTo<int>
                        ((Il2CppObject *)__this_00,MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync(__this_00,type,count,method);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03ec1da0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAt>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAt_b__41_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1db0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnTitansAt>b__41_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  float rotationY;
  
  if (DAT_05703917 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703917 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      type = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        count = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
        if (2 < (uint)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
          position = (CustomLogic_CustomLogicVector3Builtin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               ((Il2CppObject *)__this_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
          rotationY = 0.0;
          if (3 < (int)__a->max_length) {
            __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                  ((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
          }
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt
                               (__this_00,type,count,position,rotationY,in_R8);
            return (Il2CppObject *)pCVar1;
          }
          goto LAB_03ec1ee5;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ec1ee5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAtAsync>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAtAsync_b__42_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec1ef0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnTitansAtAsync>b__42_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  float rotationY;
  
  if (DAT_05703918 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703918 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      type = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        count = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
        if (2 < (uint)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
          position = (CustomLogic_CustomLogicVector3Builtin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               ((Il2CppObject *)__this_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
          rotationY = 0.0;
          if (3 < (int)__a->max_length) {
            __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                  ((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
          }
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync
                      (__this_00,type,count,position,rotationY,in_R8);
            return (Il2CppObject *)0x0;
          }
          goto LAB_03ec2028;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ec2028:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnShifter>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifter_b__43_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2030

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnShifter>b__43_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *type;
  CustomLogic_CustomLogicShifterBuiltin_o *pCVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703919 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703919 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    type = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                     ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnShifter(__this_00,type,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHuman>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHuman_b__44_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec20c0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnHuman>b__44_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t costume;
  System_String_o *costumeName;
  System_String_o *loadout;
  CustomLogic_CustomLogicHumanBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  
  if (DAT_0570391a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570391a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      costume = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
      if (1 < (uint)__a->max_length) {
        costumeName = (System_String_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                (__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
          loadout = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnHuman
                               (__this_00,costume,costumeName,loadout,in_R8);
            return (Il2CppObject *)pCVar1;
          }
          goto LAB_03ec2192;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ec2192:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHumanAt>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHumanAt_b__45_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec21a0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnHumanAt>b__45_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t costume;
  System_String_o *costumeName;
  System_String_o *loadout;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicHumanBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R9;
  float rotationY;
  
  if (DAT_0570391b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570391b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      costume = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
      if (1 < (uint)__a->max_length) {
        costumeName = (System_String_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                (__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          loadout = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              (__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          if (3 < (uint)__a->max_length) {
            __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
            position = (CustomLogic_CustomLogicVector3Builtin_o *)
                       CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                 ((Il2CppObject *)__this_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
            rotationY = 0.0;
            if (4 < (int)__a->max_length) {
              __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[4];
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_init_class();
              }
              rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                    ((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
            }
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt
                                 (__this_00,costume,costumeName,loadout,position,rotationY,in_R9);
              return (Il2CppObject *)pCVar1;
            }
            goto LAB_03ec22f8;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ec22f8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnShifterAt>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifterAt_b__46_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2300

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnShifterAt>b__46_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicShifterBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float rotationY;
  
  if (DAT_0570391c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570391c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec23ff:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    type = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      position = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           ((Il2CppObject *)__this_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      rotationY = 0.0;
      if (2 < (int)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                              ((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt
                           (__this_00,type,position,rotationY,method);
        return (Il2CppObject *)pCVar1;
      }
      goto LAB_03ec23ff;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnProjectile>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectile_b__47_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2410

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnProjectile>b__47_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_String_o *projectileName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicVector3Builtin_o *velocity;
  CustomLogic_CustomLogicVector3Builtin_o *gravity;
  System_String_o *team;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float liveTime;
  MethodInfo *method_00;
  
  if (DAT_0570391d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570391d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
LAB_03ec25c5:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    projectileName =
         (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String)
    ;
    if (((((uint)__a->max_length < 2) ||
         (position = (CustomLogic_CustomLogicVector3Builtin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), (uint)__a->max_length < 3)) ||
        (rotation = (CustomLogic_CustomLogicVector3Builtin_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              (__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), (uint)__a->max_length < 4)) ||
       (((velocity = (CustomLogic_CustomLogicVector3Builtin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[3],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), (uint)__a->max_length < 5 ||
         (gravity = (CustomLogic_CustomLogicVector3Builtin_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              (__a->m_Items[4],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), (uint)__a->max_length < 6)) ||
        (liveTime = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[5],MethodInfo_Single_ConvertTo_Single)
        , (uint)__a->max_length < 7)))) goto LAB_03ec25c5;
    method_00 = (MethodInfo *)0x3ec255a;
    team = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[6],MethodInfo_String_ConvertTo_String);
    iVar1 = (int)__a->max_length;
    if (iVar1 < 8) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)0x0;
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[7];
      if (iVar1 == 8) {
        pIVar2 = (Il2CppObject *)0x0;
        if (__c == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) goto LAB_03ec25c0;
        goto LAB_03ec256e;
      }
      pIVar2 = __a->m_Items[8];
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
LAB_03ec256e:
      CustomLogic_CustomLogicGameBuiltin__SpawnProjectile
                (__this_00,projectileName,position,rotation,velocity,gravity,liveTime,team,
                 (Il2CppObject *)__this_00,pIVar2,method_00);
      return (Il2CppObject *)0x0;
    }
  }
LAB_03ec25c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnProjectileWithOwner>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectileWithOwner_b__48_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec25d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnProjectileWithOwner>b__48_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_String_o *projectileName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicVector3Builtin_o *velocity;
  CustomLogic_CustomLogicVector3Builtin_o *gravity;
  CustomLogic_CustomLogicCharacterBuiltin_o *owner;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float liveTime;
  MethodInfo *method_00;
  
  if (DAT_0570391e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCharacterBuiltin_ConvertTo_CustomLogi);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570391e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
LAB_03ec2791:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    projectileName =
         (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String)
    ;
    if (((((uint)__a->max_length < 2) ||
         (position = (CustomLogic_CustomLogicVector3Builtin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), (uint)__a->max_length < 3)) ||
        (rotation = (CustomLogic_CustomLogicVector3Builtin_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              (__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), (uint)__a->max_length < 4)) ||
       (((velocity = (CustomLogic_CustomLogicVector3Builtin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[3],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), (uint)__a->max_length < 5 ||
         (gravity = (CustomLogic_CustomLogicVector3Builtin_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              (__a->m_Items[4],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), (uint)__a->max_length < 6)) ||
        (liveTime = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[5],MethodInfo_Single_ConvertTo_Single)
        , (uint)__a->max_length < 7)))) goto LAB_03ec2791;
    method_00 = (MethodInfo *)0x3ec2726;
    owner = (CustomLogic_CustomLogicCharacterBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[6],MethodInfo_CustomLogicCharacterBuiltin_ConvertTo_CustomLogi);
    iVar1 = (int)__a->max_length;
    if (iVar1 < 8) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)0x0;
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[7];
      if (iVar1 == 8) {
        pIVar2 = (Il2CppObject *)0x0;
        if (__c == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) goto LAB_03ec278c;
        goto LAB_03ec273a;
      }
      pIVar2 = __a->m_Items[8];
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
LAB_03ec273a:
      CustomLogic_CustomLogicGameBuiltin__SpawnProjectileWithOwner
                (__this_00,projectileName,position,rotation,velocity,gravity,liveTime,owner,
                 (Il2CppObject *)__this_00,pIVar2,method_00);
      return (Il2CppObject *)0x0;
    }
  }
LAB_03ec278c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnEffect>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnEffect_b__49_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec27a0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnEffect>b__49_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *effectName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor;
  System_String_o *tsKillSound;
  float scale;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_0570391f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570391f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec2954:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    effectName = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (((1 < (uint)__a->max_length) &&
        (position = (CustomLogic_CustomLogicVector3Builtin_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              (__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV), 2 < (uint)__a->max_length)) &&
       (rotation = (CustomLogic_CustomLogicVector3Builtin_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV)
       , 3 < (uint)__a->max_length)) {
      scale = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[3],MethodInfo_Single_ConvertTo_Single);
      tsExplodeColor = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
      tsKillSound = (System_String_o *)0x0;
      if (4 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[4];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        tsExplodeColor =
             (CustomLogic_CustomLogicColorBuiltin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
        if ((int)__a->max_length < 6) {
          tsKillSound = (System_String_o *)0x0;
        }
        else {
          pIVar1 = __a->m_Items[5];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          tsKillSound = (System_String_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
        }
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
                  (effectName,position,rotation,scale,1,tsExplodeColor,tsKillSound,
                   in_stack_ffffffffffffffb8);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03ec2954;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnUnscaledEffect>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnUnscaledEffect_b__50_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2960

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnUnscaledEffect>b__50_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *in_RAX;
  System_String_o *effectName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor;
  System_String_o *tsKillSound;
  
  if (DAT_05703920 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703920 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
LAB_03ec2ae1:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    effectName = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (((uint)__a->max_length < 2) ||
       (position = (CustomLogic_CustomLogicVector3Builtin_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV)
       , (uint)__a->max_length < 3)) goto LAB_03ec2ae1;
    rotation = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    tsExplodeColor = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    tsKillSound = (System_String_o *)0x0;
    if (3 < (int)__a->max_length) {
      pIVar1 = __a->m_Items[3];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      tsExplodeColor =
           (CustomLogic_CustomLogicColorBuiltin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
      if ((int)__a->max_length < 5) {
        tsKillSound = (System_String_o *)0x0;
        if (__c == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) goto LAB_03ec2ae6;
        goto LAB_03ec2ab5;
      }
      pIVar1 = __a->m_Items[4];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      tsKillSound = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
LAB_03ec2ab5:
      CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
                (effectName,position,rotation,1.0,0,tsExplodeColor,tsKillSound,in_RAX);
      return (Il2CppObject *)0x0;
    }
  }
LAB_03ec2ae6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayer>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayer_b__51_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2af0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnPlayer>b__51_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703921 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703921 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec2ba1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    player = (CustomLogic_CustomLogicPlayerBuiltin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    if (1 < (uint)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>
                        ((Il2CppObject *)__this_00,MethodInfo_Boolean_ConvertTo_Boolean);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnPlayer(__this_00,player,uVar1 & 0xff,method);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03ec2ba1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAll>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAll_b__52_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2bb0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnPlayerAll>b__52_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703922 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703922 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>
                      ((Il2CppObject *)__this_00,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll(__this_00,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAt>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAt_b__53_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2c40

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnPlayerAt>b__53_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  float rotationY;
  
  if (DAT_05703923 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703923 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      player = (CustomLogic_CustomLogicPlayerBuiltin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
      if (1 < (uint)__a->max_length) {
        uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
        if (2 < (uint)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
          position = (CustomLogic_CustomLogicVector3Builtin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               ((Il2CppObject *)__this_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
          rotationY = 0.0;
          if (3 < (int)__a->max_length) {
            __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                  ((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
          }
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt
                      (__this_00,player,uVar1 & 0xff,position,rotationY,in_R8);
            return (Il2CppObject *)0x0;
          }
          goto LAB_03ec2d79;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ec2d79:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAtAll>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAtAll_b__54_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2d80

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SpawnPlayerAtAll>b__54_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float rotationY;
  
  if (DAT_05703924 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703924 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ec2e81:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (1 < (uint)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      position = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           ((Il2CppObject *)__this_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      rotationY = 0.0;
      if (2 < (int)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                              ((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll
                  (__this_00,uVar1 & 0xff,position,rotationY,method);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03ec2e81;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPlaylist>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPlaylist_b__55_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2e90

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPlaylist>b__55_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  long lVar1;
  System_String_o *playlist;
  
  if (DAT_05703925 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703925 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    playlist = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      if (DAT_057038b5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_057038b5 = '\x01';
      }
      ApplicationManagers_MusicManager__SetPlaylist(playlist,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x24) = 1;
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSong>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetSong_b__56_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec2f80

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__SetSong>b__56_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  long lVar1;
  System_String_o *song;
  
  if (DAT_05703926 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703926 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    song = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      if (DAT_057038b6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_057038b6 = '\x01';
      }
      ApplicationManagers_MusicManager__SetSong(song,0.0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x24) = 1;
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__DrawRay>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__DrawRay_b__57_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec3070

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__DrawRay>b__57_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *dir;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  float duration;
  
  if (DAT_05703927 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703927 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        dir = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          color = (CustomLogic_CustomLogicColorBuiltin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
          if (3 < (uint)__a->max_length) {
            __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
            duration = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                 ((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              CustomLogic_CustomLogicGameBuiltin__DrawRay(__this_00,start,dir,color,duration,in_R8);
              return (Il2CppObject *)0x0;
            }
            goto LAB_03ec3173;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ec3173:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillScore>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillScore_b__58_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec3180

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__ShowKillScore>b__58_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t damage;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (DAT_05703928 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703928 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    damage = CustomLogic_CustomLogicEvaluator__ConvertTo<int>
                       ((Il2CppObject *)__this_00,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__ShowKillScore(__this_00,damage,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillFeed>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillFeed_b__59_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec3210

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__ShowKillFeed>b__59_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t score;
  System_String_o *killer;
  System_String_o *victim;
  System_String_o *weapon;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R9;
  
  if (DAT_05703929 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703929 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      killer = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        victim = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          score = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
          if (3 < (uint)__a->max_length) {
            __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
            weapon = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              CustomLogic_CustomLogicGameBuiltin__ShowKillFeed
                        (__this_00,killer,victim,score,weapon,in_R9);
              return (Il2CppObject *)0x0;
            }
            goto LAB_03ec3309;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ec3309:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillFeedAll>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillFeedAll_b__60_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec3310

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_<>c__<__CreateMethodBinding__ShowKillFeedAll>b__60_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicGameBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t score;
  System_String_o *killer;
  System_String_o *victim;
  System_String_o *weapon;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R9;
  
  if (DAT_0570392a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570392a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      killer = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        victim = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          score = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
          if (3 < (uint)__a->max_length) {
            __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
            weapon = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll
                        (__this_00,killer,victim,score,weapon,in_R9);
              return (Il2CppObject *)0x0;
            }
            goto LAB_03ec3409;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ec3409:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicGameBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3eba300

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicGameBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_057038c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"SetPreloadMap");
    il2cpp_init_method_metadata(&"ShowScoreboardLoadout");
    il2cpp_init_method_metadata(&"ShowKillFeedAll");
    il2cpp_init_method_metadata(&"SetSong");
    il2cpp_init_method_metadata(&"ForcedCharacterType");
    il2cpp_init_method_metadata(&"SetPreloadTitanSetting");
    il2cpp_init_method_metadata(&"GetTitanSetting");
    il2cpp_init_method_metadata(&"AIShifters");
    il2cpp_init_method_metadata(&"EndTimeLeft");
    il2cpp_init_method_metadata(&"Print");
    il2cpp_init_method_metadata(&"SpawnTitanAt");
    il2cpp_init_method_metadata(&"SpawnProjectileWithOwner");
    il2cpp_init_method_metadata(&"SpawnPlayerAt");
    il2cpp_init_method_metadata(&"LoadPreloadPreset");
    il2cpp_init_method_metadata(&"ShowKillScore");
    il2cpp_init_method_metadata(&"SpawnHumanAt");
    il2cpp_init_method_metadata(&"Debug");
    il2cpp_init_method_metadata(&"SpawnTitansAsync");
    il2cpp_init_method_metadata(&"SpawnProjectile");
    il2cpp_init_method_metadata(&"ShowKillFeed");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"AIHumans");
    il2cpp_init_method_metadata(&"SpawnEffect");
    il2cpp_init_method_metadata(&"SpawnShifterAt");
    il2cpp_init_method_metadata(&"AITitans");
    il2cpp_init_method_metadata(&"SpawnTitansAtAsync");
    il2cpp_init_method_metadata(&"SpawnPlayerAll");
    il2cpp_init_method_metadata(&"SpawnTitan");
    il2cpp_init_method_metadata(&"RestartWithPreloadSettings");
    il2cpp_init_method_metadata(&"SpawnTitansAt");
    il2cpp_init_method_metadata(&"SpawnPlayer");
    il2cpp_init_method_metadata(&"End");
    il2cpp_init_method_metadata(&"PlayerHumans");
    il2cpp_init_method_metadata(&"SetPreloadGeneralSetting");
    il2cpp_init_method_metadata(&"SpawnShifter");
    il2cpp_init_method_metadata(&"SpawnTitans");
    il2cpp_init_method_metadata(&"GetGeneralSetting");
    il2cpp_init_method_metadata(&"SetPlaylist");
    il2cpp_init_method_metadata(&"ForcedLoadout");
    il2cpp_init_method_metadata(&"SetPreloadMiscSetting");
    il2cpp_init_method_metadata(&"PrintAll");
    il2cpp_init_method_metadata(&"ShowScoreboardStatus");
    il2cpp_init_method_metadata(&"PlayerShifters");
    il2cpp_init_method_metadata(&"GetMiscSetting");
    il2cpp_init_method_metadata(&"PlayerTitans");
    il2cpp_init_method_metadata(&"DefaultAddKillScore");
    il2cpp_init_method_metadata(&"SpawnPlayerAtAll");
    il2cpp_init_method_metadata(&"SetPreloadGameMode");
    il2cpp_init_method_metadata(&"Humans");
    il2cpp_init_method_metadata(&"SpawnUnscaledEffect");
    il2cpp_init_method_metadata(&"DefaultShowKillScore");
    il2cpp_init_method_metadata(&"Shifters");
    il2cpp_init_method_metadata(&"DrawRay");
    il2cpp_init_method_metadata(&"DefaultHideKillScore");
    il2cpp_init_method_metadata(&"SetPreloadModeSetting");
    il2cpp_init_method_metadata(&"SpawnHuman");
    il2cpp_init_method_metadata(&"FindCharacterByViewID");
    il2cpp_init_method_metadata(&"Loadouts");
    il2cpp_init_method_metadata(&"IsEnding");
    DAT_057038c2 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x73e55887) {
    if (uVar3 < 0x4514d43a) {
      if (uVar3 < 0x2cf09a85) {
        if (uVar3 < 0x1aa259a3) {
          if (uVar3 == 0x541c794) {
            bVar4 = System_String__op_Equality(name,"SetPreloadGeneralSetting",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057038dc == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadGeneral);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_057038dc = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x38);
              }
              else {
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x38);
              }
              if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
                il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
              }
              pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar11;
            }
          }
          else if (uVar3 == 0x177ad93b) {
            bVar4 = System_String__op_Equality(name,"ShowKillFeedAll",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057038fd == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowKillFeedAll_b);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_057038fd = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x140);
              }
              else {
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x140);
              }
              if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x140) = pSVar10;
                il2cpp_runtime_glue(lVar2 + 0x140,pSVar10);
              }
              pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar11;
            }
          }
          else if ((uVar3 == 0x1aa259a2) &&
                  (bVar4 = System_String__op_Equality(name,"SpawnProjectileWithOwner",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038f1 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnProjectileWi);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038f1 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xe0);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xe0);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xe0,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 < 0x2a610339) {
          if (uVar3 == 0x203c8139) {
            bVar4 = System_String__op_Equality(name,"DefaultAddKillScore",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057038d1 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DefaultAddKillS);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DefaultAddKillSco);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
                DAT_057038d1 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0x2a610338) &&
                  (bVar4 = System_String__op_Equality(name,"Debug",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038d6 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Debug_b__21_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038d6 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8)
              ;
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8)
              ;
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x2b56c4fb) {
          bVar4 = System_String__op_Equality(name,"SpawnShifter",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038ec == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnShifter_b__4);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038ec = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xb8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x2cf09a84) &&
                (bVar4 = System_String__op_Equality(name,"SetPreloadMiscSetting",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038de == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadMiscSet);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038de = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x3411d8c8) {
        if (uVar3 == 0x2e389efb) {
          bVar4 = System_String__op_Equality(name,"PlayerTitans",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038c7 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PlayerTitans_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
              DAT_057038c7 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x31cb34ce) {
          bVar4 = System_String__op_Equality(name,"SpawnShifterAt",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038ef == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnShifterAt_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038ef = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xd0);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xd0);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xd0,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x3411d8c7) &&
                (bVar4 = System_String__op_Equality(name,"SpawnTitanAt",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038e7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitanAt_b__3);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038e7 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x90);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x90);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x90,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x35d2d6c6) {
        if (uVar3 == 0x34e873c4) {
          bVar4 = System_String__op_Equality(name,"SpawnUnscaledEffect",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038f3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnUnscaledEffe);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038f3 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xf0);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xf0);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xf0,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x35d2d6c5) &&
                (bVar4 = System_String__op_Equality(name,"SetPlaylist",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038f8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPlaylist_b__55);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038f8 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x118);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x118);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x118) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x118,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x3bba96bf) {
        bVar4 = System_String__op_Equality(name,"SpawnProjectile",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038f0 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnProjectile_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038f0 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xd8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xd8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xd8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x4514d439) &&
              (bVar4 = System_String__op_Equality(name,"SetPreloadGameMode",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038e1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadGameMod);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038e1 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x5c14003f) {
      if (uVar3 < 0x4f00efb3) {
        if (uVar3 == 0x459c1313) {
          bVar4 = System_String__op_Equality(name,"GetGeneralSetting",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038d9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetGeneralSetting);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038d9 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x4e95b0ed) {
          bVar4 = System_String__op_Equality(name,"SpawnPlayer",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038f4 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnPlayer_b__51);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038f4 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xf8);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xf8);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xf8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x4f00efb2) &&
                (bVar4 = System_String__op_Equality(name,"EndTimeLeft",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038c4 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EndTimeLeft_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
            DAT_057038c4 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x52ed1a21) {
        if (uVar3 == 0x4f326cfc) {
          bVar4 = System_String__op_Equality(name,"SpawnHumanAt",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038ee == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnHumanAt_b__4);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038ee = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 200);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 200);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 200) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 200,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x52ed1a20) &&
                (bVar4 = System_String__op_Equality(name,"AITitans",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038c6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AITitans_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
            DAT_057038c6 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x55e82500) {
        bVar4 = System_String__op_Equality(name,"ShowScoreboardStatus",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038d3 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShowScoreboardS);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShowScoreboardSta);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
            DAT_057038d3 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x5c14003e) &&
              (bVar4 = System_String__op_Equality(name,"Titans",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038c5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titans_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
          DAT_057038c5 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x62485e87) {
      if (uVar3 < 0x5e4e5f77) {
        if (uVar3 == 0x5d069fc8) {
          bVar4 = System_String__op_Equality(name,"DefaultHideKillScore",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038d0 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DefaultHideKill);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DefaultHideKillSc);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
              DAT_057038d0 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x5e4e5f76) &&
                (bVar4 = System_String__op_Equality(name,"ShowKillScore",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038fb == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowKillScore_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038fb = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x130);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x130);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x130) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x130,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x5ea6cd53) {
        bVar4 = System_String__op_Equality(name,"SpawnTitans",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038e8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitans_b__39);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038e8 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x98);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x98);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x98,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x62485e86) &&
              (bVar4 = System_String__op_Equality(name,"SpawnTitansAt",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038ea == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitansAt_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038ea = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0xa8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x6d57abba) {
      if (uVar3 == 0x66ef4f10) {
        bVar4 = System_String__op_Equality(name,"SpawnPlayerAt",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038f6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnPlayerAt_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038f6 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x108);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x108);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x108) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x108,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x6d57abb9) &&
              (bVar4 = System_String__op_Equality(name,"GetMiscSetting",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038db == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetMiscSetting_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038db = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x6e104b4e) {
      bVar4 = System_String__op_Equality(name,"PlayerHumans",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038cd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PlayerHumans_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
          DAT_057038cd = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x73e55886) &&
            (bVar4 = System_String__op_Equality(name,"SetPreloadMap",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057038e0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadMap_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057038e0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xc008ebe2) {
    if (uVar3 < 0x9061daa7) {
      if (uVar3 < 0x7b40a20a) {
        if (uVar3 == 0x770cabba) {
          bVar4 = System_String__op_Equality(name,"SetSong",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038f9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetSong_b__56_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038f9 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x120);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x120);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x120) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x120,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x7a63a383) {
          bVar4 = System_String__op_Equality(name,"SpawnPlayerAtAll",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038f7 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnPlayerAtAll);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038f7 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x110);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x110);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x110) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x110,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x7b40a209) &&
                (bVar4 = System_String__op_Equality(name,"SetPreloadModeSetting",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038df == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadModeSet);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038df = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x8da9183e) {
        if (uVar3 == 0x86a5057c) {
          bVar4 = System_String__op_Equality(name,"SpawnPlayerAll",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038f5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnPlayerAll_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057038f5 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x100);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x100);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x100) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x100,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x8da9183d) &&
                (bVar4 = System_String__op_Equality(name,"DrawRay",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038fa == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DrawRay_b__57_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038fa = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x128);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x128);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x128) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x128,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x8deaef15) {
        bVar4 = System_String__op_Equality(name,"SpawnTitansAsync",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038e9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitansAsync);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038e9 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xa0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x9061daa6) &&
              (bVar4 = System_String__op_Equality(name,"IsEnding",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038c3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsEnding_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
          DAT_057038c3 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0xa0137020) {
      if (uVar3 < 0x935c8bb0) {
        if (uVar3 == 0x930b044b) {
          bVar4 = System_String__op_Equality(name,"Humans",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057038cb == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Humans_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
              DAT_057038cb = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x935c8baf) &&
                (bVar4 = System_String__op_Equality(name,"AIShifters",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038c9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AIShifters_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
            DAT_057038c9 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x947f7155) {
        bVar4 = System_String__op_Equality(name,"AIHumans",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038cc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AIHumans_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
            DAT_057038cc = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xa013701f) &&
              (bVar4 = System_String__op_Equality(name,"DefaultShowKillScore",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038cf == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DefaultShowKill);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DefaultShowKillSc);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
          DAT_057038cf = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0xbc3a7c7a) {
      if (uVar3 == 0xa100db20) {
        bVar4 = System_String__op_Equality(name,"PlayerShifters",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038ca == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PlayerShifters);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
            DAT_057038ca = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xbc3a7c79) &&
              (bVar4 = System_String__op_Equality(name,"LoadPreloadPreset",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038e2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LoadPreloadPreset);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038e2 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x68,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xbcac6db6) {
      bVar4 = System_String__op_Equality(name,"SetPreloadTitanSetting",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038dd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadTitanSe);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038dd = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xc008ebe1) &&
            (bVar4 = System_String__op_Equality(name,"SpawnHuman",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057038ed == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnHuman_b__44);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057038ed = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0xc0,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xe3470563) {
    if (uVar3 < 0xcc06912c) {
      if (uVar3 == 0xc4c554dd) {
        bVar4 = System_String__op_Equality(name,"Shifters",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038c8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Shifters_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
            DAT_057038c8 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xc7260798) {
        bVar4 = System_String__op_Equality(name,"ShowKillFeed",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038fc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowKillFeed_b__5);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038fc = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x138);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x138);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x138) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x138,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xcc06912b) &&
              (bVar4 = System_String__op_Equality(name,"PrintAll",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038d8 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PrintAll_b__23_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038d8 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0xcf93764b) {
      if (uVar3 == 0xce302050) {
        bVar4 = System_String__op_Equality(name,"Loadouts",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038ce == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Loadouts_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
            DAT_057038ce = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xcf93764a) &&
              (bVar4 = System_String__op_Equality(name,"End",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038e4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__End_b__35_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038e4 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xdbc1608c) {
      bVar4 = System_String__op_Equality(name,"RestartWithPreloadSettings",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038e3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RestartWithPreloa);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038e3 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x70,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xe3470562) &&
            (bVar4 = System_String__op_Equality(name,"ShowScoreboardLoadout",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057038d2 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShowScoreboardL);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShowScoreboardLoa);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
        DAT_057038d2 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xe8320d29) {
    if (uVar3 < 0xe6a5bf32) {
      if (uVar3 == 0xe5ac9889) {
        bVar4 = System_String__op_Equality(name,"SpawnEffect",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057038f2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnEffect_b__49);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057038f2 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xe8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xe8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xe8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xe6a5bf31) &&
              (bVar4 = System_String__op_Equality(name,"GetTitanSetting",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038da == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTitanSetting_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038da = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xe7990e30) {
      bVar4 = System_String__op_Equality(name,"FindCharacterByViewID",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038e5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindCharacterByVi);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038e5 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x80,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xe8320d28) &&
            (bVar4 = System_String__op_Equality(name,"Print",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057038d7 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Print_b__22_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057038d7 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xeb1f3d1b) {
    if (uVar3 == 0xeb1c5d32) {
      bVar4 = System_String__op_Equality(name,"SpawnTitan",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057038e6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitan_b__37);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057038e6 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xeb1f3d1a) &&
            (bVar4 = System_String__op_Equality(name,"SpawnTitansAtAsync",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057038eb == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitansAtAsyn);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057038eb = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0xb0,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 == 0xf1244ac0) {
    bVar4 = System_String__op_Equality(name,"ForcedLoadout",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057038d5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ForcedLoadout_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ForcedLoadout_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
        DAT_057038d5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xf6719867) &&
          (bVar4 = System_String__op_Equality(name,"ForcedCharacterType",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057038d4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ForcedCharacter);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ForcedCharacterTy);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
      DAT_057038d4 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicGameBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__IsEnding
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsEnding (const MethodInfo* method);
// 0x3ebb8c0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsEnding(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsEnding_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038c3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__EndTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__EndTimeLeft (const MethodInfo* method);
// 0x3ebb960

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__EndTimeLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EndTimeLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038c4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Titans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Titans (const MethodInfo* method);
// 0x3ebba00

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Titans(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titans_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038c5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AITitans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AITitans (const MethodInfo* method);
// 0x3ebbaa0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AITitans(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AITitans_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038c6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerTitans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerTitans (const MethodInfo* method);
// 0x3ebbb40

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerTitans
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PlayerTitans_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038c7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Shifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Shifters (const MethodInfo* method);
// 0x3ebbbe0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Shifters(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Shifters_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038c8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AIShifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIShifters (const MethodInfo* method);
// 0x3ebbc80

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIShifters(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AIShifters_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038c9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerShifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerShifters (const MethodInfo* method);
// 0x3ebbd20

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerShifters
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038ca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PlayerShifters);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038ca = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Humans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Humans (const MethodInfo* method);
// 0x3ebbdc0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Humans(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038cb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Humans_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038cb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AIHumans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIHumans (const MethodInfo* method);
// 0x3ebbe60

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIHumans(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AIHumans_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038cc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerHumans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerHumans (const MethodInfo* method);
// 0x3ebbf00

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerHumans
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PlayerHumans_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038cd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Loadouts
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Loadouts (const MethodInfo* method);
// 0x3ebbfa0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Loadouts(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Loadouts_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038ce = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultShowKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillScore (const MethodInfo* method);
// 0x3ebc040

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillScore
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DefaultShowKill);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DefaultShowKillSc);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038cf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultHideKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultHideKillScore (const MethodInfo* method);
// 0x3ebc120

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultHideKillScore
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DefaultHideKill);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DefaultHideKillSc);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038d0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultAddKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultAddKillScore (const MethodInfo* method);
// 0x3ebc200

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultAddKillScore
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DefaultAddKillS);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DefaultAddKillSco);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038d1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ShowScoreboardLoadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardLoadout (const MethodInfo* method);
// 0x3ebc2e0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardLoadout
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShowScoreboardL);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShowScoreboardLoa);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038d2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ShowScoreboardStatus
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardStatus (const MethodInfo* method);
// 0x3ebc3c0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardStatus
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShowScoreboardS);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShowScoreboardSta);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038d3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ForcedCharacterType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedCharacterType (const MethodInfo* method);
// 0x3ebc4a0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedCharacterType
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ForcedCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ForcedCharacterTy);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038d4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ForcedLoadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedLoadout (const MethodInfo* method);
// 0x3ebc580

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedLoadout
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicGameBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ForcedLoadout_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ForcedLoadout_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object);
    DAT_057038d5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicGameBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__Debug
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Debug (const MethodInfo* method);
// 0x3ebc660

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Debug(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Debug_b__21_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038d6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__Print
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Print (const MethodInfo* method);
// 0x3ebc7b0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Print(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Print_b__22_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038d7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__PrintAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__PrintAll (const MethodInfo* method);
// 0x3ebc900

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__PrintAll(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PrintAll_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038d8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetGeneralSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetGeneralSetting (const MethodInfo* method);
// 0x3ebca50

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetGeneralSetting
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetGeneralSetting);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038d9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetTitanSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetTitanSetting (const MethodInfo* method);
// 0x3ebcba0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetTitanSetting
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTitanSetting_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038da = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetMiscSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetMiscSetting (const MethodInfo* method);
// 0x3ebccf0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetMiscSetting
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetMiscSetting_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038db = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadGeneralSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGeneralSetting (const MethodInfo* method);
// 0x3ebce40

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGeneralSetting
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadGeneral);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038dc = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadTitanSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadTitanSetting (const MethodInfo* method);
// 0x3ebcf90

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadTitanSetting
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadTitanSe);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038dd = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadMiscSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMiscSetting (const MethodInfo* method);
// 0x3ebd0e0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMiscSetting
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadMiscSet);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038de = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadModeSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadModeSetting (const MethodInfo* method);
// 0x3ebd230

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadModeSetting
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadModeSet);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038df = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadMap
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMap (const MethodInfo* method);
// 0x3ebd380

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMap
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadMap_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e0 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadGameMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGameMode (const MethodInfo* method);
// 0x3ebd4d0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGameMode
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPreloadGameMod);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__LoadPreloadPreset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__LoadPreloadPreset (const MethodInfo* method);
// 0x3ebd620

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__LoadPreloadPreset
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LoadPreloadPreset);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e2 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__RestartWithPreloadSettings
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__RestartWithPreloadSettings (const MethodInfo* method);
// 0x3ebd770

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__RestartWithPreloadSettings
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RestartWithPreloa);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e3 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__End
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__End (const MethodInfo* method);
// 0x3ebd8c0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__End(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__End_b__35_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__FindCharacterByViewID
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__FindCharacterByViewID (const MethodInfo* method);
// 0x3ebda10

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__FindCharacterByViewID
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindCharacterByVi);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitan (const MethodInfo* method);
// 0x3ebdb60

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitan(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitan_b__37);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitanAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitanAt (const MethodInfo* method);
// 0x3ebdcb0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitanAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitanAt_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitans
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitans (const MethodInfo* method);
// 0x3ebde00

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitans(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitans_b__39);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAsync (const MethodInfo* method);
// 0x3ebdf50

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAsync
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitansAsync);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038e9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAt (const MethodInfo* method);
// 0x3ebe0a0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAt
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitansAt_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038ea = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAtAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAtAsync (const MethodInfo* method);
// 0x3ebe1f0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAtAsync
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnTitansAtAsyn);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038eb = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = function;
    il2cpp_runtime_glue(lVar2 + 0xb0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnShifter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifter (const MethodInfo* method);
// 0x3ebe340

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifter(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnShifter_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038ec = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = function;
    il2cpp_runtime_glue(lVar2 + 0xb8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHuman
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHuman (const MethodInfo* method);
// 0x3ebe490

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHuman(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnHuman_b__44);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038ed = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = function;
    il2cpp_runtime_glue(lVar2 + 0xc0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHumanAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHumanAt (const MethodInfo* method);
// 0x3ebe5e0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHumanAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnHumanAt_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038ee = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 200) = function;
    il2cpp_runtime_glue(lVar2 + 200,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnShifterAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifterAt (const MethodInfo* method);
// 0x3ebe730

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifterAt
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnShifterAt_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038ef = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = function;
    il2cpp_runtime_glue(lVar2 + 0xd0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnProjectile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectile (const MethodInfo* method);
// 0x3ebe880

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectile
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnProjectile_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f0 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = function;
    il2cpp_runtime_glue(lVar2 + 0xd8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnProjectileWithOwner
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectileWithOwner (const MethodInfo* method);
// 0x3ebe9d0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectileWithOwner
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnProjectileWi);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = function;
    il2cpp_runtime_glue(lVar2 + 0xe0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnEffect (const MethodInfo* method);
// 0x3ebeb20

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnEffect(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnEffect_b__49);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f2 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = function;
    il2cpp_runtime_glue(lVar2 + 0xe8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnUnscaledEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnUnscaledEffect (const MethodInfo* method);
// 0x3ebec70

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnUnscaledEffect
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnUnscaledEffe);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f3 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = function;
    il2cpp_runtime_glue(lVar2 + 0xf0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayer (const MethodInfo* method);
// 0x3ebedc0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayer(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnPlayer_b__51);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = function;
    il2cpp_runtime_glue(lVar2 + 0xf8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAll (const MethodInfo* method);
// 0x3ebef10

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnPlayerAll_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x100) = function;
    il2cpp_runtime_glue(lVar2 + 0x100,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAt (const MethodInfo* method);
// 0x3ebf060

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAt
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnPlayerAt_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x108) = function;
    il2cpp_runtime_glue(lVar2 + 0x108,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAtAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAtAll (const MethodInfo* method);
// 0x3ebf1b0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAtAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SpawnPlayerAtAll);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x110) = function;
    il2cpp_runtime_glue(lVar2 + 0x110,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPlaylist
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPlaylist (const MethodInfo* method);
// 0x3ebf300

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPlaylist(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPlaylist_b__55);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x118);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x118);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x118) = function;
    il2cpp_runtime_glue(lVar2 + 0x118,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetSong
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetSong (const MethodInfo* method);
// 0x3ebf450

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetSong(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetSong_b__56_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038f9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x120);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x120);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x120) = function;
    il2cpp_runtime_glue(lVar2 + 0x120,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__DrawRay
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__DrawRay (const MethodInfo* method);
// 0x3ebf5a0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__DrawRay(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DrawRay_b__57_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038fa = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x128);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x128);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x128) = function;
    il2cpp_runtime_glue(lVar2 + 0x128,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillScore
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillScore (const MethodInfo* method);
// 0x3ebf6f0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillScore
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowKillScore_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038fb = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x130) = function;
    il2cpp_runtime_glue(lVar2 + 0x130,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillFeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeed (const MethodInfo* method);
// 0x3ebf840

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeed(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowKillFeed_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038fc = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x138);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x138);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x138) = function;
    il2cpp_runtime_glue(lVar2 + 0x138,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillFeedAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeedAll (const MethodInfo* method);
// 0x3ebf990

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeedAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this;
  
  if (DAT_057038fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowKillFeedAll_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057038fd = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x140);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x140);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGameBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x140) = function;
    il2cpp_runtime_glue(lVar2 + 0x140,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicGameBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicGameBuiltin);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ebfae0

void CustomLogic_CustomLogicGameBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057038fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"SetPreloadMap");
    il2cpp_init_method_metadata(&"ShowScoreboardLoadout");
    il2cpp_init_method_metadata(&"ShowKillFeedAll");
    il2cpp_init_method_metadata(&"SetSong");
    il2cpp_init_method_metadata(&"ForcedCharacterType");
    il2cpp_init_method_metadata(&"SetPreloadTitanSetting");
    il2cpp_init_method_metadata(&"GetTitanSetting");
    il2cpp_init_method_metadata(&"AIShifters");
    il2cpp_init_method_metadata(&"EndTimeLeft");
    il2cpp_init_method_metadata(&"Print");
    il2cpp_init_method_metadata(&"SpawnTitanAt");
    il2cpp_init_method_metadata(&"SpawnProjectileWithOwner");
    il2cpp_init_method_metadata(&"SpawnPlayerAt");
    il2cpp_init_method_metadata(&"LoadPreloadPreset");
    il2cpp_init_method_metadata(&"ShowKillScore");
    il2cpp_init_method_metadata(&"SpawnHumanAt");
    il2cpp_init_method_metadata(&"Debug");
    il2cpp_init_method_metadata(&"SpawnTitansAsync");
    il2cpp_init_method_metadata(&"SpawnProjectile");
    il2cpp_init_method_metadata(&"ShowKillFeed");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"AIHumans");
    il2cpp_init_method_metadata(&"SpawnEffect");
    il2cpp_init_method_metadata(&"SpawnShifterAt");
    il2cpp_init_method_metadata(&"AITitans");
    il2cpp_init_method_metadata(&"SpawnTitansAtAsync");
    il2cpp_init_method_metadata(&"SpawnPlayerAll");
    il2cpp_init_method_metadata(&"SpawnTitan");
    il2cpp_init_method_metadata(&"RestartWithPreloadSettings");
    il2cpp_init_method_metadata(&"SpawnTitansAt");
    il2cpp_init_method_metadata(&"SpawnPlayer");
    il2cpp_init_method_metadata(&"End");
    il2cpp_init_method_metadata(&"PlayerHumans");
    il2cpp_init_method_metadata(&"SetPreloadGeneralSetting");
    il2cpp_init_method_metadata(&"SpawnShifter");
    il2cpp_init_method_metadata(&"SpawnTitans");
    il2cpp_init_method_metadata(&"GetGeneralSetting");
    il2cpp_init_method_metadata(&"SetPlaylist");
    il2cpp_init_method_metadata(&"ForcedLoadout");
    il2cpp_init_method_metadata(&"SetPreloadMiscSetting");
    il2cpp_init_method_metadata(&"PrintAll");
    il2cpp_init_method_metadata(&"ShowScoreboardStatus");
    il2cpp_init_method_metadata(&"PlayerShifters");
    il2cpp_init_method_metadata(&"GetMiscSetting");
    il2cpp_init_method_metadata(&"PlayerTitans");
    il2cpp_init_method_metadata(&"DefaultAddKillScore");
    il2cpp_init_method_metadata(&"SpawnPlayerAtAll");
    il2cpp_init_method_metadata(&"SetPreloadGameMode");
    il2cpp_init_method_metadata(&"Humans");
    il2cpp_init_method_metadata(&"SpawnUnscaledEffect");
    il2cpp_init_method_metadata(&"DefaultShowKillScore");
    il2cpp_init_method_metadata(&"Shifters");
    il2cpp_init_method_metadata(&"DrawRay");
    il2cpp_init_method_metadata(&"DefaultHideKillScore");
    il2cpp_init_method_metadata(&"SetPreloadModeSetting");
    il2cpp_init_method_metadata(&"SpawnHuman");
    il2cpp_init_method_metadata(&"FindCharacterByViewID");
    il2cpp_init_method_metadata(&"Loadouts");
    il2cpp_init_method_metadata(&"IsEnding");
    DAT_057038fe = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"IsEnding",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EndTimeLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AITitans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayerTitans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Shifters",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AIShifters",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayerShifters",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Humans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AIHumans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayerHumans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Loadouts",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DefaultShowKillScore",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DefaultHideKillScore",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DefaultAddKillScore",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowScoreboardLoadout",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowScoreboardStatus",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ForcedCharacterType",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ForcedLoadout",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Debug",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Print",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PrintAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetGeneralSetting",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetTitanSetting",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetMiscSetting",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPreloadGeneralSetting",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPreloadTitanSetting",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPreloadMiscSetting",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPreloadModeSetting",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPreloadMap",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPreloadGameMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LoadPreloadPreset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RestartWithPreloadSettings",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"End",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindCharacterByViewID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnTitan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnTitanAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnTitans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnTitansAsync",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnTitansAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnTitansAtAsync",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnShifter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnHuman",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnHumanAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnShifterAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnProjectile",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnProjectileWithOwner",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnEffect",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnUnscaledEffect",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnPlayer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnPlayerAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnPlayerAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnPlayerAtAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPlaylist",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetSong",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DrawRay",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowKillScore",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowKillFeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowKillFeedAll",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__IsEnding>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsEnding_g____getter_2_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0330

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__IsEnding>g____getter_2_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  long *plVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
         (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) ==
          TypeInfo_InGameManager)) {
        uStack_8 = CONCAT17((char)plVar1[0xc],(undefined7)uStack_8);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
        return pIVar2;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__EndTimeLeft>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__EndTimeLeft_g____getter_3_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec03d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__EndTimeLeft>g____getter_3_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(lVar2 + 0x130)) &&
         (*(long *)(*(long *)(lVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) ==
          TypeInfo_InGameManager)) {
        pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
        return pIVar3;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Titans>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Titans_g____getter_4_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0470

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__Titans>g____getter_4_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_04;
  Il2CppObject *pIVar8;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_0570387d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Titans");
    DAT_0570387d = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb1b36;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb1b3b:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_BasicTitan;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"Titans",(System_Collections_Generic_HashSet_T__o *)plVar3[9],1,1,0,
                     MethodInfo_Boolean_NeedRefreshList_BasicTitan);
  if ((char)bVar7 != '\0') {
    __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb1b36;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb1b3b;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[9] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb1b36;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[9],MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_01.fields._8_8_ = __this_03;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) goto LAB_03eb1b31;
          if (*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                        FeedVictimName == '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_00.fields._8_8_ = __this_03;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_00.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) {
LAB_03eb1b31:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                        FeedVictimName == '\0') {
            __this = (__this_03->fields).List;
            __this_04 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
            CustomLogic_CustomLogicTitanBuiltin___ctor
                      (__this_04,(Characters_BasicTitan_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_02.fields._8_8_ = __this_03;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb1b36;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"Titans",(Il2CppObject *)__this_03,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"Titans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar8;
  }
LAB_03eb1b36:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AITitans>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AITitans_g____getter_5_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0490

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__AITitans>g____getter_5_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_04;
  Il2CppObject *pIVar8;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_0570387e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AITitans");
    DAT_0570387e = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb203c;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb2041:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_BasicTitan;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"AITitans",(System_Collections_Generic_HashSet_T__o *)plVar3[9],1,0,0,
                     MethodInfo_Boolean_NeedRefreshList_BasicTitan);
  if ((char)bVar7 != '\0') {
    __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb203c;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb2041;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[9] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb203c;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[9],MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_01.fields._8_8_ = __this_03;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) goto LAB_03eb2037;
          if ((*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))
                         ->FeedVictimName == '\0') &&
             ((char)((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage != '\0')) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_00.fields._8_8_ = __this_03;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_00.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) {
LAB_03eb2037:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))
                         ->FeedVictimName == '\0') &&
             ((char)((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage != '\0')) {
            __this = (__this_03->fields).List;
            __this_04 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
            CustomLogic_CustomLogicTitanBuiltin___ctor
                      (__this_04,(Characters_BasicTitan_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_02.fields._8_8_ = __this_03;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb203c;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"AITitans",(Il2CppObject *)__this_03,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"AITitans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar8;
  }
LAB_03eb203c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerTitans>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerTitans_g____getter_6_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec04b0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__PlayerTitans>g____getter_6_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_04;
  Il2CppObject *pIVar8;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_0570387f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"PlayerTitans");
    DAT_0570387f = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb254c;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb2551:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_BasicTitan;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"PlayerTitans",(System_Collections_Generic_HashSet_T__o *)plVar3[9],0,1,0,
                     MethodInfo_Boolean_NeedRefreshList_BasicTitan);
  if ((char)bVar7 != '\0') {
    __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb254c;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb2551;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[9] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb254c;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[9],MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_01.fields._8_8_ = __this_03;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) goto LAB_03eb2547;
          if ((*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))
                         ->FeedVictimName == '\0') &&
             ((char)((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage == '\0')) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_00.fields._8_8_ = __this_03;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_00.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) {
LAB_03eb2547:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))
                         ->FeedVictimName == '\0') &&
             ((char)((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage == '\0')) {
            __this = (__this_03->fields).List;
            __this_04 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
            CustomLogic_CustomLogicTitanBuiltin___ctor
                      (__this_04,(Characters_BasicTitan_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_02.fields._8_8_ = __this_03;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb254c;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"PlayerTitans",(Il2CppObject *)__this_03,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"PlayerTitans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar8;
  }
LAB_03eb254c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Shifters>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Shifters_g____getter_7_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec04d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__Shifters>g____getter_7_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  long lVar8;
  bool_conflict bVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_02;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_03;
  Il2CppObject *pIVar10;
  MethodInfo_24ABFA0 *pMVar11;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703880 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    il2cpp_init_method_metadata(&"Shifters");
    DAT_05703880 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_03eb2b22;
  if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb2b27:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar11 = MethodInfo_Boolean_NeedRefreshList_BaseShifter;
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"Shifters",(System_Collections_Generic_HashSet_T__o *)plVar4[10],1,1,1,
                     MethodInfo_Boolean_NeedRefreshList_BaseShifter);
  if ((char)bVar9 != '\0') {
    __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_03eb2b22;
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb2b27;
    if ((System_Collections_Generic_HashSet_object__o *)plVar4[10] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb2b22;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar4[10],MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    while( true ) {
      __this.fields._8_8_ = __this_01;
      __this.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
      __this.fields._current = (Il2CppObject *)pSVar12;
      bVar9 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar9 == '\0') break;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)SStack_48.fields._current,
                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        if ((Characters_WallColossalShifter_o *)SStack_48.fields._current ==
            (Characters_WallColossalShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((*(char *)&((Characters_WallColossalShifter_Fields *)
                       ((long)SStack_48.fields._current + 0x10))->FeedVictimName == '\0') ||
           (*(char *)((long)&(((Characters_WallColossalShifter_Fields *)
                              ((long)SStack_48.fields._current + 0x10))->_previousCoreLocalPosition)
                             .fields.y + 2) != '\0')) {
          bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
          if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
               naturalAligment < bVar2) ||
             ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
              typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
            if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (__this_01->fields).List;
            __this_02 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_02,(Characters_BaseShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_02,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (__this_01->fields).List;
            __this_03 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
            bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
            if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                 naturalAligment < bVar2) ||
               ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(SStack_48.fields._current);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor
                      (__this_03,(Characters_WallColossalShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_03);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_03,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_00.fields._8_8_ = __this_01;
    __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
    __this_00.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_00,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb2b22;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar7,(Il2CppObject *)"Shifters",(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar10 = System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar7,(Il2CppObject *)"Shifters",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar10;
  }
LAB_03eb2b22:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AIShifters>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIShifters_g____getter_8_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec04f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__AIShifters>g____getter_8_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  long lVar8;
  bool_conflict bVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_02;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_03;
  Il2CppObject *pIVar10;
  MethodInfo_24ABFA0 *pMVar11;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703881 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    il2cpp_init_method_metadata(&"AIShifters");
    DAT_05703881 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_03eb30f9;
  if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb30fe:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar11 = MethodInfo_Boolean_NeedRefreshList_BaseShifter;
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"AIShifters",(System_Collections_Generic_HashSet_T__o *)plVar4[10],1,0,1,
                     MethodInfo_Boolean_NeedRefreshList_BaseShifter);
  if ((char)bVar9 != '\0') {
    __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_03eb30f9;
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb30fe;
    if ((System_Collections_Generic_HashSet_object__o *)plVar4[10] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb30f9;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar4[10],MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    while( true ) {
      __this.fields._8_8_ = __this_01;
      __this.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
      __this.fields._current = (Il2CppObject *)pSVar12;
      bVar9 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar9 == '\0') break;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)SStack_48.fields._current,
                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        if ((Characters_WallColossalShifter_o *)SStack_48.fields._current ==
            (Characters_WallColossalShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((char)((Characters_WallColossalShifter_Fields *)
                   ((long)SStack_48.fields._current + 0x10))->CustomDamage != '\0') &&
           ((*(char *)&((Characters_WallColossalShifter_Fields *)
                       ((long)SStack_48.fields._current + 0x10))->FeedVictimName == '\0' ||
            (*(char *)((long)&(((Characters_WallColossalShifter_Fields *)
                               ((long)SStack_48.fields._current + 0x10))->_previousCoreLocalPosition
                              ).fields.y + 2) != '\0')))) {
          bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
          if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
               naturalAligment < bVar2) ||
             ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
              typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
            if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (__this_01->fields).List;
            __this_02 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_02,(Characters_BaseShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_02,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (__this_01->fields).List;
            __this_03 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
            bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
            if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                 naturalAligment < bVar2) ||
               ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(SStack_48.fields._current);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor
                      (__this_03,(Characters_WallColossalShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_03);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_03,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_00.fields._8_8_ = __this_01;
    __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
    __this_00.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_00,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb30f9;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar7,(Il2CppObject *)"AIShifters",(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar10 = System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar7,(Il2CppObject *)"AIShifters",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar10;
  }
LAB_03eb30f9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerShifters>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerShifters_g____getter_9_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0510

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__PlayerShifters>g____getter_9_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  long lVar8;
  bool_conflict bVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_02;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_03;
  Il2CppObject *pIVar10;
  MethodInfo_24ABFA0 *pMVar11;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703882 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    il2cpp_init_method_metadata(&"PlayerShifters");
    DAT_05703882 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_03eb36d9;
  if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb36de:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar11 = MethodInfo_Boolean_NeedRefreshList_BaseShifter;
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"PlayerShifters",(System_Collections_Generic_HashSet_T__o *)plVar4[10],0,1,1,
                     MethodInfo_Boolean_NeedRefreshList_BaseShifter);
  if ((char)bVar9 != '\0') {
    __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_03eb36d9;
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb36de;
    if ((System_Collections_Generic_HashSet_object__o *)plVar4[10] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb36d9;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar4[10],MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    while( true ) {
      __this.fields._8_8_ = __this_01;
      __this.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
      __this.fields._current = (Il2CppObject *)pSVar12;
      bVar9 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar9 == '\0') break;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)SStack_48.fields._current,
                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        if ((Characters_WallColossalShifter_o *)SStack_48.fields._current ==
            (Characters_WallColossalShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((char)((Characters_WallColossalShifter_Fields *)
                   ((long)SStack_48.fields._current + 0x10))->CustomDamage == '\0') &&
           ((*(char *)&((Characters_WallColossalShifter_Fields *)
                       ((long)SStack_48.fields._current + 0x10))->FeedVictimName == '\0' ||
            (*(char *)((long)&(((Characters_WallColossalShifter_Fields *)
                               ((long)SStack_48.fields._current + 0x10))->_previousCoreLocalPosition
                              ).fields.y + 2) != '\0')))) {
          bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
          if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
               naturalAligment < bVar2) ||
             ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
              typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
            if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (__this_01->fields).List;
            __this_02 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_02,(Characters_BaseShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_02,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (__this_01->fields).List;
            __this_03 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
            bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
            if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                 naturalAligment < bVar2) ||
               ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(SStack_48.fields._current);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor
                      (__this_03,(Characters_WallColossalShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_03);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_03,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_00.fields._8_8_ = __this_01;
    __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
    __this_00.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_00,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb36d9;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar7,(Il2CppObject *)"PlayerShifters",(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar10 = System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar7,(Il2CppObject *)"PlayerShifters",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar10;
  }
LAB_03eb36d9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Humans>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Humans_g____getter_10_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0530

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__Humans>g____getter_10_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_04;
  Il2CppObject *pIVar8;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703883 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_Human);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Humans");
    DAT_05703883 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb3bf6;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb3bfb:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_Human;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"Humans",(System_Collections_Generic_HashSet_T__o *)plVar3[8],1,1,0,
                     MethodInfo_Boolean_NeedRefreshList_Human);
  if ((char)bVar7 != '\0') {
    __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb3bf6;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb3bfb;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[8] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb3bf6;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[8],MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_01.fields._8_8_ = __this_03;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0)
          goto LAB_03eb3bf1;
          if (*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                        FeedVictimName == '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_00.fields._8_8_ = __this_03;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_00.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0) {
LAB_03eb3bf1:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                        FeedVictimName == '\0') {
            __this = (__this_03->fields).List;
            __this_04 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
            CustomLogic_CustomLogicHumanBuiltin___ctor
                      (__this_04,(Characters_Human_o *)SStack_48.fields._current,(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_02.fields._8_8_ = __this_03;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb3bf6;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"Humans",(Il2CppObject *)__this_03,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"Humans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar8;
  }
LAB_03eb3bf6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AIHumans>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIHumans_g____getter_11_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0550

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__AIHumans>g____getter_11_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_04;
  Il2CppObject *pIVar8;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703884 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_Human);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AIHumans");
    DAT_05703884 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb40fc;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb4101:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_Human;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"AIHumans",(System_Collections_Generic_HashSet_T__o *)plVar3[8],1,0,0,
                     MethodInfo_Boolean_NeedRefreshList_Human);
  if ((char)bVar7 != '\0') {
    __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb40fc;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb4101;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[8] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb40fc;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[8],MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_01.fields._8_8_ = __this_03;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0)
          goto LAB_03eb40f7;
          if ((*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                         FeedVictimName == '\0') &&
             ((char)((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage != '\0')) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_00.fields._8_8_ = __this_03;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_00.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0) {
LAB_03eb40f7:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                         FeedVictimName == '\0') &&
             ((char)((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage != '\0')) {
            __this = (__this_03->fields).List;
            __this_04 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
            CustomLogic_CustomLogicHumanBuiltin___ctor
                      (__this_04,(Characters_Human_o *)SStack_48.fields._current,(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_02.fields._8_8_ = __this_03;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb40fc;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"AIHumans",(Il2CppObject *)__this_03,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"AIHumans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar8;
  }
LAB_03eb40fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerHumans>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerHumans_g____getter_12_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0570

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__PlayerHumans>g____getter_12_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_04;
  Il2CppObject *pIVar8;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703885 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_Human);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"PlayerHumans");
    DAT_05703885 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb460c;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb4611:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_Human;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__i,"PlayerHumans",(System_Collections_Generic_HashSet_T__o *)plVar3[8],0,1,0,
                     MethodInfo_Boolean_NeedRefreshList_Human);
  if ((char)bVar7 != '\0') {
    __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb460c;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb4611;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[8] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb460c;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[8],MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_01.fields._8_8_ = __this_03;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0)
          goto LAB_03eb4607;
          if ((*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                         FeedVictimName == '\0') &&
             ((char)((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage == '\0')) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_00.fields._8_8_ = __this_03;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_00.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0) {
LAB_03eb4607:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                         FeedVictimName == '\0') &&
             ((char)((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage == '\0')) {
            __this = (__this_03->fields).List;
            __this_04 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
            CustomLogic_CustomLogicHumanBuiltin___ctor
                      (__this_04,(Characters_Human_o *)SStack_48.fields._current,(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_02.fields._8_8_ = __this_03;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb460c;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"PlayerHumans",(Il2CppObject *)__this_03,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"PlayerHumans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pIVar8;
  }
LAB_03eb460c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Loadouts>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Loadouts_g____getter_13_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0590

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__Loadouts>g____getter_13_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Loadouts(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillScore>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____getter_14_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec05b0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__DefaultShowKillScore>g____getter_14_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_05703887 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_05703887 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      local_9 = *(undefined1 *)(lVar2 + 0x80);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillScore>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____setter_14_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ec0660

void CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__DefaultShowKillScore>g____setter_14_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  
  if (DAT_057038ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057038ff = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_05703888 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_05703888 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      *(char *)(lVar2 + 0x80) = (char)bVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultHideKillScore>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____getter_15_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0740

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__DefaultHideKillScore>g____getter_15_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_05703889 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_05703889 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      local_9 = *(undefined1 *)(lVar2 + 0x81);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultHideKillScore>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____setter_15_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ec07f0

void CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__DefaultHideKillScore>g____setter_15_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  
  if (DAT_05703900 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703900 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_0570388a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_0570388a = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      *(char *)(lVar2 + 0x81) = (char)bVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultAddKillScore>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____getter_16_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec08d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__DefaultAddKillScore>g____getter_16_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_0570388b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_0570388b = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      local_9 = *(undefined1 *)(lVar2 + 0x82);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultAddKillScore>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____setter_16_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ec0980

void CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__DefaultAddKillScore>g____setter_16_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  
  if (DAT_05703901 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703901 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_0570388c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_0570388c = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      *(char *)(lVar2 + 0x82) = (char)bVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardLoadout>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____getter_17_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0a60

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__ShowScoreboardLoadout>g____getter_17_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_0570388d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_0570388d = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      local_9 = *(undefined1 *)(lVar2 + 0x83);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardLoadout>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____setter_17_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ec0b10

void CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__ShowScoreboardLoadout>g____setter_17_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  
  if (DAT_05703902 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703902 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_0570388e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_0570388e = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      *(char *)(lVar2 + 0x83) = (char)bVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardStatus>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____getter_18_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0bf0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__ShowScoreboardStatus>g____getter_18_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_0570388f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_0570388f = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      local_9 = *(undefined1 *)(lVar2 + 0x84);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardStatus>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____setter_18_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ec0ca0

void CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__ShowScoreboardStatus>g____setter_18_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  
  if (DAT_05703903 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703903 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_05703890 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_05703890 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      *(char *)(lVar2 + 0x84) = (char)bVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedCharacterType>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____getter_19_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0d80

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__ForcedCharacterType>g____getter_19_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_05703891 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_05703891 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      return *(Il2CppObject **)(lVar2 + 0x88);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedCharacterType>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____setter_19_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ec0e00

void CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__ForcedCharacterType>g____setter_19_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05703904 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703904 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_05703892 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_05703892 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      *(Il2CppObject **)(lVar2 + 0x88) = pIVar3;
      il2cpp_runtime_glue(lVar2 + 0x88,pIVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedLoadout>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____getter_20_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x3ec0f00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__ForcedLoadout>g____getter_20_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_05703893 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_05703893 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      return *(Il2CppObject **)(lVar2 + 0x90);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedLoadout>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____setter_20_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ec0f80

void CustomLogic_CustomLogicGameBuiltin_Bindings__<__CreatePropertyBinding__ForcedLoadout>g____setter_20_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05703905 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703905 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (DAT_05703894 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_05703894 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar2 != 0) {
      *(Il2CppObject **)(lVar2 + 0x90) = pIVar3;
      il2cpp_runtime_glue(lVar2 + 0x90,pIVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___c___cctor (const MethodInfo* method);
// 0x3ec3410

void CustomLogic_CustomLogicGameBuiltin_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570392b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570392b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___c___ctor (CustomLogic_CustomLogicGameBuiltin___c_o* __this, const MethodInfo* method);
// 0x3ec3480

void CustomLogic_CustomLogicGameBuiltin_<>c___ctor
               (CustomLogic_CustomLogicGameBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$<get_Loadouts>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin___c___get_Loadouts_b__28_0 (CustomLogic_CustomLogicGameBuiltin___c_o* __this, System_String_o* x, const MethodInfo* method);
// 0x3ec3490

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_<>c__<get_Loadouts>b__28_0
          (CustomLogic_CustomLogicGameBuiltin___c_o *__this,System_String_o *x,MethodInfo *method)

{
  return (Il2CppObject *)x;
}


// CustomLogic.CustomLogicGameBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___ctor (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb14e0

void CustomLogic_CustomLogicGameBuiltin___ctor
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_0570387b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__CustomLogicListBuiltin);
    DAT_0570387b = '\x01';
  }
  (__this->fields)._lastSetTopLabel = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._lastSetTopLabel);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__CustomLogicListBuiltin);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
  (__this->fields)._cachedLists =
       (System_Collections_Generic_Dictionary_string__CustomLogicListBuiltin__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._cachedLists);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get__inGameManager
// il2cpp: GameManagers_InGameManager_o* CustomLogic_CustomLogicGameBuiltin__get__inGameManager (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb15a0

GameManagers_InGameManager_o *
CustomLogic_CustomLogicGameBuiltin__get__inGameManager
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  pGVar2 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((pGVar2->klass->_2).naturalAligment < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pGVar2);
    }
  }
  return pGVar2;
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsEnding
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsEnding (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb1620

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_IsEnding
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (lVar2 = *(long *)(*plVar1 + 200),
       *(long *)(lVar2 + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) == TypeInfo_InGameManager)) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),(char)plVar1[0xc]);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_EndTimeLeft
// il2cpp: float CustomLogic_CustomLogicGameBuiltin__get_EndTimeLeft (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb16a0

float CustomLogic_CustomLogicGameBuiltin__get_EndTimeLeft
                (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  long *plVar1;
  
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) ==
        TypeInfo_InGameManager)) {
      return *(float *)((long)plVar1 + 100);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Titans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Titans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb1720

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Titans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *pCVar8;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_04;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_0570387d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Titans");
    DAT_0570387d = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb1b36;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb1b3b:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_BasicTitan;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"Titans",(System_Collections_Generic_HashSet_T__o *)plVar3[9],1,1,0,
                     MethodInfo_Boolean_NeedRefreshList_BasicTitan);
  if ((char)bVar7 != '\0') {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar8,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb1b36;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb1b3b;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[9] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb1b36;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[9],MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (pCVar8 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_02.fields._8_8_ = pCVar8;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_02.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) goto LAB_03eb1b31;
          if (*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                        FeedVictimName == '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_01.fields._8_8_ = pCVar8;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) {
LAB_03eb1b31:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                        FeedVictimName == '\0') {
            __this_00 = (pCVar8->fields).List;
            __this_04 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
            CustomLogic_CustomLogicTitanBuiltin___ctor
                      (__this_04,(Characters_BasicTitan_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_03.fields._8_8_ = pCVar8;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_03.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb1b36;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"Titans",(Il2CppObject *)pCVar8,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"Titans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar8;
  }
LAB_03eb1b36:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AITitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AITitans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb1c20

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AITitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *pCVar8;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_04;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_0570387e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AITitans");
    DAT_0570387e = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb203c;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb2041:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_BasicTitan;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"AITitans",(System_Collections_Generic_HashSet_T__o *)plVar3[9],1,0,0,
                     MethodInfo_Boolean_NeedRefreshList_BasicTitan);
  if ((char)bVar7 != '\0') {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar8,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb203c;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb2041;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[9] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb203c;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[9],MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (pCVar8 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_02.fields._8_8_ = pCVar8;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_02.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) goto LAB_03eb2037;
          if ((*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))
                         ->FeedVictimName == '\0') &&
             ((char)((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage != '\0')) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_01.fields._8_8_ = pCVar8;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) {
LAB_03eb2037:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))
                         ->FeedVictimName == '\0') &&
             ((char)((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage != '\0')) {
            __this_00 = (pCVar8->fields).List;
            __this_04 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
            CustomLogic_CustomLogicTitanBuiltin___ctor
                      (__this_04,(Characters_BasicTitan_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_03.fields._8_8_ = pCVar8;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_03.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb203c;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"AITitans",(Il2CppObject *)pCVar8,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"AITitans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar8;
  }
LAB_03eb203c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerTitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerTitans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb2130

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerTitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *pCVar8;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_04;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_0570387f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"PlayerTitans");
    DAT_0570387f = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb254c;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb2551:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_BasicTitan;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"PlayerTitans",(System_Collections_Generic_HashSet_T__o *)plVar3[9],0,1,0,
                     MethodInfo_Boolean_NeedRefreshList_BasicTitan);
  if ((char)bVar7 != '\0') {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar8,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb254c;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb2551;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[9] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb254c;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[9],MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (pCVar8 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_02.fields._8_8_ = pCVar8;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_02.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) goto LAB_03eb2547;
          if ((*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))
                         ->FeedVictimName == '\0') &&
             ((char)((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage == '\0')) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_01.fields._8_8_ = pCVar8;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_BasicTitan_o *)SStack_48.fields._current == (Characters_BasicTitan_o *)0x0
             ) {
LAB_03eb2547:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(char *)&((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))
                         ->FeedVictimName == '\0') &&
             ((char)((Characters_BasicTitan_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage == '\0')) {
            __this_00 = (pCVar8->fields).List;
            __this_04 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
            CustomLogic_CustomLogicTitanBuiltin___ctor
                      (__this_04,(Characters_BasicTitan_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_03.fields._8_8_ = pCVar8;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_03.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb254c;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"PlayerTitans",(Il2CppObject *)pCVar8,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"PlayerTitans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar8;
  }
LAB_03eb254c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Shifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Shifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb2640

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Shifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  long lVar8;
  bool_conflict bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_02;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_03;
  MethodInfo_24ABFA0 *pMVar11;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_05703880 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    il2cpp_init_method_metadata(&"Shifters");
    DAT_05703880 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_03eb2b22;
  if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb2b27:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar11 = MethodInfo_Boolean_NeedRefreshList_BaseShifter;
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"Shifters",(System_Collections_Generic_HashSet_T__o *)plVar4[10],1,1,1
                     ,MethodInfo_Boolean_NeedRefreshList_BaseShifter);
  if ((char)bVar9 != '\0') {
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_03eb2b22;
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb2b27;
    if ((System_Collections_Generic_HashSet_object__o *)plVar4[10] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb2b22;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar4[10],MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    while( true ) {
      __this_00.fields._8_8_ = pCVar10;
      __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
      __this_00.fields._current = (Il2CppObject *)pSVar12;
      bVar9 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar9 == '\0') break;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)SStack_48.fields._current,
                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        if ((Characters_WallColossalShifter_o *)SStack_48.fields._current ==
            (Characters_WallColossalShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((*(char *)&((Characters_WallColossalShifter_Fields *)
                       ((long)SStack_48.fields._current + 0x10))->FeedVictimName == '\0') ||
           (*(char *)((long)&(((Characters_WallColossalShifter_Fields *)
                              ((long)SStack_48.fields._current + 0x10))->_previousCoreLocalPosition)
                             .fields.y + 2) != '\0')) {
          bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
          if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
               naturalAligment < bVar2) ||
             ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
              typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_02 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_02,(Characters_BaseShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_02,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_03 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
            bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
            if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                 naturalAligment < bVar2) ||
               ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(SStack_48.fields._current);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor
                      (__this_03,(Characters_WallColossalShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_03);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_03,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_01.fields._8_8_ = pCVar10;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
    __this_01.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb2b22;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar7,(Il2CppObject *)"Shifters",(Il2CppObject *)pCVar10,MethodInfo_Void_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar7,(Il2CppObject *)"Shifters",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar10;
  }
LAB_03eb2b22:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AIShifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AIShifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb2c20

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AIShifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  long lVar8;
  bool_conflict bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_02;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_03;
  MethodInfo_24ABFA0 *pMVar11;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_05703881 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    il2cpp_init_method_metadata(&"AIShifters");
    DAT_05703881 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_03eb30f9;
  if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb30fe:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar11 = MethodInfo_Boolean_NeedRefreshList_BaseShifter;
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"AIShifters",(System_Collections_Generic_HashSet_T__o *)plVar4[10],1,0,1
                     ,MethodInfo_Boolean_NeedRefreshList_BaseShifter);
  if ((char)bVar9 != '\0') {
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_03eb30f9;
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb30fe;
    if ((System_Collections_Generic_HashSet_object__o *)plVar4[10] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb30f9;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar4[10],MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    while( true ) {
      __this_00.fields._8_8_ = pCVar10;
      __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
      __this_00.fields._current = (Il2CppObject *)pSVar12;
      bVar9 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar9 == '\0') break;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)SStack_48.fields._current,
                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        if ((Characters_WallColossalShifter_o *)SStack_48.fields._current ==
            (Characters_WallColossalShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((char)((Characters_WallColossalShifter_Fields *)
                   ((long)SStack_48.fields._current + 0x10))->CustomDamage != '\0') &&
           ((*(char *)&((Characters_WallColossalShifter_Fields *)
                       ((long)SStack_48.fields._current + 0x10))->FeedVictimName == '\0' ||
            (*(char *)((long)&(((Characters_WallColossalShifter_Fields *)
                               ((long)SStack_48.fields._current + 0x10))->_previousCoreLocalPosition
                              ).fields.y + 2) != '\0')))) {
          bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
          if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
               naturalAligment < bVar2) ||
             ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
              typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_02 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_02,(Characters_BaseShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_02,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_03 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
            bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
            if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                 naturalAligment < bVar2) ||
               ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(SStack_48.fields._current);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor
                      (__this_03,(Characters_WallColossalShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_03);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_03,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_01.fields._8_8_ = pCVar10;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
    __this_01.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb30f9;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar7,(Il2CppObject *)"AIShifters",(Il2CppObject *)pCVar10,MethodInfo_Void_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar7,(Il2CppObject *)"AIShifters",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar10;
  }
LAB_03eb30f9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerShifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerShifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb3200

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerShifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  long lVar8;
  bool_conflict bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_02;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_03;
  MethodInfo_24ABFA0 *pMVar11;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_05703882 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    il2cpp_init_method_metadata(&"PlayerShifters");
    DAT_05703882 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_03eb36d9;
  if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb36de:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar11 = MethodInfo_Boolean_NeedRefreshList_BaseShifter;
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"PlayerShifters",(System_Collections_Generic_HashSet_T__o *)plVar4[10],0,1,1
                     ,MethodInfo_Boolean_NeedRefreshList_BaseShifter);
  if ((char)bVar9 != '\0') {
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_03eb36d9;
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb36de;
    if ((System_Collections_Generic_HashSet_object__o *)plVar4[10] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb36d9;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar4[10],MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    while( true ) {
      __this_00.fields._8_8_ = pCVar10;
      __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
      __this_00.fields._current = (Il2CppObject *)pSVar12;
      bVar9 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar9 == '\0') break;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)SStack_48.fields._current,
                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        if ((Characters_WallColossalShifter_o *)SStack_48.fields._current ==
            (Characters_WallColossalShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((char)((Characters_WallColossalShifter_Fields *)
                   ((long)SStack_48.fields._current + 0x10))->CustomDamage == '\0') &&
           ((*(char *)&((Characters_WallColossalShifter_Fields *)
                       ((long)SStack_48.fields._current + 0x10))->FeedVictimName == '\0' ||
            (*(char *)((long)&(((Characters_WallColossalShifter_Fields *)
                               ((long)SStack_48.fields._current + 0x10))->_previousCoreLocalPosition
                              ).fields.y + 2) != '\0')))) {
          bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
          if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
               naturalAligment < bVar2) ||
             ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
              typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_02 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_02,(Characters_BaseShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_02,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_03 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
            bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
            if (((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                 naturalAligment < bVar2) ||
               ((((Characters_WallColossalShifter_c *)(SStack_48.fields._current)->klass)->_2).
                typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(SStack_48.fields._current);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor
                      (__this_03,(Characters_WallColossalShifter_o *)SStack_48.fields._current,
                       (MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,__this_03);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)__this_03,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_01.fields._8_8_ = pCVar10;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar11;
    __this_01.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb36d9;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar7,(Il2CppObject *)"PlayerShifters",(Il2CppObject *)pCVar10,MethodInfo_Void_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar7,(Il2CppObject *)"PlayerShifters",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar10;
  }
LAB_03eb36d9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Humans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Humans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb37e0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Humans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *pCVar8;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_04;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_05703883 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_Human);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Humans");
    DAT_05703883 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb3bf6;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb3bfb:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_Human;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"Humans",(System_Collections_Generic_HashSet_T__o *)plVar3[8],1,1,0,
                     MethodInfo_Boolean_NeedRefreshList_Human);
  if ((char)bVar7 != '\0') {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar8,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb3bf6;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb3bfb;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[8] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb3bf6;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[8],MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (pCVar8 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_02.fields._8_8_ = pCVar8;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_02.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0)
          goto LAB_03eb3bf1;
          if (*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                        FeedVictimName == '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_01.fields._8_8_ = pCVar8;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0) {
LAB_03eb3bf1:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                        FeedVictimName == '\0') {
            __this_00 = (pCVar8->fields).List;
            __this_04 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
            CustomLogic_CustomLogicHumanBuiltin___ctor
                      (__this_04,(Characters_Human_o *)SStack_48.fields._current,(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_03.fields._8_8_ = pCVar8;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_03.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb3bf6;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"Humans",(Il2CppObject *)pCVar8,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"Humans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar8;
  }
LAB_03eb3bf6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AIHumans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AIHumans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb3ce0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AIHumans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *pCVar8;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_04;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_05703884 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_Human);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AIHumans");
    DAT_05703884 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb40fc;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb4101:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_Human;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"AIHumans",(System_Collections_Generic_HashSet_T__o *)plVar3[8],1,0,0,
                     MethodInfo_Boolean_NeedRefreshList_Human);
  if ((char)bVar7 != '\0') {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar8,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb40fc;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb4101;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[8] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb40fc;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[8],MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (pCVar8 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_02.fields._8_8_ = pCVar8;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_02.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0)
          goto LAB_03eb40f7;
          if ((*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                         FeedVictimName == '\0') &&
             ((char)((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage != '\0')) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_01.fields._8_8_ = pCVar8;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0) {
LAB_03eb40f7:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                         FeedVictimName == '\0') &&
             ((char)((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage != '\0')) {
            __this_00 = (pCVar8->fields).List;
            __this_04 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
            CustomLogic_CustomLogicHumanBuiltin___ctor
                      (__this_04,(Characters_Human_o *)SStack_48.fields._current,(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_03.fields._8_8_ = pCVar8;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_03.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb40fc;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"AIHumans",(Il2CppObject *)pCVar8,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"AIHumans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar8;
  }
LAB_03eb40fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerHumans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerHumans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb41f0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerHumans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *pCVar8;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_04;
  MethodInfo_24ABFA0 *pMVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_05703885 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_NeedRefreshList_Human);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"PlayerHumans");
    DAT_05703885 = '\x01';
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03eb460c;
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
LAB_03eb4611:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pMVar9 = MethodInfo_Boolean_NeedRefreshList_Human;
  bVar7 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
                    (__this,"PlayerHumans",(System_Collections_Generic_HashSet_T__o *)plVar3[8],0,1,0,
                     MethodInfo_Boolean_NeedRefreshList_Human);
  if ((char)bVar7 != '\0') {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar8,(MethodInfo *)0x0);
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_03eb460c;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) goto LAB_03eb4611;
    if ((System_Collections_Generic_HashSet_object__o *)plVar3[8] ==
        (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03eb460c;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[8],MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
    if (pCVar8 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        __this_02.fields._8_8_ = pCVar8;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_02.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0)
          goto LAB_03eb4607;
          if ((*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                         FeedVictimName == '\0') &&
             ((char)((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage == '\0')) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while( true ) {
        __this_01.fields._8_8_ = pCVar8;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') break;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)SStack_48.fields._current,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if ((Characters_Human_o *)SStack_48.fields._current == (Characters_Human_o *)0x0) {
LAB_03eb4607:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(char *)&((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                         FeedVictimName == '\0') &&
             ((char)((Characters_Human_Fields *)((long)SStack_48.fields._current + 0x10))->
                    CustomDamage == '\0')) {
            __this_00 = (pCVar8->fields).List;
            __this_04 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
            CustomLogic_CustomLogicHumanBuiltin___ctor
                      (__this_04,(Characters_Human_o *)SStack_48.fields._current,(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    __this_03.fields._8_8_ = pCVar8;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pMVar9;
    __this_03.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedLists;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eb460c;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar5,(Il2CppObject *)"PlayerHumans",(Il2CppObject *)pCVar8,MethodInfo_Void_set_Item);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar8 = (CustomLogic_CustomLogicListBuiltin_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar5,(Il2CppObject *)"PlayerHumans",MethodInfo_CustomLogicListBuiltin_get_Item);
    return pCVar8;
  }
LAB_03eb460c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Loadouts
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Loadouts (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb4700

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Loadouts
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  System_Object_array *pSVar5;
  long lVar6;
  uint uVar7;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Converter_T__TOutput__o *converter;
  System_Collections_Generic_List_TOutput__o *pSVar8;
  
  if (DAT_05703886 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Converter_string__object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object__ConvertAll_Object);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Object__get_Loadouts_b__28_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703886 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (lVar3 == 0) goto LAB_03eb4c30;
  lVar3 = *(long *)(lVar3 + 0x58);
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_03eb4c30;
  if (*(char *)(*(long *)(lVar3 + 0x58) + 0x11) == '\0') {
LAB_03eb48a4:
    lVar6 = *(long *)(lVar3 + 0x60);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar6 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03eb4c30;
    pIVar4 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_03eb4c30;
    uVar7 = (__this_00->fields)._size;
    if ((uint)pSVar5->max_length <= uVar7) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar4,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      goto LAB_03eb48a4;
    }
    (__this_00->fields)._size = uVar7 + 1;
    pSVar5->m_Items[(int)uVar7] = pIVar4;
    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar7);
    lVar6 = *(long *)(lVar3 + 0x60);
  }
  if (lVar6 == 0) goto LAB_03eb4c30;
  if (*(char *)(lVar6 + 0x11) == '\0') {
LAB_03eb494d:
    lVar6 = *(long *)(lVar3 + 0x68);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar6 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03eb4c30;
    pIVar4 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_03eb4c30;
    uVar7 = (__this_00->fields)._size;
    if ((uint)pSVar5->max_length <= uVar7) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar4,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      goto LAB_03eb494d;
    }
    (__this_00->fields)._size = uVar7 + 1;
    pSVar5->m_Items[(int)uVar7] = pIVar4;
    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar7);
    lVar6 = *(long *)(lVar3 + 0x68);
  }
  if (lVar6 == 0) goto LAB_03eb4c30;
  if (*(char *)(lVar6 + 0x11) == '\0') {
LAB_03eb49f6:
    lVar3 = *(long *)(lVar3 + 0x70);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar6 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03eb4c30;
    pIVar4 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_03eb4c30;
    uVar7 = (__this_00->fields)._size;
    if ((uint)pSVar5->max_length <= uVar7) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar4,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      goto LAB_03eb49f6;
    }
    (__this_00->fields)._size = uVar7 + 1;
    pSVar5->m_Items[(int)uVar7] = pIVar4;
    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar7);
    lVar3 = *(long *)(lVar3 + 0x70);
  }
  if (lVar3 == 0) goto LAB_03eb4c30;
  if (*(char *)(lVar3 + 0x11) == '\0') {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03eb4c30;
    iVar2 = (__this_00->fields)._size;
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03eb4c30;
    pIVar4 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_03eb4c30;
    uVar7 = (__this_00->fields)._size;
    if (uVar7 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar7 + 1;
      pSVar5->m_Items[(int)uVar7] = pIVar4;
      il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar7);
      iVar2 = (__this_00->fields)._size;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar4,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      iVar2 = (__this_00->fields)._size;
    }
  }
  if (iVar2 == 0) {
    uVar7 = 0;
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
      uVar7 = (__this_00->fields)._size;
    }
    lVar3 = MethodInfo_Void_Add;
    pIVar4 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_03eb4c30;
    if (uVar7 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar7 + 1;
      pSVar5->m_Items[(int)uVar7] = pIVar4;
      il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar7);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar4,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    converter = *(System_Converter_T__TOutput__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    converter = *(System_Converter_T__TOutput__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (converter == (System_Converter_T__TOutput__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    converter = (System_Converter_T__TOutput__o *)il2cpp_runtime_glue(TypeInfo_Converter_string__object);
    System_Converter<object__object>___ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Converter_T__TOutput__o **)(lVar3 + 8) = converter;
    il2cpp_runtime_glue(lVar3 + 8,converter);
  }
  pSVar8 = System_Collections_Generic_List<object>__ConvertAll<object>
                     (__this_00,converter,MethodInfo_List_1_System_Object__ConvertAll_Object);
  if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    (__this_01->fields).List = (System_Collections_Generic_List_object__o *)pSVar8;
    il2cpp_runtime_glue(&(__this_01->fields).List,pSVar8);
    return __this_01;
  }
LAB_03eb4c30:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultShowKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb4c40

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillScore
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703887 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703887 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x80));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultShowKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3eb4cc0

void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703888 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703888 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(char *)(lVar2 + 0x80) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultHideKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultHideKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb4d50

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_DefaultHideKillScore
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703889 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703889 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x81));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultHideKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultHideKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3eb4dd0

void CustomLogic_CustomLogicGameBuiltin__set_DefaultHideKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0570388a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570388a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(char *)(lVar2 + 0x81) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultAddKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultAddKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb4e60

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_DefaultAddKillScore
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0570388b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570388b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x82));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultAddKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultAddKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3eb4ee0

void CustomLogic_CustomLogicGameBuiltin__set_DefaultAddKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0570388c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570388c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(char *)(lVar2 + 0x82) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ShowScoreboardLoadout
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb4f70

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardLoadout
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0570388d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570388d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x83));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$set_ShowScoreboardLoadout
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3eb4ff0

void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardLoadout
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0570388e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570388e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(char *)(lVar2 + 0x83) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ShowScoreboardStatus
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardStatus (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb5080

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardStatus
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0570388f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570388f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x84));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$set_ShowScoreboardStatus
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardStatus (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3eb5100

void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardStatus
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703890 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703890 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(char *)(lVar2 + 0x84) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ForcedCharacterType
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ForcedCharacterType (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb5190

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ForcedCharacterType
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703891 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703891 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return *(System_String_o **)(lVar2 + 0x88);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$set_ForcedCharacterType
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ForcedCharacterType (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3eb5210

void CustomLogic_CustomLogicGameBuiltin__set_ForcedCharacterType
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703892 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703892 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(System_String_o **)(lVar2 + 0x88) = value;
    il2cpp_runtime_glue(lVar2 + 0x88,value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ForcedLoadout
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ForcedLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb52b0

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ForcedLoadout
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703893 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703893 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return *(System_String_o **)(lVar2 + 0x90);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$set_ForcedLoadout
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ForcedLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3eb5330

void CustomLogic_CustomLogicGameBuiltin__set_ForcedLoadout
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703894 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703894 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(System_String_o **)(lVar2 + 0x90) = value;
    il2cpp_runtime_glue(lVar2 + 0x90,value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$Debug
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__Debug (CustomLogic_CustomLogicGameBuiltin_o* __this, Il2CppObject* message, const MethodInfo* method);
// 0x3eb53d0

void CustomLogic_CustomLogicGameBuiltin__Debug
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,
               MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  System_String_o *message_00;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703895 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"null");
    DAT_05703895 = '\x01';
    method = extraout_RDX;
  }
  pIVar3 = "null";
  if (message != (Il2CppObject *)0x0) {
    pIVar3 = message;
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    message_00 = (System_String_o *)
                 (*pIVar3->klass->vtable[3].methodPtr)
                           (pIVar3,pIVar3->klass->vtable[3].method,method);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 400), lVar2 != 0)) {
      bVar1 = *(byte *)(lVar2 + 0x11);
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_DebugConsole__LogCustomLogic(message_00,(uint)bVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$Print
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__Print (CustomLogic_CustomLogicGameBuiltin_o* __this, Il2CppObject* message, const MethodInfo* method);
// 0x3eb54b0

void CustomLogic_CustomLogicGameBuiltin__Print
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *message_00;
  
  if (DAT_05703896 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&"null");
    DAT_05703896 = '\x01';
  }
  pIVar1 = "null";
  if (message != (Il2CppObject *)0x0) {
    pIVar1 = message;
  }
  if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  message_00 = (System_String_o *)
               (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__AddLine
            (message_00,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$PrintAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__PrintAll (CustomLogic_CustomLogicGameBuiltin_o* __this, Il2CppObject* message, const MethodInfo* method);
// 0x3eb5580

void CustomLogic_CustomLogicGameBuiltin__PrintAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,
               MethodInfo *method)

{
  System_String_o *message_00;
  
  if (DAT_05703897 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05703897 = '\x01';
  }
  if (message != (Il2CppObject *)0x0) {
    message_00 = (System_String_o *)
                 (*message->klass->vtable[3].methodPtr)(message,message->klass->vtable[3].method);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__SendChatAll(message_00,3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$GetGeneralSetting
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin__GetGeneralSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, const MethodInfo* method);
// 0x3eb55f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin__GetGeneralSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,
          MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  System_Type_o *__this_01;
  System_Reflection_PropertyInfo_o *__this_02;
  
  if (DAT_05703898 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Value");
    DAT_05703898 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
     (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18),
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar2 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,(Il2CppObject *)settingName,MethodInfo_BaseSetting_get_Item);
    if (pIVar2 != (Il2CppObject *)0x0) {
      __this_01 = System_Object__GetType(pIVar2,(MethodInfo *)0x0);
      if (__this_01 != (System_Type_o *)0x0) {
        __this_02 = System_Type__GetProperty(__this_01,"Value",(MethodInfo *)0x0);
        if (__this_02 != (System_Reflection_PropertyInfo_o *)0x0) {
          pIVar2 = System_Reflection_PropertyInfo__GetValue(__this_02,pIVar2,(MethodInfo *)0x0);
          return pIVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$GetTitanSetting
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin__GetTitanSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, const MethodInfo* method);
// 0x3eb56b0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin__GetTitanSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,
          MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  System_Type_o *__this_01;
  System_Reflection_PropertyInfo_o *__this_02;
  
  if (DAT_05703899 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Value");
    DAT_05703899 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x50), lVar1 != 0)) &&
     (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18),
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar2 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,(Il2CppObject *)settingName,MethodInfo_BaseSetting_get_Item);
    if (pIVar2 != (Il2CppObject *)0x0) {
      __this_01 = System_Object__GetType(pIVar2,(MethodInfo *)0x0);
      if (__this_01 != (System_Type_o *)0x0) {
        __this_02 = System_Type__GetProperty(__this_01,"Value",(MethodInfo *)0x0);
        if (__this_02 != (System_Reflection_PropertyInfo_o *)0x0) {
          pIVar2 = System_Reflection_PropertyInfo__GetValue(__this_02,pIVar2,(MethodInfo *)0x0);
          return pIVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$GetMiscSetting
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin__GetMiscSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, const MethodInfo* method);
// 0x3eb5770

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin__GetMiscSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,
          MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  System_Type_o *__this_01;
  System_Reflection_PropertyInfo_o *__this_02;
  
  if (DAT_0570389a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Value");
    DAT_0570389a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
     (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18),
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar2 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,(Il2CppObject *)settingName,MethodInfo_BaseSetting_get_Item);
    if (pIVar2 != (Il2CppObject *)0x0) {
      __this_01 = System_Object__GetType(pIVar2,(MethodInfo *)0x0);
      if (__this_01 != (System_Type_o *)0x0) {
        __this_02 = System_Type__GetProperty(__this_01,"Value",(MethodInfo *)0x0);
        if (__this_02 != (System_Reflection_PropertyInfo_o *)0x0) {
          pIVar2 = System_Reflection_PropertyInfo__GetValue(__this_02,pIVar2,(MethodInfo *)0x0);
          return pIVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadGeneralSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGeneralSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x3eb5830

bool_conflict
CustomLogic_CustomLogicGameBuiltin__SetPreloadGeneralSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,
          Il2CppObject *value,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  Il2CppObject *local_20;
  
  if (DAT_0570389b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570389b = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18);
    if (DAT_057038bb == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
      DAT_057038bb = '\x01';
    }
    local_20 = (Il2CppObject *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (__this_00,(Il2CppObject *)settingName,&local_20,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar2 != '\0') {
        bVar2 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue
                          ((Settings_BaseSetting_o *)local_20,value,method_00);
        return bVar2;
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadTitanSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x3eb59b0

bool_conflict
CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,
          Il2CppObject *value,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  Il2CppObject *local_20;
  
  if (DAT_0570389c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570389c = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x50), lVar1 != 0)) {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18);
    if (DAT_057038bb == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
      DAT_057038bb = '\x01';
    }
    local_20 = (Il2CppObject *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (__this_00,(Il2CppObject *)settingName,&local_20,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar2 != '\0') {
        bVar2 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue
                          ((Settings_BaseSetting_o *)local_20,value,method_00);
        return bVar2;
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadMiscSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x3eb5ab0

bool_conflict
CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,
          Il2CppObject *value,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  Il2CppObject *local_20;
  
  if (DAT_0570389d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570389d = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18);
    if (DAT_057038bb == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
      DAT_057038bb = '\x01';
    }
    local_20 = (Il2CppObject *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (__this_00,(Il2CppObject *)settingName,&local_20,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar2 != '\0') {
        bVar2 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue
                          ((Settings_BaseSetting_o *)local_20,value,method_00);
        return bVar2;
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadModeSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x3eb5bb0

bool_conflict
CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,
          Il2CppObject *value,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppObject *local_20;
  
  if (DAT_0570389e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570389e = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = 0;
  method_01 = (MethodInfo *)0x0;
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings(method_01);
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x40), lVar1 == 0)) ||
       (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20),
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)settingName,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      bVar3 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue
                        ((Settings_BaseSetting_o *)local_20,value,method_00);
    }
  }
  return bVar3;
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadMap
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMap (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* mapCategory, System_String_o* mapName, const MethodInfo* method);
// 0x3eb6820

bool_conflict
CustomLogic_CustomLogicGameBuiltin__SetPreloadMap
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *mapCategory,
          System_String_o *mapName,MethodInfo *method)

{
  long lVar1;
  Settings_TypedSetting_T__o *__this_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_0570389f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570389f = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
     (__this_00 = *(Settings_TypedSetting_T__o **)(lVar1 + 0x20),
     __this_00 != (Settings_TypedSetting_T__o *)0x0)) {
    Settings_TypedSetting<object>__set_Value(__this_00,(Il2CppObject *)mapCategory,MethodInfo_Void_set_Value);
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
       (method_00 = *(MethodInfo **)(lVar1 + 0x28), method_00 != (MethodInfo *)0x0)) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)method_00,(Il2CppObject *)mapName,MethodInfo_Void_set_Value);
      CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings(method_00);
      return 0x54f2901;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadGameMode
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* gameMode, const MethodInfo* method);
// 0x3eb6920

bool_conflict
CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *gameMode,MethodInfo *method
          )

{
  long lVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  
  if (DAT_057038a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057038a0 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = 0;
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x38), lVar1 == 0)) ||
       (method_00 = *(MethodInfo **)(lVar1 + 0x30), method_00 == (MethodInfo *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)method_00,(Il2CppObject *)gameMode,MethodInfo_Void_set_Value);
    CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings(method_00);
    bVar3 = 1;
  }
  return bVar3;
}


// CustomLogic.CustomLogicGameBuiltin$$LoadPreloadPreset
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__LoadPreloadPreset (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* presetName, const MethodInfo* method);
// 0x3eb69e0

bool_conflict
CustomLogic_CustomLogicGameBuiltin__LoadPreloadPreset
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *presetName,
          MethodInfo *method)

{
  long lVar1;
  Settings_ListSetting_T__o *__this_00;
  long *plVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_03;
  int iVar4;
  byte bVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_057038a1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameSet);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_BaseSetting__GetItems);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057038a1 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) ||
      (__this_00 = *(Settings_ListSetting_T__o **)(lVar1 + 0x28),
      __this_00 == (Settings_ListSetting_T__o *)0x0)) ||
     (__this_03 = (System_Collections_Generic_List_object__o *)
                  Settings_ListSetting<object>__GetItems(__this_00,MethodInfo_List_1_Settings_BaseSetting__GetItems),
     __this_03 == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_03,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar7 = (Il2CppType *)local_48._8_8_;
  do {
    pIVar8 = local_38;
    __this_01.fields._8_8_ = pIVar7;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_01.fields._current = pIVar8;
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar3 == '\0') {
      iVar4 = 6;
      bVar5 = 0;
      goto LAB_03eb6bea;
    }
    if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar5 = (TypeInfo_InGameSet->_2).naturalAligment;
    if (((pIVar8->klass->_2).naturalAligment < bVar5) ||
       ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_InGameSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar8);
    }
    if (pIVar8[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar9 = pIVar8;
    bVar3 = System_String__Equals
                      ((System_String_o *)((pIVar8[2].klass)->_1).namespaze,presetName,5,
                       (MethodInfo *)0x0);
    local_38 = pIVar9;
  } while ((char)bVar3 == '\0');
  plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (**(code **)(*plVar2 + 0x1c8))(plVar2,pIVar8,*(undefined8 *)(*plVar2 + 0x1d0));
  bVar5 = 1;
  iVar4 = 5;
  pIVar8 = pIVar9;
LAB_03eb6bea:
  __this_02.fields._8_8_ = pIVar7;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
  __this_02.fields._current = pIVar8;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  return (uint)(iVar4 == 5 & bVar5);
}


// CustomLogic.CustomLogicGameBuiltin$$RestartWithPreloadSettings
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__RestartWithPreloadSettings (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eb6ce0

bool_conflict
CustomLogic_CustomLogicGameBuiltin__RestartWithPreloadSettings
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  
  if (DAT_057038a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038a2 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = 0;
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
    bVar2 = 1;
  }
  return bVar2;
}


// CustomLogic.CustomLogicGameBuiltin$$End
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__End (CustomLogic_CustomLogicGameBuiltin_o* __this, float delay, const MethodInfo* method);
// 0x3eb6d60

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicGameBuiltin__End
               (CustomLogic_CustomLogicGameBuiltin_o *__this,float delay,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  float local_1c;
  
  if (DAT_057038a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"EndGameRPC");
    DAT_057038a3 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    return;
  }
  __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  local_1c = delay;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class), lVar5 == 0
       )) {
      uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar6,0);
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = pIVar4;
    il2cpp_runtime_glue(parameters->m_Items,pIVar4);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"EndGameRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$FindCharacterByViewID
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__FindCharacterByViewID (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t viewID, const MethodInfo* method);
// 0x3eb6ed0

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__FindCharacterByViewID
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t viewID,MethodInfo *method)

{
  bool_conflict bVar1;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar2;
  
  if (DAT_057038a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057038a4 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  character = Utility_Util__FindCharacterByViewId(viewID,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 == '\0') {
    if (character == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)&(character->fields).FeedVictimName == '\0') {
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) != 0) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
        return pCVar2;
      }
      il2cpp_init_class();
      pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
      return pCVar2;
    }
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitan
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitan (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, const MethodInfo* method);
// 0x3eb6fa0

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitan
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  
  if (DAT_057038a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038a5 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      titan = GameManagers_InGameManager__SpawnAITitan(__this_00,type,(MethodInfo *)0x0);
      __this_01 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
      CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
      return __this_01;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  return (CustomLogic_CustomLogicTitanBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitanAt
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x3eb70f0

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  
  if (DAT_057038a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038a6 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return (CustomLogic_CustomLogicTitanBuiltin_o *)0x0;
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 != (GameManagers_InGameManager_o *)0x0)) {
    titan = GameManagers_InGameManager__SpawnAITitanAt
                      (__this_00,type,(UnityEngine_Vector3_o)(position->fields).Value.fields,
                       rotationY,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
    CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitans (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x3eb7260

/* WARNING: Removing unreachable block (ram,0x03eb772e) */

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
          MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  GameManagers_InGameManager_o *__this_00;
  System_Collections_Generic_IEnumerable_BasicTitan__c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar7;
  char cVar8;
  bool_conflict bVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  System_Collections_Generic_IEnumerable_BasicTitan__o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  undefined8 *puVar13;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_03;
  long lVar14;
  long lVar15;
  
  if (DAT_057038a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038a7 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return (CustomLogic_CustomLogicListBuiltin_o *)0x0;
  }
  __this_02 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    pSVar10 = GameManagers_InGameManager__SpawnAITitans(__this_00,type,count,(MethodInfo *)0x0);
    if (pSVar10 != (System_Collections_Generic_IEnumerable_BasicTitan__o *)0x0) {
      pSVar5 = pSVar10->klass;
      uVar3._0_1_ = (pSVar5->_2).rank;
      uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IEnumerable_BasicTitan) {
            pVVar11 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar14);
            goto LAB_03eb7411;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar14);
      }
      pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerable_BasicTitan,0);
LAB_03eb7411:
      plVar12 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar14 = *plVar12;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
              puVar13 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 +
                        0x138);
              goto LAB_03eb74b3;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
        }
        puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,0);
LAB_03eb74b3:
        cVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if (cVar8 == '\0') {
          if (plVar12 == (long *)0x0) {
            return __this_02;
          }
          lVar14 = *plVar12;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) == 0) goto LAB_03eb765f;
          lVar15 = 0;
          goto LAB_03eb7650;
        }
        lVar14 = *plVar12;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator_BasicTitan) {
              puVar13 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 +
                        0x138);
              goto LAB_03eb7523;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
        }
        puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator_BasicTitan,0);
LAB_03eb7523:
        titan = (Characters_BasicTitan_o *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_01 = (__this_02->fields).List;
        __this_03 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
        CustomLogic_CustomLogicTitanBuiltin___ctor(__this_03,titan,(MethodInfo *)0x0);
        lVar14 = MethodInfo_Void_Add;
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_01->fields)._items;
        if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar4 = (__this_01->fields)._size;
        if (uVar4 < (uint)pSVar7->max_length) {
          (__this_01->fields)._size = uVar4 + 1;
          pSVar7->m_Items[(int)uVar4] = (Il2CppObject *)__this_03;
          il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar4,__this_03);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_01,(Il2CppObject *)__this_03,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar15 = lVar15 + 0x10, (ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15) {
LAB_03eb7650:
    if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)
                (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
      goto LAB_03eb767d;
    }
  }
LAB_03eb765f:
  puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IDisposable,0);
LAB_03eb767d:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return __this_02;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAsync
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x3eb7750

void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  
  if (DAT_057038a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038a8 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnAITitansAsync(__this_00,type,count,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAt
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x3eb7860

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_InGameManager_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar4;
  long *plVar5;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_03;
  
  if (DAT_057038a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038a9 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_02 = (CustomLogic_CustomLogicListBuiltin_o *)0x0;
  bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    __this_02 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
    if (0 < count) {
      if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        if (DAT_0570387c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_InGameManager);
          il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
          DAT_0570387c = '\x01';
        }
        plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((*(byte *)(lVar6 + 0x130) < bVar2) ||
             (*(Il2CppClass **)(*(long *)(lVar6 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_InGameManager)) {
LAB_03eb7ae3:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
        }
LAB_03eb7ade:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      while( true ) {
        if (DAT_0570387c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_InGameManager);
          il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
          DAT_0570387c = '\x01';
        }
        __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto LAB_03eb7ade;
        bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar2) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameManager))
        goto LAB_03eb7ae3;
        titan = GameManagers_InGameManager__SpawnAITitanAt
                          (__this_00,type,(UnityEngine_Vector3_o)(position->fields).Value.fields,
                           rotationY,(MethodInfo *)0x0);
        __this_03 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
        CustomLogic_CustomLogicTitanBuiltin___ctor(__this_03,titan,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        if ((__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
           (__this_01 = (__this_02->fields).List,
           __this_01 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03eb7ade;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto LAB_03eb7ade;
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar3,__this_03);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_01,(Il2CppObject *)__this_03,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        if (count == 1) break;
        count = count + -1;
      }
    }
  }
  return __this_02;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAtAsync
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x3eb7af0

void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
               CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  
  if (DAT_057038aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038aa = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (DAT_0570387c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570387c = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 != (GameManagers_InGameManager_o *)0x0)) {
    GameManagers_InGameManager__SpawnAITitansAtAsync
              (__this_00,type,count,(UnityEngine_Vector3_o)(position->fields).Value.fields,rotationY
               ,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnShifter
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnShifter (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, const MethodInfo* method);
// 0x3eb7c30

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnShifter
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool_conflict bVar2;
  Characters_WallColossalShifter_o *shifter;
  System_String_o *b;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  
  if (DAT_057038ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    DAT_057038ab = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0;
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    shifter = (Characters_WallColossalShifter_o *)
              GameManagers_InGameManager__SpawnAIShifter(__this_00,type,(MethodInfo *)0x0);
    b = CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal((MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
      CustomLogic_CustomLogicShifterBuiltin___ctor
                ((CustomLogic_CustomLogicShifterBuiltin_o *)__this_01,
                 (Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
    }
    else {
      __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
      if (shifter != (Characters_WallColossalShifter_o *)0x0) {
        bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
        if (((shifter->klass->_2).naturalAligment < bVar1) ||
           ((shifter->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WallColossalShifter)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(shifter);
        }
      }
      CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
    }
  }
  return (CustomLogic_CustomLogicShifterBuiltin_o *)__this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnHuman
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnHuman (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, const MethodInfo* method);
// 0x3eb7dd0

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnHuman
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t costume,System_String_o *costumeName
          ,System_String_o *loadout,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  Characters_Human_o *human;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  
  if (DAT_057038ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038ac = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      human = GameManagers_InGameManager__SpawnAIHuman
                        (__this_00,costume,costumeName,loadout,(MethodInfo *)0x0);
      __this_01 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
      CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
      return __this_01;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  return (CustomLogic_CustomLogicHumanBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnHumanAt
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x3eb7f20

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t costume,System_String_o *costumeName
          ,System_String_o *loadout,CustomLogic_CustomLogicVector3Builtin_o *position,
          float rotationY,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  Characters_Human_o *human;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  
  if (DAT_057038ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057038ad = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    __this_01 = (CustomLogic_CustomLogicHumanBuiltin_o *)0x0;
  }
  else {
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
    }
    if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (__this_00 == (GameManagers_InGameManager_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    human = GameManagers_InGameManager__SpawnAIHumanAt
                      (__this_00,costume,costumeName,loadout,
                       (UnityEngine_Vector3_o)(position->fields).Value.fields,rotationY,
                       (MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
    CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
  }
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnShifterAt
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x3eb80a0

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool_conflict bVar2;
  Characters_WallColossalShifter_o *shifter;
  System_String_o *b;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  
  if (DAT_057038ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    DAT_057038ae = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0;
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (DAT_0570387c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameManager);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_0570387c = '\x01';
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
    }
    if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (__this_00 == (GameManagers_InGameManager_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    shifter = (Characters_WallColossalShifter_o *)
              GameManagers_InGameManager__SpawnAIShifterAt
                        (__this_00,type,(UnityEngine_Vector3_o)(position->fields).Value.fields,
                         rotationY,(MethodInfo *)0x0);
    b = CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal((MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
      CustomLogic_CustomLogicShifterBuiltin___ctor
                ((CustomLogic_CustomLogicShifterBuiltin_o *)__this_01,
                 (Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
    }
    else {
      __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
      if (shifter != (Characters_WallColossalShifter_o *)0x0) {
        bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
        if (((shifter->klass->_2).naturalAligment < bVar1) ||
           ((shifter->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WallColossalShifter)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(shifter);
        }
      }
      CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
    }
  }
  return (CustomLogic_CustomLogicShifterBuiltin_o *)__this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnProjectile
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnProjectile (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* projectileName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* velocity, CustomLogic_CustomLogicVector3Builtin_o* gravity, float liveTime, System_String_o* team, Il2CppObject* extraParam, Il2CppObject* extraParam2, const MethodInfo* method);
// 0x3eb8270

void CustomLogic_CustomLogicGameBuiltin__SpawnProjectile
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *projectileName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,
               CustomLogic_CustomLogicVector3Builtin_o *velocity,
               CustomLogic_CustomLogicVector3Builtin_o *gravity,float liveTime,System_String_o *team
               ,Il2CppObject *extraParam,Il2CppObject *extraParam2,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  System_Object_array *settings;
  long lVar8;
  undefined8 uVar9;
  Il2CppObject **ppIVar10;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Color_o UVar12;
  UnityEngine_Quaternion_o rotation_00;
  undefined1 local_99;
  undefined1 local_98 [16];
  float local_84;
  float local_80;
  float local_7c;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  CustomLogic_CustomLogicVector3Builtin_o *local_50;
  undefined1 local_48 [16];
  
  local_80 = liveTime;
  local_50 = gravity;
  if (DAT_057038af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057038af = '\x01';
  }
  if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = System_String__op_Equality
                    (projectileName,(System_String_o *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = System_String__op_Equality
                      (projectileName,*(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = System_String__op_Equality
                        (projectileName,*(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28)
                         ,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        settings = (System_Object_array *)0x0;
        bVar6 = System_String__op_Equality
                          (projectileName,
                           *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30),
                           (MethodInfo *)0x0);
        if ((char)bVar6 == '\0') goto joined_r0x03eb85dd;
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(extraParam,MethodInfo_Single_ConvertTo_Single);
      local_98._0_4_ = fVar11;
      settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      local_60 = local_98._0_4_;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_60);
      if (settings == (System_Object_array *)0x0) goto LAB_03eb87b4;
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pIVar7,(((settings->obj).klass)->_1).element_class), lVar8 == 0
         )) {
LAB_03eb87be:
        uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar9,0);
      }
      if ((int)settings->max_length == 0) {
LAB_03eb87b9:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      ppIVar10 = settings->m_Items;
      settings->m_Items[0] = pIVar7;
      goto LAB_03eb86f4;
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(extraParam,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if ((pIVar7 == (Il2CppObject *)0x0) || (pIVar7[3].klass == (Il2CppClass *)0x0))
    goto LAB_03eb87b4;
    UVar12 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar7[3].klass,(MethodInfo *)0x0);
    local_98._8_4_ = extraout_XMM0_Dc_00;
    local_98._0_8_ = UVar12.fields._0_8_;
    local_98._12_4_ = extraout_XMM0_Dd_00;
    local_78._8_4_ = in_XMM1_Dc;
    local_78._0_8_ = UVar12.fields._8_8_;
    local_78._12_4_ = in_XMM1_Dd;
    settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    uStack_58 = local_78._0_4_;
    uStack_54 = local_78._4_4_;
    local_60 = local_98._0_4_;
    uStack_5c = local_98._4_4_;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&local_60);
    if (settings == (System_Object_array *)0x0) goto LAB_03eb87b4;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((settings->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03eb87be;
    if ((int)settings->max_length == 0) goto LAB_03eb87b9;
    settings->m_Items[0] = pIVar7;
    il2cpp_runtime_glue(settings->m_Items,pIVar7);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_84 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(extraParam,MethodInfo_Single_ConvertTo_Single);
    pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(extraParam2,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (pIVar7 == (Il2CppObject *)0x0) goto LAB_03eb87b4;
    local_98._0_8_ = projectileName;
    if (pIVar7[3].klass == (Il2CppClass *)0x0) goto LAB_03eb87b4;
    UVar12 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar7[3].klass,(MethodInfo *)0x0);
    local_78._8_4_ = extraout_XMM0_Dc;
    local_78._0_8_ = UVar12.fields._0_8_;
    local_78._12_4_ = extraout_XMM0_Dd;
    local_48._8_4_ = in_XMM1_Dc;
    local_48._0_8_ = UVar12.fields._8_8_;
    local_48._12_4_ = in_XMM1_Dd;
    settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
    local_7c = local_84;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_7c);
    if (settings == (System_Object_array *)0x0) goto LAB_03eb87b4;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((settings->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03eb87be;
    if ((int)settings->max_length == 0) goto LAB_03eb87b9;
    settings->m_Items[0] = pIVar7;
    il2cpp_runtime_glue(settings->m_Items,pIVar7);
    uStack_58 = local_48._0_4_;
    uStack_54 = local_48._4_4_;
    local_60 = local_78._0_4_;
    uStack_5c = local_78._4_4_;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&local_60);
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((settings->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03eb87be;
    if ((uint)settings->max_length < 2) goto LAB_03eb87b9;
    settings->m_Items[1] = pIVar7;
    il2cpp_runtime_glue(settings->m_Items + 1,pIVar7);
    local_99 = 0;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_99);
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((settings->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03eb87be;
    if ((uint)settings->max_length < 3) goto LAB_03eb87b9;
    ppIVar10 = settings->m_Items + 2;
    settings->m_Items[2] = pIVar7;
    projectileName = (System_String_o *)local_98._0_8_;
LAB_03eb86f4:
    il2cpp_runtime_glue(ppIVar10,pIVar7);
  }
joined_r0x03eb85dd:
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (position->fields).Value.fields.x;
    uVar3 = (position->fields).Value.fields.y;
    local_98._4_4_ = uVar3;
    local_98._0_4_ = uVar1;
    local_98._8_8_ = 0;
    local_78._0_4_ = (position->fields).Value.fields.z;
    uVar2 = (rotation->fields).Value.fields.x;
    uVar4 = (rotation->fields).Value.fields.y;
    euler.fields.x = (float)uVar2 * 0.017453292;
    euler.fields.y = (float)uVar4 * 0.017453292;
    euler.fields.z = (rotation->fields).Value.fields.z * 0.017453292;
    rotation_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    auVar5 = local_98;
    if ((velocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (local_50 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      position_00.fields.z = (float)local_78._0_4_;
      position_00.fields.x = (float)local_98._0_4_;
      position_00.fields.y = (float)local_98._4_4_;
      local_98 = auVar5;
      Projectiles_ProjectileSpawner__Spawn
                (projectileName,position_00,rotation_00,
                 (UnityEngine_Vector3_o)(velocity->fields).Value.fields,
                 (UnityEngine_Vector3_o)(local_50->fields).Value.fields,local_80,-1,team,settings,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_03eb87b4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnProjectileWithOwner
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnProjectileWithOwner (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* projectileName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* velocity, CustomLogic_CustomLogicVector3Builtin_o* gravity, float liveTime, CustomLogic_CustomLogicCharacterBuiltin_o* owner, Il2CppObject* extraParam, Il2CppObject* extraParam2, const MethodInfo* method);
// 0x3eb87d0

void CustomLogic_CustomLogicGameBuiltin__SpawnProjectileWithOwner
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *projectileName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,
               CustomLogic_CustomLogicVector3Builtin_o *velocity,
               CustomLogic_CustomLogicVector3Builtin_o *gravity,float liveTime,
               CustomLogic_CustomLogicCharacterBuiltin_o *owner,Il2CppObject *extraParam,
               Il2CppObject *extraParam2,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  Characters_BaseCharacter_o *pCVar8;
  bool_conflict bVar9;
  Il2CppObject *pIVar10;
  System_Object_array *settings;
  long lVar11;
  Photon_Pun_PhotonView_o *pPVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 uVar15;
  undefined4 in_XMM1_Dd;
  undefined4 uVar16;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Color_o UVar17;
  UnityEngine_Quaternion_o UVar18;
  UnityEngine_Vector3_o velocity_00;
  UnityEngine_Vector3_o gravity_00;
  undefined1 local_d9;
  undefined1 local_d8 [16];
  CustomLogic_CustomLogicVector3Builtin_o *local_c0;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  Characters_BaseCharacter_o *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_c0 = velocity;
  local_b0 = liveTime;
  if (DAT_057038b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057038b0 = '\x01';
  }
  if (owner == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) goto LAB_03eb8db0;
  local_60 = (owner->fields).Character;
  if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar9 = System_String__op_Equality
                    (projectileName,(System_String_o *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar9 = System_String__op_Equality
                      (projectileName,*(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = System_String__op_Equality
                        (projectileName,*(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28)
                         ,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        settings = (System_Object_array *)0x0;
        bVar9 = System_String__op_Equality
                          (projectileName,
                           *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30),
                           (MethodInfo *)0x0);
        if ((char)bVar9 == '\0') goto joined_r0x03eb8b69;
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(extraParam,MethodInfo_Single_ConvertTo_Single);
      local_d8._0_4_ = fVar14;
      settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      local_98 = local_d8._0_4_;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_98);
      if (settings == (System_Object_array *)0x0) goto LAB_03eb8db0;
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar11 = il2cpp_runtime_glue(pIVar10,(((settings->obj).klass)->_1).element_class),
         lVar11 == 0)) {
LAB_03eb8dba:
        uVar13 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar13,0);
      }
      if ((int)settings->max_length == 0) {
LAB_03eb8db5:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      settings->m_Items[0] = pIVar10;
      goto LAB_03eb8c81;
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(extraParam,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if ((pIVar10 == (Il2CppObject *)0x0) || (pIVar10[3].klass == (Il2CppClass *)0x0))
    goto LAB_03eb8db0;
    UVar17 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar10[3].klass,(MethodInfo *)0x0);
    local_d8._8_4_ = extraout_XMM0_Dc_00;
    local_d8._0_8_ = UVar17.fields._0_8_;
    local_d8._12_4_ = extraout_XMM0_Dd_00;
    local_a8._8_4_ = in_XMM1_Dc;
    local_a8._0_8_ = UVar17.fields._8_8_;
    local_a8._12_4_ = in_XMM1_Dd;
    settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    uStack_90 = local_a8._0_4_;
    uStack_8c = local_a8._4_4_;
    local_98 = local_d8._0_4_;
    uStack_94 = local_d8._4_4_;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&local_98);
    if (settings == (System_Object_array *)0x0) goto LAB_03eb8db0;
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (lVar11 = il2cpp_runtime_glue(pIVar10,(((settings->obj).klass)->_1).element_class),
       lVar11 == 0)) goto LAB_03eb8dba;
    if ((int)settings->max_length == 0) goto LAB_03eb8db5;
    settings->m_Items[0] = pIVar10;
    il2cpp_runtime_glue();
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(extraParam,MethodInfo_Single_ConvertTo_Single);
    local_88._0_4_ = fVar14;
    pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(extraParam2,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (pIVar10 == (Il2CppObject *)0x0) goto LAB_03eb8db0;
    local_d8._0_8_ = gravity;
    if (pIVar10[3].klass == (Il2CppClass *)0x0) goto LAB_03eb8db0;
    UVar17 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar10[3].klass,(MethodInfo *)0x0);
    local_a8._8_4_ = extraout_XMM0_Dc;
    local_a8._0_8_ = UVar17.fields._0_8_;
    local_a8._12_4_ = extraout_XMM0_Dd;
    local_78._8_4_ = in_XMM1_Dc;
    local_78._0_8_ = UVar17.fields._8_8_;
    local_78._12_4_ = in_XMM1_Dd;
    settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
    local_ac = local_88._0_4_;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_ac);
    if (settings == (System_Object_array *)0x0) goto LAB_03eb8db0;
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (lVar11 = il2cpp_runtime_glue(pIVar10,(((settings->obj).klass)->_1).element_class),
       lVar11 == 0)) goto LAB_03eb8dba;
    if ((int)settings->max_length == 0) goto LAB_03eb8db5;
    settings->m_Items[0] = pIVar10;
    il2cpp_runtime_glue(settings->m_Items,pIVar10);
    uStack_90 = local_78._0_4_;
    uStack_8c = local_78._4_4_;
    local_98 = local_a8._0_4_;
    uStack_94 = local_a8._4_4_;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&local_98);
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (lVar11 = il2cpp_runtime_glue(pIVar10,(((settings->obj).klass)->_1).element_class),
       lVar11 == 0)) goto LAB_03eb8dba;
    if ((uint)settings->max_length < 2) goto LAB_03eb8db5;
    settings->m_Items[1] = pIVar10;
    il2cpp_runtime_glue(settings->m_Items + 1,pIVar10);
    local_d9 = 0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_d9);
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (lVar11 = il2cpp_runtime_glue(pIVar10,(((settings->obj).klass)->_1).element_class),
       lVar11 == 0)) goto LAB_03eb8dba;
    if ((uint)settings->max_length < 3) goto LAB_03eb8db5;
    settings->m_Items[2] = pIVar10;
    gravity = (CustomLogic_CustomLogicVector3Builtin_o *)local_d8._0_8_;
LAB_03eb8c81:
    il2cpp_runtime_glue();
  }
joined_r0x03eb8b69:
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (position->fields).Value.fields.x;
    uVar3 = (position->fields).Value.fields.y;
    local_d8._4_4_ = uVar3;
    local_d8._0_4_ = uVar1;
    local_d8._8_8_ = 0;
    local_a8._0_4_ = (position->fields).Value.fields.z;
    uVar2 = (rotation->fields).Value.fields.x;
    uVar4 = (rotation->fields).Value.fields.y;
    uVar15 = 0;
    uVar16 = 0;
    euler.fields.x = (float)uVar2 * 0.017453292;
    euler.fields.y = (float)uVar4 * 0.017453292;
    euler.fields.z = (rotation->fields).Value.fields.z * 0.017453292;
    UVar18 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    pCVar8 = local_60;
    if ((local_c0 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (gravity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      local_88._8_4_ = uVar15;
      local_88._0_8_ = UVar18.fields._8_8_;
      local_88._12_4_ = uVar16;
      local_78._8_4_ = extraout_XMM0_Dc_01;
      local_78._0_8_ = UVar18.fields._0_8_;
      local_78._12_4_ = extraout_XMM0_Dd_01;
      if (local_60 != (Characters_BaseCharacter_o *)0x0) {
        local_48._0_4_ = (local_c0->fields).Value.fields.x;
        local_48._4_4_ = (local_c0->fields).Value.fields.y;
        uStack_40 = 0;
        local_c0 = (CustomLogic_CustomLogicVector3Builtin_o *)
                   CONCAT44(local_c0._4_4_,(local_c0->fields).Value.fields.z);
        local_58._0_4_ = (gravity->fields).Value.fields.x;
        local_58._4_4_ = (gravity->fields).Value.fields.y;
        uStack_50 = 0;
        local_b4 = (gravity->fields).Value.fields.z;
        pPVar12 = Photon_Pun_MonoBehaviourPun__get_photonView
                            ((Photon_Pun_MonoBehaviourPun_o *)local_60,(MethodInfo *)0x0);
        auVar7 = local_78;
        auVar6 = local_88;
        auVar5 = local_d8;
        if (pPVar12 != (Photon_Pun_PhotonView_o *)0x0) {
          position_00.fields.z = (float)local_a8._0_4_;
          position_00.fields.x = (float)local_d8._0_4_;
          position_00.fields.y = (float)local_d8._4_4_;
          velocity_00.fields.z = local_c0._0_4_;
          velocity_00.fields.x = (float)(undefined4)local_48;
          velocity_00.fields.y = (float)local_48._4_4_;
          UVar18.fields.z = (float)local_88._0_4_;
          UVar18.fields.w = (float)local_88._4_4_;
          UVar18.fields.x = (float)local_78._0_4_;
          UVar18.fields.y = (float)local_78._4_4_;
          gravity_00.fields.z = local_b4;
          gravity_00.fields.x = (float)(undefined4)local_58;
          gravity_00.fields.y = (float)local_58._4_4_;
          local_d8 = auVar5;
          local_88 = auVar6;
          local_78 = auVar7;
          Projectiles_ProjectileSpawner__Spawn
                    (projectileName,position_00,UVar18,velocity_00,gravity_00,local_b0,
                     (pPVar12->fields).viewIdField,*(System_String_o **)&(pCVar8->fields).AI,
                     settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03eb8db0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnEffect
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnEffect (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, float scale, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x3eb8dd0

void CustomLogic_CustomLogicGameBuiltin__SpawnEffect
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *effectName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,float scale,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  MethodInfo *in_RAX;
  
  CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
            (effectName,position,rotation,scale,1,tsExplodeColor,tsKillSound,in_RAX);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnUnscaledEffect
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnUnscaledEffect (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x3eb9190

void CustomLogic_CustomLogicGameBuiltin__SpawnUnscaledEffect
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *effectName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  MethodInfo *in_RAX;
  
  CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
            (effectName,position,rotation,1.0,0,tsExplodeColor,tsKillSound,in_RAX);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayer
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayer (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, bool force, const MethodInfo* method);
// 0x3eb91b0

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayer
               (CustomLogic_CustomLogicGameBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,bool_conflict force,MethodInfo *method
               )

{
  byte bVar1;
  Photon_Realtime_Player_o *pPVar2;
  GameManagers_InGameManager_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_29;
  
  if (DAT_057038b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SpawnPlayerRPC");
    DAT_057038b1 = '\x01';
  }
  if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    pPVar2 = (player->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 == pPVar5) {
      if (DAT_0570387c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameManager);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_0570387c = '\x01';
      }
      __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
        bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
          GameManagers_InGameManager__SpawnPlayer(__this_00,force & 0xff,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
    }
    else {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      else {
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      if (cVar3 == '\0') {
        return;
      }
      __this_01 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      pPVar2 = (player->fields).Player;
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      local_29 = (undefined1)force;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_29);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (lVar7 = il2cpp_runtime_glue(pIVar6,(((parameters->obj).klass)->_1).element_class),
           lVar7 == 0)) {
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar6;
        il2cpp_runtime_glue(parameters->m_Items,pIVar6);
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_01,"SpawnPlayerRPC",pPVar2,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll (CustomLogic_CustomLogicGameBuiltin_o* __this, bool force, const MethodInfo* method);
// 0x3eb93e0

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool_conflict force,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_19;
  
  if (DAT_057038b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SpawnPlayerRPC");
    DAT_057038b2 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    return;
  }
  __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  local_19 = (char)force;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class), lVar5 == 0
       )) {
      uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar6,0);
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = pIVar4;
    il2cpp_runtime_glue(parameters->m_Items,pIVar4);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SpawnPlayerRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAt
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, bool force, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x3eb9540

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt
               (CustomLogic_CustomLogicGameBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,bool_conflict force,
               CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_o *pPVar2;
  GameManagers_InGameManager_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_49;
  float local_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  
  local_48 = rotationY;
  if (DAT_057038b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"SpawnPlayerAtRPC");
    DAT_057038b3 = '\x01';
  }
  if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    pPVar2 = (player->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 == pPVar5) {
      if (DAT_0570387c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameManager);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_0570387c = '\x01';
      }
      __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
        bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
      }
      if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 != (GameManagers_InGameManager_o *)0x0)) {
        GameManagers_InGameManager__SpawnPlayerAt
                  (__this_00,force & 0xff,(UnityEngine_Vector3_o)(position->fields).Value.fields,
                   local_48,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      else {
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      if (cVar3 == '\0') {
        return;
      }
      __this_01 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      pPVar2 = (player->fields).Player;
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
      local_49 = (undefined1)force;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_49);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (lVar7 = il2cpp_runtime_glue(pIVar6,(((parameters->obj).klass)->_1).element_class),
           lVar7 == 0)) goto LAB_03eb9850;
        if ((int)parameters->max_length == 0) goto LAB_03eb984b;
        parameters->m_Items[0] = pIVar6;
        il2cpp_runtime_glue(parameters->m_Items,pIVar6);
        if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto LAB_03eb9846;
        local_38 = (position->fields).Value.fields.z;
        local_40._0_4_ = (position->fields).Value.fields.x;
        local_40._4_4_ = (position->fields).Value.fields.y;
        pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_40);
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (lVar7 = il2cpp_runtime_glue(pIVar6,(((parameters->obj).klass)->_1).element_class),
           lVar7 == 0)) {
LAB_03eb9850:
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar6;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar6);
          local_44 = local_48;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_44);
          if ((pIVar6 != (Il2CppObject *)0x0) &&
             (lVar7 = il2cpp_runtime_glue(pIVar6,(((parameters->obj).klass)->_1).element_class),
             lVar7 == 0)) goto LAB_03eb9850;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar6;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar6);
            if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_01,"SpawnPlayerAtRPC",pPVar2,parameters,(MethodInfo *)0x0)
              ;
              return;
            }
            goto LAB_03eb9846;
          }
        }
LAB_03eb984b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_03eb9846:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAtAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll (CustomLogic_CustomLogicGameBuiltin_o* __this, bool force, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x3eb9870

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool_conflict force,
               CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  char cVar1;
  bool_conflict bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_41;
  float local_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  
  local_40 = rotationY;
  if (DAT_057038b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"SpawnPlayerAtRPC");
    DAT_057038b4 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03eb98a3;
LAB_03eb9909:
    il2cpp_init_class();
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03eb9909;
LAB_03eb98a3:
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  if (cVar1 == '\0') {
    return;
  }
  __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
  local_41 = (char)force;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_41);
  if (parameters == (System_Object_array *)0x0) {
LAB_03eb9a8f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pIVar3 != (Il2CppObject *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
  goto LAB_03eb9a94;
  if ((int)parameters->max_length == 0) goto LAB_03eb9a8a;
  parameters->m_Items[0] = pIVar3;
  il2cpp_runtime_glue(parameters->m_Items,pIVar3);
  if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto LAB_03eb9a8f;
  local_30 = (position->fields).Value.fields.z;
  local_38._0_4_ = (position->fields).Value.fields.x;
  local_38._4_4_ = (position->fields).Value.fields.y;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_38);
  if ((pIVar3 != (Il2CppObject *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
  {
LAB_03eb9a94:
    uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar5,0);
  }
  if (1 < (uint)parameters->max_length) {
    parameters->m_Items[1] = pIVar3;
    il2cpp_runtime_glue(parameters->m_Items + 1,pIVar3);
    local_3c = local_40;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_3c);
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0
       )) goto LAB_03eb9a94;
    if (2 < (uint)parameters->max_length) {
      parameters->m_Items[2] = pIVar3;
      il2cpp_runtime_glue(parameters->m_Items + 2,pIVar3);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SpawnPlayerAtRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03eb9a8f;
    }
  }
LAB_03eb9a8a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPlaylist
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SetPlaylist (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* playlist, const MethodInfo* method);
// 0x3eb9ab0

void CustomLogic_CustomLogicGameBuiltin__SetPlaylist
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *playlist,
               MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057038b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057038b5 = '\x01';
  }
  ApplicationManagers_MusicManager__SetPlaylist(playlist,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x24) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SetSong
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SetSong (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* song, const MethodInfo* method);
// 0x3eb9b10

void CustomLogic_CustomLogicGameBuiltin__SetSong
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *song,
               MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057038b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057038b6 = '\x01';
  }
  ApplicationManagers_MusicManager__SetSong(song,0.0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x24) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$DrawRay
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__DrawRay (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* dir, CustomLogic_CustomLogicColorBuiltin_o* color, float duration, const MethodInfo* method);
// 0x3eb9b80

void CustomLogic_CustomLogicGameBuiltin__DrawRay
               (CustomLogic_CustomLogicGameBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *start,
               CustomLogic_CustomLogicVector3Builtin_o *dir,
               CustomLogic_CustomLogicColorBuiltin_o *color,float duration,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_Vector3_Fields start_00;
  UnityEngine_Vector3_Fields dir_00;
  UnityEngine_Color_o color_00;
  
  if (DAT_057038b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_057038b7 = '\x01';
  }
  if ((((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (dir != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
     (__this_00 = (color->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    start_00 = (start->fields).Value.fields;
    dir_00 = (dir->fields).Value.fields;
    color_00 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__DrawRay
              ((UnityEngine_Vector3_o)start_00,(UnityEngine_Vector3_o)dir_00,color_00,duration,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t damage, const MethodInfo* method);
// 0x3eb9c80

void CustomLogic_CustomLogicGameBuiltin__ShowKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t damage,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this_00;
  
  if (DAT_057038b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057038b8 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowKillScore(__this_00,damage,1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillFeed
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillFeed (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x3eb9d60

void CustomLogic_CustomLogicGameBuiltin__ShowKillFeed
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *killer,
               System_String_o *victim,int32_t score,System_String_o *weapon,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this_00;
  
  if (DAT_057038b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057038b9 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowKillFeed(__this_00,killer,victim,score,weapon,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillFeedAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x3eb9e50

void CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *killer,
               System_String_o *victim,int32_t score,System_String_o *weapon,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  undefined8 in_RAX;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_057038ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"ShowKillFeedRPC");
    DAT_057038ba = '\x01';
  }
  __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
  if (parameters == (System_Object_array *)0x0) {
LAB_03eb9ffd:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (killer != (System_String_o *)0x0) {
    lVar1 = il2cpp_runtime_glue(killer,(((parameters->obj).klass)->_1).element_class);
    if (lVar1 == 0) goto LAB_03eb9fee;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)killer;
    il2cpp_runtime_glue(parameters->m_Items,killer);
    if (victim != (System_String_o *)0x0) {
      lVar1 = il2cpp_runtime_glue(victim,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_03eb9fee;
    }
    if ((uint)parameters->max_length < 2) goto LAB_03eb9fe9;
    parameters->m_Items[1] = (Il2CppObject *)victim;
    il2cpp_runtime_glue(parameters->m_Items + 1,victim);
    uStack_38 = CONCAT44(score,(undefined4)uStack_38);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_38 + 4);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_03eb9fee;
    }
    if (2 < (uint)parameters->max_length) {
      parameters->m_Items[2] = pIVar2;
      il2cpp_runtime_glue(parameters->m_Items + 2,pIVar2);
      if (weapon != (System_String_o *)0x0) {
        lVar1 = il2cpp_runtime_glue(weapon,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
LAB_03eb9fee:
          uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar3,0);
        }
      }
      if (3 < (uint)parameters->max_length) {
        parameters->m_Items[3] = (Il2CppObject *)weapon;
        il2cpp_runtime_glue(parameters->m_Items + 3,weapon);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"ShowKillFeedRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto LAB_03eb9ffd;
      }
    }
  }
LAB_03eb9fe9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$TrySetTypedSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__TrySetTypedSetting (System_Collections_Generic_Dictionary_string__BaseSetting__o* typedSettings, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x3eb5930

bool_conflict
CustomLogic_CustomLogicGameBuiltin__TrySetTypedSetting
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *typedSettings,
          System_String_o *settingName,Il2CppObject *value,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  Il2CppObject *local_20;
  
  if (DAT_057038bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057038bb = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  if (typedSettings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)typedSettings,
                       (Il2CppObject *)settingName,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      bVar1 = 0;
    }
    else {
      bVar1 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue
                        ((Settings_BaseSetting_o *)local_20,value,method_00);
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$TryAssignSettingValue
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue (Settings_BaseSetting_o* setting, Il2CppObject* value, const MethodInfo* method);
// 0x3eb6580

bool_conflict
CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue
          (Settings_BaseSetting_o *setting,Il2CppObject *value,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  undefined7 uVar4;
  MethodInfo *method_00;
  undefined1 local_19;
  float local_18;
  int32_t local_14;
  
  if (DAT_057038bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057038bc = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  iVar1 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  uVar4 = (undefined7)((ulong)value >> 8);
  switch(iVar1) {
  case 1:
    bVar2 = CustomLogic_CustomLogicGameBuiltin__ConvertToBool(value,method_00);
    local_19 = (undefined1)bVar2;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
    Settings_SettingsUtil__SetSettingValue(setting,1,pIVar3,(MethodInfo *)0x0);
    break;
  case 2:
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_14 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(value,MethodInfo_Int32_ConvertTo_Int32);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_14);
    Settings_SettingsUtil__SetSettingValue(setting,2,pIVar3,(MethodInfo *)0x0);
    break;
  case 3:
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_18 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(value,MethodInfo_Single_ConvertTo_Single);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_18);
    Settings_SettingsUtil__SetSettingValue(setting,3,pIVar3,(MethodInfo *)0x0);
    break;
  case 4:
    if ((value == (Il2CppObject *)0x0) ||
       (pIVar3 = (Il2CppObject *)
                 (*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    Settings_SettingsUtil__SetSettingValue(setting,4,pIVar3,(MethodInfo *)0x0);
    return (bool_conflict)CONCAT71(uVar4,1);
  default:
    return 0;
  }
  return (bool_conflict)CONCAT71(uVar4,1);
}


// CustomLogic.CustomLogicGameBuiltin$$EnsurePreloadSelectionsAndModeSettings
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings (const MethodInfo* method);
// 0x3eb5ca0

void CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  System_String_o *pSVar4;
  Settings_TypedSetting_T__o *pSVar5;
  System_String_o *gameMode;
  Settings_InGameMiscSettings_o *settings;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  Map_MapScript_o *__this_02;
  System_String_o *pSVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_04;
  Il2CppObject *value;
  System_String_o **ppSVar11;
  ulong uVar12;
  System_Collections_Generic_List_T__o *pSVar13;
  Il2CppMethodPointer pIVar14;
  Il2CppObject *key;
  Il2CppObject *pIVar15;
  
  if (DAT_057038bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CreateGameGeneralPanel);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057038bd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((((lVar1 == 0) || (lVar2 = *(long *)(lVar1 + 0x38), lVar2 == 0)) ||
      (*(long *)(lVar2 + 0x20) == 0)) || (*(long *)(lVar2 + 0x28) == 0)) goto LAB_03eb64c0;
  pSVar8 = *(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x18);
  pSVar10 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = Map_BuiltinLevels__GetMapNames(pSVar8,(MethodInfo *)0x0);
  if (pSVar7 == (System_String_array *)0x0) goto LAB_03eb64c0;
  uVar12 = 0;
  do {
    uVar3 = pSVar7->max_length;
    if ((long)(int)uVar3 <= (long)uVar12) {
      if (*(long *)(lVar1 + 0x38) == 0) goto LAB_03eb64c0;
      pSVar5 = *(Settings_TypedSetting_T__o **)(*(long *)(lVar1 + 0x38) + 0x28);
      if (uVar3 == 0) {
        ppSVar11 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
      }
      else {
        if ((int)uVar3 == 0) goto LAB_03eb63dd;
        ppSVar11 = pSVar7->m_Items;
      }
      if (pSVar5 == (Settings_TypedSetting_T__o *)0x0) goto LAB_03eb64c0;
      Settings_TypedSetting<object>__set_Value(pSVar5,(Il2CppObject *)*ppSVar11,MethodInfo_Void_set_Value);
      break;
    }
    if ((uVar3 & 0xffffffff) <= uVar12) goto LAB_03eb63dd;
    bVar6 = System_String__op_Equality(pSVar7->m_Items[uVar12],pSVar10,(MethodInfo *)0x0);
    uVar12 = uVar12 + 1;
  } while ((char)bVar6 == '\0');
  __this_02 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
  Map_MapScript___ctor(__this_02,(MethodInfo *)0x0);
  lVar2 = *(long *)(lVar1 + 0x38);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(long *)(lVar2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(long *)(lVar2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar8 = *(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x18);
  pSVar10 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = Map_BuiltinLevels__LoadMap(pSVar8,pSVar10,(MethodInfo *)0x0);
  if (__this_02 == (Map_MapScript_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_02->klass->vtable)._5_Deserialize.methodPtr)
            (__this_02,pSVar8,(__this_02->klass->vtable)._5_Deserialize.method);
  pSVar8 = (__this_02->fields).Logic;
  bVar6 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
  lVar2 = *(long *)(lVar1 + 0x38);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) || (*(long *)(lVar2 + 0x28) == 0))
  goto LAB_03eb64c0;
  pSVar10 = *(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x18);
  pSVar4 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = Map_BuiltinLevels__GetGameModes
                     (pSVar10,pSVar4,(uint)(byte)((byte)bVar6 ^ 1),(MethodInfo *)0x0);
  if (pSVar7 == (System_String_array *)0x0) goto LAB_03eb64c0;
  uVar12 = 0;
  do {
    uVar3 = pSVar7->max_length;
    if ((long)(int)uVar3 <= (long)uVar12) {
      if (uVar3 != 0) {
        if (*(long *)(lVar1 + 0x38) == 0) goto LAB_03eb64c0;
        if ((int)uVar3 == 0) {
LAB_03eb63dd:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar5 = *(Settings_TypedSetting_T__o **)(*(long *)(lVar1 + 0x38) + 0x30);
        if (pSVar5 == (Settings_TypedSetting_T__o *)0x0) goto LAB_03eb64c0;
        Settings_TypedSetting<object>__set_Value
                  (pSVar5,(Il2CppObject *)pSVar7->m_Items[0],MethodInfo_Void_set_Value);
      }
      break;
    }
    if ((uVar3 & 0xffffffff) <= uVar12) goto LAB_03eb63dd;
    if ((*(long *)(lVar1 + 0x38) == 0) ||
       (lVar2 = *(long *)(*(long *)(lVar1 + 0x38) + 0x30), lVar2 == 0)) goto LAB_03eb64c0;
    bVar6 = System_String__op_Equality
                      (pSVar7->m_Items[uVar12],*(System_String_o **)(lVar2 + 0x18),(MethodInfo *)0x0
                      );
    uVar12 = uVar12 + 1;
  } while ((char)bVar6 == '\0');
  lVar2 = *(long *)(lVar1 + 0x38);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x30) == 0)) || (*(long *)(lVar2 + 0x38) == 0))
  goto LAB_03eb64c0;
  bVar6 = System_String__op_Inequality
                    (*(System_String_o **)(*(long *)(lVar2 + 0x30) + 0x18),
                     *(System_String_o **)(*(long *)(lVar2 + 0x38) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if ((*(long *)(lVar1 + 0x38) == 0) ||
       (lVar2 = *(long *)(*(long *)(lVar1 + 0x38) + 0x30), lVar2 == 0)) goto LAB_03eb64c0;
    pSVar10 = *(System_String_o **)(lVar2 + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = System_String__op_Equality
                      (pSVar10,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),
                       (MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto LAB_03eb60f7;
  }
  else {
LAB_03eb60f7:
    if (*(int *)(TypeInfo_CreateGameGeneralPanel + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UI_CreateGameGeneralPanel__SetDefaultMisc((MethodInfo *)0x0);
    lVar2 = *(long *)(lVar1 + 0x38);
    if (((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) ||
       ((*(long *)(lVar2 + 0x28) == 0 || (*(long *)(lVar2 + 0x30) == 0)))) goto LAB_03eb64c0;
    pSVar10 = *(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x18);
    pSVar4 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
    gameMode = *(System_String_o **)(*(long *)(lVar2 + 0x30) + 0x18);
    settings = *(Settings_InGameMiscSettings_o **)(lVar1 + 0x58);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Map_BuiltinLevels__LoadMiscSettings(pSVar10,pSVar4,gameMode,settings,(MethodInfo *)0x0);
    lVar2 = *(long *)(lVar1 + 0x40);
    pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
             il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar9,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    if (lVar2 == 0) goto LAB_03eb64c0;
    *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x20) = pSVar9;
    il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
  }
  lVar2 = *(long *)(lVar1 + 0x38);
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x30) != 0)) &&
     (*(Settings_TypedSetting_T__o **)(lVar2 + 0x38) != (Settings_TypedSetting_T__o *)0x0)) {
    Settings_TypedSetting<object>__set_Value
              (*(Settings_TypedSetting_T__o **)(lVar2 + 0x38),
               *(Il2CppObject **)(*(long *)(lVar2 + 0x30) + 0x18),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar1 + 0x38) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar1 + 0x38) + 0x30), lVar2 != 0)) {
      pSVar10 = *(System_String_o **)(lVar2 + 0x18);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = Map_BuiltinLevels__LoadLogic(pSVar10,(MethodInfo *)0x0);
      bVar6 = System_String__op_Equality
                        (pSVar10,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),
                         (MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pSVar8 = pSVar10;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_03 = CustomLogic_CustomLogicManager__GetModeSettings(pSVar8,(MethodInfo *)0x0);
      if ((*(long *)(lVar1 + 0x40) != 0) &&
         (__this_03 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
        pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(lVar1 + 0x40) + 0x20);
        collection = System_Collections_Generic_Dictionary<object__object>__get_Keys
                               ((System_Collections_Generic_Dictionary_object__object__o *)__this_03
                                ,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
        __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor
                  (__this_04,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String)
        ;
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa8,
                     __this_04,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
          pIVar15 = key;
          if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            __this_00.fields._8_8_ = pIVar14;
            __this_00.fields._list = pSVar13;
            __this_00.fields._current = key;
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
            if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else {
            while (key = pIVar15, __this.fields._8_8_ = pIVar14, __this.fields._list = pSVar13,
                  __this.fields._current = key,
                  bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
                  (char)bVar6 != '\0') {
              pIVar15 = key;
              bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                (pSVar9,key,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar6 != '\0') {
                value = System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar9,key,MethodInfo_BaseSetting_get_Item);
                System_Collections_Generic_Dictionary<object__object>__set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,key,
                           value,MethodInfo_Void_set_Item);
              }
            }
          }
          __this_01.fields._8_8_ = pIVar14;
          __this_01.fields._list = pSVar13;
          __this_01.fields._current = key;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
          lVar1 = *(long *)(lVar1 + 0x40);
          if (lVar1 != 0) {
            *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)(lVar1 + 0x20) =
                 __this_03;
            il2cpp_runtime_glue(lVar1 + 0x20);
            return;
          }
        }
      }
    }
  }
LAB_03eb64c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$ConvertToBool
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__ConvertToBool (Il2CppObject* value, const MethodInfo* method);
// 0x3eba010

bool_conflict
CustomLogic_CustomLogicGameBuiltin__ConvertToBool(Il2CppObject *value,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  bool_conflict bVar3;
  char *pcVar4;
  int *piVar5;
  float *pfVar6;
  undefined8 *puVar7;
  char local_21;
  float local_20;
  int32_t local_1c;
  undefined1 local_18 [16];
  
  if (DAT_057038be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_057038be = '\x01';
  }
  local_21 = '\0';
  local_1c = 0;
  local_20 = 0.0;
  if (value != (Il2CppObject *)0x0) {
    pIVar2 = value->klass;
    if (pIVar2 == DAT_05711048) {
      pcVar4 = (char *)il2cpp_glue_022c7330(value);
      return (bool_conflict)CONCAT71((int7)((ulong)pcVar4 >> 8),*pcVar4 != '\0');
    }
    if (pIVar2 == DAT_05711068) {
      piVar5 = (int *)il2cpp_glue_022c7330(value);
      return (bool_conflict)CONCAT71((int7)((ulong)piVar5 >> 8),*piVar5 != 0);
    }
    if (pIVar2 == DAT_05711098) {
      pfVar6 = (float *)il2cpp_glue_022c7330(value);
      local_18._0_4_ = *pfVar6;
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
joined_r0x03eba0f3:
      puVar7 = &TypeInfo_Math;
      if (iVar1 == 0) {
        local_18 = ZEXT416((uint)local_18._0_4_);
        puVar7 = (undefined8 *)il2cpp_init_class();
      }
      return (bool_conflict)
             CONCAT71((int7)((ulong)puVar7 >> 8),1.4013e-45 < ABS((float)local_18._0_4_));
    }
    if (pIVar2 == DAT_057110b0) {
      if (*(int *)&(DAT_05711048->_2).field_0x1c == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_Boolean__TryParse
                        ((System_String_o *)value,(bool_conflict *)&local_21,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return CONCAT31((int3)((uint)bVar3 >> 8),local_21 != '\0');
      }
      bVar3 = System_Int32__TryParse((System_String_o *)value,&local_1c,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return CONCAT31((int3)((uint)bVar3 >> 8),local_1c != 0);
      }
      bVar3 = System_Single__TryParse((System_String_o *)value,&local_20,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
        local_18._0_4_ = local_20;
        goto joined_r0x03eba0f3;
      }
    }
  }
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_Convert__ToBoolean(value,(MethodInfo *)0x0);
  return bVar3;
}


// CustomLogic.CustomLogicGameBuiltin$$NeedRefreshList<object>
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_ (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* cacheKey, System_Collections_Generic_HashSet_T__o* currentSet, bool includeAI, bool includeNonAI, bool isShifter, const MethodInfo_24ABFA0* method);
// 0x25abfa0

/* WARNING: Removing unreachable block (ram,0x025ac3ad) */

bool_conflict
CustomLogic_CustomLogicGameBuiltin__NeedRefreshList<object>
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *cacheKey,
          System_Collections_Generic_HashSet_T__o *currentSet,bool_conflict includeAI,
          bool_conflict includeNonAI,bool_conflict isShifter,MethodInfo_24ABFA0 *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  int iVar7;
  bool_conflict bVar8;
  ulong uVar9;
  undefined8 uVar10;
  int index;
  System_Collections_Generic_HashSet_T__o *pSVar11;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (method->rgctx_data == (MethodInfo_24ABFA0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    if (method->rgctx_data == (MethodInfo_24ABFA0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)cacheKey,MethodInfo_Boolean_ContainsKey);
    bVar8 = (bool_conflict)CONCAT71((int7)((ulong)method >> 8),1);
    if ((char)bVar4 != '\0') {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._cachedLists;
      if ((((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar2,(Il2CppObject *)cacheKey,MethodInfo_CustomLogicListBuiltin_get_Item),
           pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[3].klass == (Il2CppClass *)0x0)) ||
         (currentSet == (System_Collections_Generic_HashSet_T__o *)0x0)) goto LAB_025ac391;
      if (*(int *)&((pIVar5[3].klass)->_1).namespaze <= (currentSet->fields)._count) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  (&local_48,(System_Collections_Generic_HashSet_object__o *)currentSet,
                   (MethodInfo_335CAB0 *)
                   method->rgctx_data->_2_System_Collections_Generic_HashSet_T__GetEnumerator);
        index = 0;
        uVar9 = (ulong)(uint)includeNonAI;
        pSVar11 = local_48.fields._set;
        if ((char)isShifter != '\0') goto LAB_025ac1b0;
        while (__this_00.fields._set._4_4_ = includeAI, __this_00.fields._set._0_4_ = index,
              __this_00.fields._index = isShifter, __this_00.fields._version = includeNonAI,
              __this_00.fields._current = (Il2CppObject *)pSVar11,
              bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff88),
              (char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)local_48.fields._current,
                             (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if ((UnityEngine_Object_o *)local_48.fields._current == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((*(char *)((long)local_48.fields._current + 0x68) == '\0') &&
               ((((char)includeAI != '\0' &&
                 (*(char *)&((UnityEngine_Object_o *)((long)local_48.fields._current + 0x78))->klass
                  != '\0')) ||
                (((char)uVar9 != '\0' &&
                 (*(char *)&((UnityEngine_Object_o *)((long)local_48.fields._current + 0x78))->klass
                  == '\0')))))) {
              while( true ) {
                pIVar3 = pIVar5[3].klass;
                if (pIVar3 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
                iVar7 = 0xb;
                if (*(int *)&(pIVar3->_1).namespaze <= index) goto LAB_025ac336;
                pIVar6 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pIVar3,index,
                                    MethodInfo_Object_get_Item);
                if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar1 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
                if (((pIVar6->klass->_2).naturalAligment < bVar1) ||
                   ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicCharacterBuiltin)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pIVar6);
                }
                pIVar3 = pIVar6[3].klass;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar4 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pIVar3,
                                   (UnityEngine_Object_o *)local_48.fields._current,
                                   (MethodInfo *)0x0);
                if ((char)bVar4 != '\0') goto LAB_025ac336;
                index = index + 1;
                uVar9 = (ulong)(uint)includeNonAI;
                if ((char)isShifter == '\0') break;
LAB_025ac1b0:
                do {
                  do {
                    __this_01.fields._set._4_4_ = includeAI;
                    __this_01.fields._set._0_4_ = index;
                    __this_01.fields._index = isShifter;
                    __this_01.fields._version = includeNonAI;
                    __this_01.fields._current = (Il2CppObject *)pSVar11;
                    bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                      (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff88);
                    if ((char)bVar4 == '\0') goto LAB_025ac32c;
                    if ((UnityEngine_Object_o *)local_48.fields._current ==
                        (UnityEngine_Object_o *)0x0) {
LAB_025ac38c:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    if ((*(byte *)(*(long *)local_48.fields._current + 0x130) <
                         *(byte *)(TypeInfo_BaseShifter + 0x130)) ||
                       (*(long *)(*(long *)(*(long *)local_48.fields._current + 200) + -8 +
                                 (ulong)*(byte *)(TypeInfo_BaseShifter + 0x130) * 8) != TypeInfo_BaseShifter))
                    goto LAB_025ac38c;
                  } while ((*(char *)((long)local_48.fields._current + 0x68) != '\0') &&
                          (*(char *)((long)local_48.fields._current + 0x272) == '\0'));
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar4 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)local_48.fields._current,
                                     (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                } while ((((char)bVar4 == '\0') ||
                         (*(char *)((long)local_48.fields._current + 0x68) != '\0')) ||
                        ((((char)includeAI == '\0' ||
                          (*(char *)&((UnityEngine_Object_o *)
                                     ((long)local_48.fields._current + 0x78))->klass == '\0')) &&
                         (((char)uVar9 == '\0' ||
                          (*(char *)&((UnityEngine_Object_o *)
                                     ((long)local_48.fields._current + 0x78))->klass != '\0'))))));
              }
            }
          }
        }
LAB_025ac32c:
        iVar7 = 0xc;
        uVar10 = 0;
LAB_025ac336:
        bVar8 = (bool_conflict)uVar10;
        __this_02.fields._set._4_4_ = includeAI;
        __this_02.fields._set._0_4_ = index;
        __this_02.fields._index = isShifter;
        __this_02.fields._version = includeNonAI;
        __this_02.fields._current = (Il2CppObject *)pSVar11;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff88);
        if ((iVar7 == 0xc) || (iVar7 == 0)) {
          if (pIVar5[3].klass == (Il2CppClass *)0x0) goto LAB_025ac391;
          bVar8 = (bool_conflict)
                  CONCAT71((int7)((ulong)uVar10 >> 8),
                           index != *(int *)&((pIVar5[3].klass)->_1).namespaze);
        }
      }
    }
    return bVar8;
  }
LAB_025ac391:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnEffectInternal
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal (System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, float scale, bool scaled, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x3eb8df0

void CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
               (System_String_o *effectName,CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,float scale,bool_conflict scaled,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_Color255_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Type_o *__this_00;
  System_Reflection_FieldInfo_o *left;
  System_Object_array *settings;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  System_String_o *str0;
  System_String_o *pSVar7;
  System_ArgumentException_o *__this_01;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Quaternion_o rotation_00;
  int32_t local_74;
  System_String_o *local_70;
  uint local_64;
  float local_60;
  int32_t local_5c;
  CustomLogic_CustomLogicColorBuiltin_o *local_58;
  undefined8 uStack_50;
  UnityEngine_Color_Fields local_40;
  
  local_70 = tsKillSound;
  local_60 = scale;
  local_58 = tsExplodeColor;
  if (DAT_057038bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeRef_EffectPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryParse_TSKillType);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_TSKillType);
    DAT_057038bf = '\x01';
  }
  handle.fields.value = TypeRef_EffectPrefabs.fields.value;
  local_74 = 0;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (__this_00 == (System_Type_o *)0x0) goto LAB_03eb9112;
  left = System_Type__GetField(__this_00,effectName,(MethodInfo *)0x0);
  bVar3 = System_Reflection_FieldInfo__op_Inequality
                    (left,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (left == (System_Reflection_FieldInfo_o *)0x0) goto LAB_03eb9112;
    effectName = (System_String_o *)
                 (*(left->klass->vtable)._26_unknown.methodPtr)
                           (left,0,(left->klass->vtable)._26_unknown.method);
    if ((effectName != (System_String_o *)0x0) && (effectName->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(effectName);
    }
  }
  if (DAT_0570310e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570310e = '\x01';
  }
  local_64 = scaled;
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  settings = (System_Object_array *)0x0;
  bVar3 = System_String__op_Equality
                    (effectName,(System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8),
                     (MethodInfo *)0x0);
  pSVar7 = local_70;
  if ((char)bVar3 != '\0') {
    local_74 = 2;
    if (local_70 != (System_String_o *)0x0) {
      if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_Enum__TryParse<Int32Enum>(pSVar7,&local_74,MethodInfo_Boolean_TryParse_TSKillType);
      if ((char)bVar3 == '\0') {
        str0 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown Thunderspear kill sound type: ");
        pSVar7 = System_String__Concat(str0,pSVar7,(MethodInfo *)0x0);
        uVar6 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar6);
        System_ArgumentException___ctor(__this_01,pSVar7,(MethodInfo *)0x0);
        uVar6 = il2cpp_init_method_metadata(&MethodInfo_Void_SpawnEffectInternal);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_01,uVar6);
      }
    }
    settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object);
    if ((local_58 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
       (__this = (local_58->fields).Value, __this == (Utility_Color255_o *)0x0)) goto LAB_03eb9112;
    local_40 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&local_40);
    if (settings == (System_Object_array *)0x0) goto LAB_03eb9112;
    if (pIVar4 != (Il2CppObject *)0x0) {
      lVar5 = il2cpp_runtime_glue(pIVar4,(((settings->obj).klass)->_1).element_class);
      if (lVar5 == 0) goto LAB_03eb911c;
    }
    if ((int)settings->max_length == 0) {
LAB_03eb9117:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    settings->m_Items[0] = pIVar4;
    il2cpp_runtime_glue(settings->m_Items,pIVar4);
    local_5c = local_74;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TSKillType,&local_5c);
    if (pIVar4 != (Il2CppObject *)0x0) {
      lVar5 = il2cpp_runtime_glue(pIVar4,(((settings->obj).klass)->_1).element_class);
      if (lVar5 == 0) {
LAB_03eb911c:
        uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar6,0);
      }
    }
    if ((uint)settings->max_length < 2) goto LAB_03eb9117;
    settings->m_Items[1] = pIVar4;
    il2cpp_runtime_glue(settings->m_Items + 1,pIVar4);
  }
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_58._0_4_ = (position->fields).Value.fields.x;
    local_58._4_4_ = (position->fields).Value.fields.y;
    uStack_50 = 0;
    local_70 = (System_String_o *)CONCAT44(local_70._4_4_,(position->fields).Value.fields.z);
    uVar1 = (rotation->fields).Value.fields.x;
    uVar2 = (rotation->fields).Value.fields.y;
    euler.fields.x = (float)uVar1 * 0.017453292;
    euler.fields.y = (float)uVar2 * 0.017453292;
    euler.fields.z = (rotation->fields).Value.fields.z * 0.017453292;
    rotation_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    position_00.fields.z = local_70._0_4_;
    position_00.fields._0_8_ = local_58;
    Effects_EffectSpawner__Spawn
              (effectName,position_00,rotation_00,local_60,local_64 & 0xff,settings,
               (MethodInfo *)0x0);
    return;
  }
LAB_03eb9112:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ClassName (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eba1b0

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ClassName
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_057038c0 == '\0') {
    il2cpp_init_method_metadata(&"Game");
    DAT_057038c0 = '\x01';
  }
  return "Game";
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsAbstract (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eba1e0

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsStatic (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eba1f0

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_IsStatic
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicGameBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x3eba200

bool_conflict
CustomLogic_CustomLogicGameBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


