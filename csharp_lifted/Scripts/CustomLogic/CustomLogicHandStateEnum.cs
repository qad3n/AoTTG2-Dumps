// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHandStateEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHandStateEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000518")]
[CompilerGenerated]
internal class CustomLogicHandStateEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000519")]
	public static class Factory
	{
		[Token(Token = "0x6002927")]
		[Address(RVA = "0x5965A00", Offset = "0x5964A00", VA = "0x5965A00")]
		public static CustomLogicHandStateEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHandStateEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHandStateEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicHandStateEnum();
			return (CustomLogicHandStateEnum)__this;
		}
	}

	[Token(Token = "0x200051A")]
	public static class Bindings
	{
		[Token(Token = "0x40017D1")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002928")]
		[Address(RVA = "0x5965B20", Offset = "0x5964B20", VA = "0x5965B20")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicHandStateEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Healthy");
			if (bVar1) {
				if ((typeof(CustomLogicHandStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicHandStateEnum.Bindings)) ;
					pCVar2 = CustomLogicHandStateEnum.Bindings.__CreatePropertyBinding__Healthy();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicHandStateEnum.Bindings.__CreatePropertyBinding__Healthy();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Damaged");
			if (bVar1) {
				if ((typeof(CustomLogicHandStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicHandStateEnum.Bindings)) ;
					pCVar2 = CustomLogicHandStateEnum.Bindings.__CreatePropertyBinding__Damaged();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicHandStateEnum.Bindings.__CreatePropertyBinding__Damaged();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Severed");
			if (bVar1) {
				if ((typeof(CustomLogicHandStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicHandStateEnum.Bindings)) ;
					pCVar2 = CustomLogicHandStateEnum.Bindings.__CreatePropertyBinding__Severed();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicHandStateEnum.Bindings.__CreatePropertyBinding__Severed();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Recovering");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHandStateEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicHandStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicHandStateEnum.Bindings.__CreatePropertyBinding__Recovering();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicHandStateEnum.Bindings.__CreatePropertyBinding__Recovering();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002929")]
		[Address(RVA = "0x5965D00", Offset = "0x5964D00", VA = "0x5965D00")]
		public static CLPropertyBinding<CustomLogicHandStateEnum> __CreatePropertyBinding__Healthy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Healthy): 2 lines keep C-only constructs
			Func<CustomLogicHandStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHandStateEnum> __this_00;

			__this = new Func<CustomLogicHandStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Healthy_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicHandStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600292A")]
		[Address(RVA = "0x5965DA0", Offset = "0x5964DA0", VA = "0x5965DA0")]
		public static CLPropertyBinding<CustomLogicHandStateEnum> __CreatePropertyBinding__Damaged()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Damaged): 2 lines keep C-only constructs
			Func<CustomLogicHandStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHandStateEnum> __this_00;

			__this = new Func<CustomLogicHandStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Damaged_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicHandStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600292B")]
		[Address(RVA = "0x5965E40", Offset = "0x5964E40", VA = "0x5965E40")]
		public static CLPropertyBinding<CustomLogicHandStateEnum> __CreatePropertyBinding__Severed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Severed): 2 lines keep C-only constructs
			Func<CustomLogicHandStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHandStateEnum> __this_00;

			__this = new Func<CustomLogicHandStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Severed_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicHandStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600292C")]
		[Address(RVA = "0x5965EE0", Offset = "0x5964EE0", VA = "0x5965EE0")]
		public static CLPropertyBinding<CustomLogicHandStateEnum> __CreatePropertyBinding__Recovering()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Recovering): 2 lines keep C-only constructs
			Func<CustomLogicHandStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHandStateEnum> __this_00;

			__this = new Func<CustomLogicHandStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicHandStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170005BA")]
	public static int Healthy
	{
		[Token(Token = "0x600291F")]
		[Address(RVA = "0x5965960", Offset = "0x5964960", VA = "0x5965960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$get_Healthy): clean
			return 0;
		}
	}

	[Token(Token = "0x170005BB")]
	public static int Damaged
	{
		[Token(Token = "0x6002920")]
		[Address(RVA = "0x5965970", Offset = "0x5964970", VA = "0x5965970")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$get_Damaged): clean
			return 1;
		}
	}

	[Token(Token = "0x170005BC")]
	public static int Severed
	{
		[Token(Token = "0x6002921")]
		[Address(RVA = "0x5965980", Offset = "0x5964980", VA = "0x5965980")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$get_Severed): clean
			return 2;
		}
	}

	[Token(Token = "0x170005BD")]
	public static int Recovering
	{
		[Token(Token = "0x6002922")]
		[Address(RVA = "0x5965990", Offset = "0x5964990", VA = "0x5965990")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$get_Recovering): clean
			return 3;
		}
	}

	[Token(Token = "0x170005BE")]
	public override string ClassName
	{
		[Token(Token = "0x6002923")]
		[Address(RVA = "0x59659A0", Offset = "0x59649A0", VA = "0x59659A0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$get_ClassName): clean
			return "HandStateEnum";
		}
	}

	[Token(Token = "0x170005BF")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002924")]
		[Address(RVA = "0x59659D0", Offset = "0x59649D0", VA = "0x59659D0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170005C0")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002925")]
		[Address(RVA = "0x59659E0", Offset = "0x59649E0", VA = "0x59659E0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170005C1")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002926")]
		[Address(RVA = "0x59659F0", Offset = "0x59649F0", VA = "0x59659F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600291E")]
	[Address(RVA = "0x59658F0", Offset = "0x59648F0", VA = "0x59658F0")]
	public CustomLogicHandStateEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c (CustomLogic.CustomLogicHandStateEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075463c5 == false) {
			Il2CppMethodInitialized_075463c5 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicHandStateEnum.c.

	// CustomLogic.CustomLogicHandStateEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Healthy");
		__this.Add((Il2CppObject *)"Damaged");
		__this.Add((Il2CppObject *)"Severed");
		__this.Add((Il2CppObject *)"Recovering");
		CustomLogicHandStateEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Healthy>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Healthy_g____getter_2_0(CustomLogicHandStateEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Damaged>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Damaged_g____getter_3_0(CustomLogicHandStateEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Severed>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Severed_g____getter_4_0(CustomLogicHandStateEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Recovering_g____getter_5_0(CustomLogicHandStateEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
