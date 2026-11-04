// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneMaterial.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneMaterial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
		[Address(RVA = "0x584FF0", Offset = "0x5835F0", VA = "0x180584FF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x585400", Offset = "0x583A00", VA = "0x180585400")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public AnimationCurve dampingCurve
	{
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000028")]
	public float stiffness
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x584AC0", Offset = "0x5830C0", VA = "0x180584AC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x585490", Offset = "0x583A90", VA = "0x180585490")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public AnimationCurve stiffnessCurve
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	public float resistance
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x585020", Offset = "0x583620", VA = "0x180585020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x585430", Offset = "0x583A30", VA = "0x180585430")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public AnimationCurve resistanceCurve
	{
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public float slackness
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x5853E0", Offset = "0x5839E0", VA = "0x1805853E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x585460", Offset = "0x583A60", VA = "0x180585460")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public AnimationCurve slacknessCurve
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002E")]
	public static EZSoftBoneMaterial defaultMaterial
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x5852C0", Offset = "0x5838C0", VA = "0x1805852C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x5850B0", Offset = "0x5836B0", VA = "0x1805850B0")]
	public float GetDamping(float t)
	{
		return default(float);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x585170", Offset = "0x583770", VA = "0x180585170")]
	public float GetStiffness(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x5850F0", Offset = "0x5836F0", VA = "0x1805850F0")]
	public float GetResistance(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x585130", Offset = "0x583730", VA = "0x180585130")]
	public float GetSlackness(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x5851B0", Offset = "0x5837B0", VA = "0x1805851B0")]
	public EZSoftBoneMaterial()
	{
	}
}
