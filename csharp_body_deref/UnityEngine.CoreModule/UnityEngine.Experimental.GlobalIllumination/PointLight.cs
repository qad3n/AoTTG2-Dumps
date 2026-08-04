// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.PointLight
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x200033E")]
public struct PointLight
{
	[Token(Token = "0x4000A61")]
	[FieldOffset(Offset = "0x0")]
	public int instanceID;

	[Token(Token = "0x4000A62")]
	[FieldOffset(Offset = "0x4")]
	public bool shadow;

	[Token(Token = "0x4000A63")]
	[FieldOffset(Offset = "0x5")]
	public LightMode mode;

	[Token(Token = "0x4000A64")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 position;

	[Token(Token = "0x4000A65")]
	[FieldOffset(Offset = "0x14")]
	public Quaternion orientation;

	[Token(Token = "0x4000A66")]
	[FieldOffset(Offset = "0x24")]
	public LinearColor color;

	[Token(Token = "0x4000A67")]
	[FieldOffset(Offset = "0x34")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000A68")]
	[FieldOffset(Offset = "0x44")]
	public float range;

	[Token(Token = "0x4000A69")]
	[FieldOffset(Offset = "0x48")]
	public float sphereRadius;

	[Token(Token = "0x4000A6A")]
	[FieldOffset(Offset = "0x4C")]
	public FalloffType falloff;
}
