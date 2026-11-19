// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicImageBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicImageBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20005EE")]
[CompilerGenerated]
internal class CustomLogicImageBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005EF")]
	public static class Factory
	{
		[Token(Token = "0x6003714")]
		[Address(RVA = "0x59FFF30", Offset = "0x59FEF30", VA = "0x59FFF30")]
		public static CustomLogicImageBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicImageBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicImageBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicImageBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicImageBuiltin();
			__this._currentImagePath = (String)**(ulong*)(g_data_07556758 + 0xb8);
			__this._currentTexture = null;
			return __this;
		}
	}

	[Token(Token = "0x20005F0")]
	public static class Bindings
	{
		[Token(Token = "0x4001984")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003715")]
		[Address(RVA = "0x5A00090", Offset = "0x59FF090", VA = "0x5A00090")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicImageBuiltin> pCVar2;
			CLMethodBinding<CustomLogicImageBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "ImagePath");
			if (bVar1) {
				if ((typeof(CustomLogicImageBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicImageBuiltin.Bindings.__CreatePropertyBinding__ImagePath();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicImageBuiltin.Bindings.__CreatePropertyBinding__ImagePath();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "SetImage");
			if (!bVar1) {
				pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicImageBuiltin not found");
				pSVar4 = String.Concat(pSVar4, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar4);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicImageBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar3 = CustomLogicImageBuiltin.Bindings.__CreateMethodBinding__SetImage();
				return (ICLMemberBinding)pCVar3;
			}
			pCVar3 = CustomLogicImageBuiltin.Bindings.__CreateMethodBinding__SetImage();
			return (ICLMemberBinding)pCVar3;
		}

		[Token(Token = "0x6003716")]
		[Address(RVA = "0x5A001D0", Offset = "0x59FF1D0", VA = "0x5A001D0")]
		public static CLPropertyBinding<CustomLogicImageBuiltin> __CreatePropertyBinding__ImagePath()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreatePropertyBinding__ImagePath): 3 lines keep C-only constructs
			Func<CustomLogicImageBuiltin, object> __this;
			Action<CustomLogicImageBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicImageBuiltin> __this_01;

			__this = new Func<CustomLogicImageBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____getter_2_0);
			__this_00 = new Action<CustomLogicImageBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicImageBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003717")]
		[Address(RVA = "0x5A002B0", Offset = "0x59FF2B0", VA = "0x5A002B0")]
		public static CLMethodBinding<CustomLogicImageBuiltin> __CreateMethodBinding__SetImage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreateMethodBinding__SetImage): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicImageBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicImageBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicImageBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f71 == false) {
				Il2CppMethodInitialized_07546f71 = true;
				uVar1 = (typeof(CustomLogicImageBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicImageBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicImageBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicImageBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicImageBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicImageBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicImageBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c___CreateMethodBinding__SetImage_b__3_0);
				pCVar2 = typeof(CustomLogicImageBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicImageBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001982")]
	[FieldOffset(Offset = "0x30")]
	private string _currentImagePath;

	[Token(Token = "0x4001983")]
	[FieldOffset(Offset = "0x38")]
	private Texture2D _currentTexture;

	[Token(Token = "0x170009F7")]
	public string ImagePath
	{
		[Token(Token = "0x600370D")]
		[Address(RVA = "0x59FFEA0", Offset = "0x59FEEA0", VA = "0x59FFEA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$get_ImagePath): clean
			return this._currentImagePath;
		}
		[Token(Token = "0x600370E")]
		[Address(RVA = "0x59FFEB0", Offset = "0x59FEEB0", VA = "0x59FFEB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$set_ImagePath): clean
			this.SetImage(value);
			return;
		}
	}

	[Token(Token = "0x170009F8")]
	public override string ClassName
	{
		[Token(Token = "0x6003710")]
		[Address(RVA = "0x59FFED0", Offset = "0x59FEED0", VA = "0x59FFED0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$get_ClassName): clean
			return "Image";
		}
	}

	[Token(Token = "0x170009F9")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003711")]
		[Address(RVA = "0x59FFF00", Offset = "0x59FEF00", VA = "0x59FFF00", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009FA")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003712")]
		[Address(RVA = "0x59FFF10", Offset = "0x59FEF10", VA = "0x59FFF10", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170009FB")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003713")]
		[Address(RVA = "0x59FFF20", Offset = "0x59FEF20", VA = "0x59FFF20", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600370B")]
	[Address(RVA = "0x59FFBE0", Offset = "0x59FEBE0", VA = "0x59FFBE0")]
	public CustomLogicImageBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$.ctor): clean
		base();
		this._currentImagePath = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this._currentTexture = null;
		return;
	}

	[Token(Token = "0x600370C")]
	[Address(RVA = "0x59FFC60", Offset = "0x59FEC60", VA = "0x59FFC60")]
	public CustomLogicImageBuiltin SetImage(string imagePath)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$SetImage): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Texture2D x;
		String pSVar3;

		bVar2 = String.IsNullOrEmpty(value);
		if (bVar2) {
			this._currentImagePath = (String)**(ulong*)(g_data_07556758 + 0xb8);
			this._currentTexture = null;
		}
		else {
			bVar2 = Util.IsValidResourcePath(value);
			if (bVar2) {
				pSVar3 = ResourcePaths.UI;
				x = (Texture2D)ResourceManager.LoadAsset(pSVar3, value, true, false);
				bVar2 = ((Object)x != null);
				if (((bVar2) && (x != null)) && (x.klass == typeof(Texture2D))) {
					this._currentTexture = x;
					this._currentImagePath = value;
					return;
				}
				((Object)x != null);
				pSVar3 = String.Concat("Failed to load image at path: ", value);
				uVar1 = (typeof(Debug)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar3 = String.Concat("Failed to load image at path: ", value);
				uVar1 = (typeof(Debug)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			Debug.LogWarning((object)pSVar3);
		}
		return;
	}

	[Token(Token = "0x600370F")]
	[Address(RVA = "0x59FFEC0", Offset = "0x59FEEC0", VA = "0x59FFEC0")]
	internal Texture2D GetTexture()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c (CustomLogic.CustomLogicImageBuiltin$$GetTexture): clean
		return this._currentTexture;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicImageBuiltin.c.

	// CustomLogic.CustomLogicImageBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"ImagePath");
		__this.Add((Il2CppObject *)"SetImage");
		CustomLogicImageBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__ImagePath_g____getter_2_0(CustomLogicImageBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._currentImagePath;
	}

	// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__ImagePath_g____setter_2_1(CustomLogicImageBuiltin __i, object __v)
	{
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SetImage(value);
		return;
	}

	// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicImageBuiltin.Bindings.c();
		CustomLogicImageBuiltin.Bindings.c.__9 =(CustomLogicImageBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetImage>b__3_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__SetImage_b__3_0(CustomLogicImageBuiltin __c, Object[] __a)
	{
		object obj;
		String value;
		object extraout_RAX;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if (__c != null) {
				__c.SetImage(value);
				return extraout_RAX;
			}
		}
		throw new NullReferenceException();
	}
}
