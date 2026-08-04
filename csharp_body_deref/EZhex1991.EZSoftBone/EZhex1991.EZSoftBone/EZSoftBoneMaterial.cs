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

[Token(Token = "0x2000011")]
[CreateAssetMenu(fileName = "SBMat", menuName = "EZSoftBone/SBMaterial")]
public class EZSoftBoneMaterial : ScriptableObject
{
	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Damping;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_DampingCurve;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Stiffness;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_StiffnessCurve;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Resistance;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_ResistanceCurve;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Slackness;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[EZCurveRect(0f, 0f, 1f, 1f)]
	private AnimationCurve m_SlacknessCurve;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x0")]
	private static EZSoftBoneMaterial m_DefaultMaterial;

	[Token(Token = "0x17000026")]
	public float damping
	{
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x2398400", Offset = "0x2398400", VA = "0x2398400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x2398410", Offset = "0x2398410", VA = "0x2398410")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public AnimationCurve dampingCurve
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x2398430", Offset = "0x2398430", VA = "0x2398430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000028")]
	public float stiffness
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x2398440", Offset = "0x2398440", VA = "0x2398440")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x2398450", Offset = "0x2398450", VA = "0x2398450")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public AnimationCurve stiffnessCurve
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x2398470", Offset = "0x2398470", VA = "0x2398470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	public float resistance
	{
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x2398480", Offset = "0x2398480", VA = "0x2398480")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x2398490", Offset = "0x2398490", VA = "0x2398490")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public AnimationCurve resistanceCurve
	{
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x23984B0", Offset = "0x23984B0", VA = "0x23984B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public float slackness
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x23984C0", Offset = "0x23984C0", VA = "0x23984C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x23984D0", Offset = "0x23984D0", VA = "0x23984D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public AnimationCurve slacknessCurve
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x23984F0", Offset = "0x23984F0", VA = "0x23984F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002E")]
	public static EZSoftBoneMaterial defaultMaterial
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x2392440", Offset = "0x2392440", VA = "0x2392440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x23965D0", Offset = "0x23965D0", VA = "0x23965D0")]
	public float GetDamping(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2396600", Offset = "0x2396600", VA = "0x2396600")]
	public float GetStiffness(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2396630", Offset = "0x2396630", VA = "0x2396630")]
	public float GetResistance(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2396660", Offset = "0x2396660", VA = "0x2396660")]
	public float GetSlackness(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2398500", Offset = "0x2398500", VA = "0x2398500")]
	public EZSoftBoneMaterial()
	{
	}
}
