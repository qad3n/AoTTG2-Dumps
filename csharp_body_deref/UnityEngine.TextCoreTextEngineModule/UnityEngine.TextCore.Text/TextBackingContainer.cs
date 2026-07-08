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
		[Address(RVA = "0x4BB3E70", Offset = "0x4BB3E70", VA = "0x4BB3E70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000033")]
	public int Count
	{
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x4BB3E90", Offset = "0x4BB3E90", VA = "0x4BB3E90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x4BB3EA0", Offset = "0x4BB3EA0", VA = "0x4BB3EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public uint this[int index]
	{
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x4BB3EB0", Offset = "0x4BB3EB0", VA = "0x4BB3EB0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x4BB3EE0", Offset = "0x4BB3EE0", VA = "0x4BB3EE0")]
		set
		{
		}
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4BB3FB0", Offset = "0x4BB3FB0", VA = "0x4BB3FB0")]
	public TextBackingContainer(int size)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4BB3F60", Offset = "0x4BB3F60", VA = "0x4BB3F60")]
	public void Resize(int size)
	{
	}
}
