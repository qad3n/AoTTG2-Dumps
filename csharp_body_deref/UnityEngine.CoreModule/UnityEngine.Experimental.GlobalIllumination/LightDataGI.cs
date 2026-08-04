// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.LightDataGI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x2000343")]
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

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x4E38BC0", Offset = "0x4E38BC0", VA = "0x4E38BC0")]
	public void Init(ref DirectionalLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x4E38C30", Offset = "0x4E38C30", VA = "0x4E38C30")]
	public void Init(ref PointLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x4E38CA0", Offset = "0x4E38CA0", VA = "0x4E38CA0")]
	public void Init(ref SpotLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x4E38D10", Offset = "0x4E38D10", VA = "0x4E38D10")]
	public void Init(ref RectangleLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x4E38D80", Offset = "0x4E38D80", VA = "0x4E38D80")]
	public void Init(ref DiscLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x4E38DF0", Offset = "0x4E38DF0", VA = "0x4E38DF0")]
	public void InitNoBake(int lightInstanceID)
	{
	}
}
