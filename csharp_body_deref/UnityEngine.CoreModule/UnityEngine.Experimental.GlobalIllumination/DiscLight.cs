using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x200033E")]
public struct DiscLight
{
	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x0")]
	public int instanceID;

	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x4")]
	public bool shadow;

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x5")]
	public LightMode mode;

	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 position;

	[Token(Token = "0x4000A87")]
	[FieldOffset(Offset = "0x14")]
	public Quaternion orientation;

	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x24")]
	public LinearColor color;

	[Token(Token = "0x4000A89")]
	[FieldOffset(Offset = "0x34")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000A8A")]
	[FieldOffset(Offset = "0x44")]
	public float range;

	[Token(Token = "0x4000A8B")]
	[FieldOffset(Offset = "0x48")]
	public float radius;

	[Token(Token = "0x4000A8C")]
	[FieldOffset(Offset = "0x4C")]
	public FalloffType falloff;
}
