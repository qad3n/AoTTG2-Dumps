using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000FD")]
internal class ExtensionMethodCache
{
	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x10")]
	internal readonly MethodInfo[] Cache;

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x49AA220", Offset = "0x49AA220", VA = "0x49AA220")]
	internal ExtensionMethodCache()
	{
	}
}
