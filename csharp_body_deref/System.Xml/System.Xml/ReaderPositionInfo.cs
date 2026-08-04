// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.ReaderPositionInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C1")]
internal class ReaderPositionInfo : PositionInfo
{
	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x10")]
	private IXmlLineInfo lineInfo;

	[Token(Token = "0x170002E6")]
	public override int LineNumber
	{
		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x47E5970", Offset = "0x47E5970", VA = "0x47E5970", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E7")]
	public override int LinePosition
	{
		[Token(Token = "0x6000A82")]
		[Address(RVA = "0x47E5A10", Offset = "0x47E5A10", VA = "0x47E5A10", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x47E58A0", Offset = "0x47E58A0", VA = "0x47E58A0")]
	public ReaderPositionInfo(IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x47E58E0", Offset = "0x47E58E0", VA = "0x47E58E0", Slot = "7")]
	public override bool HasLineInfo()
	{
		return default(bool);
	}
}
