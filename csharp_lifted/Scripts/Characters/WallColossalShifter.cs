// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalShifter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalShifter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000705")]
internal class WallColossalShifter : BaseShifter
{
	[Token(Token = "0x400213F")]
	[FieldOffset(Offset = "0x2D8")]
	public WallColossalComponentCache ColossalCache;

	[Token(Token = "0x4002140")]
	[FieldOffset(Offset = "0x2E0")]
	protected WallColossalAnimations ColossalAnimations;

	[Token(Token = "0x4002141")]
	[FieldOffset(Offset = "0x2E8")]
	protected float _steamTimeLeft;

	[Token(Token = "0x4002142")]
	[FieldOffset(Offset = "0x2EC")]
	protected float _steamBlowAwayTimeLeft;

	[Token(Token = "0x4002143")]
	[FieldOffset(Offset = "0x2F0")]
	protected float _steamDamageTimeLeft;

	[Token(Token = "0x4002144")]
	[FieldOffset(Offset = "0x2F4")]
	protected ColossalSteamState _steamState;

	[Token(Token = "0x4002145")]
	[FieldOffset(Offset = "0x2F8")]
	public float WarningSteamTime;

	[Token(Token = "0x4002146")]
	[FieldOffset(Offset = "0x2FC")]
	public float SteamDamageInterval;

	[Token(Token = "0x4002147")]
	[FieldOffset(Offset = "0x300")]
	public int SteamDamagePerSecond;

	[Token(Token = "0x4002148")]
	private const float DeathDelay = 0.1f;

	[Token(Token = "0x4002149")]
	[FieldOffset(Offset = "0x304")]
	public int MaxLeftHandHealth;

	[Token(Token = "0x400214A")]
	[FieldOffset(Offset = "0x308")]
	public int MaxRightHandHealth;

	[Token(Token = "0x400214B")]
	[FieldOffset(Offset = "0x30C")]
	public int CurrentLeftHandHealth;

	[Token(Token = "0x400214C")]
	[FieldOffset(Offset = "0x310")]
	public int CurrentRightHandHealth;

	[Token(Token = "0x400214D")]
	[FieldOffset(Offset = "0x314")]
	public bool CanDamageLeftHand;

	[Token(Token = "0x400214E")]
	[FieldOffset(Offset = "0x315")]
	public bool CanDamageRightHand;

	[Token(Token = "0x400214F")]
	[FieldOffset(Offset = "0x318")]
	protected ColossalHandState _leftHandState;

	[Token(Token = "0x4002150")]
	[FieldOffset(Offset = "0x31C")]
	protected ColossalHandState _rightHandState;

	[Token(Token = "0x4002151")]
	[FieldOffset(Offset = "0x320")]
	protected ColossalStunState _stunState;

	[Token(Token = "0x4002152")]
	[FieldOffset(Offset = "0x324")]
	public float LeftHandSeverTimeLeft;

	[Token(Token = "0x4002153")]
	[FieldOffset(Offset = "0x328")]
	public float RightHandSeverTimeLeft;

	[Token(Token = "0x4002154")]
	[FieldOffset(Offset = "0x32C")]
	public float HandSeverWindow;

	[Token(Token = "0x4002155")]
	[FieldOffset(Offset = "0x330")]
	public float StunDuration;

	[Token(Token = "0x4002156")]
	[FieldOffset(Offset = "0x334")]
	public float StunTimeLeft;

	[Token(Token = "0x4002157")]
	[FieldOffset(Offset = "0x338")]
	protected float _stunAnimationTimeLeft;

	[Token(Token = "0x4002158")]
	[FieldOffset(Offset = "0x33C")]
	public float RecoveryDuration;

	[Token(Token = "0x4002159")]
	[FieldOffset(Offset = "0x340")]
	public float RecoveryTimeLeft;

	[Token(Token = "0x400215A")]
	[FieldOffset(Offset = "0x344")]
	public float SteamBlowAwayForce;

	[Token(Token = "0x400215B")]
	[FieldOffset(Offset = "0x348")]
	public float DefaultBlowAwayForce;

	[Token(Token = "0x400215C")]
	[FieldOffset(Offset = "0x34C")]
	public float BlowAwayMaxDistance;

	[Token(Token = "0x400215D")]
	[FieldOffset(Offset = "0x350")]
	public float BlowAwaySteamTime;

