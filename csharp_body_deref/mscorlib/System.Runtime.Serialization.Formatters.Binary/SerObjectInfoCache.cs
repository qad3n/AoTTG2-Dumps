// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041F")]
internal sealed class SerObjectInfoCache
{
	[Token(Token = "0x4001184")]
	[FieldOffset(Offset = "0x10")]
	internal string fullTypeName;

	[Token(Token = "0x4001185")]
	[FieldOffset(Offset = "0x18")]
	internal string assemblyString;

	[Token(Token = "0x4001186")]
	[FieldOffset(Offset = "0x20")]
	internal bool hasTypeForwardedFrom;

	[Token(Token = "0x4001187")]
	[FieldOffset(Offset = "0x28")]
	internal MemberInfo[] memberInfos;

	[Token(Token = "0x4001188")]
	[FieldOffset(Offset = "0x30")]
	internal string[] memberNames;

	[Token(Token = "0x4001189")]
	[FieldOffset(Offset = "0x38")]
	internal Type[] memberTypes;

	[Token(Token = "0x600210A")]
	[Address(RVA = "0x3BAC940", Offset = "0x3BAC940", VA = "0x3BAC940")]
	internal SerObjectInfoCache(string typeName, string assemblyName, bool hasTypeForwardedFrom)
	{
	}

	[Token(Token = "0x600210B")]
	[Address(RVA = "0x3BAC8B0", Offset = "0x3BAC8B0", VA = "0x3BAC8B0")]
	internal SerObjectInfoCache(Type type)
	{
	}
}
