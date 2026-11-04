// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BitmapAllocator32
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E6")]
internal struct BitmapAllocator32
{
	[Token(Token = "0x20005E7")]
	private struct Page
	{
		[Token(Token = "0x40015F9")]
		[FieldOffset(Offset = "0x0")]
		public ushort x;

		[Token(Token = "0x40015FA")]
		[FieldOffset(Offset = "0x2")]
		public ushort y;

		[Token(Token = "0x40015FB")]
		[FieldOffset(Offset = "0x4")]
		public int freeSlots;
	}

	[Token(Token = "0x40015F3")]
	public const int kPageWidth = 32;

	[Token(Token = "0x40015F4")]
	[FieldOffset(Offset = "0x0")]
	private int m_PageHeight;

	[Token(Token = "0x40015F5")]
	[FieldOffset(Offset = "0x8")]
	private List<Page> m_Pages;

	[Token(Token = "0x40015F6")]
	[FieldOffset(Offset = "0x10")]
	private List<uint> m_AllocMap;

	[Token(Token = "0x40015F7")]
	[FieldOffset(Offset = "0x18")]
	private int m_EntryWidth;

	[Token(Token = "0x40015F8")]
	[FieldOffset(Offset = "0x1C")]
	private int m_EntryHeight;

	[Token(Token = "0x17000AAB")]
	public int entryWidth
	{
		[Token(Token = "0x6002BA1")]
		[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AAC")]
	public int entryHeight
	{
		[Token(Token = "0x6002BA2")]
		[Address(RVA = "0xAD35F0", Offset = "0xAD1BF0", VA = "0x180AD35F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002B9D")]
	[Address(RVA = "0x31A28E0", Offset = "0x31A0EE0", VA = "0x1831A28E0")]
	public void Construct(int pageHeight, int entryWidth = 1, int entryHeight = 1)
	{
	}

	[Token(Token = "0x6002B9E")]
	[Address(RVA = "0x31A2A90", Offset = "0x31A1090", VA = "0x1831A2A90")]
	public void ForceFirstAlloc(ushort firstPageX, ushort firstPageY)
	{
	}

	[Token(Token = "0x6002B9F")]
	[Address(RVA = "0x31A2490", Offset = "0x31A0A90", VA = "0x1831A2490")]
	public BMPAlloc Allocate(BaseShaderInfoStorage storage)
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002BA0")]
	[Address(RVA = "0x31A2C40", Offset = "0x31A1240", VA = "0x1831A2C40")]
	public void Free(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002BA3")]
	[Address(RVA = "0x31A2D80", Offset = "0x31A1380", VA = "0x1831A2D80")]
	internal void GetAllocPageAtlasLocation(int page, out ushort x, out ushort y)
	{
	}

	[Token(Token = "0x6002BA4")]
	[Address(RVA = "0x31A2A00", Offset = "0x31A1000", VA = "0x1831A2A00")]
	private static byte CountTrailingZeroes(uint val)
	{
		return default(byte);
	}
}
