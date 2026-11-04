// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.RectangleLight
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003E7")]
public struct RectangleLight
{
	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x0")]
	public EntityId entityId;

	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x4")]
	public bool shadow;

	[Token(Token = "0x4000D01")]
	[FieldOffset(Offset = "0x5")]
	public LightMode mode;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 position;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x14")]
	public Quaternion orientation;

	[Token(Token = "0x4000D04")]
	[FieldOffset(Offset = "0x24")]
	public LinearColor color;

	[Token(Token = "0x4000D05")]
	[FieldOffset(Offset = "0x34")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000D06")]
	[FieldOffset(Offset = "0x44")]
	public float range;

	[Token(Token = "0x4000D07")]
	[FieldOffset(Offset = "0x48")]
	public float width;

	[Token(Token = "0x4000D08")]
	[FieldOffset(Offset = "0x4C")]
	public float height;

	[Token(Token = "0x4000D09")]
	[FieldOffset(Offset = "0x50")]
	public FalloffType falloff;
}
