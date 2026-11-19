// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.DynamicProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Dynamic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000AB")]
internal class DynamicProxy<T> where T : notnull
{
	[Token(Token = "0x60005A4")]
	public virtual IEnumerable<string> GetDynamicMemberNames(T instance)
	{
		return null;
	}

	[Token(Token = "0x60005A5")]
	public virtual bool TryBinaryOperation(T instance, BinaryOperationBinder binder, object arg, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A6")]
	public virtual bool TryConvert(T instance, ConvertBinder binder, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A7")]
	public virtual bool TryCreateInstance(T instance, CreateInstanceBinder binder, object[] args, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A8")]
	public virtual bool TryDeleteIndex(T instance, DeleteIndexBinder binder, object[] indexes)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A9")]
	public virtual bool TryDeleteMember(T instance, DeleteMemberBinder binder)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AA")]
	public virtual bool TryGetIndex(T instance, GetIndexBinder binder, object[] indexes, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AB")]
	public virtual bool TryGetMember(T instance, GetMemberBinder binder, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AC")]
	public virtual bool TryInvoke(T instance, InvokeBinder binder, object[] args, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AD")]
	public virtual bool TryInvokeMember(T instance, InvokeMemberBinder binder, object[] args, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AE")]
	public virtual bool TrySetIndex(T instance, SetIndexBinder binder, object[] indexes, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AF")]
	public virtual bool TrySetMember(T instance, SetMemberBinder binder, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B0")]
	public virtual bool TryUnaryOperation(T instance, UnaryOperationBinder binder, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B1")]
	public DynamicProxy()
	{
	}
}
