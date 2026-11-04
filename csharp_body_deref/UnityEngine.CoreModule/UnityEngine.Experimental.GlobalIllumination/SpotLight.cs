// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.SpotLight
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003E6")]
public struct SpotLight
{
	[Token(Token = "0x4000CF2")]
	[FieldOffset(Offset = "0x0")]
	public EntityId entityId;

	[Token(Token = "0x4000CF3")]
	[FieldOffset(Offset = "0x4")]
	public bool shadow;

	[Token(Token = "0x4000CF4")]
	[FieldOffset(Offset = "0x5")]
	public LightMode mode;

	[Token(Token = "0x4000CF5")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 position;

	[Token(Token = "0x4000CF6")]
	[FieldOffset(Offset = "0x14")]
	public Quaternion orientation;

	[Token(Token = "0x4000CF7")]
	[FieldOffset(Offset = "0x24")]
	public LinearColor color;

	[Token(Token = "0x4000CF8")]
	[FieldOffset(Offset = "0x34")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000CF9")]
	[FieldOffset(Offset = "0x44")]
	public float range;

	[Token(Token = "0x4000CFA")]
	[FieldOffset(Offset = "0x48")]
	public float sphereRadius;

	[Token(Token = "0x4000CFB")]
	[FieldOffset(Offset = "0x4C")]
	public float coneAngle;

	[Token(Token = "0x4000CFC")]
	[FieldOffset(Offset = "0x50")]
	public float innerConeAngle;

	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x54")]
	public FalloffType falloff;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x55")]
	public AngularFalloffType angularFalloff;
}
