// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaObjectEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x2675950", Offset = "0x2673F50", VA = "0x182675950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000653")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60016EA")]
		[Address(RVA = "0x2675900", Offset = "0x2673F00", VA = "0x182675900", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal XmlSchemaObjectEnumerator(IEnumerator enumerator)
	{
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x2675810", Offset = "0x2673E10", VA = "0x182675810")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x26758B0", Offset = "0x2673EB0", VA = "0x1826758B0", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x2675860", Offset = "0x2673E60", VA = "0x182675860", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}
}
