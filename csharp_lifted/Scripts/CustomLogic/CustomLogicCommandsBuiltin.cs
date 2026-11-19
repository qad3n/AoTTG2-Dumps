// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCommandsBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005A6")]
[CompilerGenerated]
internal class CustomLogicCommandsBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005A7")]
	public static class Factory
	{
		[Token(Token = "0x60033CE")]
		[Address(RVA = "0x59C9100", Offset = "0x59C8100", VA = "0x59C9100")]
		public static CustomLogicCommandsBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCommandsBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicCommandsBuiltin();
			return (CustomLogicCommandsBuiltin)__this;
		}
	}

	[Token(Token = "0x20005A8")]
	public static class Bindings
	{
		[Token(Token = "0x40018A6")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60033CF")]
		[Address(RVA = "0x59C9220", Offset = "0x59C8220", VA = "0x59C9220")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLMethodBinding<CustomLogicCommandsBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "RegisterCommand");
			if (bVar1) {
				if ((typeof(CustomLogicCommandsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCommandsBuiltin.Bindings.__CreateMethodBinding__RegisterCommand();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCommandsBuiltin.Bindings.__CreateMethodBinding__RegisterCommand();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ParseCommands");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCommandsBuiltin not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicCommandsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCommandsBuiltin.Bindings)) ;
				pCVar2 = CustomLogicCommandsBuiltin.Bindings.__CreateMethodBinding__ParseCommands();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicCommandsBuiltin.Bindings.__CreateMethodBinding__ParseCommands();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60033D0")]
		[Address(RVA = "0x59C9360", Offset = "0x59C8360", VA = "0x59C9360")]
		public static CLMethodBinding<CustomLogicCommandsBuiltin> __CreateMethodBinding__RegisterCommand()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin.Bindings$$__CreateMethodBinding__RegisterCommand): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCommandsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCommandsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546cee == false) {
				Il2CppMethodInitialized_07546cee = true;
				uVar1 = (typeof(CustomLogicCommandsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCommandsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCommandsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCommandsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCommandsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCommandsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCommandsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__RegisterCommand_b__2_0);
				pCVar2 = typeof(CustomLogicCommandsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCommandsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033D1")]
		[Address(RVA = "0x59C94A0", Offset = "0x59C84A0", VA = "0x59C94A0")]
		public static CLMethodBinding<CustomLogicCommandsBuiltin> __CreateMethodBinding__ParseCommands()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin.Bindings$$__CreateMethodBinding__ParseCommands): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCommandsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCommandsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546cef == false) {
				Il2CppMethodInitialized_07546cef = true;
				uVar1 = (typeof(CustomLogicCommandsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCommandsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCommandsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCommandsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCommandsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCommandsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCommandsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__ParseCommands_b__3_0);
				pCVar2 = typeof(CustomLogicCommandsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCommandsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x17000975")]
	public override string ClassName
	{
		[Token(Token = "0x60033CA")]
		[Address(RVA = "0x59C90A0", Offset = "0x59C80A0", VA = "0x59C90A0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin$$get_ClassName): clean
			return "Commands";
		}
	}

	[Token(Token = "0x17000976")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60033CB")]
		[Address(RVA = "0x59C90D0", Offset = "0x59C80D0", VA = "0x59C90D0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000977")]
	public override bool IsStatic
	{
		[Token(Token = "0x60033CC")]
		[Address(RVA = "0x59C90E0", Offset = "0x59C80E0", VA = "0x59C90E0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000978")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60033CD")]
		[Address(RVA = "0x59C90F0", Offset = "0x59C80F0", VA = "0x59C90F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60033C6")]
	[Address(RVA = "0x59C8E60", Offset = "0x59C7E60", VA = "0x59C8E60")]
	public CustomLogicCommandsBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ce7 == false) {
			Il2CppMethodInitialized_07546ce7 = true;
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

	[Token(Token = "0x60033C7")]
	[Address(RVA = "0x59C8ED0", Offset = "0x59C7ED0", VA = "0x59C8ED0")]
	public static bool RegisterCommand(string command, UserMethod method, string description = "", string autofill = "None")
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin$$RegisterCommand): clean
		bool bVar1;
		String a;
		int autofillType;

		if ((autofill == null) &&(autofill = (String)**(long*)(g_data_07556758 + 0xb8), autofill == null)) {
			throw new NullReferenceException();
		}
		a = autofill.ToLower();
		bVar1 = (a == "playerid");
		autofillType = 1;
		if (!bVar1) {
			bVar1 = (a == "playeridlist");
			autofillType = (uint)bVar1 * 2;
		}
		bVar1 = ChatManager.RegisterCustomCommand(command, method, description, autofillType);
		return bVar1;
	}

	[Token(Token = "0x60033C8")]
	[Address(RVA = "0x59C8FC0", Offset = "0x59C7FC0", VA = "0x59C8FC0")]
	public static CustomLogicListBuiltin ParseCommands(string text)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin$$ParseCommands): clean
		String[] parameterValues;
		CustomLogicListBuiltin __this;

		parameterValues = ChatManager.ParseCommandArgs(text);
		__this = new CustomLogicListBuiltin((Object[])parameterValues);
		return __this;
	}

	[Token(Token = "0x60033C9")]
	[Address(RVA = "0x59C9040", Offset = "0x59C8040", VA = "0x59C9040")]
	public static void ClearCommands()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c (CustomLogic.CustomLogicCommandsBuiltin$$ClearCommands): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546cea == false) {
			Il2CppMethodInitialized_07546cea = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			ChatManager.ClearCustomCommands();
			return;
		}
		ChatManager.ClearCustomCommands();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c.

	// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"RegisterCommand");
		__this.Add((Il2CppObject *)"ParseCommands");
		CustomLogicCommandsBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicCommandsBuiltin.Bindings.c();
		CustomLogicCommandsBuiltin.Bindings.c.__9 =(CustomLogicCommandsBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterCommand>b__2_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__RegisterCommand_b__2_0(CustomLogicCommandsBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		String command;
		UserMethod method_00;
		String description;
		String autofill;
		object pIVar2;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			command = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(__a[1]);
				autofill = "None";
				if ((int)__a.Length < 3) {
					description = "";
				}
				else {
					pIVar2 = __a[2];
					description = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
					if (3 < (int)__a.Length) {
						pIVar2 = __a[3];
						autofill = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
					}
				}
				bVar1 = CustomLogicCommandsBuiltin.RegisterCommand(command, method_00, description, autofill);
				uStack_38 = CONCAT17(bVar1, (undefined7)uStack_38);
				pIVar2 = (object)(((long)&uStack_38 + 7));
				return pIVar2;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ParseCommands>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__ParseCommands_b__3_0(CustomLogicCommandsBuiltin __c, Object[] __a)
	{
		object obj;
		String text;
		String[] parameterValues;
		CustomLogicListBuiltin __this_00;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		text = CustomLogicEvaluator.ConvertTo<string>(obj);
		parameterValues = ChatManager.ParseCommandArgs(text);
		__this_00 = new CustomLogicListBuiltin((Object[])parameterValues);
		return (object)__this_00;
	}
}
