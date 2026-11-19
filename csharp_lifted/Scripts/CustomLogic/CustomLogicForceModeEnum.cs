// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicForceModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicForceModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000512")]
[CompilerGenerated]
internal class CustomLogicForceModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000513")]
	public static class Factory
	{
		[Token(Token = "0x6002905")]
		[Address(RVA = "0x5964C00", Offset = "0x5963C00", VA = "0x5964C00")]
		public static CustomLogicForceModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicForceModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicForceModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicForceModeEnum();
			return (CustomLogicForceModeEnum)__this;
		}
	}

	[Token(Token = "0x2000514")]
	public static class Bindings
	{
		[Token(Token = "0x40017CF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002906")]
		[Address(RVA = "0x5964D20", Offset = "0x5963D20", VA = "0x5964D20")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicForceModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Force");
			if (bVar1) {
				if ((typeof(CustomLogicForceModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicForceModeEnum.Bindings)) ;
					pCVar2 = CustomLogicForceModeEnum.Bindings.__CreatePropertyBinding__Force();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicForceModeEnum.Bindings.__CreatePropertyBinding__Force();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Acceleration");
			if (bVar1) {
				if ((typeof(CustomLogicForceModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicForceModeEnum.Bindings)) ;
					pCVar2 = CustomLogicForceModeEnum.Bindings.__CreatePropertyBinding__Acceleration();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicForceModeEnum.Bindings.__CreatePropertyBinding__Acceleration();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Impulse");
			if (bVar1) {
				if ((typeof(CustomLogicForceModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicForceModeEnum.Bindings)) ;
					pCVar2 = CustomLogicForceModeEnum.Bindings.__CreatePropertyBinding__Impulse();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicForceModeEnum.Bindings.__CreatePropertyBinding__Impulse();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "VelocityChange");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicForceModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicForceModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicForceModeEnum.Bindings.__CreatePropertyBinding__VelocityChange();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicForceModeEnum.Bindings.__CreatePropertyBinding__VelocityChange();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002907")]
		[Address(RVA = "0x5964F00", Offset = "0x5963F00", VA = "0x5964F00")]
		public static CLPropertyBinding<CustomLogicForceModeEnum> __CreatePropertyBinding__Force()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Force): 2 lines keep C-only constructs
			Func<CustomLogicForceModeEnum, object> __this;
			CLPropertyBinding<CustomLogicForceModeEnum> __this_00;

			__this = new Func<CustomLogicForceModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Force_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicForceModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002908")]
		[Address(RVA = "0x5964FA0", Offset = "0x5963FA0", VA = "0x5964FA0")]
		public static CLPropertyBinding<CustomLogicForceModeEnum> __CreatePropertyBinding__Acceleration()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Acceleration): 2 lines keep C-only constructs
			Func<CustomLogicForceModeEnum, object> __this;
			CLPropertyBinding<CustomLogicForceModeEnum> __this_00;

			__this = new Func<CustomLogicForceModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Acceleration_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicForceModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002909")]
		[Address(RVA = "0x5965040", Offset = "0x5964040", VA = "0x5965040")]
		public static CLPropertyBinding<CustomLogicForceModeEnum> __CreatePropertyBinding__Impulse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Impulse): 2 lines keep C-only constructs
			Func<CustomLogicForceModeEnum, object> __this;
			CLPropertyBinding<CustomLogicForceModeEnum> __this_00;

			__this = new Func<CustomLogicForceModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Impulse_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicForceModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600290A")]
		[Address(RVA = "0x59650E0", Offset = "0x59640E0", VA = "0x59650E0")]
		public static CLPropertyBinding<CustomLogicForceModeEnum> __CreatePropertyBinding__VelocityChange()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__VelocityChange): 2 lines keep C-only constructs
			Func<CustomLogicForceModeEnum, object> __this;
			CLPropertyBinding<CustomLogicForceModeEnum> __this_00;

			__this = new Func<CustomLogicForceModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__VelocityChange_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicForceModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170005AC")]
	public static int Force
	{
		[Token(Token = "0x60028FD")]
		[Address(RVA = "0x5964B60", Offset = "0x5963B60", VA = "0x5964B60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$get_Force): clean
			return 0;
		}
	}

	[Token(Token = "0x170005AD")]
	public static int Acceleration
	{
		[Token(Token = "0x60028FE")]
		[Address(RVA = "0x5964B70", Offset = "0x5963B70", VA = "0x5964B70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$get_Acceleration): clean
			return 5;
		}
	}

	[Token(Token = "0x170005AE")]
	public static int Impulse
	{
		[Token(Token = "0x60028FF")]
		[Address(RVA = "0x5964B80", Offset = "0x5963B80", VA = "0x5964B80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$get_Impulse): clean
			return 1;
		}
	}

	[Token(Token = "0x170005AF")]
	public static int VelocityChange
	{
		[Token(Token = "0x6002900")]
		[Address(RVA = "0x5964B90", Offset = "0x5963B90", VA = "0x5964B90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$get_VelocityChange): clean
			return 2;
		}
	}

	[Token(Token = "0x170005B0")]
	public override string ClassName
	{
		[Token(Token = "0x6002901")]
		[Address(RVA = "0x5964BA0", Offset = "0x5963BA0", VA = "0x5964BA0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$get_ClassName): clean
			return "ForceModeEnum";
		}
	}

	[Token(Token = "0x170005B1")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002902")]
		[Address(RVA = "0x5964BD0", Offset = "0x5963BD0", VA = "0x5964BD0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170005B2")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002903")]
		[Address(RVA = "0x5964BE0", Offset = "0x5963BE0", VA = "0x5964BE0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170005B3")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002904")]
		[Address(RVA = "0x5964BF0", Offset = "0x5963BF0", VA = "0x5964BF0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60028FC")]
	[Address(RVA = "0x5964AF0", Offset = "0x5963AF0", VA = "0x5964AF0")]
	public CustomLogicForceModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c (CustomLogic.CustomLogicForceModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075463b5 == false) {
			Il2CppMethodInitialized_075463b5 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicForceModeEnum.c.

	// CustomLogic.CustomLogicForceModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Force");
		__this.Add((Il2CppObject *)"Acceleration");
		__this.Add((Il2CppObject *)"Impulse");
		__this.Add((Il2CppObject *)"VelocityChange");
		CustomLogicForceModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Force>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Force_g____getter_2_0(CustomLogicForceModeEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Acceleration_g____getter_3_0(CustomLogicForceModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Impulse_g____getter_4_0(CustomLogicForceModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__VelocityChange>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__VelocityChange_g____getter_5_0(CustomLogicForceModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
