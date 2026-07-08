using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000042")]
public class TextStyle
{
	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x0")]
	internal static TextStyle k_NormalStyle;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private int m_HashCode;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private string m_OpeningDefinition;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private string m_ClosingDefinition;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private uint[] m_OpeningTagArray;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private uint[] m_ClosingTagArray;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal uint[] m_OpeningTagUnicodeArray;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal uint[] m_ClosingTagUnicodeArray;

	[Token(Token = "0x17000055")]
	public int hashCode
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x4BB5150", Offset = "0x4BB5150", VA = "0x4BB5150")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000056")]
	public uint[] styleOpeningTagArray
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x4BB5160", Offset = "0x4BB5160", VA = "0x4BB5160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public uint[] styleClosingTagArray
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4BB57E0", Offset = "0x4BB57E0", VA = "0x4BB57E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4BC3810", Offset = "0x4BC3810", VA = "0x4BC3810")]
	internal TextStyle(string styleName, string styleOpeningDefinition, string styleClosingDefinition)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4BC3920", Offset = "0x4BC3920", VA = "0x4BC3920")]
	public void RefreshStyle()
	{
	}
}
