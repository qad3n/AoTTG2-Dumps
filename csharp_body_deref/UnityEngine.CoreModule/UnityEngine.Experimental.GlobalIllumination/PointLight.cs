// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.PointLight
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003E5")]
public struct PointLight
{
	[Token(Token = "0x4000CE8")]
	[FieldOffset(Offset = "0x0")]
	public EntityId entityId;

	[Token(Token = "0x4000CE9")]
	[FieldOffset(Offset = "0x4")]
	public bool shadow;

	[Token(Token = "0x4000CEA")]
	[FieldOffset(Offset = "0x5")]
	public LightMode mode;

	[Token(Token = "0x4000CEB")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 position;

	[Token(Token = "0x4000CEC")]
	[FieldOffset(Offset = "0x14")]
	public Quaternion orientation;

	[Token(Token = "0x4000CED")]
	[FieldOffset(Offset = "0x24")]
	public LinearColor color;

	[Token(Token = "0x4000CEE")]
	[FieldOffset(Offset = "0x34")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000CEF")]
	[FieldOffset(Offset = "0x44")]
	public float range;

	[Token(Token = "0x4000CF0")]
	[FieldOffset(Offset = "0x48")]
	public float sphereRadius;

	[Token(Token = "0x4000CF1")]
	[FieldOffset(Offset = "0x4C")]
	public FalloffType falloff;
}
