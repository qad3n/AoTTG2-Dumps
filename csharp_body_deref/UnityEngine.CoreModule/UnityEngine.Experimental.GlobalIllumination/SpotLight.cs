// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.SpotLight
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x200033F")]
public struct SpotLight
{
	[Token(Token = "0x4000A6B")]
	[FieldOffset(Offset = "0x0")]
	public int instanceID;

	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0x4")]
	public bool shadow;

	[Token(Token = "0x4000A6D")]
	[FieldOffset(Offset = "0x5")]
	public LightMode mode;

	[Token(Token = "0x4000A6E")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 position;

	[Token(Token = "0x4000A6F")]
	[FieldOffset(Offset = "0x14")]
	public Quaternion orientation;

	[Token(Token = "0x4000A70")]
	[FieldOffset(Offset = "0x24")]
	public LinearColor color;

	[Token(Token = "0x4000A71")]
	[FieldOffset(Offset = "0x34")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000A72")]
	[FieldOffset(Offset = "0x44")]
	public float range;

	[Token(Token = "0x4000A73")]
	[FieldOffset(Offset = "0x48")]
	public float sphereRadius;

	[Token(Token = "0x4000A74")]
	[FieldOffset(Offset = "0x4C")]
	public float coneAngle;

	[Token(Token = "0x4000A75")]
	[FieldOffset(Offset = "0x50")]
	public float innerConeAngle;

	[Token(Token = "0x4000A76")]
	[FieldOffset(Offset = "0x54")]
	public FalloffType falloff;

	[Token(Token = "0x4000A77")]
	[FieldOffset(Offset = "0x55")]
	public AngularFalloffType angularFalloff;
}
