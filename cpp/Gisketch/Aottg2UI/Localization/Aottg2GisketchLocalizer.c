// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Localization/Aottg2GisketchLocalizer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$GetText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__GetText (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x3b59de0

System_String_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__GetText
          (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,System_String_o *key,
          System_String_o *fallback,MethodInfo *method)

{
  int iVar1;
  System_Reflection_MethodBase_o *__this_00;
  Il2CppObject *pIVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_array *value;
  System_String_o *pSVar5;
  System_Object_array *parameters;
  long lVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  System_String_o *pSVar11;
  undefined1 auVar12 [12];
  
  if (g_data_057a9d33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9d33 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (fallback != (System_String_o *)0x0) {
      return fallback;
    }
    return *(System_String_o **)g_data_057b9c00->static_fields;
  }
  if (*(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Reflection_MethodInfo__op_Equality
                    (*(System_Reflection_MethodInfo_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 8),
                     (System_Reflection_MethodInfo_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') goto label_03b5a1a5;
  if ((key == (System_String_o *)0x0) ||
     (value = System_String__Split(key,0x2e,0,(MethodInfo *)0x0), value == (System_String_array *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
label_03b5a0bd:
    il2cpp_runtime_helper_022b2c90();
label_03b5a0c2:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0c7:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0cc:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0d1:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0d6:
    uVar8 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar8,0);
label_03b5a0e5:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0ea:
    il2cpp_runtime_helper_022b2c90();
label_03b5a0ef:
    uVar8 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar8,0);
label_03b5a0fe:
    uVar8 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar8,0);
label_03b5a10d:
    uVar8 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar8,0);
  }
  else {
    iVar1 = (int)value->max_length;
    if (iVar1 < 2) goto label_03b5a1a5;
    pSVar11 = value->m_Items[0];
    pSVar7 = value->m_Items[1];
    if (iVar1 == 2) {
      pSVar5 = *(System_String_o **)g_data_057b9c00->static_fields;
      iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
    }
    else {
      pSVar5 = System_String__Join_3af7dc0(".",value,2,iVar1 + -2,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Reflection_MethodBase_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    if (parameters == (System_Object_array *)0x0) goto label_03b5a0bd;
    if ((pSVar11 != (System_String_o *)0x0) &&
       (lVar6 = il2cpp_runtime_helper_023051f0(pSVar11,(((parameters->obj).klass)->_1).element_class), lVar6 == 0))
    goto label_03b5a0ef;
    if ((int)parameters->max_length == 0) goto label_03b5a0c2;
    parameters->m_Items[0] = (Il2CppObject *)pSVar11;
    il2cpp_runtime_helper_022b4080(parameters->m_Items,pSVar11);
    if ((pSVar7 != (System_String_o *)0x0) &&
       (lVar6 = il2cpp_runtime_helper_023051f0(pSVar7,(((parameters->obj).klass)->_1).element_class), lVar6 == 0))
    goto label_03b5a0fe;
    if ((uint)parameters->max_length < 2) goto label_03b5a0c7;
    parameters->m_Items[1] = (Il2CppObject *)pSVar7;
    il2cpp_runtime_helper_022b4080(parameters->m_Items + 1,pSVar7);
    if ((pSVar5 != (System_String_o *)0x0) &&
       (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5,(((parameters->obj).klass)->_1).element_class), lVar6 == 0))
    goto label_03b5a10d;
    if ((uint)parameters->max_length < 3) goto label_03b5a0cc;
    parameters->m_Items[2] = (Il2CppObject *)pSVar5;
    il2cpp_runtime_helper_022b4080(parameters->m_Items + 2,pSVar5);
    pIVar2 = *(Il2CppObject **)g_data_057b9c00->static_fields;
    if ((pIVar2 == (Il2CppObject *)0x0) ||
       (lVar6 = il2cpp_runtime_helper_023051f0(pIVar2,(((parameters->obj).klass)->_1).element_class), lVar6 != 0)) {
      if ((uint)parameters->max_length < 4) goto label_03b5a0d1;
      parameters->m_Items[3] = pIVar2;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 3,pIVar2);
      pSVar11 = fallback;
      if (fallback == (System_String_o *)0x0) {
        pSVar11 = key;
      }
      lVar6 = il2cpp_runtime_helper_023051f0(pSVar11,(((parameters->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto label_03b5a0d6;
      if ((uint)parameters->max_length < 5) goto label_03b5a0e5;
      parameters->m_Items[4] = (Il2CppObject *)pSVar11;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 4);
      if (__this_00 != (System_Reflection_MethodBase_o *)0x0) {
        pSVar7 = (System_String_o *)
                 System_Reflection_MethodBase__Invoke
                           (__this_00,(Il2CppObject *)0x0,parameters,(MethodInfo *)0x0);
        if (pSVar7 == (System_String_o *)0x0) {
          return pSVar11;
        }
        if ((Il2CppClass *)pSVar7->klass != g_data_057b9c00) {
          return pSVar11;
        }
        return pSVar7;
      }
      goto label_03b5a0ea;
    }
  }
  uVar8 = il2cpp_runtime_helper_0231b270();
  auVar12 = il2cpp_runtime_helper_022b2b10(uVar8,0);
  if (auVar12._8_4_ != 1) {
    _Unwind_Resume(auVar12._0_8_);
  }
  puVar9 = (undefined8 *)__cxa_begin_catch(auVar12._0_8_);
  cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar9);
  if (cVar3 == '\0') {
    puVar10 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar10 = *puVar9;
    __cxa_throw(puVar10,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
label_03b5a1a5:
  if (fallback == (System_String_o *)0x0) {
    fallback = key;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$HasText
// il2cpp: bool Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__HasText (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, System_String_o* key, const MethodInfo* method);
// 0x3b5a200

bool_conflict
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__HasText
          (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,System_String_o *key,
          MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Reflection_MethodBase_o *__this_00;
  char cVar4;
  bool_conflict bVar5;
  System_String_array *value;
  System_String_o *pSVar6;
  System_Object_array *parameters;
  long lVar7;
  Il2CppObject *pIVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar15 [12];
  
  if (g_data_057a9d34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9d34 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = System_Reflection_MethodInfo__op_Equality
                    (*(System_Reflection_MethodInfo_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 0x10),
                     (System_Reflection_MethodInfo_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return 0;
  }
  if ((key == (System_String_o *)0x0) ||
     (value = System_String__Split(key,0x2e,0,(MethodInfo *)0x0), value == (System_String_array *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
label_03b5a4a6:
    il2cpp_runtime_helper_022b2c90();
label_03b5a4ab:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a4b0:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a4b5:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a4ba:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a4bf:
    il2cpp_runtime_helper_022b2c90();
label_03b5a4c4:
    uVar10 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar10,0);
label_03b5a4d3:
    uVar10 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar10,0);
  }
  else {
    iVar1 = (int)value->max_length;
    if (iVar1 < 2) {
      return 0;
    }
    pSVar2 = value->m_Items[0];
    pSVar3 = value->m_Items[1];
    if (iVar1 == 2) {
      pSVar6 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
    }
    else {
      pSVar6 = System_String__Join_3af7dc0(".",value,2,iVar1 + -2,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Reflection_MethodBase_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 0x10);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,4);
    if (parameters == (System_Object_array *)0x0) goto label_03b5a4a6;
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar7 = il2cpp_runtime_helper_023051f0(pSVar2,(((parameters->obj).klass)->_1).element_class), lVar7 == 0))
    goto label_03b5a4c4;
    if ((int)parameters->max_length == 0) goto label_03b5a4ab;
    parameters->m_Items[0] = (Il2CppObject *)pSVar2;
    il2cpp_runtime_helper_022b4080(parameters->m_Items,pSVar2);
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar7 = il2cpp_runtime_helper_023051f0(pSVar3,(((parameters->obj).klass)->_1).element_class), lVar7 == 0))
    goto label_03b5a4d3;
    if ((uint)parameters->max_length < 2) goto label_03b5a4b0;
    parameters->m_Items[1] = (Il2CppObject *)pSVar3;
    il2cpp_runtime_helper_022b4080(parameters->m_Items + 1,pSVar3);
    if ((pSVar6 == (System_String_o *)0x0) ||
       (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6,(((parameters->obj).klass)->_1).element_class), lVar7 != 0)) {
      if ((uint)parameters->max_length < 3) goto label_03b5a4b5;
      parameters->m_Items[2] = (Il2CppObject *)pSVar6;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 2,pSVar6);
      pIVar8 = (Il2CppObject *)**(long **)(g_data_057b9c00 + 0xb8);
      if ((pIVar8 != (Il2CppObject *)0x0) &&
         (lVar7 = il2cpp_runtime_helper_023051f0(pIVar8,(((parameters->obj).klass)->_1).element_class), lVar7 == 0))
      goto label_03b5a4f1;
      if ((uint)parameters->max_length < 4) goto label_03b5a4ba;
      parameters->m_Items[3] = pIVar8;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 3);
      if (__this_00 != (System_Reflection_MethodBase_o *)0x0) {
        bVar14 = 0;
        pIVar8 = System_Reflection_MethodBase__Invoke
                           (__this_00,(Il2CppObject *)0x0,parameters,(MethodInfo *)0x0);
        if (pIVar8 == (Il2CppObject *)0x0) {
          bVar13 = 0;
        }
        else {
          bVar13 = 0;
          if (pIVar8->klass == g_data_057b9b98) {
            pbVar9 = (byte *)il2cpp_runtime_helper_02305440();
            bVar13 = *pbVar9;
            bVar14 = 1;
          }
        }
        return (bool_conflict)CONCAT71((int7)((ulong)parameters >> 8),(bVar13 & bVar14) != 0);
      }
      goto label_03b5a4bf;
    }
  }
  uVar10 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar10,0);
label_03b5a4f1:
  uVar10 = il2cpp_runtime_helper_0231b270();
  auVar15 = il2cpp_runtime_helper_022b2b10(uVar10,0);
  if (auVar15._8_4_ != 1) {
    _Unwind_Resume(auVar15._0_8_);
  }
  puVar11 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
  cVar4 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar11);
  if (cVar4 != '\0') {
    __cxa_end_catch();
    return 0;
  }
  puVar12 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar12 = *puVar11;
  __cxa_throw(puVar12,&PTR_PTR_05215060,0);
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, const MethodInfo* method);
// 0x3b5a5d0

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
               (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___cctor (const MethodInfo* method);
// 0x3b5a5e0

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___cctor(MethodInfo *method)

{
  long lVar1;
  System_Type_o *left;
  bool_conflict bVar2;
  undefined8 uVar3;
  System_Reflection_MethodInfo_o *pSVar4;
  System_String_o *a;
  
  if (g_data_057a9d35 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Type_GetType);
    il2cpp_runtime_helper_023445d0(&"GetLocale");
    il2cpp_runtime_helper_023445d0(&"UI.UIManager, Scripts");
    il2cpp_runtime_helper_023445d0(&"HasLocale");
    g_data_057a9d35 = '\x01';
  }
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = il2cpp_runtime_helper_022b2e20("UI.UIManager, Scripts",MethodInfo_Type_GetType,MethodInfo_Aottg2GisketchLocalizer);
  **(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) = uVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8));
  pSVar4 = (System_Reflection_MethodInfo_o *)0x0;
  bVar2 = System_Type__op_Inequality
                    ((System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8),(System_Type_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if ((System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) == (System_Type_o *)0x0) goto label_03b5a790;
    pSVar4 = System_Type__GetMethod_3cd60e0
                       ((System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8),"GetLocale",0x38,
                        (MethodInfo *)0x0);
  }
  lVar1 = *(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8);
  *(System_Reflection_MethodInfo_o **)(lVar1 + 8) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  left = (System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = (System_Reflection_MethodInfo_o *)0x0;
  bVar2 = System_Type__op_Inequality(left,(System_Type_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if ((System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) == (System_Type_o *)0x0) {
label_03b5a790:
      a = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d39 == '\0') {
        il2cpp_runtime_helper_023445d0(&"ScreenBuilder.BuildNode");
        il2cpp_runtime_helper_023445d0(&"GridPicker.BuildThumbnail");
        il2cpp_runtime_helper_023445d0(&"SpriteLoader.ResourcesLoadSprite");
        il2cpp_runtime_helper_023445d0(&"GridPicker.CreateCard");
        g_data_057a9d39 = '\x01';
      }
      bVar2 = System_String__op_Equality(a,"ScreenBuilder.BuildNode",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(a,"GridPicker.CreateCard",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__op_Equality(a,"GridPicker.BuildThumbnail",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            System_String__op_Equality(a,"SpriteLoader.ResourcesLoadSprite",(MethodInfo *)0x0);
            return;
          }
        }
      }
      return;
    }
    pSVar4 = System_Type__GetMethod_3cd60e0
                       ((System_Type_o *)**(undefined8 **)(TypeInfo_Aottg2GisketchLocalizer + 0xb8),"HasLocale",0x38,
                        (MethodInfo *)0x0);
  }
  lVar1 = *(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8);
  *(System_Reflection_MethodInfo_o **)(lVar1 + 0x10) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar4);
  return;
}


