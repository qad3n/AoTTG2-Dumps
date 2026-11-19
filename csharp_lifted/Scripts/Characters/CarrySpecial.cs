// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CarrySpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CarrySpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CarrySpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D7")]
internal class CarrySpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x400205B")]
	public const float DefaultCarryDistance = 25f;

	[Token(Token = "0x400205C")]
	public const float DefaultGroundedCarryDistance = 10f;

	[Token(Token = "0x400205D")]
	[FieldOffset(Offset = "0x49")]
	protected bool _needActivate;

	[Token(Token = "0x17000B66")]
	protected override float ActiveTime
	{
		[Token(Token = "0x600429B")]
		[Address(RVA = "0x5B09BB0", Offset = "0x5B08BB0", VA = "0x5B09BB0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/CarrySpecial.c (Characters.CarrySpecial$$get_ActiveTime): clean
			return 0.64;
		}
	}

	[Token(Token = "0x17000B67")]
	protected float CarryDistance
	{
		[Token(Token = "0x600429C")]
		[Address(RVA = "0x5B09BC0", Offset = "0x5B08BC0", VA = "0x5B09BC0")]
		get
		{
			// Lifted from source/cpp/Characters/CarrySpecial.c (Characters.CarrySpecial$$get_CarryDistance): clean
			return 25.0;
		}
	}

	[Token(Token = "0x17000B68")]
	protected float GroundedCarryDistance
	{
		[Token(Token = "0x600429D")]
		[Address(RVA = "0x5B09BD0", Offset = "0x5B08BD0", VA = "0x5B09BD0")]
		get
		{
			// Lifted from source/cpp/Characters/CarrySpecial.c (Characters.CarrySpecial$$get_GroundedCarryDistance): clean
			return 10.0;
		}
	}

	[Token(Token = "0x600429E")]
	[Address(RVA = "0x5B09BE0", Offset = "0x5B08BE0", VA = "0x5B09BE0")]
	public CarrySpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/CarrySpecial.c (Characters.CarrySpecial$$.ctor): clean
		base(owner);
		this.Cooldown = 2.0;
		return;
	}

	[Token(Token = "0x600429F")]
	[Address(RVA = "0x5B09C00", Offset = "0x5B08C00", VA = "0x5B09C00", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/CarrySpecial.c (Characters.CarrySpecial$$Activate): 1 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		InGameManager x;
		bool bVar3;

		this._needActivate = true;
		pCVar2 = this._owner;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		x = (*(ulong)((sbyte)pCVar2 + 0x1a8));
		bVar3 = ((Object)x != null);
		if (bVar3) {
			this.IsActive = false;
			this.Deactivate();
			return;
		}
		return;
	}

	[Token(Token = "0x60042A0")]
	[Address(RVA = "0x5B09CD0", Offset = "0x5B08CD0", VA = "0x5B09CD0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/CarrySpecial.c (Characters.CarrySpecial$$ActiveFixedUpdate): 53 lines keep C-only constructs
		float distance;
		byte bVar1;
		uint uVar2;
		Human __this_00;
		HashSet<object> __this_01;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		String b;
		Ray ray;
		bool bVar5;
		bool bVar6;
		Human human;
		Human pCVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		float in_XMM1_Db;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		Color color;
		Color color_00;
		Color color_01;
		Color color_02;
		Vector3 UVar12;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_c8;
		byte[] auStack_b0 = new byte[24];
		byte[] auStack_98 = new byte[16];
		float fStack_88;
		float fStack_84;
		float fStack_78;
		float fStack_74;
		byte[] auStack_68 = new byte[24];
		Human pCStack_50;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;

		SStack_c8._set = null;
		SStack_c8._index = 0;
		SStack_c8._version = 0;
		SStack_c8._current = null;
		this.ActiveFixedUpdate();
		__this_00 = (Human)this._owner;
		if (__this_00 != null) {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
				pCVar7 = __this_00;
	label_05c0a336: ;
				throw new InvalidCastException();
			}
			pCVar7 = __this_00.BackHuman;
			bVar5 = ((Object)pCVar7 != null);
			if (bVar5) {
				this.IsActive = false;
				return;
			}
			distance = *(float)(&g_data_0100ae48 + (ulong)(__this_00.Grounded == false) * 4);
			auStack_b0.GetAimRayAfterHumanCheap(__this_00);
			ray.m_Origin.z = (float)auStack_b0._8_4_;
			ray.m_Direction.x = (float)auStack_b0._12_4_;
			ray.m_Origin.x = (float)auStack_b0._0_4_;
			ray.m_Origin.y = (float)auStack_b0._4_4_;
			ray.m_Direction.y = (float)auStack_b0._16_4_;
			ray.m_Direction.z = (float)auStack_b0._20_4_;
			human = __this_00.GetHumanAlongRay(ray, distance);
			bVar5 = __this_00.IsValidCarryTarget(human, distance);
			pCVar7 = (Human)SceneLoader.CurrentGameManager ;
			if (pCVar7 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pCVar7.klass._2).typeHierarchyDepth < bVar1) ||((pCVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) goto label_05c0a336;
				__this_01 = *(HashSet<object>*)&pCVar7.IsVisible;
				if (__this_01 != null) {
					SStack_48 = __this_01.GetEnumerator();
					SStack_c8._current = SStack_48._current;
					SStack_c8._set = SStack_48._set;
					SStack_c8._index = SStack_48._index;
					SStack_c8._version = SStack_48._version;
					auStack_b0._0_4_ = 0.0;
					auStack_b0._4_4_ = 0.0;
					pCVar7 = null;
					fVar9 = INFINITY;
					auStack_b0._8_8_ = &SStack_c8;
	label_05c09f1d: ;
					do {
						fVar8 = fVar9;
						pCStack_50 = pCVar7;
						do {
							while(true) {
								do {
									while(true) {
										while(true) {
											while(true) {
												bVar6 = SStack_c8.MoveNext();
												pCVar7 = (Human)SStack_c8._current;
												if (!bVar6) {
													SStack_c8.Dispose();
													if (bVar5) {
														if (human == null) goto label_05c0a32e;
													}
													else {
														bVar5 = ((Object)human != null);
														if (bVar5) {
															if (human == null) goto label_05c0a32e;
															color_01.b = 0.0;
															color_01.a = 1.0;
															color_01.r = 1.0;
															color_01.g = 0.0;
															human.AddVisibleOutlineWithColor(color_01);
														}
														human = pCStack_50;
														bVar5 = ((Object)pCStack_50 != null);
														if (!bVar5) {
															return;
														}
														if (human == null) goto label_05c0a32e;
													}
													color_02.b = 0.0;
													color_02.a = 1.0;
													color_02.r = 0.0;
													color_02.g = 1.0;
													human.AddVisibleOutlineWithColor(color_02);
													return;
												}
												bVar6 = __this_00.IsCarryable((Human)SStack_c8._current);
												if (bVar6) break;
												if (pCVar7 == null) {
													throw new NullReferenceException();
												}
												pCVar7.RemoveOutline();
											}
											pUVar3 = __this_00.Cache;
											if (pUVar3 == null) {
												throw new NullReferenceException();
											}
											pUVar4 = pUVar3.Transform;
											if (pUVar4 == null) {
												throw new NullReferenceException();
											}
											UVar12 = pUVar4.position;
											fStack_78 = UVar12.z;
											auStack_68._8_4_ = extraout_XMM0_Dc;
											auStack_68._0_8_ = UVar12._0_8_;
											auStack_68._12_4_ = extraout_XMM0_Dd;
											fStack_74 = in_XMM1_Db;
											if (pCVar7 == null) {
												throw new NullReferenceException();
											}
											pUVar3 = ((Human)((long)pCVar7 + 0x10)).Cache;
											if (pUVar3 == null) {
												throw new NullReferenceException();
											}
											pUVar4 = pUVar3.Transform;
											if (pUVar4 == null) {
												throw new NullReferenceException();
											}
											UVar12 = pUVar4.position;
											fStack_88 = UVar12.z;
											auStack_98._8_4_ = extraout_XMM0_Dc_00;
											auStack_98._0_8_ = UVar12._0_8_;
											auStack_98._12_4_ = extraout_XMM0_Dd_00;
											fStack_84 = in_XMM1_Db;
											if (Il2CppMethodInitialized_0753e7b7 == false) {
												Il2CppMethodInitialized_0753e7b7 = true;
												uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
											}
											else {
												uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
											}
											if (uVar2 == 0) {
											}
											in_XMM1_Db = ((float)auStack_68._0_4_ - (float)auStack_98._0_4_) *((float)auStack_68._0_4_ - (float)auStack_98._0_4_);
											in_XMM1_Dc = (fStack_74 - fStack_84) * (fStack_74 - fStack_84);
											in_XMM1_Dd = ((float)auStack_68._4_4_ - (float)auStack_98._4_4_) *((float)auStack_68._4_4_ - (float)auStack_98._4_4_);
											fVar9 = ((float)auStack_68._4_4_ - (float)auStack_98._4_4_) *((float)auStack_68._4_4_ - (float)auStack_98._4_4_) + in_XMM1_Db +(fStack_78 - fStack_88) * (fStack_78 - fStack_88);
											if (fVar9 < 0.0) {
												fVar9 = sqrtf(fVar9);
											}
											else {
												fVar9 = SQRT(fVar9);
											}
											if (fVar9 <= distance) break;
											pCVar7.RemoveOutline();
										}
										b = __this_00.Team;
										if (((typeof(TeamInfo))._2).cctor_finished_or_no_cctor == 0) {
										}
										bVar6 = TeamInfo.SameTeam((BaseCharacter)pCVar7, b);
										if (bVar6) break;
										color_00.b = (float)(int)g_data_01009b00;
										color_00.a = (float)g_data_01009b00._4_4_;
										color_00.r = 1.0;
										color_00.g = 0.0;
										in_XMM1_Db = g_data_01009b00._4_4_;
										pCVar7.AddVisibleOutlineWithColor(color_00);
									}
									bVar6 = ((Object)pCVar7 == (Object)human);
								} while (bVar6);
								fVar9 = g_data_01005870._4_4_;
								fVar10 = g_data_01005870._8_4_;
								color.b = (float)(int)g_data_01005870;
								color.a = (float)g_data_01005870._4_4_;
								color.r = (float)(int)g_data_01005870;
								color.g = (float)g_data_01005870._4_4_;
								pCVar7.AddVisibleOutlineWithColor(color);
								pUVar3 = __this_00.Cache;
								if (pUVar3 == null) {
									throw new NullReferenceException();
								}
								pUVar4 = pUVar3.Transform;
								if (pUVar4 == null) {
									throw new NullReferenceException();
								}
								UVar12 = pUVar4.position;
								fStack_78 = UVar12.z;
								auStack_68._8_4_ = extraout_XMM0_Dc_01;
								auStack_68._0_8_ = UVar12._0_8_;
								auStack_68._12_4_ = extraout_XMM0_Dd_01;
								pUVar3 = ((Human)((long)pCVar7 + 0x10)).Cache;
								fStack_74 = fVar9;
								if (pUVar3 == null) {
									throw new NullReferenceException();
								}
								pUVar4 = pUVar3.Transform;
								if (pUVar4 == null) {
									throw new NullReferenceException();
								}
								UVar12 = pUVar4.position;
								fStack_88 = UVar12.z;
								auStack_98._8_4_ = extraout_XMM0_Dc_02;
								auStack_98._0_8_ = UVar12._0_8_;
								auStack_98._12_4_ = extraout_XMM0_Dd_02;
								fStack_84 = fVar9;
								if (Il2CppMethodInitialized_0753e7b7 == false) {
									Il2CppMethodInitialized_0753e7b7 = true;
									uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								else {
									uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								if (uVar2 == 0) {
								}
								fVar10 = ((float)auStack_68._4_4_ - (float)auStack_98._4_4_) *((float)auStack_68._4_4_ - (float)auStack_98._4_4_) +((float)auStack_68._0_4_ - (float)auStack_98._0_4_) *((float)auStack_68._0_4_ - (float)auStack_98._0_4_) +(fStack_78 - fStack_88) * (fStack_78 - fStack_88);
								if (fVar10 < 0.0) break;
								in_XMM1_Db = 0.0;
								fVar9 = SQRT(fVar10);
								if (SQRT(fVar10) < fVar8) goto label_05c09f1d;
							}
							fVar9 = sqrtf(fVar10);
							in_XMM1_Db = 0.0;
						} while (fVar8 <= fVar9);
					} while(true);
				}
			}
		}
	label_05c0a32e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042A1")]
	[Address(RVA = "0x5B0A3E0", Offset = "0x5B093E0", VA = "0x5B0A3E0", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/CarrySpecial.c (Characters.CarrySpecial$$Deactivate): 6 lines keep C-only constructs
		byte bVar1;
		HashSet<object> __this_00;
		bool bVar2;
		Human pCVar3;
		Human __this_01;
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte local_30;

		local_58._set = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this_01 = (Human)this._owner;
		if (__this_01 != null) {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
	label_05c0a63a: ;
				throw new InvalidCastException();
			}
			pCVar3 = __this_01.BackHuman;
			bVar2 = ((Object)pCVar3 != null);
			if (bVar2) {
				__this_01.StopCarrySpecial();
				return;
			}
			pCVar3 = __this_01.GetCarryOption(*(float)(&g_data_0100ae48 + (ulong)(__this_01.Grounded == false) * 4));
			bVar2 = ((Object)pCVar3 != null);
			if (bVar2) {
				__this_01.StartCarrySpecial(pCVar3);
			}
			this.SetCooldownLeft(0.0);
			__this_01 = (Human)SceneLoader.CurrentGameManager;
			if (__this_01 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) goto label_05c0a63a;
				__this_00 = *(HashSet<object>*)&__this_01.IsVisible;
				if (__this_00 != null) {
					local_58 = __this_00.GetEnumerator();
					local_30 = (byte)&local_58;
					while(true) {
						bVar2 = local_58.MoveNext();
						if (!bVar2) {
							local_58.Dispose();
							return;
						}
						if ((BaseCharacter)local_58._current == null) break;
						local_58._current.RemoveOutline();
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}
}
