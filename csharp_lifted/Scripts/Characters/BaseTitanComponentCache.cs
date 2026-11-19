// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseTitanComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseTitanComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitanComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000710")]
internal class BaseTitanComponentCache : BaseComponentCache
{
	[Token(Token = "0x40021E5")]
	[FieldOffset(Offset = "0x38")]
	public Transform Head;

	[Token(Token = "0x40021E6")]
	[FieldOffset(Offset = "0x40")]
	public Transform Neck;

	[Token(Token = "0x40021E7")]
	[FieldOffset(Offset = "0x48")]
	public Transform Core;

	[Token(Token = "0x40021E8")]
	[FieldOffset(Offset = "0x50")]
	public Transform Hip;

	[Token(Token = "0x40021E9")]
	[FieldOffset(Offset = "0x58")]
	public Transform GrabLSocket;

	[Token(Token = "0x40021EA")]
	[FieldOffset(Offset = "0x60")]
	public Transform GrabRSocket;

	[Token(Token = "0x40021EB")]
	[FieldOffset(Offset = "0x68")]
	public Collider NapeHurtbox;

	[Token(Token = "0x40021EC")]
	[FieldOffset(Offset = "0x70")]
	public Collider Movebox;

	[Token(Token = "0x40021ED")]
	[FieldOffset(Offset = "0x78")]
	public Collider SitPushbox;

	[Token(Token = "0x40021EE")]
	[FieldOffset(Offset = "0x80")]
	public BaseHitbox MouthHitbox;

	[Token(Token = "0x40021EF")]
	[FieldOffset(Offset = "0x88")]
	public BaseHitbox HandLHitbox;

	[Token(Token = "0x40021F0")]
	[FieldOffset(Offset = "0x90")]
	public BaseHitbox HandRHitbox;

	[Token(Token = "0x40021F1")]
	[FieldOffset(Offset = "0x98")]
	public BaseHitbox FootLHitbox;

	[Token(Token = "0x40021F2")]
	[FieldOffset(Offset = "0xA0")]
	public BaseHitbox FootRHitbox;

	[Token(Token = "0x40021F3")]
	[FieldOffset(Offset = "0xA8")]
	public BaseHitbox SteamHitbox;

	[Token(Token = "0x40021F4")]
	[FieldOffset(Offset = "0xB0")]
	public BaseHitbox ForearmLHitbox;

	[Token(Token = "0x40021F5")]
	[FieldOffset(Offset = "0xB8")]
	public BaseHitbox ForearmRHitbox;

	[Token(Token = "0x40021F6")]
	[FieldOffset(Offset = "0xC0")]
	public Collider EyesHurtbox;

	[Token(Token = "0x40021F7")]
	[FieldOffset(Offset = "0xC8")]
	public Collider LegLHurtbox;

	[Token(Token = "0x40021F8")]
	[FieldOffset(Offset = "0xD0")]
	public Collider LegRHurtbox;

	[Token(Token = "0x40021F9")]
	[FieldOffset(Offset = "0xD8")]
	public Collider HandLHurtbox;

	[Token(Token = "0x40021FA")]
	[FieldOffset(Offset = "0xE0")]
	public Collider HandRHurtbox;

	[Token(Token = "0x40021FB")]
	[FieldOffset(Offset = "0xE8")]
	public List<Collider> ToggleColliders;

	[Token(Token = "0x40021FC")]
	[FieldOffset(Offset = "0xF0")]
	public List<BaseHitbox> Hitboxes;

	[Token(Token = "0x40021FD")]
	[FieldOffset(Offset = "0xF8")]
	public List<Collider> Hurtboxes;

	[Token(Token = "0x600449B")]
	[Address(RVA = "0x5B2D7E0", Offset = "0x5B2C7E0", VA = "0x5B2D7E0")]
	public BaseTitanComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Characters/BaseTitanComponentCache.c (Characters.BaseTitanComponentCache$$.ctor): 28 lines keep C-only constructs
		int piVar1;
		List<Collider>* targetAddress;
		List<BaseHitbox>* targetAddress_00;
		List<Collider>* targetAddress_01;
		int iVar2;
		BaseHitbox pCVar3;
		Collider[] pUVar4;
		BaseHitbox[] pCVar5;
		bool bVar7;
		int iVar8;
		List<Collider> pSVar9;
		List<BaseHitbox> pSVar10;
		BaseCharacter owner_00;
		CapsuleCollider pUVar11;
		Object[] pSVar12;
		Object __this_00;
		String a;
		ContinuousDamageHitbox pCVar13;
		ulong uVar14;
		uint uVar15;
		uint uVar16;
		ulong uVar17;
		BaseHitbox* targetAddress_02;

