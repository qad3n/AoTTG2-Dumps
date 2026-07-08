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
	[Address(RVA = "0x4EBD1B0", Offset = "0x4EBD1B0", VA = "0x4EBD1B0")]
	internal BinaryAssemblyInfo(string assemblyString)
	{
	}

	[Token(Token = "0x6002039")]
	[Address(RVA = "0x4EBD1E0", Offset = "0x4EBD1E0", VA = "0x4EBD1E0")]
	internal BinaryAssemblyInfo(string assemblyString, Assembly assembly)
	{
	}

	[Token(Token = "0x600203A")]
	[Address(RVA = "0x4EBD220", Offset = "0x4EBD220", VA = "0x4EBD220")]
	internal Assembly GetAssembly()
	{
		return null;
	}
}
