// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000433")]
internal sealed class BinaryAssemblyInfo
{
	[Token(Token = "0x40010B0")]
	[FieldOffset(Offset = "0x10")]
	internal string assemblyString;

	[Token(Token = "0x40010B1")]
	[FieldOffset(Offset = "0x18")]
	private Assembly assembly;

	[Token(Token = "0x60020A7")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal BinaryAssemblyInfo(string assemblyString)
	{
	}

	[Token(Token = "0x60020A8")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal BinaryAssemblyInfo(string assemblyString, Assembly assembly)
	{
	}

	[Token(Token = "0x60020A9")]
	[Address(RVA = "0x1A0BF70", Offset = "0x1A0A570", VA = "0x181A0BF70")]
	internal Assembly GetAssembly()
	{
		return null;
	}
}
