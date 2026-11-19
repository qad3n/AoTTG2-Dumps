// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLMethodBinding
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLMethodBinding.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044F")]
internal abstract class CLMethodBinding : ICLMemberBinding
{
	[Token(Token = "0x6001AA8")]
	public abstract object Call(object instance, object[] parameters);

	[Token(Token = "0x6001AA9")]
	[Address(RVA = "0x58A9E40", Offset = "0x58A8E40", VA = "0x58A9E40")]
	protected CLMethodBinding()
	{
		// Lifted from source/cpp/CustomLogic/CLMethodBinding.c (CustomLogic.CLMethodBinding$$.ctor): clean
		base();
		return;
	}
}
[Token(Token = "0x2000450")]
internal class CLMethodBinding<T> : CLMethodBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x40015B4")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object[], object> _function;

	[Token(Token = "0x6001AAA")]
	public CLMethodBinding(Func<T, object[], object> function)
	{
	}

	[Token(Token = "0x6001AAB")]
	public override object Call(object instance, object[] parameters)
	{
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CLMethodBinding.c.

	// CustomLogic.CLMethodBinding<object>$$.ctor: clean
	private void object___ctor(System_Func_T__object____object__o function)
	{
		base();
		this._function = function;
		return;
	}

	// CustomLogic.CLMethodBinding<object>$$Call: 6 lines keep C-only constructs
	private object object__Call(object instance, Object[] parameters)
	{
		System_Func_T__object____object__o pSVar1;
		Il2CppClass klass;
		object pIVar2;

		pSVar1 = this._function;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		klass = method.klass.rgctx_data._2_T;
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
		pIVar2 = (object)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pIVar2,parameters,pSVar1.method);
		return pIVar2;
	}
}
