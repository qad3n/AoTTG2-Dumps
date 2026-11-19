// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTSKillSoundEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200057B")]
[CompilerGenerated]
internal class CustomLogicTSKillSoundEnum : BuiltinClassInstance
{
	[Token(Token = "0x200057C")]
	public static class Factory
	{
		[Token(Token = "0x60030C8")]
		[Address(RVA = "0x59AE090", Offset = "0x59AD090", VA = "0x59AE090")]
		public static CustomLogicTSKillSoundEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicTSKillSoundEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTSKillSoundEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTSKillSoundEnum();
			return __this;
		}
	}

	[Token(Token = "0x200057D")]
	public static class Bindings
	{
		[Token(Token = "0x400188C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60030C9")]
		[Address(RVA = "0x59AE1B0", Offset = "0x59AD1B0", VA = "0x59AE1B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicTSKillSoundEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Kill");
			if (bVar1) {
				if ((typeof(CustomLogicTSKillSoundEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__Kill();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__Kill();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Air");
			if (bVar1) {
				if ((typeof(CustomLogicTSKillSoundEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__Air();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__Air();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Ground");
			if (bVar1) {
				if ((typeof(CustomLogicTSKillSoundEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__Ground();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__Ground();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ArmorHit");
			if (bVar1) {
				pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__ArmorHit();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "CloseShot");
			if (bVar1) {
				pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__CloseShot();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "MaxRangeShot");
			if (bVar1) {
				pCVar2 = CustomLogicTSKillSoundEnum.Bindings.__CreatePropertyBinding__MaxRangeShot();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTSKillSoundEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60030CA")]
		[Address(RVA = "0x59AE420", Offset = "0x59AD420", VA = "0x59AE420")]
		public static CLPropertyBinding<CustomLogicTSKillSoundEnum> __CreatePropertyBinding__Kill()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Kill): 2 lines keep C-only constructs
			Func<CustomLogicTSKillSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTSKillSoundEnum> __this_00;

			__this = new Func<CustomLogicTSKillSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Kill_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicTSKillSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030CB")]
		[Address(RVA = "0x59AE4C0", Offset = "0x59AD4C0", VA = "0x59AE4C0")]
		public static CLPropertyBinding<CustomLogicTSKillSoundEnum> __CreatePropertyBinding__Air()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Air): 2 lines keep C-only constructs
			Func<CustomLogicTSKillSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTSKillSoundEnum> __this_00;

			__this = new Func<CustomLogicTSKillSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Air_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicTSKillSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030CC")]
		[Address(RVA = "0x59AE560", Offset = "0x59AD560", VA = "0x59AE560")]
		public static CLPropertyBinding<CustomLogicTSKillSoundEnum> __CreatePropertyBinding__Ground()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Ground): 2 lines keep C-only constructs
			Func<CustomLogicTSKillSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTSKillSoundEnum> __this_00;

			__this = new Func<CustomLogicTSKillSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Ground_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicTSKillSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030CD")]
		[Address(RVA = "0x59AE600", Offset = "0x59AD600", VA = "0x59AE600")]
		public static CLPropertyBinding<CustomLogicTSKillSoundEnum> __CreatePropertyBinding__ArmorHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__ArmorHit): 2 lines keep C-only constructs
			Func<CustomLogicTSKillSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTSKillSoundEnum> __this_00;

			__this = new Func<CustomLogicTSKillSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__ArmorHit_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicTSKillSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030CE")]
		[Address(RVA = "0x59AE6A0", Offset = "0x59AD6A0", VA = "0x59AE6A0")]
		public static CLPropertyBinding<CustomLogicTSKillSoundEnum> __CreatePropertyBinding__CloseShot()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__CloseShot): 2 lines keep C-only constructs
			Func<CustomLogicTSKillSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTSKillSoundEnum> __this_00;

			__this = new Func<CustomLogicTSKillSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__CloseShot_g____getter_6);
			__this_00 = new CLPropertyBinding<CustomLogicTSKillSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030CF")]
		[Address(RVA = "0x59AE740", Offset = "0x59AD740", VA = "0x59AE740")]
		public static CLPropertyBinding<CustomLogicTSKillSoundEnum> __CreatePropertyBinding__MaxRangeShot()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__MaxRangeShot): 2 lines keep C-only constructs
			Func<CustomLogicTSKillSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTSKillSoundEnum> __this_00;

			__this = new Func<CustomLogicTSKillSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__MaxRangeShot_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicTSKillSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x4001886")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string _kill;

	[Token(Token = "0x4001887")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string _air;

	[Token(Token = "0x4001888")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string _ground;

	[Token(Token = "0x4001889")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string _armorHit;

	[Token(Token = "0x400188A")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string _closeShot;

	[Token(Token = "0x400188B")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string _maxRangeShot;

	[Token(Token = "0x1700086D")]
	public static string Kill
	{
		[Token(Token = "0x60030BD")]
		[Address(RVA = "0x59ADBB0", Offset = "0x59ACBB0", VA = "0x59ADBB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_Kill): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a9e == false) {
				Il2CppMethodInitialized_07546a9e = true;
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicTSKillSoundEnum._kill;
			}
			return *(String*)(typeof(CustomLogicTSKillSoundEnum)).static_fields;
		}
	}

	[Token(Token = "0x1700086E")]
	public static string Air
	{
		[Token(Token = "0x60030BE")]
		[Address(RVA = "0x59ADC20", Offset = "0x59ACC20", VA = "0x59ADC20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_Air): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a9f == false) {
				Il2CppMethodInitialized_07546a9f = true;
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicTSKillSoundEnum._air;
			}
			return *(String*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x1700086F")]
	public static string Ground
	{
		[Token(Token = "0x60030BF")]
		[Address(RVA = "0x59ADC90", Offset = "0x59ACC90", VA = "0x59ADC90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_Ground): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546aa0 == false) {
				Il2CppMethodInitialized_07546aa0 = true;
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicTSKillSoundEnum._ground;
			}
			return *(String*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000870")]
	public static string ArmorHit
	{
		[Token(Token = "0x60030C0")]
		[Address(RVA = "0x59ADD00", Offset = "0x59ACD00", VA = "0x59ADD00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_ArmorHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546aa1 == false) {
				Il2CppMethodInitialized_07546aa1 = true;
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicTSKillSoundEnum._armorHit;
			}
			return *(String*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x17000871")]
	public static string CloseShot
	{
		[Token(Token = "0x60030C1")]
		[Address(RVA = "0x59ADD70", Offset = "0x59ACD70", VA = "0x59ADD70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_CloseShot): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546aa2 == false) {
				Il2CppMethodInitialized_07546aa2 = true;
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicTSKillSoundEnum._closeShot;
			}
			return *(String*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000872")]
	public static string MaxRangeShot
	{
		[Token(Token = "0x60030C2")]
		[Address(RVA = "0x59ADDE0", Offset = "0x59ACDE0", VA = "0x59ADDE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_MaxRangeShot): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546aa3 == false) {
				Il2CppMethodInitialized_07546aa3 = true;
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicTSKillSoundEnum._maxRangeShot;
			}
			return *(String*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x17000873")]
	public override string ClassName
	{
		[Token(Token = "0x60030C3")]
		[Address(RVA = "0x59ADE50", Offset = "0x59ACE50", VA = "0x59ADE50", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_ClassName): clean
			return "TSKillSoundEnum";
		}
	}

	[Token(Token = "0x17000874")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60030C4")]
		[Address(RVA = "0x59ADE80", Offset = "0x59ACE80", VA = "0x59ADE80", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000875")]
	public override bool IsStatic
	{
		[Token(Token = "0x60030C5")]
		[Address(RVA = "0x59ADE90", Offset = "0x59ACE90", VA = "0x59ADE90", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000876")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60030C6")]
		[Address(RVA = "0x59ADEA0", Offset = "0x59ACEA0", VA = "0x59ADEA0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60030BC")]
	[Address(RVA = "0x59ADB40", Offset = "0x59ACB40", VA = "0x59ADB40")]
	public CustomLogicTSKillSoundEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c (CustomLogic.CustomLogicTSKillSoundEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a9d == false) {
			Il2CppMethodInitialized_07546a9d = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTSKillSoundEnum.c.

	// CustomLogic.CustomLogicTSKillSoundEnum$$.cctor: 6 lines keep C-only constructs
	static CustomLogicTSKillSoundEnum()
	{
		CustomLogic_CustomLogicTSKillSoundEnum_StaticFields pCVar1;
		String pSVar2;
		Enum SStack_a0;
		Enum SStack_88;
		Enum SStack_70;
		Enum SStack_58;
		Enum SStack_40;
		Enum SStack_28;

		SStack_28.klass = (Enum)typeof(TSKillType);
		SStack_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_28.ToString();
		CustomLogicTSKillSoundEnum._kill = pSVar2;
		SStack_40.klass = (Enum)typeof(TSKillType);
		SStack_40.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_40.ToString();
		pCVar1 = typeof(CustomLogicTSKillSoundEnum).static_fields;
		pCVar1._air = pSVar2;
		SStack_58.klass = (Enum)typeof(TSKillType);
		SStack_58.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_58.ToString();
		pCVar1 = typeof(CustomLogicTSKillSoundEnum).static_fields;
		pCVar1._ground = pSVar2;
		SStack_70.klass = (Enum)typeof(TSKillType);
		SStack_70.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_70.ToString();
		pCVar1 = typeof(CustomLogicTSKillSoundEnum).static_fields;
		pCVar1._armorHit = pSVar2;
		SStack_88.klass = (Enum)typeof(TSKillType);
		SStack_88.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_88.ToString();
		pCVar1 = typeof(CustomLogicTSKillSoundEnum).static_fields;
		pCVar1._closeShot = pSVar2;
		SStack_a0.klass = (Enum)typeof(TSKillType);
		SStack_a0.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_a0.ToString();
		pCVar1 = typeof(CustomLogicTSKillSoundEnum).static_fields;
		pCVar1._maxRangeShot = pSVar2;
		return;
	}

	// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Kill");
		__this.Add((Il2CppObject *)"Air");
		__this.Add((Il2CppObject *)"Ground");
		__this.Add((Il2CppObject *)"ArmorHit");
		__this.Add((Il2CppObject *)"CloseShot");
		__this.Add((Il2CppObject *)"MaxRangeShot");
		CustomLogicTSKillSoundEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Kill>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Kill_g____getter_2_0(CustomLogicTSKillSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546aaf == false) {
			Il2CppMethodInitialized_07546aaf = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546c9f == false) {
			Il2CppMethodInitialized_07546c9f = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicTSKillSoundEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicTSKillSoundEnum._kill;
		}
		return *(object*)(typeof(CustomLogicTSKillSoundEnum)).static_fields;
	}

	// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Air>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Air_g____getter_3_0(CustomLogicTSKillSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ab0 == false) {
			Il2CppMethodInitialized_07546ab0 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546ca0 == false) {
			Il2CppMethodInitialized_07546ca0 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicTSKillSoundEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicTSKillSoundEnum._air;
		}
		return *(object*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Ground>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Ground_g____getter_4_0(CustomLogicTSKillSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ab1 == false) {
			Il2CppMethodInitialized_07546ab1 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546ca1 == false) {
			Il2CppMethodInitialized_07546ca1 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicTSKillSoundEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicTSKillSoundEnum._ground;
		}
		return *(object*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__ArmorHit>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__ArmorHit_g____getter_5_0(CustomLogicTSKillSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ab2 == false) {
			Il2CppMethodInitialized_07546ab2 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546ca2 == false) {
			Il2CppMethodInitialized_07546ca2 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicTSKillSoundEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicTSKillSoundEnum._armorHit;
		}
		return *(object*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__CloseShot>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__CloseShot_g____getter_6_0(CustomLogicTSKillSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ab3 == false) {
			Il2CppMethodInitialized_07546ab3 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546ca3 == false) {
			Il2CppMethodInitialized_07546ca3 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicTSKillSoundEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicTSKillSoundEnum._closeShot;
		}
		return *(object*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__MaxRangeShot>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__MaxRangeShot_g____getter_7_0(CustomLogicTSKillSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ab4 == false) {
			Il2CppMethodInitialized_07546ab4 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546ca4 == false) {
			Il2CppMethodInitialized_07546ca4 = true;
			uVar1 = (typeof(CustomLogicTSKillSoundEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicTSKillSoundEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicTSKillSoundEnum._maxRangeShot;
		}
		return *(object*)((long)(typeof(CustomLogicTSKillSoundEnum)).static_fields + 0x28);
	}
}
