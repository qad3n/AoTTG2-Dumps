// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ReloadAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200005F")]
[AttributeUsage(AttributeTargets.Field)]
public sealed class ReloadAttribute : Attribute
{
	[Token(Token = "0x2000060")]
	public enum Package
	{
		[Token(Token = "0x4000153")]
		Builtin,
		[Token(Token = "0x4000154")]
		Root,
		[Token(Token = "0x4000155")]
		BuiltinExtra
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ReloadAttribute(string[] paths, Package package = Package.Root)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x2AE48E0", Offset = "0x2AE2EE0", VA = "0x182AE48E0")]
	public ReloadAttribute(string path, Package package = Package.Root)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ReloadAttribute(string pathFormat, int rangeMin, int rangeMax, Package package = Package.Root)
	{
	}
}
