using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000246")]
public class XmlSchemaObjectEnumerator : IEnumerator
{
	[Token(Token = "0x4000BC6")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x17000652")]
	public XmlSchemaObject Current
	{
		[Token(Token = "0x60016E7")]
		[Address(RVA = "0x43E8720", Offset = "0x43E8720", VA = "0x43E8720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000653")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60016EA")]
		[Address(RVA = "0x43E8930", Offset = "0x43E8930", VA = "0x43E8930", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x43E8660", Offset = "0x43E8660", VA = "0x43E8660")]
	internal XmlSchemaObjectEnumerator(IEnumerator enumerator)
	{
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x43E8690", Offset = "0x43E8690", VA = "0x43E8690")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x43E8800", Offset = "0x43E8800", VA = "0x43E8800", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x43E88A0", Offset = "0x43E88A0", VA = "0x43E88A0", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}
}
