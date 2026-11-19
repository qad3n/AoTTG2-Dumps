// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GPUBufferAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E1")]
internal class GPUBufferAllocator
{
	[Token(Token = "0x40015CF")]
	[FieldOffset(Offset = "0x10")]
	private BestFitAllocator m_Low;

	[Token(Token = "0x40015D0")]
	[FieldOffset(Offset = "0x18")]
	private BestFitAllocator m_High;

	[Token(Token = "0x17000AAC")]
	public bool isEmpty
	{
		[Token(Token = "0x6002BA6")]
		[Address(RVA = "0x6BBABB0", Offset = "0x6BB9BB0", VA = "0x6BBABB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002BA3")]
	[Address(RVA = "0x6BBAAE0", Offset = "0x6BB9AE0", VA = "0x6BBAAE0")]
	public GPUBufferAllocator(uint maxSize)
	{
	}

	[Token(Token = "0x6002BA4")]
	[Address(RVA = "0x6BB4570", Offset = "0x6BB3570", VA = "0x6BB4570")]
	public Alloc Allocate(uint size, bool shortLived)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6002BA5")]
	[Address(RVA = "0x6BB46E0", Offset = "0x6BB36E0", VA = "0x6BB46E0")]
	public void Free(Alloc alloc)
	{
	}

	[Token(Token = "0x6002BA7")]
	[Address(RVA = "0x6BBAB80", Offset = "0x6BB9B80", VA = "0x6BBAB80")]
	private bool HighLowCollide()
	{
		return default(bool);
	}
}
