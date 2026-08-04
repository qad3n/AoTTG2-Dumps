// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000008")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public sealed class PostProcessAttribute : Attribute
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x10")]
	public readonly Type renderer;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x18")]
	public readonly PostProcessEvent eventType;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x20")]
	public readonly string menuItem;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x28")]
	public readonly bool allowInSceneView;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x29")]
	internal readonly bool builtinEffect;

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4B32660", Offset = "0x4B32660", VA = "0x4B32660")]
	public PostProcessAttribute(Type renderer, PostProcessEvent eventType, string menuItem, bool allowInSceneView = true)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4B326C0", Offset = "0x4B326C0", VA = "0x4B326C0")]
	internal PostProcessAttribute(Type renderer, string menuItem, bool allowInSceneView = true)
	{
	}
}
