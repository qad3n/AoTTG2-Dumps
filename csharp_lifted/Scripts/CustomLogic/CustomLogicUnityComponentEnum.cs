// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicUnityComponentEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000596")]
[CompilerGenerated]
internal class CustomLogicUnityComponentEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000597")]
	public static class Factory
	{
		[Token(Token = "0x6003321")]
		[Address(RVA = "0x59C1ED0", Offset = "0x59C0ED0", VA = "0x59C1ED0")]
		public static CustomLogicUnityComponentEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicUnityComponentEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicUnityComponentEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicUnityComponentEnum();
			return (CustomLogicUnityComponentEnum)__this;
		}
	}

	[Token(Token = "0x2000598")]
	public static class Bindings
	{
		[Token(Token = "0x4001895")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003322")]
		[Address(RVA = "0x59C1FF0", Offset = "0x59C0FF0", VA = "0x59C1FF0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicUnityComponentEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "VideoPlayer");
			if (bVar1) {
				if ((typeof(CustomLogicUnityComponentEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicUnityComponentEnum.Bindings.__CreatePropertyBinding__VideoPlayer();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicUnityComponentEnum.Bindings.__CreatePropertyBinding__VideoPlayer();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicUnityComponentEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003323")]
		[Address(RVA = "0x59C20D0", Offset = "0x59C10D0", VA = "0x59C20D0")]
		public static CLPropertyBinding<CustomLogicUnityComponentEnum> __CreatePropertyBinding__VideoPlayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum.Bindings$$__CreatePropertyBinding__VideoPlayer): 3 lines keep C-only constructs
			Func<CustomLogicUnityComponentEnum, object> __this;
			CLPropertyBinding<CustomLogicUnityComponentEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicUnityComponentEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings___CreatePropertyBinding__VideoPlayer_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicUnityComponentEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000943")]
	public static string VideoPlayer
	{
		[Token(Token = "0x600331C")]
		[Address(RVA = "0x59C1E40", Offset = "0x59C0E40", VA = "0x59C1E40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum$$get_VideoPlayer): clean
			return "VideoPlayer";
		}
	}

	[Token(Token = "0x17000944")]
	public override string ClassName
	{
		[Token(Token = "0x600331D")]
		[Address(RVA = "0x59C1E70", Offset = "0x59C0E70", VA = "0x59C1E70", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum$$get_ClassName): clean
			return "UnityComponentEnum";
		}
	}

	[Token(Token = "0x17000945")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600331E")]
		[Address(RVA = "0x59C1EA0", Offset = "0x59C0EA0", VA = "0x59C1EA0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000946")]
	public override bool IsStatic
	{
		[Token(Token = "0x600331F")]
		[Address(RVA = "0x59C1EB0", Offset = "0x59C0EB0", VA = "0x59C1EB0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000947")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003320")]
		[Address(RVA = "0x59C1EC0", Offset = "0x59C0EC0", VA = "0x59C1EC0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600331B")]
	[Address(RVA = "0x59C1DD0", Offset = "0x59C0DD0", VA = "0x59C1DD0")]
	public CustomLogicUnityComponentEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c (CustomLogic.CustomLogicUnityComponentEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546c26 == false) {
			Il2CppMethodInitialized_07546c26 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicUnityComponentEnum.c.

	// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"VideoPlayer");
		CustomLogicUnityComponentEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$<__CreatePropertyBinding__VideoPlayer>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__VideoPlayer_g____getter_2_0(CustomLogicUnityComponentEnum __i)
	{
		return (Il2CppObject *)"VideoPlayer";
	}
}
