// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPairPoint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200001E")]
public readonly struct ContactPairPoint
{
	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Vector3 m_Position;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0xC")]
	internal readonly float m_Separation;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Vector3 m_Normal;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x1C")]
	internal readonly uint m_InternalFaceIndex0;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x20")]
	internal readonly Vector3 m_Impulse;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x2C")]
	internal readonly uint m_InternalFaceIndex1;
}
