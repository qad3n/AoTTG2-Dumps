using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000311")]
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
