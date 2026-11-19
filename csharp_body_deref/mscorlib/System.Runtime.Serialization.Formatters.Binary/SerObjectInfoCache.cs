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

[Token(Token = "0x2000427")]
internal sealed class SerObjectInfoCache
{
	[Token(Token = "0x40010E6")]
	[FieldOffset(Offset = "0x10")]
	internal string fullTypeName;

	[Token(Token = "0x40010E7")]
	[FieldOffset(Offset = "0x18")]
	internal string assemblyString;

	[Token(Token = "0x40010E8")]
	[FieldOffset(Offset = "0x20")]
	internal bool hasTypeForwardedFrom;

	[Token(Token = "0x40010E9")]
	[FieldOffset(Offset = "0x28")]
	internal MemberInfo[] memberInfos;

	[Token(Token = "0x40010EA")]
	[FieldOffset(Offset = "0x30")]
	internal string[] memberNames;

	[Token(Token = "0x40010EB")]
	[FieldOffset(Offset = "0x38")]
	internal Type[] memberTypes;

	[Token(Token = "0x600214F")]
	[Address(RVA = "0x53B3B80", Offset = "0x53B2B80", VA = "0x53B3B80")]
	internal SerObjectInfoCache(string typeName, string assemblyName, bool hasTypeForwardedFrom)
	{
	}

	[Token(Token = "0x6002150")]
	[Address(RVA = "0x53B3AF0", Offset = "0x53B2AF0", VA = "0x53B3AF0")]
	internal SerObjectInfoCache(Type type)
	{
	}
}
