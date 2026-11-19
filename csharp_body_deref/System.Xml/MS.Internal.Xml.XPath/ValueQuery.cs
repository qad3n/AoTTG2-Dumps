// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.ValueQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C2")]
internal abstract class ValueQuery : Query
{
	[Token(Token = "0x17000727")]
	public sealed override XPathNavigator Current
	{
		[Token(Token = "0x6001BE9")]
		[Address(RVA = "0x608E840", Offset = "0x608D840", VA = "0x608E840", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000728")]
	public sealed override int CurrentPosition
	{
		[Token(Token = "0x6001BEA")]
		[Address(RVA = "0x608E880", Offset = "0x608D880", VA = "0x608E880", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000729")]
	public sealed override int Count
	{
		[Token(Token = "0x6001BEB")]
		[Address(RVA = "0x608E8C0", Offset = "0x608D8C0", VA = "0x608E8C0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x608C170", Offset = "0x608B170", VA = "0x608C170")]
	public ValueQuery()
	{
	}

	[Token(Token = "0x6001BE7")]
	[Address(RVA = "0x608C430", Offset = "0x608B430", VA = "0x608C430")]
	protected ValueQuery(ValueQuery other)
	{
	}

	[Token(Token = "0x6001BE8")]
	[Address(RVA = "0x608E830", Offset = "0x608D830", VA = "0x608E830", Slot = "12")]
	public sealed override void Reset()
	{
	}

	[Token(Token = "0x6001BEC")]
	[Address(RVA = "0x608E900", Offset = "0x608D900", VA = "0x608E900", Slot = "15")]
	public sealed override XPathNavigator Advance()
	{
		return null;
	}
}
