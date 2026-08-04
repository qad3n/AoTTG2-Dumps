// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.PositionInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C0")]
internal class PositionInfo : IXmlLineInfo
{
	[Token(Token = "0x170002E4")]
	public virtual int LineNumber
	{
		[Token(Token = "0x6000A7B")]
		[Address(RVA = "0x47E57D0", Offset = "0x47E57D0", VA = "0x47E57D0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E5")]
	public virtual int LinePosition
	{
		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x47E57E0", Offset = "0x47E57E0", VA = "0x47E57E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x47E57C0", Offset = "0x47E57C0", VA = "0x47E57C0", Slot = "7")]
	public virtual bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x47E57F0", Offset = "0x47E57F0", VA = "0x47E57F0")]
	public static PositionInfo GetPositionInfo(object o)
	{
		return null;
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x47E58D0", Offset = "0x47E58D0", VA = "0x47E58D0")]
	public PositionInfo()
	{
	}
}
