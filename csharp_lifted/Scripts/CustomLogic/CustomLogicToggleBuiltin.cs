// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicToggleBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicToggleBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000606")]
[CompilerGenerated]
internal class CustomLogicToggleBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000607")]
	public new static class Factory
	{
		[Token(Token = "0x6003808")]
		[Address(RVA = "0x5A08DB0", Offset = "0x5A07DB0", VA = "0x5A08DB0")]
		public static CustomLogicToggleBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicToggleBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x2000608")]
	public new static class Bindings
	{
		[Token(Token = "0x40019A9")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003809")]
		[Address(RVA = "0x5A08E40", Offset = "0x5A07E40", VA = "0x5A08E40")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin.Bindings$$CreateMemberBinding): 11 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicToggleBuiltin> pCVar2;
			CLMethodBinding<CustomLogicToggleBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Label");
			if (bVar1) {
				if ((typeof(CustomLogicToggleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicToggleBuiltin.Bindings)) ;
					pCVar2 = CustomLogicToggleBuiltin.Bindings.__CreatePropertyBinding__Label();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicToggleBuiltin.Bindings.__CreatePropertyBinding__Label();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Text");
			if (bVar1) {
				if ((typeof(CustomLogicToggleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicToggleBuiltin.Bindings)) ;
					pCVar2 = CustomLogicToggleBuiltin.Bindings.__CreatePropertyBinding__Text();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicToggleBuiltin.Bindings.__CreatePropertyBinding__Text();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Value");
			if (bVar1) {
				if ((typeof(CustomLogicToggleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicToggleBuiltin.Bindings)) ;
					pCVar2 = CustomLogicToggleBuiltin.Bindings.__CreatePropertyBinding__Value();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicToggleBuiltin.Bindings.__CreatePropertyBinding__Value();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "OnValueChanged");
			if (bVar1) {
				if ((typeof(CustomLogicToggleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicToggleBuiltin.Bindings)) ;
				}
				pCVar3 = CustomLogicToggleBuiltin.Bindings.__CreateMethodBinding__OnValueChanged();
				return (ICLMemberBinding)pCVar3;
			}
			bVar1 = (name == "SetValueWithoutNotify");
			if (bVar1) {
				if ((typeof(CustomLogicToggleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicToggleBuiltin.Bindings)) ;
				}
				pCVar3 = CustomLogicToggleBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
				return (ICLMemberBinding)pCVar3;
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicToggleBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600380A")]
		[Address(RVA = "0x5A09070", Offset = "0x5A08070", VA = "0x5A09070")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Label()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Label): 4 lines keep C-only constructs
			Func<CustomLogicToggleBuiltin, object> __this;
			Action<CustomLogicToggleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicToggleBuiltin> __this_01;

			__this = new Func<CustomLogicToggleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicToggleBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicToggleBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600380B")]
		[Address(RVA = "0x5A09150", Offset = "0x5A08150", VA = "0x5A09150")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Text()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Text): 4 lines keep C-only constructs
			Func<CustomLogicToggleBuiltin, object> __this;
			Action<CustomLogicToggleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicToggleBuiltin> __this_01;

			__this = new Func<CustomLogicToggleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_3_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicToggleBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicToggleBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600380C")]
		[Address(RVA = "0x5A09230", Offset = "0x5A08230", VA = "0x5A09230")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Value()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Value): 4 lines keep C-only constructs
			Func<CustomLogicToggleBuiltin, object> __this;
			Action<CustomLogicToggleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicToggleBuiltin> __this_01;

			__this = new Func<CustomLogicToggleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_4_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicToggleBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicToggleBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600380D")]
		[Address(RVA = "0x5A09310", Offset = "0x5A08310", VA = "0x5A09310")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicToggleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicToggleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicToggleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ff7 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicToggleBuiltin>)) ;
				Il2CppMethodInitialized_07546ff7 = true;
				uVar1 = (typeof(CustomLogicToggleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicToggleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicToggleBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicToggleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicToggleBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicToggleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicToggleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicToggleBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__5_0);
				pCVar2 = typeof(CustomLogicToggleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicToggleBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600380E")]
		[Address(RVA = "0x5A09450", Offset = "0x5A08450", VA = "0x5A09450")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicToggleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicToggleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicToggleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ff8 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicToggleBuiltin>)) ;
				Il2CppMethodInitialized_07546ff8 = true;
				uVar1 = (typeof(CustomLogicToggleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicToggleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicToggleBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicToggleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicToggleBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicToggleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicToggleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicToggleBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b);
				pCVar2 = typeof(CustomLogicToggleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicToggleBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40019A7")]
	[FieldOffset(Offset = "0x60")]
	private readonly Toggle _toggle;

	[Token(Token = "0x40019A8")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x17000A29")]
	public string Label
	{
		[Token(Token = "0x60037FB")]
		[Address(RVA = "0x5A08B80", Offset = "0x5A07B80", VA = "0x5A08B80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$get_Label): clean
			Toggle __this_00;
			String pSVar1;

			__this_00 = this._toggle;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pSVar1;
		}
		[Token(Token = "0x60037FC")]
		[Address(RVA = "0x5A08BC0", Offset = "0x5A07BC0", VA = "0x5A08BC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$set_Label): clean
			Toggle __this_00;

			__this_00 = this._toggle;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.label = value;
			return;
		}
	}

	[Token(Token = "0x17000A2A")]
	public string Text
	{
		[Token(Token = "0x60037FD")]
		[Address(RVA = "0x5A08C10", Offset = "0x5A07C10", VA = "0x5A08C10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$get_Text): clean
			BaseBoolField __this_00;
			String pSVar1;

			__this_00 = (BaseBoolField)this._toggle;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pSVar1;
		}
		[Token(Token = "0x60037FE")]
		[Address(RVA = "0x5A08C30", Offset = "0x5A07C30", VA = "0x5A08C30")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$set_Text): clean
			BaseBoolField __this_00;

			__this_00 = (BaseBoolField)this._toggle;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.text = value;
			return;
		}
	}

	[Token(Token = "0x17000A2B")]
	public bool Value
	{
		[Token(Token = "0x60037FF")]
		[Address(RVA = "0x5A08C50", Offset = "0x5A07C50", VA = "0x5A08C50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$get_Value): 3 lines keep C-only constructs
			Toggle pUVar1;
			Il2CppMethodPointer vtableDispatch;
			byte uVar2;
			ulong in_RDX;

			pUVar1 = this._toggle;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			vtableDispatch = (pUVar1.klass.vtable)._148_get_value.methodPtr;
			uVar2 = (*vtableDispatch)(pUVar1,(pUVar1.klass.vtable)._148_get_value.method,in_RDX,vtableDispatch);
			return (bool)uVar2;
		}
		[Token(Token = "0x6003800")]
		[Address(RVA = "0x5A08C80", Offset = "0x5A07C80", VA = "0x5A08C80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$set_Value): 2 lines keep C-only constructs
			Toggle pUVar1;
			Il2CppMethodPointer vtableDispatch;

			pUVar1 = this._toggle;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			vtableDispatch = (pUVar1.klass.vtable)._149_set_value.methodPtr;
			(*vtableDispatch)(pUVar1,(ulong)value,(pUVar1.klass.vtable)._149_set_value.method,vtableDispatch);
			return;
		}
	}

	[Token(Token = "0x17000A2C")]
	public override string ClassName
	{
		[Token(Token = "0x6003803")]
		[Address(RVA = "0x5A08D00", Offset = "0x5A07D00", VA = "0x5A08D00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$get_ClassName): clean
			return "Toggle";
		}
	}

	[Token(Token = "0x17000A2D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003804")]
		[Address(RVA = "0x5A08D30", Offset = "0x5A07D30", VA = "0x5A08D30", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A2E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003805")]
		[Address(RVA = "0x5A08D40", Offset = "0x5A07D40", VA = "0x5A08D40", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000A2F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003806")]
		[Address(RVA = "0x5A08D50", Offset = "0x5A07D50", VA = "0x5A08D50", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60037F9")]
	[Address(RVA = "0x5A089B0", Offset = "0x5A079B0", VA = "0x5A089B0")]
	public CustomLogicToggleBuiltin(Toggle toggle)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$.ctor): 2 lines keep C-only constructs
		Toggle control;
		EventCallback<TEventType> __this_00;

		base((VisualElement)toggle);
		this._toggle = toggle;
		control = this._toggle;
		__this_00 = new EventCallback<ChangeEvent<bool>>((object)this, (intptr_t)MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0);
		INotifyValueChangedExtensions.RegisterValueChangedCallback<bool>((INotifyValueChanged<T>)control, (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o)__this_00);
		return;
	}

	[Token(Token = "0x60037FA")]
	[Address(RVA = "0x5A08A60", Offset = "0x5A07A60", VA = "0x5A08A60")]
	private void OnValueChanged(bool value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged): 1 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		Object[] parameterValues;
		object pIVar1;
		object pIVar2;
		UserMethod userMethod;
		byte local_29;

		userMethod = this._valueChangedEvent;
		if (userMethod == null) {
			return;
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			userMethod = this._valueChangedEvent;
		}
		__this_00 = CustomLogicManager.Evaluator;
		parameterValues = (Object[])new object[1];
		local_29 = value;
		pIVar1 = (object)local_29;
		if (parameterValues != null) {
			if ((pIVar1 != null) &&(pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = pIVar1;
			if (__this_00 != null) {
				__this_00.EvaluateMethod(userMethod, parameterValues);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003801")]
	[Address(RVA = "0x5A08CB0", Offset = "0x5A07CB0", VA = "0x5A08CB0")]
	public CustomLogicToggleBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged): clean
		__this._valueChangedEvent = valueChangedEvent;
		return __this;
	}

	[Token(Token = "0x6003802")]
	[Address(RVA = "0x5A08CD0", Offset = "0x5A07CD0", VA = "0x5A08CD0")]
	public void SetValueWithoutNotify(bool value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c (CustomLogic.CustomLogicToggleBuiltin$$SetValueWithoutNotify): clean
		Toggle pUVar1;

		pUVar1 = this._toggle;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.SetValueWithoutNotify(value);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicToggleBuiltin.c.

	// CustomLogic.CustomLogicToggleBuiltin$$<.ctor>b__2_0: clean
	private void ctor_b__2_0(ChangeEvent<bool> evt)
	{


		if (evt == null) {
			throw new NullReferenceException();
		}
		this.OnValueChanged(evt._newValue_k__BackingField);
		return;
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Label");
		__this.Add((Il2CppObject *)"Text");
		__this.Add((Il2CppObject *)"Value");
		__this.Add((Il2CppObject *)"OnValueChanged");
		__this.Add((Il2CppObject *)"SetValueWithoutNotify");
		CustomLogicToggleBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Label_g____getter_2_0(CustomLogicToggleBuiltin __i)
	{
		Toggle __this;
		String pSVar1;

		if (__i != null) {
			__this = __i._toggle;
			if (__this != null) {
				pSVar1 = __this.label;
				return (object)pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Label_g____setter_2_1(CustomLogicToggleBuiltin __i, object __v)
	{
		Toggle __this;
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i != null) {
			__this = __i._toggle;
			if (__this != null) {
				__this.label = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Text_g____getter_3_0(CustomLogicToggleBuiltin __i)
	{
		BaseBoolField __this;
		String pSVar1;

		if ((__i == null) ||(__this = (BaseBoolField)__i._toggle, __this == null)) {
			throw new NullReferenceException();
		}
		pSVar1 = __this.text;
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Text_g____setter_3_1(CustomLogicToggleBuiltin __i, object __v)
	{
		BaseBoolField __this;
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(__this = (BaseBoolField)__i._toggle, __this == null)) {
			throw new NullReferenceException();
		}
		__this.text = value;
		return;
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|4_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Value_g____getter_4_0(CustomLogicToggleBuiltin __i)
	{
		Toggle pUVar1;
		byte uVar2;
		ulong in_RAX;
		object pIVar3;
		ulong uStack_8;

		if ((__i == null) ||(pUVar1 = __i._toggle, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		uVar2 = pUVar1.get_value();
		uStack_8 = CONCAT17(uVar2, (undefined7)uStack_8);
		pIVar3 = (object)(((long)&uStack_8 + 7));
		return pIVar3;
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|4_1: 3 lines keep C-only constructs
	private static void Bindings____CreatePropertyBinding__Value_g____setter_4_1(CustomLogicToggleBuiltin __i, object __v)
	{
		Toggle pUVar1;
		Toggle pUVar2;
		Il2CppMethodPointer vtableDispatch;
		bool bVar3;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(pUVar1 = __i._toggle, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar2 = pUVar1.klass;
		vtableDispatch = (pUVar2.vtable)._149_set_value.methodPtr;
		(*vtableDispatch)(pUVar1,(ulong)bVar3,(pUVar2.vtable)._149_set_value.method,pUVar2,vtableDispatch);
		return;
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicToggleBuiltin.Bindings.c();
		CustomLogicToggleBuiltin.Bindings.c.__9 =(CustomLogicToggleBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__OnValueChanged_b__5_0(CustomLogicToggleBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				__c._valueChangedEvent = pCVar1;
				return (object)__c;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__SetValueWithoutNotify_b__6_0(CustomLogicToggleBuiltin __c, Object[] __a)
	{
		object obj;
		Toggle pUVar1;
		bool bVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			bVar2 = CustomLogicEvaluator.ConvertTo<bool>(obj);
			if ((__c != null) &&(pUVar1 = __c._toggle, pUVar1 != null)) {
				pUVar1.SetValueWithoutNotify(bVar2);
				return null;
			}
		}
		throw new NullReferenceException();
	}
}
