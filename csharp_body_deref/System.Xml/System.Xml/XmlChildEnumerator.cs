// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlChildEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009C")]
internal sealed class XmlChildEnumerator : IEnumerator
{
	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x10")]
	internal XmlNode container;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x18")]
	internal XmlNode child;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x20")]
	internal bool isFirst;

	[Token(Token = "0x170001F0")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x47CB550", Offset = "0x47CB550", VA = "0x47CB550", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F1")]
	internal XmlNode Current
	{
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x47CB560", Offset = "0x47CB560", VA = "0x47CB560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x47CB3B0", Offset = "0x47CB3B0", VA = "0x47CB3B0")]
	internal XmlChildEnumerator(XmlNode container)
	{
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x47CB410", Offset = "0x47CB410", VA = "0x47CB410", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x47CB490", Offset = "0x47CB490", VA = "0x47CB490")]
	internal bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x47CB510", Offset = "0x47CB510", VA = "0x47CB510", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}
