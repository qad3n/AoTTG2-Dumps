// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Localization/Aottg2GisketchLocalizer.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$GetText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__GetText (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x3aef4c0

System_String_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__GetText
          (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,System_String_o *key,
          System_String_o *fallback,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_Reflection_MethodBase_o *__this_00;
  Il2CppObject *pIVar3;
  bool_conflict bVar4;
  System_String_array *value;
  System_String_o *pSVar5;
  System_Object_array *parameters;
  long lVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  
  if (DAT_05701411 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&".");
    DAT_05701411 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_Reflection_MethodInfo__op_Equality
                      (*(System_Reflection_MethodInfo_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 8),
                       (System_Reflection_MethodInfo_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if ((key == (System_String_o *)0x0) ||
         (value = System_String__Split(key,0x2e,0,(MethodInfo *)0x0),
         value == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar1 = (int)value->max_length;
      if (1 < iVar1) {
        pSVar7 = value->m_Items[0];
        pSVar2 = value->m_Items[1];
        if (iVar1 == 2) {
          pSVar5 = *(System_String_o **)DAT_057110b0->static_fields;
          iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
        }
        else {
          pSVar5 = System_String__Join(".",value,2,iVar1 + -2,(MethodInfo *)0x0);
          iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        __this_00 = *(System_Reflection_MethodBase_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 8);
        parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
        if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pSVar7 != (System_String_o *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pSVar7,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = (Il2CppObject *)pSVar7;
        il2cpp_runtime_glue(parameters->m_Items,pSVar7);
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pSVar2,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((uint)parameters->max_length < 2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[1] = (Il2CppObject *)pSVar2;
        il2cpp_runtime_glue(parameters->m_Items + 1,pSVar2);
        if ((pSVar5 != (System_String_o *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pSVar5,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((uint)parameters->max_length < 3) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[2] = (Il2CppObject *)pSVar5;
        il2cpp_runtime_glue(parameters->m_Items + 2,pSVar5);
        pIVar3 = *(Il2CppObject **)DAT_057110b0->static_fields;
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((uint)parameters->max_length < 4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[3] = pIVar3;
        il2cpp_runtime_glue(parameters->m_Items + 3,pIVar3);
        if (fallback == (System_String_o *)0x0) {
          fallback = key;
        }
        lVar6 = il2cpp_runtime_glue(fallback,(((parameters->obj).klass)->_1).element_class);
        if (lVar6 == 0) {
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((uint)parameters->max_length < 5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[4] = (Il2CppObject *)fallback;
        il2cpp_runtime_glue(parameters->m_Items + 4);
        if (__this_00 != (System_Reflection_MethodBase_o *)0x0) {
          pSVar7 = (System_String_o *)
                   System_Reflection_MethodBase__Invoke
                             (__this_00,(Il2CppObject *)0x0,parameters,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) {
            return fallback;
          }
          if ((Il2CppClass *)pSVar7->klass != DAT_057110b0) {
            return fallback;
          }
          return pSVar7;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    if (fallback == (System_String_o *)0x0) {
      fallback = key;
    }
  }
  else if (fallback == (System_String_o *)0x0) {
    fallback = *(System_String_o **)DAT_057110b0->static_fields;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, const MethodInfo* method);
// 0x3aef8e0

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
               (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___cctor (const MethodInfo* method);
// 0x3aef8f0

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___cctor(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  System_Reflection_MethodInfo_o *pSVar4;
  
  if (DAT_05701412 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Aottg2GisketchLocalizer);
    il2cpp_init_method_metadata(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_init_method_metadata(&MethodInfo_Type_GetType);
    il2cpp_init_method_metadata(&"GetLocale");
    il2cpp_init_method_metadata(&"UI.UIManager, Scripts");
    DAT_05701412 = '\x01';
  }
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = il2cpp_glue_02274d10("UI.UIManager, Scripts",MethodInfo_Type_GetType,MethodInfo_Aottg2GisketchLocalizer);
  **(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) = uVar3;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8));
  pSVar4 = (System_Reflection_MethodInfo_o *)0x0;
  bVar2 = System_Type__op_Inequality
                    ((System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8),(System_Type_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if ((System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) == (System_Type_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4 = System_Type__GetMethod
                       ((System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8),"GetLocale",0x38,
                        (MethodInfo *)0x0);
  }
  lVar1 = *(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8);
  *(System_Reflection_MethodInfo_o **)(lVar1 + 8) = pSVar4;
  il2cpp_runtime_glue(lVar1 + 8,pSVar4);
  return;
}


