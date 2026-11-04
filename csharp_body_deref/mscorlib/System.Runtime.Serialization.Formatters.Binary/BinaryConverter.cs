// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000431")]
internal static class BinaryConverter
{
	[Token(Token = "0x600209F")]
	[Address(RVA = "0x1A0C190", Offset = "0x1A0A790", VA = "0x181A0C190")]
	internal static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetBinaryTypeInfo(Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, string typeName, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, out object typeInformation, out int assemId)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum);
	}

	[Token(Token = "0x60020A0")]
	[Address(RVA = "0x1A0C530", Offset = "0x1A0AB30", VA = "0x181A0C530")]
	internal static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetParserBinaryTypeInfo(Type type, out object typeInformation)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum);
	}

	[Token(Token = "0x60020A1")]
	[Address(RVA = "0x1A0CF40", Offset = "0x1A0B540", VA = "0x181A0CF40")]
	internal static void WriteTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, int assemId, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020A2")]
	[Address(RVA = "0x1A0C7B0", Offset = "0x1A0ADB0", VA = "0x181A0C7B0")]
	internal static object ReadTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, out int assemId)
	{
		return null;
	}

	[Token(Token = "0x60020A3")]
	[Address(RVA = "0x1A0C980", Offset = "0x1A0AF80", VA = "0x181A0C980")]
	internal static void TypeFromInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, out System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, out string typeString, out Type type, out bool isVariant)
	{
	}
}
