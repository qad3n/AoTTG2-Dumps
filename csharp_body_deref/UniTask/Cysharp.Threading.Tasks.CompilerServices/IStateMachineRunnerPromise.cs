using System;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[Token(Token = "0x200025B")]
internal interface IStateMachineRunnerPromise : IUniTaskSource, IValueTaskSource
{
	[Token(Token = "0x17000085")]
	Action MoveNext
	{
		[Token(Token = "0x6000D70")]
		get;
	}

	[Token(Token = "0x17000086")]
	UniTask Task
	{
		[Token(Token = "0x6000D71")]
		get;
	}

	[Token(Token = "0x6000D72")]
	void SetResult();

	[Token(Token = "0x6000D73")]
	void SetException(Exception exception);
}
[Token(Token = "0x200025C")]
internal interface IStateMachineRunnerPromise<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
{
	[Token(Token = "0x17000087")]
	Action MoveNext
	{
		[Token(Token = "0x6000D74")]
		get;
	}

	[Token(Token = "0x17000088")]
	UniTask<T> Task
	{
		[Token(Token = "0x6000D75")]
		get;
	}

	[Token(Token = "0x6000D76")]
	void SetResult(T result);

	[Token(Token = "0x6000D77")]
	void SetException(Exception exception);
}
