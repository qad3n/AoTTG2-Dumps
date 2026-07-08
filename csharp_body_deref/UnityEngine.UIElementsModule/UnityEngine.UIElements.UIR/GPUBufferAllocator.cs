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
		[Address(RVA = "0x4C8AA70", Offset = "0x4C8AA70", VA = "0x4C8AA70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E67")]
	[Address(RVA = "0x4C8A790", Offset = "0x4C8A790", VA = "0x4C8A790")]
	public GPUBufferAllocator(uint maxSize)
	{
	}

	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x4C8A830", Offset = "0x4C8A830", VA = "0x4C8A830")]
	public Alloc Allocate(uint size, bool shortLived)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x4C8AA00", Offset = "0x4C8AA00", VA = "0x4C8AA00")]
	public void Free(Alloc alloc)
	{
	}

	[Token(Token = "0x6001E6B")]
	[Address(RVA = "0x4C8A9D0", Offset = "0x4C8A9D0", VA = "0x4C8A9D0")]
	private bool HighLowCollide()
	{
		return default(bool);
	}
}
