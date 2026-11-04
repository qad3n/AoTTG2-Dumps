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

[Token(Token = "0x200044E")]
internal sealed class SerObjectInfoCache
{
	[Token(Token = "0x4001186")]
	[FieldOffset(Offset = "0x10")]
	internal string fullTypeName;

	[Token(Token = "0x4001187")]
	[FieldOffset(Offset = "0x18")]
	internal string assemblyString;

	[Token(Token = "0x4001188")]
	[FieldOffset(Offset = "0x20")]
	internal bool hasTypeForwardedFrom;

	[Token(Token = "0x4001189")]
	[FieldOffset(Offset = "0x28")]
	internal MemberInfo[] memberInfos;

	[Token(Token = "0x400118A")]
	[FieldOffset(Offset = "0x30")]
	internal string[] memberNames;

	[Token(Token = "0x400118B")]
	[FieldOffset(Offset = "0x38")]
	internal Type[] memberTypes;

	[Token(Token = "0x6002179")]
	[Address(RVA = "0x1A1E5E0", Offset = "0x1A1CBE0", VA = "0x181A1E5E0")]
	internal SerObjectInfoCache(string typeName, string assemblyName, bool hasTypeForwardedFrom)
	{
	}

	[Token(Token = "0x600217A")]
	[Address(RVA = "0x1A1E630", Offset = "0x1A1CC30", VA = "0x181A1E630")]
	internal SerObjectInfoCache(Type type)
	{
	}
}
