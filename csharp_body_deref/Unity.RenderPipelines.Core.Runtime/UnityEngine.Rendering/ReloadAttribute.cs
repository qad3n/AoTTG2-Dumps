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
	[Address(RVA = "0x4C03460", Offset = "0x4C03460", VA = "0x4C03460")]
	public ReloadAttribute(string[] paths, Package package = Package.Root)
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x4C03470", Offset = "0x4C03470", VA = "0x4C03470")]
	public ReloadAttribute(string path, Package package = Package.Root)
	{
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x4C034F0", Offset = "0x4C034F0", VA = "0x4C034F0")]
	public ReloadAttribute(string pathFormat, int rangeMin, int rangeMax, Package package = Package.Root)
	{
	}
}
