// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneForce
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForce.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x200000C")]
[CreateAssetMenu(fileName = "SBForce", menuName = "EZSoftBone/SBForce")]
public class EZSoftBoneForce : ScriptableObject
{
	[Token(Token = "0x200000D")]
	public enum TurbulenceMode
	{
		[Token(Token = "0x400004B")]
		Curve,
		[Token(Token = "0x400004C")]
		Perlin
	}

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private float m_Force;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private Vector3 m_Turbulence;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private TurbulenceMode m_TurbulenceMode;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private Vector3 m_Frequency;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_TimeCycle;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[EZCurveRect(0f, -1f, 1f, 2f)]
	private AnimationCurve m_CurveX;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[EZCurveRect(0f, -1f, 1f, 2f)]
	private AnimationCurve m_CurveY;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[EZCurveRect(0f, -1f, 1f, 2f)]
	private AnimationCurve m_CurveZ;

	[Token(Token = "0x1700001E")]
	public float force
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x31A83D0", Offset = "0x31A73D0", VA = "0x31A83D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x31A83E0", Offset = "0x31A73E0", VA = "0x31A83E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public Vector3 turbulence
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x31A83F0", Offset = "0x31A73F0", VA = "0x31A83F0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x31A8400", Offset = "0x31A7400", VA = "0x31A8400")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public TurbulenceMode turbulenceMode
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x31A8410", Offset = "0x31A7410", VA = "0x31A8410")]
		get
		{
			return default(TurbulenceMode);
		}
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x31A8420", Offset = "0x31A7420", VA = "0x31A8420")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Vector3 frequency
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x31A8430", Offset = "0x31A7430", VA = "0x31A8430")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x31A8440", Offset = "0x31A7440", VA = "0x31A8440")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float timeCycle
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x31A8450", Offset = "0x31A7450", VA = "0x31A8450")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x31A8460", Offset = "0x31A7460", VA = "0x31A8460")]
		set
		{
		}
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x31A8470", Offset = "0x31A7470", VA = "0x31A8470")]
	public Vector3 GetForce(float time)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x31A8630", Offset = "0x31A7630", VA = "0x31A8630")]
	private float Perlin(float x, float y)
	{
		return default(float);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x31A8610", Offset = "0x31A7610", VA = "0x31A8610")]
	private float Curve(AnimationCurve curve, float time)
	{
		return default(float);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x31A8650", Offset = "0x31A7650", VA = "0x31A8650")]
	public EZSoftBoneForce()
	{
	}
}
