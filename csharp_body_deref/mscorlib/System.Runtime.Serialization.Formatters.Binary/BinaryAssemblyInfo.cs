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

[Token(Token = "0x2000404")]
internal sealed class BinaryAssemblyInfo
{
	[Token(Token = "0x40010AE")]
	[FieldOffset(Offset = "0x10")]
	internal string assemblyString;

	[Token(Token = "0x40010AF")]
	[FieldOffset(Offset = "0x18")]
	private Assembly assembly;

	[Token(Token = "0x6002038")]
	[Address(RVA = "0x3BA2CD0", Offset = "0x3BA2CD0", VA = "0x3BA2CD0")]
	internal BinaryAssemblyInfo(string assemblyString)
	{
	}

	[Token(Token = "0x6002039")]
	[Address(RVA = "0x3BA2D00", Offset = "0x3BA2D00", VA = "0x3BA2D00")]
	internal BinaryAssemblyInfo(string assemblyString, Assembly assembly)
	{
	}

	[Token(Token = "0x600203A")]
	[Address(RVA = "0x3BA2D40", Offset = "0x3BA2D40", VA = "0x3BA2D40")]
	internal Assembly GetAssembly()
	{
		return null;
	}
}
