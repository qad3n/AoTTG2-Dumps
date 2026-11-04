// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlCustomFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200011F")]
internal class XmlCustomFormatter
{
	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x0")]
	private static string[] allTimeFormats;

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x275C640", Offset = "0x275AC40", VA = "0x18275C640")]
	internal static string FromEnum(long value, string[] values, long[] ids, string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x275C940", Offset = "0x275AF40", VA = "0x18275C940")]
	internal static string FromXmlName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x275C8F0", Offset = "0x275AEF0", VA = "0x18275C8F0")]
	internal static string FromXmlNCName(string ncName)
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x275D310", Offset = "0x275B910", VA = "0x18275D310")]
	internal static string ToXmlString(TypeData type, object value)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x275C990", Offset = "0x275AF90", VA = "0x18275C990")]
	internal static object FromXmlString(TypeData type, string value)
	{
		return null;
	}
}
