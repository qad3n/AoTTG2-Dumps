// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicRoomDataBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRoomDataBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005D3")]
[CompilerGenerated]
internal class CustomLogicRoomDataBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005D4")]
	public static class Factory
	{
		[Token(Token = "0x600363E")]
		[Address(RVA = "0x59F6930", Offset = "0x59F5930", VA = "0x59F6930")]
		public static CustomLogicRoomDataBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRoomDataBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicRoomDataBuiltin();
			return (CustomLogicRoomDataBuiltin)__this;
		}
	}

	[Token(Token = "0x20005D5")]
	public static class Bindings
	{
		[Token(Token = "0x4001947")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600363F")]
		[Address(RVA = "0x59F6A50", Offset = "0x59F5A50", VA = "0x59F6A50")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLMethodBinding<CustomLogicRoomDataBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "SetProperty");
			if (bVar1) {
				if ((typeof(CustomLogicRoomDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicRoomDataBuiltin.Bindings.__CreateMethodBinding__SetProperty();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicRoomDataBuiltin.Bindings.__CreateMethodBinding__SetProperty();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "GetProperty");
			if (bVar1) {
				if ((typeof(CustomLogicRoomDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicRoomDataBuiltin.Bindings.__CreateMethodBinding__GetProperty();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicRoomDataBuiltin.Bindings.__CreateMethodBinding__GetProperty();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Clear");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRoomDataBuiltin not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicRoomDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicRoomDataBuiltin.Bindings)) ;
				pCVar2 = CustomLogicRoomDataBuiltin.Bindings.__CreateMethodBinding__Clear();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicRoomDataBuiltin.Bindings.__CreateMethodBinding__Clear();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6003640")]
		[Address(RVA = "0x59F6BE0", Offset = "0x59F5BE0", VA = "0x59F6BE0")]
		public static CLMethodBinding<CustomLogicRoomDataBuiltin> __CreateMethodBinding__SetProperty()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRoomDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRoomDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ef0 == false) {
				Il2CppMethodInitialized_07546ef0 = true;
				uVar1 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRoomDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRoomDataBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2_0);
				pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRoomDataBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003641")]
		[Address(RVA = "0x59F6D20", Offset = "0x59F5D20", VA = "0x59F6D20")]
		public static CLMethodBinding<CustomLogicRoomDataBuiltin> __CreateMethodBinding__GetProperty()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRoomDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRoomDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ef1 == false) {
				Il2CppMethodInitialized_07546ef1 = true;
				uVar1 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRoomDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRoomDataBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3_0);
				pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRoomDataBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003642")]
		[Address(RVA = "0x59F6E60", Offset = "0x59F5E60", VA = "0x59F6E60")]
		public static CLMethodBinding<CustomLogicRoomDataBuiltin> __CreateMethodBinding__Clear()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__Clear): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRoomDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRoomDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ef2 == false) {
				Il2CppMethodInitialized_07546ef2 = true;
				uVar1 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRoomDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRoomDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRoomDataBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__4_0);
				pCVar2 = typeof(CustomLogicRoomDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRoomDataBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x170009C9")]
	public override string ClassName
	{
		[Token(Token = "0x600363A")]
		[Address(RVA = "0x59F68D0", Offset = "0x59F58D0", VA = "0x59F68D0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin$$get_ClassName): clean
			return "RoomData";
		}
	}

	[Token(Token = "0x170009CA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600363B")]
		[Address(RVA = "0x59F6900", Offset = "0x59F5900", VA = "0x59F6900", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009CB")]
	public override bool IsStatic
	{
		[Token(Token = "0x600363C")]
		[Address(RVA = "0x59F6910", Offset = "0x59F5910", VA = "0x59F6910", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009CC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600363D")]
		[Address(RVA = "0x59F6920", Offset = "0x59F5920", VA = "0x59F6920", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003636")]
	[Address(RVA = "0x59F6640", Offset = "0x59F5640", VA = "0x59F6640")]
	public CustomLogicRoomDataBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ee9 == false) {
			Il2CppMethodInitialized_07546ee9 = true;
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

	[Token(Token = "0x6003637")]
	[Address(RVA = "0x59F66B0", Offset = "0x59F56B0", VA = "0x59F66B0")]
	public static void SetProperty(string property, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin$$SetProperty): 5 lines keep C-only constructs
		Dictionary<object, object> __this;
		Il2CppClass pIVar1;
		Exception __this_00;
		String message;
		MethodInfo lastManagedFrame;

		if ((((value != null) && (pIVar1 = value.klass, pIVar1 != g_data_07556740)) &&(pIVar1 != g_data_07556710)) && ((pIVar1 != g_data_07556758 && (pIVar1 != g_data_075566f0)))) {
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(pIVar1);
			message = il2cpp_codegen_get_runtime_metadata(&"RoomData.SetProperty only supports null, float, int, string, or bool values.");
			__this_00 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_SetProperty);
			throw (object)__this_00;
		}
		__this = (Dictionary<object, object>)CustomLogicManager.RoomData;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.set_Item((object)property, value);
		return;
	}

	[Token(Token = "0x6003638")]
	[Address(RVA = "0x59F67B0", Offset = "0x59F57B0", VA = "0x59F67B0")]
	public static object GetProperty(string property, object defaultValue)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin$$GetProperty): clean
		object pIVar1;

		pIVar1 = CollectionExtensions.GetValueOrDefault<string, object>((IReadOnlyDictionary<TKey, TValue>)CustomLogicManager.RoomData, (object)property, defaultValue);
		return pIVar1;
	}

	[Token(Token = "0x6003639")]
	[Address(RVA = "0x59F6830", Offset = "0x59F5830", VA = "0x59F6830")]
	public static void Clear()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c (CustomLogic.CustomLogicRoomDataBuiltin$$Clear): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_07546eec == false) {
			Il2CppMethodInitialized_07546eec = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)CustomLogicManager.RoomData;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(CustomLogicManager)).static_fields + 0x98);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicRoomDataBuiltin.c.

	// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"SetProperty");
		__this.Add((Il2CppObject *)"GetProperty");
		__this.Add((Il2CppObject *)"Clear");
		CustomLogicRoomDataBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicRoomDataBuiltin.Bindings.c();
		CustomLogicRoomDataBuiltin.Bindings.c.__9 =(CustomLogicRoomDataBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0: clean
	private object Bindings_c____CreateMethodBinding__SetProperty_b__2_0(CustomLogicRoomDataBuiltin __c, Object[] __a)
	{
		object obj;
		String property;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			property = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				CustomLogicRoomDataBuiltin.SetProperty(property, __a[1]);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__GetProperty_b__3_0(CustomLogicRoomDataBuiltin __c, Object[] __a)
	{
		String key;
		object pIVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			key = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				pIVar1 = __a[1];
				pIVar1 = CollectionExtensions.GetValueOrDefault<string, object>((IReadOnlyDictionary<TKey, TValue>)CustomLogicManager.RoomData, (object)key, pIVar1);
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__Clear_b__4_0(CustomLogicRoomDataBuiltin __c, Object[] __a)
	{
		uint uVar1;
		Dictionary<object, object> __this_00;

		if (Il2CppMethodInitialized_07546eec == false) {
			Il2CppMethodInitialized_07546eec = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<object, object>)CustomLogicManager.RoomData;
		}
		else {
			__this_00 = *(Dictionary<object, object>*)((long)(typeof(CustomLogicManager)).static_fields + 0x98);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return null;
	}
}
