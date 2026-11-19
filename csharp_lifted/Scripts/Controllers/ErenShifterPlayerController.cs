// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.ErenShifterPlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/ErenShifterPlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/ErenShifterPlayerController.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x200067D")]
internal class ErenShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x4001D07")]
	[FieldOffset(Offset = "0x58")]
	protected ErenShifter _shifter;

	[Token(Token = "0x4001D08")]
	[FieldOffset(Offset = "0x60")]
	protected ErenShifterInputSettings _shifterInput;

	[Token(Token = "0x6003E96")]
	[Address(RVA = "0x5AA5FE0", Offset = "0x5AA4FE0", VA = "0x5AA5FE0", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Controllers/ErenShifterPlayerController.c (Controllers.ErenShifterPlayerController$$Awake): 9 lines keep C-only constructs
		ErenShifter* targetAddress;
		byte bVar1;
		InputSettings pSVar2;
		BaseTitanComponentCache pCVar3;
		BaseHitbox pCVar4;
		SphereCollider pUVar5;
		ErenShifter pCVar6;
		float fVar7;

		this.Awake();
		pCVar6 = this.GetComponent<ErenShifter>();
		targetAddress = &this._shifter;
		this._shifter = pCVar6;
		pSVar2 = SettingsManager.InputSettings;
		if (pSVar2 != null) {
			this._shifterInput = pSVar2.ErenShifter;
			pCVar6 = this._shifter;
			if (((pCVar6 != null) &&(pCVar3 = pCVar6.BaseTitanCache, pCVar3 != null)) &&(pCVar4 = pCVar3.HandLHitbox, pCVar4 != null)) {
				pUVar5 = (SphereCollider)pCVar4._collider;
				if (pUVar5 != null) {
					bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
					if ((bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) &&((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
						fVar7 = pUVar5.radius;
						pUVar5.radius = fVar7 * 1.5;
						pCVar4.UpdateDebugCollider(pUVar5);
					}
				}
				if (((*targetAddress != null) &&(pCVar3 = ((*targetAddress).fields).BaseTitanCache, pCVar3 != null)) &&(pCVar4 = pCVar3.HandRHitbox, pCVar4 != null)) {
					pUVar5 = (SphereCollider)pCVar4._collider;
					if (pUVar5 != null) {
						bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
						if ((bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) &&((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
							fVar7 = pUVar5.radius;
							pUVar5.radius = fVar7 * 1.5;
							pCVar4.UpdateDebugCollider(pUVar5);
						}
					}
					if (((*targetAddress != null) &&(pCVar3 = ((*targetAddress).fields).BaseTitanCache, pCVar3 != null)) &&(pCVar4 = pCVar3.FootLHitbox, pCVar4 != null)) {
						pUVar5 = (SphereCollider)pCVar4._collider;
						if (pUVar5 != null) {
							bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
							if ((bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) &&((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
								fVar7 = pUVar5.radius;
								pUVar5.radius = fVar7 * 1.5;
								pCVar4.UpdateDebugCollider(pUVar5);
							}
						}
						if (((*targetAddress != null) &&(pCVar3 = ((*targetAddress).fields).BaseTitanCache, pCVar3 != null)) &&(pCVar4 = pCVar3.FootRHitbox, pCVar4 != null)) {
							pUVar5 = (SphereCollider)pCVar4._collider;
							if (pUVar5 != null) {
								bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
								if ((bVar1 <= (pUVar5.klass._2).typeHierarchyDepth) &&((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
									fVar7 = pUVar5.radius;
									pUVar5.radius = fVar7 * 1.5;
									pCVar4.UpdateDebugCollider(pUVar5);
									return;
								}
							}
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E97")]
	[Address(RVA = "0x5AA63A0", Offset = "0x5AA53A0", VA = "0x5AA63A0", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/ErenShifterPlayerController.c (Controllers.ErenShifterPlayerController$$UpdateActionInput): 16 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		ErenShifterInputSettings pSVar4;
		ErenShifter pCVar5;
		BaseComponentCache pUVar6;
		Transform __this_00;
		UnityEngine_Vector3_StaticFields pUVar7;
		OrderedDictionary pSVar8;
		Il2CppClass pIVar9;
		Il2CppRuntimeInterfaceOffsetPair pIVar10;
		bool bVar11;
		ErenShifter pCVar12;
		object pIVar13;
		VirtualInvokeData pVVar14;
		String __this_01;
		KeybindSetting pSVar15;
		ulong uVar16;
		long lVar17;
		float fVar18;
		Vector3 UVar19;
		object pIStack_78;
		long lStack_70;
		object pIStack_68;
		byte puStack_58;
		object* ppIStack_50;
		ulong uStack_48;

		pIStack_78 = null;
		pIStack_68 = null;
		this.UpdateActionInput(inMenu);
		if (inMenu) {
			return;
		}
		pSVar4 = this._shifterInput;
		if ((pSVar4 != null) &&(pSVar15 = pSVar4.Walk, pSVar15 != null)) {
			pCVar5 = this._shifter;
			bVar11 = pSVar15.GetKey(false);
			if (pCVar5 != null) {
				pCVar5.IsWalk = bVar11;
				pCVar5 = this._shifter;
				if (pCVar5 != null) {
					bVar11 = pCVar5.CanAction();
					if (!bVar11) {
						return;
					}
					pSVar4 = this._shifterInput;
					if ((pSVar4 != null) &&(pSVar15 = pSVar4.Jump, pSVar15 != null)) {
						bVar11 = pSVar15.GetKeyDown(false);
						if (bVar11) {
							pCVar5 = this._shifter;
							if (pCVar5 != null) {
								if (pCVar5.HasDirection == false) {
									pUVar7 = typeof(Vector3).static_fields;
									fVar1 = (pUVar7.upVector).x;
									fVar2 = (pUVar7.upVector).y;
									fVar18 = (pUVar7.upVector).z;
								}
								else {
									pCVar12 = pCVar5;
									if (Il2CppMethodInitialized_0753e72c == false) {
										Il2CppMethodInitialized_0753e72c = true;
										pCVar12 = this._shifter;
										if (pCVar12 == null) goto label_05ba6897;
									}
									pUVar6 = pCVar12.Cache;
									if ((pUVar6 == null) ||(__this_00 = pUVar6.Transform, __this_00 == null)) goto label_05ba6897;
									pUVar7 = typeof(Vector3).static_fields;
									uStack_48._0_4_ = (pUVar7.upVector).x;
									uStack_48._4_4_ = (pUVar7.upVector).y;
									lStack_70 = CONCAT44(lStack_70._4_4_, (pUVar7.upVector).z);
									UVar19 = __this_00.forward;
									fVar1 = UVar19.x + (float)uStack_48;
									fVar2 = UVar19.y + uStack_48._4_4_;
									fVar18 = UVar19.z + (float)lStack_70;
								}
								UVar19.y = fVar2;
								UVar19.x = fVar1;
								UVar19.z = fVar18;
								pCVar5.Jump(UVar19);
								return;
							}
						}
						else {
							pSVar4 = this._shifterInput;
							if ((pSVar4 != null) &&(pSVar15 = pSVar4.Kick, pSVar15 != null)) {
								bVar11 = pSVar15.GetKeyDown(false);
								if (bVar11) {
									pCVar5 = this._shifter;
									if (pCVar5 != null) {
										pCVar5.Kick();
										return;
									}
								}
								else {
									pSVar4 = this._shifterInput;
									if (((pSVar4 != null) &&(pSVar8 = pSVar4.Settings, pSVar8 != null)) &&(pIVar13 = (object)pSVar8.Keys, pIVar13 != null)) {
										pIVar9 = pIVar13.klass;
										uVar16 = (ulong)(pIVar9._2).interface_offsets_count;
										pIStack_78 = (object)pIVar13.Dispose();
										puStack_58 = (byte)&pIStack_78;
										ppIStack_50 = &pIStack_68;
										if (pIStack_78 != null) {
											lStack_70 = 0;
											puStack_58 = (byte)&pIStack_78;
											do {
												pIVar13 = pIStack_78;
												pIVar9 = pIStack_78.klass;
												uVar16 = (ulong)(pIVar9._2).interface_offsets_count;
												bVar11 = pIVar13.Dispose();
												pIVar13 = pIStack_78;
												if (!bVar11) {
													pIVar13 = (pIStack_78 as IDisposable);
													pIStack_68 = pIVar13;
													if (pIVar13 == null) goto label_05ba6986;
													pIVar9 = pIVar13.klass;
													uVar16 = (ulong)(pIVar9._2).interface_offsets_count;
													if (uVar16 == 0) goto label_05ba695f;
													pIVar10 = (pIVar9._1).interfaceOffsets;
													lVar17 = 0;
													goto label_05ba6950;
												}
												if (pIStack_78 == null) {
													throw new NullReferenceException();
												}
												pIVar9 = pIStack_78.klass;
												uVar16 = (ulong)(pIVar9._2).interface_offsets_count;
												__this_01 = (String)pIVar13.Dispose();
												if (__this_01 == null) {
													throw new NullReferenceException();
												}
												if (__this_01.klass != g_data_07556758) {
													throw new InvalidCastException();
												}
												bVar11 = __this_01.StartsWith("Attack");
												if (bVar11) {
													pSVar4 = this._shifterInput;
													if (pSVar4 == null) {
														throw new NullReferenceException();
													}
													pSVar8 = pSVar4.Settings;
													if (pSVar8 == null) {
														throw new NullReferenceException();
													}
													pSVar15 = (KeybindSetting)pSVar8.get_Item((object)__this_01);
													if (pSVar15 == null) {
														throw new NullReferenceException();
													}
													bVar3 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
													if (((pSVar15.klass._2).typeHierarchyDepth < bVar3) ||((pSVar15.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(KeybindSetting))) {
														throw new InvalidCastException();
													}
													bVar11 = pSVar15.GetKeyDown(false);
													if (bVar11) {
														pCVar5 = this._shifter;
														if (pCVar5 == null) {
															throw new NullReferenceException();
														}
														pCVar5.Attack(__this_01);
													}
												}
											} while (pIStack_78 != null);
										}
										throw new NullReferenceException();
									}
								}
							}
						}
					}
				}
			}
		}
	label_05ba6897: ;
		throw new NullReferenceException();
		while (true) {
			lVar17 = lVar17 + 0x10;
			if (!(uVar16 * 0x10 != lVar17)) break;
	label_05ba6950: ;
			if (*(IDisposable*)((long)&pIVar10.interfaceType + lVar17) == typeof(IDisposable)) {
				pVVar14 = pIVar9.vtable + *(int)((long)&pIVar10.offset + lVar17);
				goto label_05ba697d;
			}
		}
	label_05ba695f: ;
	label_05ba697d: ;
		pIVar13.Dispose();
	label_05ba6986: ;
		if (lStack_70 != 0) {
			throw;
		}
		return;
	}

	[Token(Token = "0x6003E98")]
	[Address(RVA = "0x5AA69D0", Offset = "0x5AA59D0", VA = "0x5AA69D0")]
	public ErenShifterPlayerController()
	{
		// Lifted from source/cpp/Controllers/ErenShifterPlayerController.c (Controllers.ErenShifterPlayerController$$.ctor): clean
		base();
		return;
	}
}
