using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000104")]
public class ResolveEventArgs : EventArgs
{
	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly string _003CName_003Ek__BackingField;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly Assembly _003CRequestingAssembly_003Ek__BackingField;

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x4FE6170", Offset = "0x4FE6170", VA = "0x4FE6170")]
	public ResolveEventArgs(string name)
	{
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x4FE61E0", Offset = "0x4FE61E0", VA = "0x4FE61E0")]
	public ResolveEventArgs(string name, Assembly requestingAssembly)
	{
	}
}
