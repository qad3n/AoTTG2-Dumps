// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BitmapAllocator32
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005CA")]
internal struct BitmapAllocator32
{
	[Token(Token = "0x20005CB")]
	private struct Page
	{
		[Token(Token = "0x4001522")]
		[FieldOffset(Offset = "0x0")]
		public ushort x;

		[Token(Token = "0x4001523")]
		[FieldOffset(Offset = "0x2")]
		public ushort y;

		[Token(Token = "0x4001524")]
		[FieldOffset(Offset = "0x4")]
		public int freeSlots;
	}

	[Token(Token = "0x400151C")]
	public const int kPageWidth = 32;

	[Token(Token = "0x400151D")]
	[FieldOffset(Offset = "0x0")]
	private int m_PageHeight;

	[Token(Token = "0x400151E")]
	[FieldOffset(Offset = "0x8")]
	private List<Page> m_Pages;

	[Token(Token = "0x400151F")]
	[FieldOffset(Offset = "0x10")]
	private List<uint> m_AllocMap;

	[Token(Token = "0x4001520")]
	[FieldOffset(Offset = "0x18")]
	private int m_EntryWidth;

	[Token(Token = "0x4001521")]
	[FieldOffset(Offset = "0x1C")]
	private int m_EntryHeight;

	[Token(Token = "0x17000A9D")]
	public int entryWidth
	{
		[Token(Token = "0x6002B26")]
		[Address(RVA = "0x6BAD5C0", Offset = "0x6BAC5C0", VA = "0x6BAD5C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A9E")]
	public int entryHeight
	{
		[Token(Token = "0x6002B27")]
		[Address(RVA = "0x6BAD5D0", Offset = "0x6BAC5D0", VA = "0x6BAD5D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002B22")]
	[Address(RVA = "0x6BACCE0", Offset = "0x6BABCE0", VA = "0x6BACCE0")]
	public void Construct(int pageHeight, int entryWidth = 1, int entryHeight = 1)
	{
	}

	[Token(Token = "0x6002B23")]
	[Address(RVA = "0x6BACE00", Offset = "0x6BABE00", VA = "0x6BACE00")]
	public void ForceFirstAlloc(ushort firstPageX, ushort firstPageY)
	{
	}

	[Token(Token = "0x6002B24")]
	[Address(RVA = "0x6BACF90", Offset = "0x6BABF90", VA = "0x6BACF90")]
	public BMPAlloc Allocate(BaseShaderInfoStorage storage)
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002B25")]
	[Address(RVA = "0x6BAD490", Offset = "0x6BAC490", VA = "0x6BAD490")]
	public void Free(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002B28")]
	[Address(RVA = "0x6BAD5E0", Offset = "0x6BAC5E0", VA = "0x6BAD5E0")]
	internal void GetAllocPageAtlasLocation(int page, out ushort x, out ushort y)
	{
	}

	[Token(Token = "0x6002B29")]
	[Address(RVA = "0x6BAD430", Offset = "0x6BAC430", VA = "0x6BAD430")]
	private static byte CountTrailingZeroes(uint val)
	{
		return default(byte);
	}
}
