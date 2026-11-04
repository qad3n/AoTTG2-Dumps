// ==================== AoTTG2 cross-reference ====================
// Type: Mono.SafeGPtrArrayHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000045")]
internal struct SafeGPtrArrayHandle : IDisposable
{
	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x0")]
	private Mono.RuntimeGPtrArrayHandle handle;

	[Token(Token = "0x1700000D")]
	internal int Length
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x194C6E0", Offset = "0x194ACE0", VA = "0x18194C6E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000E")]
	internal IntPtr this[int i]
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x194C6D0", Offset = "0x194ACD0", VA = "0x18194C6D0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x194C500", Offset = "0x194AB00", VA = "0x18194C500")]
	internal SafeGPtrArrayHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x194C620", Offset = "0x194AC20", VA = "0x18194C620", Slot = "4")]
	public void Dispose()
	{
	}
}
