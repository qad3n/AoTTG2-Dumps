using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200011F")]
internal class XmlCustomFormatter
{
	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x0")]
	private static string[] allTimeFormats;

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x44D69E0", Offset = "0x44D69E0", VA = "0x44D69E0")]
	internal static string FromEnum(long value, string[] values, long[] ids, string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x44D6D60", Offset = "0x44D6D60", VA = "0x44D6D60")]
	internal static string FromXmlName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x44D6DD0", Offset = "0x44D6DD0", VA = "0x44D6DD0")]
	internal static string FromXmlNCName(string ncName)
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x44D5770", Offset = "0x44D5770", VA = "0x44D5770")]
	internal static string ToXmlString(TypeData type, object value)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x44D6E40", Offset = "0x44D6E40", VA = "0x44D6E40")]
	internal static object FromXmlString(TypeData type, string value)
	{
		return null;
	}
}
