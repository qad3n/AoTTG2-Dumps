// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneForceField
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForceField.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		[Address(RVA = "0x31A8700", Offset = "0x31A7700", VA = "0x31A8700")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_conductivity): clean
			return this.m_Conductivity;
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x31A8710", Offset = "0x31A7710", VA = "0x31A8710")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_conductivity): clean
			this.m_Conductivity = value;
			return;
		}
	}

	[Token(Token = "0x17000024")]
	public EZSoftBoneForce force
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x31A8720", Offset = "0x31A7720", VA = "0x31A8720")]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_force): clean
			return this.m_Force;
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x31A8730", Offset = "0x31A7730", VA = "0x31A8730")]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_force): clean
			this.m_Force = value;
			return;
		}
	}

	[Token(Token = "0x17000025")]
	public float time
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x31A8740", Offset = "0x31A7740", VA = "0x31A8740")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_time): clean
			return this._time_k__BackingField;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x31A8750", Offset = "0x31A7750", VA = "0x31A8750")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_time): clean
			this._time_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x31A8760", Offset = "0x31A7760", VA = "0x31A8760")]
	private void OnEnable()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$OnEnable): clean
		this._time_k__BackingField = 0.0;
		return;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x31A8770", Offset = "0x31A7770", VA = "0x31A8770")]
	private void Update()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$Update): clean
		float fVar1;
		float fVar2;

		fVar1 = this._time_k__BackingField;
		fVar2 = Time.deltaTime;
		this._time_k__BackingField = fVar2 + fVar1;
		return;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x31A5E80", Offset = "0x31A4E80", VA = "0x31A5E80")]
	public Vector3 GetForce(float normalizedLength)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$GetForce): clean
		EZSoftBoneForce __this_00;
		Transform __this_01;
		Vector3 direction;
		Vector3 UVar1;

		__this_01 = this.transform;
		__this_00 = this.m_Force;
		if (__this_00 != null) {
			direction = __this_00.GetForce(this._time_k__BackingField - normalizedLength * this.m_Conductivity);
			if (__this_01 != null) {
				UVar1 = (Vector3)__this_01.TransformDirection(direction);
				return (Vector3)UVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x31A87A0", Offset = "0x31A77A0", VA = "0x31A87A0")]
	public EZSoftBoneForceField()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneForceField.c (EZhex1991.EZSoftBone.EZSoftBoneForceField$$.ctor): clean
		this.m_Conductivity = 0.15;
		base();
		return;
	}
}
