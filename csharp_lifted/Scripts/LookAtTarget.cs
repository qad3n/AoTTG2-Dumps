// ==================== AoTTG2 cross-reference ====================
// Type: LookAtTarget
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/LookAtTarget.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/LookAtTarget.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000015")]
public class LookAtTarget : MonoBehaviour
{
	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Transform _target;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float _speed;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x2C")]
	private Vector3 _lookAtTarget;

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x5749120", Offset = "0x5748120", VA = "0x5749120")]
	private void Update()
	{
		// Lifted from source/cpp/LookAtTarget.c (LookAtTarget$$Update): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		Transform pUVar4;
		float fVar5;
		float fVar6;
		Vector3 UVar7;
		float local_28;
		float fStack_24;

		pUVar4 = this._target;
		if (pUVar4 != null) {
			fVar1 = this._lookAtTarget.z;
			uVar2 = this._lookAtTarget.x;
			uVar3 = this._lookAtTarget.y;
			UVar7 = pUVar4.position;
			fVar5 = Time.deltaTime;
			fVar5 = fVar5 * this._speed;
			fVar6 = 1.0;
			if (fVar5 <= 1.0) {
				fVar6 = fVar5;
			}
			fVar6 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6);
			local_28 = UVar7.x;
			fStack_24 = UVar7.y;
			this._lookAtTarget.x = fVar6 * (local_28 - (float)uVar2) + (float)uVar2;
			this._lookAtTarget.y = fVar6 * (fStack_24 - (float)uVar3) + (float)uVar3;
			this._lookAtTarget.z = (UVar7.z - fVar1) * fVar6 + fVar1;
			pUVar4 = this.transform;
			if (pUVar4 != null) {
				pUVar4.LookAt((Vector3)this._lookAtTarget);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x57491F0", Offset = "0x57481F0", VA = "0x57491F0")]
	public LookAtTarget()
	{
		// Lifted from source/cpp/LookAtTarget.c (LookAtTarget$$.ctor): clean
		this._speed = 0.5;
		base();
		return;
	}
}
