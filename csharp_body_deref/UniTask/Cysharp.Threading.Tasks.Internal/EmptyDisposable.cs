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

[Token(Token = "0x200024E")]
internal class EmptyDisposable : IDisposable
{
	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0x0")]
	public static EmptyDisposable Instance;

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x4A1F0E0", Offset = "0x4A1F0E0", VA = "0x4A1F0E0")]
	private EmptyDisposable()
	{
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x4A1F0F0", Offset = "0x4A1F0F0", VA = "0x4A1F0F0", Slot = "4")]
	public void Dispose()
	{
	}
}
