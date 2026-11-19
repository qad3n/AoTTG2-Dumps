// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041E")]
internal sealed class ObjectMap
{
	[Token(Token = "0x4001051")]
	[FieldOffset(Offset = "0x10")]
	internal string objectName;

	[Token(Token = "0x4001052")]
	[FieldOffset(Offset = "0x18")]
	internal Type objectType;

	[Token(Token = "0x4001053")]
	[FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA;

	[Token(Token = "0x4001054")]
	[FieldOffset(Offset = "0x28")]
	internal object[] typeInformationA;

	[Token(Token = "0x4001055")]
	[FieldOffset(Offset = "0x30")]
	internal Type[] memberTypes;

	[Token(Token = "0x4001056")]
	[FieldOffset(Offset = "0x38")]
	internal string[] memberNames;

	[Token(Token = "0x4001057")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo;

	[Token(Token = "0x4001058")]
	[FieldOffset(Offset = "0x48")]
	internal bool isInitObjectInfo;

	[Token(Token = "0x4001059")]
	[FieldOffset(Offset = "0x50")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader;

	[Token(Token = "0x400105A")]
	[FieldOffset(Offset = "0x58")]
	internal int objectId;

	[Token(Token = "0x400105B")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo;

	[Token(Token = "0x60020CF")]
	[Address(RVA = "0x53AC210", Offset = "0x53AB210", VA = "0x53AC210")]
	internal ObjectMap(string objectName, Type objectType, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
	{
	}

	[Token(Token = "0x60020D0")]
	[Address(RVA = "0x53ACA90", Offset = "0x53ABA90", VA = "0x53ACA90")]
	internal ObjectMap(string objectName, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
	{
	}

	[Token(Token = "0x60020D1")]
	[Address(RVA = "0x53ACFA0", Offset = "0x53ABFA0", VA = "0x53ACFA0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateObjectInfo(ref SerializationInfo si, ref object[] memberData)
	{
		return null;
	}

	[Token(Token = "0x60020D2")]
	[Address(RVA = "0x53AD0D0", Offset = "0x53AC0D0", VA = "0x53AD0D0")]
	internal static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(string name, Type objectType, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
	{
		return null;
	}

	[Token(Token = "0x60020D3")]
	[Address(RVA = "0x53AD150", Offset = "0x53AC150", VA = "0x53AD150")]
	internal static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(string name, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
	{
		return null;
	}
}
