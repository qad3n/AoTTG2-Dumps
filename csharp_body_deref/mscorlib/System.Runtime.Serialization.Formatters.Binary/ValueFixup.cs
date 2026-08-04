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

[Token(Token = "0x200042B")]
internal sealed class ValueFixup
{
	[Token(Token = "0x4001208")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum valueFixupEnum;

	[Token(Token = "0x4001209")]
	[FieldOffset(Offset = "0x18")]
	internal Array arrayObj;

	[Token(Token = "0x400120A")]
	[FieldOffset(Offset = "0x20")]
	internal int[] indexMap;

	[Token(Token = "0x400120B")]
	[FieldOffset(Offset = "0x28")]
	internal object header;

	[Token(Token = "0x400120C")]
	[FieldOffset(Offset = "0x30")]
	internal object memberObject;

	[Token(Token = "0x400120D")]
	[FieldOffset(Offset = "0x0")]
	internal static MemberInfo valueInfo;

	[Token(Token = "0x400120E")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo;

	[Token(Token = "0x400120F")]
	[FieldOffset(Offset = "0x40")]
	internal string memberName;

	[Token(Token = "0x600219D")]
	[Address(RVA = "0x3BBBEC0", Offset = "0x3BBBEC0", VA = "0x3BBBEC0")]
	internal ValueFixup(Array arrayObj, int[] indexMap)
	{
	}

	[Token(Token = "0x600219E")]
	[Address(RVA = "0x3BBBF10", Offset = "0x3BBBF10", VA = "0x3BBBF10")]
	internal ValueFixup(object memberObject, string memberName, System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo)
	{
	}

	[Token(Token = "0x600219F")]
	[Address(RVA = "0x3BBBF70", Offset = "0x3BBBF70", VA = "0x3BBBF70")]
	internal void Fixup(System.Runtime.Serialization.Formatters.Binary.ParseRecord record, System.Runtime.Serialization.Formatters.Binary.ParseRecord parent)
	{
	}
}
