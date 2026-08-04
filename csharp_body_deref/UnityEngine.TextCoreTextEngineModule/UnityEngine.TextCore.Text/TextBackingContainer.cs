// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextBackingContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200002D")]
internal struct TextBackingContainer
{
	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x0")]
	private uint[] m_Array;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x8")]
	private int m_Count;

	[Token(Token = "0x17000032")]
	public int Capacity
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x4EDB7A0", Offset = "0x4EDB7A0", VA = "0x4EDB7A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000033")]
	public int Count
	{
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x4EDB7C0", Offset = "0x4EDB7C0", VA = "0x4EDB7C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x4EDB7D0", Offset = "0x4EDB7D0", VA = "0x4EDB7D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public uint this[int index]
	{
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x4EDB7E0", Offset = "0x4EDB7E0", VA = "0x4EDB7E0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x4EDB810", Offset = "0x4EDB810", VA = "0x4EDB810")]
		set
		{
		}
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4EDB8E0", Offset = "0x4EDB8E0", VA = "0x4EDB8E0")]
	public TextBackingContainer(int size)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4EDB890", Offset = "0x4EDB890", VA = "0x4EDB890")]
	public void Resize(int size)
	{
	}
}
