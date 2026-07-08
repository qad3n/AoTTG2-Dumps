using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004D5")]
internal struct BitmapAllocator32
{
	[Token(Token = "0x20004D6")]
	private struct Page
	{
		[Token(Token = "0x4000FB7")]
		[FieldOffset(Offset = "0x0")]
		public ushort x;

		[Token(Token = "0x4000FB8")]
		[FieldOffset(Offset = "0x2")]
		public ushort y;

		[Token(Token = "0x4000FB9")]
		[FieldOffset(Offset = "0x4")]
		public int freeSlots;
	}

	[Token(Token = "0x4000FB2")]
	[FieldOffset(Offset = "0x0")]
	private int m_PageHeight;

	[Token(Token = "0x4000FB3")]
	[FieldOffset(Offset = "0x8")]
	private List<Page> m_Pages;

	[Token(Token = "0x4000FB4")]
	[FieldOffset(Offset = "0x10")]
	private List<uint> m_AllocMap;

	[Token(Token = "0x4000FB5")]
	[FieldOffset(Offset = "0x18")]
	private int m_EntryWidth;

	[Token(Token = "0x4000FB6")]
	[FieldOffset(Offset = "0x1C")]
	private int m_EntryHeight;

	[Token(Token = "0x1700078D")]
	public int entryWidth
	{
		[Token(Token = "0x6001DF1")]
		[Address(RVA = "0x4C817B0", Offset = "0x4C817B0", VA = "0x4C817B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700078E")]
	public int entryHeight
	{
		[Token(Token = "0x6001DF2")]
		[Address(RVA = "0x4C817C0", Offset = "0x4C817C0", VA = "0x4C817C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001DED")]
	[Address(RVA = "0x4C80E70", Offset = "0x4C80E70", VA = "0x4C80E70")]
	public void Construct(int pageHeight, int entryWidth = 1, int entryHeight = 1)
	{
	}

	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x4C80F90", Offset = "0x4C80F90", VA = "0x4C80F90")]
	public void ForceFirstAlloc(ushort firstPageX, ushort firstPageY)
	{
	}

	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x4C81120", Offset = "0x4C81120", VA = "0x4C81120")]
	public BMPAlloc Allocate(BaseShaderInfoStorage storage)
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x4C81670", Offset = "0x4C81670", VA = "0x4C81670")]
	public void Free(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6001DF3")]
	[Address(RVA = "0x4C817D0", Offset = "0x4C817D0", VA = "0x4C817D0")]
	internal void GetAllocPageAtlasLocation(int page, out ushort x, out ushort y)
	{
	}

	[Token(Token = "0x6001DF4")]
	[Address(RVA = "0x4C81610", Offset = "0x4C81610", VA = "0x4C81610")]
	private static byte CountTrailingZeroes(uint val)
	{
		return default(byte);
	}
}
