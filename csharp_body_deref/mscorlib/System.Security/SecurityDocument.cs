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
	[Address(RVA = "0x4E36520", Offset = "0x4E36520", VA = "0x4E36520")]
	public SecurityDocument(int numData)
	{
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x4E36580", Offset = "0x4E36580", VA = "0x4E36580")]
	public void GuaranteeSize(int size)
	{
	}

	[Token(Token = "0x6001768")]
	[Address(RVA = "0x4E36620", Offset = "0x4E36620", VA = "0x4E36620")]
	public void AddString(string str, ref int position)
	{
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x4E36760", Offset = "0x4E36760", VA = "0x4E36760")]
	public void AppendString(string str, ref int position)
	{
	}

	[Token(Token = "0x600176A")]
	[Address(RVA = "0x4E367E0", Offset = "0x4E367E0", VA = "0x4E367E0")]
	public static int EncodedStringSize(string str)
	{
		return default(int);
	}

	[Token(Token = "0x600176B")]
	[Address(RVA = "0x4E36800", Offset = "0x4E36800", VA = "0x4E36800")]
	public string GetString(ref int position, bool bCreate)
	{
		return null;
	}

	[Token(Token = "0x600176C")]
	[Address(RVA = "0x4E37010", Offset = "0x4E37010", VA = "0x4E37010")]
	public void AddToken(byte b, ref int position)
	{
	}

	[Token(Token = "0x600176D")]
	[Address(RVA = "0x4E37060", Offset = "0x4E37060", VA = "0x4E37060")]
	public SecurityElement GetRootElement()
	{
		return null;
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x4E37080", Offset = "0x4E37080", VA = "0x4E37080")]
	public SecurityElement GetElement(int position, bool bCreate)
	{
		return null;
	}

	[Token(Token = "0x600176F")]
	[Address(RVA = "0x4E370A0", Offset = "0x4E370A0", VA = "0x4E370A0")]
	internal SecurityElement InternalGetElement(ref int position, bool bCreate)
	{
		return null;
	}
}
