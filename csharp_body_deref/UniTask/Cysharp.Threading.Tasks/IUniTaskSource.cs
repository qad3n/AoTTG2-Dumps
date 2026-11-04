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

[Token(Token = "0x2000037")]
public interface IUniTaskSource : IValueTaskSource
{
	[Token(Token = "0x6000117")]
	new UniTaskStatus GetStatus(short token);

	[Token(Token = "0x6000118")]
	void OnCompleted(Action<object> continuation, object state, short token);

	[Token(Token = "0x6000119")]
	new void GetResult(short token);

	[Token(Token = "0x600011A")]
	UniTaskStatus UnsafeGetStatus();

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x290E070", Offset = "0x290C670", VA = "0x18290E070", Slot = "4")]
	private virtual ValueTaskSourceStatus System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetStatus(short token)
	{
		return default(ValueTaskSourceStatus);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x290E020", Offset = "0x290C620", VA = "0x18290E020", Slot = "5")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x290E0C0", Offset = "0x290C6C0", VA = "0x18290E0C0", Slot = "6")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EOnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
	{
	}
}
[Token(Token = "0x2000038")]
public interface IUniTaskSource<out T> : IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
{
	[Token(Token = "0x600011E")]
	new T GetResult(short token);

	[Token(Token = "0x600011F")]
	new UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000120")]
	new void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000121")]
	private virtual ValueTaskSourceStatus System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EGetStatus(short token)
	{
		return default(ValueTaskSourceStatus);
	}

	[Token(Token = "0x6000122")]
	private virtual T System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EGetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x6000123")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EOnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
	{
	}
}
