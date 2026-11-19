// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.TypeTranslator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x610F4A0", Offset = "0x610E4A0", VA = "0x610F4A0")]
	static TypeTranslator()
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x610C7E0", Offset = "0x610B7E0", VA = "0x610C7E0")]
	public static TypeData GetTypeData(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x6111B50", Offset = "0x6110B50", VA = "0x6111B50")]
	public static TypeData GetTypeData(Type runtimeType, string xmlDataType, bool underlyingEnumType = false)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x61127E0", Offset = "0x61117E0", VA = "0x61127E0")]
	public static TypeData GetPrimitiveTypeData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x6112850", Offset = "0x6111850", VA = "0x6112850")]
	public static TypeData GetPrimitiveTypeData(string typeName, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x6112A90", Offset = "0x6111A90", VA = "0x6112A90")]
	public static TypeData FindPrimitiveTypeData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x610D1F0", Offset = "0x610C1F0", VA = "0x610D1F0")]
	public static string GetArrayName(string elemName)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x6112B80", Offset = "0x6111B80", VA = "0x6112B80")]
	public static void ParseArrayType(string arrayType, out string type, out string ns, out string dimensions)
	{
	}
}
