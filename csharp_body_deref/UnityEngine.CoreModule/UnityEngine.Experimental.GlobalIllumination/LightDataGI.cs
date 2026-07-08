using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x2000340")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct LightDataGI
{
	[Token(Token = "0x4000A90")]
	[FieldOffset(Offset = "0x0")]
	public int instanceID;

	[Token(Token = "0x4000A91")]
	[FieldOffset(Offset = "0x4")]
	public int cookieID;

	[Token(Token = "0x4000A92")]
	[FieldOffset(Offset = "0x8")]
	public float cookieScale;

	[Token(Token = "0x4000A93")]
	[FieldOffset(Offset = "0xC")]
	public LinearColor color;

	[Token(Token = "0x4000A94")]
	[FieldOffset(Offset = "0x1C")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000A95")]
	[FieldOffset(Offset = "0x2C")]
	public Quaternion orientation;

	[Token(Token = "0x4000A96")]
	[FieldOffset(Offset = "0x3C")]
	public Vector3 position;

	[Token(Token = "0x4000A97")]
	[FieldOffset(Offset = "0x48")]
	public float range;

	[Token(Token = "0x4000A98")]
	[FieldOffset(Offset = "0x4C")]
	public float coneAngle;

	[Token(Token = "0x4000A99")]
	[FieldOffset(Offset = "0x50")]
	public float innerConeAngle;

	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x54")]
	public float shape0;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x58")]
	public float shape1;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x5C")]
	public LightType type;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x5D")]
	public LightMode mode;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x5E")]
	public byte shadow;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x5F")]
	public FalloffType falloff;

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x4B11290", Offset = "0x4B11290", VA = "0x4B11290")]
	public void Init(ref DirectionalLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x4B11300", Offset = "0x4B11300", VA = "0x4B11300")]
	public void Init(ref PointLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x4B11370", Offset = "0x4B11370", VA = "0x4B11370")]
	public void Init(ref SpotLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x4B113E0", Offset = "0x4B113E0", VA = "0x4B113E0")]
	public void Init(ref RectangleLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x4B11450", Offset = "0x4B11450", VA = "0x4B11450")]
	public void Init(ref DiscLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x4B114C0", Offset = "0x4B114C0", VA = "0x4B114C0")]
	public void InitNoBake(int lightInstanceID)
	{
	}
}
