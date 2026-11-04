// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CodePageDataItem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x200059F")]
internal class CodePageDataItem
{
	[Token(Token = "0x40017B0")]
	[FieldOffset(Offset = "0x10")]
	internal int m_dataIndex;

	[Token(Token = "0x40017B1")]
	[FieldOffset(Offset = "0x14")]
	internal int m_uiFamilyCodePage;

	[Token(Token = "0x40017B2")]
	[FieldOffset(Offset = "0x18")]
	internal string m_webName;

	[Token(Token = "0x40017B3")]
	[FieldOffset(Offset = "0x20")]
	internal uint m_flags;

	[Token(Token = "0x40017B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] sep;

	[Token(Token = "0x17000674")]
	public string WebName
	{
		[Token(Token = "0x6002AE5")]
		[Address(RVA = "0x1A96E60", Offset = "0x1A95460", VA = "0x181A96E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002AE3")]
	[Address(RVA = "0x1A96DA0", Offset = "0x1A953A0", VA = "0x181A96DA0")]
	internal CodePageDataItem(int dataIndex)
	{
	}

	[Token(Token = "0x6002AE4")]
	[Address(RVA = "0x1A96C50", Offset = "0x1A95250", VA = "0x181A96C50")]
	internal static string CreateString(string pStrings, uint index)
	{
		return null;
	}
}
