// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextBackingContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000054")]
internal struct TextBackingContainer
{
	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x0")]
	private uint[] m_Array;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x8")]
	private int m_Count;

	[Token(Token = "0x1700006F")]
	public int Capacity
	{
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x128C570", Offset = "0x128AB70", VA = "0x18128C570")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000070")]
	public int Count
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0xA50840", Offset = "0xA4EE40", VA = "0x180A50840")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public uint this[int index]
	{
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x2D47AD0", Offset = "0x2D460D0", VA = "0x182D47AD0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x3045810", Offset = "0x3043E10", VA = "0x183045810")]
		set
		{
		}
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x30457B0", Offset = "0x3043DB0", VA = "0x1830457B0")]
	public TextBackingContainer(int size)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3045740", Offset = "0x3043D40", VA = "0x183045740")]
	public void Resize(int size)
	{
	}
}
