// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLineTextureModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000548")]
[CompilerGenerated]
internal class CustomLogicLineTextureModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000549")]
	public static class Factory
	{
		[Token(Token = "0x6002DA4")]
		[Address(RVA = "0x5994D40", Offset = "0x5993D40", VA = "0x5994D40")]
		public static CustomLogicLineTextureModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			BuiltinClassInstance __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineTextureModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicLineTextureModeEnum();
			return (CustomLogicLineTextureModeEnum)__this;
		}
	}

	[Token(Token = "0x200054A")]
	public static class Bindings
	{
		[Token(Token = "0x400186B")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002DA5")]
		[Address(RVA = "0x5994E60", Offset = "0x5993E60", VA = "0x5994E60")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicLineTextureModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Stretch");
			if (bVar1) {
				if ((typeof(CustomLogicLineTextureModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicLineTextureModeEnum.Bindings.__CreatePropertyBinding__Stretch();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicLineTextureModeEnum.Bindings.__CreatePropertyBinding__Stretch();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Tile");
			if (bVar1) {
				if ((typeof(CustomLogicLineTextureModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicLineTextureModeEnum.Bindings.__CreatePropertyBinding__Tile();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicLineTextureModeEnum.Bindings.__CreatePropertyBinding__Tile();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "DistributePerSegment");
			if (bVar1) {
				if ((typeof(CustomLogicLineTextureModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicLineTextureModeEnum.Bindings.__CreatePropertyBinding__DistributePerSegment();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicLineTextureModeEnum.Bindings.__CreatePropertyBinding__DistributePerSegment();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "RepeatPerSegment");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineTextureModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicLineTextureModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicLineTextureModeEnum.Bindings.__CreatePropertyBinding__RepeatPerSegment();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicLineTextureModeEnum.Bindings.__CreatePropertyBinding__RepeatPerSegment();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002DA6")]
		[Address(RVA = "0x5995040", Offset = "0x5994040", VA = "0x5995040")]
		public static CLPropertyBinding<CustomLogicLineTextureModeEnum> __CreatePropertyBinding__Stretch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Stretch): 3 lines keep C-only constructs
			Func<CustomLogicLineTextureModeEnum, object> __this;
			CLPropertyBinding<CustomLogicLineTextureModeEnum> __this_00;

			__this = new Func<CustomLogicLineTextureModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Stretch_g____getter);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineTextureModeEnum>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DA7")]
		[Address(RVA = "0x59950E0", Offset = "0x59940E0", VA = "0x59950E0")]
		public static CLPropertyBinding<CustomLogicLineTextureModeEnum> __CreatePropertyBinding__Tile()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Tile): 3 lines keep C-only constructs
			Func<CustomLogicLineTextureModeEnum, object> __this;
			CLPropertyBinding<CustomLogicLineTextureModeEnum> __this_00;

			__this = new Func<CustomLogicLineTextureModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Tile_g____getter_3);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineTextureModeEnum>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DA8")]
		[Address(RVA = "0x5995180", Offset = "0x5994180", VA = "0x5995180")]
		public static CLPropertyBinding<CustomLogicLineTextureModeEnum> __CreatePropertyBinding__DistributePerSegment()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__DistributePerSegment): 3 lines keep C-only constructs
			Func<CustomLogicLineTextureModeEnum, object> __this;
			CLPropertyBinding<CustomLogicLineTextureModeEnum> __this_00;

			__this = new Func<CustomLogicLineTextureModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__DistributePerSegmen);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineTextureModeEnum>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DA9")]
		[Address(RVA = "0x5995220", Offset = "0x5994220", VA = "0x5995220")]
		public static CLPropertyBinding<CustomLogicLineTextureModeEnum> __CreatePropertyBinding__RepeatPerSegment()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__RepeatPerSegment): 3 lines keep C-only constructs
			Func<CustomLogicLineTextureModeEnum, object> __this;
			CLPropertyBinding<CustomLogicLineTextureModeEnum> __this_00;

			__this = new Func<CustomLogicLineTextureModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__RepeatPerSegment_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineTextureModeEnum>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700074C")]
	public static int Stretch
	{
		[Token(Token = "0x6002D9C")]
		[Address(RVA = "0x5994CA0", Offset = "0x5993CA0", VA = "0x5994CA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$get_Stretch): clean
			return 0;
		}
	}

	[Token(Token = "0x1700074D")]
	public static int Tile
	{
		[Token(Token = "0x6002D9D")]
		[Address(RVA = "0x5994CB0", Offset = "0x5993CB0", VA = "0x5994CB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$get_Tile): clean
			return 1;
		}
	}

	[Token(Token = "0x1700074E")]
	public static int DistributePerSegment
	{
		[Token(Token = "0x6002D9E")]
		[Address(RVA = "0x5994CC0", Offset = "0x5993CC0", VA = "0x5994CC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$get_DistributePerSegment): clean
			return 2;
		}
	}

	[Token(Token = "0x1700074F")]
	public static int RepeatPerSegment
	{
		[Token(Token = "0x6002D9F")]
		[Address(RVA = "0x5994CD0", Offset = "0x5993CD0", VA = "0x5994CD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$get_RepeatPerSegment): clean
			return 3;
		}
	}

	[Token(Token = "0x17000750")]
	public override string ClassName
	{
		[Token(Token = "0x6002DA0")]
		[Address(RVA = "0x5994CE0", Offset = "0x5993CE0", VA = "0x5994CE0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$get_ClassName): clean
			return "LineTextureModeEnum";
		}
	}

	[Token(Token = "0x17000751")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002DA1")]
		[Address(RVA = "0x5994D10", Offset = "0x5993D10", VA = "0x5994D10", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000752")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002DA2")]
		[Address(RVA = "0x5994D20", Offset = "0x5993D20", VA = "0x5994D20", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000753")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002DA3")]
		[Address(RVA = "0x5994D30", Offset = "0x5993D30", VA = "0x5994D30", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002D9B")]
	[Address(RVA = "0x5994C30", Offset = "0x5993C30", VA = "0x5994C30")]
	public CustomLogicLineTextureModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c (CustomLogic.CustomLogicLineTextureModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754681a == false) {
			Il2CppMethodInitialized_0754681a = true;
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLineTextureModeEnum.c.

	// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Stretch");
		__this.Add((Il2CppObject *)"Tile");
		__this.Add((Il2CppObject *)"DistributePerSegment");
		__this.Add((Il2CppObject *)"RepeatPerSegment");
		CustomLogicLineTextureModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Stretch_g____getter_2_0(CustomLogicLineTextureModeEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Tile>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Tile_g____getter_3_0(CustomLogicLineTextureModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__DistributePerSegment>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__DistributePerSegment_g____getter_4_0(CustomLogicLineTextureModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__RepeatPerSegment>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__RepeatPerSegment_g____getter_5_0(CustomLogicLineTextureModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
