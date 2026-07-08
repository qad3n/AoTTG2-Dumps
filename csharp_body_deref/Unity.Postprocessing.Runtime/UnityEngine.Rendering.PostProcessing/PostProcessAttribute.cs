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
	[Address(RVA = "0x480D570", Offset = "0x480D570", VA = "0x480D570")]
	public PostProcessAttribute(Type renderer, PostProcessEvent eventType, string menuItem, bool allowInSceneView = true)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x480D5D0", Offset = "0x480D5D0", VA = "0x480D5D0")]
	internal PostProcessAttribute(Type renderer, string menuItem, bool allowInSceneView = true)
	{
	}
}
