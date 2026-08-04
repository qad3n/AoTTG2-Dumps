// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextStyle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EDCA80", Offset = "0x4EDCA80", VA = "0x4EDCA80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000056")]
	public uint[] styleOpeningTagArray
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x4EDCA90", Offset = "0x4EDCA90", VA = "0x4EDCA90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public uint[] styleClosingTagArray
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4EDD110", Offset = "0x4EDD110", VA = "0x4EDD110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4EEB140", Offset = "0x4EEB140", VA = "0x4EEB140")]
	internal TextStyle(string styleName, string styleOpeningDefinition, string styleClosingDefinition)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4EEB250", Offset = "0x4EEB250", VA = "0x4EEB250")]
	public void RefreshStyle()
	{
	}
}
