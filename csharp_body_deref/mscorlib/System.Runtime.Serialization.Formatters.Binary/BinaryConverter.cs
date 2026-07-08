using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000402")]
internal static class BinaryConverter
{
	[Token(Token = "0x6002030")]
	[Address(RVA = "0x4EBB080", Offset = "0x4EBB080", VA = "0x4EBB080")]
	internal static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetBinaryTypeInfo(Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, string typeName, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, out object typeInformation, out int assemId)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum);
	}

	[Token(Token = "0x6002031")]
	[Address(RVA = "0x4EBB7E0", Offset = "0x4EBB7E0", VA = "0x4EBB7E0")]
	internal static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetParserBinaryTypeInfo(Type type, out object typeInformation)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum);
	}

	[Token(Token = "0x6002032")]
	[Address(RVA = "0x4EBBB50", Offset = "0x4EBBB50", VA = "0x4EBBB50")]
	internal static void WriteTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, int assemId, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002033")]
	[Address(RVA = "0x4EBBE10", Offset = "0x4EBBE10", VA = "0x4EBBE10")]
	internal static object ReadTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, out int assemId)
	{
		return null;
	}

	[Token(Token = "0x6002034")]
	[Address(RVA = "0x4EBBFA0", Offset = "0x4EBBFA0", VA = "0x4EBBFA0")]
	internal static void TypeFromInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, out System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, out string typeString, out Type type, out bool isVariant)
	{
	}
}
