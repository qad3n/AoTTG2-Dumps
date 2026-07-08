using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200025B")]
internal struct TextureId
{
	[Token(Token = "0x40008C3")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Index;

	[Token(Token = "0x40008C4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextureId invalid;

	[Token(Token = "0x17000303")]
	public int index
	{
		[Token(Token = "0x6000F8E")]
		[Address(RVA = "0x4D4E710", Offset = "0x4D4E710", VA = "0x4D4E710")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x4D4E700", Offset = "0x4D4E700", VA = "0x4D4E700")]
	public TextureId(int index)
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4D4E720", Offset = "0x4D4E720", VA = "0x4D4E720")]
	public float ConvertToGpu()
	{
		return default(float);
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x4D4E770", Offset = "0x4D4E770", VA = "0x4D4E770", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x4D4E800", Offset = "0x4D4E800", VA = "0x4D4E800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4D4E810", Offset = "0x4D4E810", VA = "0x4D4E810")]
	public static bool operator ==(TextureId left, TextureId right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x4D4E820", Offset = "0x4D4E820", VA = "0x4D4E820")]
	public static bool operator !=(TextureId left, TextureId right)
	{
		return default(bool);
	}
}
