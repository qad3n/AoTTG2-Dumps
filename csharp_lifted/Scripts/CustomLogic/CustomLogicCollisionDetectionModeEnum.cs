// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollisionDetectionModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004FC")]
[CompilerGenerated]
internal class CustomLogicCollisionDetectionModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004FD")]
	public static class Factory
	{
		[Token(Token = "0x600280A")]
		[Address(RVA = "0x595C810", Offset = "0x595B810", VA = "0x595C810")]
		public static CustomLogicCollisionDetectionModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollisionDetectionModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicCollisionDetectionModeEnum();
			return (CustomLogicCollisionDetectionModeEnum)__this;
		}
	}

	[Token(Token = "0x20004FE")]
	public static class Bindings
	{
		[Token(Token = "0x40017C5")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600280B")]
		[Address(RVA = "0x595C930", Offset = "0x595B930", VA = "0x595C930")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Discrete");
			if (bVar1) {
				if ((typeof(CustomLogicCollisionDetectionModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCollisionDetectionModeEnum.Bindings.__CreatePropertyBinding__Discrete();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCollisionDetectionModeEnum.Bindings.__CreatePropertyBinding__Discrete();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Continuous");
			if (bVar1) {
				if ((typeof(CustomLogicCollisionDetectionModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCollisionDetectionModeEnum.Bindings.__CreatePropertyBinding__Continuous();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCollisionDetectionModeEnum.Bindings.__CreatePropertyBinding__Continuous();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ContinuousDynamic");
			if (bVar1) {
				if ((typeof(CustomLogicCollisionDetectionModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCollisionDetectionModeEnum.Bindings.__CreatePropertyBinding__ContinuousDynamic();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCollisionDetectionModeEnum.Bindings.__CreatePropertyBinding__ContinuousDynamic();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ContinuousSpeculative");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollisionDetectionModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicCollisionDetectionModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicCollisionDetectionModeEnum.Bindings.__CreatePropertyBinding__ContinuousSpeculative();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicCollisionDetectionModeEnum.Bindings.__CreatePropertyBinding__ContinuousSpeculative();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x600280C")]
		[Address(RVA = "0x595CB10", Offset = "0x595BB10", VA = "0x595CB10")]
		public static CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> __CreatePropertyBinding__Discrete()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Discrete): 3 lines keep C-only constructs
			Func<CustomLogicCollisionDetectionModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> __this_00;

			__this = new Func<CustomLogicCollisionDetectionModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Discrete_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicCollisionDetectionModeEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600280D")]
		[Address(RVA = "0x595CBB0", Offset = "0x595BBB0", VA = "0x595CBB0")]
		public static CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> __CreatePropertyBinding__Continuous()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Continuous): 3 lines keep C-only constructs
			Func<CustomLogicCollisionDetectionModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> __this_00;

			__this = new Func<CustomLogicCollisionDetectionModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Continuous_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicCollisionDetectionModeEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600280E")]
		[Address(RVA = "0x595CC50", Offset = "0x595BC50", VA = "0x595CC50")]
		public static CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> __CreatePropertyBinding__ContinuousDynamic()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousDynamic): 3 lines keep C-only constructs
			Func<CustomLogicCollisionDetectionModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> __this_00;

			__this = new Func<CustomLogicCollisionDetectionModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousDy);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicCollisionDetectionModeEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600280F")]
		[Address(RVA = "0x595CCF0", Offset = "0x595BCF0", VA = "0x595CCF0")]
		public static CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> __CreatePropertyBinding__ContinuousSpeculative()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousSpeculative): 3 lines keep C-only constructs
			Func<CustomLogicCollisionDetectionModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCollisionDetectionModeEnum> __this_00;

			__this = new Func<CustomLogicCollisionDetectionModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousSp);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicCollisionDetectionModeEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700054F")]
	public static int Discrete
	{
		[Token(Token = "0x6002802")]
		[Address(RVA = "0x595C770", Offset = "0x595B770", VA = "0x595C770")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Discrete): clean
			return 0;
		}
	}

	[Token(Token = "0x17000550")]
	public static int Continuous
	{
		[Token(Token = "0x6002803")]
		[Address(RVA = "0x595C780", Offset = "0x595B780", VA = "0x595C780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Continuous): clean
			return 1;
		}
	}

	[Token(Token = "0x17000551")]
	public static int ContinuousDynamic
	{
		[Token(Token = "0x6002804")]
		[Address(RVA = "0x595C790", Offset = "0x595B790", VA = "0x595C790")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousDynamic): clean
			return 2;
		}
	}

	[Token(Token = "0x17000552")]
	public static int ContinuousSpeculative
	{
		[Token(Token = "0x6002805")]
		[Address(RVA = "0x595C7A0", Offset = "0x595B7A0", VA = "0x595C7A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousSpeculative): clean
			return 3;
		}
	}

	[Token(Token = "0x17000553")]
	public override string ClassName
	{
		[Token(Token = "0x6002806")]
		[Address(RVA = "0x595C7B0", Offset = "0x595B7B0", VA = "0x595C7B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ClassName): clean
			return "CollisionDetectionModeEnum";
		}
	}

	[Token(Token = "0x17000554")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002807")]
		[Address(RVA = "0x595C7E0", Offset = "0x595B7E0", VA = "0x595C7E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000555")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002808")]
		[Address(RVA = "0x595C7F0", Offset = "0x595B7F0", VA = "0x595C7F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000556")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002809")]
		[Address(RVA = "0x595C800", Offset = "0x595B800", VA = "0x595C800", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002801")]
	[Address(RVA = "0x595C700", Offset = "0x595B700", VA = "0x595C700")]
	public CustomLogicCollisionDetectionModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c (CustomLogic.CustomLogicCollisionDetectionModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754631e == false) {
			Il2CppMethodInitialized_0754631e = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCollisionDetectionModeEnum.c.

	// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Discrete");
		__this.Add((Il2CppObject *)"Continuous");
		__this.Add((Il2CppObject *)"ContinuousDynamic");
		__this.Add((Il2CppObject *)"ContinuousSpeculative");
		CustomLogicCollisionDetectionModeEnum.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicCollisionDetectionModeEnum.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Discrete>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Discrete_g____getter_2_0(CustomLogicCollisionDetectionModeEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Continuous>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Continuous_g____getter_3_0(CustomLogicCollisionDetectionModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousDynamic>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__ContinuousDynamic_g____getter_4_0(CustomLogicCollisionDetectionModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousSpeculative>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__ContinuousSpeculative_g____getter_5_0(CustomLogicCollisionDetectionModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
