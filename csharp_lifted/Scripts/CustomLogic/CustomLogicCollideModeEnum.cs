// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollideModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollideModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004F6")]
[CompilerGenerated]
internal class CustomLogicCollideModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004F7")]
	public static class Factory
	{
		[Token(Token = "0x60027D5")]
		[Address(RVA = "0x595AA60", Offset = "0x5959A60", VA = "0x595AA60")]
		public static CustomLogicCollideModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollideModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicCollideModeEnum();
			return (CustomLogicCollideModeEnum)__this;
		}
	}

	[Token(Token = "0x20004F8")]
	public static class Bindings
	{
		[Token(Token = "0x40017C3")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60027D6")]
		[Address(RVA = "0x595AB80", Offset = "0x5959B80", VA = "0x595AB80")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicCollideModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Region");
			if (bVar1) {
				if ((typeof(CustomLogicCollideModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCollideModeEnum.Bindings.__CreatePropertyBinding__Region();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCollideModeEnum.Bindings.__CreatePropertyBinding__Region();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Physical");
			if (bVar1) {
				if ((typeof(CustomLogicCollideModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCollideModeEnum.Bindings.__CreatePropertyBinding__Physical();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCollideModeEnum.Bindings.__CreatePropertyBinding__Physical();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "None");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollideModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicCollideModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCollideModeEnum.Bindings)) ;
				pCVar2 = CustomLogicCollideModeEnum.Bindings.__CreatePropertyBinding__None();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicCollideModeEnum.Bindings.__CreatePropertyBinding__None();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60027D7")]
		[Address(RVA = "0x595AD10", Offset = "0x5959D10", VA = "0x595AD10")]
		public static CLPropertyBinding<CustomLogicCollideModeEnum> __CreatePropertyBinding__Region()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Region): 2 lines keep C-only constructs
			Func<CustomLogicCollideModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideModeEnum> __this_00;

			__this = new Func<CustomLogicCollideModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Region_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicCollideModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027D8")]
		[Address(RVA = "0x595ADB0", Offset = "0x5959DB0", VA = "0x595ADB0")]
		public static CLPropertyBinding<CustomLogicCollideModeEnum> __CreatePropertyBinding__Physical()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Physical): 2 lines keep C-only constructs
			Func<CustomLogicCollideModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideModeEnum> __this_00;

			__this = new Func<CustomLogicCollideModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Physical_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicCollideModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027D9")]
		[Address(RVA = "0x595AE50", Offset = "0x5959E50", VA = "0x595AE50")]
		public static CLPropertyBinding<CustomLogicCollideModeEnum> __CreatePropertyBinding__None()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__None): 2 lines keep C-only constructs
			Func<CustomLogicCollideModeEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideModeEnum> __this_00;

			__this = new Func<CustomLogicCollideModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__None_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicCollideModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700053B")]
	public static string Region
	{
		[Token(Token = "0x60027CE")]
		[Address(RVA = "0x595A8B0", Offset = "0x59598B0", VA = "0x595A8B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum$$get_Region): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462fd == false) {
				Il2CppMethodInitialized_075462fd = true;
				uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideMode.Region;
			}
			return *(String*)((long)(typeof(MapObjectCollideMode)).static_fields + 8);
		}
	}

	[Token(Token = "0x1700053C")]
	public static string Physical
	{
		[Token(Token = "0x60027CF")]
		[Address(RVA = "0x595A920", Offset = "0x5959920", VA = "0x595A920")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum$$get_Physical): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462fe == false) {
				Il2CppMethodInitialized_075462fe = true;
				uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideMode.Physical;
			}
			return *(String*)(typeof(MapObjectCollideMode)).static_fields;
		}
	}

	[Token(Token = "0x1700053D")]
	public static string None
	{
		[Token(Token = "0x60027D0")]
		[Address(RVA = "0x595A990", Offset = "0x5959990", VA = "0x595A990")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum$$get_None): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462ff == false) {
				Il2CppMethodInitialized_075462ff = true;
				uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideMode.None;
			}
			return *(String*)((long)(typeof(MapObjectCollideMode)).static_fields + 0x10) ;
		}
	}

	[Token(Token = "0x1700053E")]
	public override string ClassName
	{
		[Token(Token = "0x60027D1")]
		[Address(RVA = "0x595AA00", Offset = "0x5959A00", VA = "0x595AA00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum$$get_ClassName): clean
			return "CollideModeEnum";
		}
	}

	[Token(Token = "0x1700053F")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60027D2")]
		[Address(RVA = "0x595AA30", Offset = "0x5959A30", VA = "0x595AA30", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000540")]
	public override bool IsStatic
	{
		[Token(Token = "0x60027D3")]
		[Address(RVA = "0x595AA40", Offset = "0x5959A40", VA = "0x595AA40", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000541")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60027D4")]
		[Address(RVA = "0x595AA50", Offset = "0x5959A50", VA = "0x595AA50", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60027CD")]
	[Address(RVA = "0x595A840", Offset = "0x5959840", VA = "0x595A840")]
	public CustomLogicCollideModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c (CustomLogic.CustomLogicCollideModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075462fc == false) {
			Il2CppMethodInitialized_075462fc = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCollideModeEnum.c.

	// CustomLogic.CustomLogicCollideModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Region");
		__this.Add((Il2CppObject *)"Physical");
		__this.Add((Il2CppObject *)"None");
		CustomLogicCollideModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Region>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Region_g____getter_2_0(CustomLogicCollideModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754657d == false) {
			Il2CppMethodInitialized_0754657d = true;
			uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideMode.Region;
		}
		return *(object*)((long)(typeof(MapObjectCollideMode)).static_fields + 8);
	}

	// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Physical>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Physical_g____getter_3_0(CustomLogicCollideModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754657e == false) {
			Il2CppMethodInitialized_0754657e = true;
			uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideMode.Physical;
		}
		return *(object*)(typeof(MapObjectCollideMode)).static_fields;
	}

	// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__None_g____getter_4_0(CustomLogicCollideModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754657f == false) {
			Il2CppMethodInitialized_0754657f = true;
			uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideMode.None;
		}
		return *(object*)((long)(typeof(MapObjectCollideMode)).static_fields + 0x10);
	}
}
