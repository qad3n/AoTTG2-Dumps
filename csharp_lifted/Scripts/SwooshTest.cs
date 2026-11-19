// ==================== AoTTG2 cross-reference ====================
// Type: SwooshTest
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SwooshTest.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/SwooshTest.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000017")]
public class SwooshTest : MonoBehaviour
{
	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private AnimationClip _animation;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x28")]
	private AnimationState _animationState;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private int _start;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private int _end;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x38")]
	private float _startN;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x3C")]
	private float _endN;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x40")]
	private float _time;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x44")]
	private float _prevTime;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x48")]
	private float _prevAnimTime;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private MeleeWeaponTrail _trail;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x58")]
	private bool _firstFrame;

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x57492F0", Offset = "0x57482F0", VA = "0x57492F0")]
	private void Start()
	{
		// Lifted from source/cpp/SwooshTest.c (SwooshTest$$Start): 13 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		AnimationClip pUVar3;
		MeleeWeaponTrail pMVar4;
		Animation __this_00;
		String name;
		AnimationState pUVar5;
		float fVar6;
		float fVar7;
		uint extraout_XMM0_Db;
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];

		pUVar3 = this._animation;
		if (pUVar3 != null) {
			fVar6 = pUVar3.frameRate;
			pUVar3 = this._animation;
			if (pUVar3 != null) {
				fVar7 = pUVar3.length;
				uVar1 = this._start;
				uVar2 = this._end;
				auVar8._0_4_ = (float)(int)uVar1;
				auVar8._4_4_ = (float)(int)uVar2;
				auVar8._8_8_ = 0;
				auVar9._4_4_ = fVar6 * fVar7;
				auVar9._0_4_ = fVar6 * fVar7;
				auVar9._8_4_ = extraout_XMM0_Db;
				auVar9._12_4_ = extraout_XMM0_Db;
				auVar9 = divps(auVar8, auVar9);
				this._startN = (float)auVar9._0_4_;
				this._endN = (float)auVar9._4_4_;
				__this_00 = this.GetComponent<Animation>();
				pUVar3 = this._animation;
				if (pUVar3 != null) {
					name = pUVar3.name;
					if (__this_00 != null) {
						pUVar5 = __this_00.get_Item(name);
						this._animationState = pUVar5;
						pMVar4 = this._trail;
						if (pMVar4 != null) {
							pMVar4._emit = false;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x57493C0", Offset = "0x57483C0", VA = "0x57493C0")]
	private void Update()
	{
		// Lifted from source/cpp/SwooshTest.c (SwooshTest$$Update): clean
		float fVar1;
		AnimationState pUVar2;
		MeleeWeaponTrail pMVar3;
		bool bVar4;
		float fVar5;
		float fVar6;

		pUVar2 = this._animationState;
		if (pUVar2 == null) goto label_0584947d;
		fVar6 = this._time;
		fVar5 = pUVar2.normalizedTime;
		fVar6 = (fVar5 - this._prevAnimTime) + fVar6;
		this._time = fVar6;
		bVar4 = this._firstFrame;
		if (fVar6 <= 1.0) {
			if (bVar4 != false) goto label_0584941b;
		}
		else {
			if (bVar4 == false) {
				fVar6 = fVar6 + -1.0;
				this._time = fVar6;
			}
	label_0584941b: ;
			this._firstFrame = false;
		}
		fVar5 = this._startN;
		fVar1 = this._prevTime;
		if ((fVar5 <= fVar1) || (fVar6 < fVar5)) {
			fVar5 = this._endN;
			if ((fVar1 < fVar5) && (fVar5 <= fVar6)) {
				pMVar3 = this._trail;
				if (pMVar3 == null) goto label_0584947d;
				bVar4 = false;
				goto label_0584945a;
			}
		}
		else {
			pMVar3 = this._trail;
			bVar4 = true;
			if (pMVar3 == null) goto label_0584947d;
	label_0584945a: ;
			pMVar3._emit = bVar4;
		}
		this._prevTime = fVar6;
		pUVar2 = this._animationState;
		if (pUVar2 != null) {
			fVar6 = pUVar2.normalizedTime;
			this._prevAnimTime = fVar6;
			return;
		}
	label_0584947d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x5749490", Offset = "0x5748490", VA = "0x5749490")]
	public SwooshTest()
	{
		// Lifted from source/cpp/SwooshTest.c (SwooshTest$$.ctor): clean
		this._firstFrame = true;
		base();
		return;
	}
}
