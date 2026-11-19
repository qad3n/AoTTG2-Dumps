// ==================== AoTTG2 cross-reference ====================
// Type: Effects.ShifterThunderEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/ShifterThunderEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20003B2")]
internal class ShifterThunderEffect : BaseEffect
{
	[Token(Token = "0x20003B3")]
	private sealed class Bolt
	{
		[Token(Token = "0x4001312")]
		[FieldOffset(Offset = "0x10")]
		private readonly LineRenderer _core;

		[Token(Token = "0x4001313")]
		[FieldOffset(Offset = "0x18")]
		private readonly LineRenderer _glow;

		[Token(Token = "0x60017AE")]
		[Address(RVA = "0x585CF90", Offset = "0x585BF90", VA = "0x585CF90")]
		public Bolt(Transform parent, Material material, int points, float scale)
		{
			// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect.Bolt$$.ctor): clean
			LineRenderer pUVar1;

			base();
			pUVar1 = ShifterThunderEffect.Bolt.CreateLine(parent, material, points, scale * 0.9);
			this._core = pUVar1;
			pUVar1 = ShifterThunderEffect.Bolt.CreateLine(parent, material, points, scale * 9.0);
			this._glow = pUVar1;
			return;
		}

		[Token(Token = "0x60017AF")]
		[Address(RVA = "0x585E0C0", Offset = "0x585D0C0", VA = "0x585E0C0")]
		private static LineRenderer CreateLine(Transform parent, Material material, int points, float width)
		{
			// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect.Bolt$$CreateLine): clean
			int value;
			GameObject pUVar1;
			LineRenderer __this;
			Transform __this_00;
			GameObject __this_01;
			Keyframe[] keys;
			AnimationCurve __this_02;
			Keyframe local_78;
			Keyframe local_58;

			pUVar1 = new GameObject("Thunder bolt");
			if (pUVar1 != null) {
				__this = pUVar1.AddComponent<LineRenderer>();
				if (__this != null) {
					__this_00 = __this.transform;
					if (__this_00 != null) {
						__this_00.SetParent(parent, false);
						pUVar1 = __this.gameObject;
						if (parent != null) {
							__this_01 = parent.gameObject;
							if (__this_01 != null) {
								value = __this_01.layer;
								if (pUVar1 != null) {
									pUVar1.layer = value;
									__this.sharedMaterial = material;
									__this.useWorldSpace = true;
									__this.positionCount = points;
									__this.textureMode = 0;
									__this.alignment = 0;
									__this.shadowCastingMode = 0;
									__this.receiveShadows = false;
									keys = (Keyframe[])new Keyframe[2];
									local_58.m_WeightedMode = 0;
									local_58.m_InWeight = 0.0;
									local_58.m_OutWeight = 0.0;
									local_58.m_Time = 0.0;
									local_58.m_Value = 0.0;
									local_58.m_InTangent = 0.0;
									local_58.m_OutTangent = 0.0;
									local_58 = new Keyframe(0.0, width * 0.6);
									if (keys != null) {
										if ((int)keys.Length != 0) {
											keys[0].m_OutWeight = local_58.m_OutWeight;
											keys[0].m_WeightedMode = local_58.m_WeightedMode;
											keys[0].m_InWeight = local_58.m_InWeight;
											keys[0].m_Time = local_58.m_Time;
											keys[0].m_Value = local_58.m_Value;
											keys[0].m_InTangent = local_58.m_InTangent;
											keys[0].m_OutTangent = local_58.m_OutTangent;
											local_78.m_WeightedMode = 0;
											local_78.m_InWeight = 0.0;
											local_78.m_OutWeight = 0.0;
											local_78.m_Time = 0.0;
											local_78.m_Value = 0.0;
											local_78.m_InTangent = 0.0;
											local_78.m_OutTangent = 0.0;
											local_78 = new Keyframe(1.0, width) ;
											if ((keys.Length & 0xfffffffe) != 0) {
												keys[1].m_OutWeight = local_78.m_OutWeight;
												keys[1].m_WeightedMode = local_78.m_WeightedMode;
												keys[1].m_InWeight = local_78.m_InWeight;
												keys[1].m_Time = local_78.m_Time;
												keys[1].m_Value = local_78.m_Value;
												keys[1].m_InTangent = local_78.m_InTangent;
												keys[1].m_OutTangent = local_78.m_OutTangent;
												__this_02 = new AnimationCurve(keys);
												__this.widthCurve = __this_02;
												__this.enabled = false;
												return __this;
											}
										}
										throw new IndexOutOfRangeException();
									}
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60017B0")]
		[Address(RVA = "0x585DC50", Offset = "0x585CC50", VA = "0x585DC50")]
		public void SetVisible(bool visible)
		{
			// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect.Bolt$$SetVisible): clean
			Renderer pUVar1;

			pUVar1 = (Renderer)this._core;
			if (pUVar1 != null) {
				pUVar1.enabled = visible;
				pUVar1 = (Renderer)this._glow;
				if (pUVar1 != null) {
					pUVar1.enabled = visible;
					return;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60017B1")]
		[Address(RVA = "0x585DE90", Offset = "0x585CE90", VA = "0x585DE90")]
		public void SetPoints(Vector3[] points, float alpha)
		{
			// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect.Bolt$$SetPoints): clean
			float fVar1;
			uint uVar2;
			uint uVar3;
			uint uVar4;
			uint uVar5;
			LineRenderer pUVar6;
			Effects_ShifterThunderEffect_StaticFields pEVar7;
			Color value;
			Color value_00;
			Color value_01;
			Color value_02;

			pUVar6 = this._core;
			if (pUVar6 != null) {
				pUVar6.SetPositions(points);
				pUVar6 = this._glow;
				if (pUVar6 != null) {
					pUVar6.SetPositions(points);
					pUVar6 = this._core;
					if (pUVar6 != null) {
						pEVar7 = typeof(ShifterThunderEffect).static_fields;
						uVar2 = (pEVar7.CoreColor).r;
						uVar4 = (pEVar7.CoreColor).g;
						value_00.g = (float)uVar4;
						value_00.r = (float)uVar2;
						fVar1 = (pEVar7.CoreColor).b;
						value.a = alpha;
						value.b = fVar1;
						value.r = (float)uVar2;
						value.g = (float)uVar4;
						pUVar6.endColor = value;
						value_00.a = alpha;
						value_00.b = fVar1;
						pUVar6.startColor = value_00;
						pUVar6 = this._glow;
						if (pUVar6 != null) {
							pEVar7 = typeof(ShifterThunderEffect).static_fields;
							uVar3 = (pEVar7.GlowColor).r;
							uVar5 = (pEVar7.GlowColor).g;
							value_02.g = (float)uVar5;
							value_02.r = (float)uVar3;
							fVar1 = (pEVar7.GlowColor).b;
							value_01.a = alpha * 0.45;
							value_01.b = fVar1;
							value_01.r = (float)uVar3;
							value_01.g = (float)uVar5;
							pUVar6.endColor = value_01;
							value_02.b = fVar1;
							value_02.a = alpha * 0.45;
							pUVar6.startColor = value_02;
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x40012F9")]
	private const int Strikes = 4;

	[Token(Token = "0x40012FA")]
	private const int BranchesPerStrike = 3;

	[Token(Token = "0x40012FB")]
	private const int MainPoints = 18;

	[Token(Token = "0x40012FC")]
	private const int BranchPoints = 8;

	[Token(Token = "0x40012FD")]
	private const float StrikeInterval = 0.18f;

	[Token(Token = "0x40012FE")]
	private const float StrikeDuration = 0.42f;

	[Token(Token = "0x40012FF")]
	private const float FlickerInterval = 0.04f;

	[Token(Token = "0x4001300")]
	private const float Height = 260f;

	[Token(Token = "0x4001301")]
	private const float Spread = 0.25f;

	[Token(Token = "0x4001302")]
	private const float Roughness = 0.045f;

	[Token(Token = "0x4001303")]
	private const float CoreWidth = 0.9f;

	[Token(Token = "0x4001304")]
	private const float GlowWidth = 9f;

	[Token(Token = "0x4001305")]
	private const float LightDuration = 1.4f;

	[Token(Token = "0x4001306")]
	private const float LightIntensity = 8f;

	[Token(Token = "0x4001307")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color CoreColor;

	[Token(Token = "0x4001308")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color GlowColor;

	[Token(Token = "0x4001309")]
	[FieldOffset(Offset = "0x20")]
	private static Material _material;

	[Token(Token = "0x400130A")]
	[FieldOffset(Offset = "0x30")]
	private readonly Bolt[] _bolts;

	[Token(Token = "0x400130B")]
	[FieldOffset(Offset = "0x38")]
	private readonly Vector3[] _mainPoints;

	[Token(Token = "0x400130C")]
	[FieldOffset(Offset = "0x40")]
	private readonly Vector3[] _branchPoints;

	[Token(Token = "0x400130D")]
	[FieldOffset(Offset = "0x48")]
	private Light _light;

	[Token(Token = "0x400130E")]
	[FieldOffset(Offset = "0x50")]
	private Transform _target;

	[Token(Token = "0x400130F")]
	[FieldOffset(Offset = "0x58")]
	private float _scale;

	[Token(Token = "0x4001310")]
	[FieldOffset(Offset = "0x5C")]
	private float _time;

	[Token(Token = "0x4001311")]
	[FieldOffset(Offset = "0x60")]
	private float _flickerTimeLeft;

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x585C810", Offset = "0x585B810", VA = "0x585C810", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
		// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect$$Setup): 4 lines keep C-only constructs
		byte bVar1;
		int viewId;
		object obj;
		int piVar2;
		BaseCharacter pCVar3;

		this._owner = owner;
		this._timeLeft = liveTime;
		if ((settings != null) && (settings.Length != 0)) {
			if ((int)settings.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = settings[0];
			if ((obj != null) && (obj.klass == g_data_07556710)) {
				piVar2 = il2cpp_vm_Object_Unbox(obj);
				viewId = *piVar2;
				pCVar3 = Util.FindCharacterByViewId(viewId);
				if (pCVar3 != null) {
					bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
					if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseShifter))) {
						if ((*(ulong)((sbyte)pCVar3 + 0x108)) == null) {
							throw new NullReferenceException();
						}
						this._target = *(Transform*)((long)(*(ulong)((sbyte)pCVar3 + 0x108)) + 0x40);
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60017A7")]
	[Address(RVA = "0x585C930", Offset = "0x585B930", VA = "0x585C930")]
	private void Start()
	{
		// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect$$Start): 9 lines keep C-only constructs
		Light* targetAddress;
		float fVar1;
		uint uVar2;
		uint uVar3;
		Transform pUVar5;
		Material material;
		ShifterThunderEffect.Bolt __this_00;
		LineRenderer pUVar6;
		GameObject __this_01;
		Light pUVar7;
		Transform parent;
		int points;
		long lVar8;
		ShifterThunderEffect.Bolt[] pEVar9;
		ulong uVar10;
		Vector3 UVar11;

		pUVar5 = this.transform;
		if (pUVar5 != null) {
			UVar11 = pUVar5.localScale;
			this._scale = UVar11.x;
			material = ShifterThunderEffect.GetMaterial();
			pEVar9 = this._bolts;
			if (pEVar9 != null) {
				lVar8 = 0x20;
				uVar10 = 0;
				do {
					if ((long)(int)pEVar9.Length <= (long)uVar10) {
						__this_01 = new GameObject("Thunder light");
						if (__this_01 != null) {
							pUVar7 = __this_01.AddComponent<Light>();
							targetAddress = &this._light;
							this._light = pUVar7;
							pUVar7 = this._light;
							if (pUVar7 != null) {
								pUVar5 = pUVar7.transform;
								parent = this.transform;
								if (pUVar5 != null) {
									pUVar5.SetParent(parent, false);
									if (*targetAddress != null) {
										pUVar5 = (*targetAddress).transform;
										if (pUVar5 != null) {
											UVar11.z = (Vector3.upVector).z * 20.0;
											uVar2 = (Vector3.upVector).x;
											uVar3 = (Vector3.upVector).y;
											UVar11.x = (float)uVar2 * 20.0;
											UVar11.y = (float)uVar3 * 20.0;
											pUVar5.localPosition = UVar11;
											if (*targetAddress != null) {
												(*targetAddress).type = 2;
												pUVar7 = *targetAddress;
												if (pUVar7 != null) {
													pUVar7.color = (Color)(ShifterThunderEffect.GlowColor). fields;
													if (*targetAddress != null) {
														(*targetAddress).range = this._scale * 260.0;
														pUVar7 = this._light;
														if (pUVar7 != null) {
															pUVar7.shadows = 0;
															this.UpdateBolts();
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
						break;
					}
					pUVar5 = this.transform;
					points = 8;
					if ((uVar10 & 3) == 0) {
						points = 0x12;
					}
					fVar1 = this._scale;
					__this_00 = new ShifterThunderEffect.Bolt();
					pUVar6 = ShifterThunderEffect.Bolt.CreateLine(pUVar5, material, points, fVar1 * 0.9);
					__this_00._core = pUVar6;
					pUVar6 = ShifterThunderEffect.Bolt.CreateLine(pUVar5, material, points, fVar1 * 9.0);
					__this_00._glow = pUVar6;
					if ((uint)pEVar9.Length <= uVar10) {
						throw new IndexOutOfRangeException();
					}
					pEVar9[uVar10] = __this_00;
					uVar10 = uVar10 + 1;
					pEVar9 = this._bolts;
					lVar8 = lVar8 + 8;
				} while (pEVar9 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x585DAE0", Offset = "0x585CAE0", VA = "0x585DAE0", Slot = "6")]
	protected override void Update()
	{
		// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect$$Update): clean
		Transform pUVar1;
		Light __this_00;
		bool bVar2;
		Object obj;
		Transform __this_01;
		float fVar3;
		float fVar4;
		Vector3 value;

		fVar4 = this._timeLeft;
		fVar3 = Time.deltaTime;
		fVar4 = fVar4 - fVar3;
		this._timeLeft = fVar4;
		if (fVar4 <= 0.0) {
			obj = (Object)this.gameObject;
			Object.Destroy(obj);
		}
		pUVar1 = this._target;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			__this_01 = this.transform;
			pUVar1 = this._target;
			if (pUVar1 == null) goto label_0595dc44;
			value = pUVar1.position;
			if (__this_01 == null) goto label_0595dc44;
			__this_01.position = value;
		}
		fVar4 = this._time;
		fVar3 = Time.deltaTime;
		this._time = fVar3 + fVar4;
		fVar4 = this._flickerTimeLeft;
		fVar3 = Time.deltaTime;
		fVar4 = fVar4 - fVar3;
		this._flickerTimeLeft = fVar4;
		if (fVar4 <= 0.0) {
			__this_00 = this._light;
			if (__this_00 == null) {
	label_0595dc44: ;
				throw new NullReferenceException();
			}
			bVar2 = __this_00.enabled;
			if (bVar2) {
				this.UpdateBolts();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x585D020", Offset = "0x585C020", VA = "0x585D020")]
	private void UpdateBolts()
	{
		// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect$$UpdateBolts): 39 lines keep C-only constructs
		ulong uVar1;
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
		ShifterThunderEffect.Bolt[] pEVar13;
		ShifterThunderEffect.Bolt pEVar14;
		Renderer pUVar15;
		ShifterThunderEffect.Bolt pEVar16;
		Vector3[] pUVar17;
		LineRenderer pUVar18;
		Effects_ShifterThunderEffect_StaticFields pEVar19;
		Light pUVar20;
		Vector2 UVar21;
		uint uVar22;
		Transform __this_00;
		UnityEngine_Vector3_StaticFields pUVar23;
		bool value;
		byte[] auVar33 = new byte[12];
		int iVar24;
		long lVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		uint uVar29;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		byte[] auVar34 = new byte[16];
		float fVar35;
		float fVar36;
		float fVar37;
		float fVar38;
		Color value_00;
		Color value_01;
		Vector3 UVar39;
		Vector3 UVar40;
		Vector3 start;
		Vector3 end;
		byte[] local_128 = new byte[8];
		float fStack_120;
		float fStack_11c;
		float local_104;
		float local_100;
		float local_f8;
		float fStack_f4;
		float local_b8;
		float fStack_b4;
		Vector3 local_a0;
		long local_88;
		ulong local_80;
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		float local_48;
		float fStack_44;

		this._flickerTimeLeft = 0.04;
		__this_00 = this.transform;
		if (__this_00 != null) {
			lVar25 = 0;
			UVar39 = __this_00.position;
			local_78._8_4_ = extraout_XMM0_Dc;
			local_78._0_8_ = UVar39._0_8_;
			local_78._12_4_ = extraout_XMM0_Dd;
			local_100 = 0.0;
			do {
				pEVar13 = this._bolts;
				if (pEVar13 == null) goto label_0595dad4;
				uVar1 = lVar25 * 4;
				if ((uint)pEVar13.Length <= uVar1) {
	label_0595dacf: ;
					throw new IndexOutOfRangeException();
				}
				fVar35 = (float)(int)lVar25 * -0.18 + this._time;
				pEVar14 = pEVar13[lVar25 * 4];
				value = false;
				local_104 = 0.0;
				if ((0.0 <= fVar35) && (fVar35 < 0.42)) {
					fVar26 = Random.value;
					value = false;
					if (0.15 < fVar26) {
						local_104 = Random.Range(0.6, 1.0);
						local_104 = ((fVar35 * 0.6) / -0.42 + 1.0) * local_104;
						value = true;
					}
				}
				if ((pEVar14 == null) ||(pUVar15 = (Renderer)pEVar14._core, pUVar15 == null)) goto label_0595dad4;
				local_88 = lVar25;
				pUVar15.enabled = value;
				pUVar15 = (Renderer)pEVar14._glow;
				if (pUVar15 == null) goto label_0595dad4;
				pUVar15.enabled = value;
				pEVar13 = this._bolts;
				if (pEVar13 == null) goto label_0595dad4;
				if ((ulong)(uint)pEVar13.Length <= (uVar1 | 1)) goto label_0595dacf;
				pEVar16 = pEVar13[uVar1 | 1];
				if ((pEVar16 == null) ||(pUVar15 = (Renderer)pEVar16._core, pUVar15 == null)) goto label_0595dad4;
				pUVar15.enabled = value;
				pUVar15 = (Renderer)pEVar16._glow;
				if (pUVar15 == null) goto label_0595dad4;
				pUVar15.enabled = value;
				pEVar13 = this._bolts;
				if (pEVar13 == null) goto label_0595dad4;
				if ((ulong)(uint)pEVar13.Length <= (uVar1 | 2)) goto label_0595dacf;
				pEVar16 = pEVar13[uVar1 | 2];
				if ((pEVar16 == null) ||(pUVar15 = (Renderer)pEVar16._core, pUVar15 == null)) goto label_0595dad4;
				pUVar15.enabled = value;
				pUVar15 = (Renderer)pEVar16._glow;
				if (pUVar15 == null) goto label_0595dad4;
				pUVar15.enabled = value;
				pEVar13 = this._bolts;
				if (pEVar13 == null) goto label_0595dad4;
				if ((ulong)(uint)pEVar13.Length <= (uVar1 | 3)) goto label_0595dacf;
				pEVar16 = pEVar13[uVar1 | 3];
				if ((pEVar16 == null) ||(pUVar15 = (Renderer)pEVar16._core, pUVar15 == null)) goto label_0595dad4;
				pUVar15.enabled = value;
				pUVar15 = (Renderer)pEVar16._glow;
				if (pUVar15 == null) goto label_0595dad4;
				local_80 = uVar1;
				pUVar15.enabled = value;
				if (value != false) {
					UVar21 = Random.insideUnitCircle;
					fVar35 = this._scale;
					UVar40 = Random.insideUnitSphere;
					fVar26 = this._scale;
					pUVar17 = this._mainPoints;
					local_f8 = UVar21.x;
					fStack_f4 = UVar21.y;
					start.x = fVar35 * local_f8 * 260.0 * 0.25 + (float)local_78._0_4_;
					start.y = fVar35 * 260.0 + (float)local_78._4_4_;
					end.x = fVar26 * UVar40.x * 4.0 + (float)local_78._0_4_;
					end.y = fVar26 * UVar40.y * 4.0 + (float)local_78._4_4_;
					start.z = fStack_f4 * 260.0 * 0.25 * fVar35 + UVar39.z;
					end.z = UVar40.z * 4.0 * fVar26 + UVar39.z;
					ShifterThunderEffect.Jag(start, end, pUVar17);
					pEVar14.SetPoints(this._mainPoints, local_104) ;
					local_58 = ZEXT416((uint)(local_104 * 0.7));
					local_68 = ZEXT416((uint)(local_104 * 0.7 * 0.45));
					lVar25 = 1;
					do {
						pUVar17 = this._mainPoints;
						uVar22 = Random.Range(2, 0xe);
						if (pUVar17 == null) goto label_0595dad4;
						if ((uint)pUVar17.Length <= uVar22) goto label_0595dacf;
						uVar2 = pUVar17[(int)uVar22].x;
						uVar7 = pUVar17[(int)uVar22].y;
						fVar35 = pUVar17[(int)uVar22].z;
						pUVar23 = typeof(Vector3).static_fields;
						uVar3 = (pUVar23.downVector).x;
						uVar8 = (pUVar23.downVector).y;
						fVar26 = (pUVar23.downVector).z;
						UVar40 = Random.insideUnitSphere;
						if (Il2CppMethodInitialized_0753e72d == false) {
							Il2CppMethodInitialized_0753e72d = true;
							local_a0.x = 0.0;
							local_a0.y = 0.0;
							if (g_data_0753e729 == false) goto label_0595d99e;
	label_0595d521: ;
							local_a0.x = 0.0;
							local_a0.y = 0.0;
							uVar12 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							local_a0.x = 0.0;
							local_a0.y = 0.0;
							if (g_data_0753e729 != false) goto label_0595d521;
	label_0595d99e: ;
							local_a0.x = 0.0;
							local_a0.y = 0.0;
							g_data_0753e729 = true;
							uVar12 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar12 == 0) {
						}
						local_128._0_4_ = (float)uVar3 + UVar40.x * 1.2;
						local_128._4_4_ = (float)uVar8 + UVar40.y * 1.2;
						fVar26 = fVar26 + UVar40.z * 1.2;
						fStack_120 = extraout_XMM0_Dc_00 * 0.0 + 0.0;
						fStack_11c = extraout_XMM0_Dd_00 * 0.0 + 0.0;
						uVar29 = 0;
						fVar27 = fVar26 * fVar26 +(float)local_128._4_4_ * (float)local_128._4_4_ +(float)local_128._0_4_ * (float)local_128._0_4_;
						if (fVar27 < 0.0) {
							fVar27 = sqrtf(fVar27);
							uVar29 = extraout_XMM0_Db;
							if (1e-05 < fVar27) goto label_0595d5aa;
	label_0595d578: ;
							pUVar23 = typeof(Vector3).static_fields;
							fVar26 = (pUVar23.zeroVector).z;
						}
						else {
							fVar27 = SQRT(fVar27);
							if (fVar27 <= 1e-05) goto label_0595d578;
	label_0595d5aa: ;
							fVar26 = fVar26 / fVar27;
							auVar34._4_4_ = fVar27;
							auVar34._0_4_ = fVar27;
							auVar34._8_4_ = uVar29;
							auVar34._12_4_ = uVar29;
							auVar34 = divps(_local_128, auVar34);
							local_a0.x = auVar34._0_4_;
							local_a0.y = auVar34._4_4_;
							pUVar23 = (UnityEngine_Vector3_StaticFields)&local_a0;
						}
						uVar4 = (pUVar23.zeroVector).x;
						uVar9 = (pUVar23.zeroVector).y;
						fVar27 = this._scale;
						fVar28 = Random.Range(0.12, 0.3);
						pUVar17 = this._branchPoints;
						if ((typeof(ShifterThunderEffect)._2).cctor_finished_or_no_cctor == 0) {
							if (Il2CppMethodInitialized_0753e7b7 == false) goto label_0595d9f8;
	label_0595d63f: ;
							uVar12 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							if (Il2CppMethodInitialized_0753e7b7 != false) goto label_0595d63f;
	label_0595d9f8: ;
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar12 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar12 == 0) {
						}
						fVar36 = fVar28 * (float)uVar4 * 260.0 * fVar27 + (float)uVar2;
						fVar37 = fVar28 * (float)uVar9 * 260.0 * fVar27 + (float)uVar7;
						fVar38 = fVar26 * 260.0 * fVar27 * fVar28 + fVar35;
						fVar26 = fVar35 - fVar38;
						fVar27 = (float)uVar2 - fVar36;
						fVar28 = (float)uVar7 - fVar37;
						fVar26 = fVar26 * fVar26 + fVar28 * fVar28 + fVar27 * fVar27;
						if (fVar26 < 0.0) {
							local_a0.z = sqrtf(fVar26);
						}
						else {
							local_a0.z = SQRT(fVar26);
						}
						if (pUVar17 == null) goto label_0595dad4;
						iVar24 = (int)pUVar17.Length + -1;
						if (-1 < iVar24) {
							uVar22 = 0;
							local_48 = local_a0.z;
							fStack_44 = local_a0.z;
							do {
								fVar26 = (float)(int)uVar22 / (float)iVar24;
								UVar40 = Random.insideUnitSphere;
								fVar27 = sinf(fVar26 * 3.1415927);
								if ((uint)pUVar17.Length <= uVar22) goto label_0595dacf;
								auVar33 = ZEXT812(0x3f800000);
								if (fVar26 <= auVar33._0_4_) {
									auVar33._4_8_ = auVar33._4_8_;
									auVar33._0_4_ = fVar26;
								}
								fVar26 = (float)(-(uint)(0.0 <= fVar26) & auVar33._0_4_);
								local_b8 = UVar40.x;
								fStack_b4 = UVar40.y;
								pUVar17[(int)uVar22].x = fVar27 * local_b8 * local_48 * 0.045 + fVar26 * (fVar36 - (float)uVar2) + (float)uVar2;
								pUVar17[(int)uVar22].y = fVar27 * fStack_b4 * fStack_44 * 0.045 + fVar26 * (fVar37 - (float)uVar7) + (float)uVar7;
								pUVar17[(int)uVar22].z = UVar40.z * local_a0.z * 0.045 * fVar27 + fVar26 * (fVar38 - fVar35) + fVar35;
								uVar22 = uVar22 + 1;
							} while ((int)uVar22 <= iVar24);
						}
						pEVar13 = this._bolts;
						if (pEVar13 == null) goto label_0595dad4;
						if ((ulong)(uint)pEVar13.Length <= local_80 + lVar25) goto label_0595dacf;
						pEVar14 = pEVar13[(int)(local_80 + lVar25)];
						if (pEVar14 == null) goto label_0595dad4;
						pUVar17 = this._branchPoints;
						pUVar18 = pEVar14._core;
						if (pUVar18 == null) goto label_0595dad4;
						pUVar18.SetPositions(pUVar17);
						pUVar18 = pEVar14._glow;
						if (pUVar18 == null) goto label_0595dad4;
						pUVar18.SetPositions(pUVar17);
						pUVar18 = pEVar14._core;
						if (pUVar18 == null) goto label_0595dad4;
						pEVar19 = typeof(ShifterThunderEffect).static_fields;
						uVar5 = (pEVar19.CoreColor).r;
						uVar10 = (pEVar19.CoreColor).g;
						value_00.g = (float)uVar10;
						value_00.r = (float)uVar5;
						fVar35 = (pEVar19.CoreColor).b;
						uVar29 = local_58._0_4_;
						pUVar18.endColor = (Color)CONCAT88(CONCAT44(local_58._0_4_, fVar35), CONCAT44((float)uVar10, (float)uVar5));
						value_00.b = fVar35;
						value_00.a = (float)uVar29;
						pUVar18.startColor = value_00;
						pUVar18 = pEVar14._glow;
						if (pUVar18 == null) goto label_0595dad4;
						pEVar19 = typeof(ShifterThunderEffect).static_fields;
						uVar6 = (pEVar19.GlowColor).r;
						uVar11 = (pEVar19.GlowColor).g;
						value_01.g = (float)uVar11;
						value_01.r = (float)uVar6;
						fVar35 = (pEVar19.GlowColor).b;
						uVar29 = local_68._0_4_;
						pUVar18.endColor = (Color)CONCAT88(CONCAT44(local_68._0_4_, fVar35), CONCAT44((float)uVar11, (float)uVar6));
						value_01.b = fVar35;
						value_01.a = (float)uVar29;
						pUVar18.startColor = value_01;
						lVar25 = lVar25 + 1;
					} while (lVar25 != 4);
				}
				if (local_100 <= local_104) {
					local_100 = local_104;
				}
				lVar25 = local_88 + 1;
			} while (lVar25 != 4);
			pUVar20 = this._light;
			if (pUVar20 != null) {
				fVar26 = this._time / 1.4;
				fVar35 = 1.0;
				if (fVar26 <= 1.0) {
					fVar35 = fVar26;
				}
				fVar35 = (float)(~-(uint)(0.0 <= fVar26) & 0x3f800000 | (uint)(1.0 - fVar35) & -(uint)(0.0 <= fVar26));
				if (local_100 <= 0.25) {
					local_100 = 0.25;
				}
				pUVar20.intensity = local_100 * fVar35 * fVar35 * 8.0;
				pUVar20 = this._light;
				if (pUVar20 != null) {
					pUVar20.enabled = 0.0 < fVar35;
					return;
				}
			}
		}
	label_0595dad4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x585DC90", Offset = "0x585CC90", VA = "0x585DC90")]
	private static void Jag(Vector3 start, Vector3 end, Vector3[] points)
	{
		// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect$$Jag): clean
		uint uVar1;
		uint uVar2;
		int iVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 UVar9;
		float local_78;
		float fStack_74;
		float local_58;
		float fStack_54;
		float local_28;
		float fStack_24;

		fVar7 = start.z;
		if (Il2CppMethodInitialized_0753e7b7 == false) {
			Il2CppMethodInitialized_0753e7b7 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar4 = fVar7 - end.z;
		local_58 = start.x;
		fStack_54 = start.y;
		local_78 = end.x;
		fStack_74 = end.y;
		fVar4 = fVar4 * fVar4 +(fStack_54 - fStack_74) * (fStack_54 - fStack_74) + (local_58 - local_78) * (local_58 - local_78);
		if (fVar4 < 0.0) {
			fVar4 = sqrtf(fVar4);
		}
		else {
			fVar4 = SQRT(fVar4);
		}
		if (points == null) {
			throw new NullReferenceException();
		}
		iVar3 = (int)points.Length + -1;
		if (-1 < iVar3) {
			uVar2 = 0;
			do {
				fVar5 = (float)(int)uVar2 / (float)iVar3;
				UVar9 = Random.insideUnitSphere;
				fVar6 = sinf(fVar5 * 3.1415927);
				if ((uint)points.Length <= uVar2) {
					throw new IndexOutOfRangeException();
				}
				fVar8 = 1.0;
				if (fVar5 <= 1.0) {
					fVar8 = fVar5;
				}
				fVar8 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar8);
				local_28 = UVar9.x;
				fStack_24 = UVar9.y;
				points[(int)uVar2].x = fVar6 * local_28 * fVar4 * 0.045 + fVar8 * (local_78 - local_58) + local_58;
				points[(int)uVar2].y = fVar6 * fStack_24 * fVar4 * 0.045 + fVar8 * (fStack_74 - fStack_54) + fStack_54;
				points[(int)uVar2].z = UVar9.z * fVar4 * 0.045 * fVar6 + fVar8 * (end.z - fVar7) + fVar7;
				uVar2 = uVar2 + 1;
			} while ((int)uVar2 <= iVar3);
		}
		return;
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x585CC90", Offset = "0x585BC90", VA = "0x585CC90")]
	private static Material GetMaterial()
	{
		// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect$$GetMaterial): clean
		bool bVar2;
		int iVar3;
		Material pUVar4;
		Material __this;
		Texture __this_00;
		int y;
		float fVar5;
		Color color;

		pUVar4 = ShifterThunderEffect._material;
		bVar2 = ((Object)pUVar4 != null);
		if (bVar2) {
	label_0595cf6c: ;
			return ShifterThunderEffect._material;
		}
		pUVar4 = Resources.Load<Material>("Effects/Materials/ShifterThunderMat1");
		__this = new Material(pUVar4);
		if (__this != null) {
			__this.name = "Shifter thunder bolt";
			ShifterThunderEffect._material = __this;
			__this_00 = new Texture2D(1, 0x20, 4, false);
			if (__this_00 != null) {
				y = 0;
				__this_00.wrapMode = 1;
				__this_00.name = "Shifter thunder glow";
				iVar3 = __this_00.get_height();
				if (0 < iVar3) {
					do {
						iVar3 = __this_00.get_height();
						fVar5 = (float)y / ((float)iVar3 + -1.0);
						fVar5 = 1.0 - ABS(fVar5 + fVar5 + -1.0);
						color.a = (3.0 - (fVar5 + fVar5)) * fVar5 * fVar5;
						color.b = 1.0;
						color.r = 1.0;
						color.g = 1.0;
						__this_00.SetPixel(0, y, color);
						y = y + 1;
						iVar3 = __this_00.get_height();
					} while (y < iVar3);
				}
				__this_00.Apply(false, true);
				pUVar4 = ShifterThunderEffect._material;
				if (pUVar4 != null) {
					pUVar4.SetTexture("_BaseMap", __this_00);
					goto label_0595cf6c;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x585DFC0", Offset = "0x585CFC0", VA = "0x585DFC0")]
	public ShifterThunderEffect()
	{
		// Lifted from source/cpp/Effects/ShifterThunderEffect.c (Effects.ShifterThunderEffect$$.ctor): clean
		ShifterThunderEffect.Bolt[] pEVar1;
		Vector3[] pUVar2;

		pEVar1 = (ShifterThunderEffect.Bolt[])new ShifterThunderEffect.Bolt[0x10];
		this._bolts = pEVar1;
		pUVar2 = (Vector3[])new Vector3[0x12];
		this._mainPoints = pUVar2;
		pUVar2 = (Vector3[])new Vector3[8];
		this._branchPoints = pUVar2;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Effects/ShifterThunderEffect.c.

	// Effects.ShifterThunderEffect$$.cctor: clean
	static ShifterThunderEffect()
	{
		Effects_ShifterThunderEffect_StaticFields pEVar1;

		pEVar1 = typeof(ShifterThunderEffect).static_fields;
		(pEVar1.CoreColor).r = 1.0;
		(pEVar1.CoreColor).g = 0.98;
		(pEVar1.CoreColor).b = 0.9;
		(pEVar1.CoreColor).a = 1.0;
		pEVar1 = typeof(ShifterThunderEffect).static_fields;
		(pEVar1.GlowColor).r = 1.0;
		(pEVar1.GlowColor).g = 0.68;
		(pEVar1.GlowColor).b = 0.28;
		(pEVar1.GlowColor).a = 1.0;
		return;
	}
}
