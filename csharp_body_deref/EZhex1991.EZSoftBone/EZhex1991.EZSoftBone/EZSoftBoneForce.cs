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

[Token(Token = "0x200000E")]
[CreateAssetMenu(fileName = "SBForce", menuName = "EZSoftBone/SBForce")]
public class EZSoftBoneForce : ScriptableObject
{
	[Token(Token = "0x200000F")]
	public enum TurbulenceMode
	{
		[Token(Token = "0x4000050")]
		Curve,
		[Token(Token = "0x4000051")]
		Perlin
	}

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private float m_Force;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private Vector3 m_Turbulence;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private TurbulenceMode m_TurbulenceMode;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private Vector3 m_Frequency;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_TimeCycle;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[EZCurveRect(0f, -1f, 1f, 2f)]
	private AnimationCurve m_CurveX;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[EZCurveRect(0f, -1f, 1f, 2f)]
	private AnimationCurve m_CurveY;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[EZCurveRect(0f, -1f, 1f, 2f)]
	private AnimationCurve m_CurveZ;

	[Token(Token = "0x1700001E")]
	public float force
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x2398000", Offset = "0x2398000", VA = "0x2398000")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x2398010", Offset = "0x2398010", VA = "0x2398010")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public Vector3 turbulence
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x2398020", Offset = "0x2398020", VA = "0x2398020")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x2398030", Offset = "0x2398030", VA = "0x2398030")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public TurbulenceMode turbulenceMode
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x2398040", Offset = "0x2398040", VA = "0x2398040")]
		get
		{
			return default(TurbulenceMode);
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x2398050", Offset = "0x2398050", VA = "0x2398050")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Vector3 frequency
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x2398060", Offset = "0x2398060", VA = "0x2398060")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x2398070", Offset = "0x2398070", VA = "0x2398070")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float timeCycle
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x2398080", Offset = "0x2398080", VA = "0x2398080")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x2398090", Offset = "0x2398090", VA = "0x2398090")]
		set
		{
		}
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x23980A0", Offset = "0x23980A0", VA = "0x23980A0")]
	public Vector3 GetForce(float time)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2398280", Offset = "0x2398280", VA = "0x2398280")]
	private float Perlin(float x, float y)
	{
		return default(float);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2398260", Offset = "0x2398260", VA = "0x2398260")]
	private float Curve(AnimationCurve curve, float time)
	{
		return default(float);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x23982A0", Offset = "0x23982A0", VA = "0x23982A0")]
	public EZSoftBoneForce()
	{
	}
}
