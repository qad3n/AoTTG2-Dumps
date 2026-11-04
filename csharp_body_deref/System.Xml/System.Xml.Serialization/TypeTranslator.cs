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
	[Address(RVA = "0x2741960", Offset = "0x273FF60", VA = "0x182741960")]
	static TypeTranslator()
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x27417A0", Offset = "0x273FDA0", VA = "0x1827417A0")]
	public static TypeData GetTypeData(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x2740C00", Offset = "0x273F200", VA = "0x182740C00")]
	public static TypeData GetTypeData(Type runtimeType, string xmlDataType, bool underlyingEnumType = false)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x2740BB0", Offset = "0x273F1B0", VA = "0x182740BB0")]
	public static TypeData GetPrimitiveTypeData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x2740970", Offset = "0x273EF70", VA = "0x182740970")]
	public static TypeData GetPrimitiveTypeData(string typeName, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x27407C0", Offset = "0x273EDC0", VA = "0x1827407C0")]
	public static TypeData FindPrimitiveTypeData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x2740880", Offset = "0x273EE80", VA = "0x182740880")]
	public static string GetArrayName(string elemName)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x27417F0", Offset = "0x273FDF0", VA = "0x1827417F0")]
	public static void ParseArrayType(string arrayType, out string type, out string ns, out string dimensions)
	{
	}
}
