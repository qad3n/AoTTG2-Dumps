// ==================== AoTTG2 cross-reference ====================
// Type: MouseMove
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MouseMove.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/MouseMove.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000016")]
public class MouseMove : MonoBehaviour
{
	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float _sensitivity;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x24")]
	private Vector3 _originalPos;

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x5749200", Offset = "0x5748200", VA = "0x5749200")]
	private void Start()
	{
		// Lifted from source/cpp/MouseMove.c (MouseMove$$Start): clean
		Transform __this_00;
		Vector3 UVar1;

		__this_00 = this.transform;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector3)__this_00.position;
		this._originalPos = UVar1;
		return;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x5749230", Offset = "0x5748230", VA = "0x5749230")]
	private void Update()
	{
		// Lifted from source/cpp/MouseMove.c (MouseMove$$Update): 13 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		int iVar3;
		int iVar4;
		Transform __this_00;
		float fVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		byte[] auVar6 = new byte[16];
		byte[] auVar7 = new byte[16];
		Vector3 UVar8;

		UVar8 = Input.mousePosition;
		auVar6._8_4_ = extraout_XMM0_Dc;
		auVar6._0_8_ = UVar8._0_8_;
		auVar6._12_4_ = extraout_XMM0_Dd;
		iVar3 = Screen.width;
		iVar4 = Screen.height;
		fVar5 = this._sensitivity;
		__this_00 = this.transform;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar5 = fVar5 + fVar5;
		UVar8.z = UVar8.z * fVar5 + this._originalPos.z;
		auVar7._0_4_ = (float)iVar3;
		auVar7._4_4_ = (float)iVar4;
		auVar7._8_8_ = 0;
		auVar6 = divps(auVar6, auVar7);
		uVar1 = this._originalPos.x;
		uVar2 = this._originalPos.y;
		UVar8.x = fVar5 * (auVar6._0_4_ + -0.5) + (float)uVar1;
		UVar8.y = fVar5 * (auVar6._4_4_ + -0.5) + (float)uVar2;
		__this_00.position = UVar8;
		return;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x57492E0", Offset = "0x57482E0", VA = "0x57492E0")]
	public MouseMove()
	{
		// Lifted from source/cpp/MouseMove.c (MouseMove$$.ctor): clean
		this._sensitivity = 0.5;
		base();
		return;
	}
}
