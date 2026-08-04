// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GPUBufferAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004EB")]
internal class GPUBufferAllocator
{
	[Token(Token = "0x4001042")]
	[FieldOffset(Offset = "0x10")]
	private BestFitAllocator m_Low;

	[Token(Token = "0x4001043")]
	[FieldOffset(Offset = "0x18")]
	private BestFitAllocator m_High;

	[Token(Token = "0x1700079C")]
	public bool isEmpty
	{
		[Token(Token = "0x6001E6A")]
		[Address(RVA = "0x4FB23A0", Offset = "0x4FB23A0", VA = "0x4FB23A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E67")]
	[Address(RVA = "0x4FB20C0", Offset = "0x4FB20C0", VA = "0x4FB20C0")]
	public GPUBufferAllocator(uint maxSize)
	{
	}

	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x4FB2160", Offset = "0x4FB2160", VA = "0x4FB2160")]
	public Alloc Allocate(uint size, bool shortLived)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x4FB2330", Offset = "0x4FB2330", VA = "0x4FB2330")]
	public void Free(Alloc alloc)
	{
	}

	[Token(Token = "0x6001E6B")]
	[Address(RVA = "0x4FB2300", Offset = "0x4FB2300", VA = "0x4FB2300")]
	private bool HighLowCollide()
	{
		return default(bool);
	}
}
