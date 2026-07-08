using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000091")]
public class AssemblyLoadEventArgs : EventArgs
{
	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly Assembly _003CLoadedAssembly_003Ek__BackingField;

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x4F2E320", Offset = "0x4F2E320", VA = "0x4F2E320")]
	public AssemblyLoadEventArgs(Assembly loadedAssembly)
	{
	}
}
