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

[Token(Token = "0x200045A")]
internal sealed class ValueFixup
{
	[Token(Token = "0x400120A")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum valueFixupEnum;

	[Token(Token = "0x400120B")]
	[FieldOffset(Offset = "0x18")]
	internal Array arrayObj;

	[Token(Token = "0x400120C")]
	[FieldOffset(Offset = "0x20")]
	internal int[] indexMap;

	[Token(Token = "0x400120D")]
	[FieldOffset(Offset = "0x28")]
	internal object header;

	[Token(Token = "0x400120E")]
	[FieldOffset(Offset = "0x30")]
	internal object memberObject;

	[Token(Token = "0x400120F")]
	[FieldOffset(Offset = "0x0")]
	internal static MemberInfo valueInfo;

	[Token(Token = "0x4001210")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo;

	[Token(Token = "0x4001211")]
	[FieldOffset(Offset = "0x40")]
	internal string memberName;

	[Token(Token = "0x600220C")]
	[Address(RVA = "0x1A38E30", Offset = "0x1A37430", VA = "0x181A38E30")]
	internal ValueFixup(Array arrayObj, int[] indexMap)
	{
	}

	[Token(Token = "0x600220D")]
	[Address(RVA = "0x1A38E90", Offset = "0x1A37490", VA = "0x181A38E90")]
	internal ValueFixup(object memberObject, string memberName, System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo)
	{
	}

	[Token(Token = "0x600220E")]
	[Address(RVA = "0x1A38AF0", Offset = "0x1A370F0", VA = "0x181A38AF0")]
	internal void Fixup(System.Runtime.Serialization.Formatters.Binary.ParseRecord record, System.Runtime.Serialization.Formatters.Binary.ParseRecord parent)
	{
	}
}
