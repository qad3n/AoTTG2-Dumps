// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CodePageDataItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C65010", Offset = "0x3C65010", VA = "0x3C65010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002DD6")]
	[Address(RVA = "0x3C64EE0", Offset = "0x3C64EE0", VA = "0x3C64EE0")]
	internal CodePageDataItem(int dataIndex)
	{
	}

	[Token(Token = "0x6002DD7")]
	[Address(RVA = "0x3C64F70", Offset = "0x3C64F70", VA = "0x3C64F70")]
	internal static string CreateString(string pStrings, uint index)
	{
		return null;
	}
}
