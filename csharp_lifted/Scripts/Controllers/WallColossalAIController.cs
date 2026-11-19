// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.WallColossalAIController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/WallColossalAIController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Controllers;

[Token(Token = "0x2000685")]
internal class WallColossalAIController : BaseTitanAIController
{
	[Token(Token = "0x4001D40")]
	[FieldOffset(Offset = "0x160")]
	protected List<string> WallAttacks;

	[Token(Token = "0x4001D41")]
	[FieldOffset(Offset = "0x168")]
	protected List<string> LeftHandedAttacks;

	[Token(Token = "0x4001D42")]
	[FieldOffset(Offset = "0x170")]
	protected List<string> RightHandedAttacks;

	[Token(Token = "0x4001D43")]
	[FieldOffset(Offset = "0x178")]
	public float WallAttackCooldownLeft;

	[Token(Token = "0x4001D44")]
	[FieldOffset(Offset = "0x17C")]
	public float WallAttackCooldown;

	[Token(Token = "0x17000AF5")]
	protected override bool _scriptedAI
	{
		[Token(Token = "0x6003F12")]
		[Address(RVA = "0x5AAF8D0", Offset = "0x5AAE8D0", VA = "0x5AAF8D0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Controllers/WallColossalAIController.c (Controllers.WallColossalAIController$$get__scriptedAI): clean
			return true;
		}
	}

	[Token(Token = "0x17000AF6")]
	protected override bool _stationaryAI
	{
		[Token(Token = "0x6003F13")]
		[Address(RVA = "0x5AAF8E0", Offset = "0x5AAE8E0", VA = "0x5AAF8E0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Controllers/WallColossalAIController.c (Controllers.WallColossalAIController$$get__stationaryAI): clean
			return true;
		}
	}

	[Token(Token = "0x6003F14")]
	[Address(RVA = "0x5AAF8F0", Offset = "0x5AAE8F0", VA = "0x5AAF8F0", Slot = "12")]
	protected override void UpdateScriptedAI()
	{
		// Lifted from source/cpp/Controllers/WallColossalAIController.c (Controllers.WallColossalAIController$$UpdateScriptedAI): 1 lines keep C-only constructs
		byte bVar1;
		BaseTitan pCVar2;
		float fVar3;
		float fVar4;

		pCVar2 = this._titan;
		if (pCVar2 != null) {
			bVar1 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(WallColossalShifter))) {
				if (1 < *(int)&(*(ulong)((sbyte)pCVar2 + 0x320)) - 1U) {
					fVar4 = this.WallAttackCooldownLeft;
					fVar3 = Time.deltaTime;
					fVar4 = fVar4 - fVar3;
					this.WallAttackCooldownLeft = fVar4;
					if ((fVar4 <= 0.0) && (*(int)&(*(ulong)((sbyte)pCVar2 + 0x320)) == 0)) {
						this.WallAttack();
						return;
					}
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F15")]
	[Address(RVA = "0x5AAFB00", Offset = "0x5AAEB00", VA = "0x5AAFB00", Slot = "11")]
	public override void Init(JSONNode data)
	{
		// Lifted from source/cpp/Controllers/WallColossalAIController.c (Controllers.WallColossalAIController$$Init): clean
		JSONNode pSVar1;
		float fVar2;

		this.Init(data);
		if (data != null) {
			pSVar1 = data.get_Item("WallAttackCooldown");
			if (pSVar1 != null) {
				fVar2 = pSVar1.get_AsFloat();
				this.WallAttackCooldown = fVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F16")]
	[Address(RVA = "0x5AAF9B0", Offset = "0x5AAE9B0", VA = "0x5AAF9B0")]
	public void WallAttack()
	{
		// Lifted from source/cpp/Controllers/WallColossalAIController.c (Controllers.WallColossalAIController$$WallAttack): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		int iVar3;
		WallColossalShifter pCVar4;
		WallColossalShifter pCVar5;
		BaseTitan pCVar6;
		bool bVar7;
		List<string>* ppSVar8;
		String pSVar9;
		WallColossalShifter __this_00;
		List<string> items;

		pCVar4 = (WallColossalShifter)this._titan;
		if (pCVar4 == null) goto label_05bafafa;
		pCVar5 = pCVar4.klass;
		bVar1 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
		if ((pCVar5._2).typeHierarchyDepth < bVar1) {
			__this_00 = null;
			bVar7 = pCVar4.CanAttack();
		}
		else {
			__this_00 = null;
			if ((pCVar5._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(WallColossalShifter) ) {
				__this_00 = pCVar4;
			}
			bVar7 = pCVar4.CanAttack();
		}
		if (!bVar7) {
			return;
		}
		if (__this_00 == null) goto label_05bafafa;
		items = this.WallAttacks;
		iVar2 = __this_00._leftHandState;
		if (iVar2 == 0) {
			if (1 < (uint)__this_00._rightHandState) {
	label_05bafa9f: ;
				ppSVar8 = &this.LeftHandedAttacks;
	label_05bafaaf: ;
				items = *ppSVar8;
			}
		}
		else {
			iVar3 = __this_00._rightHandState;
			if (iVar3 == 0) {
				if (iVar2 != 1) {
	label_05bafaa8: ;
					ppSVar8 = &this.RightHandedAttacks;
					goto label_05bafaaf;
				}
			}
			else {
				if ((iVar2 != 1) && (iVar3 != 1)) {
					__this_00.SteamAttack();
					goto label_05bafae0;
				}
				if (iVar2 != 1) goto label_05bafaa8;
				if (iVar3 != 1) goto label_05bafa9f;
			}
		}
		pSVar9 = RandomGen.ChooseRandom<string>((List<T>)items);
		pCVar6 = this._titan;
		if (pCVar6 != null) {
			pCVar6.Attack(pSVar9) ;
	label_05bafae0: ;
			this.WallAttackCooldownLeft = this.WallAttackCooldown;
			return;
		}
	label_05bafafa: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F17")]
	[Address(RVA = "0x5AAFB90", Offset = "0x5AAEB90", VA = "0x5AAFB90")]
	public WallColossalAIController()
	{
		// Lifted from source/cpp/Controllers/WallColossalAIController.c (Controllers.WallColossalAIController$$.ctor): 20 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		String pSVar5;
		List<string> pSVar6;

		pSVar6 = new List<string>();
		pSVar5 = "AttackSweep";
		if (pSVar6 != null) {
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = pSVar6._items;
			if (pSVar3 != null) {
				uVar2 = pSVar6._size;
				if (uVar2 < (uint)pSVar3.Length) {
					pSVar6._size = uVar2 + 1;
					pSVar3[(int)uVar2] = pSVar5;
				}
				else {
					pSVar6.AddWithResize((object)pSVar5);
				}
				pSVar5 = "AttackWallSlap1L";
				piVar1 = &pSVar6._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = pSVar6._items;
				if (pSVar3 != null) {
					uVar2 = pSVar6._size;
					if (uVar2 < (uint)pSVar3.Length) {
						pSVar6._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar5;
					}
					else {
						pSVar6.AddWithResize((object)pSVar5);
					}
					pSVar5 = "AttackWallSlap1R";
					piVar1 = &pSVar6._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = pSVar6._items;
					if (pSVar3 != null) {
						uVar2 = pSVar6._size;
						if (uVar2 < (uint)pSVar3.Length) {
							pSVar6._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar5;
						}
						else {
							pSVar6.AddWithResize((object)pSVar5);
						}
						pSVar5 = "AttackWallSlap2L";
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = pSVar6._items;
						if (pSVar3 != null) {
							uVar2 = pSVar6._size;
							if (uVar2 < (uint)pSVar3.Length) {
								pSVar6._size = uVar2 + 1;
								pSVar3[(int)uVar2] = pSVar5;
							}
							else {
								pSVar6.AddWithResize((object)pSVar5);
							}
							pSVar5 = "AttackWallSlap2R";
							piVar1 = &pSVar6._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = pSVar6._items;
							if (pSVar3 != null) {
								uVar2 = pSVar6._size;
								if (uVar2 < (uint)pSVar3.Length) {
									pSVar6._size = uVar2 + 1;
									pSVar3[(int)uVar2] = pSVar5;
								}
								else {
									pSVar6.AddWithResize((object)pSVar5);
								}
								this.WallAttacks = pSVar6;
								pSVar6 = new List<string>();
								pSVar5 = "AttackWallSlap1L";
								if (pSVar6 != null) {
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									pSVar3 = pSVar6._items;
									if (pSVar3 != null) {
										uVar2 = pSVar6._size;
										if (uVar2 < (uint)pSVar3.Length) {
											pSVar6._size = uVar2 + 1;
											pSVar3[(int)uVar2] = pSVar5;
										}
										else {
											pSVar6.AddWithResize((object)pSVar5);
										}
										pSVar5 = "AttackWallSlap2L";
										piVar1 = &pSVar6._version;
										*piVar1 = *piVar1 + 1;
										pSVar3 = pSVar6._items;
										if (pSVar3 != null) {
											uVar2 = pSVar6._size;
											if (uVar2 < (uint)pSVar3.Length) {
												pSVar6._size = uVar2 + 1;
												pSVar3[(int)uVar2] = pSVar5;
											}
											else {
												pSVar6.AddWithResize((object)pSVar5);
											}
											this.LeftHandedAttacks = pSVar6;
											pSVar6 = new List<string>();
											pSVar5 = "AttackSweep";
											if (pSVar6 != null) {
												piVar1 = &pSVar6._version;
												*piVar1 = *piVar1 + 1;
												pSVar3 = pSVar6._items;
												if (pSVar3 != null) {
													uVar2 = pSVar6._size;
													if (uVar2 < (uint)pSVar3.Length) {
														pSVar6._size = uVar2 + 1;
														pSVar3[(int)uVar2] = pSVar5;
													}
													else {
														pSVar6.AddWithResize((object)pSVar5);
													}
													pSVar5 = "AttackWallSlap1R";
													piVar1 = &pSVar6._version;
													*piVar1 = *piVar1 + 1;
													pSVar3 = pSVar6._items;
													if (pSVar3 != null) {
														uVar2 = pSVar6._size;
														if (uVar2 < (uint)pSVar3.Length) {
															pSVar6._size = uVar2 + 1;
															pSVar3[(int)uVar2] = pSVar5;
														}
														else {
															pSVar6.AddWithResize((object)pSVar5);
														}
														pSVar5 = "AttackWallSlap2R";
														piVar1 = &pSVar6._version;
														*piVar1 = *piVar1 + 1;
														pSVar3 = pSVar6._items;
														if (pSVar3 != null) {
															uVar2 = pSVar6._size;
															if (uVar2 < (uint)pSVar3.Length) {
																pSVar6._size = uVar2 + 1;
																pSVar3[(int)uVar2] = pSVar5;
															}
															else {
																pSVar6.AddWithResize((object)pSVar5);
															}
															this.RightHandedAttacks = pSVar6;
															this.WallAttackCooldownLeft = 5.0;
															this.WallAttackCooldown = 5.0;
															base();
															return;
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
		throw new NullReferenceException();
	}
}
