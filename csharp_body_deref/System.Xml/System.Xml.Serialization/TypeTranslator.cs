using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000114")]
internal class TypeTranslator
{
	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable nameCache;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable primitiveTypes;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable primitiveArrayTypes;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x18")]
	private static Hashtable nullableTypes;

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x44CF940", Offset = "0x44CF940", VA = "0x44CF940")]
	static TypeTranslator()
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x44CCC20", Offset = "0x44CCC20", VA = "0x44CCC20")]
	public static TypeData GetTypeData(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x44D1FC0", Offset = "0x44D1FC0", VA = "0x44D1FC0")]
	public static TypeData GetTypeData(Type runtimeType, string xmlDataType, bool underlyingEnumType = false)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x44D2D00", Offset = "0x44D2D00", VA = "0x44D2D00")]
	public static TypeData GetPrimitiveTypeData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x44D2D60", Offset = "0x44D2D60", VA = "0x44D2D60")]
	public static TypeData GetPrimitiveTypeData(string typeName, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x44D2FA0", Offset = "0x44D2FA0", VA = "0x44D2FA0")]
	public static TypeData FindPrimitiveTypeData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x44CD660", Offset = "0x44CD660", VA = "0x44CD660")]
	public static string GetArrayName(string elemName)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x44D3090", Offset = "0x44D3090", VA = "0x44D3090")]
	public static void ParseArrayType(string arrayType, out string type, out string ns, out string dimensions)
	{
	}
}
