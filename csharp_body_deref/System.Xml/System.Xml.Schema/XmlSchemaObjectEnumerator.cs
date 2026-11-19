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
		[Address(RVA = "0x602DFC0", Offset = "0x602CFC0", VA = "0x602DFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000653")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60016EA")]
		[Address(RVA = "0x602E1D0", Offset = "0x602D1D0", VA = "0x602E1D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x602DF00", Offset = "0x602CF00", VA = "0x602DF00")]
	internal XmlSchemaObjectEnumerator(IEnumerator enumerator)
	{
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x602DF30", Offset = "0x602CF30", VA = "0x602DF30")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x602E0A0", Offset = "0x602D0A0", VA = "0x602E0A0", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x602E140", Offset = "0x602D140", VA = "0x602E140", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}
}
