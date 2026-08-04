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

[Token(Token = "0x2000027")]
internal struct SafeGPtrArrayHandle : IDisposable
{
	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x0")]
	private Mono.RuntimeGPtrArrayHandle handle;

	[Token(Token = "0x1700000D")]
	internal int Length
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x3ACE260", Offset = "0x3ACE260", VA = "0x3ACE260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000E")]
	internal IntPtr this[int i]
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x3ACE280", Offset = "0x3ACE280", VA = "0x3ACE280")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3ACE220", Offset = "0x3ACE220", VA = "0x3ACE220")]
	internal SafeGPtrArrayHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3ACE240", Offset = "0x3ACE240", VA = "0x3ACE240", Slot = "4")]
	public void Dispose()
	{
	}
}
