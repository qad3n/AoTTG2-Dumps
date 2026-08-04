// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.OverrideLayer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001B9")]
public struct OverrideLayer<T> : IDisposable
{
	[Token(Token = "0x170001D4")]
	public readonly OverrideStack<T> stack
	{
		[Token(Token = "0x6001077")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001078")]
	internal OverrideLayer(OverrideStack<T> stack, T item)
	{
	}

	[Token(Token = "0x6001079")]
	public void Dispose()
	{
	}
}
