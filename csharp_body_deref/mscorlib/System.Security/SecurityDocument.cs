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
[Token(Token = "0x20002A8")]
internal sealed class SecurityDocument
{
	[Token(Token = "0x4000B78")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] m_data;

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x5326060", Offset = "0x5325060", VA = "0x5326060")]
	public SecurityDocument(int numData)
	{
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x53260C0", Offset = "0x53250C0", VA = "0x53260C0")]
	public void GuaranteeSize(int size)
	{
	}

	[Token(Token = "0x60017AD")]
	[Address(RVA = "0x5326160", Offset = "0x5325160", VA = "0x5326160")]
	public void AddString(string str, ref int position)
	{
	}

	[Token(Token = "0x60017AE")]
	[Address(RVA = "0x53262A0", Offset = "0x53252A0", VA = "0x53262A0")]
	public void AppendString(string str, ref int position)
	{
	}

	[Token(Token = "0x60017AF")]
	[Address(RVA = "0x5326320", Offset = "0x5325320", VA = "0x5326320")]
	public static int EncodedStringSize(string str)
	{
		return default(int);
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x5326340", Offset = "0x5325340", VA = "0x5326340")]
	public string GetString(ref int position, bool bCreate)
	{
		return null;
	}

	[Token(Token = "0x60017B1")]
	[Address(RVA = "0x5326B20", Offset = "0x5325B20", VA = "0x5326B20")]
	public void AddToken(byte b, ref int position)
	{
	}

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x5326B60", Offset = "0x5325B60", VA = "0x5326B60")]
	public SecurityElement GetRootElement()
	{
		return null;
	}

	[Token(Token = "0x60017B3")]
	[Address(RVA = "0x5326B80", Offset = "0x5325B80", VA = "0x5326B80")]
	public SecurityElement GetElement(int position, bool bCreate)
	{
		return null;
	}

	[Token(Token = "0x60017B4")]
	[Address(RVA = "0x5326BA0", Offset = "0x5325BA0", VA = "0x5326BA0")]
	internal SecurityElement InternalGetElement(ref int position, bool bCreate)
	{
		return null;
	}
}
