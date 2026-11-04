// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUILayoutOption
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000011")]
public sealed class GUILayoutOption
{
	[Token(Token = "0x2000012")]
	internal enum Type
	{
		[Token(Token = "0x4000066")]
		fixedWidth,
		[Token(Token = "0x4000067")]
		fixedHeight,
		[Token(Token = "0x4000068")]
		minWidth,
		[Token(Token = "0x4000069")]
		maxWidth,
		[Token(Token = "0x400006A")]
		minHeight,
		[Token(Token = "0x400006B")]
		maxHeight,
		[Token(Token = "0x400006C")]
		stretchWidth,
		[Token(Token = "0x400006D")]
		stretchHeight,
		[Token(Token = "0x400006E")]
		alignStart,
		[Token(Token = "0x400006F")]
		alignMiddle,
		[Token(Token = "0x4000070")]
		alignEnd,
		[Token(Token = "0x4000071")]
		alignJustify,
		[Token(Token = "0x4000072")]
		equalSize,
		[Token(Token = "0x4000073")]
		spacing
	}

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x10")]
	internal Type type;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x18")]
	internal object value;

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0xC83FB0", Offset = "0xC825B0", VA = "0x180C83FB0")]
	internal GUILayoutOption(Type type, object value)
	{
	}
}
