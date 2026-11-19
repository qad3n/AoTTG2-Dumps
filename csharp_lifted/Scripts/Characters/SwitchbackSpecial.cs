// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SwitchbackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SwitchbackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SwitchbackSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006E8")]
internal class SwitchbackSpecial : ExtendedUseable
{
	[Token(Token = "0x400207B")]
	private const float GrabIFrameDuration = 0.5f;

	[Token(Token = "0x17000B7C")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042F0")]
		[Address(RVA = "0x5B0FA50", Offset = "0x5B0EA50", VA = "0x5B0FA50", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/SwitchbackSpecial.c (Characters.SwitchbackSpecial$$get_ActiveTime): clean
			return 0.3;
		}
	}

	[Token(Token = "0x60042F1")]
	[Address(RVA = "0x5B0FA60", Offset = "0x5B0EA60", VA = "0x5B0FA60")]
	public SwitchbackSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/SwitchbackSpecial.c (Characters.SwitchbackSpecial$$.ctor): clean
		base(owner);
		this.Cooldown = 2.0;
		return;
	}

	[Token(Token = "0x60042F2")]
	[Address(RVA = "0x5B0FA80", Offset = "0x5B0EA80", VA = "0x5B0FA80")]
	public bool RegisterCollision(Human human, Collision collision, float speed)
	{
		// Lifted from source/cpp/Characters/SwitchbackSpecial.c (Characters.SwitchbackSpecial$$RegisterCollision): 23 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		bool bVar3;
		uint uVar4;
		BaseComponentCache pUVar5;
		Rigidbody __this_00;
		ContactPoint[] pUVar6;
		UnityEngine_Vector3_StaticFields pUVar7;
		float fVar8;
		uint extraout_XMM0_Db;
		float fVar9;
		uint in_XMM1_Db;
		byte[] auVar10 = new byte[16];
		Vector3 UVar11;
		byte[] local_50 = new byte[12];
		float fStack_44;
		float local_38;

		local_38 = speed;
		bVar3 = this.IsActive;
		if (bVar3 == false) {
			return false;
		}
		if (((human == null) ||(pUVar5 = human.Cache, pUVar5 == null)) ||(collision == null)) goto label_05c0fcd3;
		__this_00 = pUVar5.Rigidbody;
		pUVar6 = collision.contacts;
		if (pUVar6 == null) goto label_05c0fcd3;
		if ((int)pUVar6.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		UVar11 = (pUVar6.m_Items).normal;
		fVar9 = UVar11.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			in_XMM1_Db = 0;
			Il2CppMethodInitialized_0753e72d = true;
			local_50._0_4_ = 0.0;
			local_50._4_4_ = 0.0;
			if (g_data_0753e729 == false) goto label_05c0fc93;
	label_05c0fb43: ;
			local_50._0_4_ = 0.0;
			local_50._4_4_ = 0.0;
			uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_50._0_4_ = 0.0;
			local_50._4_4_ = 0.0;
			if (g_data_0753e729 != false) goto label_05c0fb43;
	label_05c0fc93: ;
			local_50._0_4_ = 0.0;
			local_50._4_4_ = 0.0;
			in_XMM1_Db = 0;
			g_data_0753e729 = true;
			uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
			in_XMM1_Db = 0;
		}
		fVar8 = fVar9 * fVar9 + fStack_44 * fStack_44 + (float)local_50._8_4_ * (float)local_50._8_4_;
		if (fVar8 < 0.0) {
			fVar8 = sqrtf(fVar8);
			in_XMM1_Db = extraout_XMM0_Db;
			if (1e-05 < fVar8) goto label_05c0fbb9;
	label_05c0fb8d: ;
			pUVar7 = typeof(Vector3).static_fields;
			fVar9 = (pUVar7.zeroVector).z;
		}
		else {
			fVar8 = SQRT(fVar8);
			if (fVar8 <= 1e-05) goto label_05c0fb8d;
	label_05c0fbb9: ;
			fVar9 = fVar9 / fVar8;
			auVar10._4_4_ = fVar8;
			auVar10._0_4_ = fVar8;
			auVar10._8_4_ = in_XMM1_Db;
			auVar10._12_4_ = in_XMM1_Db;
			auVar10 = divps(stack0xffffffffffffffb8, auVar10);
			local_50._0_4_ = auVar10._0_4_;
			local_50._4_4_ = auVar10._4_4_;
			pUVar7 = (UnityEngine_Vector3_StaticFields)local_50;
		}
		if (__this_00 != null) {
			fVar8 = local_38;
			if (local_38 <= 20.0) {
				fVar8 = 20.0;
			}
			uVar1 = (pUVar7.zeroVector).x;
			uVar2 = (pUVar7.zeroVector).y;
			UVar11.z = fVar9 * fVar8;
			UVar11.x = fVar8 * (float)uVar1;
			UVar11.y = fVar8 * (float)uVar2;
			__this_00.linearVelocity = UVar11;
			this._activeTimeLeft = 0.0;
			this.IsActive = false;
			human.PlaySound(HumanSounds.Switchback);
			this.Deactivate();
			return bVar3;
		}
	label_05c0fcd3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042F3")]
	[Address(RVA = "0x5B0FCE0", Offset = "0x5B0ECE0", VA = "0x5B0FCE0", Slot = "12")]
	public override void SetInput(bool key)
	{
		// Lifted from source/cpp/Characters/SwitchbackSpecial.c (Characters.SwitchbackSpecial$$SetInput): 1 lines keep C-only constructs
		byte bVar1;
		Human __this_00;
		bool bVar2;
		float fVar3;

		if (key) {
			bVar2 = this.CanUse();
			if ((bVar2) && (this.IsActive == false)) {
				__this_00 = (Human)this._owner;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
					throw new InvalidCastException();
				}
				if (__this_00.MountState != 0) {
					__this_00.Unmount(false);
				}
				this.IsActive = true;
				fVar3 = this.GetActiveTime();
				this._activeTimeLeft = fVar3;
				this.Activate();
				this.OnUse();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60042F4")]
	[Address(RVA = "0x5B0FDD0", Offset = "0x5B0EDD0", VA = "0x5B0FDD0", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/SwitchbackSpecial.c (Characters.SwitchbackSpecial$$Activate): 1 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;

		pCVar2 = this._owner;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		*(uint)((long)&(*(ulong)((sbyte)pCVar2 + 0x218)) + 4) = 0x3f000000;
		this.Activate();
		return;
	}

	[Token(Token = "0x60042F5")]
	[Address(RVA = "0x5B0FE50", Offset = "0x5B0EE50", VA = "0x5B0FE50", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/SwitchbackSpecial.c (Characters.SwitchbackSpecial$$Deactivate): 1 lines keep C-only constructs
		byte bVar1;
		Human __this_00;

		__this_00 = (Human)this._owner;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		__this_00.DodgeWall();
		return;
	}
}
