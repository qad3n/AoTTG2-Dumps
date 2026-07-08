using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x200033D")]
public struct RectangleLight
{
	[Token(Token = "0x4000A78")]
	[FieldOffset(Offset = "0x0")]
	public int instanceID;

	[Token(Token = "0x4000A79")]
	[FieldOffset(Offset = "0x4")]
	public bool shadow;

	[Token(Token = "0x4000A7A")]
	[FieldOffset(Offset = "0x5")]
	public LightMode mode;

	[Token(Token = "0x4000A7B")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 position;

	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0x14")]
	public Quaternion orientation;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0x24")]
	public LinearColor color;

	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0x34")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0x44")]
	public float range;

	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0x48")]
	public float width;

	[Token(Token = "0x4000A81")]
	[FieldOffset(Offset = "0x4C")]
	public float height;

	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0x50")]
	public FalloffType falloff;
}
