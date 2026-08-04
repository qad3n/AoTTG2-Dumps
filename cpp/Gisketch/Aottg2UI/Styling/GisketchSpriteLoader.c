// Type: Gisketch.Aottg2UI.Styling.GisketchSpriteLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSpriteLoader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Load
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load (System_String_o* resourcePath, const MethodInfo* method);
// 0x3b35050

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(System_String_o *resourcePath,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Texture2D_o *x_00;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *pSVar4;
  long *plVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  long *plVar7;
  System_String_o *area;
  undefined1 auVar8 [12];
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 uVar9;
  UnityEngine_Object_o *pUVar10;
  System_String_o *in_stack_ffffffffffffff80;
  System_String_o *local_78;
  System_String_o *pSStack_70;
  _union_13 local_68;
  _union_14 _Stack_60;
  undefined1 local_50 [32];
  
  if (g_data_057a9c57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&"x");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&" => ");
    il2cpp_runtime_helper_023445d0(&"SpriteLoader.ResourcesLoadSprite");
    g_data_057a9c57 = '\x01';
  }
  pUVar10 = (UnityEngine_Object_o *)0x0;
  local_68 = (_union_13)0x0;
  _Stack_60 = (_union_14)0x0;
  local_78 = (System_String_o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  uVar9 = 0;
  x = (UnityEngine_Object_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    plVar7 = &TypeInfo_GisketchSpriteLoader;
    pMVar6 = extraout_RDX;
    x = pUVar10;
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar6 = extraout_RDX_00;
      x = pUVar10;
    }
    bVar2 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                      (resourcePath,(UnityEngine_Sprite_o **)&stack0xffffffffffffff78,pMVar6);
    if ((char)bVar2 == '\0') {
      pUVar10 = x;
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar10 = x;
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_50,"SpriteLoader.ResourcesLoadSprite",resourcePath
                 ,(MethodInfo *)0x0);
      local_68 = (_union_13)local_50._16_8_;
      _Stack_60 = (_union_14)local_50._24_8_;
      local_78 = (System_String_o *)local_50._0_8_;
      pSStack_70 = (System_String_o *)local_50._8_8_;
      x = (UnityEngine_Object_o *)UnityEngine_Resources__Load_object_(resourcePath,MethodInfo_Sprite_Load_Sprite);
      __this.fields._detail._4_4_ = uVar9;
      __this.fields._0_12_ = in_stack_ffffffffffffff68;
      __this.fields._startMs = (int64_t)pUVar10;
      __this.fields._24_8_ = in_stack_ffffffffffffff80;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_78);
      pMVar6 = extraout_RDX_01;
      while( true ) {
        if (*(int *)&(((System_String_o *)plVar7)->klass->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar6 = extraout_RDX_02;
        }
        Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store(resourcePath,(UnityEngine_Sprite_o *)x,pMVar6);
        plVar7 = &TypeInfo_Object;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        x_00 = (UnityEngine_Texture2D_o *)0x0;
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') break;
        if (x != (UnityEngine_Object_o *)0x0) {
          x_00 = UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
          break;
        }
label_03b352f7:
        auVar8 = il2cpp_runtime_helper_022b2c90();
        x = auVar8._0_8_;
        if (auVar8._8_4_ != 1) goto label_03b35333;
        plVar5 = (long *)__cxa_begin_catch(x);
        lVar1 = *plVar5;
        __cxa_end_catch();
        x = (UnityEngine_Object_o *)0x0;
        __this_00.fields._detail._4_4_ = uVar9;
        __this_00.fields._0_12_ = in_stack_ffffffffffffff68;
        __this_00.fields._startMs = (int64_t)pUVar10;
        __this_00.fields._24_8_ = in_stack_ffffffffffffff80;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_78);
        pMVar6 = extraout_RDX_03;
        if (lVar1 != 0) {
          il2cpp_runtime_helper_022fefe0(lVar1);
label_03b35333:
          __this_01.fields._detail._4_4_ = uVar9;
          __this_01.fields._0_12_ = in_stack_ffffffffffffff68;
          __this_01.fields._startMs = (int64_t)pUVar10;
          __this_01.fields._24_8_ = in_stack_ffffffffffffff80;
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_78);
          _Unwind_Resume(x);
        }
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar4 = " => ";
      pSVar3 = "null";
      area = "SpriteLoader.ResourcesLoadSprite";
      if ((char)bVar2 != '\0') {
        plVar7 = (long *)"SpriteLoader.ResourcesLoadSprite";
        in_stack_ffffffffffffff80 = "SpriteLoader.ResourcesLoadSprite";
        if (x_00 == (UnityEngine_Texture2D_o *)0x0) goto label_03b352f7;
        (*(x_00->klass->vtable)._5_get_width.methodPtr)(x_00);
        pSVar3 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
        (*(x_00->klass->vtable)._7_get_height.methodPtr)(x_00);
        str2 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_3af7150(pSVar3,"x",str2,(MethodInfo *)0x0);
      }
      pSVar4 = System_String__Concat_3af7150(resourcePath,pSVar4,pSVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar4,(MethodInfo *)0x0);
    }
  }
  return (UnityEngine_Sprite_o *)x;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$TryGetCached
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached (System_String_o* resourcePath, UnityEngine_Sprite_o** sprite, const MethodInfo* method);
// 0x3b35370

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
          (System_String_o *resourcePath,UnityEngine_Sprite_o **sprite,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  MethodInfo *extraout_RDX;
  UnityEngine_Object_o *pUVar3;
  
  if (g_data_057a9c58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c58 = '\x01';
    method = extraout_RDX;
  }
  *sprite = (UnityEngine_Sprite_o *)0x0;
  il2cpp_runtime_helper_022b4080(sprite,0,method);
  pUVar3 = (UnityEngine_Object_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8)
    ;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c59 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c59 = '\x01';
      }
      bVar1 = System_String__IsNullOrEmpty((System_String_o *)pSVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((System_Collections_Generic_Dictionary_object__object__o *)
              **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8),(Il2CppObject *)pSVar2,(Il2CppObject *)pUVar3,
                       MethodInfo_Void_set_Item);
            return extraout_EAX;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9c5a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Sprite);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Sprite);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
            g_data_057a9c5a = '\x01';
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Sprite)
          ;
          System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Sprite);
          **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8) = pSVar2;
          bVar1 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchSpriteLoader + 0xb8),pSVar2);
          return bVar1;
        }
      }
      return bVar1;
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar2,(Il2CppObject *)resourcePath,(Il2CppObject **)sprite,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 != '\0') {
      pUVar3 = (UnityEngine_Object_o *)*sprite;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Store
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store (System_String_o* resourcePath, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x3b35450

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store
               (System_String_o *resourcePath,UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057a9c59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c59 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)sprite,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8),(Il2CppObject *)resourcePath,(Il2CppObject *)sprite,
                   MethodInfo_Void_set_Item);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c5a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Sprite);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Sprite);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
        g_data_057a9c5a = '\x01';
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Sprite);
      System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_UnityEngine_Sprite);
      **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8) = __this;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchSpriteLoader + 0xb8),__this);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader___cctor (const MethodInfo* method);
// 0x3b35520

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057a9c5a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    g_data_057a9c5a = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Sprite);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_UnityEngine_Sprite);
  **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchSpriteLoader + 0xb8),__this);
  return;
}


