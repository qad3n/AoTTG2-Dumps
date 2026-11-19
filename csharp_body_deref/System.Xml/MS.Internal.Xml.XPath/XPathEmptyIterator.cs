// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathEmptyIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002CA")]
internal sealed class XPathEmptyIterator : ResetableIterator
{
	[Token(Token = "0x4000EB0")]
	[FieldOffset(Offset = "0x0")]
	public static XPathEmptyIterator Instance;

	[Token(Token = "0x17000737")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C1A")]
		[Address(RVA = "0x608FB80", Offset = "0x608EB80", VA = "0x608FB80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000738")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C1B")]
		[Address(RVA = "0x608FB90", Offset = "0x608EB90", VA = "0x608FB90", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000739")]
	public override int Count
	{
		[Token(Token = "0x6001C1C")]
		[Address(RVA = "0x608FBA0", Offset = "0x608EBA0", VA = "0x608FBA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x608FB50", Offset = "0x608EB50", VA = "0x608FB50")]
	private XPathEmptyIterator()
	{
	}

	[Token(Token = "0x6001C19")]
	[Address(RVA = "0x608FB70", Offset = "0x608EB70", VA = "0x608FB70", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C1D")]
	[Address(RVA = "0x608FBB0", Offset = "0x608EBB0", VA = "0x608FBB0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C1E")]
	[Address(RVA = "0x608FBC0", Offset = "0x608EBC0", VA = "0x608FBC0", Slot = "12")]
	public override void Reset()
	{
	}
}
