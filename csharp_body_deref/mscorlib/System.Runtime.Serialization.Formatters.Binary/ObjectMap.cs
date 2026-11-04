// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000445")]
internal sealed class ObjectMap
{
	[Token(Token = "0x40010F1")]
	[FieldOffset(Offset = "0x10")]
	internal string objectName;

	[Token(Token = "0x40010F2")]
	[FieldOffset(Offset = "0x18")]
	internal Type objectType;

	[Token(Token = "0x40010F3")]
	[FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA;

	[Token(Token = "0x40010F4")]
	[FieldOffset(Offset = "0x28")]
	internal object[] typeInformationA;

	[Token(Token = "0x40010F5")]
	[FieldOffset(Offset = "0x30")]
	internal Type[] memberTypes;

	[Token(Token = "0x40010F6")]
	[FieldOffset(Offset = "0x38")]
	internal string[] memberNames;

	[Token(Token = "0x40010F7")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo;

	[Token(Token = "0x40010F8")]
	[FieldOffset(Offset = "0x48")]
	internal bool isInitObjectInfo;

	[Token(Token = "0x40010F9")]
	[FieldOffset(Offset = "0x50")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader;

	[Token(Token = "0x40010FA")]
	[FieldOffset(Offset = "0x58")]
	internal int objectId;

	[Token(Token = "0x40010FB")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo;

	[Token(Token = "0x60020F9")]
	[Address(RVA = "0x1A1B240", Offset = "0x1A19840", VA = "0x181A1B240")]
	internal ObjectMap(string objectName, Type objectType, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
	{
	}

	[Token(Token = "0x60020FA")]
	[Address(RVA = "0x1A1AE70", Offset = "0x1A19470", VA = "0x181A1AE70")]
	internal ObjectMap(string objectName, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
	{
	}

	[Token(Token = "0x60020FB")]
	[Address(RVA = "0x1A1ACE0", Offset = "0x1A192E0", VA = "0x181A1ACE0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateObjectInfo(ref SerializationInfo si, ref object[] memberData)
	{
		return null;
	}

	[Token(Token = "0x60020FC")]
	[Address(RVA = "0x1A1AD30", Offset = "0x1A19330", VA = "0x181A1AD30")]
	internal static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(string name, Type objectType, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
	{
		return null;
	}

	[Token(Token = "0x60020FD")]
	[Address(RVA = "0x1A1ADC0", Offset = "0x1A193C0", VA = "0x181A1ADC0")]
	internal static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(string name, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, int objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
	{
		return null;
	}
}
