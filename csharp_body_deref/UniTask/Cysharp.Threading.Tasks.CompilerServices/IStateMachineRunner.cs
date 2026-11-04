// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[Token(Token = "0x200025D")]
internal interface IStateMachineRunner
{
	[Token(Token = "0x17000085")]
	Action MoveNext
	{
		[Token(Token = "0x6000D91")]
		get;
	}

	[Token(Token = "0x17000086")]
	Action ReturnAction
	{
		[Token(Token = "0x6000D93")]
		get;
	}

	[Token(Token = "0x6000D92")]
	void Return();
}