		pSVar9 = new List<Collider>();
		targetAddress = &this.ToggleColliders;
		this.ToggleColliders = pSVar9;
		pSVar10 = new List<BaseHitbox>();
		targetAddress_00 = &this.Hitboxes;
		this.Hitboxes = pSVar10;
		pSVar9 = new List<Collider>();
		targetAddress_01 = &this.Hurtboxes;
		this.Hurtboxes = pSVar9;
		base(owner);
		if (owner != null) {
			owner_00 = owner.GetComponent<BaseCharacter>();
			pUVar11 = owner.GetComponent<CapsuleCollider>();
			this.Movebox = (Collider)pUVar11;
			pSVar12 = owner.GetComponentsInChildren<Collider>();
			if (pSVar12 != null) {
				uVar15 = (uint)pSVar12.Length;
				if (0 < (int)uVar15) {
					uVar16 = 0;
					do {
						if (uVar15 <= uVar16) goto label_05c2e15f;
						pCVar3 = (BaseHitbox)pSVar12[(int)uVar16];
						if ((pCVar3 == null) ||(__this_00 = (Object)pCVar3.gameObject, __this_00 == null)) goto label_05c2e15a;
						a = __this_00.name;
						iVar8 = __this_00.layer;
						if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
							if (iVar8 != PhysicsLayer.TitanPushbox) goto label_05c2dbdb;
	label_05c2dc20: ;
							bVar7 = (a != "SitPushbox");
							if (bVar7) {
								pSVar9 = *targetAddress;
								if (pSVar9 == null) goto label_05c2e15a;
								piVar1 = &pSVar9._version;
								*piVar1 = *piVar1 + 1;
								pUVar4 = pSVar9._items;
								if (pUVar4 == null) goto label_05c2e15a;
								uVar15 = pSVar9._size;
								if (uVar15 < (uint)pUVar4.Length) {
									pSVar9._size = uVar15 + 1;
									pUVar4[(int)uVar15] = (Collider)pCVar3;
								}
								else {
									pSVar9.AddWithResize((object)pCVar3);
								}
							}
						}
						else {
							if (iVar8 == PhysicsLayer.TitanPushbox) goto label_05c2dc20;
	label_05c2dbdb: ;
							iVar8 = __this_00.layer ;
							if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
								iVar2 = PhysicsLayer.Hurtbox;
							}
							else {
								iVar2 = PhysicsLayer.Hurtbox;
							}
							if (iVar8 == iVar2) goto label_05c2dc20;
						}
						iVar8 = __this_00.layer;
						if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
							if (iVar8 != PhysicsLayer.Hurtbox) goto label_05c2dd54;
	label_05c2dcd8: ;
							pCVar3.isTrigger = true;
							pSVar9 = *targetAddress_01;
							if (pSVar9 == null) goto label_05c2e15a;
							piVar1 = &pSVar9._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = pSVar9._items;
							if (pUVar4 == null) goto label_05c2e15a;
							uVar15 = pSVar9._size;
							if (uVar15 < (uint)pUVar4.Length) {
								pSVar9._size = uVar15 + 1;
								pUVar4[(int)uVar15] = (Collider)pCVar3;
							}
							else {
								pSVar9.AddWithResize((object)pCVar3);
							}
						}
						else {
							if (iVar8 == PhysicsLayer.Hurtbox) goto label_05c2dcd8;
	label_05c2dd54: ;
							iVar8 = __this_00.layer ;
							if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
								iVar2 = PhysicsLayer.Hitbox;
							}
							else {
								iVar2 = PhysicsLayer.Hitbox;
							}
							if (iVar8 == iVar2) {
								pCVar3.enabled = false;
								pCVar3.isTrigger = true;
							}
						}
						bVar7 = (a == "NapeHurtbox");
						if (bVar7) {
							targetAddress_02 = (BaseHitbox*)&this.NapeHurtbox;
	label_05c2dea0: ;
							*targetAddress_02 = pCVar3;
	label_05c2dea6: ;
						}
						else {
							bVar7 = (a == "EyesHurtbox");
							if (bVar7) {
								targetAddress_02 = (BaseHitbox*)&this.EyesHurtbox;
								goto label_05c2dea0;
							}
							bVar7 = (a == "LegLHurtbox");
							if (bVar7) {
								targetAddress_02 = (BaseHitbox*)&this.LegLHurtbox;
								goto label_05c2dea0;
							}
							bVar7 = (a == "LegRHurtbox");
							if (bVar7) {
								targetAddress_02 = (BaseHitbox*)&this.LegRHurtbox;
								goto label_05c2dea0;
							}
							bVar7 = (a == "HandLHurtbox");
							if (bVar7) {
								targetAddress_02 = (BaseHitbox*)&this.HandLHurtbox;
								goto label_05c2dea0;
							}
							bVar7 = (a == "HandRHurtbox");
							if (bVar7) {
								targetAddress_02 = (BaseHitbox*)&this.HandRHurtbox;
								goto label_05c2dea0;
							}
							bVar7 = (a == "MouthHitbox");
							if (bVar7) {
								pCVar13 = (ContinuousDamageHitbox)BaseHitbox.Create(owner_00, (GameObject)__this_00, (Collider)pCVar3);
								targetAddress_02 = &this.MouthHitbox;
	label_05c2e070: ;
								*targetAddress_02 = (BaseHitbox)pCVar13;
								goto label_05c2dea6;
							}
							bVar7 = (a == "HandLHitbox");
							if (bVar7) {
								pCVar13 = (ContinuousDamageHitbox)BaseHitbox.Create(owner_00, (GameObject)__this_00, (Collider)pCVar3);
								targetAddress_02 = &this.HandLHitbox;
								goto label_05c2e070;
							}
							bVar7 = (a == "HandRHitbox");
							if (bVar7) {
								pCVar13 = (ContinuousDamageHitbox)BaseHitbox.Create(owner_00, (GameObject)__this_00, (Collider)pCVar3);
								targetAddress_02 = &this.HandRHitbox;
								goto label_05c2e070;
							}
							bVar7 = (a == "ForearmLHitbox");
							if (bVar7) {
								pCVar13 = (ContinuousDamageHitbox)BaseHitbox.Create(owner_00, (GameObject)__this_00, (Collider)pCVar3);
								targetAddress_02 = &this.ForearmLHitbox;
								goto label_05c2e070;
							}
							bVar7 = (a == "ForearmRHitbox");
							if (bVar7) {
								pCVar13 = (ContinuousDamageHitbox)BaseHitbox.Create(owner_00, (GameObject)__this_00, (Collider)pCVar3);
								targetAddress_02 = &this.ForearmRHitbox;
								goto label_05c2e070;
							}
							bVar7 = (a == "FootLHitbox");
							if (bVar7) {
								pCVar13 = (ContinuousDamageHitbox)BaseHitbox.Create(owner_00, (GameObject)__this_00, (Collider)pCVar3);
								targetAddress_02 = &this.FootLHitbox;
								goto label_05c2e070;
							}
							bVar7 = (a == "FootRHitbox");
							if (bVar7) {
								pCVar13 = (ContinuousDamageHitbox)BaseHitbox.Create(owner_00, (GameObject)__this_00, (Collider)pCVar3);
								targetAddress_02 = &this.FootRHitbox;
								goto label_05c2e070;
							}
							bVar7 = (a == "SteamHitbox");
							if (bVar7) {
								pCVar13 = ContinuousDamageHitbox.CreateContinuous(owner_00, (GameObject)__this_00, (Collider)pCVar3, 2000, 0.1);
								targetAddress_02 = &this.SteamHitbox;
								goto label_05c2e070;
							}
							bVar7 = (a == "SitPushbox");
							if (bVar7) {
								targetAddress_02 = (BaseHitbox*)&this.SitPushbox;
								goto label_05c2dea0;
							}
						}
						uVar16 = uVar16 + 1;
						uVar15 = (uint)pSVar12.Length;
					} while ((int)uVar16 < (int)uVar15);
				}
				pSVar12 = owner.GetComponentsInChildren<BaseHitbox>();
				if (pSVar12 != null) {
					if (0 < (int)pSVar12.Length) {
						uVar14 = pSVar12.Length & 0xffffffff;
						uVar17 = 0;
						do {
							if (uVar14 <= uVar17) {
	label_05c2e15f: ;
								throw new IndexOutOfRangeException();
							}
							pSVar10 = *targetAddress_00;
							if (pSVar10 == null) goto label_05c2e15a;
							pCVar3 = (BaseHitbox)pSVar12[uVar17];
							piVar1 = &pSVar10._version;
							*piVar1 = *piVar1 + 1;
							pCVar5 = pSVar10._items;
							if (pCVar5 == null) goto label_05c2e15a;
							uVar15 = pSVar10._size;
							if (uVar15 < (uint)pCVar5.Length) {
								pSVar10._size = uVar15 + 1;
								pCVar5[(int)uVar15] = pCVar3;
							}
							else {
								pSVar10.AddWithResize((object)pCVar3);
							}
							uVar17 = uVar17 + 1;
							uVar15 = (uint)pSVar12.Length;
							uVar14 = (ulong)uVar15;
						} while ((long)uVar17 < (long)(int)uVar15);
					}
					return;
				}
			}
		}
	label_05c2e15a: ;
		throw new NullReferenceException();
	}
}
