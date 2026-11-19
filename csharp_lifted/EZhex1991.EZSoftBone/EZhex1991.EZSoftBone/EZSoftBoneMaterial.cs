// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneMaterial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x200000F")]
[CreateAssetMenu(fileName = "SBMat", menuName = "EZSoftBone/SBMaterial")]
public class EZSoftBoneMaterial : ScriptableObject
{
	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Damping;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_DampingCurve;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Stiffness;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_StiffnessCurve;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Resistance;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_ResistanceCurve;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Slackness;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_SlacknessCurve;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x0")]
	private static EZSoftBoneMaterial m_DefaultMaterial;

	[Token(Token = "0x17000026")]
	public float damping
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x31A87B0", Offset = "0x31A77B0", VA = "0x31A87B0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_damping): clean
			return this.m_Damping;
		}
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x31A87C0", Offset = "0x31A77C0", VA = "0x31A87C0")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_damping): clean
			float fVar1;

			fVar1 = 1.0;
			if (value <= 1.0) {
				fVar1 = value;
			}
			this.m_Damping = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
			return;
		}
	}

	[Token(Token = "0x17000027")]
	public AnimationCurve dampingCurve
	{
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x31A87E0", Offset = "0x31A77E0", VA = "0x31A87E0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_dampingCurve): clean
			return this.m_DampingCurve;
		}
	}

	[Token(Token = "0x17000028")]
	public float stiffness
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x31A87F0", Offset = "0x31A77F0", VA = "0x31A87F0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_stiffness): clean
			return this.m_Stiffness;
		}
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x31A8800", Offset = "0x31A7800", VA = "0x31A8800")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_stiffness): clean
			float fVar1;

			fVar1 = 1.0;
			if (value <= 1.0) {
				fVar1 = value;
			}
			this.m_Stiffness = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
			return;
		}
	}

	[Token(Token = "0x17000029")]
	public AnimationCurve stiffnessCurve
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x31A8820", Offset = "0x31A7820", VA = "0x31A8820")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_stiffnessCurve): clean
			return this.m_StiffnessCurve;
		}
	}

	[Token(Token = "0x1700002A")]
	public float resistance
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x31A8830", Offset = "0x31A7830", VA = "0x31A8830")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_resistance): clean
			return this.m_Resistance;
		}
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x31A8840", Offset = "0x31A7840", VA = "0x31A8840")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_resistance): clean
			float fVar1;

			fVar1 = 1.0;
			if (value <= 1.0) {
				fVar1 = value;
			}
			this.m_Resistance = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
			return;
		}
	}

	[Token(Token = "0x1700002B")]
	public AnimationCurve resistanceCurve
	{
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x31A8860", Offset = "0x31A7860", VA = "0x31A8860")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_resistanceCurve): clean
			return this.m_ResistanceCurve;
		}
	}

	[Token(Token = "0x1700002C")]
	public float slackness
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x31A8870", Offset = "0x31A7870", VA = "0x31A8870")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_slackness): clean
			return this.m_Slackness;
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x31A8880", Offset = "0x31A7880", VA = "0x31A8880")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_slackness): clean
			float fVar1;

			fVar1 = 1.0;
			if (value <= 1.0) {
				fVar1 = value;
			}
			this.m_Slackness = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
			return;
		}
	}

	[Token(Token = "0x1700002D")]
	public AnimationCurve slacknessCurve
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x31A88A0", Offset = "0x31A78A0", VA = "0x31A88A0")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_slacknessCurve): clean
			return this.m_SlacknessCurve;
		}
	}

	[Token(Token = "0x1700002E")]
	public static EZSoftBoneMaterial defaultMaterial
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x31A2950", Offset = "0x31A1950", VA = "0x31A2950")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_defaultMaterial): clean
			bool bVar1;
			EZSoftBoneMaterial pEVar2;

			pEVar2 = EZSoftBoneMaterial.m_DefaultMaterial;
			bVar1 = ((Object)pEVar2 == null);
			if (bVar1) {
				pEVar2 = ScriptableObject.CreateInstance<EZSoftBoneMaterial>();
				EZSoftBoneMaterial.m_DefaultMaterial = pEVar2;
			}
			pEVar2 = EZSoftBoneMaterial.m_DefaultMaterial;
			if (pEVar2 == null) {
				throw new NullReferenceException();
			}
			pEVar2.name = "SBMat_Default";
			return EZSoftBoneMaterial.m_DefaultMaterial;
		}
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x31A6B90", Offset = "0x31A5B90", VA = "0x31A6B90")]
	public float GetDamping(float t)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetDamping): clean
		float fVar1;
		AnimationCurve __this_00;
		float fVar2;

		__this_00 = this.m_DampingCurve;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar2 = __this_00.Evaluate(t);
		return fVar2 * fVar1;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x31A6BC0", Offset = "0x31A5BC0", VA = "0x31A6BC0")]
	public float GetStiffness(float t)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetStiffness): clean
		float fVar1;
		AnimationCurve __this_00;
		float fVar2;

		__this_00 = this.m_StiffnessCurve;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar2 = __this_00.Evaluate(t);
		return fVar2 * fVar1;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x31A6BF0", Offset = "0x31A5BF0", VA = "0x31A6BF0")]
	public float GetResistance(float t)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetResistance): clean
		float fVar1;
		AnimationCurve __this_00;
		float fVar2;

		__this_00 = this.m_ResistanceCurve;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar2 = __this_00.Evaluate(t);
		return fVar2 * fVar1;
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x31A6C20", Offset = "0x31A5C20", VA = "0x31A6C20")]
	public float GetSlackness(float t)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetSlackness): clean
		float fVar1;
		AnimationCurve __this_00;
		float fVar2;

		__this_00 = this.m_SlacknessCurve;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar2 = __this_00.Evaluate(t);
		return fVar2 * fVar1;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x31A88B0", Offset = "0x31A78B0", VA = "0x31A88B0")]
	public EZSoftBoneMaterial()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c (EZhex1991.EZSoftBone.EZSoftBoneMaterial$$.ctor): clean
		AnimationCurve pUVar1;

		this.m_Damping = 0.2;
		pUVar1 = AnimationCurve.EaseInOut(0.0, 0.5, 1.0, 1.0);
		this.m_DampingCurve = pUVar1;
		this.m_Stiffness = 0.1;
		pUVar1 = AnimationCurve.Linear(0.0, 1.0, 1.0, 1.0);
		this.m_StiffnessCurve = pUVar1;
		this.m_Resistance = 0.9;
		pUVar1 = AnimationCurve.Linear(0.0, 1.0, 1.0, 0.0);
		this.m_ResistanceCurve = pUVar1;
		this.m_Slackness = 0.1;
		pUVar1 = AnimationCurve.Linear(0.0, 1.0, 1.0, 0.8);
		this.m_SlacknessCurve = pUVar1;
		base();
		return;
	}
}
