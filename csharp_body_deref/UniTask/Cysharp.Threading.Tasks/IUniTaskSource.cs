using System;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000039")]
public interface IUniTaskSource : IValueTaskSource
{
	[Token(Token = "0x6000119")]
	new UniTaskStatus GetStatus(short token);

	[Token(Token = "0x600011A")]
	void OnCompleted(Action<object> continuation, object state, short token);

	[Token(Token = "0x600011B")]
	new void GetResult(short token);

	[Token(Token = "0x600011C")]
	UniTaskStatus UnsafeGetStatus();

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x46B08F0", Offset = "0x46B08F0", VA = "0x46B08F0", Slot = "4")]
	private virtual ValueTaskSourceStatus System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetStatus(short token)
	{
		return default(ValueTaskSourceStatus);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x46B0990", Offset = "0x46B0990", VA = "0x46B0990", Slot = "5")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x46B0A30", Offset = "0x46B0A30", VA = "0x46B0A30", Slot = "6")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EOnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
	{
	}
}
[Token(Token = "0x200003A")]
public interface IUniTaskSource<out T> : IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
{
	[Token(Token = "0x6000120")]
	new T GetResult(short token);

	[Token(Token = "0x6000121")]
	new UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000122")]
	new void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000123")]
	private virtual ValueTaskSourceStatus System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EGetStatus(short token)
	{
		return default(ValueTaskSourceStatus);
	}

	[Token(Token = "0x6000124")]
	private virtual T System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EGetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x6000125")]
	private virtual void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_003CT_003E_002EOnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
	{
	}
}
