// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicOutlineModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200054E")]
[CompilerGenerated]
internal class CustomLogicOutlineModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x200054F")]
	public static class Factory
	{
		[Token(Token = "0x6002DDF")]
		[Address(RVA = "0x5997260", Offset = "0x5996260", VA = "0x5997260")]
		public static CustomLogicOutlineModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicOutlineModeEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicOutlineModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicOutlineModeEnum();
			return __this;
		}
	}

	[Token(Token = "0x2000550")]
	public static class Bindings
	{
		[Token(Token = "0x4001877")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002DE0")]
		[Address(RVA = "0x5997380", Offset = "0x5996380", VA = "0x5997380")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicOutlineModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "OutlineAll");
			if (bVar1) {
				if ((typeof(CustomLogicOutlineModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__OutlineAll();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__OutlineAll();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "OutlineVisible");
			if (bVar1) {
				if ((typeof(CustomLogicOutlineModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__OutlineVisible();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__OutlineVisible();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "OutlineHidden");
			if (bVar1) {
				if ((typeof(CustomLogicOutlineModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__OutlineHidden();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__OutlineHidden();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "OutlineAndSilhouette");
			if (bVar1) {
				pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__OutlineAndSilhouette();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "SilhouetteOnly");
			if (bVar1) {
				pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__SilhouetteOnly();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "OutlineAndLightenColor");
			if (bVar1) {
				pCVar2 = CustomLogicOutlineModeEnum.Bindings.__CreatePropertyBinding__OutlineAndLightenColor();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicOutlineModeEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002DE1")]
		[Address(RVA = "0x59975F0", Offset = "0x59965F0", VA = "0x59975F0")]
		public static CLPropertyBinding<CustomLogicOutlineModeEnum> __CreatePropertyBinding__OutlineAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAll): 2 lines keep C-only constructs
			Func<CustomLogicOutlineModeEnum, object> __this;
			CLPropertyBinding<CustomLogicOutlineModeEnum> __this_00;

			__this = new Func<CustomLogicOutlineModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAll_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicOutlineModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DE2")]
		[Address(RVA = "0x5997690", Offset = "0x5996690", VA = "0x5997690")]
		public static CLPropertyBinding<CustomLogicOutlineModeEnum> __CreatePropertyBinding__OutlineVisible()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineVisible): 2 lines keep C-only constructs
			Func<CustomLogicOutlineModeEnum, object> __this;
			CLPropertyBinding<CustomLogicOutlineModeEnum> __this_00;

			__this = new Func<CustomLogicOutlineModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineVisible_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicOutlineModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DE3")]
		[Address(RVA = "0x5997730", Offset = "0x5996730", VA = "0x5997730")]
		public static CLPropertyBinding<CustomLogicOutlineModeEnum> __CreatePropertyBinding__OutlineHidden()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineHidden): 2 lines keep C-only constructs
			Func<CustomLogicOutlineModeEnum, object> __this;
			CLPropertyBinding<CustomLogicOutlineModeEnum> __this_00;

			__this = new Func<CustomLogicOutlineModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineHidden_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicOutlineModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DE4")]
		[Address(RVA = "0x59977D0", Offset = "0x59967D0", VA = "0x59977D0")]
		public static CLPropertyBinding<CustomLogicOutlineModeEnum> __CreatePropertyBinding__OutlineAndSilhouette()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndSilhouette): 2 lines keep C-only constructs
			Func<CustomLogicOutlineModeEnum, object> __this;
			CLPropertyBinding<CustomLogicOutlineModeEnum> __this_00;

			__this = new Func<CustomLogicOutlineModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndSilhouette_g);
			__this_00 = new CLPropertyBinding<CustomLogicOutlineModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DE5")]
		[Address(RVA = "0x5997870", Offset = "0x5996870", VA = "0x5997870")]
		public static CLPropertyBinding<CustomLogicOutlineModeEnum> __CreatePropertyBinding__SilhouetteOnly()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__SilhouetteOnly): 2 lines keep C-only constructs
			Func<CustomLogicOutlineModeEnum, object> __this;
			CLPropertyBinding<CustomLogicOutlineModeEnum> __this_00;

			__this = new Func<CustomLogicOutlineModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__SilhouetteOnly_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicOutlineModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DE6")]
		[Address(RVA = "0x5997910", Offset = "0x5996910", VA = "0x5997910")]
		public static CLPropertyBinding<CustomLogicOutlineModeEnum> __CreatePropertyBinding__OutlineAndLightenColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndLightenColor): 2 lines keep C-only constructs
			Func<CustomLogicOutlineModeEnum, object> __this;
			CLPropertyBinding<CustomLogicOutlineModeEnum> __this_00;

			__this = new Func<CustomLogicOutlineModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndLightenColor);
			__this_00 = new CLPropertyBinding<CustomLogicOutlineModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x4001871")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string _outlineAll;

	[Token(Token = "0x4001872")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string _outlineVisible;

	[Token(Token = "0x4001873")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string _outlineHidden;

	[Token(Token = "0x4001874")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string _outlineAndSilhouette;

	[Token(Token = "0x4001875")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string _silhouetteOnly;

	[Token(Token = "0x4001876")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string _outlineAndLightenColor;

	[Token(Token = "0x17000761")]
	public static string OutlineAll
	{
		[Token(Token = "0x6002DD4")]
		[Address(RVA = "0x5996D80", Offset = "0x5995D80", VA = "0x5996D80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAll): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546845 == false) {
				Il2CppMethodInitialized_07546845 = true;
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicOutlineModeEnum._outlineAll;
			}
			return *(String*)(typeof(CustomLogicOutlineModeEnum)).static_fields;
		}
	}

	[Token(Token = "0x17000762")]
	public static string OutlineVisible
	{
		[Token(Token = "0x6002DD5")]
		[Address(RVA = "0x5996DF0", Offset = "0x5995DF0", VA = "0x5996DF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineVisible): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546846 == false) {
				Il2CppMethodInitialized_07546846 = true;
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicOutlineModeEnum._outlineVisible;
			}
			return *(String*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000763")]
	public static string OutlineHidden
	{
		[Token(Token = "0x6002DD6")]
		[Address(RVA = "0x5996E60", Offset = "0x5995E60", VA = "0x5996E60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineHidden): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546847 == false) {
				Il2CppMethodInitialized_07546847 = true;
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicOutlineModeEnum._outlineHidden;
			}
			return *(String*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000764")]
	public static string OutlineAndSilhouette
	{
		[Token(Token = "0x6002DD7")]
		[Address(RVA = "0x5996ED0", Offset = "0x5995ED0", VA = "0x5996ED0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndSilhouette): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546848 == false) {
				Il2CppMethodInitialized_07546848 = true;
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicOutlineModeEnum._outlineAndSilhouette;
			}
			return *(String*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x17000765")]
	public static string SilhouetteOnly
	{
		[Token(Token = "0x6002DD8")]
		[Address(RVA = "0x5996F40", Offset = "0x5995F40", VA = "0x5996F40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_SilhouetteOnly): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546849 == false) {
				Il2CppMethodInitialized_07546849 = true;
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicOutlineModeEnum._silhouetteOnly;
			}
			return *(String*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000766")]
	public static string OutlineAndLightenColor
	{
		[Token(Token = "0x6002DD9")]
		[Address(RVA = "0x5996FB0", Offset = "0x5995FB0", VA = "0x5996FB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndLightenColor): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754684a == false) {
				Il2CppMethodInitialized_0754684a = true;
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicOutlineModeEnum._outlineAndLightenColor;
			}
			return *(String*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x17000767")]
	public override string ClassName
	{
		[Token(Token = "0x6002DDA")]
		[Address(RVA = "0x5997020", Offset = "0x5996020", VA = "0x5997020", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_ClassName): clean
			return "OutlineModeEnum";
		}
	}

	[Token(Token = "0x17000768")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002DDB")]
		[Address(RVA = "0x5997050", Offset = "0x5996050", VA = "0x5997050", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000769")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002DDC")]
		[Address(RVA = "0x5997060", Offset = "0x5996060", VA = "0x5997060", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700076A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002DDD")]
		[Address(RVA = "0x5997070", Offset = "0x5996070", VA = "0x5997070", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002DD3")]
	[Address(RVA = "0x5996D10", Offset = "0x5995D10", VA = "0x5996D10")]
	public CustomLogicOutlineModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c (CustomLogic.CustomLogicOutlineModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546844 == false) {
			Il2CppMethodInitialized_07546844 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicOutlineModeEnum.c.

	// CustomLogic.CustomLogicOutlineModeEnum$$.cctor: 6 lines keep C-only constructs
	static CustomLogicOutlineModeEnum()
	{
		CustomLogic_CustomLogicOutlineModeEnum_StaticFields pCVar1;
		String pSVar2;
		Enum SStack_a0;
		Enum SStack_88;
		Enum SStack_70;
		Enum SStack_58;
		Enum SStack_40;
		Enum SStack_28;

		SStack_28.klass = (Enum)typeof(Mode);
		SStack_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_28.ToString();
		CustomLogicOutlineModeEnum._outlineAll = pSVar2;
		SStack_40.klass = (Enum)typeof(Mode);
		SStack_40.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_40.ToString();
		pCVar1 = typeof(CustomLogicOutlineModeEnum).static_fields;
		pCVar1._outlineVisible = pSVar2;
		SStack_58.klass = (Enum)typeof(Mode);
		SStack_58.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_58.ToString();
		pCVar1 = typeof(CustomLogicOutlineModeEnum).static_fields;
		pCVar1._outlineHidden = pSVar2;
		SStack_70.klass = (Enum)typeof(Mode);
		SStack_70.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_70.ToString();
		pCVar1 = typeof(CustomLogicOutlineModeEnum).static_fields;
		pCVar1._outlineAndSilhouette = pSVar2;
		SStack_88.klass = (Enum)typeof(Mode);
		SStack_88.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_88.ToString();
		pCVar1 = typeof(CustomLogicOutlineModeEnum).static_fields;
		pCVar1._silhouetteOnly = pSVar2;
		SStack_a0.klass = (Enum)typeof(Mode);
		SStack_a0.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_a0.ToString();
		pCVar1 = typeof(CustomLogicOutlineModeEnum).static_fields;
		pCVar1._outlineAndLightenColor = pSVar2;
		return;
	}

	// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"OutlineAll");
		__this.Add((Il2CppObject *)"OutlineVisible");
		__this.Add((Il2CppObject *)"OutlineHidden");
		__this.Add((Il2CppObject *)"OutlineAndSilhouette");
		__this.Add((Il2CppObject *)"SilhouetteOnly");
		__this.Add((Il2CppObject *)"OutlineAndLightenColor");
		CustomLogicOutlineModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAll>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__OutlineAll_g____getter_2_0(CustomLogicOutlineModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546856 == false) {
			Il2CppMethodInitialized_07546856 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a04 == false) {
			Il2CppMethodInitialized_07546a04 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicOutlineModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicOutlineModeEnum._outlineAll;
		}
		return *(object*)(typeof(CustomLogicOutlineModeEnum)).static_fields;
	}

	// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineVisible>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__OutlineVisible_g____getter_3_0(CustomLogicOutlineModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546857 == false) {
			Il2CppMethodInitialized_07546857 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a05 == false) {
			Il2CppMethodInitialized_07546a05 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicOutlineModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicOutlineModeEnum._outlineVisible;
		}
		return *(object*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineHidden>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__OutlineHidden_g____getter_4_0(CustomLogicOutlineModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546858 == false) {
			Il2CppMethodInitialized_07546858 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a06 == false) {
			Il2CppMethodInitialized_07546a06 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicOutlineModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicOutlineModeEnum._outlineHidden;
		}
		return *(object*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndSilhouette>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__OutlineAndSilhouette_g____getter_5_0(CustomLogicOutlineModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546859 == false) {
			Il2CppMethodInitialized_07546859 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a07 == false) {
			Il2CppMethodInitialized_07546a07 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicOutlineModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicOutlineModeEnum._outlineAndSilhouette;
		}
		return *(object*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__SilhouetteOnly>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__SilhouetteOnly_g____getter_6_0(CustomLogicOutlineModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754685a == false) {
			Il2CppMethodInitialized_0754685a = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a08 == false) {
			Il2CppMethodInitialized_07546a08 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicOutlineModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicOutlineModeEnum._silhouetteOnly;
		}
		return *(object*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndLightenColor>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__OutlineAndLightenColor_g____getter_7_0(CustomLogicOutlineModeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754685b == false) {
			Il2CppMethodInitialized_0754685b = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a09 == false) {
			Il2CppMethodInitialized_07546a09 = true;
			uVar1 = (typeof(CustomLogicOutlineModeEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicOutlineModeEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicOutlineModeEnum._outlineAndLightenColor;
		}
		return *(object*)((long)(typeof(CustomLogicOutlineModeEnum)).static_fields + 0x28);
	}
}
