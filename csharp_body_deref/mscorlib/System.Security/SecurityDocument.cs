// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.SecurityDocument
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x20002CF")]
internal sealed class SecurityDocument
{
	[Token(Token = "0x4000C18")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] m_data;

	[Token(Token = "0x60017CE")]
	[Address(RVA = "0x19996A0", Offset = "0x1997CA0", VA = "0x1819996A0")]
	public SecurityDocument(int numData)
	{
	}

	[Token(Token = "0x60017CF")]
	[Address(RVA = "0x1999370", Offset = "0x1997970", VA = "0x181999370")]
	public void GuaranteeSize(int size)
	{
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x1998CC0", Offset = "0x19972C0", VA = "0x181998CC0")]
	public void AddString(string str, ref int position)
	{
	}

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x1998EA0", Offset = "0x19974A0", VA = "0x181998EA0")]
	public void AppendString(string str, ref int position)
	{
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x1998F40", Offset = "0x1997540", VA = "0x181998F40")]
	public static int EncodedStringSize(string str)
	{
		return default(int);
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x1998FB0", Offset = "0x19975B0", VA = "0x181998FB0")]
	public string GetString(ref int position, bool bCreate)
	{
		return null;
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x1998DD0", Offset = "0x19973D0", VA = "0x181998DD0")]
	public void AddToken(byte b, ref int position)
	{
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x1998F80", Offset = "0x1997580", VA = "0x181998F80")]
	public SecurityElement GetRootElement()
	{
		return null;
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x1998F60", Offset = "0x1997560", VA = "0x181998F60")]
	public SecurityElement GetElement(int position, bool bCreate)
	{
		return null;
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x1999420", Offset = "0x1997A20", VA = "0x181999420")]
	internal SecurityElement InternalGetElement(ref int position, bool bCreate)
	{
		return null;
	}
}
