// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.EmptyDisposable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000251")]
internal class EmptyDisposable : IDisposable
{
	[Token(Token = "0x40006B0")]
	[FieldOffset(Offset = "0x0")]
	public static EmptyDisposable Instance;

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x630C740", Offset = "0x630B740", VA = "0x630C740")]
	private EmptyDisposable()
	{
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x630C750", Offset = "0x630B750", VA = "0x630C750", Slot = "4")]
	public void Dispose()
	{
	}
}
