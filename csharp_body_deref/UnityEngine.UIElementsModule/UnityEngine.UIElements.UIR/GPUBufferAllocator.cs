// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GPUBufferAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000587")]
internal class GPUBufferAllocator
{
	[Token(Token = "0x4001326")]
	[FieldOffset(Offset = "0x10")]
	private BestFitAllocator m_Low;

	[Token(Token = "0x4001327")]
	[FieldOffset(Offset = "0x18")]
	private BestFitAllocator m_High;

	[Token(Token = "0x17000A56")]
	public bool isEmpty
	{
		[Token(Token = "0x600296C")]
		[Address(RVA = "0x3182C50", Offset = "0x3181250", VA = "0x183182C50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002969")]
	[Address(RVA = "0x3182BA0", Offset = "0x31811A0", VA = "0x183182BA0")]
	public GPUBufferAllocator(uint maxSize)
	{
	}

	[Token(Token = "0x600296A")]
	[Address(RVA = "0x3182990", Offset = "0x3180F90", VA = "0x183182990")]
	public Alloc Allocate(uint size, bool shortLived)
	{
		return default(Alloc);
	}

	[Token(Token = "0x600296B")]
	[Address(RVA = "0x3182B10", Offset = "0x3181110", VA = "0x183182B10")]
	public void Free(Alloc alloc)
	{
	}

	[Token(Token = "0x600296D")]
	[Address(RVA = "0x3182B70", Offset = "0x3181170", VA = "0x183182B70")]
	private bool HighLowCollide()
	{
		return default(bool);
	}
}
