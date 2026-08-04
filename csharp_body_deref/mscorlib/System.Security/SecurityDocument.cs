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
[Token(Token = "0x20002A0")]
internal sealed class SecurityDocument
{
	[Token(Token = "0x4000C08")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] m_data;

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x3B1C040", Offset = "0x3B1C040", VA = "0x3B1C040")]
	public SecurityDocument(int numData)
	{
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x3B1C0A0", Offset = "0x3B1C0A0", VA = "0x3B1C0A0")]
	public void GuaranteeSize(int size)
	{
	}

	[Token(Token = "0x6001768")]
	[Address(RVA = "0x3B1C140", Offset = "0x3B1C140", VA = "0x3B1C140")]
	public void AddString(string str, ref int position)
	{
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x3B1C280", Offset = "0x3B1C280", VA = "0x3B1C280")]
	public void AppendString(string str, ref int position)
	{
	}

	[Token(Token = "0x600176A")]
	[Address(RVA = "0x3B1C300", Offset = "0x3B1C300", VA = "0x3B1C300")]
	public static int EncodedStringSize(string str)
	{
		return default(int);
	}

	[Token(Token = "0x600176B")]
	[Address(RVA = "0x3B1C320", Offset = "0x3B1C320", VA = "0x3B1C320")]
	public string GetString(ref int position, bool bCreate)
	{
		return null;
	}

	[Token(Token = "0x600176C")]
	[Address(RVA = "0x3B1CB30", Offset = "0x3B1CB30", VA = "0x3B1CB30")]
	public void AddToken(byte b, ref int position)
	{
	}

	[Token(Token = "0x600176D")]
	[Address(RVA = "0x3B1CB80", Offset = "0x3B1CB80", VA = "0x3B1CB80")]
	public SecurityElement GetRootElement()
	{
		return null;
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x3B1CBA0", Offset = "0x3B1CBA0", VA = "0x3B1CBA0")]
	public SecurityElement GetElement(int position, bool bCreate)
	{
		return null;
	}

	[Token(Token = "0x600176F")]
	[Address(RVA = "0x3B1CBC0", Offset = "0x3B1CBC0", VA = "0x3B1CBC0")]
	internal SecurityElement InternalGetElement(ref int position, bool bCreate)
	{
		return null;
	}
}
