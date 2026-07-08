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
		[Address(RVA = "0x235A240", Offset = "0x235A240", VA = "0x235A240")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x235A250", Offset = "0x235A250", VA = "0x235A250")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public EZSoftBoneForce force
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x235A260", Offset = "0x235A260", VA = "0x235A260")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x235A270", Offset = "0x235A270", VA = "0x235A270")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float time
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x235A280", Offset = "0x235A280", VA = "0x235A280")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x235A290", Offset = "0x235A290", VA = "0x235A290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x235A2A0", Offset = "0x235A2A0", VA = "0x235A2A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x235A2B0", Offset = "0x235A2B0", VA = "0x235A2B0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2357890", Offset = "0x2357890", VA = "0x2357890")]
	public Vector3 GetForce(float normalizedLength)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x235A2E0", Offset = "0x235A2E0", VA = "0x235A2E0")]
	public EZSoftBoneForceField()
	{
	}
}
