// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchFilterSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000314")]
public struct BatchFilterSettings
{
	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x0")]
	public uint renderingLayerMask;

	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x4")]
	public byte layer;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x5")]
	private byte m_motionMode;

	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x6")]
	private byte m_shadowMode;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x7")]
	private byte m_receiveShadows;

	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x8")]
	private byte m_staticShadowCaster;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x9")]
	private byte m_allDepthSorted;
}
