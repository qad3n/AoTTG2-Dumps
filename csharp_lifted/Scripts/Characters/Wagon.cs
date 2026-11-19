// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Wagon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Wagon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Wagon.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006B3")]
public class Wagon : MonoBehaviour
{
	[Token(Token = "0x4001E52")]
	[FieldOffset(Offset = "0x20")]
	public GameObject leftWheel;

	[Token(Token = "0x4001E53")]
	[FieldOffset(Offset = "0x28")]
	public GameObject rightWheel;

	[Token(Token = "0x4001E54")]
	[FieldOffset(Offset = "0x30")]
	public GameObject horse;

	[Token(Token = "0x4001E55")]
	[FieldOffset(Offset = "0x38")]
	public Vector2 targetVelocity;

	[Token(Token = "0x4001E56")]
	[FieldOffset(Offset = "0x40")]
	private Transform leftWheelTransform;

	[Token(Token = "0x4001E57")]
	[FieldOffset(Offset = "0x48")]
	private Transform rightWheelTransform;

	[Token(Token = "0x4001E58")]
	[FieldOffset(Offset = "0x50")]
	private Rigidbody rigidbody;

	[Token(Token = "0x4001E59")]
	[FieldOffset(Offset = "0x58")]
	private bool grounded;

	[Token(Token = "0x60040E8")]
	[Address(RVA = "0x5AF34A0", Offset = "0x5AF24A0", VA = "0x5AF34A0")]
	private void Start()
	{
		// Lifted from source/cpp/Characters/Wagon.c (Characters.Wagon$$Start): clean
		GameObject pUVar1;
		Rigidbody pUVar2;
		Transform pUVar3;

		pUVar2 = this.GetComponent<Rigidbody>();
		this.rigidbody = pUVar2;
		pUVar1 = this.leftWheel;
		if (pUVar1 != null) {
			pUVar3 = pUVar1.transform;
			this.leftWheelTransform = pUVar3;
			pUVar1 = this.rightWheel;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.transform;
				this.rightWheelTransform = pUVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040E9")]
	[Address(RVA = "0x5AF3530", Offset = "0x5AF2530", VA = "0x5AF3530")]
	private void CheckGround()
	{
		// Lifted from source/cpp/Characters/Wagon.c (Characters.Wagon$$CheckGround): clean
		this.grounded = true;
		return;
	}

	[Token(Token = "0x60040EA")]
	[Address(RVA = "0x5AF3540", Offset = "0x5AF2540", VA = "0x5AF3540")]
	private void FixedUpdate()
	{
		// Lifted from source/cpp/Characters/Wagon.c (Characters.Wagon$$FixedUpdate): 3 lines keep C-only constructs
		Rigidbody* targetAddress;
		Object x;
		bool bVar1;
		Rigidbody pUVar2;
		Transform pUVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		Vector3 UVar9;
		float local_38;
		float fStack_34;
		float fStack_24;

		x = (Object)this.rigidbody;
		targetAddress = &this.rigidbody;
		bVar1 = (x == null);
		if (bVar1) {
			pUVar2 = this.GetComponent<Rigidbody>();
			this.rigidbody = pUVar2;
			return;
		}
		this.grounded = true;
		pUVar3 = this.leftWheelTransform;
		if (pUVar3 != null) {
			UVar7 = pUVar3.position;
			pUVar3 = this.rightWheelTransform;
			if (pUVar3 != null) {
				UVar8 = pUVar3.position;
				fVar4 = UVar7.z - UVar8.z;
				local_38 = UVar7.x;
				fStack_34 = UVar7.y;
				local_38 = local_38 - UVar8.x;
				fStack_34 = fStack_34 - UVar8.y;
				fVar4 = fVar4 * fVar4 + fStack_34 * fStack_34 + local_38 * local_38;
				if (fVar4 < 0.0) {
					fVar4 = sqrtf(fVar4);
				}
				else {
					fVar4 = SQRT(fVar4);
				}
				pUVar3 = this.leftWheelTransform;
				if (pUVar3 != null) {
					UVar7 = pUVar3.localScale;
					pUVar3 = this.transform;
					pUVar2 = this.rigidbody;
					if (pUVar2 != null) {
						UVar8 = pUVar2.linearVelocity;
						if (pUVar3 != null) {
							UVar8 = pUVar3.InverseTransformDirection(UVar8);
							pUVar2 = *targetAddress;
							if (pUVar2 != null) {
								UVar9 = pUVar2.angularVelocity;
								fVar5 = Time.deltaTime;
								fVar6 = Time.deltaTime;
								pUVar3 = this.leftWheelTransform;
								if (pUVar3 != null) {
									fStack_34 = UVar7.y;
									fStack_24 = UVar9.y;
									fStack_24 = fVar4 * 0.5 * fStack_24;
									pUVar3.Rotate(fVar5 * ((UVar8.z - fStack_24) / (fStack_34 * 0.5)) * 57.29578, 0.0, 0.0);
									pUVar3 = this.rightWheelTransform;
									if (pUVar3 != null) {
										pUVar3.Rotate(fVar6 * ((UVar8.z + fStack_24) / (fStack_34 * 0.5)) * 57.29578, 0.0, 0.0);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040EB")]
	[Address(RVA = "0x5AF37F0", Offset = "0x5AF27F0", VA = "0x5AF37F0")]
	public Wagon()
	{
		// Lifted from source/cpp/Characters/Wagon.c (Characters.Wagon$$.ctor): clean
		this.targetVelocity = (Vector2.zeroVector);
		base();
		return;
	}
}
