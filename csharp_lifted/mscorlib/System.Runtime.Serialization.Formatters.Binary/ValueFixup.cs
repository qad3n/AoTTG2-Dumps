// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ValueFixup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000433")]
internal sealed class ValueFixup
{
	[Token(Token = "0x400116A")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum valueFixupEnum;

	[Token(Token = "0x400116B")]
	[FieldOffset(Offset = "0x18")]
	internal Array arrayObj;

	[Token(Token = "0x400116C")]
	[FieldOffset(Offset = "0x20")]
	internal int[] indexMap;

	[Token(Token = "0x400116D")]
	[FieldOffset(Offset = "0x28")]
	internal object header;

	[Token(Token = "0x400116E")]
	[FieldOffset(Offset = "0x30")]
	internal object memberObject;

	[Token(Token = "0x400116F")]
	[FieldOffset(Offset = "0x0")]
	internal static MemberInfo valueInfo;

	[Token(Token = "0x4001170")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo;

	[Token(Token = "0x4001171")]
	[FieldOffset(Offset = "0x40")]
	internal string memberName;

	[Token(Token = "0x60021E2")]
	[Address(RVA = "0x53C3570", Offset = "0x53C2570", VA = "0x53C3570")]
	internal ValueFixup(Array arrayObj, int[] indexMap)
	{
	}

	[Token(Token = "0x60021E3")]
	[Address(RVA = "0x53C35C0", Offset = "0x53C25C0", VA = "0x53C35C0")]
	internal ValueFixup(object memberObject, string memberName, System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo)
	{
	}

	[Token(Token = "0x60021E4")]
	[Address(RVA = "0x53C3620", Offset = "0x53C2620", VA = "0x53C3620")]
	internal void Fixup(System.Runtime.Serialization.Formatters.Binary.ParseRecord record, System.Runtime.Serialization.Formatters.Binary.ParseRecord parent)
	{
	}
}
