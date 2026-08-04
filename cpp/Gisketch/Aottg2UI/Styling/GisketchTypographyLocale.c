// Type: Gisketch.Aottg2UI.Styling.GisketchTypographyLocale
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTypographyLocale.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$CurrentLanguageName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName (const MethodInfo* method);
// 0x3b430f0

System_String_o * Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName(MethodInfo *method)

{
  long *plVar1;
  System_Reflection_PropertyInfo_o *__this;
  bool_conflict bVar2;
  long lVar3;
  Il2CppObject *obj;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  char in_CL;
  MethodInfo *languageName;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar6;
  int32_t weight;
  
  if (g_data_057a9c97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
    il2cpp_runtime_helper_023445d0(&"English");
    g_data_057a9c97 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_Reflection_FieldInfo__op_Equality
                    (*(System_Reflection_FieldInfo_o **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x18),
                     (System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_Reflection_FieldInfo__op_Equality
                      (*(System_Reflection_FieldInfo_o **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x20),
                       (System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      weight = 0;
      bVar2 = System_Reflection_PropertyInfo__op_Equality
                        (*(System_Reflection_PropertyInfo_o **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x28),
                         (System_Reflection_PropertyInfo_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar1 = *(long **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x18);
        if (plVar1 == (long *)0x0) {
label_03b432b8:
          pSVar5 = (System_String_o *)0x0;
          il2cpp_runtime_helper_022b2c90();
          pMVar6 = languageName;
          if (g_data_057a9c8e == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
            g_data_057a9c8e = '\x01';
            pMVar6 = extraout_RDX;
          }
          if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar6 = extraout_RDX_00;
          }
          pSVar5 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(pSVar5,weight,pMVar6);
          if (in_CL == '\0') {
            return pSVar5;
          }
          pMVar6 = extraout_RDX_01;
          if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar6 = extraout_RDX_02;
          }
          pSVar5 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                             (pSVar5,(System_String_o *)languageName,pMVar6);
          return pSVar5;
        }
        weight = 0;
        lVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x2e0));
        pSVar5 = (System_String_o *)0x0;
        if (lVar3 != 0) {
          if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar1 = *(long **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x20);
          if (plVar1 == (long *)0x0) goto label_03b432b8;
          obj = (Il2CppObject *)(**(code **)(*plVar1 + 0x2d8))(plVar1,lVar3,*(undefined8 *)(*plVar1 + 0x2e0));
          weight = (int32_t)lVar3;
          if (obj == (Il2CppObject *)0x0) {
            pSVar5 = (System_String_o *)0x0;
          }
          else {
            if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this = *(System_Reflection_PropertyInfo_o **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x28);
            if (__this == (System_Reflection_PropertyInfo_o *)0x0) goto label_03b432b8;
            pSVar4 = (System_String_o *)System_Reflection_PropertyInfo__GetValue(__this,obj,(MethodInfo *)0x0)
            ;
            pSVar5 = (System_String_o *)0x0;
            if ((pSVar4 != (System_String_o *)0x0) &&
               (pSVar5 = (System_String_o *)0x0, (Il2CppClass *)pSVar4->klass == g_data_057b9c00)) {
              pSVar5 = pSVar4;
            }
          }
        }
        bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pSVar5 = "English";
        }
        return pSVar5;
      }
    }
  }
  return "English";
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$DisplayKeyForLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage (System_String_o* baseKey, System_String_o* languageName, const MethodInfo* method);
// 0x3b43b90

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
          (System_String_o *baseKey,System_String_o *languageName,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  uint32_t uVar3;
  undefined8 *puVar4;
  
  if (g_data_057a9c98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
    il2cpp_runtime_helper_023445d0(&"NotoSansKR-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0");
    il2cpp_runtime_helper_023445d0(&"Russian");
    il2cpp_runtime_helper_023445d0(&"NotoSansSC-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2");
    il2cpp_runtime_helper_023445d0(&"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87");
    il2cpp_runtime_helper_023445d0(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_runtime_helper_023445d0(&"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4");
    il2cpp_runtime_helper_023445d0(&"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e");
    il2cpp_runtime_helper_023445d0(&"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
    il2cpp_runtime_helper_023445d0(&"Thai");
    il2cpp_runtime_helper_023445d0(&"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87");
    il2cpp_runtime_helper_023445d0(&"NotoSansThai-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac");
    il2cpp_runtime_helper_023445d0(&"NotoSansJP-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"NotoSans-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"NotoSansTC-Regular SDF");
    g_data_057a9c98 = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchTypographyLocale + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchTypographyLocale + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c9a == '\0') {
    il2cpp_runtime_helper_023445d0(&"header SDF");
    il2cpp_runtime_helper_023445d0(&"IntensaFuente SDF");
    g_data_057a9c9a = '\x01';
  }
  bVar2 = System_String__op_Equality(baseKey,"header SDF",(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (bVar2 = System_String__op_Equality(baseKey,"IntensaFuente SDF",(MethodInfo *)0x0), (char)bVar2 == '\0')) {
    return baseKey;
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash_3a9d330(languageName,(MethodInfo *)0x0);
  if (0x5406374e < uVar3) {
    if (uVar3 < 0x6d41f9c5) {
      if (uVar3 != 0x6044a05b) {
        if (uVar3 != 0x6d41f9c4) {
          return baseKey;
        }
        bVar2 = System_String__op_Equality(languageName,"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return baseKey;
        }
        puVar4 = &"NotoSansSC-Regular SDF";
        goto label_03b43ed8;
      }
      puVar4 = &"Thai";
    }
    else {
      if (uVar3 != 0x892b5b2a) {
        if (uVar3 == 0x9bcbdd02) {
          bVar2 = System_String__op_Equality(languageName,"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return baseKey;
          }
          puVar4 = &"NotoSansKR-Regular SDF";
        }
        else {
          if (uVar3 != 0xa76ce029) {
            return baseKey;
          }
          bVar2 = System_String__op_Equality(languageName,"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return baseKey;
          }
          puVar4 = &"NotoSansArabic-VariableFont_wdth,wght SDF";
        }
        goto label_03b43ed8;
      }
      puVar4 = &"\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2";
    }
    bVar2 = System_String__op_Equality(languageName,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return baseKey;
    }
    puVar4 = &"NotoSansThai-Regular SDF";
    goto label_03b43ed8;
  }
  if (uVar3 < 0x24ed3d98) {
    if (uVar3 == 0xfcb004f) {
      puVar4 = &"\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0";
    }
    else {
      if (uVar3 != 0x24ed3d97) {
        return baseKey;
      }
      puVar4 = &"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac";
    }
  }
  else {
    if (uVar3 == 0x4539dc68) {
      bVar2 = System_String__op_Equality(languageName,"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return baseKey;
      }
      puVar4 = &"NotoSansTC-Regular SDF";
      goto label_03b43ed8;
    }
    if (uVar3 != 0x47592386) {
      if (uVar3 != 0x5406374e) {
        return baseKey;
      }
      bVar2 = System_String__op_Equality(languageName,"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return baseKey;
      }
      puVar4 = &"NotoSansJP-Regular SDF";
      goto label_03b43ed8;
    }
    puVar4 = &"Russian";
  }
  bVar2 = System_String__op_Equality(languageName,(System_String_o *)*puVar4,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return baseKey;
  }
  puVar4 = &"NotoSans-Regular SDF";
label_03b43ed8:
  return (System_String_o *)*puVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$DisplayKeyForCurrentLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForCurrentLanguage (System_String_o* baseKey, const MethodInfo* method);
// 0x3b447f0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForCurrentLanguage
          (System_String_o *baseKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057a9c99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
    g_data_057a9c99 = '\x01';
  }
  method_01 = TypeInfo_GisketchTypographyLocale;
  if (*(int *)((long)&TypeInfo_GisketchTypographyLocale[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName(method_01);
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage(baseKey,pSVar1,method_00)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$IsDisplayKey
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__IsDisplayKey (System_String_o* key, const MethodInfo* method);
// 0x3b44790

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__IsDisplayKey(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057a9c9a == '\0') {
    il2cpp_runtime_helper_023445d0(&"header SDF");
    il2cpp_runtime_helper_023445d0(&"IntensaFuente SDF");
    g_data_057a9c9a = '\x01';
  }
  bVar1 = System_String__op_Equality(key,"header SDF",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
  }
  bVar1 = System_String__op_Equality(key,"IntensaFuente SDF",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypographyLocale___cctor (const MethodInfo* method);
// 0x3b44840

void Gisketch_Aottg2UI_Styling_GisketchTypographyLocale___cctor(MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  System_Type_o *pSVar3;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  bool_conflict bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  System_Reflection_PropertyInfo_o *pSVar8;
  System_Delegate_o *b;
  System_Action_string__o *pSVar9;
  System_Delegate_o *pSVar10;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar11;
  MethodInfo *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar12;
  MethodInfo *pMVar13;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_R8;
  System_Action_string__o *a;
  bool bVar14;
  
  if (g_data_057a9c9b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTypographyLocale);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Type_GetType);
    il2cpp_runtime_helper_023445d0(&"Language");
    il2cpp_runtime_helper_023445d0(&"Settings.SettingsManager, Scripts");
    il2cpp_runtime_helper_023445d0(&"Settings.GeneralSettings, Scripts");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"Settings.StringSetting, Scripts");
    il2cpp_runtime_helper_023445d0(&"GeneralSettings");
    g_data_057a9c9b = '\x01';
  }
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar6 = il2cpp_runtime_helper_022b2e20("Settings.SettingsManager, Scripts",MethodInfo_Type_GetType,MethodInfo_GisketchTypographyLocale);
  **(undefined8 **)&TypeInfo_GisketchTypographyLocale[3].fields.stagger = uVar6;
  uVar7._0_4_ = TypeInfo_GisketchTypographyLocale[3].fields.stagger;
  uVar7._4_4_ = TypeInfo_GisketchTypographyLocale[3].fields.order;
  il2cpp_runtime_helper_022b4080(uVar7,uVar6);
  uVar7 = il2cpp_runtime_helper_022b2e20("Settings.GeneralSettings, Scripts",MethodInfo_Type_GetType,MethodInfo_GisketchTypographyLocale);
  lVar1 = *(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger;
  *(undefined8 *)(lVar1 + 8) = uVar7;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,uVar7);
  uVar7 = il2cpp_runtime_helper_022b2e20("Settings.StringSetting, Scripts",MethodInfo_Type_GetType,MethodInfo_GisketchTypographyLocale);
  pGVar11 = TypeInfo_GisketchTypographyLocale;
  lVar1 = *(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger;
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  uVar7 = 0;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
  bVar5 = System_Type__op_Inequality
                    ((System_Type_o *)**(undefined8 **)&TypeInfo_GisketchTypographyLocale[3].fields.stagger,(System_Type_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    plVar2 = (long *)**(long **)&TypeInfo_GisketchTypographyLocale[3].fields.stagger;
    if (plVar2 == (long *)0x0) goto label_03b44b06;
    pGVar11 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(*plVar2 + 0x6d0);
    uVar7 = (**(code **)(*plVar2 + 0x6c8))(plVar2,"GeneralSettings",0x38);
  }
  lVar1 = *(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger;
  *(undefined8 *)(lVar1 + 0x18) = uVar7;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  pSVar3 = *(System_Type_o **)(*(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger + 8);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar7 = 0;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
  bVar5 = System_Type__op_Inequality(pSVar3,(System_Type_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    plVar2 = *(long **)(*(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger + 8);
    if (plVar2 == (long *)0x0) goto label_03b44b06;
    pGVar11 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(*plVar2 + 0x6d0);
    uVar7 = (**(code **)(*plVar2 + 0x6c8))(plVar2,"Language",0x34);
  }
  lVar1 = *(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger;
  *(undefined8 *)(lVar1 + 0x20) = uVar7;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  pSVar3 = *(System_Type_o **)(*(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger + 0x10);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (System_Reflection_PropertyInfo_o *)0x0;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
  bVar5 = System_Type__op_Inequality(pSVar3,(System_Type_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pSVar3 = *(System_Type_o **)(*(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger + 0x10);
    if (pSVar3 == (System_Type_o *)0x0) {
label_03b44b06:
      __this = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c9c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
        g_data_057a9c9c = '\x01';
      }
      (__this->fields)._definition = pGVar12;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._definition,pGVar12);
      (__this->fields)._enter = pGVar11;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._enter,pGVar11);
      (__this->fields)._exit = in_R8;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._exit,in_R8);
      (__this->fields)._state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)extraout_RDX;
      method_00 = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._state);
      pGVar4 = (__this->fields)._state;
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        b = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
        System_Action_object____ctor();
        if (g_data_057a9ca8 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
          g_data_057a9ca8 = '\x01';
        }
        a = (pGVar4->fields).Changed;
        do {
          pSVar10 = System_Delegate__Combine((System_Delegate_o *)a,b,(MethodInfo *)0x0);
          pMVar13 = TypeInfo_Action_string;
          method_00 = (MethodInfo *)0x0;
          if (pSVar10 != (System_Delegate_o *)0x0) {
            method_00 = (MethodInfo *)il2cpp_runtime_helper_023051f0(pSVar10,TypeInfo_Action_string);
            if (method_00 == (MethodInfo *)0x0) {
              il2cpp_runtime_helper_022b2fd0(pSVar10);
              method_00 = pMVar13;
              break;
            }
          }
          pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_02300640(&(pGVar4->fields).Changed,method_00,a);
          bVar14 = a != pSVar9;
          a = pSVar9;
        } while (bVar14);
      }
      Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,method_00);
      return;
    }
    pSVar8 = System_Type__GetProperty_3cd63b0(pSVar3,"Value",0x34,(MethodInfo *)0x0);
  }
  lVar1 = *(long *)&TypeInfo_GisketchTypographyLocale[3].fields.stagger;
  *(System_Reflection_PropertyInfo_o **)(lVar1 + 0x28) = pSVar8;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar8);
  return;
}


