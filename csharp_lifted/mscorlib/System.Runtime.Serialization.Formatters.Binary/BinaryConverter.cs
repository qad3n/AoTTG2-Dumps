// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040A")]
internal static class BinaryConverter
{
	[Token(Token = "0x6002075")]
	[Address(RVA = "0x53A8090", Offset = "0x53A7090", VA = "0x53A8090")]
	internal static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetBinaryTypeInfo(Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, string typeName, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, out object typeInformation, out int assemId)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum);
	}

	[Token(Token = "0x6002076")]
	[Address(RVA = "0x53A87B0", Offset = "0x53A77B0", VA = "0x53A87B0")]
	internal static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetParserBinaryTypeInfo(Type type, out object typeInformation)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum);
	}

	[Token(Token = "0x6002077")]
	[Address(RVA = "0x53A8B20", Offset = "0x53A7B20", VA = "0x53A8B20")]
	internal static void WriteTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, int assemId, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002078")]
	[Address(RVA = "0x53A8DF0", Offset = "0x53A7DF0", VA = "0x53A8DF0")]
	internal static object ReadTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, out int assemId)
	{
		return null;
	}

	[Token(Token = "0x6002079")]
	[Address(RVA = "0x53A8F70", Offset = "0x53A7F70", VA = "0x53A8F70")]
	internal static void TypeFromInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, out System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, out string typeString, out Type type, out bool isVariant)
	{
	}
}
