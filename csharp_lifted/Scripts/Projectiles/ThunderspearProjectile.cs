// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.ThunderspearProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/ThunderspearProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ThunderspearProjectile.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x200007D")]
internal class ThunderspearProjectile : BaseProjectile
{
	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0xE0")]
	private Color _color;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0xF0")]
	private float _radius;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0xF4")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x100")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _collideMask;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x4")]
	private static LayerMask _blockMask;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x10C")]
	private bool _wasImpact;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x10D")]
	private bool _wasMaxRange;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x10E")]
	private bool _isEmbed;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x110")]
	private Transform _embedParent;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x118")]
	private Vector3 _embedPosition;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x124")]
	private Vector3 _startPosition;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x130")]
	private bool _isAA;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x134")]
	private float _embedTime;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x138")]
	private bool _usesEmbed;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x8")]
	public static Color CritColor;

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x5773C70", Offset = "0x5772C70", VA = "0x5773C70", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$SetupSettings): 8 lines keep C-only constructs
		object pIVar1;
		ulong uVar2;
		ulong uVar3;
		float pfVar4;
		ulong puVar5;
		byte puVar6;
		Transform pUVar7;
		Vector3 UVar8;

		if (settings != null) {
			if ((int)settings.Length == 0) {
	label_05873dbc: ;
				throw new IndexOutOfRangeException();
			}
			pIVar1 = settings[0];
			if (pIVar1 != null) {
				if ((pIVar1.klass._1).element_class != *(Il2CppClass*)(g_data_07556740 + 0x40)) {
	label_05873dc1: ;
					throw new InvalidCastException();
				}
				pfVar4 = il2cpp_vm_Object_Unbox(pIVar1);
				this._radius = *pfVar4;
				if ((settings.Length & 0xfffffffe) == 0) goto label_05873dbc;
				pIVar1 = settings[1];
				if (pIVar1 != null) {
					if ((pIVar1.klass._1).element_class != (typeof(Color)._1).element_class) goto label_05873dc1;
					puVar5 = il2cpp_vm_Object_Unbox(pIVar1);
					uVar2 = *puVar5;
					uVar3 = puVar5[1];
					this._color.r = (float)(int)uVar2;
					this._color.g = (float)(int)((ulong)uVar2 >> 0x20);
					this._color.b = (float)(int)uVar3;
					this._color.a = (float)(int)((ulong)uVar3 >> 0x20);
					if ((uint)settings.Length < 3) goto label_05873dbc;
					pIVar1 = settings[2];
					if (pIVar1 != null) {
						if ((pIVar1.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) goto label_05873dc1;
						puVar6 = il2cpp_vm_Object_Unbox(pIVar1);
						this._usesEmbed = (bool)*puVar6;
						pUVar7 = this.transform;
						if (pUVar7 != null) {
							UVar8 = pUVar7.position;
							this._lastPosition.x = UVar8.x;
							this._lastPosition.y = UVar8.y;
							this._lastPosition.z = UVar8.z;
							pUVar7 = this.transform ;
							if (pUVar7 != null) {
								UVar8 = pUVar7.position;
								this._startPosition.x = UVar8.x;
								this._startPosition.y = UVar8.y;
								this._startPosition.z = UVar8.z;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x5773DD0", Offset = "0x5772DD0", VA = "0x5773DD0", Slot = "15")]
	protected override void RegisterObjects()
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$RegisterObjects): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> pSVar3;
		GameObject[] pUVar4;
		AbilitySettings pSVar5;
		BoolSetting pSVar6;
		ParticleSystem.MinMaxGradient value;
		ParticleSystem.MinMaxGradient value_00;
		Transform pUVar8;
		ParticleSystem __this_00;
		ParticleSystem __this_01;
		GameObject item;
		GameObject item_00;
		ParticleSystem.MainModule UStack_a8;
		ParticleSystem.MinMaxGradient UStack_a0;
		ParticleSystem.MinMaxGradient UStack_68;

		UStack_a8.m_ParticleSystem =(ParticleSystem.MainModule)null;
		pUVar8 = this.transform;
		if (pUVar8 != null) {
			pUVar8 = pUVar8.Find("Trail");
			if (pUVar8 != null) {
				__this_00 = pUVar8.GetComponent<ParticleSystem>();
				pUVar8 = this.transform;
				if (pUVar8 != null) {
					pUVar8 = pUVar8.Find("Flame");
					if (pUVar8 != null) {
						__this_01 = pUVar8.GetComponent<ParticleSystem>();
						pUVar8 = this.transform;
						if (pUVar8 != null) {
							pUVar8 = pUVar8.Find("ThunderspearModel");
							if (pUVar8 != null) {
								item = pUVar8.gameObject;
								if (__this_01 != null) {
									pSVar3 = this._hideObjects;
									item_00 = __this_01.gameObject;
									if (pSVar3 != null) {
										piVar1 = &pSVar3._version;
										*piVar1 = *piVar1 + 1;
										pUVar4 = pSVar3._items;
										if (pUVar4 != null) {
											uVar2 = pSVar3._size;
											if (uVar2 < (uint)pUVar4.Length) {
												pSVar3._size = uVar2 + 1;
												pUVar4[(int)uVar2] = item_00;
											}
											else {
												pSVar3.AddWithResize((object)item_00);
											}
											pSVar3 = this._hideObjects;
											if (pSVar3 != null) {
												piVar1 = &pSVar3._version;
												*piVar1 = *piVar1 + 1;
												pUVar4 = pSVar3._items;
												if (pUVar4 != null) {
													uVar2 = pSVar3._size;
													if (uVar2 < (uint)pUVar4.Length) {
														pSVar3._size = uVar2 + 1;
														pUVar4[(int)uVar2] = item;
													}
													else {
														pSVar3.AddWithResize((object)item);
													}
													pSVar5 = SettingsManager.AbilitySettings;
													if ((pSVar5 != null) &&(pSVar6 = pSVar5.ShowBombColors, pSVar6 != null) ) {
														if (pSVar6._value != false) {
															if (__this_00 == null) goto label_05874110;
															UStack_a8 = __this_00.main;
															UStack_68 = ((ParticleSystem.MinMaxGradient)(Color)this._color);
															value.m_GradientMin = UStack_68.m_GradientMin;
															value.m_Mode = UStack_68.m_Mode;
															value._4_4_ = UStack_68._4_4_;
															value.m_GradientMax = UStack_68.m_GradientMax;
															value.m_ColorMin.r = UStack_68.m_ColorMin.r;
															value.m_ColorMin.g = UStack_68.m_ColorMin.g;
															value.m_ColorMin.b = UStack_68.m_ColorMin.b;
															value.m_ColorMin.a = UStack_68.m_ColorMin.a;
															value.m_ColorMax.r = UStack_68.m_ColorMax.r;
															value.m_ColorMax.g = UStack_68.m_ColorMax.g;
															value.m_ColorMax.b = UStack_68.m_ColorMax.b;
															value.m_ColorMax.a = UStack_68.m_ColorMax.a;
															UStack_a8.startColor = value;
															UStack_a8 = __this_01.main;
															UStack_a0 = ((ParticleSystem.MinMaxGradient)(Color)this._color);
															value_00.m_GradientMin = UStack_a0.m_GradientMin;
															value_00.m_Mode = UStack_a0.m_Mode;
															value_00._4_4_ = UStack_a0._4_4_;
															value_00.m_GradientMax = UStack_a0.m_GradientMax;
															value_00.m_ColorMin.r = UStack_a0.m_ColorMin.r;
															value_00.m_ColorMin.g = UStack_a0.m_ColorMin.g;
															value_00.m_ColorMin.b = UStack_a0.m_ColorMin.b;
															value_00.m_ColorMin.a = UStack_a0.m_ColorMin.a;
															value_00.m_ColorMax.r = UStack_a0.m_ColorMax.r;
															value_00.m_ColorMax.g = UStack_a0.m_ColorMax.g;
															value_00.m_ColorMax.b = UStack_a0.m_ColorMax.b;
															value_00.m_ColorMax.a = UStack_a0.m_ColorMax.a;
															UStack_a8.startColor = value_00;
														}
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
	label_05874110: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x5774120", Offset = "0x5773120", VA = "0x5774120")]
	private void OnCollisionEnter(Collision collision)
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$OnCollisionEnter): 41 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		uint uVar14;
		InGameSet pSVar15;
		InGameMiscSettings pSVar16;
		BoolSetting pSVar17;
		AbilitySettings pSVar18;
		Rigidbody pUVar19;
		List<Collider> __this_00;
		byte[] auVar20 = new byte[16];
		uint uVar21;
		uint uVar22;
		bool bVar23;
		PhotonView pPVar24;
		ContactPoint[] pUVar25;
		UnityEngine_Vector3_StaticFields pUVar26;
		Transform pUVar27;
		BaseTitan x;
		Math pSVar29;
		UnityEngine_Vector3_StaticFields pUVar30;
		float fVar31;
		float fVar32;
		float extraout_XMM0_Db;
		uint uVar33;
		uint extraout_XMM0_Db_00;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		byte[] auVar34 = new byte[16];
		byte[] auVar35 = new byte[16];
		float fVar36;
		float fVar37;
		byte[] auVar38 = new byte[16];
		Quaternion value;
		Vector3 UVar39;
		Vector3 UVar40;
		Vector3 value_00;
		float fStack_b8;
		float fStack_b4;
		float fStack_88;
		float fStack_84;
		byte[] auStack_78 = new byte[16];
		Collider pUStack_68;
		float fStack_5c;
		byte[] auStack_58 = new byte[8];
		Collider pUStack_48;
		Vector3 UStack_40;

		auStack_58 = (byte[])0x0;
		pUStack_48 = null;
		pPVar24 = this.photonView;
		if (pPVar24 != null) {
			if ((pPVar24._IsMine_k__BackingField == false) || (this.Disabled != false)) {
				return;
			}
			pSVar15 = SettingsManager.InGameCurrent;
			if (((pSVar15 == null) ||(pSVar16 = pSVar15.Misc, pSVar16 == null)) ||(pSVar17 = pSVar16.ThunderspearPVP, pSVar17 == null)) goto label_05874c60;
			if (pSVar17._value != false) {
				pSVar18 = SettingsManager.AbilitySettings;
				if ((pSVar18 == null) ||(pSVar17 = pSVar18.BombCollision, pSVar17 == null)) goto label_05874c60;
				if (pSVar17._value != false) {
					pUVar19 = this._rigidbody;
					if (pUVar19 == null) goto label_05874c60;
					UVar39 = pUVar19.linearVelocity;
					if ((collision == null) ||(pUVar25 = collision.contacts, pUVar25 == null)) goto label_05874c60;
					if ((int)pUVar25.Length != 0) {
						UVar40 = (pUVar25.m_Items).normal;
						pUVar19 = this._rigidbody;
						if (pUVar19 != null) {
							fStack_b8 = UVar39.x;
							fStack_b4 = UVar39.y;
							fVar36 = (fStack_b4 * UVar40.y + fStack_b8 * UVar40.x + UVar39.z * UVar40.z) * -2.0;
							UVar39.z = (UVar40.z * fVar36 + UVar39.z) * 0.8;
							UVar39.y = (fVar36 * UVar40.y + fStack_b4) * 0.8;
							UVar39.x = (fVar36 * UVar40.x + fStack_b8) * 0.8;
							pUVar19.linearVelocity = UVar39;
							pUVar19 = this._rigidbody;
							if (pUVar19 != null) {
								UVar39 = pUVar19.linearVelocity;
								this._velocity.x = UVar39.x;
								this._velocity.y = UVar39.y;
								this._velocity.z = UVar39.z;
								return;
							}
						}
						goto label_05874c60;
					}
					goto label_05874c65;
				}
			}
			this._wasImpact = true;
			pUVar19 = this._rigidbody;
			if (pUVar19 != null) {
				pUVar19.linearVelocity = (Vector3)(Vector3.zeroVector);
				__this_00 = this._colliders;
				if (__this_00 != null) {
					pUVar30 = (UnityEngine_Vector3_StaticFields)auStack_78;
					pUVar30.GetEnumerator((List<object>)__this_00);
					pUStack_48 = pUStack_68;
					auStack_58 = (byte[])auStack_78._0_8_;
					auStack_78._0_8_ = null;
					auStack_78._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_58;
					while (bVar23 = auStack_58.MoveNext()) {
						if (pUStack_48 == null) {
							throw new NullReferenceException();
						}
						pUStack_48.enabled = false;
					}
					auStack_58.Dispose();
					pSVar15 = SettingsManager.InGameCurrent;
					if (((pSVar15 != null) &&(pSVar16 = pSVar15.Misc, pSVar16 != null)) &&(pSVar17 = pSVar16.ThunderspearPVP, pSVar17 != null)) {
						if ((pSVar17._value != false) || (this._usesEmbed == false)) {
							this.Explode();
							return;
						}
						this._isEmbed = true;
						fVar36 = Time.fixedTime;
						this._embedTime = fVar36;
						if ((collision != null) &&(pUVar25 = collision.contacts, pUVar25 != null)) {
							if ((int)pUVar25.Length == 0) {
	label_05874c65: ;
								throw new IndexOutOfRangeException();
							}
							UVar39 = (pUVar25.m_Items).normal;
							auStack_78._0_4_ = 0.0;
							auStack_78._4_4_ = 0.0;
							fVar36 = this._velocity.x;
							uVar1 = this._velocity.y;
							uVar8 = this._velocity.z;
							fVar32 = (float)uVar8 * (float)uVar8;
							fVar36 = fVar32 + fVar36 * fVar36 + (float)uVar1 * (float)uVar1;
							if (fVar36 < 0.0) {
								fVar36 = sqrtf(fVar36);
								fVar32 = extraout_XMM0_Db;
							}
							else {
								fVar36 = SQRT(fVar36);
							}
							if (fVar36 <= 1e-05) {
								pUVar26 = typeof(Vector3).static_fields;
								fVar36 = (pUVar26.zeroVector).z;
							}
							else {
								uVar2 = this._velocity.x;
								uVar9 = this._velocity.y;
								auVar34._4_4_ = uVar9;
								auVar34._0_4_ = uVar2;
								auVar34._8_8_ = 0;
								auVar35._4_4_ = fVar36;
								auVar35._0_4_ = fVar36;
								auVar35._8_4_ = fVar32;
								auVar35._12_4_ = fVar32;
								auVar35 = divps(auVar34, auVar35);
								auStack_78._0_4_ = auVar35._0_4_;
								auStack_78._4_4_ = auVar35._4_4_;
								fVar36 = this._velocity.z / fVar36;
								pUVar26 = (UnityEngine_Vector3_StaticFields)auStack_78;
							}
							uVar21 = (pUVar26.zeroVector).x;
							uVar22 = (pUVar26.zeroVector).y;
							fVar32 = (pUVar26.zeroVector).x;
							fVar37 = (pUVar26.zeroVector).y;
							if (Il2CppMethodInitialized_0753e72d == false) {
								Il2CppMethodInitialized_0753e72d = true;
								fVar32 = (float)uVar21;
								fVar37 = (float)uVar22;
							}
							auStack_78._0_8_ = null;
							fStack_88 = UVar39.x;
							fStack_84 = UVar39.y;
							auVar38._0_4_ = fVar32 - fStack_88;
							auVar38._4_4_ = fVar37 - fStack_84;
							auVar38._8_4_ = 0.0 - extraout_XMM0_Dc;
							auVar38._12_4_ = 0.0 - extraout_XMM0_Dd;
							fVar36 = fVar36 - UVar39.z;
							uVar33 = 0;
							fVar32 = fVar36 * fVar36 + auVar38._4_4_ * auVar38._4_4_ + auVar38._0_4_ * auVar38._0_4_;
							if (fVar32 < 0.0) {
								fVar32 = sqrtf(fVar32);
								uVar33 = extraout_XMM0_Db_00;
							}
							else {
								fVar32 = SQRT(fVar32);
							}
							if (fVar32 <= 1e-05) {
								pUVar30 = typeof(Vector3).static_fields;
								fVar36 = (float)((System_Collections_Generic_List_Enumerator_T__Fields)&pUVar30.zeroVector). _index;
							}
							else {
								fVar36 = fVar36 / fVar32;
								auVar20._4_4_ = fVar32;
								auVar20._0_4_ = fVar32;
								auVar20._8_4_ = uVar33;
								auVar20._12_4_ = uVar33;
								auVar35 = divps(auVar38, auVar20);
								auStack_78._0_8_ = auVar35._0_8_;
							}
							*(List<T>*)&this._velocity =((System_Collections_Generic_List_Enumerator_T__Fields)&pUVar30.zeroVector)._list;
							this._velocity.z = fVar36;
							pUVar27 = collision.transform;
							this._embedParent = pUVar27;
							pUVar27 = collision.transform;
							if ((pUVar27 != null) &&(pUVar27 = pUVar27.root, pUVar27 != null)) {
								x = pUVar27.GetComponent<BaseTitan>();
								bVar23 = ((Object)x != null);
								if (bVar23) {
									fVar36 = 0.5;
								}
								else {
									fVar36 = 0.1;
								}
								pUVar27 = collision.transform;
								pUVar25 = collision.contacts;
								if (pUVar25 != null) {
									if ((int)pUVar25.Length == 0) goto label_05874c65;
									UVar39 = (pUVar25.m_Items).point;
									if (pUVar27 != null) {
										UVar40.z = UVar39.z + this._velocity.z * fVar36;
										uVar3 = this._velocity.x;
										uVar10 = this._velocity.y;
										UVar40.x = UVar39.x + (float)uVar3 * fVar36;
										UVar40.y = UVar39.y + (float)uVar10 * fVar36;
										UVar39 = pUVar27.InverseTransformPoint(UVar40);
										this._embedPosition.x = UVar39.x;
										this._embedPosition.y = UVar39.y;
										this._embedPosition.z = UVar39.z;
										pUVar27 = this._transform;
										pUVar25 = collision.contacts;
										if (pUVar25 != null) {
											if ((int)pUVar25.Length == 0) goto label_05874c65;
											UVar39 = (pUVar25.m_Items).point;
											if (pUVar27 != null) {
												value_00.z = UVar39.z + fVar36 * this._velocity.z;
												uVar4 = this._velocity.x;
												uVar11 = this._velocity.y;
												value_00.x = UVar39.x + fVar36 * (float)uVar4;
												value_00.y = UVar39.y + fVar36 * (float)uVar11;
												pUVar27.position = value_00;
												pUVar27 = this._transform;
												auStack_78._0_8_ = *(ulong)&this._velocity;
												auStack_78._8_4_ = this._velocity.z;
												pUVar30 = typeof(Vector3).static_fields;
												UStack_40.x = (pUVar30.upVector).x;
												UStack_40.y = (pUVar30.upVector).y;
												UStack_40.z = (pUVar30.upVector).z;
												value = Quaternion.Internal_LookRotation((Vector3)auStack_78, ref UStack_40);
												if (pUVar27 != null) {
													pUVar27.rotation = value;
													pUVar27 = this._transform;
													if (pUVar27 != null) {
														uVar5 = this._startPosition.x;
														uVar12 = this._startPosition.y;
														fVar36 = this._startPosition.z;
														UVar39 = pUVar27.position;
														pSVar29 = typeof(Math);
														if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
														}
														fVar36 = fVar36 - UVar39.z;
														fVar32 = (float)uVar5 - UVar39.x;
														fVar37 = (float)uVar12 - UVar39.y;
														fVar36 = fVar36 * fVar36 + fVar37 * fVar37 + fVar32 * fVar32;
														if (fVar36 < 0.0) {
															fVar36 = sqrtf(fVar36);
														}
														else {
															fVar36 = SQRT(fVar36);
														}
														fVar32 = pSVar29.GetStat("Embed1Time");
														fVar37 = pSVar29.GetStat("Embed1TimeMultiplier");
														fVar31 = this.InitialPlayerVelocity.x;
														uVar6 = this.InitialPlayerVelocity.y;
														uVar13 = this.InitialPlayerVelocity.z;
														pSVar29 = typeof(Math);
														if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
															fStack_5c = fVar31;
															fVar31 = fStack_5c;
														}
														fVar31 = (float)uVar13 * (float)uVar13 + fVar31 * fVar31 + (float)uVar6 * (float)uVar6;
														if (fVar31 < 0.0) {
															fVar31 = sqrtf(fVar31);
														}
														else {
															fVar31 = SQRT(fVar31);
														}
														fVar32 = fVar32 + fVar37 * fVar31;
														fVar37 = pSVar29.GetStat("Embed1TimeMax");
														if (fVar37 <= fVar32) {
															fVar32 = fVar37;
														}
														fVar37 = pSVar29.GetStat("Embed1TimeMin");
														if (fVar32 <= fVar37) {
															fVar32 = fVar37;
														}
														fVar31 = pSVar29.GetStat("Embed2TimeTotal");
														fVar37 = pSVar29.GetStat("Embed2TimeMultiplier");
														fVar31 = fVar31 - fVar36 * fVar37;
														if (fVar31 <= 0.0) {
															fVar31 = 0.0;
														}
														this._timeLeft = fVar31 + fVar32;
														pUVar27 = this._transform;
														if (pUVar27 != null) {
															UVar39 = pUVar27.position;
															uVar7 = this._startPosition.x;
															uVar14 = this._startPosition.y;
															fVar36 = this._startPosition.z;
															pSVar29 = typeof(Math);
															if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
															}
															fVar32 = UVar39.y - (float)uVar14;
															fVar36 = UVar39.z - fVar36;
															fVar37 = UVar39.x - (float)uVar7;
															fVar36 = fVar32 * fVar32 + fVar37 * fVar37 + fVar36 * fVar36;
															if (fVar36 < 0.0) {
																fVar36 = sqrtf(fVar36);
															}
															else {
																fVar36 = SQRT(fVar36);
															}
															fVar32 = pSVar29.GetStat("AATriggerRange");
															if (fVar32 <= fVar36) {
																return;
															}
															this._isAA = true;
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
	label_05874c60: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x5775450", Offset = "0x5774450", VA = "0x5775450", Slot = "16")]
	protected override void OnExceedLiveTime()
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$OnExceedLiveTime): clean
		this._wasMaxRange = true;
		if (this._isEmbed == false) {
			this.Explode();
			return;
		}
		this.DestroySelf();
		return;
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x5774CD0", Offset = "0x5773CD0", VA = "0x5774CD0")]
	public void Explode()
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$Explode): 62 lines keep C-only constructs
		ulong uVar1;
		InGameSet pSVar2;
		InGameMiscSettings pSVar3;
		BoolSetting pSVar4;
		BaseCharacter attacker;
		String name;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		Transform pUVar9;
		Object[] settings;
		object pIVar10;
		object pIVar11;
		MethodInfo pMVar12;
		String* __this_00;
		ThunderspearProjectile __this_01;
		Math __this_02;
		float fVar13;
		float fVar14;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint uVar15;
		uint uVar16;
		Quaternion UVar17;
		Vector3 UVar18;
		Vector3 position;
		float local_b0;
		byte local_a9;
		byte[] local_a8 = new byte[24];
		float local_90;
		uint local_8c;
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		ulong local_58;
		ulong uStack_50;
		ulong local_48;
		ulong local_38;

		__this_00 = (String*)this;
		if (Il2CppMethodInitialized_07545184 == false) {
			__this_00 = &"Embed1TimeMultiplier";
			Il2CppMethodInitialized_07545184 = true;
		}
		if (this.Disabled != false) {
			return;
		}
		pMVar12 = (MethodInfo *)"RestrictAngle";
		fVar13 = __this_00.GetStat("RestrictAngle");
		local_58._0_4_ = this._color.r;
		local_58._4_4_ = this._color.g;
		uStack_50._0_4_ = this._color.b;
		uStack_50._4_4_ = this._color.a;
		pSVar2 = SettingsManager.InGameCurrent;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Misc, pSVar3 != null)) &&(pSVar4 = pSVar3.ThunderspearPVP, pSVar4 != null)) {
			if (pSVar4._value == false) {
				local_78._0_4_ = 0x3f800000;
				if (this._isEmbed == false) {
					local_a8._0_4_ = fVar13;
				}
				else {
					__this_01 = null;
					fVar13 = Time.fixedTime;
					local_a8._0_4_ = fVar13;
					local_88._0_4_ = this._embedTime;
					fVar13 = __this_01.GetStat("Embed1Time");
					fVar14 = __this_01.GetStat("Embed1TimeMultiplier");
					local_68._0_4_ = fVar14;
					fVar14 = this.InitialPlayerVelocity.x;
					uVar1._0_4_ = this.InitialPlayerVelocity.y;
					uVar1._4_4_ = this.InitialPlayerVelocity.z;
					__this_02 = typeof(Math);
					if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
						local_90 = fVar14;
						local_48 = uVar1;
						uVar1._0_4_ = (float)local_48;
						uVar1._4_4_ = local_48._4_4_;
						fVar14 = local_90;
					}
					fVar14 = uVar1._4_4_ * uVar1._4_4_ + fVar14 * fVar14 + (float)uVar1 * (float)uVar1;
					if (fVar14 < 0.0) {
						fVar14 = sqrtf(fVar14);
					}
					else {
						fVar14 = SQRT(fVar14);
					}
					fVar13 = fVar13 + (float)local_68._0_4_ * fVar14;
					fVar14 = __this_02.GetStat("Embed1TimeMax");
					if (fVar14 <= fVar13) {
						fVar13 = fVar14;
					}
					fVar14 = __this_02.GetStat("Embed1TimeMin") ;
					if (fVar13 <= fVar14) {
						fVar13 = fVar14;
					}
					if ((float)local_a8._0_4_ - (float)local_88._0_4_ <= fVar13) {
						fVar13 = __this_02.GetStat("RadiusEmbed1Multiplier");
						local_78._0_4_ = fVar13;
						this._radius = this._radius * fVar13;
						pMVar12 = (MethodInfo *)"RestrictAngleEmbed1";
						fVar13 = __this_02.GetStat("RestrictAngleEmbed1");
						local_a8._0_4_ = fVar13;
						local_58._0_4_ = (ThunderspearProjectile.CritColor).r;
						local_58._4_4_ = (ThunderspearProjectile.CritColor).g;
						uStack_50._0_4_ = (ThunderspearProjectile.CritColor).b;
						uStack_50._4_4_ = (ThunderspearProjectile.CritColor).a;
					}
					else {
						fVar13 = this._radius;
						fVar14 = __this_02.GetStat("RadiusEmbed2Multiplier");
						this._radius = fVar14 * fVar13;
						pMVar12 = (MethodInfo *)"RestrictAngleEmbed2";
						fVar13 = __this_02.GetStat("RestrictAngleEmbed2");
						local_a8._0_4_ = fVar13;
					}
				}
				fVar13 = this._radius;
				local_b0 = fVar13 * 4.0;
			}
			else {
				local_a8._0_4_ = fVar13;
				fVar13 = this._radius;
				local_b0 = fVar13 + fVar13;
				local_78._0_4_ = 0x3f800000;
			}
			uVar6 = this.KillPlayersInRadius(fVar13);
			this.DamageHorsesInRadius(this._radius);
			uVar15 = 0;
			uVar16 = 0;
			uVar7 = this.KillTitansInRadius(this._radius, (float)local_a8._0_4_);
			attacker = this._owner;
			pUVar9 = this.transform;
			if (pUVar9 != null) {
				UVar18 = pUVar9.position;
				fVar13 = UVar18.x;
				fVar14 = UVar18.y;
				uVar1._0_4_ = UVar18.z;
				if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
					local_a8._8_4_ = extraout_XMM0_Dc;
					local_a8._0_8_ = UVar18._0_8_;
					local_a8._12_4_ = extraout_XMM0_Dd;
					local_88._0_4_ = UVar18.z;
					uVar15 = 0;
					uVar16 = 0;
					fVar13 = (float)local_a8._0_4_;
					fVar14 = (float)local_a8._4_4_;
					uVar1._0_4_ = (float)local_88._0_4_;
				}
				UVar18.y = fVar14;
				UVar18.x = fVar13;
				UVar18.z = (float)uVar1;
				MapDestruction.Explode(attacker, UVar18, (local_b0 * 0.5) / (float)local_78._0_4_);
				uVar8 = (uint)this._wasImpact;
				if ((int)uVar6 < (int)uVar8) {
					uVar6 = uVar8;
				}
				if ((int)uVar6 <= (int)uVar7) {
					uVar6 = uVar7;
				}
				name = EffectPrefabs.ThunderspearExplode;
				pUVar9 = this.transform;
				if (pUVar9 != null) {
					UVar18 = pUVar9.position;
					local_78._8_4_ = extraout_XMM0_Dc_00;
					local_78._0_8_ = UVar18._0_8_;
					local_78._12_4_ = extraout_XMM0_Dd_00;
					local_a8._0_4_ = UVar18.z;
					pUVar9 = this.transform;
					if (pUVar9 != null) {
						UVar17 = pUVar9.rotation;
						local_88._8_4_ = extraout_XMM0_Dc_01;
						local_88._0_8_ = UVar17._0_8_;
						local_88._12_4_ = extraout_XMM0_Dd_01;
						local_68._8_4_ = uVar15;
						local_68._0_8_ = UVar17._8_8_;
						local_68._12_4_ = uVar16;
						settings = (Object[])new object[3];
						local_38 = local_58;
						pIVar10 = (object)local_38;
						if (settings != null) {
							if ((pIVar10 != null) &&(pIVar11 = il2cpp_vm_Object_IsInst(pIVar10, (((settings.obj).klass)._1).element_class), pIVar11 == null)) {
	label_0587535c: ;
								pIVar10 = new ArrayTypeMismatchException();
								throw pIVar10;
							}
							if ((int)settings.Length != 0) {
								settings[0] = pIVar10;
								local_8c = uVar6;
								pIVar10 = (object)local_8c;
								if ((pIVar10 != null) &&(pIVar11 = il2cpp_vm_Object_IsInst(pIVar10, (((settings.obj).klass)._1).element_class), pIVar11 == null)) goto label_0587535c;
								if ((settings.Length & 0xfffffffe) != 0) {
									settings[1] = pIVar10;
									local_a9 = this._wasImpact;
									pIVar10 = (object)local_a9;
									if ((pIVar10 != null) &&(pIVar11 = il2cpp_vm_Object_IsInst(pIVar10, (((settings.obj).klass)._1).element_class), pIVar11 == null)) goto label_0587535c;
									if (2 < (uint)settings.Length) {
										settings[2] = pIVar10;
										UVar17.z = (float)local_68._0_4_;
										UVar17.w = (float)local_68._4_4_;
										UVar17.x = (float)local_88._0_4_;
										UVar17.y = (float)local_88._4_4_;
										position.z = (float)local_a8._0_4_;
										position.x = (float)local_78._0_4_;
										position.y = (float)local_78._4_4_;
										EffectSpawner.Spawn(name, position, UVar17, local_b0, true, settings);
										this.StunMyHuman();
										this.DestroySelf();
										return;
									}
								}
							}
							throw new IndexOutOfRangeException();
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x5776880", Offset = "0x5775880", VA = "0x5776880")]
	private void StunMyHuman()
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$StunMyHuman): 4 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		InGameSet pSVar3;
		InGameMiscSettings pSVar4;
		BoolSetting pSVar5;
		BaseComponentCache pUVar6;
		bool bVar7;
		JSONNode pSVar8;
		long plVar9;
		Transform pUVar10;
		object pIVar11;
		Human __this_00;
		float fVar12;
		float fVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		float local_38;
		float fStack_34;

		pCVar2 = this._owner;
		bVar7 = ((Object)pCVar2 == null);
		if ((!bVar7) && (pCVar2 = this._owner, pCVar2 != null)) {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&(((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human) &&(bVar7 = pCVar2.IsMainCharacter())))) {
				pSVar3 = SettingsManager.InGameCurrent;
				if ((pSVar3 != null) &&((pSVar4 = pSVar3.Misc, pSVar4 != null &&(pSVar5 = pSVar4.ThunderspearPVP, pSVar5 != null)))) {
					if (pSVar5._value != false) {
						return;
					}
					pSVar8 = CharacterData.HumanWeaponInfo;
					if (((pSVar8 != null) &&(pSVar8 = pSVar8.get_Item("Thunderspear"), pSVar8 != null)) &&(plVar9 = (long)pSVar8.get_Item("StunRange"), plVar9 != null)) {
						fVar12 = (float)(**(code*)(*plVar9 + 0x388))(plVar9);
						pCVar2 = this._owner;
						if (((pCVar2 != null) &&(pUVar6 = pCVar2.Cache, pUVar6 != null)) &&(pUVar10 = pUVar6.Transform, pUVar10 != null)) {
							UVar14 = pUVar10.position;
							pUVar10 = this.transform;
							if (pUVar10 != null) {
								UVar15 = pUVar10.position;
								local_38 = UVar14.x;
								fStack_34 = UVar14.y;
								fStack_34 = fStack_34 - UVar15.y;
								fVar13 = UVar14.z - UVar15.z;
								local_38 = local_38 - UVar15.x;
								fVar13 = fStack_34 * fStack_34 + local_38 * local_38 + fVar13 * fVar13;
								if (fVar13 < 0.0) {
									fVar13 = sqrtf(fVar13);
								}
								else {
									fVar13 = SQRT(fVar13);
								}
								if (fVar12 <= fVar13) {
									return;
								}
								pCVar2 = this._owner;
								pUVar10 = this.transform;
								if (pUVar10 != null) {
									UVar14 = pUVar10.position;
									pIVar11 = il2cpp_codegen_is_inst_class((object)pCVar2, typeof(Human));
									if (pIVar11 != null) {
										__this_00 = (Human)il2cpp_codegen_is_inst_class((object)pCVar2, typeof(Human));
										__this_00.GetStunnedByTS(UVar14);
										return;
									}
								}
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x5776000", Offset = "0x5775000", VA = "0x5776000")]
	private int KillTitansInRadius(float radius, float restrictAngle)
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$KillTitansInRadius): 7 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		Object x;
		BaseTitanComponentCache pCVar3;
		Object y;
		BaseCharacter pCVar4;
		RechargeableUseable __this_00;
		BaseMenu obj;
		BaseCamera obj_00;
		bool bVar5;
		bool bVar6;
		LayerMask mask;
		int iVar7;
		uint uVar8;
		Transform pUVar9;
		Int32[] layers;
		Collider[] pUVar10;
		GameObject pUVar11;
		BaseTitan a;
		CustomLogicCollisionHandler __this_01;
		String pSVar12;
		object pIVar13;
		InGameMenu __this_02;
		InGameCamera __this_03;
		String pSVar14;
		BaseCharacter pCVar15;
		uint uVar17;
		uint uVar19;
		BaseCharacter pCVar20;
		Vector3 position;
		Vector3 UVar21;
		int local_78;

		pUVar9 = this.transform;
		if (pUVar9 != null) {
			position = pUVar9.position;
			layers = (Int32[])new int[1];
			if (layers != null) {
				if ((int)layers.Length == 0) {
	label_05876873: ;
					throw new IndexOutOfRangeException();
				}
				layers[0] = PhysicsLayer.Hurtbox;
				mask = PhysicsLayer.GetMask(layers);
				iVar7 = ((LayerMask)mask);
				uVar17 = 0;
				pUVar10 = Physics.OverlapSphere(position, radius, iVar7);
				if (pUVar10 != null) {
					uVar8 = (uint)pUVar10.Length;
					if (0 < (int)uVar8) {
						uVar19 = 0;
						uVar17 = 0;
						do {
							if (uVar8 <= uVar19) goto label_05876873;
							x = (Object)pUVar10[(int)uVar19];
							if ((((x == null) ||(pUVar9 = x.transform, pUVar9 == null)) ||(pUVar9 = pUVar9.root, pUVar9 == null)) ||(pUVar11 = pUVar9.gameObject, pUVar11 == null)) goto label_0587686e;
							a = pUVar11.GetComponent<BaseTitan>();
							pUVar11 = x.gameObject;
							if (pUVar11 == null) goto label_0587686e;
							__this_01 = pUVar11.GetComponent<CustomLogicCollisionHandler>();
							bVar5 = ((Object)__this_01 != null);
							uVar8 = uVar17;
							if (bVar5) {
								iVar7 = this.CalculateDamage(false);
								pSVar14 = "Thunderspear";
								pCVar20 = this._owner;
								pCVar15 = pCVar20;
								if (Il2CppMethodInitialized_07545163 == false) {
									Il2CppMethodInitialized_07545163 = true;
									pCVar15 = this._owner;
								}
								bVar5 = ((Object)pCVar15 != null);
								if (bVar5) {
									pCVar15 = this._owner;
									if (pCVar15 == null) goto label_0587686e;
									pSVar14 = pCVar15.RichTextName;
								}
								pUVar9 = this.transform;
								if ((pUVar9 == null) ||(UVar21 = pUVar9.position, __this_01 == null)) goto label_0587686e;
								__this_01.GetHit(pCVar20, pSVar14, iVar7, "Thunderspear", UVar21);
							}
							else {
								bVar5 = ((Object)a != null);
								if (bVar5) {
									pCVar20 = this._owner;
									bVar5 = ((Object)a != (Object)pCVar20);
									if (bVar5) {
										pSVar14 = this._team;
										bVar5 = TeamInfo.SameTeam((BaseCharacter)a, pSVar14);
										if (!bVar5) {
											if (a == null) goto label_0587686e;
											if (a.Dead == false) {
												pCVar3 = a.BaseTitanCache;
												if (pCVar3 == null) goto label_0587686e;
												y = (Object)pCVar3.NapeHurtbox;
												bVar5 = (x == y);
												if (bVar5) {
													bVar5 = a.CheckNapeAngle(position, restrictAngle);
													iVar2 = a.CurrentHealth;
													pCVar20 = this._owner;
													bVar6 = ((Object)pCVar20 == null);
													if ((bVar6) ||(pCVar20 = this._owner, pCVar20 == null)) {
	label_05876540: ;
														pSVar12 = x.name;
														local_78 = 100;
														iVar7 = 100;
														pSVar14 = "Thunderspear";
	label_05876574: ;
														a.GetHit("Thunderspear", iVar7, pSVar14, pSVar12);
													}
													else {
														pCVar4 = pCVar20.klass;
														bVar1 = (typeof(Human)._2).typeHierarchyDepth;
														if (((pCVar4._2).typeHierarchyDepth < bVar1) ||((pCVar4._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Human))) goto label_05876540;
														bVar6 = this._isEmbed;
														if ((~bVar6 & bVar5) != 0) {
															local_78 = 0;
															pSVar12 = x.name;
															iVar7 = 0;
															pSVar14 = "TitanStun";
															goto label_05876574;
														}
														if (bVar5) {
															local_78 = this.CalculateDamage(false);
															pCVar20 = this._owner;
															if (pCVar20 == null) goto label_0587686e;
															if (pCVar20.AI == false) {
																obj = UIManager.CurrentMenu;
																pIVar13 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
																if (pIVar13 == null) goto label_0587686e;
																__this_02 = (InGameMenu)il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
																__this_02.ShowKillScore(local_78, false);
																pCVar3 = a.BaseTitanCache;
																if ((pCVar3 == null) ||(pUVar9 = pCVar3.Neck, pUVar9 == null)) goto label_0587686e;
																obj_00 = SceneLoader.CurrentCamera;
																UVar21 = pUVar9.position;
																pIVar13 = il2cpp_codegen_is_inst_class((object)obj_00, typeof(InGameCamera));
																if (pIVar13 == null) goto label_0587686e;
																__this_03 = (InGameCamera)il2cpp_codegen_is_inst_class((object)obj_00, typeof(InGameCamera));
																__this_03.TakeSnapshot(UVar21, local_78);
																pCVar20 = this._owner;
															}
															pSVar14 = x.name;
															a.GetHit(pCVar20, local_78, "Thunderspear", pSVar14);
														}
														else if (bVar6 == false) {
															local_78 = 100;
														}
														else {
															local_78 = 0;
															pSVar14 = x.name;
															a.GetHit("Thunderspear", 0, "TitanStun", pSVar14);
														}
													}
													pCVar20 = this._owner;
													if (pCVar20 != null) {
														bVar1 = (typeof(Human)._2).typeHierarchyDepth;
														if (((bVar1 <= (pCVar20.klass._2).typeHierarchyDepth) &&((pCVar20.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(Human))) &&(__this_00 = (RechargeableUseable)(*(ulong)((sbyte)pCVar20 + 0x118)), __this_00 != null)) {
															bVar1 = (typeof(RechargeableUseable)._2).typeHierarchyDepth;
															if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(RechargeableUseable))) {
																__this_00.ReduceCooldown();
															}
														}
													}
													uVar8 = 3;
													if ((float)iVar2 <= (float)local_78) {
														if (uVar17 < 3) {
															uVar17 = 2;
														}
														uVar8 = uVar17;
													}
												}
											}
										}
									}
								}
							}
							uVar17 = uVar8;
							uVar19 = uVar19 + 1;
							uVar8 = (uint)pUVar10.Length;
						} while ((int)uVar19 < (int)uVar8);
					}
					return uVar17;
				}
			}
		}
	label_0587686e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x5775480", Offset = "0x5774480", VA = "0x5775480")]
	private int KillPlayersInRadius(float radius)
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$KillPlayersInRadius): 27 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseGameManager pGVar3;
		HashSet<object> __this_00;
		BaseComponentCache pUVar4;
		BaseCharacter pCVar5;
		String b;
		BaseCharacter pCVar6;
		InGameMenu __this_01;
		InGameCamera __this_02;
		int iVar7;
		object a;
		bool bVar8;
		uint uVar9;
		int score;
		Transform pUVar10;
		uint uVar11;
		float fVar12;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Db;
		Vector3 UVar13;
		float local_b8;
		float fStack_b4;
		System_Collections_Generic_HashSet_Enumerator_T__o local_a8;
		float local_88;
		float fStack_84;
		byte[] local_70 = new byte[16];
		BaseCharacter local_60;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[8];

		local_a8._set = null;
		local_a8._index = 0;
		local_a8._version = 0;
		local_a8._current = null;
		pGVar3 = SceneLoader.CurrentGameManager;
		pUVar10 = this.transform;
		if (pUVar10 != null) {
			UVar13 = pUVar10.position;
			local_88 = UVar13.z;
			local_58._8_4_ = extraout_XMM0_Dc;
			local_58._0_8_ = UVar13._0_8_;
			local_58._12_4_ = extraout_XMM0_Dd;
			if (pGVar3 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				__this_00 = (HashSet<object>)(*(ulong)((sbyte)pGVar3 + 0x40));
				if (__this_00 != null) {
					fStack_84 = (float)in_XMM1_Db;
					local_70.GetEnumerator(__this_00);
					local_a8._current = (object)local_60;
					local_a8._set = (HashSet<T>)local_70._0_8_;
					local_a8._index = local_70._8_4_;
					local_a8._version = local_70._12_4_;
					local_70._0_8_ = null;
					fStack_84 = (float)local_58._0_4_;
					uVar9 = 0;
					local_70._8_8_ = &local_a8;
	label_05875650: ;
					do {
						do {
							do {
								do {
									do {
										do {
											bVar8 = local_a8.MoveNext();
											a = local_a8._current;
											if (!bVar8) {
												local_a8.Dispose();
												return uVar9;
											}
											bVar8 = ((Object)a == null);
										} while (bVar8);
										if ((BaseCharacter)a == null) {
											throw new NullReferenceException();
										}
									} while (((BaseCharacter)((long)a + 0x10)).Dead != false);
									pUVar4 = ((BaseCharacter)((long)a + 0x10)).Cache;
									if (pUVar4 == null) {
										throw new NullReferenceException();
									}
									pUVar10 = pUVar4.Transform;
									if (pUVar10 == null) {
										throw new NullReferenceException();
									}
									UVar13 = pUVar10.position;
									local_48._4_4_ = in_XMM1_Db;
									local_48._0_4_ = UVar13.z;
									if (Il2CppMethodInitialized_0753e7b7 == false) {
										Il2CppMethodInitialized_0753e7b7 = true;
										uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
									}
									else {
										uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
									}
									if (uVar2 == 0) {
									}
									local_b8 = UVar13.x;
									fStack_b4 = UVar13.y;
									fVar12 = (fStack_b4 - (float)local_58._4_4_) * (fStack_b4 - (float)local_58._4_4_) +(local_b8 - fStack_84) * (local_b8 - fStack_84) +((float)local_48._0_4_ - local_88) * ((float)local_48._0_4_ - local_88);
									if (fVar12 < 0.0) {
										fVar12 = sqrtf(fVar12);
									}
									else {
										fVar12 = SQRT(fVar12);
									}
									in_XMM1_Db = 0;
								} while (radius <= fVar12);
								in_XMM1_Db = 0;
								pCVar5 = this._owner;
								if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
								}
								bVar8 = ((Object)a != (Object)pCVar5);
							} while (!bVar8);
							b = this._team;
							bVar8 = TeamInfo.SameTeam((BaseCharacter)a, b);
						} while (bVar8);
						pCVar5 = this._owner;
						bVar8 = ((Object)pCVar5 == null);
						if ((bVar8) || (pCVar5 = this._owner, pCVar5 == null)) {
	label_05875835: ;
							a.GetHit("", 100, "Thunderspear", "");
						}
						else {
							pCVar6 = pCVar5.klass;
							bVar1 = (typeof(Human)._2).typeHierarchyDepth;
							if (((pCVar6._2).typeHierarchyDepth < bVar1) ||((pCVar6._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] !=typeof(Human))) goto label_05875835;
							score = this.CalculateDamage(false);
							a.GetHit(this._owner, score, "Thunderspear", "");
							if (((BaseCharacter)((long)a + 0x10)).AI == false) {
								__this_01 = (InGameMenu)UIManager.CurrentMenu;
								if (__this_01 == null) {
									throw new NullReferenceException();
								}
								bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
								if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameMenu))) {
									throw new InvalidCastException();
								}
								__this_01.ShowKillScore(score, false);
								pUVar4 = ((BaseCharacter)((long)a + 0x10)).Cache;
								if (pUVar4 == null) {
									throw new NullReferenceException();
								}
								pUVar10 = pUVar4.Transform;
								if (pUVar10 == null) {
									throw new NullReferenceException();
								}
								__this_02 = (InGameCamera)SceneLoader.CurrentCamera;
								UVar13 = pUVar10.position;
								if (__this_02 == null) {
									throw new NullReferenceException();
								}
								bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
								if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameCamera))) {
									throw new InvalidCastException();
								}
								__this_02.TakeSnapshot(UVar13, score);
							}
						}
						if (0 < ((BaseCharacter)((long)a + 0x10)).CurrentHealth) {
							bVar8 = SBORROW4(uVar9, 4);
							iVar7 = uVar9 - 4;
							uVar11 = 3;
	label_05875879: ;
							if (bVar8 != iVar7 < 0) {
								uVar9 = uVar11;
							}
							goto label_05875650;
						}
						pCVar5 = this._owner;
						bVar8 = ((Object)pCVar5 != null);
						if (bVar8) {
							pCVar5 = this._owner;
							if (pCVar5 == null) {
								throw new NullReferenceException();
							}
							pUVar4 = pCVar5.Cache;
							if (pUVar4 == null) {
								throw new NullReferenceException();
							}
							pUVar10 = pUVar4.Transform;
							if (pUVar10 == null) {
								throw new NullReferenceException();
							}
							UVar13 = pUVar10.position;
							local_48 = (byte[])UVar13._0_8_;
							if (Il2CppMethodInitialized_0753e7b7 == false) {
								Il2CppMethodInitialized_0753e7b7 = true;
								uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							else {
								uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							if (uVar2 == 0) {
							}
							fVar12 = local_88 - UVar13.z;
							fVar12 = ((float)local_58._4_4_ - (float)local_48._4_4_) *((float)local_58._4_4_ - (float)local_48._4_4_) +(fStack_84 - (float)local_48._0_4_) * (fStack_84 - (float)local_48._0_4_) + fVar12 * fVar12;
							if (fVar12 < 0.0) {
								fVar12 = sqrtf(fVar12);
							}
							else {
								fVar12 = SQRT(fVar12);
							}
							in_XMM1_Db = 0;
							if (fVar12 < radius) {
								in_XMM1_Db = 0;
								bVar8 = SBORROW4(uVar9, 5);
								iVar7 = uVar9 - 5;
								uVar11 = 4;
								goto label_05875879;
							}
						}
						if (uVar9 < 3) {
							uVar9 = 2;
						}
						if (this._wasMaxRange != false) {
							uVar9 = 5;
						}
					} while(true);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x5775C20", Offset = "0x5774C20", VA = "0x5775C20")]
	private void DamageHorsesInRadius(float radius)
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$DamageHorsesInRadius): 22 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		String b;
		BaseComponentCache pUVar3;
		BaseCharacter pCVar4;
		object a;
		bool bVar5;
		int iVar6;
		Transform pUVar7;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float in_XMM1_Db;
		float fVar8;
		float in_XMM1_Dd;
		float fVar9;
		Vector3 UVar10;
		System_Collections_Generic_HashSet_Enumerator_T__o local_88;
		byte[] local_70 = new byte[16];
		BaseCharacter local_60;
		float local_58;
		byte[] local_48 = new byte[24];

		local_88._set = null;
		local_88._index = 0;
		local_88._version = 0;
		local_88._current = null;
		pGVar2 = SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			if ((*(ulong)((sbyte)pGVar2 + 0x58)) != null) {
				local_70.GetEnumerator((*(ulong)((sbyte)pGVar2 + 0x58)));
				local_88._current = (object)local_60;
				local_88._set = (HashSet<T>)local_70._0_8_;
				local_88._index = local_70._8_4_;
				local_88._version = local_70._12_4_;
				local_70._0_8_ = null;
				local_70._8_8_ = &local_88;
	label_05875dd0: ;
				do {
					do {
						do {
							do {
								do {
									bVar5 = local_88.MoveNext();
									a = local_88._current;
									if (!bVar5) {
										local_88.Dispose();
										return;
									}
									fVar8 = in_XMM1_Db;
									if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
										fVar8 = in_XMM1_Db;
									}
									bVar5 = ((Object)a == null);
									in_XMM1_Db = fVar8;
								} while (bVar5);
								if ((BaseCharacter)a == null) {
									throw new NullReferenceException();
								}
							} while (((BaseCharacter)((long)a + 0x10)).Dead != false);
							b = this._team;
							bVar5 = TeamInfo.SameTeam((BaseCharacter)a, b);
							in_XMM1_Db = fVar8;
						} while (bVar5);
						pUVar3 = ((BaseCharacter)((long)a + 0x10)).Cache;
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						pUVar7 = pUVar3.Transform;
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						UVar10 = pUVar7.position;
						local_58 = UVar10.z;
						local_48._8_4_ = extraout_XMM0_Dc;
						local_48._0_8_ = UVar10._0_8_;
						local_48._12_4_ = extraout_XMM0_Dd;
						pUVar7 = this.transform;
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						UVar10 = pUVar7.position;
						in_XMM1_Db = UVar10.x;
						in_XMM1_Dd = UVar10.y;
						fVar9 = local_58 - UVar10.z;
					} while (radius * radius <=((float)local_48._4_4_ - in_XMM1_Dd) * ((float)local_48._4_4_ - in_XMM1_Dd) +((float)local_48._0_4_ - in_XMM1_Db) * ((float)local_48._0_4_ - in_XMM1_Db) + fVar9 * fVar9);
					pCVar4 = this._owner;
					if (pCVar4 != null) {
						bVar1 = (typeof(Human)._2).typeHierarchyDepth;
						if ((bVar1 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] ==typeof(Human))) {
							iVar6 = this.CalculateDamage(false);
							a.GetHit(pCVar4, iVar6, "Thunderspear", "");
							goto label_05875dd0;
						}
					}
					a.GetHit("Thunderspear", 100, "Thunderspear", "");
				} while(true);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x5776BC0", Offset = "0x5775BC0", VA = "0x5776BC0")]
	private int CalculateDamage(bool dmgOverride = false)
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$CalculateDamage): 2 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		uint uVar4;
		InGameSet pSVar5;
		InGameMiscSettings pSVar6;
		BoolSetting pSVar7;
		BaseCharacter pCVar8;
		bool bVar9;
		int iVar10;
		JSONNode pSVar11;
		long plVar12;
		int iVar13;
		float fVar14;
		float fVar15;

		if (Il2CppMethodInitialized_07545189 == false) {
			Il2CppMethodInitialized_07545189 = true;
			uVar4 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar4 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
			pSVar11 = CharacterData.HumanWeaponInfo;
		}
		else {
			pSVar11 = *(JSONNode*)(typeof(CharacterData)).static_fields;
		}
		if (((pSVar11 != null) &&(pSVar11 = pSVar11.get_Item("Thunderspear"), pSVar11 != null)) &&(plVar12 = (long)pSVar11.get_Item("DamageMultiplier"), plVar12 != null)) {
			fVar14 = (float)(**(code*)(*plVar12 + 0x388))(plVar12);
			pSVar5 = SettingsManager.InGameCurrent;
			if (((pSVar5 != null) &&(pSVar6 = pSVar5.Misc, pSVar6 != null)) &&(pSVar7 = pSVar6.ThunderspearPVP, pSVar7 != null)) {
				if (pSVar7._value != false) {
					fVar14 = 1.0;
				}
				fVar15 = this.InitialPlayerVelocity.x;
				fVar1 = this.InitialPlayerVelocity.y;
				fVar2 = this.InitialPlayerVelocity.z;
				fVar15 = fVar2 * fVar2 + fVar1 * fVar1 + fVar15 * fVar15;
				if (fVar15 < 0.0) {
					fVar15 = sqrtf(fVar15);
				}
				else {
					fVar15 = SQRT(fVar15);
				}
				iVar10 = (int)(fVar14 * fVar15 * 10.0);
				if (10 < iVar10) {
				}
				pCVar8 = this._owner;
				bVar9 = ((Object)pCVar8 != null);
				if ((bVar9) && (pCVar8 = this._owner, pCVar8 != null)) {
					bVar3 = (typeof(Human)._2).typeHierarchyDepth;
					if ((bVar3 <= (pCVar8.klass._2).typeHierarchyDepth) &&(((pCVar8.klass._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(Human) && (pCVar8.CustomDamageEnabled != false)))) {
					}
				}
				return iVar13;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x5776E70", Offset = "0x5775E70", VA = "0x5776E70", Slot = "9")]
	protected override void Update()
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$Update): clean
		uint uVar1;
		uint uVar2;
		PhotonView pPVar3;
		Transform __this_00;
		float fVar5;
		float fVar6;
		Quaternion value;
		Vector3 UStack_30;
		Vector3 UStack_20;

		this.Update();
		pPVar3 = this._photonView;
		if (pPVar3 != null) {
			if (pPVar3._IsMine_k__BackingField != false) {
				fVar6 = this._timeLeft;
				fVar5 = Time.deltaTime;
				fVar6 = fVar6 - fVar5;
				this._timeLeft = fVar6;
				if (fVar6 <= 0.0) {
					this.OnExceedLiveTime();
				}
			}
			pPVar3 = this._photonView;
			if (pPVar3 != null) {
				if (pPVar3._IsMine_k__BackingField != false) {
					fVar6 = this._velocity.x;
					uVar1 = this._velocity.y;
					uVar2 = this._velocity.z;
					fVar6 = (float)uVar2 * (float)uVar2 + fVar6 * fVar6 + (float)uVar1 * (float)uVar1;
					if (fVar6 < 0.0) {
						fVar6 = sqrtf(fVar6);
					}
					else {
						fVar6 = SQRT(fVar6);
					}
					if (0.0 < fVar6) {
						__this_00 = this.transform;
						UStack_20.x = this._velocity.x;
						UStack_20.y = this._velocity.y;
						UStack_20.z = this._velocity.z;
						UStack_30.x = (Vector3.upVector).x;
						UStack_30.y = (Vector3.upVector).y;
						UStack_30.z = (Vector3.upVector).z;
						value = Quaternion.Internal_LookRotation(ref UStack_20, ref UStack_30);
						if (__this_00 != null) {
							__this_00.rotation = value;
							return;
						}
						goto label_05877016;
					}
				}
				return;
			}
		}
	label_05877016: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x5777020", Offset = "0x5776020", VA = "0x5777020")]
	protected void FixedUpdate()
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$FixedUpdate): 32 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		PhotonView pPVar4;
		Rigidbody __this_00;
		Transform __this_01;
		BaseCharacter x;
		byte[] auVar5 = new byte[16];
		bool bVar6;
		int layerMask;
		Transform pUVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		float fVar9;
		uint uVar10;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		float fVar11;
		byte[] auVar12 = new byte[16];
		float fVar13;
		Vector3 UVar14;
		Vector3 origin;
		Vector3 UStack_60;
		float fStack_54;
		ulong uStack_50;
		byte[] auStack_48 = new byte[48];

		auStack_48._32_4_ = 0.0;
		auStack_48._36_4_ = 0.0;
		auStack_48._40_4_ = 0.0;
		auStack_48._16_4_ = 0.0;
		auStack_48._20_4_ = 0.0;
		auStack_48._24_4_ = 0.0;
		auStack_48._28_4_ = 0.0;
		auStack_48._0_4_ = 0.0;
		auStack_48._4_4_ = 0.0;
		auStack_48._8_4_ = 0.0;
		auStack_48._12_4_ = 0.0;
		pPVar4 = this._photonView;
		if (pPVar4 == null) goto label_0587749d;
		if (pPVar4._IsMine_k__BackingField == false) {
			return;
		}
		if (this._isEmbed != false) {
			__this_00 = this._rigidbody;
			if (__this_00 != null) {
				__this_00.linearVelocity = (Vector3)(Vector3.zeroVector);
				pUVar7 = this._embedParent;
				bVar6 = ((Object)pUVar7 != null);
				if (!bVar6) {
	label_05877152: ;
					x = this._owner;
					bVar6 = ((Object)x != null);
					if (!bVar6) {
						return;
					}
					if (this._isAA == false) {
						return;
					}
					this.Explode();
					return;
				}
				pUVar7 = this._embedParent;
				if (pUVar7 != null) {
					__this_01 = this._transform;
					UVar14 = pUVar7.TransformPoint((Vector3)this._embedPosition);
					if (__this_01 != null) {
						__this_01.position = UVar14;
						goto label_05877152;
					}
				}
			}
			goto label_0587749d;
		}
		pUVar7 = this.transform;
		if (pUVar7 == null) goto label_0587749d;
		UVar14 = pUVar7.position;
		UStack_60.z = this._lastPosition.x;
		fStack_54 = this._lastPosition.y;
		uStack_50._0_4_ = 0.0;
		uStack_50._4_4_ = 0.0;
		fVar1 = this._lastPosition.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_60.x = 0.0;
			UStack_60.y = 0.0;
		}
		else {
			UStack_60.x = 0.0;
			UStack_60.y = 0.0;
		}
		UStack_60.x = 0.0;
		UStack_60.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_60.x = 0.0;
			UStack_60.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar12._0_4_ = UVar14.x - UStack_60.z;
		auVar12._4_4_ = UVar14.y - fStack_54;
		auVar12._8_4_ = extraout_XMM0_Dc - (float)uStack_50;
		auVar12._12_4_ = extraout_XMM0_Dd - uStack_50._4_4_;
		fVar11 = UVar14.z - fVar1;
		fVar13 = fVar11 * fVar11 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
		if (fVar13 < 0.0) {
			fVar9 = sqrtf(fVar13);
			uVar10 = extraout_XMM0_Db;
			if (1e-05 < fVar9) goto label_058772b2;
	label_0587726d: ;
			pUVar8 = typeof(Vector3).static_fields;
			fVar11 = (pUVar8.zeroVector).z;
		}
		else {
			uVar10 = 0;
			fVar9 = SQRT(fVar13);
			if (fVar9 <= 1e-05) goto label_0587726d;
	label_058772b2: ;
			fVar11 = fVar11 / fVar9;
			auVar5._4_4_ = fVar9;
			auVar5._0_4_ = fVar9;
			auVar5._8_4_ = uVar10;
			auVar5._12_4_ = uVar10;
			auVar12 = divps(auVar12, auVar5);
			UStack_60.x = auVar12._0_4_;
			UStack_60.y = auVar12._4_4_;
			pUVar8 = (UnityEngine_Vector3_StaticFields)&UStack_60;
		}
		uVar2 = (pUVar8.zeroVector).x;
		uVar3 = (pUVar8.zeroVector).y;
		UVar14.y = (float)uVar3;
		UVar14.x = (float)uVar2;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_058773a2;
	label_058772f3: ;
			if (0.0 <= fVar13) goto label_058772ff;
	label_058773b9: ;
			fVar13 = sqrtf(fVar13);
		}
		else {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_058772f3;
	label_058773a2: ;
			if (fVar13 < 0.0) goto label_058773b9;
	label_058772ff: ;
			fVar13 = SQRT(fVar13);
		}
		layerMask = ((LayerMask)(LayerMask)(ThunderspearProjectile._collideMask). m_Mask);
		origin.z = fVar1;
		origin.x = UStack_60.z;
		origin.y = fStack_54;
		UVar14.z = fVar11;
		bVar6 = Physics.SphereCast(origin, 0.5, UVar14, (RaycastHit)auStack_48, fVar13, layerMask);
		if (bVar6) {
			pUVar7 = this.transform;
			UVar14 = auStack_48.point;
			if (pUVar7 == null) goto label_0587749d;
			pUVar7.position = UVar14;
		}
		pUVar7 = this.transform;
		if (pUVar7 != null) {
			UVar14 = pUVar7.position;
			this._lastPosition.x = UVar14.x;
			this._lastPosition.y = UVar14.y;
			this._lastPosition.z = UVar14.z;
			return;
		}
	label_0587749d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x5775370", Offset = "0x5774370", VA = "0x5775370")]
	private float GetStat(string field)
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$GetStat): 2 lines keep C-only constructs
		uint uVar1;
		code *vtableDispatch;
		JSONNode pSVar2;
		long plVar3;
		float fVar4;

		if (Il2CppMethodInitialized_0754518b == false) {
			Il2CppMethodInitialized_0754518b = true;
			uVar1 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = CharacterData.HumanWeaponInfo;
		}
		else {
			pSVar2 = *(JSONNode*)(typeof(CharacterData)).static_fields ;
		}
		if (((pSVar2 == null) ||(pSVar2 = pSVar2.get_Item("Thunderspear"), pSVar2 == null)) ||(plVar3 = (long)pSVar2.get_Item(field), plVar3 == null)) {
			throw new NullReferenceException();
		}
		vtableDispatch = *(code*)(*plVar3 + 0x388);
		fVar4 = (float)(*vtableDispatch)(plVar3,*(ulong)(*plVar3 + 0x390),vtableDispatch);
		return fVar4;
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x57774B0", Offset = "0x57764B0", VA = "0x57774B0")]
	public ThunderspearProjectile()
	{
		// Lifted from source/cpp/Projectiles/ThunderspearProjectile.c (Projectiles.ThunderspearProjectile$$.ctor): clean
		float fVar1;
		UnityEngine_Vector3_StaticFields pUVar2;
		float fVar3;
		Vector3 pUVar4;

		pUVar4 = typeof(Vector3);
		pUVar2 = typeof(Vector3).static_fields;
		fVar3 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._embedPosition.x = (pUVar2.zeroVector).x;
		this._embedPosition.y = fVar3;
		this._embedPosition.z = fVar1;
		pUVar2 = pUVar4.static_fields;
		fVar3 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._startPosition.x = (pUVar2.zeroVector).x;
		this._startPosition.y = fVar3;
		this._startPosition.z = fVar1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Projectiles/ThunderspearProjectile.c.

	// Projectiles.ThunderspearProjectile$$.cctor: clean
	static ThunderspearProjectile()
	{
		uint uVar1;
		Utility_PhysicsLayer_StaticFields pUVar2;
		LayerMask UVar4;
		Int32[] pSVar5;

		pSVar5 = (Int32[])new int[4];
		if (pSVar5 == null) {
	label_05877692: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar5.Length;
		if (uVar1 != 0) {
			pUVar2 = typeof(PhysicsLayer).static_fields;
			pSVar5[0] = pUVar2.MapObjectAll;
			if (((uVar1 != 1) && (pSVar5[1] = pUVar2.MapObjectEntities, 2 < uVar1)) &&(pSVar5[2] = pUVar2.MapObjectProjectiles, uVar1 != 3)) {
				pSVar5[3] = pUVar2.TitanPushbox;
				UVar4 = PhysicsLayer.GetMask(pSVar5);
				(ThunderspearProjectile._collideMask).m_Mask =(int32_t)UVar4.m_Mask;
				pSVar5 = (Int32[])new int[5];
				if (pSVar5 == null) goto label_05877692;
				uVar1 = (uint)pSVar5.Length;
				if (uVar1 != 0) {
					pUVar2 = typeof(PhysicsLayer).static_fields;
					pSVar5[0] = pUVar2.MapObjectAll;
					if (((uVar1 != 1) && (pSVar5[1] = pUVar2.MapObjectEntities, 2 < uVar1)) &&((pSVar5[2] = pUVar2.MapObjectProjectiles, uVar1 != 3 &&(pSVar5[3] = pUVar2.TitanPushbox, 4 < uVar1)))) {
						pSVar5[4] = pUVar2.Human;
						UVar4 = PhysicsLayer.GetMask(pSVar5);
						(ThunderspearProjectile._blockMask).m_Mask =(int32_t)UVar4.m_Mask;
						(ThunderspearProjectile.CritColor).r = 0.475;
						(ThunderspearProjectile.CritColor).g = 0.7;
						(ThunderspearProjectile.CritColor).b = 1.0;
						(ThunderspearProjectile.CritColor).a = 1.0;
						return;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
