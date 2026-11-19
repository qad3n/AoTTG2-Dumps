// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneForce
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForce.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$get_force): clean
			return this.m_Force;
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x31A83E0", Offset = "0x31A73E0", VA = "0x31A83E0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$set_force): clean
			this.m_Force = value;
			return;
		}
	}

	[Token(Token = "0x1700001F")]
	public Vector3 turbulence
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x31A83F0", Offset = "0x31A73F0", VA = "0x31A83F0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$get_turbulence): clean
			return (Vector3)this.m_Turbulence;
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x31A8400", Offset = "0x31A7400", VA = "0x31A8400")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$set_turbulence): clean
			this.m_Turbulence.x = value.x;
			this.m_Turbulence.y = value.y;
			this.m_Turbulence.z = value.z;
			return;
		}
	}

	[Token(Token = "0x17000020")]
	public TurbulenceMode turbulenceMode
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x31A8410", Offset = "0x31A7410", VA = "0x31A8410")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$get_turbulenceMode): clean
			return this.m_TurbulenceMode;
		}
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x31A8420", Offset = "0x31A7420", VA = "0x31A8420")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$set_turbulenceMode): clean
			this.m_TurbulenceMode = value;
			return;
		}
	}

	[Token(Token = "0x17000021")]
	public Vector3 frequency
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x31A8430", Offset = "0x31A7430", VA = "0x31A8430")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$get_frequency): clean
			return (Vector3)this.m_Frequency;
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x31A8440", Offset = "0x31A7440", VA = "0x31A8440")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$set_frequency): clean
			this.m_Frequency.x = value.x;
			this.m_Frequency.y = value.y;
			this.m_Frequency.z = value.z;
			return;
		}
	}

	[Token(Token = "0x17000022")]
	public float timeCycle
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x31A8450", Offset = "0x31A7450", VA = "0x31A8450")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$get_timeCycle): clean
			return this.m_TimeCycle;
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x31A8460", Offset = "0x31A7460", VA = "0x31A8460")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$set_timeCycle): clean
			float fVar1;

			fVar1 = 0.0;
			if (0.0 <= value) {
				fVar1 = value;
			}
			this.m_TimeCycle = fVar1;
			return;
		}
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x31A8470", Offset = "0x31A7470", VA = "0x31A8470")]
	public Vector3 GetForce(float time)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$GetForce): clean
		float fVar1;
		float fVar2;
		int iVar3;
		AnimationCurve pUVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 UVar9;

		fVar1 = this.m_Turbulence.x;
		fVar2 = this.m_Turbulence.y;
		fVar6 = this.m_Turbulence.z;
		iVar3 = this.m_TurbulenceMode;
		if (iVar3 == 1) {
			fVar5 = Mathf.PerlinNoise(this.m_Frequency.x * time, 0.0) ;
			fVar7 = Mathf.PerlinNoise(this.m_Frequency.y * time, 0.5) ;
			fVar5 = fVar5 + fVar5 + -1.0;
			fVar7 = fVar7 + fVar7 + -1.0;
			fVar8 = Mathf.PerlinNoise(time * this.m_Frequency.z, 1.0) ;
			fVar8 = fVar8 + fVar8 + -1.0;
		}
		else {
			if (iVar3 != 0) goto label_032a85f6;
			fVar8 = this.m_TimeCycle;
			fVar5 = floorf(time / fVar8);
			pUVar4 = this.m_CurveX;
			if (pUVar4 == null) {
	label_032a8607: ;
				throw new NullReferenceException();
			}
			fVar7 = time - fVar5 * fVar8;
			fVar5 = fVar8;
			if (fVar7 <= fVar8) {
				fVar5 = fVar7;
			}
			fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar5) / fVar8;
			fVar5 = pUVar4.Evaluate(fVar8);
			pUVar4 = this.m_CurveY;
			if (pUVar4 == null) goto label_032a8607;
			fVar7 = pUVar4.Evaluate(fVar8);
			pUVar4 = this.m_CurveZ;
			if (pUVar4 == null) goto label_032a8607;
			fVar8 = pUVar4.Evaluate(fVar8);
		}
		fVar2 = fVar2 * fVar7;
		fVar1 = fVar1 * fVar5;
		fVar6 = fVar6 * fVar8;
	label_032a85f6: ;
		UVar9.x = fVar1 + 0.0;
		UVar9.y = fVar2 + 0.0;
		UVar9.z = fVar6 + this.m_Force;
		return (Vector3)UVar9;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x31A8630", Offset = "0x31A7630", VA = "0x31A8630")]
	private float Perlin(float x, float y)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$Perlin): clean
		float fVar1;

		fVar1 = Mathf.PerlinNoise(x, y);
		return fVar1 + fVar1 + -1.0;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x31A8610", Offset = "0x31A7610", VA = "0x31A8610")]
	private float Curve(AnimationCurve curve, float time)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$Curve): clean
		float fVar1;

		if (curve == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x31A8650", Offset = "0x31A7650", VA = "0x31A8650")]
	public EZSoftBoneForce()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForce.c (EZhex1991.EZSoftBone.EZSoftBoneForce$$.ctor): 1 lines keep C-only constructs
		AnimationCurve pUVar1;

		this.m_Force = 1.0;
		this.m_Turbulence.x = 1.0;
		this.m_Turbulence.y = 0.5;
		this.m_Turbulence.z = 2.0;
		this.m_TurbulenceMode = 1;
		this.m_Frequency.x = 1.0;
		this.m_Frequency.y = 1.0;
		*(ulong)&this.m_Frequency.z = 0x400000003fc00000;
		pUVar1 = AnimationCurve.Linear(0.0, 0.0, 1.0, 1.0);
		this.m_CurveX = pUVar1;
		pUVar1 = AnimationCurve.EaseInOut(0.0, 0.0, 1.0, 1.0);
		this.m_CurveY = pUVar1;
		pUVar1 = AnimationCurve.EaseInOut(0.0, 1.0, 1.0, 0.0);
		this.m_CurveZ = pUVar1;
		base();
		return;
	}
}
