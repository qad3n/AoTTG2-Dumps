// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PenData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000008")]
public struct PenData
{
	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 position;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 tilt;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x10")]
	public PenStatus penStatus;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x14")]
	public float twist;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x18")]
	public float pressure;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x1C")]
	public PenEventType contactType;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x20")]
	public Vector2 deltaPos;
}
