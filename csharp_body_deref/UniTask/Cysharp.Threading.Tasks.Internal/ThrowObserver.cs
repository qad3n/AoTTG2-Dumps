using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000254")]
internal class ThrowObserver<T> : IObserver<T>
{
	[Token(Token = "0x40006AD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ThrowObserver<T> Instance;

	[Token(Token = "0x6000D44")]
	private ThrowObserver()
	{
	}

	[Token(Token = "0x6000D45")]
	public void OnCompleted()
	{
	}

	[Token(Token = "0x6000D46")]
	public void OnError(Exception error)
	{
	}

	[Token(Token = "0x6000D47")]
	public void OnNext(T value)
	{
	}
}
