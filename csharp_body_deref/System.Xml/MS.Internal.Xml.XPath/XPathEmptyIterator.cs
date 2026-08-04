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
		[Address(RVA = "0x478A940", Offset = "0x478A940", VA = "0x478A940", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000738")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C1B")]
		[Address(RVA = "0x478A950", Offset = "0x478A950", VA = "0x478A950", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000739")]
	public override int Count
	{
		[Token(Token = "0x6001C1C")]
		[Address(RVA = "0x478A960", Offset = "0x478A960", VA = "0x478A960", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x478A910", Offset = "0x478A910", VA = "0x478A910")]
	private XPathEmptyIterator()
	{
	}

	[Token(Token = "0x6001C19")]
	[Address(RVA = "0x478A930", Offset = "0x478A930", VA = "0x478A930", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C1D")]
	[Address(RVA = "0x478A970", Offset = "0x478A970", VA = "0x478A970", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C1E")]
	[Address(RVA = "0x478A980", Offset = "0x478A980", VA = "0x478A980", Slot = "12")]
	public override void Reset()
	{
	}
}
