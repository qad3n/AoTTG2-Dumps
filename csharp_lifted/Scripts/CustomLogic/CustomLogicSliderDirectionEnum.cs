// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSliderDirectionEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200056F")]
[CompilerGenerated]
internal class CustomLogicSliderDirectionEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000570")]
	public static class Factory
	{
		[Token(Token = "0x600304C")]
		[Address(RVA = "0x59AA610", Offset = "0x59A9610", VA = "0x59AA610")]
		public static CustomLogicSliderDirectionEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSliderDirectionEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicSliderDirectionEnum();
			return (CustomLogicSliderDirectionEnum)__this;
		}
	}

	[Token(Token = "0x2000571")]
	public static class Bindings
	{
		[Token(Token = "0x4001882")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600304D")]
		[Address(RVA = "0x59AA730", Offset = "0x59A9730", VA = "0x59AA730")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicSliderDirectionEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Horizontal");
			if (bVar1) {
				if ((typeof(CustomLogicSliderDirectionEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicSliderDirectionEnum.Bindings.__CreatePropertyBinding__Horizontal();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicSliderDirectionEnum.Bindings.__CreatePropertyBinding__Horizontal();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Vertical");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSliderDirectionEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicSliderDirectionEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicSliderDirectionEnum.Bindings.__CreatePropertyBinding__Vertical();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicSliderDirectionEnum.Bindings.__CreatePropertyBinding__Vertical();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x600304E")]
		[Address(RVA = "0x59AA870", Offset = "0x59A9870", VA = "0x59AA870")]
		public static CLPropertyBinding<CustomLogicSliderDirectionEnum> __CreatePropertyBinding__Horizontal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$__CreatePropertyBinding__Horizontal): 3 lines keep C-only constructs
			Func<CustomLogicSliderDirectionEnum, object> __this;
			CLPropertyBinding<CustomLogicSliderDirectionEnum> __this_00;

			__this = new Func<CustomLogicSliderDirectionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Horizontal_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicSliderDirectionEnum>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600304F")]
		[Address(RVA = "0x59AA910", Offset = "0x59A9910", VA = "0x59AA910")]
		public static CLPropertyBinding<CustomLogicSliderDirectionEnum> __CreatePropertyBinding__Vertical()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$__CreatePropertyBinding__Vertical): 3 lines keep C-only constructs
			Func<CustomLogicSliderDirectionEnum, object> __this;
			CLPropertyBinding<CustomLogicSliderDirectionEnum> __this_00;

			__this = new Func<CustomLogicSliderDirectionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Vertical_g____gette);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicSliderDirectionEnum>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000840")]
	public static int Horizontal
	{
		[Token(Token = "0x6003046")]
		[Address(RVA = "0x59AA590", Offset = "0x59A9590", VA = "0x59AA590")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum$$get_Horizontal): clean
			return 0;
		}
	}

	[Token(Token = "0x17000841")]
	public static int Vertical
	{
		[Token(Token = "0x6003047")]
		[Address(RVA = "0x59AA5A0", Offset = "0x59A95A0", VA = "0x59AA5A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum$$get_Vertical): clean
			return 1;
		}
	}

	[Token(Token = "0x17000842")]
	public override string ClassName
	{
		[Token(Token = "0x6003048")]
		[Address(RVA = "0x59AA5B0", Offset = "0x59A95B0", VA = "0x59AA5B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum$$get_ClassName): clean
			return "SliderDirectionEnum";
		}
	}

	[Token(Token = "0x17000843")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003049")]
		[Address(RVA = "0x59AA5E0", Offset = "0x59A95E0", VA = "0x59AA5E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000844")]
	public override bool IsStatic
	{
		[Token(Token = "0x600304A")]
		[Address(RVA = "0x59AA5F0", Offset = "0x59A95F0", VA = "0x59AA5F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000845")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600304B")]
		[Address(RVA = "0x59AA600", Offset = "0x59A9600", VA = "0x59AA600", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003045")]
	[Address(RVA = "0x59AA520", Offset = "0x59A9520", VA = "0x59AA520")]
	public CustomLogicSliderDirectionEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c (CustomLogic.CustomLogicSliderDirectionEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a57 == false) {
			Il2CppMethodInitialized_07546a57 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicSliderDirectionEnum.c.

	// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Horizontal");
		__this.Add((Il2CppObject *)"Vertical");
		CustomLogicSliderDirectionEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$<__CreatePropertyBinding__Horizontal>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Horizontal_g____getter_2_0(CustomLogicSliderDirectionEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$<__CreatePropertyBinding__Vertical>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Vertical_g____getter_3_0(CustomLogicSliderDirectionEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
