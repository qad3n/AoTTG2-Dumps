using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[Token(Token = "0x200025A")]
internal interface IStateMachineRunner
{
	[Token(Token = "0x17000083")]
	Action MoveNext
	{
		[Token(Token = "0x6000D6D")]
		get;
	}

	[Token(Token = "0x17000084")]
	Action ReturnAction
	{
		[Token(Token = "0x6000D6F")]
		get;
	}

	[Token(Token = "0x6000D6E")]
	void Return();
}
