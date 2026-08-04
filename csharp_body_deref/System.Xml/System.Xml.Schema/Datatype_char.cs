// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_char
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C9")]
internal class Datatype_char : Datatype_anySimpleType
{
	[Token(Token = "0x400086B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400086C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x170004F2")]
	public override Type ValueType
	{
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x4865640", Offset = "0x4865640", VA = "0x4865640", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F3")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x48656B0", Offset = "0x48656B0", VA = "0x48656B0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F4")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x4865720", Offset = "0x4865720", VA = "0x4865720", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x4865730", Offset = "0x4865730", VA = "0x4865730", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x48657B0", Offset = "0x48657B0", VA = "0x48657B0", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x4865980", Offset = "0x4865980", VA = "0x4865980", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x4855CC0", Offset = "0x4855CC0", VA = "0x4855CC0")]
	public Datatype_char()
	{
	}
}
