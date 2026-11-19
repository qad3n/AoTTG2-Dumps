// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RangeKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000037")]
internal struct RangeKey : IEquatable<RangeKey>
{
	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x0")]
	public byte layer;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x4")]
	public uint renderingLayerMask;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x8")]
	public MotionVectorGenerationMode motionMode;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0xC")]
	public ShadowCastingMode shadowCastingMode;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x10")]
	public bool staticShadowCaster;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x14")]
	public int rendererPriority;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x18")]
	public bool supportsIndirect;

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x65C22C0", Offset = "0x65C12C0", VA = "0x65C22C0", Slot = "4")]
	public bool Equals(RangeKey other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x65C2310", Offset = "0x65C1310", VA = "0x65C2310", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
