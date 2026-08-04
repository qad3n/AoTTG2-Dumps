// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000402")]
internal static class BinaryConverter
{
	[Token(Token = "0x6002030")]
	[Address(RVA = "0x3BA0BA0", Offset = "0x3BA0BA0", VA = "0x3BA0BA0")]
	internal static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetBinaryTypeInfo(Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, string typeName, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, out object typeInformation, out int assemId)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum);
	}

	[Token(Token = "0x6002031")]
	[Address(RVA = "0x3BA1300", Offset = "0x3BA1300", VA = "0x3BA1300")]
	internal static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetParserBinaryTypeInfo(Type type, out object typeInformation)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum);
	}

	[Token(Token = "0x6002032")]
	[Address(RVA = "0x3BA1670", Offset = "0x3BA1670", VA = "0x3BA1670")]
	internal static void WriteTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, int assemId, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002033")]
	[Address(RVA = "0x3BA1930", Offset = "0x3BA1930", VA = "0x3BA1930")]
	internal static object ReadTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, out int assemId)
	{
		return null;
	}

	[Token(Token = "0x6002034")]
	[Address(RVA = "0x3BA1AC0", Offset = "0x3BA1AC0", VA = "0x3BA1AC0")]
	internal static void TypeFromInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, out System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, out string typeString, out Type type, out bool isVariant)
	{
	}
}
