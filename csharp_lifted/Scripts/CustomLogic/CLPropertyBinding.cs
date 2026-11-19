// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLPropertyBinding
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLPropertyBinding.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000451")]
internal abstract class CLPropertyBinding : ICLMemberBinding
{
	[Token(Token = "0x170002DC")]
	public abstract bool IsReadOnly
	{
		[Token(Token = "0x6001AAC")]
		get;
	}

	[Token(Token = "0x6001AAD")]
	public abstract object GetValue(object instance);

	[Token(Token = "0x6001AAE")]
	public abstract void SetValue(object instance, object value);

	[Token(Token = "0x6001AAF")]
	public abstract void SetValueSafe(object instance, object value);

	[Token(Token = "0x6001AB0")]
	[Address(RVA = "0x58A9E50", Offset = "0x58A8E50", VA = "0x58A9E50")]
	protected CLPropertyBinding()
	{
		// Lifted from source/cpp/CustomLogic/CLPropertyBinding.c (CustomLogic.CLPropertyBinding$$.ctor): clean
		base();
		return;
	}
}
[Token(Token = "0x2000452")]
internal class CLPropertyBinding<T> : CLPropertyBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x40015B5")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object> _getter;

	[Token(Token = "0x40015B6")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T, object> _setter;

	[Token(Token = "0x40015B7")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _isReadOnly;

	[Token(Token = "0x170002DD")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6001AB2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001AB1")]
	public CLPropertyBinding(Func<T, object> getter, Action<T, object> setter)
	{
	}

	[Token(Token = "0x6001AB3")]
	public override object GetValue(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001AB4")]
	public override void SetValue(object instance, object value)
	{
	}

	[Token(Token = "0x6001AB5")]
	public override void SetValueSafe(object instance, object value)
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CLPropertyBinding.c.

	// CustomLogic.CLPropertyBinding<object>$$.ctor: clean
	private void object___ctor(System_Func_T__object__o getter, System_Action_T__object__o setter)
	{
		base();
		this._getter = getter;
		this._setter = setter;
		this._isReadOnly = setter == null;
		return;
	}

	// CustomLogic.CLPropertyBinding<object>$$get_IsReadOnly: clean
	private bool object__get_IsReadOnly()
	{
		return this._isReadOnly;
	}

	// CustomLogic.CLPropertyBinding<object>$$GetValue: 6 lines keep C-only constructs
	private object object__GetValue(object instance)
	{
		System_Func_T__object__o pSVar1;
		Il2CppClass klass;
		object pIVar2;

		pSVar1 = this._getter;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		klass = method.klass.rgctx_data._3_T;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (instance == null) {
			pIVar2 = null;
		}
		else {
			pIVar2 = il2cpp_vm_Object_IsInst(instance, klass);
			if (pIVar2 == null) {
				throw new InvalidCastException();
			}
		}
		pIVar2 = (object)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pIVar2,pSVar1.method);
		return pIVar2;
	}

	// CustomLogic.CLPropertyBinding<object>$$SetValue: 6 lines keep C-only constructs
	private void object__SetValue(object instance, object value)
	{
		System_Action_T__object__o pSVar1;
		Il2CppClass klass;
		object pIVar2;

		pSVar1 = this._setter;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		klass = method.klass.rgctx_data._3_T;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (instance == null) {
			pIVar2 = null;
		}
		else {
			pIVar2 = il2cpp_vm_Object_IsInst(instance, klass);
			if (pIVar2 == null) {
				throw new InvalidCastException();
			}
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pIVar2,value,pSVar1.method);
		return;
	}

	// CustomLogic.CLPropertyBinding<object>$$SetValueSafe: 6 lines keep C-only constructs
	private void object__SetValueSafe(object instance, object value)
	{
		System_Action_T__object__o pSVar1;
		Il2CppClass klass;
		object pIVar2;

		if (this._isReadOnly != false) {
			return;
		}
		pSVar1 = this._setter;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		klass = method.klass.rgctx_data._3_T;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (instance == null) {
			pIVar2 = null;
		}
		else {
			pIVar2 = il2cpp_vm_Object_IsInst(instance, klass);
			if (pIVar2 == null) {
				throw new InvalidCastException();
			}
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pIVar2,value,pSVar1.method);
		return;
	}
}
