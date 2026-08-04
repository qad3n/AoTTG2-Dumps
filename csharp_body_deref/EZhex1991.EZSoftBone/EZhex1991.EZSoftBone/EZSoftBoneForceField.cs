// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneForceField
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForceField.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000010")]
public class EZSoftBoneForceField : MonoBehaviour
{
	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Conductivity;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[EZNestedEditor]
	private EZSoftBoneForce m_Force;

	[Token(Token = "0x17000023")]
	public float conductivity
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x2398350", Offset = "0x2398350", VA = "0x2398350")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x2398360", Offset = "0x2398360", VA = "0x2398360")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public EZSoftBoneForce force
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x2398370", Offset = "0x2398370", VA = "0x2398370")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x2398380", Offset = "0x2398380", VA = "0x2398380")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float time
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x2398390", Offset = "0x2398390", VA = "0x2398390")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x23983A0", Offset = "0x23983A0", VA = "0x23983A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x23983B0", Offset = "0x23983B0", VA = "0x23983B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x23983C0", Offset = "0x23983C0", VA = "0x23983C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x23959A0", Offset = "0x23959A0", VA = "0x23959A0")]
	public Vector3 GetForce(float normalizedLength)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x23983F0", Offset = "0x23983F0", VA = "0x23983F0")]
	public EZSoftBoneForceField()
	{
	}
}
