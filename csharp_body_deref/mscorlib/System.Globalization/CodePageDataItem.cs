using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005CD")]
internal class CodePageDataItem
{
	[Token(Token = "0x4001992")]
	[FieldOffset(Offset = "0x10")]
	internal int m_dataIndex;

	[Token(Token = "0x4001993")]
	[FieldOffset(Offset = "0x14")]
	internal int m_uiFamilyCodePage;

	[Token(Token = "0x4001994")]
	[FieldOffset(Offset = "0x18")]
	internal string m_webName;

	[Token(Token = "0x4001995")]
	[FieldOffset(Offset = "0x20")]
	internal string m_headerName;

	[Token(Token = "0x4001996")]
	[FieldOffset(Offset = "0x28")]
	internal string m_bodyName;

	[Token(Token = "0x4001997")]
	[FieldOffset(Offset = "0x30")]
	internal uint m_flags;

	[Token(Token = "0x4001998")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] sep;

	[Token(Token = "0x170006E7")]
	public string WebName
	{
		[Token(Token = "0x6002DD8")]
		[Address(RVA = "0x4F7F4F0", Offset = "0x4F7F4F0", VA = "0x4F7F4F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002DD6")]
	[Address(RVA = "0x4F7F3C0", Offset = "0x4F7F3C0", VA = "0x4F7F3C0")]
	internal CodePageDataItem(int dataIndex)
	{
	}

	[Token(Token = "0x6002DD7")]
	[Address(RVA = "0x4F7F450", Offset = "0x4F7F450", VA = "0x4F7F450")]
	internal static string CreateString(string pStrings, uint index)
	{
		return null;
	}
}
