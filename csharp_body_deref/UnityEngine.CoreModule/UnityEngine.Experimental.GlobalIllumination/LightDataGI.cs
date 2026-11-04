// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.LightDataGI
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003EA")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct LightDataGI
{
	[Token(Token = "0x4000D17")]
	[FieldOffset(Offset = "0x0")]
	public EntityId entityId;

	[Token(Token = "0x4000D18")]
	[FieldOffset(Offset = "0x4")]
	public EntityId cookieTextureEntityId;

	[Token(Token = "0x4000D19")]
	[FieldOffset(Offset = "0x8")]
	public float cookieScale;

	[Token(Token = "0x4000D1A")]
	[FieldOffset(Offset = "0xC")]
	public LinearColor color;

	[Token(Token = "0x4000D1B")]
	[FieldOffset(Offset = "0x1C")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000D1C")]
	[FieldOffset(Offset = "0x2C")]
	public Quaternion orientation;

	[Token(Token = "0x4000D1D")]
	[FieldOffset(Offset = "0x3C")]
	public Vector3 position;

	[Token(Token = "0x4000D1E")]
	[FieldOffset(Offset = "0x48")]
	public float range;

	[Token(Token = "0x4000D1F")]
	[FieldOffset(Offset = "0x4C")]
	public float coneAngle;

	[Token(Token = "0x4000D20")]
	[FieldOffset(Offset = "0x50")]
	public float innerConeAngle;

	[Token(Token = "0x4000D21")]
	[FieldOffset(Offset = "0x54")]
	public float shape0;

	[Token(Token = "0x4000D22")]
	[FieldOffset(Offset = "0x58")]
	public float shape1;

	[Token(Token = "0x4000D23")]
	[FieldOffset(Offset = "0x5C")]
	public LightType type;

	[Token(Token = "0x4000D24")]
	[FieldOffset(Offset = "0x5D")]
	public LightMode mode;

	[Token(Token = "0x4000D25")]
	[FieldOffset(Offset = "0x5E")]
	public byte shadow;

	[Token(Token = "0x4000D26")]
	[FieldOffset(Offset = "0x5F")]
	public FalloffType falloff;

	[Token(Token = "0x60017B5")]
	[Address(RVA = "0x2F77E10", Offset = "0x2F76410", VA = "0x182F77E10")]
	public void Init(ref DirectionalLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017B6")]
	[Address(RVA = "0x2F77F40", Offset = "0x2F76540", VA = "0x182F77F40")]
	public void Init(ref PointLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017B7")]
	[Address(RVA = "0x2F77D90", Offset = "0x2F76390", VA = "0x182F77D90")]
	public void Init(ref SpotLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017B8")]
	[Address(RVA = "0x2F780B0", Offset = "0x2F766B0", VA = "0x182F780B0")]
	public void Init(ref RectangleLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017B9")]
	[Address(RVA = "0x2F77FB0", Offset = "0x2F765B0", VA = "0x182F77FB0")]
	public void Init(ref DiscLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x2F78020", Offset = "0x2F76620", VA = "0x182F78020")]
	public void Init(ref DirectionalLight light)
	{
	}

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x2F78120", Offset = "0x2F76720", VA = "0x182F78120")]
	public void Init(ref PointLight light)
	{
	}

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x2F77E90", Offset = "0x2F76490", VA = "0x182F77E90")]
	public void Init(ref SpotLight light)
	{
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x2F77D80", Offset = "0x2F76380", VA = "0x182F77D80")]
	public void InitNoBake(EntityId lightEntityId)
	{
	}
}
