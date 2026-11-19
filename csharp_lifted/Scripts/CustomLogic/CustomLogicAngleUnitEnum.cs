// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAngleUnitEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004E6")]
[CompilerGenerated]
internal class CustomLogicAngleUnitEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004E7")]
	public static class Factory
	{
		[Token(Token = "0x6002720")]
		[Address(RVA = "0x5954F20", Offset = "0x5953F20", VA = "0x5954F20")]
		public static CustomLogicAngleUnitEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAngleUnitEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicAngleUnitEnum();
			return (CustomLogicAngleUnitEnum)__this;
		}
	}

	[Token(Token = "0x20004E8")]
	public static class Bindings
	{
		[Token(Token = "0x40017B7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002721")]
		[Address(RVA = "0x5955040", Offset = "0x5954040", VA = "0x5955040")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicAngleUnitEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Degree");
			if (bVar1) {
				if ((typeof(CustomLogicAngleUnitEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicAngleUnitEnum.Bindings)) ;
					pCVar2 = CustomLogicAngleUnitEnum.Bindings.__CreatePropertyBinding__Degree();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicAngleUnitEnum.Bindings.__CreatePropertyBinding__Degree();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Gradian");
			if (bVar1) {
				if ((typeof(CustomLogicAngleUnitEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicAngleUnitEnum.Bindings)) ;
					pCVar2 = CustomLogicAngleUnitEnum.Bindings.__CreatePropertyBinding__Gradian();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicAngleUnitEnum.Bindings.__CreatePropertyBinding__Gradian();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Radian");
			if (bVar1) {
				if ((typeof(CustomLogicAngleUnitEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicAngleUnitEnum.Bindings)) ;
					pCVar2 = CustomLogicAngleUnitEnum.Bindings.__CreatePropertyBinding__Radian();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicAngleUnitEnum.Bindings.__CreatePropertyBinding__Radian();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Turn");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAngleUnitEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicAngleUnitEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicAngleUnitEnum.Bindings.__CreatePropertyBinding__Turn();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicAngleUnitEnum.Bindings.__CreatePropertyBinding__Turn();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002722")]
		[Address(RVA = "0x5955220", Offset = "0x5954220", VA = "0x5955220")]
		public static CLPropertyBinding<CustomLogicAngleUnitEnum> __CreatePropertyBinding__Degree()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Degree): 2 lines keep C-only constructs
			Func<CustomLogicAngleUnitEnum, object> __this;
			CLPropertyBinding<CustomLogicAngleUnitEnum> __this_00;

			__this = new Func<CustomLogicAngleUnitEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Degree_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicAngleUnitEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002723")]
		[Address(RVA = "0x59552C0", Offset = "0x59542C0", VA = "0x59552C0")]
		public static CLPropertyBinding<CustomLogicAngleUnitEnum> __CreatePropertyBinding__Gradian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Gradian): 2 lines keep C-only constructs
			Func<CustomLogicAngleUnitEnum, object> __this;
			CLPropertyBinding<CustomLogicAngleUnitEnum> __this_00;

			__this = new Func<CustomLogicAngleUnitEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Gradian_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicAngleUnitEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002724")]
		[Address(RVA = "0x5955360", Offset = "0x5954360", VA = "0x5955360")]
		public static CLPropertyBinding<CustomLogicAngleUnitEnum> __CreatePropertyBinding__Radian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Radian): 2 lines keep C-only constructs
			Func<CustomLogicAngleUnitEnum, object> __this;
			CLPropertyBinding<CustomLogicAngleUnitEnum> __this_00;

			__this = new Func<CustomLogicAngleUnitEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Radian_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicAngleUnitEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002725")]
		[Address(RVA = "0x5955400", Offset = "0x5954400", VA = "0x5955400")]
		public static CLPropertyBinding<CustomLogicAngleUnitEnum> __CreatePropertyBinding__Turn()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Turn): 2 lines keep C-only constructs
			Func<CustomLogicAngleUnitEnum, object> __this;
			CLPropertyBinding<CustomLogicAngleUnitEnum> __this_00;

			__this = new Func<CustomLogicAngleUnitEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Turn_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicAngleUnitEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170004F8")]
	public static int Degree
	{
		[Token(Token = "0x6002718")]
		[Address(RVA = "0x5954E80", Offset = "0x5953E80", VA = "0x5954E80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$get_Degree): clean
			return 0;
		}
	}

	[Token(Token = "0x170004F9")]
	public static int Gradian
	{
		[Token(Token = "0x6002719")]
		[Address(RVA = "0x5954E90", Offset = "0x5953E90", VA = "0x5954E90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$get_Gradian): clean
			return 1;
		}
	}

	[Token(Token = "0x170004FA")]
	public static int Radian
	{
		[Token(Token = "0x600271A")]
		[Address(RVA = "0x5954EA0", Offset = "0x5953EA0", VA = "0x5954EA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$get_Radian): clean
			return 2;
		}
	}

	[Token(Token = "0x170004FB")]
	public static int Turn
	{
		[Token(Token = "0x600271B")]
		[Address(RVA = "0x5954EB0", Offset = "0x5953EB0", VA = "0x5954EB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$get_Turn): clean
			return 3;
		}
	}

	[Token(Token = "0x170004FC")]
	public override string ClassName
	{
		[Token(Token = "0x600271C")]
		[Address(RVA = "0x5954EC0", Offset = "0x5953EC0", VA = "0x5954EC0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$get_ClassName): clean
			return "AngleUnitEnum";
		}
	}

	[Token(Token = "0x170004FD")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600271D")]
		[Address(RVA = "0x5954EF0", Offset = "0x5953EF0", VA = "0x5954EF0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170004FE")]
	public override bool IsStatic
	{
		[Token(Token = "0x600271E")]
		[Address(RVA = "0x5954F00", Offset = "0x5953F00", VA = "0x5954F00", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170004FF")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600271F")]
		[Address(RVA = "0x5954F10", Offset = "0x5953F10", VA = "0x5954F10", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002717")]
	[Address(RVA = "0x5954E10", Offset = "0x5953E10", VA = "0x5954E10")]
	public CustomLogicAngleUnitEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c (CustomLogic.CustomLogicAngleUnitEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546286 == false) {
			Il2CppMethodInitialized_07546286 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicAngleUnitEnum.c.

	// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Degree");
		__this.Add((Il2CppObject *)"Gradian");
		__this.Add((Il2CppObject *)"Radian");
		__this.Add((Il2CppObject *)"Turn");
		CustomLogicAngleUnitEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Degree>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Degree_g____getter_2_0(CustomLogicAngleUnitEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Gradian>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Gradian_g____getter_3_0(CustomLogicAngleUnitEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Radian>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Radian_g____getter_4_0(CustomLogicAngleUnitEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Turn>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Turn_g____getter_5_0(CustomLogicAngleUnitEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
