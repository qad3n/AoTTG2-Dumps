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
	[Address(RVA = "0x4EC6E20", Offset = "0x4EC6E20", VA = "0x4EC6E20")]
	internal SerObjectInfoCache(string typeName, string assemblyName, bool hasTypeForwardedFrom)
	{
	}

	[Token(Token = "0x600210B")]
	[Address(RVA = "0x4EC6D90", Offset = "0x4EC6D90", VA = "0x4EC6D90")]
	internal SerObjectInfoCache(Type type)
	{
	}
}
