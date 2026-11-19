// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SmellSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SmellSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmellSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E1")]
internal class SmellSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4002067")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x4002068")]
	[FieldOffset(Offset = "0x4C")]
	protected float Delay;

	[Token(Token = "0x17000B75")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042CD")]
		[Address(RVA = "0x5B0DC50", Offset = "0x5B0CC50", VA = "0x5B0DC50", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/SmellSpecial.c (Characters.SmellSpecial$$get_ActiveTime): clean
			return 30.0;
		}
	}

	[Token(Token = "0x17000B76")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042CE")]
		[Address(RVA = "0x5B0DC60", Offset = "0x5B0CC60", VA = "0x5B0DC60", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Characters/SmellSpecial.c (Characters.SmellSpecial$$get_GroundedOnly): clean
			return false;
		}
	}

	[Token(Token = "0x60042CF")]
	[Address(RVA = "0x5B0DC70", Offset = "0x5B0CC70", VA = "0x5B0DC70")]
	public SmellSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/SmellSpecial.c (Characters.SmellSpecial$$.ctor): clean
		this.Range = 600.0;
		this.Delay = 1.0;
		base(owner);
		this.Cooldown = 60.0;
		return;
	}

	[Token(Token = "0x60042D0")]
	[Address(RVA = "0x5B0DC90", Offset = "0x5B0CC90", VA = "0x5B0DC90", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/SmellSpecial.c (Characters.SmellSpecial$$Activate): 13 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Human pCVar3;
		BaseGameManager pGVar4;
		PhotonView __this_00;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		object __this_01;
		bool bVar7;
		float fVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar10;
		Vector3 UVar11;
		float fStack_a8;
		float fStack_a4;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_98;
		byte[] auStack_80 = new byte[16];
		BaseCharacter pCStack_70;
		float fStack_68;
		float fStack_58;
		byte[] auStack_48 = new byte[24];

		SStack_98._set = null;
		SStack_98._index = 0;
		SStack_98._version = 0;
		SStack_98._current = null;
		pCVar3 = this._human;
		if (pCVar3 != null) {
			pCVar3.EmoteAnimation(HumanAnimations.SpecialShifter);
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar1) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				__this_00 = (*(ulong)((sbyte)pGVar4 + 0x48));
				if (__this_00 != null) {
					auStack_80.GetEnumerator((HashSet<object>)__this_00);
					SStack_98._current = (object)pCStack_70;
					SStack_98._set = (HashSet<T>)auStack_80._0_8_;
					SStack_98._index = auStack_80._8_4_;
					SStack_98._version = auStack_80._12_4_;
					auStack_80._0_8_ = null;
					auStack_80._8_8_ = &SStack_98;
	label_05c0de20: ;
					do {
						bVar7 = SStack_98.MoveNext();
						__this_01 = SStack_98._current;
						if (!bVar7) {
							SStack_98.Dispose();
							return;
						}
						pCVar3 = this._human;
						if (pCVar3 == null) {
							throw new NullReferenceException();
						}
						pUVar5 = pCVar3.Cache;
						if (pUVar5 == null) {
							throw new NullReferenceException();
						}
						pUVar6 = pUVar5.Transform;
						if (pUVar6 == null) {
							throw new NullReferenceException();
						}
						UVar10 = pUVar6.position;
						fStack_58 = UVar10.z;
						if ((BaseCharacter)__this_01 == null) {
							throw new NullReferenceException();
						}
						pUVar5 = ((BaseCharacter)((long)__this_01 + 0x10)).Cache;
						if (pUVar5 == null) {
							throw new NullReferenceException();
						}
						pUVar6 = pUVar5.Transform;
						if (pUVar6 == null) {
							throw new NullReferenceException();
						}
						UVar11 = pUVar6.position;
						fStack_68 = UVar11.z;
						auStack_48._8_4_ = extraout_XMM0_Dc;
						auStack_48._0_8_ = UVar11._0_8_;
						auStack_48._12_4_ = extraout_XMM0_Dd;
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar2 == 0) {
						}
						fStack_a8 = UVar10.x;
						fStack_a4 = UVar10.y;
						fVar8 = (fStack_a4 - (float)auStack_48._4_4_) * (fStack_a4 - (float)auStack_48._4_4_) +(fStack_a8 - (float)auStack_48._0_4_) * (fStack_a8 - (float)auStack_48._0_4_) +(fStack_58 - fStack_68) * (fStack_58 - fStack_68);
						if (fVar8 < 0.0) goto label_05c0df40;
						fVar8 = SQRT(fVar8);
						fVar9 = this.Range;
					} while (fVar9 <= fVar8);
					goto label_05c0df55;
				}
			}
		}
		throw new NullReferenceException();
	label_05c0df40: ;
		fVar8 = sqrtf(fVar8);
		fVar9 = this.Range;
		if (fVar8 < fVar9) {
	label_05c0df55: ;
			fStack_68 = this.Delay;
			fStack_58 = fVar9;
			fVar8 = Util.LinearMap(fVar8, 0.0, fStack_58, 0.0, fStack_68);
			fVar9 = this.get_ActiveTime();
			__this_01.Reveal(fVar8, fVar9);
		}
		goto label_05c0de20;
	}

	[Token(Token = "0x60042D1")]
	[Address(RVA = "0x5B0E090", Offset = "0x5B0D090", VA = "0x5B0E090", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/SmellSpecial.c (Characters.SmellSpecial$$Deactivate): clean
		return;
	}
}
