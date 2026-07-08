using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000416")]
internal sealed class ObjectMap
{
	[Token(Token = "0x40010EF")]
	[FieldOffset(Offset = "0x10")]
	internal string objectName;

	[Token(Token = "0x40010F0")]
	[FieldOffset(Offset = "0x18")]
	internal Type objectType;

	[Token(Token = "0x40010F1")]
	[FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA;

	[Token(Token = "0x40010F2")]
	[FieldOffset(Offset = "0x28")]
	internal object[] typeInformationA;

	[Token(Token = "0x40010F3")]
	[FieldOffset(Offset = "0x30")]
	internal Type[] memberTypes;

	[Token(Token = "0x40010F4")]
	[FieldOffset(Offset = "0x38")]
	internal string[] memberNames;

	[Token(Token = "0x40010F5")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo;

	[Token(Token = "0x40010F6")]
	[FieldOffset(Offset = "0x48")]
	internal bool isInitObjectInfo;

	[Token(Token = "0x40010F7")]
	[FieldOffset(Offset = "0x50")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader;

	[Token(Token = "0x40010F8")]
	[FieldOffset(Offset = "0x58")]
	internal int objectId;

	[Token(Token = "0x40010F9")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo;

	[Token(Token = "0x600208A")]
	[Address(RVA = "0x4EBF540", Offset = "0x4EBF540", VA = "0x4EBF540")]
	internal ObjectMap(string objectName, Type objectType, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
	{
	}

	[Token(Token = "0x600208B")]
	[Address(RVA = "0x4EBFDD0", Offset = "0x4EBFDD0", VA = "0x4EBFDD0")]
	internal ObjectMap(string objectName, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
	{
	}

	[Token(Token = "0x600208C")]
	[Address(RVA = "0x4EC02B0", Offset = "0x4EC02B0", VA = "0x4EC02B0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateObjectInfo(ref SerializationInfo si, ref object[] memberData)
	{
		return null;
	}

	[Token(Token = "0x600208D")]
	[Address(RVA = "0x4EC03E0", Offset = "0x4EC03E0", VA = "0x4EC03E0")]
	internal static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(string name, Type objectType, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
	{
		return null;
	}

	[Token(Token = "0x600208E")]
	[Address(RVA = "0x4EC0460", Offset = "0x4EC0460", VA = "0x4EC0460")]
	internal static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(string name, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
	{
		return null;
	}
}
