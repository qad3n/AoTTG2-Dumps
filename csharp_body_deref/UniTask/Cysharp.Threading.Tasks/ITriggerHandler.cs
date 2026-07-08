using System;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000072")]
public interface ITriggerHandler<T>
{
	[Token(Token = "0x1700002E")]
	ITriggerHandler<T> Prev
	{
		[Token(Token = "0x600018E")]
		get;
		[Token(Token = "0x600018F")]
		set;
	}

	[Token(Token = "0x1700002F")]
	ITriggerHandler<T> Next
	{
		[Token(Token = "0x6000190")]
		get;
		[Token(Token = "0x6000191")]
		set;
	}

	[Token(Token = "0x600018A")]
	void OnNext(T value);

	[Token(Token = "0x600018B")]
	void OnError(Exception ex);

	[Token(Token = "0x600018C")]
	void OnCompleted();

	[Token(Token = "0x600018D")]
	void OnCanceled(CancellationToken cancellationToken);
}
