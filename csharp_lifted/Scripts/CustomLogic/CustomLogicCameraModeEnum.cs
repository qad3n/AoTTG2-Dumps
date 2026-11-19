// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCameraModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCameraModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004F0")]
[CompilerGenerated]
internal class CustomLogicCameraModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004F1")]
	public static class Factory
	{
		[Token(Token = "0x60027B1")]
		[Address(RVA = "0x59595C0", Offset = "0x59585C0", VA = "0x59595C0")]
		public static CustomLogicCameraModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicCameraModeEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCameraModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicCameraModeEnum();
			return __this;
		}
	}

	[Token(Token = "0x20004F2")]
	public static class Bindings
	{
		[Token(Token = "0x40017C1")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60027B2")]
		[Address(RVA = "0x59596E0", Offset = "0x59586E0", VA = "0x59596E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicCameraModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "TPS");
			if (bVar1) {
				if ((typeof(CustomLogicCameraModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCameraModeEnum.Bindings.__CreatePropertyBinding__TPS();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCameraModeEnum.Bindings.__CreatePropertyBinding__TPS();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Original");
			if (bVar1) {
				if ((typeof(CustomLogicCameraModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCameraModeEnum.Bindings.__CreatePropertyBinding__Original();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCameraModeEnum.Bindings.__CreatePropertyBinding__Original();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "FPS");
			if (bVar1) {
				if ((typeof(CustomLogicCameraModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCameraModeEnum.Bindings.__CreatePropertyBinding__FPS();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCameraModeEnum.Bindings.__CreatePropertyBinding__FPS();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "WOW");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCameraModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicCameraModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicCameraModeEnum.Bindings.__CreatePropertyBinding__WOW();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicCameraModeEnum.Bindings.__CreatePropertyBinding__WOW();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60027B3")]
		[Address(RVA = "0x59598C0", Offset = "0x59588C0", VA = "0x59598C0")]
		public static CLPropertyBinding<CustomLogicCameraModeEnum> __CreatePropertyBinding__TPS()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__TPS): 2 lines keep C-only constructs
			Func<CustomLogicCameraModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCameraModeEnum> __this_00;

			__this = new Func<CustomLogicCameraModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__TPS_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027B4")]
		[Address(RVA = "0x5959960", Offset = "0x5958960", VA = "0x5959960")]
		public static CLPropertyBinding<CustomLogicCameraModeEnum> __CreatePropertyBinding__Original()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__Original): 2 lines keep C-only constructs
			Func<CustomLogicCameraModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCameraModeEnum> __this_00;

			__this = new Func<CustomLogicCameraModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__Original_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027B5")]
		[Address(RVA = "0x5959A00", Offset = "0x5958A00", VA = "0x5959A00")]
		public static CLPropertyBinding<CustomLogicCameraModeEnum> __CreatePropertyBinding__FPS()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__FPS): 2 lines keep C-only constructs
			Func<CustomLogicCameraModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCameraModeEnum> __this_00;

			__this = new Func<CustomLogicCameraModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__FPS_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027B6")]
		[Address(RVA = "0x5959AA0", Offset = "0x5958AA0", VA = "0x5959AA0")]
		public static CLPropertyBinding<CustomLogicCameraModeEnum> __CreatePropertyBinding__WOW()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__WOW): 2 lines keep C-only constructs
			Func<CustomLogicCameraModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCameraModeEnum> __this_00;

			__this = new Func<CustomLogicCameraModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__WOW_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x40017BD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string _tps;

	[Token(Token = "0x40017BE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string _original;

	[Token(Token = "0x40017BF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string _fps;

	[Token(Token = "0x40017C0")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string _wow;

	[Token(Token = "0x1700052C")]
	public static string TPS
	{
		[Token(Token = "0x60027A8")]
		[Address(RVA = "0x5959250", Offset = "0x5958250", VA = "0x5959250")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$get_TPS): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462e0 == false) {
				Il2CppMethodInitialized_075462e0 = true;
				uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicCameraModeEnum._tps;
			}
			return *(String*)(typeof(CustomLogicCameraModeEnum)).static_fields;
		}
	}

	[Token(Token = "0x1700052D")]
	public static string Original
	{
		[Token(Token = "0x60027A9")]
		[Address(RVA = "0x59592C0", Offset = "0x59582C0", VA = "0x59592C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$get_Original): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462e1 == false) {
				Il2CppMethodInitialized_075462e1 = true;
				uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicCameraModeEnum._original;
			}
			return *(String*)((long)(typeof(CustomLogicCameraModeEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x1700052E")]
	public static string FPS
	{
		[Token(Token = "0x60027AA")]
		[Address(RVA = "0x5959330", Offset = "0x5958330", VA = "0x5959330")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$get_FPS): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462e2 == false) {
				Il2CppMethodInitialized_075462e2 = true;
				uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicCameraModeEnum._fps;
			}
			return *(String*)((long)(typeof(CustomLogicCameraModeEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x1700052F")]
	public static string WOW
	{
		[Token(Token = "0x60027AB")]
		[Address(RVA = "0x59593A0", Offset = "0x59583A0", VA = "0x59593A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$get_WOW): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462e3 == false) {
				Il2CppMethodInitialized_075462e3 = true;
				uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicCameraModeEnum._wow;
			}
			return *(String*)((long)(typeof(CustomLogicCameraModeEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x17000530")]
	public override string ClassName
	{
		[Token(Token = "0x60027AC")]
		[Address(RVA = "0x5959410", Offset = "0x5958410", VA = "0x5959410", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$get_ClassName): clean
			return "CameraModeEnum";
		}
	}

	[Token(Token = "0x17000531")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60027AD")]
		[Address(RVA = "0x5959440", Offset = "0x5958440", VA = "0x5959440", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000532")]
	public override bool IsStatic
	{
		[Token(Token = "0x60027AE")]
		[Address(RVA = "0x5959450", Offset = "0x5958450", VA = "0x5959450", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000533")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60027AF")]
		[Address(RVA = "0x5959460", Offset = "0x5958460", VA = "0x5959460", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60027A7")]
	[Address(RVA = "0x59591E0", Offset = "0x59581E0", VA = "0x59591E0")]
	public CustomLogicCameraModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c (CustomLogic.CustomLogicCameraModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075462df == false) {
			Il2CppMethodInitialized_075462df = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCameraModeEnum.c.

	// CustomLogic.CustomLogicCameraModeEnum$$.cctor: 4 lines keep C-only constructs
	static CustomLogicCameraModeEnum()
	{
		CustomLogic_CustomLogicCameraModeEnum_StaticFields pCVar1;
		String pSVar2;
		Enum SStack_70;
		Enum SStack_58;
		Enum SStack_40;
		Enum SStack_28;

		SStack_28.klass = (Enum)typeof(CameraInputMode);
		SStack_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_28.ToString();
		CustomLogicCameraModeEnum._tps = pSVar2;
		SStack_40.klass = (Enum)typeof(CameraInputMode);
		SStack_40.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_40.ToString();
		pCVar1 = typeof(CustomLogicCameraModeEnum).static_fields;
		pCVar1._original = pSVar2;
		SStack_58.klass = (Enum)typeof(CameraInputMode);
		SStack_58.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_58.ToString();
		pCVar1 = typeof(CustomLogicCameraModeEnum).static_fields;
		pCVar1._fps = pSVar2;
		SStack_70.klass = (Enum)typeof(CameraInputMode);
		SStack_70.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_70.ToString();
		pCVar1 = typeof(CustomLogicCameraModeEnum).static_fields;
		pCVar1._wow = pSVar2;
		return;
	}

	// CustomLogic.CustomLogicCameraModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"TPS");
		__this.Add((Il2CppObject *)"Original");
		__this.Add((Il2CppObject *)"FPS");
		__this.Add((Il2CppObject *)"WOW");
		CustomLogicCameraModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__TPS>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__TPS_g____getter_2_0(CustomLogicCameraModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075462ed == false) {
			Il2CppMethodInitialized_075462ed = true;
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546576 == false) {
			Il2CppMethodInitialized_07546576 = true;
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicCameraModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicCameraModeEnum._tps;
		}
		return *(object*)(typeof(CustomLogicCameraModeEnum)).static_fields;
	}

	// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__Original>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Original_g____getter_3_0(CustomLogicCameraModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075462ee == false) {
			Il2CppMethodInitialized_075462ee = true;
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546577 == false) {
			Il2CppMethodInitialized_07546577 = true;
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicCameraModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicCameraModeEnum._original;
		}
		return *(object*)((long)(typeof(CustomLogicCameraModeEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__FPS>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__FPS_g____getter_4_0(CustomLogicCameraModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075462ef == false) {
			Il2CppMethodInitialized_075462ef = true;
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546578 == false) {
			Il2CppMethodInitialized_07546578 = true;
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicCameraModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicCameraModeEnum._fps;
		}
		return *(object*)((long)(typeof(CustomLogicCameraModeEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__WOW>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__WOW_g____getter_5_0(CustomLogicCameraModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075462f0 == false) {
			Il2CppMethodInitialized_075462f0 = true;
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546579 == false) {
			Il2CppMethodInitialized_07546579 = true;
			uVar1 = (typeof(CustomLogicCameraModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicCameraModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicCameraModeEnum._wow;
		}
		return *(object*)((long)(typeof(CustomLogicCameraModeEnum)).static_fields + 0x18);
	}
}
