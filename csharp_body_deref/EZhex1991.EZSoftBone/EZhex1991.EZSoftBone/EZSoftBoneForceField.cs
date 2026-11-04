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

[Token(Token = "0x200000E")]
public class EZSoftBoneForceField : MonoBehaviour
{
	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Conductivity;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[EZNestedEditor]
	private EZSoftBoneForce m_Force;

	[Token(Token = "0x17000023")]
	public float conductivity
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x584280", Offset = "0x582880", VA = "0x180584280")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x5842A0", Offset = "0x5828A0", VA = "0x1805842A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public EZSoftBoneForce force
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float time
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x584C90", Offset = "0x583290", VA = "0x180584C90")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x584CB0", Offset = "0x5832B0", VA = "0x180584CB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x584C30", Offset = "0x583230", VA = "0x180584C30")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x584C40", Offset = "0x583240", VA = "0x180584C40")]
	private void Update()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x584B80", Offset = "0x583180", VA = "0x180584B80")]
	public Vector3 GetForce(float normalizedLength)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x584C70", Offset = "0x583270", VA = "0x180584C70")]
	public EZSoftBoneForceField()
	{
	}
}
