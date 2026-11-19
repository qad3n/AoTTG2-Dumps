// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHumanParticleEffectEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000521")]
[CompilerGenerated]
internal class CustomLogicHumanParticleEffectEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000522")]
	public static class Factory
	{
		[Token(Token = "0x6002A43")]
		[Address(RVA = "0x5970E50", Offset = "0x596FE50", VA = "0x5970E50")]
		public static CustomLogicHumanParticleEffectEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanParticleEffectEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicHumanParticleEffectEnum();
			return (CustomLogicHumanParticleEffectEnum)__this;
		}
	}

	[Token(Token = "0x2000523")]
	public static class Bindings
	{
		[Token(Token = "0x40017D7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002A44")]
		[Address(RVA = "0x5970F70", Offset = "0x596FF70", VA = "0x5970F70")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicHumanParticleEffectEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Buff1");
			if (bVar1) {
				if ((typeof(CustomLogicHumanParticleEffectEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					pCVar2 = CustomLogicHumanParticleEffectEnum.Bindings.__CreatePropertyBinding__Buff1();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicHumanParticleEffectEnum.Bindings.__CreatePropertyBinding__Buff1();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Buff2");
			if (bVar1) {
				if ((typeof(CustomLogicHumanParticleEffectEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					pCVar2 = CustomLogicHumanParticleEffectEnum.Bindings.__CreatePropertyBinding__Buff2();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicHumanParticleEffectEnum.Bindings.__CreatePropertyBinding__Buff2();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Fire1");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanParticleEffectEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicHumanParticleEffectEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicHumanParticleEffectEnum.Bindings.__CreatePropertyBinding__Fire1();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicHumanParticleEffectEnum.Bindings.__CreatePropertyBinding__Fire1();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002A45")]
		[Address(RVA = "0x5971100", Offset = "0x5970100", VA = "0x5971100")]
		public static CLPropertyBinding<CustomLogicHumanParticleEffectEnum> __CreatePropertyBinding__Buff1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Buff1): 3 lines keep C-only constructs
			Func<CustomLogicHumanParticleEffectEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanParticleEffectEnum> __this_00;

			__this = new Func<CustomLogicHumanParticleEffectEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Buff1_g____gett);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicHumanParticleEffectEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002A46")]
		[Address(RVA = "0x59711A0", Offset = "0x59701A0", VA = "0x59711A0")]
		public static CLPropertyBinding<CustomLogicHumanParticleEffectEnum> __CreatePropertyBinding__Buff2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Buff2): 3 lines keep C-only constructs
			Func<CustomLogicHumanParticleEffectEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanParticleEffectEnum> __this_00;

			__this = new Func<CustomLogicHumanParticleEffectEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Buff2_g____gett);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicHumanParticleEffectEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002A47")]
		[Address(RVA = "0x5971240", Offset = "0x5970240", VA = "0x5971240")]
		public static CLPropertyBinding<CustomLogicHumanParticleEffectEnum> __CreatePropertyBinding__Fire1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Fire1): 3 lines keep C-only constructs
			Func<CustomLogicHumanParticleEffectEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanParticleEffectEnum> __this_00;

			__this = new Func<CustomLogicHumanParticleEffectEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Fire1_g____gett);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicHumanParticleEffectEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x40017D4")]
	internal const string Buff1Value = "Buff1";

	[Token(Token = "0x40017D5")]
	internal const string Buff2Value = "Buff2";

	[Token(Token = "0x40017D6")]
	internal const string Fire1Value = "Fire1";

	[Token(Token = "0x1700061D")]
	public static string Buff1
	{
		[Token(Token = "0x6002A3C")]
		[Address(RVA = "0x5970D60", Offset = "0x596FD60", VA = "0x5970D60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Buff1): clean
			return "Buff1";
		}
	}

	[Token(Token = "0x1700061E")]
	public static string Buff2
	{
		[Token(Token = "0x6002A3D")]
		[Address(RVA = "0x5970D90", Offset = "0x596FD90", VA = "0x5970D90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Buff2): clean
			return "Buff2";
		}
	}

	[Token(Token = "0x1700061F")]
	public static string Fire1
	{
		[Token(Token = "0x6002A3E")]
		[Address(RVA = "0x5970DC0", Offset = "0x596FDC0", VA = "0x5970DC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Fire1): clean
			return "Fire1";
		}
	}

	[Token(Token = "0x17000620")]
	public override string ClassName
	{
		[Token(Token = "0x6002A3F")]
		[Address(RVA = "0x5970DF0", Offset = "0x596FDF0", VA = "0x5970DF0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum$$get_ClassName): clean
			return "HumanParticleEffectEnum";
		}
	}

	[Token(Token = "0x17000621")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002A40")]
		[Address(RVA = "0x5970E20", Offset = "0x596FE20", VA = "0x5970E20", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000622")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002A41")]
		[Address(RVA = "0x5970E30", Offset = "0x596FE30", VA = "0x5970E30", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000623")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002A42")]
		[Address(RVA = "0x5970E40", Offset = "0x596FE40", VA = "0x5970E40", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002A3B")]
	[Address(RVA = "0x5970CF0", Offset = "0x596FCF0", VA = "0x5970CF0")]
	public CustomLogicHumanParticleEffectEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c (CustomLogic.CustomLogicHumanParticleEffectEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754647e == false) {
			Il2CppMethodInitialized_0754647e = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicHumanParticleEffectEnum.c.

	// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Buff1");
		__this.Add((Il2CppObject *)"Buff2");
		__this.Add((Il2CppObject *)"Fire1");
		CustomLogicHumanParticleEffectEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Buff1>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Buff1_g____getter_2_0(CustomLogicHumanParticleEffectEnum __i)
	{
		return (Il2CppObject *)"Buff1";
	}

	// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Buff2>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Buff2_g____getter_3_0(CustomLogicHumanParticleEffectEnum __i)
	{
		return (Il2CppObject *)"Buff2";
	}

	// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Fire1>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Fire1_g____getter_4_0(CustomLogicHumanParticleEffectEnum __i)
	{
		return (Il2CppObject *)"Fire1";
	}
}
