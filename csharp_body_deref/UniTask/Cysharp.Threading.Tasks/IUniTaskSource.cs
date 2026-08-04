// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IUniTaskSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200003A")]
public interface IUniTaskSource : IValueTaskSource
{
	[Token(Token = "0x600011F")]
	new UniTaskStatus GetStatus(short token);

	[Token(Token = "0x6000120")]
	void OnCompleted(Action<object> continuation, object state, short token);

	[Token(Token = "0x6000121")]
	new void GetResult(short token);

	[Token(Token = "0x6000122")]
	UniTaskStatus UnsafeGetStatus();

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x49D63F0", Offset = "0x49D63F0", VA = "0x49D63F0", Slot = "4")]
	private virtual ValueTaskSourceStatus System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetStatus(short token)
	{
		return default(ValueTaskSourceStatus);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x49D6490", Offset = "0x49D6490", VA = "0x49D6490", Slot = "5")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x49D6530", Offset = "0x49D6530", VA = "0x49D6530", Slot = "6")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EOnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
	{
	}
}
[Token(Token = "0x200003B")]
public interface IUniTaskSource<out T> : IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
{
	[Token(Token = "0x6000126")]
	new T GetResult(short token);

	[Token(Token = "0x6000127")]
	new UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000128")]
	new void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000129")]
	private virtual ValueTaskSourceStatus System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EGetStatus(short token)
	{
		return default(ValueTaskSourceStatus);
	}

	[Token(Token = "0x600012A")]
	private virtual T System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EGetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x600012B")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EOnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
	{
	}
}
