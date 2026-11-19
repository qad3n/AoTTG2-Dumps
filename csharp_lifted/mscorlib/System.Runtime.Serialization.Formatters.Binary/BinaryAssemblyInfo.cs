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

[Token(Token = "0x200040C")]
internal sealed class BinaryAssemblyInfo
{
	[Token(Token = "0x4001010")]
	[FieldOffset(Offset = "0x10")]
	internal string assemblyString;

	[Token(Token = "0x4001011")]
	[FieldOffset(Offset = "0x18")]
	private Assembly assembly;

	[Token(Token = "0x600207D")]
	[Address(RVA = "0x53AA0D0", Offset = "0x53A90D0", VA = "0x53AA0D0")]
	internal BinaryAssemblyInfo(string assemblyString)
	{
	}

	[Token(Token = "0x600207E")]
	[Address(RVA = "0x53AA100", Offset = "0x53A9100", VA = "0x53AA100")]
	internal BinaryAssemblyInfo(string assemblyString, Assembly assembly)
	{
	}

	[Token(Token = "0x600207F")]
	[Address(RVA = "0x53AA140", Offset = "0x53A9140", VA = "0x53AA140")]
	internal Assembly GetAssembly()
	{
		return null;
	}
}
