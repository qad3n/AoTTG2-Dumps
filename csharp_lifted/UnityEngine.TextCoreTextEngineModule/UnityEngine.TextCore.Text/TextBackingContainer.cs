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
		[Address(RVA = "0x6A48680", Offset = "0x6A47680", VA = "0x6A48680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000070")]
	public int Count
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x6A486A0", Offset = "0x6A476A0", VA = "0x6A486A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x6A486B0", Offset = "0x6A476B0", VA = "0x6A486B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public uint this[int index]
	{
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x6A486C0", Offset = "0x6A476C0", VA = "0x6A486C0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x6A486F0", Offset = "0x6A476F0", VA = "0x6A486F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x6A487E0", Offset = "0x6A477E0", VA = "0x6A487E0")]
	public TextBackingContainer(int size)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x6A48780", Offset = "0x6A47780", VA = "0x6A48780")]
	public void Resize(int size)
	{
	}
}
