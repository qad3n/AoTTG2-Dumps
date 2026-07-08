// Type: Settings.HumanCustomSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/HumanCustomSet.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/HumanCustomSet.cs  [CHANGED since prior version]
// --------------------------------

// Settings.HumanCustomSet$$Validate
// il2cpp: bool Settings_HumanCustomSet__Validate (Settings_HumanCustomSet_o* __this, const MethodInfo* method);
// 0x3d93070

bool_conflict
Settings_HumanCustomSet__Validate(Settings_HumanCustomSet_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (DAT_05702732 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05702732 = '\x01';
  }
  pSVar3 = (__this->fields).Sex;
  if (pSVar3 == (Settings_IntSetting_o *)0x0) goto LAB_03d93155;
  if ((pSVar3->fields)._value == 0) {
    pSVar3 = (__this->fields).Costume;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto LAB_03d93155;
    iVar2 = (pSVar3->fields)._value;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
      il2cpp_init_class();
      iVar1 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24);
    }
    else {
      iVar1 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24);
    }
    if (iVar1 <= iVar2) {
      return 0;
    }
    pSVar3 = (__this->fields).Sex;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto LAB_03d93155;
  }
  if ((pSVar3->fields)._value == 1) {
    pSVar3 = (__this->fields).Costume;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) {
LAB_03d93155:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar2 = (pSVar3->fields)._value;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar3 = *(Settings_IntSetting_o **)(TypeInfo_HumanSetup + 0xb8);
      iVar1 = *(int *)&pSVar3[1].monitor;
    }
    else {
      pSVar3 = *(Settings_IntSetting_o **)(TypeInfo_HumanSetup + 0xb8);
      iVar1 = *(int *)&pSVar3[1].monitor;
    }
    if (iVar1 <= iVar2) {
      return 0;
    }
  }
  return (bool_conflict)CONCAT71((int7)((ulong)pSVar3 >> 8),1);
}


// Settings.HumanCustomSet$$.ctor
// il2cpp: void Settings_HumanCustomSet___ctor (Settings_HumanCustomSet_o* __this, const MethodInfo* method);
// 0x3d93160

void Settings_HumanCustomSet___ctor(Settings_HumanCustomSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  Settings_ColorSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  
  if (DAT_05702733 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"HairM0");
    il2cpp_init_method_metadata(&"BackNone");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"HatNone");
    il2cpp_init_method_metadata(&"HeadNone");
    il2cpp_init_method_metadata(&"GlassNone");
    il2cpp_init_method_metadata(&"FaceNone");
    DAT_05702733 = '\x01';
  }
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Sex = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Sex);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Eye = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Eye,pSVar2);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"FaceNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Face = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Face,pSVar3);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"GlassNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Glass = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Glass,pSVar3);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"HairM0",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Hair = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Hair);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Costume = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Costume);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Boots = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Boots);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Cape = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Cape);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Logo = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Logo,pSVar2);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"HatNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Hat = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Hat,pSVar3);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"HeadNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Head = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Head,pSVar3);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"BackNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Back = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Back,pSVar3);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0xff,0xdc,0xc4,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).SkinColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).SkinColor,pSVar5);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0x80,0x80,0x80,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).HairColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).HairColor,pSVar5);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).ShirtColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).ShirtColor,pSVar5);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0x62,0x51,0x41,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).StrapsColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).StrapsColor,pSVar5);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).PantsColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).PantsColor,pSVar5);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0xb7,0x90,0x6b,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).JacketColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).JacketColor,pSVar5);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0x31,0x24,0x21,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).BootsColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).BootsColor,pSVar5);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HairEffect = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).HairEffect);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).HairEffectColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).HairEffectColor,pSVar5);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).BladeEffect = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).BladeEffect);
  pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar4,0,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).BladeEffectColor = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).BladeEffectColor,pSVar5);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Stats = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Stats,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHair = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinHair,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinEye = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinEye,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinGlass = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinGlass,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinFace = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinFace,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinSkin = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinSkin,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinCostume = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinCostume,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinLogo = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinLogo,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinGearL = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinGearL,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinGearR = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinGearR,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinGas = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinGas,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHoodie = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinHoodie,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinWeaponTrail = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinWeaponTrail,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHorse = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinHorse,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinThunderspearL = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinThunderspearL,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinThunderspearR = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinThunderspearR,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHookL = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinHookL);
  pSVar6 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar6,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).SkinHookLTiling = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).SkinHookLTiling,pSVar6);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHookR = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinHookR);
  pSVar6 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar6,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).SkinHookRTiling = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).SkinHookRTiling,pSVar6);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHat = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinHat,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHead = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinHead,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinBack = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinBack);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


