// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicIconBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicIconBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005EA")]
[CompilerGenerated]
internal class CustomLogicIconBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005EB")]
	public new static class Factory
	{
		[Token(Token = "0x60036FC")]
		[Address(RVA = "0x59FF0E0", Offset = "0x59FE0E0", VA = "0x59FF0E0")]
		public static CustomLogicIconBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicIconBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicIconBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20005EC")]
	public new static class Bindings
	{
		[Token(Token = "0x400197E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60036FD")]
		[Address(RVA = "0x59FF170", Offset = "0x59FE170", VA = "0x59FF170")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicIconBuiltin> pCVar2;
			CLMethodBinding<CustomLogicIconBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "IconPath");
			if (bVar1) {
				if ((typeof(CustomLogicIconBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicIconBuiltin.Bindings.__CreatePropertyBinding__IconPath();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicIconBuiltin.Bindings.__CreatePropertyBinding__IconPath();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ScaleMode");
			if (bVar1) {
				if ((typeof(CustomLogicIconBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicIconBuiltin.Bindings.__CreatePropertyBinding__ScaleMode();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicIconBuiltin.Bindings.__CreatePropertyBinding__ScaleMode();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "SetIcon");
			if (bVar1) {
				if ((typeof(CustomLogicIconBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar3 = CustomLogicIconBuiltin.Bindings.__CreateMethodBinding__SetIcon();
					return (ICLMemberBinding)pCVar3;
				}
				pCVar3 = CustomLogicIconBuiltin.Bindings.__CreateMethodBinding__SetIcon();
				return (ICLMemberBinding)pCVar3;
			}
			bVar1 = (name == "SetTintColor");
			if (!bVar1) {
				pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicIconBuiltin not found");
				pSVar4 = String.Concat(pSVar4, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar4);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicIconBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar3 = CustomLogicIconBuiltin.Bindings.__CreateMethodBinding__SetTintColor();
				return (ICLMemberBinding)pCVar3;
			}
			pCVar3 = CustomLogicIconBuiltin.Bindings.__CreateMethodBinding__SetTintColor();
			return (ICLMemberBinding)pCVar3;
		}

		[Token(Token = "0x60036FE")]
		[Address(RVA = "0x59FF350", Offset = "0x59FE350", VA = "0x59FF350")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__IconPath()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__IconPath): 4 lines keep C-only constructs
			Func<CustomLogicIconBuiltin, object> __this;
			Action<CustomLogicIconBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicIconBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546f61 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicIconBuiltin>)) ;
				Il2CppMethodInitialized_07546f61 = true;
			}
			__this = new Func<CustomLogicIconBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____getter_2_0);
			__this_00 = new Action<CustomLogicIconBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicIconBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60036FF")]
		[Address(RVA = "0x59FF430", Offset = "0x59FE430", VA = "0x59FF430")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__ScaleMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__ScaleMode): 4 lines keep C-only constructs
			Func<CustomLogicIconBuiltin, object> __this;
			Action<CustomLogicIconBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicIconBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546f62 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicIconBuiltin>)) ;
				Il2CppMethodInitialized_07546f62 = true;
			}
			__this = new Func<CustomLogicIconBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____getter_3_0);
			__this_00 = new Action<CustomLogicIconBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicIconBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003700")]
		[Address(RVA = "0x59FF510", Offset = "0x59FE510", VA = "0x59FF510")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetIcon()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetIcon): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicIconBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicIconBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicIconBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f63 == false) {
				Il2CppMethodInitialized_07546f63 = true;
				uVar1 = (typeof(CustomLogicIconBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicIconBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicIconBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicIconBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicIconBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicIconBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicIconBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicIconBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetIcon_b__4_0);
				pCVar2 = typeof(CustomLogicIconBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicIconBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003701")]
		[Address(RVA = "0x59FF650", Offset = "0x59FE650", VA = "0x59FF650")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetTintColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetTintColor): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicIconBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicIconBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicIconBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f64 == false) {
				Il2CppMethodInitialized_07546f64 = true;
				uVar1 = (typeof(CustomLogicIconBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicIconBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicIconBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicIconBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicIconBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicIconBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicIconBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicIconBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetTintColor_b__5_0);
				pCVar2 = typeof(CustomLogicIconBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicIconBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400197C")]
	[FieldOffset(Offset = "0x60")]
	private readonly Image _image;

	[Token(Token = "0x400197D")]
	[FieldOffset(Offset = "0x68")]
	private string _currentIconPath;

	[Token(Token = "0x170009F1")]
	public string IconPath
	{
		[Token(Token = "0x60036F3")]
		[Address(RVA = "0x59FEEC0", Offset = "0x59FDEC0", VA = "0x59FEEC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$get_IconPath): clean
			return this._currentIconPath;
		}
		[Token(Token = "0x60036F4")]
		[Address(RVA = "0x59FEED0", Offset = "0x59FDED0", VA = "0x59FEED0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$set_IconPath): clean
			this.SetIcon(value);
			return;
		}
	}

	[Token(Token = "0x170009F2")]
	public int ScaleMode
	{
		[Token(Token = "0x60036F6")]
		[Address(RVA = "0x59FEF20", Offset = "0x59FDF20", VA = "0x59FEF20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$get_ScaleMode): clean
			Image pUVar1;

			pUVar1 = this._image;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.m_ScaleMode;
		}
		[Token(Token = "0x60036F7")]
		[Address(RVA = "0x59FEF40", Offset = "0x59FDF40", VA = "0x59FEF40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$set_ScaleMode): 5 lines keep C-only constructs
			Image __this_00;
			Il2CppType handle;
			bool bVar1;
			Type enumType;
			object pIVar2;
			String pSVar3;
			Il2CppClass klass;
			ArgumentException __this_01;
			MethodInfo lastManagedFrame;
			int iStack_30;
			int iStack_2c;

			handle = TypeRef_UnityEngine_ScaleMode;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			iStack_2c = value;
			pIVar2 = (object)iStack_2c;
			bVar1 = Enum.IsDefined(enumType, pIVar2);
			if (bVar1) {
				__this_00 = this._image;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.scaleMode = value;
				return;
			}
			iStack_30 = value;
			pIVar2 = (object)iStack_30;
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid scale mode: {0}.");
			pSVar3 = String.Format(pSVar3, pIVar2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this_01 = new ArgumentException(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicIconBuiltin_set_ScaleMode);
			throw (object)__this_01;
		}
	}

	[Token(Token = "0x170009F3")]
	public override string ClassName
	{
		[Token(Token = "0x60036F8")]
		[Address(RVA = "0x59FF080", Offset = "0x59FE080", VA = "0x59FF080", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$get_ClassName): clean
			return "Icon";
		}
	}

	[Token(Token = "0x170009F4")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60036F9")]
		[Address(RVA = "0x59FF0B0", Offset = "0x59FE0B0", VA = "0x59FF0B0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009F5")]
	public override bool IsStatic
	{
		[Token(Token = "0x60036FA")]
		[Address(RVA = "0x59FF0C0", Offset = "0x59FE0C0", VA = "0x59FF0C0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170009F6")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60036FB")]
		[Address(RVA = "0x59FF0D0", Offset = "0x59FE0D0", VA = "0x59FF0D0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60036F1")]
	[Address(RVA = "0x59FEC20", Offset = "0x59FDC20", VA = "0x59FEC20")]
	public CustomLogicIconBuiltin(Image image)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$.ctor): clean
		base((VisualElement)image);
		this._image = image;
		this._currentIconPath = (String)**(ulong*)(g_data_07556758 + 0xb8);
		return;
	}

	[Token(Token = "0x60036F2")]
	[Address(RVA = "0x59FEC70", Offset = "0x59FDC70", VA = "0x59FEC70")]
	public CustomLogicIconBuiltin SetIcon(string iconPath)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$SetIcon): 1 lines keep C-only constructs
		uint uVar1;
		Image pUVar2;
		bool bVar3;
		Texture value_00;
		String pSVar4;

		bVar3 = String.IsNullOrEmpty(value);
		if (bVar3) {
			pUVar2 = this._image;
			if (pUVar2 == null) {
	label_05afeead: ;
				throw new NullReferenceException();
			}
			pUVar2.image = null;
			this._currentIconPath = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			bVar3 = Util.IsValidResourcePath(value);
			if (bVar3) {
				pSVar4 = ResourcePaths.UI;
				value_00 = (Texture)ResourceManager.LoadAsset(pSVar4, value, true, false);
				bVar3 = ((Object)value_00 != null);
				if (((bVar3) && (value_00 != null)) &&(value_00.klass == (Texture)typeof(Texture2D))) {
					pUVar2 = this._image;
					if (pUVar2 != null) {
						pUVar2.image = value_00;
						this._currentIconPath = value;
						return;
					}
					goto label_05afeead;
				}
				((Object)value_00 != null);
				pSVar4 = String.Concat("Failed to load icon at path: ", value);
				uVar1 = (typeof(Debug)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar4 = String.Concat("Failed to load icon at path: ", value);
				uVar1 = (typeof(Debug)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			Debug.LogWarning((object)pSVar4);
		}
		return;
	}

	[Token(Token = "0x60036F5")]
	[Address(RVA = "0x59FEEE0", Offset = "0x59FDEE0", VA = "0x59FEEE0")]
	public CustomLogicIconBuiltin SetTintColor(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c (CustomLogic.CustomLogicIconBuiltin$$SetTintColor): clean
		Color255 __this_00;
		Image __this_01;
		Color value;

		if ((color != null) &&(__this_00 = color.Value, __this_00 != null)) {
			__this_01 = __this._image;
			value = __this_00.ToColor();
			if (__this_01 != null) {
				__this_01.tintColor = value;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicIconBuiltin.c.

	// CustomLogic.CustomLogicIconBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"IconPath");
		__this.Add((Il2CppObject *)"ScaleMode");
		__this.Add((Il2CppObject *)"SetIcon");
		__this.Add((Il2CppObject *)"SetTintColor");
		CustomLogicIconBuiltin.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicIconBuiltin.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__IconPath_g____getter_2_0(CustomLogicIconBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._currentIconPath;
	}

	// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__IconPath_g____setter_2_1(CustomLogicIconBuiltin __i, object __v)
	{
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SetIcon(value);
		return;
	}

	// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__ScaleMode_g____getter_3_0(CustomLogicIconBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i._image == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__ScaleMode_g____setter_3_1(CustomLogicIconBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ScaleMode = value;
		return;
	}

	// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicIconBuiltin.Bindings.c();
		CustomLogicIconBuiltin.Bindings.c.__9 =(CustomLogicIconBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIcon>b__4_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__SetIcon_b__4_0(CustomLogicIconBuiltin __c, Object[] __a)
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
				__c.SetIcon(value);
				return extraout_RAX;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTintColor>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__SetTintColor_b__5_0(CustomLogicIconBuiltin __c, Object[] __a)
	{
		object obj;
		Color255 __this_00;
		Image __this_01;
		CustomLogicColorBuiltin pCVar1;
		Color value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = pCVar1.Value, __this_00 != null)) {
				__this_01 = __c._image;
				value = __this_00.ToColor();
				if (__this_01 != null) {
					__this_01.tintColor = value;
					return (object)__c;
				}
			}
		}
		throw new NullReferenceException();
	}
}
