// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUILayoutOption
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000010")]
public sealed class GUILayoutOption
{
	[Token(Token = "0x2000011")]
	internal enum Type
	{
		[Token(Token = "0x4000064")]
		fixedWidth,
		[Token(Token = "0x4000065")]
		fixedHeight,
		[Token(Token = "0x4000066")]
		minWidth,
		[Token(Token = "0x4000067")]
		maxWidth,
		[Token(Token = "0x4000068")]
		minHeight,
		[Token(Token = "0x4000069")]
		maxHeight,
		[Token(Token = "0x400006A")]
		stretchWidth,
		[Token(Token = "0x400006B")]
		stretchHeight,
		[Token(Token = "0x400006C")]
		alignStart,
		[Token(Token = "0x400006D")]
		alignMiddle,
		[Token(Token = "0x400006E")]
		alignEnd,
		[Token(Token = "0x400006F")]
		alignJustify,
		[Token(Token = "0x4000070")]
		equalSize,
		[Token(Token = "0x4000071")]
		spacing
	}

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x10")]
	internal Type type;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x18")]
	internal object value;

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4E511D0", Offset = "0x4E511D0", VA = "0x4E511D0")]
	internal GUILayoutOption(Type type, object value)
	{
	}
}
