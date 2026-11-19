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

[Token(Token = "0x20003EA")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct LightDataGI
{
	[Token(Token = "0x4000D15")]
	[FieldOffset(Offset = "0x0")]
	public EntityId entityId;

	[Token(Token = "0x4000D16")]
	[FieldOffset(Offset = "0x4")]
	public EntityId cookieTextureEntityId;

	[Token(Token = "0x4000D17")]
	[FieldOffset(Offset = "0x8")]
	public float cookieScale;

	[Token(Token = "0x4000D18")]
	[FieldOffset(Offset = "0xC")]
	public LinearColor color;

	[Token(Token = "0x4000D19")]
	[FieldOffset(Offset = "0x1C")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000D1A")]
	[FieldOffset(Offset = "0x2C")]
	public Quaternion orientation;

	[Token(Token = "0x4000D1B")]
	[FieldOffset(Offset = "0x3C")]
	public Vector3 position;

	[Token(Token = "0x4000D1C")]
	[FieldOffset(Offset = "0x48")]
	public float range;

	[Token(Token = "0x4000D1D")]
	[FieldOffset(Offset = "0x4C")]
	public float coneAngle;

	[Token(Token = "0x4000D1E")]
	[FieldOffset(Offset = "0x50")]
	public float innerConeAngle;

	[Token(Token = "0x4000D1F")]
	[FieldOffset(Offset = "0x54")]
	public float shape0;

	[Token(Token = "0x4000D20")]
	[FieldOffset(Offset = "0x58")]
	public float shape1;

	[Token(Token = "0x4000D21")]
	[FieldOffset(Offset = "0x5C")]
	public LightType type;

	[Token(Token = "0x4000D22")]
	[FieldOffset(Offset = "0x5D")]
	public LightMode mode;

	[Token(Token = "0x4000D23")]
	[FieldOffset(Offset = "0x5E")]
	public byte shadow;

	[Token(Token = "0x4000D24")]
	[FieldOffset(Offset = "0x5F")]
	public FalloffType falloff;

	[Token(Token = "0x60017C9")]
	[Address(RVA = "0x696B1F0", Offset = "0x696A1F0", VA = "0x696B1F0")]
	public void Init(ref DirectionalLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017CA")]
	[Address(RVA = "0x696B270", Offset = "0x696A270", VA = "0x696B270")]
	public void Init(ref PointLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x696B2F0", Offset = "0x696A2F0", VA = "0x696B2F0")]
	public void Init(ref SpotLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017CC")]
	[Address(RVA = "0x696B360", Offset = "0x696A360", VA = "0x696B360")]
	public void Init(ref RectangleLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017CD")]
	[Address(RVA = "0x696B3D0", Offset = "0x696A3D0", VA = "0x696B3D0")]
	public void Init(ref DiscLight light, ref Cookie cookie)
	{
	}

	[Token(Token = "0x60017CE")]
	[Address(RVA = "0x696B450", Offset = "0x696A450", VA = "0x696B450")]
	public void Init(ref DirectionalLight light)
	{
	}

	[Token(Token = "0x60017CF")]
	[Address(RVA = "0x696B4E0", Offset = "0x696A4E0", VA = "0x696B4E0")]
	public void Init(ref PointLight light)
	{
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x696B580", Offset = "0x696A580", VA = "0x696B580")]
	public void Init(ref SpotLight light)
	{
	}

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x696B610", Offset = "0x696A610", VA = "0x696B610")]
	public void InitNoBake(EntityId lightEntityId)
	{
	}
}
