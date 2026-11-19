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
[Token(Token = "0x200057A")]
internal class CodePageDataItem
{
	[Token(Token = "0x4001717")]
	[FieldOffset(Offset = "0x10")]
	internal int m_dataIndex;

	[Token(Token = "0x4001718")]
	[FieldOffset(Offset = "0x14")]
	internal int m_uiFamilyCodePage;

	[Token(Token = "0x4001719")]
	[FieldOffset(Offset = "0x18")]
	internal string m_webName;

	[Token(Token = "0x400171A")]
	[FieldOffset(Offset = "0x20")]
	internal uint m_flags;

	[Token(Token = "0x400171B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] sep;

	[Token(Token = "0x17000675")]
	public string WebName
	{
		[Token(Token = "0x6002AC4")]
		[Address(RVA = "0x5439B80", Offset = "0x5438B80", VA = "0x5439B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002AC2")]
	[Address(RVA = "0x5439A50", Offset = "0x5438A50", VA = "0x5439A50")]
	internal CodePageDataItem(int dataIndex)
	{
	}

	[Token(Token = "0x6002AC3")]
	[Address(RVA = "0x5439AE0", Offset = "0x5438AE0", VA = "0x5439AE0")]
	internal static string CreateString(string pStrings, uint index)
	{
		return null;
	}
}
