using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001CB")]
[AttributeUsage(AttributeTargets.Field)]
public sealed class ReloadAttribute : Attribute
{
	[Token(Token = "0x20001CC")]
	public enum Package
	{
		[Token(Token = "0x40007E8")]
		Builtin,
		[Token(Token = "0x40007E9")]
		Root,
		[Token(Token = "0x40007EA")]
		BuiltinExtra
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x48DE3F0", Offset = "0x48DE3F0", VA = "0x48DE3F0")]
	public ReloadAttribute(string[] paths, Package package = Package.Root)
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x48DE400", Offset = "0x48DE400", VA = "0x48DE400")]
	public ReloadAttribute(string path, Package package = Package.Root)
	{
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x48DE480", Offset = "0x48DE480", VA = "0x48DE480")]
	public ReloadAttribute(string pathFormat, int rangeMin, int rangeMax, Package package = Package.Root)
	{
	}
}
