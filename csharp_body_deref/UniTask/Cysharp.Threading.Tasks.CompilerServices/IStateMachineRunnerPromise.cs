// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[Token(Token = "0x200025E")]
internal interface IStateMachineRunnerPromise : IUniTaskSource, IValueTaskSource
{
	[Token(Token = "0x17000087")]
	Action MoveNext
	{
		[Token(Token = "0x6000D94")]
		get;
	}

	[Token(Token = "0x17000088")]
	UniTask Task
	{
		[Token(Token = "0x6000D95")]
		get;
	}

	[Token(Token = "0x6000D96")]
	void SetResult();

	[Token(Token = "0x6000D97")]
	void SetException(Exception exception);
}
[Token(Token = "0x200025F")]
internal interface IStateMachineRunnerPromise<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
{
	[Token(Token = "0x17000089")]
	Action MoveNext
	{
		[Token(Token = "0x6000D98")]
		get;
	}

	[Token(Token = "0x1700008A")]
	UniTask<T> Task
	{
		[Token(Token = "0x6000D99")]
		get;
	}

	[Token(Token = "0x6000D9A")]
	void SetResult(T result);

	[Token(Token = "0x6000D9B")]
	void SetException(Exception exception);
}
