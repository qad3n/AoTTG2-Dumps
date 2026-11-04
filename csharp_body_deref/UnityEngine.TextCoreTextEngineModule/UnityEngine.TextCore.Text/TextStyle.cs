// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextStyle
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000040")]
public class TextStyle
{
	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x0")]
	internal static TextStyle k_NormalStyle;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private int m_HashCode;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private string m_OpeningDefinition;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private string m_ClosingDefinition;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private uint[] m_OpeningTagArray;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private uint[] m_ClosingTagArray;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal uint[] m_OpeningTagUnicodeArray;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal uint[] m_ClosingTagUnicodeArray;

	[Token(Token = "0x17000058")]
	public int hashCode
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000059")]
	public string styleOpeningDefinition
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public string styleClosingDefinition
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x2E8E8B0", Offset = "0x2E8CEB0", VA = "0x182E8E8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public uint[] styleOpeningTagArray
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	public uint[] styleClosingTagArray
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0xAD2BE0", Offset = "0xAD11E0", VA = "0x180AD2BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x30562B0", Offset = "0x30548B0", VA = "0x1830562B0")]
	internal TextStyle(string styleName, string styleOpeningDefinition, string styleClosingDefinition)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x30560E0", Offset = "0x30546E0", VA = "0x1830560E0")]
	public void RefreshStyle()
	{
	}
}
