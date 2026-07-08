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
		[Address(RVA = "0x2359EF0", Offset = "0x2359EF0", VA = "0x2359EF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x2359F00", Offset = "0x2359F00", VA = "0x2359F00")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public Vector3 turbulence
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x2359F10", Offset = "0x2359F10", VA = "0x2359F10")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x2359F20", Offset = "0x2359F20", VA = "0x2359F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public TurbulenceMode turbulenceMode
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x2359F30", Offset = "0x2359F30", VA = "0x2359F30")]
		get
		{
			return default(TurbulenceMode);
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x2359F40", Offset = "0x2359F40", VA = "0x2359F40")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Vector3 frequency
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x2359F50", Offset = "0x2359F50", VA = "0x2359F50")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x2359F60", Offset = "0x2359F60", VA = "0x2359F60")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float timeCycle
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x2359F70", Offset = "0x2359F70", VA = "0x2359F70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x2359F80", Offset = "0x2359F80", VA = "0x2359F80")]
		set
		{
		}
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2359F90", Offset = "0x2359F90", VA = "0x2359F90")]
	public Vector3 GetForce(float time)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x235A170", Offset = "0x235A170", VA = "0x235A170")]
	private float Perlin(float x, float y)
	{
		return default(float);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x235A150", Offset = "0x235A150", VA = "0x235A150")]
	private float Curve(AnimationCurve curve, float time)
	{
		return default(float);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x235A190", Offset = "0x235A190", VA = "0x235A190")]
	public EZSoftBoneForce()
	{
	}
}
