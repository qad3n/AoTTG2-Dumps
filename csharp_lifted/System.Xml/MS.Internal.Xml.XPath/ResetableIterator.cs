// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.ResetableIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002BD")]
internal abstract class ResetableIterator : XPathNodeIterator
{
	[Token(Token = "0x1700071E")]
	public abstract override int CurrentPosition
	{
		[Token(Token = "0x6001BBD")]
		get;
	}

	[Token(Token = "0x6001BB9")]
	[Address(RVA = "0x6089E00", Offset = "0x6088E00", VA = "0x6089E00")]
	public ResetableIterator()
	{
	}

	[Token(Token = "0x6001BBA")]
	[Address(RVA = "0x6089E50", Offset = "0x6088E50", VA = "0x6089E50")]
	protected ResetableIterator(ResetableIterator other)
	{
	}

	[Token(Token = "0x6001BBB")]
	[Address(RVA = "0x608C080", Offset = "0x608B080", VA = "0x608C080")]
	protected void ResetCount()
	{
	}

	[Token(Token = "0x6001BBC")]
	public abstract void Reset();
}