	[Token(Token = "0x17000BAE")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x60043AF")]
		[Address(RVA = "0x5B1EE30", Offset = "0x5B1DE30", VA = "0x5B1EE30", Slot = "60")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_MaxFootstepDistance): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000BAF")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x60043B0")]
		[Address(RVA = "0x5B1EE40", Offset = "0x5B1DE40", VA = "0x5B1EE40", Slot = "61")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_MaxSoundDistance): clean
			return 1000.0;
		}
	}

	[Token(Token = "0x17000BB0")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x60043B1")]
		[Address(RVA = "0x5B1EE50", Offset = "0x5B1DE50", VA = "0x5B1EE50", Slot = "62")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_LODQualityMediumDistance): clean
			return 1000.0;
		}
	}

	[Token(Token = "0x17000BB1")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x60043B2")]
		[Address(RVA = "0x5B1EE60", Offset = "0x5B1DE60", VA = "0x5B1EE60", Slot = "63")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_LODQualityLowDistance): clean
			return 2000.0;
		}
	}

	[Token(Token = "0x17000BB2")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x60043B3")]
		[Address(RVA = "0x5B1EE70", Offset = "0x5B1DE70", VA = "0x5B1EE70", Slot = "64")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_CullShadowsDistance): clean
			return 2000.0;
		}
	}

	[Token(Token = "0x17000BB3")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x60043B4")]
		[Address(RVA = "0x5B1EE80", Offset = "0x5B1DE80", VA = "0x5B1EE80", Slot = "66")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_CullEffectsDistance): clean
			return 2000.0;
		}
	}

	[Token(Token = "0x17000BB4")]
	public ColossalSteamState SteamState
	{
		[Token(Token = "0x60043B5")]
		[Address(RVA = "0x5B1EE90", Offset = "0x5B1DE90", VA = "0x5B1EE90")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_SteamState): clean
			return this._steamState;
		}
	}

	[Token(Token = "0x17000BB5")]
	public ColossalHandState LeftHandState
	{
		[Token(Token = "0x60043B6")]
		[Address(RVA = "0x5B1EEA0", Offset = "0x5B1DEA0", VA = "0x5B1EEA0")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_LeftHandState): clean
			return this._leftHandState;
		}
	}

	[Token(Token = "0x17000BB6")]
	public ColossalHandState RightHandState
	{
		[Token(Token = "0x60043B7")]
		[Address(RVA = "0x5B1EEB0", Offset = "0x5B1DEB0", VA = "0x5B1EEB0")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_RightHandState): clean
			return this._rightHandState;
		}
	}

	[Token(Token = "0x17000BB7")]
	public ColossalStunState StunState
	{
		[Token(Token = "0x60043B8")]
		[Address(RVA = "0x5B1EEC0", Offset = "0x5B1DEC0", VA = "0x5B1EEC0")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_StunState): clean
			return this._stunState;
		}
	}

	[Token(Token = "0x17000BB8")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x60043B9")]
		[Address(RVA = "0x5B1EED0", Offset = "0x5B1DED0", VA = "0x5B1EED0", Slot = "134")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$get_SizeMultiplier): clean
			return 22.0;
		}
	}

	[Token(Token = "0x60043BA")]
	[Address(RVA = "0x5B1EEE0", Offset = "0x5B1DEE0", VA = "0x5B1EEE0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$OnPlayerEnteredRoom): 12 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		bool bVar3;
		Object[] pSVar4;
		object pIVar5;
		object pIVar6;
		byte uStack_44;
		byte uStack_43;
		byte uStack_42;
		byte uStack_41;
		float fStack_40;
		float fStack_3c;
		float fStack_38;
		float fStack_34;

		this.OnPlayerEnteredRoom(player);
		bVar3 = this.IsMine();
		if (!bVar3) {
			return;
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			pPVar2 = pUVar1.PhotonView;
			pSVar4 = (Object[])new object[1];
			uStack_41 = (undefined1)this._leftHandState;
			pIVar5 = (object)uStack_41;
			if (pSVar4 != null) {
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c1f494;
				if ((int)pSVar4.Length == 0) goto label_05c1f48f;
				pSVar4[0] = pIVar5;
				if (pPVar2 != null) {
					pPVar2.RPC("SetLeftHandStateRPC", player, pSVar4);
					pUVar1 = this.Cache;
					if (pUVar1 != null) {
						pPVar2 = pUVar1.PhotonView;
						pSVar4 = (Object[])new object[1];
						uStack_42 = (undefined1)this._rightHandState;
						pIVar5 = (object)uStack_42;
						if (pSVar4 != null) {
							if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c1f494;
							if ((int)pSVar4.Length == 0) goto label_05c1f48f;
							pSVar4[0] = pIVar5;
							if (pPVar2 != null) {
								pPVar2.RPC("SetRightHandStateRPC", player, pSVar4) ;
								pUVar1 = this.Cache;
								if (pUVar1 != null) {
									pPVar2 = pUVar1.PhotonView;
									pSVar4 = (Object[])new object[1];
									uStack_43 = (undefined1)this._steamState;
									pIVar5 = (object)uStack_43;
									if (pSVar4 != null) {
										if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c1f494;
										if ((int)pSVar4.Length == 0) goto label_05c1f48f;
										pSVar4[0] = pIVar5;
										if (pPVar2 != null) {
											pPVar2.RPC("SetSteamStateRPC", player, pSVar4);
											pUVar1 = this.Cache;
											if (pUVar1 != null) {
												pPVar2 = pUVar1.PhotonView;
												pSVar4 = (Object[])new object[1];
												uStack_44 = (undefined1)this._stunState;
												pIVar5 = (object)uStack_44;
												if (pSVar4 != null) {
													if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class) , pIVar6 == null)) goto label_05c1f494;
													if ((int)pSVar4.Length == 0) goto label_05c1f48f;
													pSVar4[0] = pIVar5;
													if (pPVar2 != null) {
														pPVar2.RPC("SetStunStateRPC", player, pSVar4);
														pUVar1 = this.Cache;
														if (pUVar1 != null) {
															pPVar2 = pUVar1.PhotonView;
															pSVar4 = (Object[])new object[2];
															fStack_34 = this.LeftHandSeverTimeLeft;
															pIVar5 = (object)fStack_34;
															if (pSVar4 != null) {
																if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05c1f494: ;
																	pIVar5 = new ArrayTypeMismatchException();
																	throw pIVar5;
																}
																if ((int)pSVar4.Length != 0) {
																	pSVar4[0] = pIVar5;
																	fStack_38 = this.RightHandSeverTimeLeft;
																	pIVar5 = (object)fStack_38;
																	if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c1f494;
																	if ((pSVar4.Length & 0xfffffffe) != 0) {
																		pSVar4[1] = pIVar5;
																		if (pPVar2 != null) {
																			pPVar2.RPC("SetHandSeverTimesRPC", player, pSVar4);
																			pUVar1 = this.Cache;
																			if (pUVar1 != null) {
																				pPVar2 = pUVar1.PhotonView;
																				pSVar4 = (Object[])new object[2];
																				fStack_3c = this.StunTimeLeft;
																				pIVar5 = (object)fStack_3c;
																				if (pSVar4 != null) {
																					if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1). element_class), pIVar6 == null)) goto label_05c1f494;
																					if ((int)pSVar4.Length != 0) {
																						pSVar4[0] = pIVar5;
																						fStack_40 = this.RecoveryTimeLeft;
																						pIVar5 = (object)fStack_40;
																						if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1). element_class), pIVar6 == null)) goto label_05c1f494;
																						if ((pSVar4.Length & 0xfffffffe) != 0) {
																							pSVar4[1] = pIVar5;
																							if (pPVar2 != null) {
																								pPVar2.RPC("SetStunRecoveryTimesRPC", player, pSVar4);
																								return;
																							}
																							goto label_05c1f48a;
																						}
																					}
																					goto label_05c1f48f;
																				}
																			}
																		}
																		goto label_05c1f48a;
																	}
																}
	label_05c1f48f: ;
																throw new IndexOutOfRangeException();
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c1f48a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043BB")]
	[Address(RVA = "0x5B1F5E0", Offset = "0x5B1E5E0", VA = "0x5B1F5E0", Slot = "202")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$CheckNapeAngle): clean
		return true;
	}

	[Token(Token = "0x60043BC")]
	[Address(RVA = "0x5B1F5F0", Offset = "0x5B1E5F0", VA = "0x5B1F5F0")]
	public void SteamAttack()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SteamAttack): clean
		bool bVar1;

		bVar1 = this.CanAttack();
		if ((bVar1) && (this._stunState == 0)) {
			this.Attack("AttackSteam");
			return;
		}
		return;
	}

	[Token(Token = "0x60043BD")]
	[Address(RVA = "0x5B1F660", Offset = "0x5B1E660", VA = "0x5B1F660")]
	public void SetLeftHandHealth(int health)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetLeftHandHealth): clean
		int iVar1;

		this.MaxLeftHandHealth = health;
		iVar1 = 0;
		if (0 < health) {
			iVar1 = health;
		}
		this.CurrentLeftHandHealth = iVar1;
		this.OnLeftHandHealthChange();
		return;
	}

	[Token(Token = "0x60043BE")]
	[Address(RVA = "0x5B1F6C0", Offset = "0x5B1E6C0", VA = "0x5B1F6C0")]
	public void SetRightHandHealth(int health)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetRightHandHealth): clean
		int iVar1;

		this.MaxRightHandHealth = health;
		iVar1 = 0;
		if (0 < health) {
			iVar1 = health;
		}
		this.CurrentRightHandHealth = iVar1;
		this.OnRightHandHealthChange();
		return;
	}

	[Token(Token = "0x60043BF")]
	[Address(RVA = "0x5B1F690", Offset = "0x5B1E690", VA = "0x5B1F690")]
	public void SetCurrentLeftHandHealth(int health)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetCurrentLeftHandHealth): clean
		int iVar1;
		int iVar2;

		iVar1 = this.MaxLeftHandHealth;
		if (health < iVar1) {
			iVar1 = health;
		}
		iVar2 = 0;
		if (-1 < health) {
			iVar2 = iVar1;
		}
		this.CurrentLeftHandHealth = iVar2;
		this.OnLeftHandHealthChange();
		return;
	}

	[Token(Token = "0x60043C0")]
	[Address(RVA = "0x5B1F6F0", Offset = "0x5B1E6F0", VA = "0x5B1F6F0")]
	public void SetCurrentRightHandHealth(int health)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetCurrentRightHandHealth): clean
		int iVar1;
		int iVar2;

		iVar1 = this.MaxRightHandHealth;
		if (health < iVar1) {
			iVar1 = health;
		}
		iVar2 = 0;
		if (-1 < health) {
			iVar2 = iVar1;
		}
		this.CurrentRightHandHealth = iVar2;
		this.OnRightHandHealthChange();
		return;
	}

	[Token(Token = "0x60043C1")]
	[Address(RVA = "0x5B1F720", Offset = "0x5B1E720", VA = "0x5B1F720")]
	public void SetMaxLeftHandHealth(int maxHealth)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetMaxLeftHandHealth): clean
		int iVar1;
		int iVar2;

		this.MaxLeftHandHealth = maxHealth;
		iVar1 = this.CurrentLeftHandHealth;
		if (iVar1 < maxHealth) {
			maxHealth = iVar1;
		}
		iVar2 = 0;
		if (-1 < iVar1) {
			iVar2 = maxHealth;
		}
		this.CurrentLeftHandHealth = iVar2;
		this.OnLeftHandHealthChange();
		return;
	}

	[Token(Token = "0x60043C2")]
	[Address(RVA = "0x5B1F760", Offset = "0x5B1E760", VA = "0x5B1F760")]
	public void SetMaxRightHandHealth(int maxHealth)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetMaxRightHandHealth): clean
		int iVar1;
		int iVar2;

		this.MaxRightHandHealth = maxHealth;
		iVar1 = this.CurrentRightHandHealth;
		if (iVar1 < maxHealth) {
			maxHealth = iVar1;
		}
		iVar2 = 0;
		if (-1 < iVar1) {
			iVar2 = maxHealth;
		}
		this.CurrentRightHandHealth = iVar2;
		this.OnRightHandHealthChange();
		return;
	}

	[Token(Token = "0x60043C3")]
	[Address(RVA = "0x5B1F7A0", Offset = "0x5B1E7A0", VA = "0x5B1F7A0", Slot = "207")]
	protected virtual void OnLeftHandHealthChange()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$OnLeftHandHealthChange): 7 lines keep C-only constructs
		int iVar1;
		int iVar2;
		bool bVar3;
		PhotonView pPVar4;
		Object[] pSVar5;
		object pIVar6;
		object pIVar7;
		byte uStack_39;
		float fStack_38;
		float fStack_34;

		iVar1 = this.CurrentLeftHandHealth;
		if (iVar1 < 1) {
			iVar2 = this._leftHandState;
			if ((iVar2 != 1) && (iVar2 != 0)) {
				iVar2 = this.MaxLeftHandHealth;
				goto joined_r0x05c1faa1;
			}
			bVar3 = this.IsMine();
			if (bVar3) {
				this.LeftHandSeverTimeLeft = this.HandSeverWindow;
				pPVar4 = this.photonView;
				pSVar5 = (Object[])new object[1];
				uStack_39 = 2;
				pIVar6 = (object)uStack_39;
				if (pSVar5 == null) goto label_05c1fc97;
				if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c1fca1;
				if ((int)pSVar5.Length == 0) goto label_05c1fc9c;
				pSVar5[0] = pIVar6;
				if (pPVar4 == null) goto label_05c1fc97;
				pPVar4.RPC("SetLeftHandStateRPC", 0, pSVar5);
				pPVar4 = this.photonView;
				pSVar5 = (Object[])new object[2];
				fStack_38 = this.LeftHandSeverTimeLeft;
				pIVar6 = (object)fStack_38;
				if (pSVar5 == null) goto label_05c1fc97;
				if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c1fca1;
				if ((int)pSVar5.Length == 0) goto label_05c1fc9c;
				pSVar5[0] = pIVar6;
				fStack_34 = this.RightHandSeverTimeLeft;
				pIVar6 = (object)fStack_34;
				if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c1fca1;
				if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05c1fc9c;
				pSVar5[1] = pIVar6;
				if (pPVar4 == null) goto label_05c1fc97;
				pPVar4.RPC("SetHandSeverTimesRPC", 0, pSVar5);
				if ((this._leftHandState == 2) && (this._rightHandState == 2)) {
					this.EnterStunState(0.0, false);
				}
			}
		}
		else {
			iVar2 = this.MaxLeftHandHealth;
			if ((iVar1 < iVar2) && (this._leftHandState == 0)) {
				bVar3 = this.IsMine();
				if (!bVar3) goto label_05c1fb72;
				pPVar4 = this.photonView;
				pSVar5 = (Object[])new object[1];
				fStack_38 = (float)CONCAT31(fStack_38._1_3_, 1);
			}
			else {
	joined_r0x05c1faa1: ;
				if ((iVar1 < iVar2) ||((this._leftHandState != 1 ||(bVar3 = this.IsMine(), !bVar3)))) goto label_05c1fb72;
				pPVar4 = this.photonView;
				pSVar5 = (Object[])new object[1];
				fStack_38 = (float)((uint)fStack_38 & 0xffffff00);
			}
			pIVar6 = (object)fStack_38;
			if (pSVar5 == null) goto label_05c1fc97;
			if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c1fca1;
			if ((int)pSVar5.Length == 0) goto label_05c1fc9c;
			pSVar5[0] = pIVar6;
			if (pPVar4 == null) goto label_05c1fc97;
			pPVar4.RPC("SetLeftHandStateRPC", 0, pSVar5);
		}
	label_05c1fb72: ;
		bVar3 = this.IsMine();
		if (!bVar3) {
			return;
		}
		pPVar4 = this.photonView;
		pSVar5 = (Object[])new object[2];
		fStack_38 = (float)this.CurrentLeftHandHealth;
		pIVar6 = (object)fStack_38;
		if (pSVar5 == null) {
	label_05c1fc97: ;
			throw new NullReferenceException();
		}
		if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) {
	label_05c1fca1: ;
			pIVar6 = new ArrayTypeMismatchException();
			throw pIVar6;
		}
		if ((int)pSVar5.Length != 0) {
			pSVar5[0] = pIVar6;
			fStack_34 = (float)this.MaxLeftHandHealth;
			pIVar6 = (object)fStack_34;
			if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c1fca1;
			if ((pSVar5.Length & 0xfffffffe) != 0) {
				pSVar5[1] = pIVar6;
				if (pPVar4 != null) {
					pPVar4.RPC("SetLeftHandHealthRPC", 0, pSVar5);
					return;
				}
				goto label_05c1fc97;
			}
		}
	label_05c1fc9c: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60043C4")]
	[Address(RVA = "0x5B1FCD0", Offset = "0x5B1ECD0", VA = "0x5B1FCD0", Slot = "208")]
	protected virtual void OnRightHandHealthChange()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$OnRightHandHealthChange): 7 lines keep C-only constructs
		int iVar1;
		int iVar2;
		bool bVar3;
		PhotonView pPVar4;
		Object[] pSVar5;
		object pIVar6;
		object pIVar7;
		byte uStack_39;
		float fStack_38;
		float fStack_34;

		iVar1 = this.CurrentRightHandHealth;
		if (iVar1 < 1) {
			iVar2 = this._rightHandState;
			if ((iVar2 != 1) && (iVar2 != 0)) {
				iVar2 = this.MaxRightHandHealth;
				goto joined_r0x05c1ffd1;
			}
			bVar3 = this.IsMine();
			if (bVar3) {
				this.RightHandSeverTimeLeft = this.HandSeverWindow;
				pPVar4 = this.photonView;
				pSVar5 = (Object[])new object[1];
				uStack_39 = 2;
				pIVar6 = (object)uStack_39;
				if (pSVar5 == null) goto label_05c201c7;
				if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c201d1;
				if ((int)pSVar5.Length == 0) goto label_05c201cc;
				pSVar5[0] = pIVar6;
				if (pPVar4 == null) goto label_05c201c7;
				pPVar4.RPC("SetRightHandStateRPC", 0, pSVar5);
				pPVar4 = this.photonView;
				pSVar5 = (Object[])new object[2];
				fStack_38 = this.LeftHandSeverTimeLeft;
				pIVar6 = (object)fStack_38;
				if (pSVar5 == null) goto label_05c201c7;
				if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c201d1;
				if ((int)pSVar5.Length == 0) goto label_05c201cc;
				pSVar5[0] = pIVar6;
				fStack_34 = this.RightHandSeverTimeLeft;
				pIVar6 = (object)fStack_34;
				if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c201d1;
				if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05c201cc;
				pSVar5[1] = pIVar6;
				if (pPVar4 == null) goto label_05c201c7;
				pPVar4.RPC("SetHandSeverTimesRPC", 0, pSVar5);
				if ((this._leftHandState == 2) && (this._rightHandState == 2)) {
					this.EnterStunState(0.0, false);
				}
			}
		}
		else {
			iVar2 = this.MaxRightHandHealth;
			if ((iVar1 < iVar2) && (this._rightHandState == 0)) {
				bVar3 = this.IsMine();
				if (!bVar3) goto label_05c200a2;
				pPVar4 = this.photonView;
				pSVar5 = (Object[])new object[1];
				fStack_38 = (float)CONCAT31(fStack_38._1_3_, 1);
			}
			else {
	joined_r0x05c1ffd1: ;
				if ((iVar1 < iVar2) ||((this._rightHandState != 1 ||(bVar3 = this.IsMine(), !bVar3)))) goto label_05c200a2;
				pPVar4 = this.photonView;
				pSVar5 = (Object[])new object[1];
				fStack_38 = (float)((uint)fStack_38 & 0xffffff00);
			}
			pIVar6 = (object)fStack_38;
			if (pSVar5 == null) goto label_05c201c7;
			if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c201d1;
			if ((int)pSVar5.Length == 0) goto label_05c201cc;
			pSVar5[0] = pIVar6;
			if (pPVar4 == null) goto label_05c201c7;
			pPVar4.RPC("SetRightHandStateRPC", 0, pSVar5);
		}
	label_05c200a2: ;
		bVar3 = this.IsMine();
		if (!bVar3) {
			return;
		}
		pPVar4 = this.photonView;
		pSVar5 = (Object[])new object[2];
		fStack_38 = (float)this.CurrentRightHandHealth;
		pIVar6 = (object)fStack_38;
		if (pSVar5 == null) {
	label_05c201c7: ;
			throw new NullReferenceException();
		}
		if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) {
	label_05c201d1: ;
			pIVar6 = new ArrayTypeMismatchException();
			throw pIVar6;
		}
		if ((int)pSVar5.Length != 0) {
			pSVar5[0] = pIVar6;
			fStack_34 = (float)this.MaxRightHandHealth;
			pIVar6 = (object)fStack_34;
			if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c201d1;
			if ((pSVar5.Length & 0xfffffffe) != 0) {
				pSVar5[1] = pIVar6;
				if (pPVar4 != null) {
					pPVar4.RPC("SetRightHandHealthRPC", 0, pSVar5);
					return;
				}
				goto label_05c201c7;
			}
		}
	label_05c201cc: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60043C5")]
	[Address(RVA = "0x5B1FCB0", Offset = "0x5B1ECB0", VA = "0x5B1FCB0")]
	protected void CheckStunCondition()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$CheckStunCondition): clean


		if ((this._leftHandState == 2) && (this._rightHandState == 2)) {
			this.EnterStunState(0.0, false);
			return;
		}
		return;
	}

	[Token(Token = "0x60043C6")]
	[Address(RVA = "0x5B201E0", Offset = "0x5B1F1E0", VA = "0x5B201E0")]
	public void EnterStunState(float duration = 0f, bool refresh = false)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$EnterStunState): 3 lines keep C-only constructs
		WallColossalAnimations pCVar1;
		AnimationHandler pCVar2;
		String animation;
		bool bVar3;
		PhotonView pPVar4;
		Object[] pSVar5;
		object pIVar6;
		object pIVar7;
		float fVar8;
		float fVar9;
		byte local_3d;
		float local_3c;
		uint local_38;
		float local_34;

		local_3c = duration;
		bVar3 = this.IsMine();
		if ((((!bVar3) || (this.Dead != false)) || (this.EnableAI == false)) ||((!refresh && (this._stunState != 0)))) {
			return;
		}
		this.StopSteam();
		pCVar1 = this.ColossalAnimations;
		if ((pCVar1 != null) &&(pCVar2 = this.Animation, pCVar2 != null)) {
			fVar8 = pCVar2.GetLength(pCVar1.StunFallFaceAnim) ;
			fVar9 = local_3c;
			if ((local_3c == 0.0) && (!NAN(local_3c))) {
				fVar9 = this.StunDuration;
			}
			if (fVar9 <= fVar8) {
				fVar9 = fVar8;
			}
			this.StunTimeLeft = fVar9;
			this.RecoveryTimeLeft = 0.0;
			pCVar1 = this.ColossalAnimations;
			if (pCVar1 != null) {
				animation = pCVar1.StunFallFaceAnim;
				this._needFreshCore = true;
				pCVar2 = this.Animation;
				if (pCVar2 != null) {
					pCVar2.SetCullingType(false);
					this.Ungrab();
					this.DeactivateAllHitboxes();
					this.CrossFade(animation, 0.1, 0.0);
					this.State = 0xd;
					this._currentStateAnimation = animation;
					this._stateTimeLeft = INFINITY;
					pPVar4 = this.photonView;
					pSVar5 = (Object[])new object[1];
					local_3d = 1;
					pIVar6 = (object)local_3d;
					if (pSVar5 != null) {
						if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c20522;
						if ((int)pSVar5.Length == 0) goto label_05c2051d;
						pSVar5[0] = pIVar6;
						if (pPVar4 != null) {
							pPVar4.RPC("SetStunStateRPC", 0, pSVar5);
							pPVar4 = this.photonView;
							pSVar5 = (Object[])new object[2];
							local_34 = this.StunTimeLeft;
							pIVar6 = (object)local_34;
							if (pSVar5 != null) {
								if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) {
	label_05c20522: ;
									pIVar6 = new ArrayTypeMismatchException();
									throw pIVar6;
								}
								if ((int)pSVar5.Length != 0) {
									pSVar5[0] = pIVar6;
									local_38 = 0;
									pIVar6 = (object)local_38;
									if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05c20522;
									if ((pSVar5.Length & 0xfffffffe) != 0) {
										pSVar5[1] = pIVar6;
										if (pPVar4 != null) {
											pPVar4.RPC("SetStunRecoveryTimesRPC", 0, pSVar5);
											return;
										}
										goto label_05c20518;
									}
								}
	label_05c2051d: ;
								throw new IndexOutOfRangeException();
							}
						}
					}
				}
			}
		}
	label_05c20518: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043C7")]
	[Address(RVA = "0x5B20790", Offset = "0x5B1F790", VA = "0x5B20790")]
	[PunRPC]
	public void SetLeftHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetLeftHandHealthRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.CurrentLeftHandHealth = currentHealth;
			this.MaxLeftHandHealth = maxHealth;
		}
		return;
	}

	[Token(Token = "0x60043C8")]
	[Address(RVA = "0x5B207E0", Offset = "0x5B1F7E0", VA = "0x5B207E0")]
	[PunRPC]
	public void SetRightHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetRightHandHealthRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.CurrentRightHandHealth = currentHealth;
			this.MaxRightHandHealth = maxHealth;
		}
		return;
	}

	[Token(Token = "0x60043C9")]
	[Address(RVA = "0x5B20830", Offset = "0x5B1F830", VA = "0x5B20830")]
	[PunRPC]
	public void SetLeftHandStateRPC(byte state, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetLeftHandStateRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.ApplyLeftHandState((uint)state);
			return;
		}
		return;
	}

	[Token(Token = "0x60043CA")]
	[Address(RVA = "0x5B20A40", Offset = "0x5B1FA40", VA = "0x5B20A40")]
	[PunRPC]
	public void SetRightHandStateRPC(byte state, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetRightHandStateRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.ApplyRightHandState((uint)state);
			return;
		}
		return;
	}

	[Token(Token = "0x60043CB")]
	[Address(RVA = "0x5B20C50", Offset = "0x5B1FC50", VA = "0x5B20C50")]
	[PunRPC]
	public void SetSteamStateRPC(byte state, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetSteamStateRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.ApplySteamState((uint)state);
			return;
		}
		return;
	}

	[Token(Token = "0x60043CC")]
	[Address(RVA = "0x5B20C90", Offset = "0x5B1FC90", VA = "0x5B20C90")]
	[PunRPC]
	public void SetStunStateRPC(byte state, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetStunStateRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.ApplyStunState((uint)state);
			return;
		}
		return;
	}

	[Token(Token = "0x60043CD")]
	[Address(RVA = "0x5B20CD0", Offset = "0x5B1FCD0", VA = "0x5B20CD0")]
	[PunRPC]
	public void SetHandSeverTimesRPC(float leftTime, float rightTime, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetHandSeverTimesRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.LeftHandSeverTimeLeft = leftTime;
			this.RightHandSeverTimeLeft = rightTime;
			return;
		}
		return;
	}

	[Token(Token = "0x60043CE")]
	[Address(RVA = "0x5B20D30", Offset = "0x5B1FD30", VA = "0x5B20D30")]
	[PunRPC]
	public void SetStunRecoveryTimesRPC(float stunTime, float recoveryTime, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$SetStunRecoveryTimesRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.StunTimeLeft = stunTime;
			this.RecoveryTimeLeft = recoveryTime;
			return;
		}
		return;
	}

	[Token(Token = "0x60043CF")]
	[Address(RVA = "0x5B20D90", Offset = "0x5B1FD90", VA = "0x5B20D90", Slot = "204")]
	public override void Init(bool ai, string team, JSONNode data, float liveTime)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$Init): clean
		bool bVar1;
		int iVar2;
		JSONNode pSVar3;
		int iVar4;
		float fVar5;

		if (ai) {
			if (data == null) {
	label_05c21168: ;
				throw new NullReferenceException();
			}
			bVar1 = data.HasKey("HandHealth");
			if (bVar1) {
				pSVar3 = data.get_Item("HandHealth");
				if (pSVar3 == null) goto label_05c21168;
				iVar2 = pSVar3.get_AsInt();
				iVar4 = 0;
				if (0 < iVar2) {
					iVar4 = iVar2;
				}
				this.MaxLeftHandHealth = iVar2;
				this.CurrentLeftHandHealth = iVar4;
				this.OnLeftHandHealthChange();
				this.MaxRightHandHealth = iVar2;
				this.CurrentRightHandHealth = iVar4;
				this.OnRightHandHealthChange();
			}
			bVar1 = data.HasKey("LeftHandHealth");
			if (bVar1) {
				pSVar3 = data.get_Item("LeftHandHealth");
				if (pSVar3 == null) goto label_05c21168;
				iVar2 = pSVar3.get_AsInt();
				iVar4 = 0;
				if (0 < iVar2) {
					iVar4 = iVar2;
				}
				this.MaxLeftHandHealth = iVar2;
				this.CurrentLeftHandHealth = iVar4;
				this.OnLeftHandHealthChange();
			}
			bVar1 = data.HasKey("RightHandHealth");
			if (bVar1) {
				pSVar3 = data.get_Item("RightHandHealth");
				if (pSVar3 == null) goto label_05c21168;
				iVar2 = pSVar3.get_AsInt();
				iVar4 = 0;
				if (0 < iVar2) {
					iVar4 = iVar2;
				}
				this.MaxRightHandHealth = iVar2;
				this.CurrentRightHandHealth = iVar4;
				this.OnRightHandHealthChange();
			}
			bVar1 = data.HasKey("HandSeverWindow");
			if (bVar1) {
				pSVar3 = data.get_Item("HandSeverWindow");
				if (pSVar3 == null) goto label_05c21168;
				fVar5 = pSVar3.get_AsFloat();
				this.HandSeverWindow = fVar5;
			}
			bVar1 = data.HasKey("StunDuration");
			if (bVar1) {
				pSVar3 = data.get_Item("StunDuration");
				if (pSVar3 == null) goto label_05c21168;
				fVar5 = pSVar3.get_AsFloat();
				this.StunDuration = fVar5;
			}
			bVar1 = data.HasKey("RecoveryDuration");
			if (bVar1) {
				pSVar3 = data.get_Item("RecoveryDuration");
				if (pSVar3 == null) goto label_05c21168;
				fVar5 = pSVar3.get_AsFloat();
				this.RecoveryDuration = fVar5;
			}
			bVar1 = data.HasKey("WarningSteamTime");
			if (bVar1) {
				pSVar3 = data.get_Item("WarningSteamTime");
				if (pSVar3 == null) goto label_05c21168;
				fVar5 = pSVar3.get_AsFloat();
				this.WarningSteamTime = fVar5;
			}
		}
		this.Init(ai, team, data, liveTime);
		return;
	}

	[Token(Token = "0x60043D0")]
	[Address(RVA = "0x5B21170", Offset = "0x5B20170", VA = "0x5B21170", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$CreateCache): clean
		GameObject owner;
		WallColossalComponentCache __this_00;

		owner = this.gameObject;
		__this_00 = new WallColossalComponentCache(owner);
		this.ColossalCache = __this_00;
		this.CreateCache((BaseComponentCache)this.ColossalCache);
		return;
	}

	[Token(Token = "0x60043D1")]
	[Address(RVA = "0x5B212B0", Offset = "0x5B202B0", VA = "0x5B212B0", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$CreateAnimations): clean
		WallColossalAnimations __this_00;

		__this_00 = new WallColossalAnimations();
		this.ColossalAnimations = __this_00;
		this.CreateAnimations((BaseTitanAnimations)this.ColossalAnimations);
		return;
	}

	[Token(Token = "0x60043D2")]
	[Address(RVA = "0x5B21530", Offset = "0x5B20530", VA = "0x5B21530", Slot = "206")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$CreateCustomSkinLoader): clean
		GameObject __this_00;
		BaseCustomSkinLoader pCVar1;

		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = (BaseCustomSkinLoader)__this_00.AddComponent<ColossalCustomSkinLoader>();
		return pCVar1;
	}

	[Token(Token = "0x60043D3")]
	[Address(RVA = "0x5B21580", Offset = "0x5B20580", VA = "0x5B21580", Slot = "205")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$GetSkinURL): clean
		StringSetting pSVar1;

		if ((set == null) ||(pSVar1 = set.Colossal, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value;
	}

	[Token(Token = "0x60043D4")]
	[Address(RVA = "0x5B215C0", Offset = "0x5B205C0", VA = "0x5B215C0", Slot = "84")]
	protected override IEnumerator WaitAndDie()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$WaitAndDie): clean
		IEnumerator pSVar1;

		this.StopSteam();
		this.State = 0xf;
		this.DeactivateAllHitboxes();
		return pSVar1;
	}

	[Token(Token = "0x60043D5")]
	[Address(RVA = "0x5B1E6C0", Offset = "0x5B1D6C0", VA = "0x5B1E6C0")]
	public void ApplySteamState(ColossalSteamState newState)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$ApplySteamState): clean
		uint uVar1;
		GameObject pUVar2;
		WallColossalSteamWarningZone pCVar3;
		bool bVar4;
		WallColossalComponentCache pCVar5;
		BoxCollider pUVar6;
		Object pUVar7;
		BaseHitbox pCVar8;

		this._steamState = newState;
		if (newState == 2) {
			pCVar5 = this.ColossalCache;
			if (pCVar5 == null) goto label_05c1ecfe;
			this.ToggleParticles(pCVar5.ColossalSteam1, false);
			pCVar5 = this.ColossalCache;
			if (pCVar5 == null) goto label_05c1ecfe;
			this.ToggleParticles(pCVar5.ColossalSteam2, this.EffectsEnabled);
			pCVar8 = null;
			this.FadeSound(ShifterSounds.ColossalSteam1, 0.0, 1.0);
			this.FadeSound(ShifterSounds.ColossalSteam2, 1.0, 0.0);
			this.PlaySound(ShifterSounds.ColossalSteam2);
			pCVar5 = this.ColossalCache;
			if (pCVar5 != null) {
				pCVar8 = pCVar5.SteamHitbox;
			}
			bVar4 = ((Object)pCVar8 != null);
			if ((bVar4) &&(bVar4 = this.IsMine())) {
				pCVar5 = this.ColossalCache;
				if ((pCVar5 == null) ||(pCVar8 = pCVar5.SteamHitbox, pCVar8 == null)) goto label_05c1ecfe;
				pCVar8.Activate(0.0, 0.0);
			}
			pCVar5 = this.ColossalCache;
			if (pCVar5 != null) goto label_05c1eb4f;
	label_05c1ea1c: ;
			pUVar7 = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (newState != 1) {
				if (newState != 0) {
					return;
				}
				pCVar5 = this.ColossalCache;
				if (pCVar5 != null) {
					this.ToggleParticles(pCVar5.ColossalSteam1, false);
					pCVar5 = this.ColossalCache;
					if (pCVar5 != null) {
						this.ToggleParticles(pCVar5.ColossalSteam2, false);
						pCVar8 = null;
						this.FadeSound(ShifterSounds.ColossalSteam1, 0.0, 1.0);
						this.FadeSound(ShifterSounds.ColossalSteam2, 0.0, 1.0);
						pCVar5 = this.ColossalCache;
						if (pCVar5 != null) {
							pCVar8 = pCVar5.SteamHitbox;
						}
						bVar4 = ((Object)pCVar8 != null);
						if (bVar4) {
							pCVar5 = this.ColossalCache;
							if ((pCVar5 == null) ||(pCVar8 = pCVar5.SteamHitbox, pCVar8 == null)) goto label_05c1ecfe;
							pCVar8.Deactivate();
						}
						pCVar5 = this.ColossalCache;
						if (pCVar5 == null) {
							pUVar7 = null;
							uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
						}
						else {
							pUVar7 = (Object)pCVar5.SteamWarningZone;
							uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						bVar4 = (pUVar7 != null);
						if (!bVar4) {
							return;
						}
						pCVar5 = this.ColossalCache;
						if ((pCVar5 != null) &&(pUVar2 = pCVar5.SteamWarningZone, pUVar2 != null)) {
							pUVar2.SetActive(false);
							pCVar5 = this.ColossalCache;
							if (pCVar5 != null) {
								pCVar3 = pCVar5.SteamWarningZoneComponent;
								if (pCVar3 == null) {
									return;
								}
								pCVar3.SetActive(false);
								return;
							}
						}
					}
				}
				goto label_05c1ecfe;
			}
			pCVar5 = this.ColossalCache;
			if (pCVar5 == null) goto label_05c1ecfe;
			this.ToggleParticles(pCVar5.ColossalSteam1, this.EffectsEnabled);
			pCVar5 = this.ColossalCache;
			if (pCVar5 == null) goto label_05c1ecfe;
			this.ToggleParticles(pCVar5.ColossalSteam2, false);
			pCVar8 = null;
			this.FadeSound(ShifterSounds.ColossalSteam1, 0.6, 0.0);
			this.PlaySound(ShifterSounds.ColossalSteam1);
			pCVar5 = this.ColossalCache;
			if (pCVar5 != null) {
				pCVar8 = pCVar5.SteamHitbox;
			}
			bVar4 = ((Object)pCVar8 != null);
			if (bVar4) {
				pCVar5 = this.ColossalCache;
				if ((pCVar5 == null) ||(pCVar8 = pCVar5.SteamHitbox, pCVar8 == null)) goto label_05c1ecfe;
				pCVar8.Deactivate();
			}
			pCVar5 = this.ColossalCache;
			if (pCVar5 == null) goto label_05c1ea1c;
	label_05c1eb4f: ;
			pUVar7 = (Object)pCVar5.SteamWarningZone;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = (pUVar7 != null);
		if (!bVar4) {
			return;
		}
		pCVar5 = this.ColossalCache;
		if ((pCVar5 != null) &&(pUVar2 = pCVar5.SteamWarningZone, pUVar2 != null)) {
			pUVar2.SetActive(true);
			pCVar5 = this.ColossalCache;
			if (pCVar5 != null) {
				pCVar3 = pCVar5.SteamWarningZoneComponent;
				bVar4 = ((Object)pCVar3 != null);
				if (!bVar4) {
					return;
				}
				pCVar5 = this.ColossalCache;
				if ((pCVar5 != null) &&(pCVar3 = pCVar5.SteamWarningZoneComponent, pCVar3 != null)) {
					pCVar3._owner = this;
					pUVar6 = pCVar3.GetComponent<BoxCollider>();
					pCVar3._boxCollider = pUVar6;
					pCVar5 = this.ColossalCache;
					if ((pCVar5 != null) &&(pCVar3 = pCVar5.SteamWarningZoneComponent, pCVar3 != null)) {
						pCVar3._isActive = true;
						return;
					}
				}
			}
		}
	label_05c1ecfe: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043D6")]
	[Address(RVA = "0x5B20870", Offset = "0x5B1F870", VA = "0x5B20870")]
	public void ApplyLeftHandState(ColossalHandState newState)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$ApplyLeftHandState): 21 lines keep C-only constructs
		float fVar1;
		BaseHitbox __this_00;
		String name;
		WallColossalComponentCache pCVar2;
		Transform __this_01;
		bool toggle;
		ParticleSystem system;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Quaternion UVar7;
		Vector3 UVar8;
		Vector3 UStack_58;
		byte[] auStack_48 = new byte[16];
		byte[] auStack_38 = new byte[16];
		byte[] auStack_28 = new byte[16];

		this._leftHandState = newState;
		switch(newState) {
		case 0:
		case 1:
			pCVar2 = this.ColossalCache;
			if (pCVar2 != null) {
				system = pCVar2.LeftHandSteam;
				toggle = false;
	label_05c20a26: ;
				this.ToggleParticles(system, toggle);
				return;
			}
			break;
		case 2:
			pCVar2 = this.ColossalCache;
			if ((pCVar2 != null) &&(__this_00 = pCVar2.HandLHitbox, __this_00 != null)) {
				name = EffectPrefabs.Blood1;
				__this_01 = __this_00.transform ;
				if (__this_01 != null) {
					UVar8 = __this_01.position;
					auStack_28._8_4_ = extraout_XMM0_Dc;
					auStack_28._0_8_ = UVar8._0_8_;
					auStack_28._12_4_ = extraout_XMM0_Dd;
					UStack_58.x = -1.5707964;
					UStack_58.y = 0.0;
					UStack_58.z = 0.0;
					UVar7 = Quaternion.Internal_FromEulerRad(ref UStack_58);
					fVar1 = this.Size;
					fVar3 = UVar7.x;
					fVar4 = UVar7.y;
					fVar5 = UVar7.z;
					fVar6 = UVar7.w;
					if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
						auStack_38._8_4_ = extraout_XMM0_Dc_00;
						auStack_38._0_8_ = UVar7._0_8_;
						auStack_38._12_4_ = extraout_XMM0_Dd_00;
						auStack_48._8_4_ = in_XMM1_Dc;
						auStack_48._0_8_ = UVar7._8_8_;
						auStack_48._12_4_ = in_XMM1_Dd;
						fVar3 = (float)auStack_38._0_4_;
						fVar4 = (float)auStack_38._4_4_;
						fVar5 = (float)auStack_48._0_4_;
						fVar6 = (float)auStack_48._4_4_;
					}
					UVar7.y = fVar4;
					UVar7.x = fVar3;
					UVar7.w = fVar6;
					UVar7.z = fVar5;
					UVar8.x = (float)auStack_28._0_4_;
					UVar8.y = (float)auStack_28._4_4_;
					EffectSpawner.Spawn(name, UVar8, UVar7, fVar1 * 100.0, true, null);
					pCVar2 = this.ColossalCache;
					if (pCVar2 != null) {
						this.ToggleParticles(pCVar2.LeftHandSteam, this.EffectsEnabled);
						return;
					}
				}
			}
			break;
		case 3:
			pCVar2 = this.ColossalCache;
			if (pCVar2 != null) {
				system = pCVar2.LeftHandSteam;
				toggle = this.EffectsEnabled;
				goto label_05c20a26;
			}
			break;
		default: ;
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043D7")]
	[Address(RVA = "0x5B20A80", Offset = "0x5B1FA80", VA = "0x5B20A80")]
	public void ApplyRightHandState(ColossalHandState newState)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$ApplyRightHandState): 21 lines keep C-only constructs
		float fVar1;
		BaseHitbox __this_00;
		String name;
		WallColossalComponentCache pCVar2;
		Transform __this_01;
		bool toggle;
		ParticleSystem system;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Quaternion UVar7;
		Vector3 UVar8;
		Vector3 UStack_58;
		byte[] auStack_48 = new byte[16];
		byte[] auStack_38 = new byte[16];
		byte[] auStack_28 = new byte[16];

		this._rightHandState = newState;
		switch(newState) {
		case 0:
		case 1:
			pCVar2 = this.ColossalCache;
			if (pCVar2 != null) {
				system = pCVar2.RightHandSteam;
				toggle = false;
	label_05c20c36: ;
				this.ToggleParticles(system, toggle);
				return;
			}
			break;
		case 2:
			pCVar2 = this.ColossalCache;
			if ((pCVar2 != null) &&(__this_00 = pCVar2.HandRHitbox, __this_00 != null)) {
				name = EffectPrefabs.Blood1;
				__this_01 = __this_00.transform ;
				if (__this_01 != null) {
					UVar8 = __this_01.position;
					auStack_28._8_4_ = extraout_XMM0_Dc;
					auStack_28._0_8_ = UVar8._0_8_;
					auStack_28._12_4_ = extraout_XMM0_Dd;
					UStack_58.x = -1.5707964;
					UStack_58.y = 0.0;
					UStack_58.z = 0.0;
					UVar7 = Quaternion.Internal_FromEulerRad(ref UStack_58);
					fVar1 = this.Size;
					fVar3 = UVar7.x;
					fVar4 = UVar7.y;
					fVar5 = UVar7.z;
					fVar6 = UVar7.w;
					if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
						auStack_38._8_4_ = extraout_XMM0_Dc_00;
						auStack_38._0_8_ = UVar7._0_8_;
						auStack_38._12_4_ = extraout_XMM0_Dd_00;
						auStack_48._8_4_ = in_XMM1_Dc;
						auStack_48._0_8_ = UVar7._8_8_;
						auStack_48._12_4_ = in_XMM1_Dd;
						fVar3 = (float)auStack_38._0_4_;
						fVar4 = (float)auStack_38._4_4_;
						fVar5 = (float)auStack_48._0_4_;
						fVar6 = (float)auStack_48._4_4_;
					}
					UVar7.y = fVar4;
					UVar7.x = fVar3;
					UVar7.w = fVar6;
					UVar7.z = fVar5;
					UVar8.x = (float)auStack_28._0_4_;
					UVar8.y = (float)auStack_28._4_4_;
					EffectSpawner.Spawn(name, UVar8, UVar7, fVar1 * 100.0, true, null);
					pCVar2 = this.ColossalCache;
					if (pCVar2 != null) {
						this.ToggleParticles(pCVar2.RightHandSteam, this.EffectsEnabled);
						return;
					}
				}
			}
			break;
		case 3:
			pCVar2 = this.ColossalCache;
			if (pCVar2 != null) {
				system = pCVar2.RightHandSteam;
				toggle = this.EffectsEnabled;
				goto label_05c20c36;
			}
			break;
		default: ;
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043D8")]
	[Address(RVA = "0x5B1ED10", Offset = "0x5B1DD10", VA = "0x5B1ED10")]
	public void ApplyStunState(ColossalStunState newState)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$ApplyStunState): clean
		int iVar1;
		WallColossalAnimations pCVar2;
		AnimationHandler __this_00;
		bool bVar3;
		float fVar4;

		iVar1 = this._stunState;
		this._stunState = newState;
		if (newState == 1) {
			pCVar2 = this.ColossalAnimations;
			if (pCVar2 != null) {
				this.PlayAnimation(pCVar2.StunFallFaceAnim, 0.0) ;
				pCVar2 = this.ColossalAnimations;
				if (pCVar2 != null) {
					this.SetAnimationSpeedNonRPC(pCVar2.StunFallFaceAnim, 1.0);
					pCVar2 = this.ColossalAnimations;
					if ((pCVar2 != null) &&(__this_00 = this.Animation, __this_00 != null)) {
						fVar4 = __this_00.GetLength(pCVar2.StunFallFaceAnim);
						this._stunAnimationTimeLeft = fVar4 * 0.85;
						return;
					}
				}
			}
	label_05c1ee1b: ;
			throw new NullReferenceException();
		}
		if ((newState == 0) && (iVar1 - 1U < 2)) {
			pCVar2 = this.ColossalAnimations;
			if (pCVar2 == null) goto label_05c1ee1b;
			this.SetAnimationSpeedNonRPC(pCVar2.StunFallFaceAnim, 1.0);
			this._stunAnimationTimeLeft = 0.0;
			bVar3 = this.IsMine();
			if (((bVar3) && (this.Dead == false)) && (this.State == 0xd)) {
				this.Idle();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60043D9")]
	[Address(RVA = "0x5B218A0", Offset = "0x5B208A0", VA = "0x5B218A0")]
	public new void LateUpdate()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$LateUpdate): clean
		WallColossalComponentCache pCVar1;
		BaseHitbox pCVar2;
		TitanDeathDissolve pCVar3;
		Transform pUVar4;
		Quaternion UVar5;
		Vector3 UStack_20;

		pCVar1 = this.ColossalCache;
		if ((this._leftHandState & 0xfffffffeU) == 2) {
			if (pCVar1 == null) goto label_05c21c0b;
			pUVar4 = pCVar1.LeftHand;
			if (pUVar4 == null) goto label_05c21c0b;
			pUVar4.localScale = (Vector3)(Vector3.zeroVector);
			pCVar1 = this.ColossalCache;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.HandLHitbox, pCVar2 == null)) goto label_05c21c0b;
			pUVar4 = pCVar2.transform;
			UStack_20.z = Random.Range(-10.0, 10.0);
			UStack_20.z = UStack_20.z * 0.017453292;
		}
		else {
			if (pCVar1 == null) goto label_05c21c0b;
			pUVar4 = pCVar1.LeftHand;
			if (pUVar4 == null) goto label_05c21c0b;
			pUVar4.localScale = (Vector3)(Vector3.oneVector);
			pCVar1 = this.ColossalCache;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.HandLHitbox, pCVar2 == null)) goto label_05c21c0b;
			pUVar4 = pCVar2.transform;
			UStack_20.z = 0.0;
		}
		UStack_20.x = 0.0;
		UStack_20.y = 0.0;
		UVar5 = Quaternion.Internal_FromEulerRad(ref UStack_20) ;
		if (pUVar4 == null) goto label_05c21c0b;
		pUVar4.localRotation = UVar5;
		pCVar1 = this.ColossalCache;
		if ((this._rightHandState & 0xfffffffeU) == 2) {
			if (pCVar1 == null) goto label_05c21c0b;
			pUVar4 = pCVar1.RightHand;
			if (pUVar4 == null) goto label_05c21c0b;
			pUVar4.localScale = (Vector3)(Vector3.zeroVector);
			pCVar1 = this.ColossalCache;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.HandRHitbox, pCVar2 == null)) goto label_05c21c0b;
			pUVar4 = pCVar2.transform;
			UStack_20.z = Random.Range(-10.0, 10.0);
			UStack_20.z = UStack_20.z * 0.017453292;
		}
		else {
			if (pCVar1 == null) goto label_05c21c0b;
			pUVar4 = pCVar1.RightHand;
			if (pUVar4 == null) goto label_05c21c0b;
			pUVar4.localScale = (Vector3)(Vector3.oneVector);
			pCVar1 = this.ColossalCache;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.HandRHitbox, pCVar2 == null)) goto label_05c21c0b;
			pUVar4 = pCVar2.transform;
			UStack_20.z = 0.0;
		}
		UStack_20.x = 0.0;
		UStack_20.y = 0.0;
		UVar5 = Quaternion.Internal_FromEulerRad(ref UStack_20) ;
		if (pUVar4 != null) {
			pUVar4.localRotation = UVar5;
			this.UpdateDeathVisuals();
			pCVar3 = this.DeathDissolve;
			if ((pCVar3 == null) ||(pCVar3._CollidersDisabled_k__BackingField == false)) {
				return;
			}
			pCVar1 = this.ColossalCache;
			if (pCVar1 != null) {
				this.ToggleParticles(pCVar1.LeftHandSteam, false);
				pCVar1 = this.ColossalCache;
				if (pCVar1 != null) {
					this.ToggleParticles(pCVar1.RightHandSteam, false);
					return;
				}
			}
		}
	label_05c21c0b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043DA")]
	[Address(RVA = "0x5B21C30", Offset = "0x5B20C30", VA = "0x5B21C30")]
	public new void Update()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$Update): clean
		WallColossalAnimations pCVar1;
		bool bVar2;
		float fVar3;
		float fVar4;

		this.Update();
		if (this.Dead == false) {
			bVar2 = this.IsMine();
			if (bVar2) {
				this.UpdateSteam();
			}
			this.UpdateHandSeverWindows();
			this.UpdateStunRecovery();
			if ((this._stunState == 1) && (fVar4 = this._stunAnimationTimeLeft, 0.0 < fVar4)) {
				fVar3 = Time.deltaTime;
				fVar4 = fVar4 - fVar3;
				this._stunAnimationTimeLeft = fVar4;
				if (fVar4 <= 0.0) {
					pCVar1 = this.ColossalAnimations;
					if (pCVar1 == null) {
						throw new NullReferenceException();
					}
					this.SetAnimationSpeedNonRPC(pCVar1.StunFallFaceAnim, 0.0);
					this._stunAnimationTimeLeft = 0.0;
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60043DB")]
	[Address(RVA = "0x5B21600", Offset = "0x5B20600", VA = "0x5B21600")]
	protected void ToggleParticleSystem(ParticleSystem system, bool enabled)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$ToggleParticleSystem): 2 lines keep C-only constructs
		undefined7 in_register_00000011;

		if ((int)CONCAT71(in_register_00000011, enabled) != 0) {
			this.ToggleParticles(system, this.EffectsEnabled != false);
			return;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.ToggleParticles(system, false);
		return;
	}

	[Token(Token = "0x60043DC")]
	[Address(RVA = "0x5B20540", Offset = "0x5B1F540", VA = "0x5B20540")]
	public void StopSteam()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$StopSteam): 1 lines keep C-only constructs
		bool bVar1;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		byte local_19;

		if ((this._steamState == 0) ||(bVar1 = this.IsMine(), !bVar1)) {
			return;
		}
		__this_00 = this.photonView;
		parameters = (Object[])new object[1];
		local_19 = 0;
		pIVar2 = (object)local_19;
		if (parameters != null) {
			if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
				pIVar2 = new ArrayTypeMismatchException();
				throw pIVar2;
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = pIVar2;
			if (__this_00 != null) {
				__this_00.RPC("SetSteamStateRPC", 0, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043DD")]
	[Address(RVA = "0x5B22A40", Offset = "0x5B21A40", VA = "0x5B22A40")]
	protected void StartSteam()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$StartSteam): 1 lines keep C-only constructs
		bool bVar1;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		byte uStack_19;

		this._steamTimeLeft = this.WarningSteamTime;
		this._steamBlowAwayTimeLeft = this.BlowAwaySteamTime;
		this._steamDamageTimeLeft = this.SteamDamageInterval;
		bVar1 = this.IsMine();
		if (!bVar1) {
			return;
		}
		__this_00 = this.photonView;
		parameters = (Object[])new object[1];
		uStack_19 = 1;
		pIVar2 = (object)uStack_19;
		if (parameters != null) {
			if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
				pIVar2 = new ArrayTypeMismatchException();
				throw pIVar2;
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = pIVar2;
			if (__this_00 != null) {
				__this_00.RPC("SetSteamStateRPC", 0, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043DE")]
	[Address(RVA = "0x5B21CF0", Offset = "0x5B20CF0", VA = "0x5B21CF0")]
	protected void UpdateSteam()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$UpdateSteam): 1 lines keep C-only constructs
		WallColossalComponentCache pCVar1;
		Component pUVar2;
		bool bVar3;
		Transform pUVar4;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar5;
		object pIVar6;
		float fVar7;
		byte local_1d;
		float local_1c;

		if (this._steamState != 0) {
			local_1c = this._steamTimeLeft;
			fVar7 = Time.deltaTime;
			this._steamTimeLeft = local_1c - fVar7;
			local_1c = this._steamBlowAwayTimeLeft;
			fVar7 = Time.deltaTime;
			this._steamBlowAwayTimeLeft = local_1c - fVar7;
			local_1c = this._steamDamageTimeLeft;
			fVar7 = Time.deltaTime;
			this._steamDamageTimeLeft = local_1c - fVar7;
			if (this._steamBlowAwayTimeLeft <= 0.0) {
				pCVar1 = this.ColossalCache;
				if ((pCVar1 == null) ||(pUVar2 = (Component)pCVar1.NapeHurtbox, pUVar2 == null)) goto label_05c21f3f;
				pUVar4 = pUVar2.transform;
				this.BlowAwayHumans(pUVar4, 100.0, this.SteamBlowAwayForce);
				this._steamBlowAwayTimeLeft = this.BlowAwaySteamTime;
			}
			if ((this._steamState == 2) && (this._steamDamageTimeLeft <= 0.0)) {
				pCVar1 = this.ColossalCache;
				if ((pCVar1 == null) ||(pUVar2 = (Component)pCVar1.NapeHurtbox, pUVar2 == null)) goto label_05c21f3f;
				pUVar4 = pUVar2.transform;
				this.BlowAwayHumans(pUVar4, 100.0, this.SteamBlowAwayForce);
				this._steamDamageTimeLeft = this.SteamDamageInterval;
			}
			if (((this._steamTimeLeft <= 0.0) && (this._steamState == 1)) &&(bVar3 = this.IsMine())) {
				__this_00 = this.photonView;
				parameters = (Object[])new object[1];
				local_1d = 2;
				pIVar5 = (object)local_1d;
				if (parameters != null) {
					if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar5;
					if (__this_00 != null) {
						__this_00.RPC("SetSteamStateRPC", 0, parameters);
						return;
					}
				}
	label_05c21f3f: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60043DF")]
	[Address(RVA = "0x5B21F60", Offset = "0x5B20F60", VA = "0x5B21F60")]
	protected void UpdateHandSeverWindows()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$UpdateHandSeverWindows): 14 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		ulong in_RAX;
		PhotonView pPVar3;
		Object[] pSVar4;
		object pIVar5;
		object pIVar6;
		float fVar7;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (this._stunState == 0) {
			if ((this._leftHandState == 2) &&(fVar7 = this.LeftHandSeverTimeLeft, 0.0 < fVar7)) {
				uStack_28 = CONCAT44(fVar7, (uint)uStack_28);
				fVar7 = Time.deltaTime;
				this.LeftHandSeverTimeLeft = uStack_28._4_4_ - fVar7;
				if (uStack_28._4_4_ - fVar7 <= 0.0) {
					this.LeftHandSeverTimeLeft = 0.0;
					bVar1 = this.IsMine();
					if (bVar1) {
						iVar2 = this.MaxLeftHandHealth;
						if (iVar2 < 1) {
							iVar2 = 0;
						}
						this.CurrentLeftHandHealth = iVar2;
						this.OnLeftHandHealthChange();
						pPVar3 = this.photonView;
						pSVar4 = (Object[])new object[1];
						uStack_28._0_4_ = (uint)(uint3)uStack_28;
						pIVar5 = (object)(((long)&uStack_28 + 3));
						if (pSVar4 == null) goto label_05c22226;
						if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c22230;
						if ((int)pSVar4.Length == 0) goto label_05c2222b;
						pSVar4[0] = pIVar5;
						if (pPVar3 == null) goto label_05c22226;
						pPVar3.RPC("SetLeftHandStateRPC", 0, pSVar4);
					}
				}
			}
			if ((this._rightHandState == 2) &&(fVar7 = this.RightHandSeverTimeLeft, 0.0 < fVar7)) {
				uStack_28 = CONCAT44(fVar7, (uint)uStack_28);
				fVar7 = Time.deltaTime;
				this.RightHandSeverTimeLeft = uStack_28._4_4_ - fVar7;
				if (uStack_28._4_4_ - fVar7 <= 0.0) {
					this.RightHandSeverTimeLeft = 0.0;
					bVar1 = this.IsMine();
					if (bVar1) {
						iVar2 = this.MaxRightHandHealth;
						if (iVar2 < 1) {
							iVar2 = 0;
						}
						this.CurrentRightHandHealth = iVar2;
						this.OnRightHandHealthChange();
						pPVar3 = this.photonView;
						pSVar4 = (Object[])new object[1];
						uStack_28._0_3_ = (uint3)(ushort)uStack_28;
						pIVar5 = (object)(((long)&uStack_28 + 2));
						if (pSVar4 != null) {
							if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05c22230: ;
								pIVar5 = new ArrayTypeMismatchException();
								throw pIVar5;
							}
							if ((int)pSVar4.Length == 0) {
	label_05c2222b: ;
								throw new IndexOutOfRangeException();
							}
							pSVar4[0] = pIVar5;
							if (pPVar3 != null) {
								pPVar3.RPC("SetRightHandStateRPC", 0, pSVar4);
								return;
							}
						}
	label_05c22226: ;
						throw new NullReferenceException();
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60043E0")]
	[Address(RVA = "0x5B22240", Offset = "0x5B21240", VA = "0x5B22240")]
	protected void UpdateStunRecovery()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$UpdateStunRecovery): 10 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		PhotonView pPVar3;
		Object[] pSVar4;
		object pIVar5;
		object pIVar6;
		String methodName;
		float fVar7;
		byte local_3f;
		byte local_3e;
		byte local_3d;
		float local_3c;
		float[] local_38 = new float[2];

		iVar2 = this._stunState;
		if (iVar2 == 2) {
			local_3c = this.RecoveryTimeLeft;
			if (local_3c <= 0.0) {
				return;
			}
			fVar7 = Time.deltaTime;
			this.RecoveryTimeLeft = local_3c - fVar7;
			if (0.0 < local_3c - fVar7) {
				return;
			}
			this.RecoveryTimeLeft = 0.0;
			bVar1 = this.IsMine();
			if (!bVar1) {
				return;
			}
			iVar2 = this.MaxLeftHandHealth;
			if (iVar2 < 1) {
				iVar2 = 0;
			}
			this.CurrentLeftHandHealth = iVar2;
			this.OnLeftHandHealthChange();
			iVar2 = this.MaxRightHandHealth;
			if (iVar2 < 1) {
				iVar2 = 0;
			}
			this.CurrentRightHandHealth = iVar2;
			this.OnRightHandHealthChange();
			pPVar3 = this.photonView;
			pSVar4 = (Object[])new object[1];
			local_3d = 0;
			pIVar5 = (object)local_3d;
			if (pSVar4 != null) {
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c229a6;
				if ((int)pSVar4.Length == 0) goto label_05c229a1;
				pSVar4[0] = pIVar5;
				if (pPVar3 != null) {
					pPVar3.RPC("SetStunStateRPC", 0, pSVar4);
					pPVar3 = this.photonView;
					pSVar4 = (Object[])new object[1];
					local_3e = 0;
					pIVar5 = (object)local_3e;
					if (pSVar4 != null) {
						if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c229a6;
						if ((int)pSVar4.Length == 0) goto label_05c229a1;
						pSVar4[0] = pIVar5;
						if (pPVar3 != null) {
							pPVar3.RPC("SetLeftHandStateRPC", 0, pSVar4);
							pPVar3 = this.photonView;
							pSVar4 = (Object[])new object[1];
							local_3f = 0;
							pIVar5 = (object)local_3f;
							if (pSVar4 != null) {
								if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c229a6;
								if ((int)pSVar4.Length == 0) goto label_05c229a1;
								pSVar4[0] = pIVar5;
								if (pPVar3 != null) {
									pPVar3.RPC("SetRightHandStateRPC", 0, pSVar4);
									this.LeftHandSeverTimeLeft = 0.0;
									this.RightHandSeverTimeLeft = 0.0;
									pPVar3 = this.photonView;
									pSVar4 = (Object[])new object[2];
									local_38[1] = 0.0;
									pIVar5 = (object)(local_38 + 1);
									if (pSVar4 != null) {
										if ((pIVar5 == null) ||(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 != null)) {
											if ((int)pSVar4.Length != 0) {
												pSVar4[0] = pIVar5;
												local_38[0] = 0.0;
												pIVar5 = (object)local_38;
												if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c229a6;
												if ((pSVar4.Length & 0xfffffffe) != 0) {
													pSVar4[1] = pIVar5;
													if (pPVar3 != null) {
														methodName = "SetHandSeverTimesRPC";
														goto label_05c22985;
													}
													goto label_05c2299c;
												}
											}
											goto label_05c229a1;
										}
										goto label_05c229a6;
									}
								}
							}
						}
					}
				}
			}
		}
		else {
			if (iVar2 != 1) {
				return;
			}
			local_3c = this.StunTimeLeft;
			if (local_3c <= 0.0) {
				return;
			}
			fVar7 = Time.deltaTime;
			this.StunTimeLeft = local_3c - fVar7;
			if (0.0 < local_3c - fVar7) {
				return;
			}
			this.StunTimeLeft = 0.0;
			bVar1 = this.IsMine();
			if (!bVar1) {
				return;
			}
			this.RecoveryTimeLeft = this.RecoveryDuration;
			pPVar3 = this.photonView;
			pSVar4 = (Object[])new object[1];
			local_3d = 2;
			pIVar5 = (object)local_3d;
			if (pSVar4 != null) {
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c229a6;
				if ((int)pSVar4.Length == 0) goto label_05c229a1;
				pSVar4[0] = pIVar5;
				if (pPVar3 != null) {
					pPVar3.RPC("SetStunStateRPC", 0, pSVar4);
					pPVar3 = this.photonView;
					pSVar4 = (Object[])new object[1];
					local_3e = 3;
					pIVar5 = (object)local_3e;
					if (pSVar4 != null) {
						if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c229a6;
						if ((int)pSVar4.Length == 0) goto label_05c229a1;
						pSVar4[0] = pIVar5;
						if (pPVar3 != null) {
							pPVar3.RPC("SetLeftHandStateRPC", 0, pSVar4);
							pPVar3 = this.photonView;
							pSVar4 = (Object[])new object[1];
							local_3f = 3;
							pIVar5 = (object)local_3f;
							if (pSVar4 != null) {
								if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c229a6;
								if ((int)pSVar4.Length == 0) goto label_05c229a1;
								pSVar4[0] = pIVar5;
								if (pPVar3 != null) {
									pPVar3.RPC("SetRightHandStateRPC", 0, pSVar4);
									pPVar3 = this.photonView;
									pSVar4 = (Object[])new object[2];
									local_38[1] = 0.0;
									pIVar5 = (object)(local_38 + 1);
									if (pSVar4 != null) {
										if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05c229a6: ;
											pIVar5 = new ArrayTypeMismatchException();
											throw pIVar5;
										}
										if ((int)pSVar4.Length != 0) {
											pSVar4[0] = pIVar5;
											local_38[0] = this.RecoveryTimeLeft;
											pIVar5 = (object)local_38;
											if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c229a6;
											if ((pSVar4.Length & 0xfffffffe) != 0) {
												pSVar4[1] = pIVar5;
												if (pPVar3 != null) {
													methodName = "SetStunRecoveryTimesRPC";
	label_05c22985: ;
													pPVar3.RPC(methodName, 0, pSVar4);
													return;
												}
												goto label_05c2299c;
											}
										}
	label_05c229a1: ;
										throw new IndexOutOfRangeException();
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c2299c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043E1")]
	[Address(RVA = "0x5B229C0", Offset = "0x5B219C0", VA = "0x5B229C0")]
	protected void UpdateStunAnimation()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$UpdateStunAnimation): clean
		WallColossalAnimations pCVar1;
		float fVar2;
		float fVar3;

		if ((this._stunState == 1) && (fVar3 = this._stunAnimationTimeLeft, 0.0 < fVar3)) {
			fVar2 = Time.deltaTime;
			fVar3 = fVar3 - fVar2;
			this._stunAnimationTimeLeft = fVar3;
			if (fVar3 <= 0.0) {
				pCVar1 = this.ColossalAnimations;
				if (pCVar1 == null) {
					throw new NullReferenceException();
				}
				this.SetAnimationSpeedNonRPC(pCVar1.StunFallFaceAnim, 0.0) ;
				this._stunAnimationTimeLeft = 0.0;
			}
		}
		return;
	}

	[Token(Token = "0x60043E2")]
	[Address(RVA = "0x5B23020", Offset = "0x5B22020", VA = "0x5B23020", Slot = "189")]
	protected override void DeactivateAllHitboxes()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$DeactivateAllHitboxes): 3 lines keep C-only constructs
		BaseTitanComponentCache pCVar1;
		List<BaseHitbox> __this_00;
		WallColossalComponentCache pCVar2;
		BaseHitbox y;
		object x;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		byte puStack_38;

		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		pCVar1 = this.BaseTitanCache;
		if ((pCVar1 == null) ||(__this_00 = pCVar1.Hitboxes, __this_00 == null )) {
			throw new NullReferenceException();
		}
		SStack_58 = __this_00.GetEnumerator();
		puStack_38 = (byte)&SStack_58;
		while(true) {
			bVar3 = SStack_58.MoveNext();
			x = SStack_58._current;
			if (!bVar3) {
				SStack_58.Dispose();
				return;
			}
			pCVar2 = this.ColossalCache;
			if (pCVar2 == null) break;
			y = pCVar2.SteamHitbox;
			bVar3 = ((Object)x == (Object)y);
			if ((!bVar3) || (this._steamState != 2)) {
				if ((Object)x == null) {
					throw new NullReferenceException();
				}
				(*((Object)x.klass)[1]._1.byval_arg.data)(x,*(ulong)&((Object)x.klass)[1]._1.byval_arg.bits);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043E3")]
	[Address(RVA = "0x5B231F0", Offset = "0x5B221F0", VA = "0x5B231F0", Slot = "187")]
	protected override void UpdateAttack()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$UpdateAttack): 60 lines keep C-only constructs
		int iVar1;
		WallColossalAnimations pCVar2;
		WallColossalComponentCache pCVar3;
		BaseHitbox pCVar4;
		String pSVar5;
		BaseTitanComponentCache pCVar6;
		bool bVar7;
		Transform pUVar8;
		MethodInfo pMVar9;
		float fVar10;
		ulong uVar11;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		uint uVar12;
		uint uVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		Vector3 UVar18;
		Vector3 source;
		Vector3 position;
		Quaternion UVar19;
		Quaternion rotation;
		Quaternion rotation_00;
		ulong uStack_58;
		Vector3 UStack_48;
		byte[] auStack_38 = new byte[16];
		byte[] auStack_28 = new byte[24];

		fVar10 = this.GetAnimationTime();
		pCVar2 = this.ColossalAnimations;
		if (pCVar2 == null) goto label_05c239f4;
		pMVar9 = (MethodInfo)pCVar2.AttackSteam;
		bVar7 = (this._currentAttackAnimation == (String)pMVar9);
		if (bVar7) {
			if (fVar10 <= 0.37) {
				return;
			}
			if (this._currentAttackStage == 0) {
				this._currentAttackStage = 1;
				this.StartSteam();
				return;
			}
			return;
		}
		pCVar2 = this.ColossalAnimations;
		if (pCVar2 == null) goto label_05c239f4;
		bVar7 = (this._currentAttackAnimation == pCVar2.AttackKick);
		if (bVar7) {
			if (fVar10 <= 0.42) {
				return;
			}
			if (this._currentAttackStage != 0) {
				return;
			}
			this._currentAttackStage = 1;
			pCVar3 = this.ColossalCache;
			if (pCVar3 != null) {
				pCVar4 = pCVar3.FootRHitbox;
				fVar10 = this.GetHitboxTime(0.1);
				if (pCVar4 != null) {
					uVar12 = extraout_XMM0_Dc;
					uVar13 = extraout_XMM0_Dd;
					pCVar4.Activate(0.0, fVar10);
					pCVar3 = this.ColossalCache;
					if ((pCVar3 != null) &&(pCVar4 = pCVar3.FootRHitbox, pCVar4 != null)) {
						pSVar5 = EffectPrefabs.Boom2;
						pUVar8 = pCVar4.transform;
						if (pUVar8 != null) {
							UVar18 = pUVar8.position;
							pCVar6 = this.BaseTitanCache;
							if ((pCVar6 != null) &&(pUVar8 = pCVar6.Transform, pUVar8 != null)) {
								UVar19 = pUVar8.rotation;
								fVar10 = this.Size;
								fVar14 = UVar19.x;
								fVar15 = UVar19.y;
								fVar16 = UVar19.z;
								fVar17 = UVar19.w;
								if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
									auStack_28._8_4_ = extraout_XMM0_Dc_00;
									auStack_28._0_8_ = UVar19._0_8_;
									auStack_28._12_4_ = extraout_XMM0_Dd_00;
									auStack_38._8_4_ = uVar12;
									auStack_38._0_8_ = UVar19._8_8_;
									auStack_38._12_4_ = uVar13;
									fVar14 = (float)auStack_28._0_4_;
									fVar15 = (float)auStack_28._4_4_;
									fVar16 = (float)auStack_38._0_4_;
									fVar17 = (float)auStack_38._4_4_;
								}
								UVar19.y = fVar15;
								UVar19.x = fVar14;
								UVar19.w = fVar17;
								UVar19.z = fVar16;
								EffectSpawner.Spawn(pSVar5, UVar18, UVar19, fVar10 * 5.0, true, null);
								return;
							}
						}
					}
				}
			}
			goto label_05c239f4;
		}
		pCVar2 = this.ColossalAnimations;
		if (pCVar2 == null) goto label_05c239f4;
		bVar7 = (this._currentAttackAnimation == pCVar2.AttackSweep);
		if (bVar7) {
			iVar1 = this._currentAttackStage;
			if ((fVar10 <= 0.38) || (iVar1 != 0)) {
				if (fVar10 <= 0.45) {
					return;
				}
				if (iVar1 != 1) {
					return;
				}
				this.PlaySound(TitanSounds.Swing1);
				this._currentAttackStage = 2;
				return;
			}
			this._currentAttackStage = 1;
			pCVar3 = this.ColossalCache;
			if (pCVar3 != null) {
				pCVar4 = pCVar3.ForearmRHitbox;
				fVar10 = this.GetHitboxTime(0.14);
				if (pCVar4 != null) {
					pCVar4.Activate(0.0, fVar10);
					return;
				}
			}
			goto label_05c239f4;
		}
		pCVar2 = this.ColossalAnimations;
		if (pCVar2 == null) goto label_05c239f4;
		bVar7 = (this._currentAttackAnimation == pCVar2.AttackWallSlap1L);
		if (bVar7) {
	label_05c23554: ;
			if (fVar10 <= 0.34) {
				return;
			}
			if (this._currentAttackStage != 0) {
				return;
			}
			this._currentAttackStage = 1;
			if (1 < (uint)this._leftHandState) {
				return;
			}
			pCVar3 = this.ColossalCache;
			if (pCVar3 == null) goto label_05c239f4;
			pCVar4 = pCVar3.HandLHitbox;
			fVar10 = this.GetHitboxTime(0.02);
			if (pCVar4 == null) goto label_05c239f4;
			uVar12 = extraout_XMM0_Dc_01;
			uVar13 = extraout_XMM0_Dd_01;
			pCVar4.Activate(0.0, fVar10);
			pCVar3 = this.ColossalCache;
			if ((pCVar3 == null) ||(pCVar4 = pCVar3.HandLHitbox, pCVar4 == null)) goto label_05c239f4;
			pSVar5 = EffectPrefabs.Boom8;
			pUVar8 = pCVar4.transform;
			if (pUVar8 == null) goto label_05c239f4;
			UVar18 = pUVar8.position;
			fVar10 = UVar18.z;
			uVar11 = il2cpp_runtime_helper_05bbd070(0);
			uStack_58._0_4_ = UVar18.x;
			uStack_58._4_4_ = UVar18.y;
			UVar18.z = fVar10 * 8.0 + UVar18.z;
			UStack_48.x = -1.5707964;
			UStack_48.y = 0.0;
			UStack_48.z = 0.0;
			UVar19 = Quaternion.Internal_FromEulerRad(ref UStack_48);
			fVar10 = this.Size;
			fVar14 = UVar19.x;
			fVar15 = UVar19.y;
			fVar16 = UVar19.z;
			fVar17 = UVar19.w;
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
				auStack_28._8_4_ = extraout_XMM0_Dc_02;
				auStack_28._0_8_ = UVar19._0_8_;
				auStack_28._12_4_ = extraout_XMM0_Dd_02;
				auStack_38._8_4_ = uVar12;
				auStack_38._0_8_ = UVar19._8_8_;
				auStack_38._12_4_ = uVar13;
				fVar14 = (float)auStack_28._0_4_;
				fVar15 = (float)auStack_28._4_4_;
				fVar16 = (float)auStack_38._0_4_;
				fVar17 = (float)auStack_38._4_4_;
			}
			UVar18.x = (float)uVar11 * 8.0 + (float)uStack_58;
			UVar18.y = (float)((ulong)uVar11 >> 0x20) * 8.0 + uStack_58._4_4_;
			rotation.y = fVar15;
			rotation.x = fVar14;
			rotation.w = fVar17;
			rotation.z = fVar16;
			EffectSpawner.Spawn(pSVar5, UVar18, rotation, fVar10 * 4.0, true, null);
			pCVar3 = this.ColossalCache;
			if (pCVar3 == null) goto label_05c239f4;
			pCVar4 = pCVar3.HandLHitbox;
		}
		else {
			pCVar2 = this.ColossalAnimations;
			if (pCVar2 == null) goto label_05c239f4;
			bVar7 = (this._currentAttackAnimation == pCVar2.AttackWallSlap2L);
			if (bVar7) goto label_05c23554;
			pCVar2 = this.ColossalAnimations;
			if (pCVar2 == null) goto label_05c239f4;
			bVar7 = (this._currentAttackAnimation == pCVar2.AttackWallSlap1R);
			if (!bVar7) {
				pCVar2 = this.ColossalAnimations;
				if (pCVar2 == null) goto label_05c239f4;
				bVar7 = (this._currentAttackAnimation == pCVar2.AttackWallSlap2R);
				if (!bVar7) {
					return;
				}
			}
			if (fVar10 <= 0.34) {
				return;
			}
			if (this._currentAttackStage != 0) {
				return;
			}
			this._currentAttackStage = 1;
			if (1 < (uint)this._rightHandState) {
				return;
			}
			pCVar3 = this.ColossalCache;
			if (pCVar3 == null) goto label_05c239f4;
			pCVar4 = pCVar3.HandRHitbox;
			fVar10 = this.GetHitboxTime(0.02);
			if (pCVar4 == null) goto label_05c239f4;
			uVar12 = extraout_XMM0_Dc_03;
			uVar13 = extraout_XMM0_Dd_03;
			pCVar4.Activate(0.0, fVar10);
			pCVar3 = this.ColossalCache;
			if ((pCVar3 == null) ||(pCVar4 = pCVar3.HandRHitbox, pCVar4 == null)) goto label_05c239f4;
			pSVar5 = EffectPrefabs.Boom8;
			pUVar8 = pCVar4.transform;
			if (pUVar8 == null) goto label_05c239f4;
			UVar18 = pUVar8.position;
			fVar10 = UVar18.z;
			uVar11 = il2cpp_runtime_helper_05bbd070(0);
			uStack_58._0_4_ = UVar18.x;
			uStack_58._4_4_ = UVar18.y;
			position.z = fVar10 * 8.0 + UVar18.z;
			UStack_48.x = -1.5707964;
			UStack_48.y = 0.0;
			UStack_48.z = 0.0;
			UVar19 = Quaternion.Internal_FromEulerRad(ref UStack_48);
			fVar10 = this.Size;
			fVar14 = UVar19.x;
			fVar15 = UVar19.y;
			fVar16 = UVar19.z;
			fVar17 = UVar19.w;
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
				auStack_28._8_4_ = extraout_XMM0_Dc_04;
				auStack_28._0_8_ = UVar19._0_8_;
				auStack_28._12_4_ = extraout_XMM0_Dd_04;
				auStack_38._8_4_ = uVar12;
				auStack_38._0_8_ = UVar19._8_8_;
				auStack_38._12_4_ = uVar13;
				fVar14 = (float)auStack_28._0_4_;
				fVar15 = (float)auStack_28._4_4_;
				fVar16 = (float)auStack_38._0_4_;
				fVar17 = (float)auStack_38._4_4_;
			}
			position.x = (float)uVar11 * 8.0 + (float)uStack_58;
			position.y = (float)((ulong)uVar11 >> 0x20) * 8.0 + uStack_58._4_4_;
			rotation_00.y = fVar15;
			rotation_00.x = fVar14;
			rotation_00.w = fVar17;
			rotation_00.z = fVar16;
			EffectSpawner.Spawn(pSVar5, position, rotation_00, fVar10 * 4.0, true, null);
			pCVar3 = this.ColossalCache;
			if (pCVar3 == null) goto label_05c239f4;
			pCVar4 = pCVar3.HandRHitbox;
		}
		if ((pCVar4 != null) &&(pUVar8 = pCVar4.transform, pUVar8 != null)) {
			pMVar9 = null;
			UVar18 = pUVar8.position;
			fVar10 = UVar18.z;
			uVar11 = il2cpp_runtime_helper_05bbd070(0);
			uStack_58._0_4_ = UVar18.x;
			uStack_58._4_4_ = UVar18.y;
			source.x = (float)uVar11 * 10.0 + (float)uStack_58;
			source.y = (float)((ulong)uVar11 >> 0x20) * 10.0 + uStack_58._4_4_;
			source.z = fVar10 * 10.0 + UVar18.z;
			this.BlowAwayHumans(source, this.DefaultBlowAwayForce);
			return;
		}
	label_05c239f4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043E4")]
	[Address(RVA = "0x5B22B80", Offset = "0x5B21B80", VA = "0x5B22B80")]
	protected void BlowAwayHumans(Transform source, float angle, float force)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$BlowAwayHumans): 33 lines keep C-only constructs
		uint uVar1;
		InGameManager pGVar2;
		HashSet<object> __this_00;
		Transform pUVar3;
		double dVar4;
		object pIVar5;
		bool bVar6;
		Il2CppClass pIVar7;
		float fVar8;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		float fVar9;
		Vector3 UVar10;
		System_Collections_Generic_HashSet_Enumerator_T__o local_b8;
		byte[] local_98 = new byte[8];
		float fStack_90;
		float fStack_8c;
		byte[] local_80 = new byte[16];
		object local_70;
		byte[] local_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		float local_58;
		byte[] local_48 = new byte[24];

		local_b8._set = null;
		local_b8._index = 0;
		local_b8._version = 0;
		local_b8._current = null;
		pGVar2 = this._inGameManager;
		if ((pGVar2 == null) ||(__this_00 = (HashSet<object>)pGVar2.Humans, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_80.GetEnumerator(__this_00);
		local_b8._current = local_70;
		local_b8._set = (HashSet<T>)local_80._0_8_;
		local_b8._index = local_80._8_4_;
		local_b8._version = local_80._12_4_;
		local_80._0_8_ = null;
		local_80._8_8_ = &local_b8;
		if (source == null) {
			bVar6 = local_b8.MoveNext();
			if (bVar6) {
				if (local_b8._current != null) {
					if (local_b8._current[8].klass != null) {
						pUVar3 = (Transform)((local_b8._current[8].klass)._1).name;
						if (pUVar3 != null) {
							pUVar3.position;
							throw new NullReferenceException();
						}
	label_05c22f87: ;
						throw new NullReferenceException();
					}
	label_05c22f79: ;
					throw new NullReferenceException();
				}
	label_05c22f68: ;
				throw new NullReferenceException();
			}
		}
		else {
	label_05c22c80: ;
			while (true) {
				bVar6 = local_b8.MoveNext();
				pIVar5 = local_b8._current;
				if (!(bVar6)) break;
				if (local_b8._current == null) goto label_05c22f68;
				if (local_b8._current[8].klass == null) goto label_05c22f79;
				pUVar3 = (Transform)((local_b8._current[8].klass)._1).name;
				if (pUVar3 == null) goto label_05c22f87;
				UVar10 = pUVar3.position;
				local_58 = UVar10.z;
				fStack_60 = (float)extraout_XMM0_Dc;
				local_68 = (byte[])UVar10._0_8_;
				fStack_5c = (float)extraout_XMM0_Dd;
				UVar10 = source.position;
				fStack_90 = (float)extraout_XMM0_Dc_00;
				local_98 = UVar10._0_8_;
				fStack_8c = (float)extraout_XMM0_Dd_00;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				local_68._0_4_ = (float)local_68._0_4_ - (float)local_98._0_4_;
				local_68._4_4_ = (float)local_68._4_4_ - (float)local_98._4_4_;
				local_58 = local_58 - UVar10.z;
				fStack_60 = fStack_60 - fStack_90;
				fStack_5c = fStack_5c - fStack_8c;
				fVar8 = local_58 * local_58 +(float)local_68._4_4_ * (float)local_68._4_4_ + (float)local_68._0_4_ * (float)local_68._0_4_;
				if (fVar8 < 0.0) goto label_05c22d80;
				if (SQRT(fVar8) < this.BlowAwayMaxDistance) goto label_05c22d97;
			}
		}
		local_b8.Dispose();
		return;
	label_05c22d80: ;
		fVar9 = sqrtf(fVar8);
		if (fVar9 < this.BlowAwayMaxDistance) {
	label_05c22d97: ;
			UVar10 = source.forward;
			local_48._8_4_ = extraout_XMM0_Dc_01;
			local_48._0_8_ = UVar10._0_8_;
			local_48._12_4_ = extraout_XMM0_Dd_01;
			local_98._0_4_ = UVar10.z;
			if (Il2CppMethodInitialized_075450a4 == false) {
				Il2CppMethodInitialized_075450a4 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar8 = fVar8 * ((float)local_98._0_4_ * (float)local_98._0_4_ +(float)local_48._4_4_ * (float)local_48._4_4_ +(float)local_48._0_4_ * (float)local_48._0_4_);
			if (fVar8 < 0.0) {
				fVar8 = sqrtf(fVar8);
				pIVar7 = typeof(Math);
			}
			else {
				fVar8 = SQRT(fVar8);
				pIVar7 = typeof(Math);
			}
			fVar9 = 0.0;
			typeof(Math) = (Math)pIVar7;
			if (1e-15 <= fVar8) {
				fVar8 = (local_58 * (float)local_98._0_4_ +(float)local_68._4_4_ * (float)local_48._4_4_ + (float)local_68._0_4_ * (float)local_48._0_4_) / fVar8;
				fVar9 = 1.0;
				if (fVar8 <= 1.0) {
					fVar9 = fVar8;
				}
				dVar4 = acos((double)(float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 | (uint)fVar9 & -(uint)(-1.0 <= fVar8) ), (MethodInfo)pIVar7);
				fVar9 = (float)dVar4 * 57.29578;
			}
			if (fVar9 <= angle * 0.5) {
				UVar10 = source.position;
				pIVar7 = pIVar5.klass;
				(*pIVar7.vtable[99].methodPtr)(UVar10.x,UVar10.z,pIVar5,pIVar7.vtable[99].method);
			}
		}
		goto label_05c22c80;
	}

	[Token(Token = "0x60043E5")]
	[Address(RVA = "0x5B23A00", Offset = "0x5B22A00", VA = "0x5B23A00")]
	protected void BlowAwayHumans(Vector3 source, float force)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$BlowAwayHumans): 36 lines keep C-only constructs
		uint uVar1;
		InGameManager pGVar2;
		HashSet<object> __this_00;
		Transform __this_01;
		Il2CppClass pIVar3;
		object pIVar4;
		bool bVar5;
		float fVar6;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		float in_XMM1_Db;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		Vector3 UVar7;
		byte[] local_b0 = new byte[16];
		object local_a0;
		byte[] local_98 = new byte[16];
		System_Collections_Generic_HashSet_Enumerator_T__o local_88;
		float local_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		float local_48;
		float fStack_44;
		byte[] local_38 = new byte[16];

		local_68 = source.z;
		local_98._8_4_ = in_XMM0_Dc;
		local_98._0_8_ = source._0_8_;
		local_98._12_4_ = in_XMM0_Dd;
		fStack_64 = in_XMM1_Db;
		fStack_60 = in_XMM1_Dc;
		fStack_5c = in_XMM1_Dd;
		pGVar2 = this._inGameManager;
		if ((pGVar2 == null) ||(__this_00 = (HashSet<object>)pGVar2.Humans, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_b0.GetEnumerator(__this_00);
		local_88._current = local_a0;
		local_88._set = (HashSet<T>)local_b0._0_8_;
		local_88._index = local_b0._8_4_;
		local_88._version = local_b0._12_4_;
		local_b0._0_8_ = null;
		local_58 = local_68;
		fStack_54 = (float)local_98._0_4_;
		fStack_50 = fStack_64;
		fStack_4c = (float)local_98._4_4_;
		local_b0._8_8_ = &local_88;
	label_05c23ae0: ;
		do {
			bVar5 = local_88.MoveNext();
			pIVar4 = local_88._current;
			if (!bVar5) {
				local_88.Dispose() ;
				return;
			}
			if (local_88._current == null) {
				throw new NullReferenceException();
			}
			if (local_88._current[8].klass == null) {
				throw new NullReferenceException();
			}
			__this_01 = (Transform)((local_88._current[8].klass)._1).name;
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			UVar7 = __this_01.position;
			local_48 = UVar7.z;
			local_38._8_4_ = extraout_XMM0_Dc;
			local_38._0_8_ = UVar7._0_8_;
			local_38._12_4_ = extraout_XMM0_Dd;
			fStack_44 = in_XMM1_Db;
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			in_XMM1_Db = ((float)local_38._0_4_ - fStack_54) * ((float)local_38._0_4_ - fStack_54);
			in_XMM1_Dc = (fStack_44 - fStack_50) * (fStack_44 - fStack_50);
			in_XMM1_Dd = ((float)local_38._4_4_ - fStack_4c) * ((float)local_38._4_4_ - fStack_4c);
			fVar6 = ((float)local_38._4_4_ - (float)local_98._4_4_) * ((float)local_38._4_4_ - (float)local_98._4_4_) + in_XMM1_Db + (local_48 - local_58) * (local_48 - local_58);
			if (fVar6 < 0.0) goto label_05c23bc0;
		} while (this.BlowAwayMaxDistance <= SQRT(fVar6));
		goto label_05c23bd8;
	label_05c23bc0: ;
		fVar6 = sqrtf(fVar6);
		if (fVar6 < this.BlowAwayMaxDistance) {
	label_05c23bd8: ;
			pIVar3 = pIVar4.klass;
			in_XMM1_Db = fStack_64;
			in_XMM1_Dc = fStack_60;
			in_XMM1_Dd = fStack_5c;
			(*pIVar3.vtable[99].methodPtr)(local_98._0_4_,local_68,force,pIVar4,pIVar3.vtable[99].method);
		}
		goto label_05c23ae0;
	}

	[Token(Token = "0x60043E6")]
	[Address(RVA = "0x5B23CA0", Offset = "0x5B22CA0", VA = "0x5B23CA0", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$GetHitRPC): 5 lines keep C-only constructs
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		BoolSetting pSVar3;
		IntSetting pSVar4;
		WallColossalComponentCache pCVar5;
		Object pUVar6;
		bool bVar7;
		int iVar8;
		String pSVar9;
		int iVar10;
		_func_8 vtableDispatch;
		int iVar11;
		MethodInfo pMVar12;

		if (this.Dead != false) {
			return;
		}
		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Titan, pSVar2 != null)) &&(pSVar3 = pSVar2.TitanArmorEnabled, pSVar3 != null)) {
			if (pSVar3._value != false) {
				pSVar4 = pSVar2.TitanArmor;
				if (pSVar4 == null) goto label_05c23ed1;
				if (damage < pSVar4._value) {
					damage = 0;
				}
			}
			pCVar5 = this.ColossalCache;
			if ((pCVar5 != null) &&(pUVar6 = (Object)pCVar5.NapeHurtbox, pUVar6 != null)) {
				pSVar9 = pUVar6.name;
				bVar7 = (collider == pSVar9);
				if (bVar7) {
					this.GetHitRPC(viewId, name, damage, type, collider);
				}
				else {
					pCVar5 = this.ColossalCache;
					if ((pCVar5 == null) ||(pUVar6 = (Object)pCVar5.HandLHurtbox, pUVar6 == null)) goto label_05c23ed1;
					pSVar9 = pUVar6.name;
					bVar7 = (collider == pSVar9);
					if (bVar7) {
						if ((this.CanDamageLeftHand != false) && ((uint)this._leftHandState < 2)) {
							iVar8 = this.CurrentLeftHandHealth - damage;
							iVar10 = this.MaxLeftHandHealth;
							if (iVar8 < iVar10) {
								iVar10 = iVar8;
							}
							iVar11 = 0;
							if (-1 < iVar8) {
								iVar11 = iVar10;
							}
							this.CurrentLeftHandHealth = iVar11;
							vtableDispatch = (this.klass.vtable)._207_OnLeftHandHealthChange.methodPtr;
							pMVar12 = (this.klass.vtable)._207_OnLeftHandHealthChange.method;
	label_05c23ebe: ;
							(*vtableDispatch)(this,pMVar12);
							return;
						}
					}
					else {
						pCVar5 = this.ColossalCache;
						if ((pCVar5 == null) ||(pUVar6 = (Object)pCVar5.HandRHurtbox, pUVar6 == null)) goto label_05c23ed1;
						pSVar9 = pUVar6.name;
						bVar7 = (collider == pSVar9);
						if ((bVar7) &&((this.CanDamageRightHand != false && ((uint)this._rightHandState < 2)))) {
							iVar8 = this.CurrentRightHandHealth - damage;
							iVar10 = this.MaxRightHandHealth;
							if (iVar8 < iVar10) {
								iVar10 = iVar8;
							}
							iVar11 = 0;
							if (-1 < iVar8) {
								iVar11 = iVar10;
							}
							this.CurrentRightHandHealth = iVar11;
							vtableDispatch = (this.klass.vtable)._208_OnRightHandHealthChange.methodPtr;
							pMVar12 = (this.klass.vtable)._208_OnRightHandHealthChange.method;
							goto label_05c23ebe;
						}
					}
				}
				return;
			}
		}
	label_05c23ed1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043E7")]
	[Address(RVA = "0x5B23EE0", Offset = "0x5B22EE0", VA = "0x5B23EE0")]
	public WallColossalShifter()
	{
		// Lifted from source/cpp/Characters/WallColossalShifter.c (Characters.WallColossalShifter$$.ctor): clean
		this.WarningSteamTime = 3.0;
		this.SteamDamageInterval = 0.2;
		this.SteamDamagePerSecond = 100;
		this.MaxLeftHandHealth = 1000;
		this.MaxRightHandHealth = 1000;
		this.CurrentLeftHandHealth = 1000;
		this.CurrentRightHandHealth = 1000;
		this.CanDamageLeftHand = true;
		this.CanDamageRightHand = true;
		this.HandSeverWindow = 10.0;
		this.StunDuration = 3.0;
		this.RecoveryDuration = 10.0;
		this.SteamBlowAwayForce = 50.0;
		this.DefaultBlowAwayForce = 50.0;
		this.BlowAwayMaxDistance = 60.0;
		this.BlowAwaySteamTime = 0.3;
		base();
		return;
	}
}
