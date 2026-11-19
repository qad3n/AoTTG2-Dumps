// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTimeBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTimeBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTimeBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005DF")]
[CompilerGenerated]
internal class CustomLogicTimeBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005E0")]
	public static class Factory
	{
		[Token(Token = "0x6003697")]
		[Address(RVA = "0x59FB060", Offset = "0x59FA060", VA = "0x59FB060")]
		public static CustomLogicTimeBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTimeBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTimeBuiltin();
			return (CustomLogicTimeBuiltin)__this;
		}
	}

	[Token(Token = "0x20005E1")]
	public static class Bindings
	{
		[Token(Token = "0x400196C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003698")]
		[Address(RVA = "0x59FB180", Offset = "0x59FA180", VA = "0x59FB180")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicTimeBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "TickTime");
			if (bVar1) {
				if ((typeof(CustomLogicTimeBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__TickTime();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__TickTime();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "FrameTime");
			if (bVar1) {
				if ((typeof(CustomLogicTimeBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__FrameTime();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__FrameTime();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "UnscaledFrameTime");
			if (bVar1) {
				if ((typeof(CustomLogicTimeBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__UnscaledFrameTime();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__UnscaledFrameTime();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "GameTime");
			if (bVar1) {
				pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__GameTime();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "EngineTime");
			if (bVar1) {
				pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__EngineTime();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "TimeScale");
			if (bVar1) {
				pCVar2 = CustomLogicTimeBuiltin.Bindings.__CreatePropertyBinding__TimeScale();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTimeBuiltin not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003699")]
		[Address(RVA = "0x59FB3F0", Offset = "0x59FA3F0", VA = "0x59FB3F0")]
		public static CLPropertyBinding<CustomLogicTimeBuiltin> __CreatePropertyBinding__TickTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TickTime): 3 lines keep C-only constructs
			Func<CustomLogicTimeBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTimeBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f25 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicTimeBuiltin>)) ;
				Il2CppMethodInitialized_07546f25 = true;
			}
			__this = new Func<CustomLogicTimeBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TickTime_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicTimeBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600369A")]
		[Address(RVA = "0x59FB490", Offset = "0x59FA490", VA = "0x59FB490")]
		public static CLPropertyBinding<CustomLogicTimeBuiltin> __CreatePropertyBinding__FrameTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__FrameTime): 3 lines keep C-only constructs
			Func<CustomLogicTimeBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTimeBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f26 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicTimeBuiltin>)) ;
				Il2CppMethodInitialized_07546f26 = true;
			}
			__this = new Func<CustomLogicTimeBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__FrameTime_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicTimeBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600369B")]
		[Address(RVA = "0x59FB530", Offset = "0x59FA530", VA = "0x59FB530")]
		public static CLPropertyBinding<CustomLogicTimeBuiltin> __CreatePropertyBinding__UnscaledFrameTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__UnscaledFrameTime): 3 lines keep C-only constructs
			Func<CustomLogicTimeBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTimeBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f27 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicTimeBuiltin>)) ;
				Il2CppMethodInitialized_07546f27 = true;
			}
			__this = new Func<CustomLogicTimeBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__UnscaledFrameTime_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTimeBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600369C")]
		[Address(RVA = "0x59FB5D0", Offset = "0x59FA5D0", VA = "0x59FB5D0")]
		public static CLPropertyBinding<CustomLogicTimeBuiltin> __CreatePropertyBinding__GameTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__GameTime): 3 lines keep C-only constructs
			Func<CustomLogicTimeBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTimeBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f28 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicTimeBuiltin>)) ;
				Il2CppMethodInitialized_07546f28 = true;
			}
			__this = new Func<CustomLogicTimeBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__GameTime_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicTimeBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600369D")]
		[Address(RVA = "0x59FB670", Offset = "0x59FA670", VA = "0x59FB670")]
		public static CLPropertyBinding<CustomLogicTimeBuiltin> __CreatePropertyBinding__EngineTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__EngineTime): 3 lines keep C-only constructs
			Func<CustomLogicTimeBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTimeBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f29 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicTimeBuiltin>)) ;
				Il2CppMethodInitialized_07546f29 = true;
			}
			__this = new Func<CustomLogicTimeBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__EngineTime_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicTimeBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600369E")]
		[Address(RVA = "0x59FB710", Offset = "0x59FA710", VA = "0x59FB710")]
		public static CLPropertyBinding<CustomLogicTimeBuiltin> __CreatePropertyBinding__TimeScale()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TimeScale): 4 lines keep C-only constructs
			Func<CustomLogicTimeBuiltin, object> __this;
			Action<CustomLogicTimeBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTimeBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546f2a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicTimeBuiltin>)) ;
				Il2CppMethodInitialized_07546f2a = true;
			}
			__this = new Func<CustomLogicTimeBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____getter_7_0);
			__this_00 = new Action<CustomLogicTimeBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____setter_7_1);
			__this_01 = new CLPropertyBinding<CustomLogicTimeBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}
	}

	[Token(Token = "0x170009D9")]
	public static float TickTime
	{
		[Token(Token = "0x600368C")]
		[Address(RVA = "0x59FAF20", Offset = "0x59F9F20", VA = "0x59FAF20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_TickTime): clean
			float fVar1;

			return fVar1;
		}
	}

	[Token(Token = "0x170009DA")]
	public static float FrameTime
	{
		[Token(Token = "0x600368D")]
		[Address(RVA = "0x59FAF30", Offset = "0x59F9F30", VA = "0x59FAF30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_FrameTime): clean
			float fVar1;

			return fVar1;
		}
	}

	[Token(Token = "0x170009DB")]
	public static float UnscaledFrameTime
	{
		[Token(Token = "0x600368E")]
		[Address(RVA = "0x59FAF40", Offset = "0x59F9F40", VA = "0x59FAF40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_UnscaledFrameTime): clean
			float fVar1;

			return fVar1;
		}
	}

	[Token(Token = "0x170009DC")]
	public static float GameTime
	{
		[Token(Token = "0x600368F")]
		[Address(RVA = "0x59FAF50", Offset = "0x59F9F50", VA = "0x59FAF50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_GameTime): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546f21 == false) {
				Il2CppMethodInitialized_07546f21 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.CurrentTime;
		}
	}

	[Token(Token = "0x170009DD")]
	public static float EngineTime
	{
		[Token(Token = "0x6003690")]
		[Address(RVA = "0x59FAFD0", Offset = "0x59F9FD0", VA = "0x59FAFD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_EngineTime): clean
			float fVar1;

			return fVar1;
		}
	}

	[Token(Token = "0x170009DE")]
	public static float TimeScale
	{
		[Token(Token = "0x6003691")]
		[Address(RVA = "0x59FAFE0", Offset = "0x59F9FE0", VA = "0x59FAFE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_TimeScale): clean
			float fVar1;

			return fVar1;
		}
		[Token(Token = "0x6003692")]
		[Address(RVA = "0x59FAFF0", Offset = "0x59F9FF0", VA = "0x59FAFF0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$set_TimeScale): clean
			Time.timeScale = value;
			return;
		}
	}

	[Token(Token = "0x170009DF")]
	public override string ClassName
	{
		[Token(Token = "0x6003693")]
		[Address(RVA = "0x59FB000", Offset = "0x59FA000", VA = "0x59FB000", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_ClassName): clean
			return "Time";
		}
	}

	[Token(Token = "0x170009E0")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003694")]
		[Address(RVA = "0x59FB030", Offset = "0x59FA030", VA = "0x59FB030", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009E1")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003695")]
		[Address(RVA = "0x59FB040", Offset = "0x59FA040", VA = "0x59FB040", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009E2")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003696")]
		[Address(RVA = "0x59FB050", Offset = "0x59FA050", VA = "0x59FB050", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600368B")]
	[Address(RVA = "0x59FAEB0", Offset = "0x59F9EB0", VA = "0x59FAEB0")]
	public CustomLogicTimeBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c (CustomLogic.CustomLogicTimeBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546f20 == false) {
			Il2CppMethodInitialized_07546f20 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTimeBuiltin.c.

	// CustomLogic.CustomLogicTimeBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"TickTime");
		__this.Add((Il2CppObject *)"FrameTime");
		__this.Add((Il2CppObject *)"UnscaledFrameTime");
		__this.Add((Il2CppObject *)"GameTime");
		__this.Add((Il2CppObject *)"EngineTime");
		__this.Add((Il2CppObject *)"TimeScale");
		CustomLogicTimeBuiltin.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicTimeBuiltin.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TickTime>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__TickTime_g____getter_2_0(CustomLogicTimeBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		Time.fixedDeltaTime;
		return pIVar1;
	}

	// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__FrameTime>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__FrameTime_g____getter_3_0(CustomLogicTimeBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		Time.deltaTime;
		return pIVar1;
	}

	// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__UnscaledFrameTime>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__UnscaledFrameTime_g____getter_4_0(CustomLogicTimeBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		Time.unscaledDeltaTime;
		return pIVar1;
	}

	// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__GameTime>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__GameTime_g____getter_5_0(CustomLogicTimeBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		object pIVar3;

		if (Il2CppMethodInitialized_07546f21 == false) {
			Il2CppMethodInitialized_07546f21 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = CustomLogicManager.Evaluator;
		}
		else {
			pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		return pIVar3;
	}

	// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__EngineTime>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__EngineTime_g____getter_6_0(CustomLogicTimeBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		Time.time;
		return pIVar1;
	}

	// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__TimeScale_g____getter_7_0(CustomLogicTimeBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		Time.timeScale;
		return pIVar1;
	}

	// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__TimeScale_g____setter_7_1(CustomLogicTimeBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		Time.timeScale = value;
		return;
	}
}
