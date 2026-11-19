// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPhysicsMaterialBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20004A5")]
[CompilerGenerated]
internal class CustomLogicPhysicsMaterialBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20004A6")]
	public static class Factory
	{
		[Token(Token = "0x6001FC7")]
		[Address(RVA = "0x5902BB0", Offset = "0x5901BB0", VA = "0x5902BB0")]
		public static CustomLogicPhysicsMaterialBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicPhysicsMaterialBuiltin __this;
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_14;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length != 0) {
				pSVar1 = local_14.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicsMaterialBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicPhysicsMaterialBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x20004A7")]
	public static class Bindings
	{
		[Token(Token = "0x40016BD")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001FC8")]
		[Address(RVA = "0x5902CA0", Offset = "0x5901CA0", VA = "0x5902CA0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> pCVar2;
			CLMethodBinding<CustomLogicPhysicsMaterialBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "StaticFriction");
			if (bVar1) {
				if ((typeof(CustomLogicPhysicsMaterialBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreatePropertyBinding__StaticFriction();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreatePropertyBinding__StaticFriction();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "DynamicFriction");
			if (bVar1) {
				if ((typeof(CustomLogicPhysicsMaterialBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreatePropertyBinding__DynamicFriction();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreatePropertyBinding__DynamicFriction();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Bounciness");
			if (bVar1) {
				if ((typeof(CustomLogicPhysicsMaterialBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreatePropertyBinding__Bounciness();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreatePropertyBinding__Bounciness();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "FrictionCombine");
			if (bVar1) {
				pCVar2 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreatePropertyBinding__FrictionCombine();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "BounceCombine");
			if (bVar1) {
				pCVar2 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreatePropertyBinding__BounceCombine();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Setup");
			if (bVar1) {
				pCVar3 = CustomLogicPhysicsMaterialBuiltin.Bindings.__CreateMethodBinding__Setup();
				return (ICLMemberBinding)pCVar3;
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicsMaterialBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001FC9")]
		[Address(RVA = "0x5902F10", Offset = "0x5901F10", VA = "0x5902F10")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__StaticFriction()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__StaticFriction): 5 lines keep C-only constructs
			Func<CustomLogicPhysicsMaterialBuiltin, object> __this;
			Action<CustomLogicPhysicsMaterialBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e95 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicPhysicsMaterialBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e95 = true;
			}
			__this = new Func<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g);
			__this_00 = new Action<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g_71c0c18);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001FCA")]
		[Address(RVA = "0x5902FF0", Offset = "0x5901FF0", VA = "0x5902FF0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__DynamicFriction()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__DynamicFriction): 5 lines keep C-only constructs
			Func<CustomLogicPhysicsMaterialBuiltin, object> __this;
			Action<CustomLogicPhysicsMaterialBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e96 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicPhysicsMaterialBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e96 = true;
			}
			__this = new Func<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction);
			__this_00 = new Action<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction_71c0bf8);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001FCB")]
		[Address(RVA = "0x59030D0", Offset = "0x59020D0", VA = "0x59030D0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__Bounciness()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__Bounciness): 5 lines keep C-only constructs
			Func<CustomLogicPhysicsMaterialBuiltin, object> __this;
			Action<CustomLogicPhysicsMaterialBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e97 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicPhysicsMaterialBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e97 = true;
			}
			__this = new Func<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g);
			__this_00 = new Action<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g_71c0be8);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001FCC")]
		[Address(RVA = "0x59031B0", Offset = "0x59021B0", VA = "0x59031B0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__FrictionCombine()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__FrictionCombine): 5 lines keep C-only constructs
			Func<CustomLogicPhysicsMaterialBuiltin, object> __this;
			Action<CustomLogicPhysicsMaterialBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e98 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicPhysicsMaterialBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e98 = true;
			}
			__this = new Func<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine);
			__this_00 = new Action<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine_71c0c08);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001FCD")]
		[Address(RVA = "0x5903290", Offset = "0x5902290", VA = "0x5903290")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__BounceCombine()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__BounceCombine): 5 lines keep C-only constructs
			Func<CustomLogicPhysicsMaterialBuiltin, object> __this;
			Action<CustomLogicPhysicsMaterialBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e99 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicPhysicsMaterialBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e99 = true;
			}
			__this = new Func<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g);
			__this_00 = new Action<CustomLogicPhysicsMaterialBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g_71c0bd8);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001FCE")]
		[Address(RVA = "0x5903370", Offset = "0x5902370", VA = "0x5903370")]
		public static CLMethodBinding<CustomLogicPhysicsMaterialBuiltin> __CreateMethodBinding__Setup()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreateMethodBinding__Setup): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsMaterialBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsMaterialBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e9a == false) {
				Il2CppMethodInitialized_07545e9a = true;
				uVar1 = (typeof(CustomLogicPhysicsMaterialBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor ;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsMaterialBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor ;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsMaterialBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsMaterialBuiltin.Bindings.c)).static_fields ;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsMaterialBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsMaterialBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicPhysicsMaterialBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c___CreateMethodBinding__Setup_b__7_0);
				pCVar2 = typeof(CustomLogicPhysicsMaterialBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicPhysicsMaterialBuiltin>));
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40016BA")]
	[FieldOffset(Offset = "0x38")]
	public CustomPhysicsMaterial Value;

	[Token(Token = "0x40016BB")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x40016BC")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x170003A7")]
	public float StaticFriction
	{
		[Token(Token = "0x6001FB8")]
		[Address(RVA = "0x59029F0", Offset = "0x59019F0", VA = "0x59029F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_StaticFriction): clean
			CustomPhysicsMaterial __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001FB9")]
		[Address(RVA = "0x5902A10", Offset = "0x5901A10", VA = "0x5902A10")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_StaticFriction): clean
			CustomPhysicsMaterial __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.StaticFriction = value;
			return;
		}
	}

	[Token(Token = "0x170003A8")]
	public float DynamicFriction
	{
		[Token(Token = "0x6001FBA")]
		[Address(RVA = "0x5902A30", Offset = "0x5901A30", VA = "0x5902A30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_DynamicFriction): clean
			CustomPhysicsMaterial __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001FBB")]
		[Address(RVA = "0x5902A50", Offset = "0x5901A50", VA = "0x5902A50")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_DynamicFriction): clean
			CustomPhysicsMaterial __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.DynamicFriction = value;
			return;
		}
	}

	[Token(Token = "0x170003A9")]
	public float Bounciness
	{
		[Token(Token = "0x6001FBC")]
		[Address(RVA = "0x5902A70", Offset = "0x5901A70", VA = "0x5902A70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_Bounciness): clean
			CustomPhysicsMaterial __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001FBD")]
		[Address(RVA = "0x5902A90", Offset = "0x5901A90", VA = "0x5902A90")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_Bounciness): clean
			CustomPhysicsMaterial __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Bounciness = value;
			return;
		}
	}

	[Token(Token = "0x170003AA")]
	public int FrictionCombine
	{
		[Token(Token = "0x6001FBE")]
		[Address(RVA = "0x5902AB0", Offset = "0x5901AB0", VA = "0x5902AB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_FrictionCombine): clean
			CustomPhysicsMaterial __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001FBF")]
		[Address(RVA = "0x5902AD0", Offset = "0x5901AD0", VA = "0x5902AD0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_FrictionCombine): clean
			CustomPhysicsMaterial __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.FrictionCombine = value;
			return;
		}
	}

	[Token(Token = "0x170003AB")]
	public int BounceCombine
	{
		[Token(Token = "0x6001FC0")]
		[Address(RVA = "0x5902AF0", Offset = "0x5901AF0", VA = "0x5902AF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_BounceCombine): clean
			CustomPhysicsMaterial __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001FC1")]
		[Address(RVA = "0x5902B10", Offset = "0x5901B10", VA = "0x5902B10")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_BounceCombine): clean
			CustomPhysicsMaterial __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.BounceCombine = value;
			return;
		}
	}

	[Token(Token = "0x170003AC")]
	public override string ClassName
	{
		[Token(Token = "0x6001FC3")]
		[Address(RVA = "0x5902B50", Offset = "0x5901B50", VA = "0x5902B50", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_ClassName): clean
			return "PhysicsMaterialBuiltin";
		}
	}

	[Token(Token = "0x170003AD")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001FC4")]
		[Address(RVA = "0x5902B80", Offset = "0x5901B80", VA = "0x5902B80", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170003AE")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001FC5")]
		[Address(RVA = "0x5902B90", Offset = "0x5901B90", VA = "0x5902B90", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170003AF")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001FC6")]
		[Address(RVA = "0x5902BA0", Offset = "0x5901BA0", VA = "0x5902BA0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x59028C0", Offset = "0x59018C0", VA = "0x59028C0")]
	public CustomLogicPhysicsMaterialBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor): clean
		base(null);
		return;
	}

	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x59028D0", Offset = "0x59018D0", VA = "0x59028D0")]
	public CustomLogicPhysicsMaterialBuiltin(CustomLogicMapObjectBuiltin owner)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor): 2 lines keep C-only constructs
		byte bVar1;
		MapObject pMVar2;
		CustomPhysicsMaterial pMVar3;
		CustomPhysicsMaterial pMVar4;

		if ((owner != null) &&(pMVar2 = owner.Value, pMVar2 != null)) {
			pMVar4 = BuiltinComponentInstance.GetOrAddComponent<CustomPhysicsMaterial>(pMVar2.GameObject);
			base((Component)pMVar4);
			this.OwnerMapObject = owner;
			pMVar2 = owner.Value;
			if (pMVar2 != null) {
				this.Owner = pMVar2.GameObject;
				pMVar3 = typeof(CustomPhysicsMaterial);
				pMVar4 = (CustomPhysicsMaterial)this.Component;
				if (pMVar4 == null) {
					this.Value = null;
	label_05a029c9: ;
					return;
				}
				bVar1 = (typeof(CustomPhysicsMaterial)._2).typeHierarchyDepth;
				if ((bVar1 <= (((Component)pMVar4.klass)._2).typeHierarchyDepth) &&((((Component)pMVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomPhysicsMaterial))) {
					this.Value = pMVar4;
					if ((bVar1 <= (((Component)pMVar4.klass)._2).typeHierarchyDepth) &&((((Component)pMVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pMVar3)) goto label_05a029c9;
				}
				throw new InvalidCastException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x5902B30", Offset = "0x5901B30", VA = "0x5902B30")]
	public void Setup(bool allChildColliders)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c (CustomLogic.CustomLogicPhysicsMaterialBuiltin$$Setup): clean
		CustomPhysicsMaterial __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Setup(allChildColliders);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c.

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"StaticFriction");
		__this.Add((Il2CppObject *)"DynamicFriction");
		__this.Add((Il2CppObject *)"Bounciness");
		__this.Add((Il2CppObject *)"FrictionCombine");
		__this.Add((Il2CppObject *)"BounceCombine");
		__this.Add((Il2CppObject *)"Setup");
		CustomLogicPhysicsMaterialBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__StaticFriction_g____getter_2_0(CustomLogicPhysicsMaterialBuiltin __i)
	{
		CustomPhysicsMaterial __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.StaticFriction;
		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__StaticFriction_g____setter_2_1(CustomLogicPhysicsMaterialBuiltin __i, object __v)
	{
		CustomPhysicsMaterial __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.StaticFriction = value;
		return;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__DynamicFriction_g____getter_3_0(CustomLogicPhysicsMaterialBuiltin __i)
	{
		CustomPhysicsMaterial __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.DynamicFriction;
		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__DynamicFriction_g____setter_3_1(CustomLogicPhysicsMaterialBuiltin __i, object __v)
	{
		CustomPhysicsMaterial __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.DynamicFriction = value;
		return;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Bounciness_g____getter_4_0(CustomLogicPhysicsMaterialBuiltin __i)
	{
		CustomPhysicsMaterial __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.Bounciness;
		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Bounciness_g____setter_4_1(CustomLogicPhysicsMaterialBuiltin __i, object __v)
	{
		CustomPhysicsMaterial __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.Bounciness = value;
		return;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__FrictionCombine_g____getter_5_0(CustomLogicPhysicsMaterialBuiltin __i)
	{
		CustomPhysicsMaterial __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.FrictionCombine;
		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__FrictionCombine_g____setter_5_1(CustomLogicPhysicsMaterialBuiltin __i, object __v)
	{
		CustomPhysicsMaterial __this;
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.FrictionCombine = value;
		return;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__BounceCombine_g____getter_6_0(CustomLogicPhysicsMaterialBuiltin __i)
	{
		CustomPhysicsMaterial __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.BounceCombine;
		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__BounceCombine_g____setter_6_1(CustomLogicPhysicsMaterialBuiltin __i, object __v)
	{
		CustomPhysicsMaterial __this;
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.BounceCombine = value;
		return;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicPhysicsMaterialBuiltin.Bindings.c();
		CustomLogicPhysicsMaterialBuiltin.Bindings.c.__9 =(CustomLogicPhysicsMaterialBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$<__CreateMethodBinding__Setup>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__Setup_b__7_0(CustomLogicPhysicsMaterialBuiltin __c, Object[] __a)
	{
		object obj;
		CustomPhysicsMaterial __this_00;
		bool allChildColliders;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			allChildColliders = CustomLogicEvaluator.ConvertTo<bool>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.Setup(allChildColliders);
				return null;
			}
		}
		throw new NullReferenceException();
	}
}
