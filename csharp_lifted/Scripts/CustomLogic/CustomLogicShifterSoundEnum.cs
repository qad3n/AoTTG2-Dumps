// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicShifterSoundEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000569")]
[CompilerGenerated]
internal class CustomLogicShifterSoundEnum : BuiltinClassInstance
{
	[Token(Token = "0x200056A")]
	public static class Factory
	{
		[Token(Token = "0x6003022")]
		[Address(RVA = "0x59A90C0", Offset = "0x59A80C0", VA = "0x59A90C0")]
		public static CustomLogicShifterSoundEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterSoundEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicShifterSoundEnum();
			return (CustomLogicShifterSoundEnum)__this;
		}
	}

	[Token(Token = "0x200056B")]
	public static class Bindings
	{
		[Token(Token = "0x4001880")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003023")]
		[Address(RVA = "0x59A91E0", Offset = "0x59A81E0", VA = "0x59A91E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicShifterSoundEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Thunder");
			if (bVar1) {
				if ((typeof(CustomLogicShifterSoundEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__Thunder();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__Thunder();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ErenRoar");
			if (bVar1) {
				if ((typeof(CustomLogicShifterSoundEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__ErenRoar();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__ErenRoar();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "AnnieRoar");
			if (bVar1) {
				if ((typeof(CustomLogicShifterSoundEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__AnnieRoar();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__AnnieRoar();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "AnnieHurt");
			if (bVar1) {
				pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__AnnieHurt();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ColossalSteam1");
			if (bVar1) {
				pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__ColossalSteam1();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ColossalSteam2");
			if (bVar1) {
				pCVar2 = CustomLogicShifterSoundEnum.Bindings.__CreatePropertyBinding__ColossalSteam2();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterSoundEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003024")]
		[Address(RVA = "0x59A9450", Offset = "0x59A8450", VA = "0x59A9450")]
		public static CLPropertyBinding<CustomLogicShifterSoundEnum> __CreatePropertyBinding__Thunder()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__Thunder): 2 lines keep C-only constructs
			Func<CustomLogicShifterSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterSoundEnum> __this_00;

			__this = new Func<CustomLogicShifterSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__Thunder_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicShifterSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003025")]
		[Address(RVA = "0x59A94F0", Offset = "0x59A84F0", VA = "0x59A94F0")]
		public static CLPropertyBinding<CustomLogicShifterSoundEnum> __CreatePropertyBinding__ErenRoar()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ErenRoar): 2 lines keep C-only constructs
			Func<CustomLogicShifterSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterSoundEnum> __this_00;

			__this = new Func<CustomLogicShifterSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ErenRoar_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicShifterSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003026")]
		[Address(RVA = "0x59A9590", Offset = "0x59A8590", VA = "0x59A9590")]
		public static CLPropertyBinding<CustomLogicShifterSoundEnum> __CreatePropertyBinding__AnnieRoar()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieRoar): 2 lines keep C-only constructs
			Func<CustomLogicShifterSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterSoundEnum> __this_00;

			__this = new Func<CustomLogicShifterSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieRoar_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicShifterSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003027")]
		[Address(RVA = "0x59A9630", Offset = "0x59A8630", VA = "0x59A9630")]
		public static CLPropertyBinding<CustomLogicShifterSoundEnum> __CreatePropertyBinding__AnnieHurt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieHurt): 2 lines keep C-only constructs
			Func<CustomLogicShifterSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterSoundEnum> __this_00;

			__this = new Func<CustomLogicShifterSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieHurt_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicShifterSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003028")]
		[Address(RVA = "0x59A96D0", Offset = "0x59A86D0", VA = "0x59A96D0")]
		public static CLPropertyBinding<CustomLogicShifterSoundEnum> __CreatePropertyBinding__ColossalSteam1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam1): 2 lines keep C-only constructs
			Func<CustomLogicShifterSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterSoundEnum> __this_00;

			__this = new Func<CustomLogicShifterSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam1_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicShifterSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003029")]
		[Address(RVA = "0x59A9770", Offset = "0x59A8770", VA = "0x59A9770")]
		public static CLPropertyBinding<CustomLogicShifterSoundEnum> __CreatePropertyBinding__ColossalSteam2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam2): 2 lines keep C-only constructs
			Func<CustomLogicShifterSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterSoundEnum> __this_00;

			__this = new Func<CustomLogicShifterSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam2_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicShifterSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700082E")]
	public static string Thunder
	{
		[Token(Token = "0x6003018")]
		[Address(RVA = "0x59A8DC0", Offset = "0x59A7DC0", VA = "0x59A8DC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_Thunder): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a3a == false) {
				Il2CppMethodInitialized_07546a3a = true;
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ShifterSounds.Thunder;
			}
			return *(String*)(typeof(ShifterSounds)).static_fields;
		}
	}

	[Token(Token = "0x1700082F")]
	public static string ErenRoar
	{
		[Token(Token = "0x6003019")]
		[Address(RVA = "0x59A8E30", Offset = "0x59A7E30", VA = "0x59A8E30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_ErenRoar): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a3b == false) {
				Il2CppMethodInitialized_07546a3b = true;
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ShifterSounds.ErenRoar;
			}
			return *(String*)((long)(typeof(ShifterSounds)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000830")]
	public static string AnnieRoar
	{
		[Token(Token = "0x600301A")]
		[Address(RVA = "0x59A8EA0", Offset = "0x59A7EA0", VA = "0x59A8EA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieRoar): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a3c == false) {
				Il2CppMethodInitialized_07546a3c = true;
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ShifterSounds.AnnieRoar;
			}
			return *(String*)((long)(typeof(ShifterSounds)).static_fields + 0x10) ;
		}
	}

	[Token(Token = "0x17000831")]
	public static string AnnieHurt
	{
		[Token(Token = "0x600301B")]
		[Address(RVA = "0x59A8F10", Offset = "0x59A7F10", VA = "0x59A8F10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieHurt): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a3d == false) {
				Il2CppMethodInitialized_07546a3d = true;
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ShifterSounds.AnnieHurt;
			}
			return *(String*)((long)(typeof(ShifterSounds)).static_fields + 0x18) ;
		}
	}

	[Token(Token = "0x17000832")]
	public static string ColossalSteam1
	{
		[Token(Token = "0x600301C")]
		[Address(RVA = "0x59A8F80", Offset = "0x59A7F80", VA = "0x59A8F80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a3e == false) {
				Il2CppMethodInitialized_07546a3e = true;
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ShifterSounds.ColossalSteam1;
			}
			return *(String*)((long)(typeof(ShifterSounds)).static_fields + 0x20) ;
		}
	}

	[Token(Token = "0x17000833")]
	public static string ColossalSteam2
	{
		[Token(Token = "0x600301D")]
		[Address(RVA = "0x59A8FF0", Offset = "0x59A7FF0", VA = "0x59A8FF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a3f == false) {
				Il2CppMethodInitialized_07546a3f = true;
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ShifterSounds.ColossalSteam2;
			}
			return *(String*)((long)(typeof(ShifterSounds)).static_fields + 0x28) ;
		}
	}

	[Token(Token = "0x17000834")]
	public override string ClassName
	{
		[Token(Token = "0x600301E")]
		[Address(RVA = "0x59A9060", Offset = "0x59A8060", VA = "0x59A9060", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_ClassName): clean
			return "ShifterSoundEnum";
		}
	}

	[Token(Token = "0x17000835")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600301F")]
		[Address(RVA = "0x59A9090", Offset = "0x59A8090", VA = "0x59A9090", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000836")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003020")]
		[Address(RVA = "0x59A90A0", Offset = "0x59A80A0", VA = "0x59A90A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000837")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003021")]
		[Address(RVA = "0x59A90B0", Offset = "0x59A80B0", VA = "0x59A90B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003017")]
	[Address(RVA = "0x59A8D50", Offset = "0x59A7D50", VA = "0x59A8D50")]
	public CustomLogicShifterSoundEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c (CustomLogic.CustomLogicShifterSoundEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a39 == false) {
			Il2CppMethodInitialized_07546a39 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicShifterSoundEnum.c.

	// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Thunder");
		__this.Add((Il2CppObject *)"ErenRoar");
		__this.Add((Il2CppObject *)"AnnieRoar");
		__this.Add((Il2CppObject *)"AnnieHurt");
		__this.Add((Il2CppObject *)"ColossalSteam1");
		__this.Add((Il2CppObject *)"ColossalSteam2");
		CustomLogicShifterSoundEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__Thunder>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Thunder_g____getter_2_0(CustomLogicShifterSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c99 == false) {
			Il2CppMethodInitialized_07546c99 = true;
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ShifterSounds.Thunder;
		}
		return *(object*)(typeof(ShifterSounds)).static_fields;
	}

	// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ErenRoar>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__ErenRoar_g____getter_3_0(CustomLogicShifterSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c9a == false) {
			Il2CppMethodInitialized_07546c9a = true;
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ShifterSounds.ErenRoar;
		}
		return *(object*)((long)(typeof(ShifterSounds)).static_fields + 8);
	}

	// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieRoar>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__AnnieRoar_g____getter_4_0(CustomLogicShifterSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c9b == false) {
			Il2CppMethodInitialized_07546c9b = true;
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ShifterSounds.AnnieRoar;
		}
		return *(object*)((long)(typeof(ShifterSounds)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieHurt>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__AnnieHurt_g____getter_5_0(CustomLogicShifterSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c9c == false) {
			Il2CppMethodInitialized_07546c9c = true;
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ShifterSounds.AnnieHurt;
		}
		return *(object*)((long)(typeof(ShifterSounds)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam1>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__ColossalSteam1_g____getter_6_0(CustomLogicShifterSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c9d == false) {
			Il2CppMethodInitialized_07546c9d = true;
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ShifterSounds.ColossalSteam1;
		}
		return *(object*)((long)(typeof(ShifterSounds)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam2>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__ColossalSteam2_g____getter_7_0(CustomLogicShifterSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c9e == false) {
			Il2CppMethodInitialized_07546c9e = true;
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ShifterSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ShifterSounds.ColossalSteam2;
		}
		return *(object*)((long)(typeof(ShifterSounds)).static_fields + 0x28);
	}
}
