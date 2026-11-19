// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanNapeChunkEffect
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanNapeChunkEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200072D")]
internal sealed class TitanNapeChunkEffect : MonoBehaviour
{
	[Token(Token = "0x40023E1")]
	public const float SwingSpeed = 15f;

	[Token(Token = "0x40023E2")]
	public const float BackwardSpeed = 10f;

	[Token(Token = "0x40023E3")]
	private const int MaxChunks = 8;

	[Token(Token = "0x40023E4")]
	private const float MaxSpinSpeed = 400f;

	[Token(Token = "0x40023E5")]
	private const float Lifetime = 5f;

	[Token(Token = "0x40023E6")]
	private const float DissolveDuration = 1.5f;

	[Token(Token = "0x40023E7")]
	private const float RestHeight = 0.15f;

	[Token(Token = "0x40023E8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3 NeckOffset;

	[Token(Token = "0x40023E9")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int Dissolve;

	[Token(Token = "0x40023EA")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int DissolveSeed;

	[Token(Token = "0x40023EB")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<TitanNapeChunkEffect> Pool;

	[Token(Token = "0x40023EC")]
	[FieldOffset(Offset = "0x20")]
	private static Material _material;

	[Token(Token = "0x40023ED")]
	[FieldOffset(Offset = "0x20")]
	private ParticleSystem _trail;

	[Token(Token = "0x40023EE")]
	[FieldOffset(Offset = "0x28")]
	private Renderer _renderer;

	[Token(Token = "0x40023EF")]
	[FieldOffset(Offset = "0x30")]
	private MaterialPropertyBlock _properties;

	[Token(Token = "0x40023F0")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 _velocity;

	[Token(Token = "0x40023F1")]
	[FieldOffset(Offset = "0x44")]
	private Vector3 _angularVelocity;

	[Token(Token = "0x40023F2")]
	[FieldOffset(Offset = "0x50")]
	private float _scale;

	[Token(Token = "0x40023F3")]
	[FieldOffset(Offset = "0x54")]
	private float _age;

	[Token(Token = "0x40023F4")]
	[FieldOffset(Offset = "0x58")]
	private bool _landed;

	[Token(Token = "0x60045B9")]
	[Address(RVA = "0x5B5E1A0", Offset = "0x5B5D1A0", VA = "0x5B5E1A0")]
	public static void Play(Transform neck, float scale, Vector3 velocity)
	{
		// Lifted from source/cpp/Characters/TitanNapeChunkEffect.c (Characters.TitanNapeChunkEffect$$Play): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<TitanNapeChunkEffect> pSVar3;
		object @object;
		Renderer __this;
		TitanNapeChunkEffect[] pCVar4;
		bool bVar5;
		Characters_TitanNapeChunkEffect___c_StaticFields pCVar6;
		Predicate<T> match;
		TitanNapeChunkEffect __this_00;
		GameObject pUVar7;
		Material value;
		ParticleSystem pUVar8;
		MeshRenderer pUVar9;
		MaterialPropertyBlock __this_01;

		pSVar3 = TitanNapeChunkEffect.Pool;
		if ((typeof(TitanNapeChunkEffect.c)._2).cctor_finished_or_no_cctor == 0) {
			pCVar6 = typeof(TitanNapeChunkEffect.c).static_fields;
			match = (Predicate<T>)pCVar6.__9__20_0;
		}
		else {
			pCVar6 = typeof(TitanNapeChunkEffect.c).static_fields;
			match = (Predicate<T>)pCVar6.__9__20_0;
		}
		if (match == null) {
			if (((typeof(TitanNapeChunkEffect.c))._2).cctor_finished_or_no_cctor == 0) {
				pCVar6 = typeof(TitanNapeChunkEffect.c).static_fields;
			}
			@object = (object)pCVar6.__9;
			match = new Predicate<TitanNapeChunkEffect>(@object, (intptr_t)MethodInfo_Characters_TitanNapeChunkEffect_c_Play_b__20_0);
			pCVar6 = typeof(TitanNapeChunkEffect.c).static_fields;
			pCVar6.__9__20_0 = (Predicate<TitanNapeChunkEffect>)match;
		}
		if (pSVar3 != null) {
			__this_00 = pSVar3.Find(match);
			bVar5 = ((Object)__this_00 == null);
			if (bVar5) {
				pSVar3 = TitanNapeChunkEffect.Pool;
				if (pSVar3 != null) {
					if (pSVar3._size < 8) {
						pUVar7 = BasicTitanComponentCache.LoadParticle("NapeChunkParticle");
						value = TitanNapeChunkEffect.GetMaterial(pUVar7);
						bVar5 = ((Object)value == null);
						if (!bVar5) {
							pUVar7 = Object.Instantiate<GameObject>((object)pUVar7);
							if ((pUVar7 != null) &&(__this_00 = pUVar7.AddComponent<TitanNapeChunkEffect>(), __this_00 != null)) {
								pUVar8 = __this_00.GetComponentInChildren<ParticleSystem>(true);
								__this_00._trail = pUVar8;
								pUVar9 = __this_00.GetComponentInChildren<MeshRenderer>(true);
								__this_00._renderer = (Renderer)pUVar9;
								__this = __this_00._renderer;
								if (__this != null) {
									__this.sharedMaterial = value;
									__this_01 = new MaterialPropertyBlock();
									__this_00._properties = __this_01;
									pSVar3 = TitanNapeChunkEffect.Pool;
									if (pSVar3 != null) {
										piVar1 = &pSVar3._version;
										*piVar1 = *piVar1 + 1;
										pCVar4 = pSVar3._items;
										if (pCVar4 != null) {
											uVar2 = pSVar3._size;
											if (uVar2 < (uint)pCVar4.Length) {
												pSVar3._size = uVar2 + 1;
												pCVar4[(int)uVar2] = __this_00;
											}
											else {
												pSVar3.AddWithResize((object)__this_00);
											}
											goto label_05c5e45e;
										}
									}
								}
							}
							goto label_05c5e5e8;
						}
					}
					return;
				}
			}
			else {
				if (__this_00 != null) {
	label_05c5e45e: ;
					__this_00.Initialize(neck, scale, velocity);
					return;
				}
			}
		}
	label_05c5e5e8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045BA")]
	[Address(RVA = "0x5B5E5F0", Offset = "0x5B5D5F0", VA = "0x5B5E5F0")]
	private static Material GetMaterial(GameObject prefab)
	{
		// Lifted from source/cpp/Characters/TitanNapeChunkEffect.c (Characters.TitanNapeChunkEffect$$GetMaterial): 20 lines keep C-only constructs
		Matrix4x4 pUVar1;
		bool bVar4;
		Object x;
		Object x_00;
		Object x_01;
		Material pUVar5;
		Material __this;
		Mesh __this_00;
		float fVar6;
		MeshFilter local_a0;
		ulong local_98;
		float local_90;
		ulong local_88;
		ulong uStack_80;
		ulong local_78;
		ulong uStack_70;
		ulong local_68;
		ulong uStack_60;
		ulong local_58;
		ulong uStack_50;
		Bounds local_48;

		local_a0 = null;
		local_98 = 0;
		pUVar5 = TitanNapeChunkEffect._material;
		bVar4 = ((Object)pUVar5 != null);
		if (bVar4) {
	label_05c5e70d: ;
			return TitanNapeChunkEffect._material;
		}
		x = (Object)BasicTitanComponentCache.LoadDissolveShader();
		if (prefab != null) {
			x_00 = (Object)prefab.GetComponentInChildren<MeshRenderer>(true);
			bVar4 = (x == null);
			if (bVar4) {
				return null;
			}
			bVar4 = (x_00 == null);
			if (bVar4) {
				return null;
			}
			if (x_00 != null) {
				bVar4 = x_00.TryGetComponent<MeshFilter>((object*)&local_a0);
				if (!bVar4) {
					return null;
				}
				if (local_a0 != null) {
					x_01 = (Object)local_a0.sharedMesh;
					bVar4 = (x_01 == null);
					if (bVar4) {
						return null;
					}
					pUVar5 = x_00.sharedMaterial;
					__this = new Material(pUVar5);
					if (__this != null) {
						__this.shader = (Shader)x;
						__this.name = "Nape chunk dissolve" ;
						__this.hideFlags = 0x20;
						TitanNapeChunkEffect._material = __this;
						pUVar5 = TitanNapeChunkEffect._material;
						if (pUVar5 != null) {
							pUVar5.SetFloat("_UseMeshPosition", 1.0);
							pUVar5 = TitanNapeChunkEffect._material;
							if (pUVar5 != null) {
								pUVar1 = &Matrix4x4.identityMatrix;
								local_88._0_4_ = pUVar1.m00;
								local_88._4_4_ = pUVar1.m10;
								uStack_80._0_4_ = (Matrix4x4.identityMatrix).m20;
								uStack_80._4_4_ = (Matrix4x4.identityMatrix).m30;
								local_78._0_4_ = (Matrix4x4.identityMatrix).m01;
								local_78._4_4_ = (Matrix4x4.identityMatrix).m11;
								uStack_70._0_4_ = (Matrix4x4.identityMatrix).m21;
								uStack_70._4_4_ = (Matrix4x4.identityMatrix).m31;
								local_68._0_4_ = (Matrix4x4.identityMatrix).m02;
								local_68._4_4_ = (Matrix4x4.identityMatrix).m12;
								uStack_60._0_4_ = (Matrix4x4.identityMatrix).m22;
								uStack_60._4_4_ = (Matrix4x4.identityMatrix).m32;
								local_58._0_4_ = (Matrix4x4.identityMatrix).m03;
								local_58._4_4_ = (Matrix4x4.identityMatrix).m13;
								uStack_50._0_4_ = (Matrix4x4.identityMatrix).m23;
								uStack_50._4_4_ = (Matrix4x4.identityMatrix).m33;
								pUVar5.SetMatrix("_MeshToDissolve", (Matrix4x4)pUVar1.fields);
								if (local_a0 != null) {
									pUVar5 = TitanNapeChunkEffect._material;
									__this_00 = local_a0.sharedMesh;
									if (__this_00 != null) {
										local_48 = __this_00.bounds;
										local_90 = local_48.m_Extents.z + local_48.m_Extents.z;
										local_98 = CONCAT44(local_48.m_Extents.y + local_48.m_Extents.y, local_48.m_Extents.x + local_48.m_Extents.x) ;
										fVar6 = (float)il2cpp_runtime_helper_0599adc0(&local_98, 0);
										if (pUVar5 != null) {
											if (fVar6 <= 0.001) {
												fVar6 = 0.001;
											}
											pUVar5.SetFloat("_DissolveScale", 8.0 / fVar6) ;
											goto label_05c5e70d;
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

	[Token(Token = "0x60045BB")]
	[Address(RVA = "0x5B5EA50", Offset = "0x5B5DA50", VA = "0x5B5EA50")]
	private void Initialize(Transform neck, float scale, Vector3 velocity)
	{
		// Lifted from source/cpp/Characters/TitanNapeChunkEffect.c (Characters.TitanNapeChunkEffect$$Initialize): clean
		uint uVar1;
		uint uVar2;
		uint nameID;
		MaterialPropertyBlock __this_00;
		ParticleSystem pUVar4;
		Transform pUVar5;
		GameObject __this_01;
		float value;
		Quaternion rotation;
		Vector3 UVar6;

		pUVar5 = this.transform;
		if (neck != null) {
			UVar6 = neck.TransformPoint((Vector3)(TitanNapeChunkEffect.NeckOffset));
			rotation = neck.rotation;
			if (pUVar5 != null) {
				pUVar5.SetPositionAndRotation(UVar6, rotation);
				pUVar5 = this.transform;
				if (pUVar5 != null) {
					UVar6.z = (Vector3.oneVector).z * scale;
					uVar1 = (Vector3.oneVector).x;
					uVar2 = (Vector3.oneVector).y;
					UVar6.x = scale * (float)uVar1;
					UVar6.y = scale * (float)uVar2;
					pUVar5.localScale = UVar6;
					this._scale = scale;
					this._velocity.x = velocity.x;
					this._velocity.y = velocity.y;
					this._velocity.z = velocity.z;
					UVar6 = Random.onUnitSphere;
					this._angularVelocity.x = UVar6.x * 400.0;
					this._angularVelocity.y = UVar6.y * 400.0;
					this._angularVelocity.z = UVar6.z * 400.0;
					this._age = 0.0;
					this._landed = false;
					__this_00 = this._properties;
					nameID = TitanNapeChunkEffect.DissolveSeed;
					value = Random.Range(0.0, 100.0);
					if (__this_00 != null) {
						__this_00.SetFloat(nameID, value);
						this.SetDissolve(0.0);
						__this_01 = this.gameObject;
						if (__this_01 != null) {
							__this_01.SetActive(true);
							pUVar4 = this._trail;
							if (pUVar4 != null) {
								pUVar4.Clear(true);
								pUVar4 = this._trail;
								if (pUVar4 != null) {
									pUVar4.Play(true);
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045BC")]
	[Address(RVA = "0x5B5ED00", Offset = "0x5B5DD00", VA = "0x5B5ED00")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Characters/TitanNapeChunkEffect.c (Characters.TitanNapeChunkEffect$$LateUpdate): clean
		GameObject __this_00;
		float deltaTime;
		float fVar1;

		deltaTime = Time.deltaTime;
		fVar1 = this._age + deltaTime;
		this._age = fVar1;
		if (5.0 <= fVar1) {
			__this_00 = this.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(false);
			return;
		}
		if (0.0 < fVar1 + -3.5) {
			this.SetDissolve((fVar1 + -3.5) / 1.5);
		}
		if (this._landed == false) {
			this.UpdateFlight(deltaTime);
			return;
		}
		return;
	}

	[Token(Token = "0x60045BD")]
	[Address(RVA = "0x5B5EC60", Offset = "0x5B5DC60", VA = "0x5B5EC60")]
	private void SetDissolve(float progress)
	{
		// Lifted from source/cpp/Characters/TitanNapeChunkEffect.c (Characters.TitanNapeChunkEffect$$SetDissolve): clean
		MaterialPropertyBlock __this_00;
		Renderer __this_01;

		__this_00 = this._properties;
		if (__this_00 != null) {
			__this_00.SetFloat(TitanNapeChunkEffect.Dissolve, progress);
			__this_01 = this._renderer;
			if (__this_01 != null) {
				__this_01.SetPropertyBlock(this._properties);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045BE")]
	[Address(RVA = "0x5B5EDA0", Offset = "0x5B5DDA0", VA = "0x5B5EDA0")]
	private void UpdateFlight(float deltaTime)
	{
		// Lifted from source/cpp/Characters/TitanNapeChunkEffect.c (Characters.TitanNapeChunkEffect$$UpdateFlight): 13 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		ParticleSystem __this_00;
		bool bVar5;
		Transform pUVar6;
		Transform __this_01;
		float fVar7;
		float fVar8;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		Vector3 UVar13;
		Vector3 UVar14;
		Vector3 value;
		Quaternion UVar15;
		Quaternion UVar16;
		Vector3 end;
		float fStack_b8;
		float fStack_b4;
		ulong uStack_98;
		float fStack_88;
		float fStack_84;
		Vector3 UStack_78;
		ulong uStack_68;
		byte[] auStack_58 = new byte[16];
		RaycastHit UStack_48;

		UStack_48.m_UV.x = 0.0;
		UStack_48.m_UV.y = 0.0;
		UStack_48.m_Collider.m_Data = (EntityId)0x0;
		UStack_48.m_Normal.y = 0.0;
		UStack_48.m_Normal.z = 0.0;
		UStack_48.m_FaceID = 0;
		UStack_48.m_Distance = 0.0;
		UStack_48.m_Point.x = 0.0;
		UStack_48.m_Point.y = 0.0;
		UStack_48.m_Point.z = 0.0;
		UStack_48.m_Normal.x = 0.0;
		pUVar6 = this.transform;
		if (pUVar6 != null) {
			UVar13 = pUVar6.position;
			uVar1 = this._velocity.x;
			uVar3 = this._velocity.y;
			fVar12 = this._velocity.z;
			auStack_58._8_4_ = extraout_XMM0_Dc;
			auStack_58._0_8_ = UVar13._0_8_;
			auStack_58._12_4_ = extraout_XMM0_Dd;
			UVar14 = Physics.gravity;
			fVar11 = deltaTime * 0.5 * deltaTime;
			end.z = fVar12 * deltaTime + UVar13.z + UVar14.z * fVar11;
			fVar7 = (float)uVar1 * deltaTime + UVar13.x + fVar11 * UVar14.x;
			fVar11 = (float)uVar3 * deltaTime + UVar13.y + fVar11 * UVar14.y;
			uStack_68._0_4_ = this._velocity.x;
			uStack_68._4_4_ = this._velocity.y;
			fVar12 = this._velocity.z;
			UVar14 = Physics.gravity;
			this._velocity.x = UVar14.x * deltaTime + (float)uStack_68;
			this._velocity.y = UVar14.y * deltaTime + uStack_68._4_4_;
			this._velocity.z = UVar14.z * deltaTime + fVar12;
			UVar13.x = (float)auStack_58._0_4_;
			UVar13.y = (float)auStack_58._4_4_;
			end.x = fVar7;
			end.y = fVar11;
			bVar5 = Physics.Linecast(UVar13, end, ref UStack_48, TitanLimbFallEffect.GroundMask, 1) ;
			if (bVar5) {
				this._landed = true;
				pUVar6 = this.transform;
				UVar13 = UStack_48.point;
				UVar14 = UStack_48.normal;
				if (pUVar6 != null) {
					fVar12 = this._scale * 0.15;
					uStack_98._0_4_ = UVar13.x;
					uStack_98._4_4_ = UVar13.y;
					value.y = uStack_98._4_4_ + UVar14.y * fVar12;
					value.x = (float)uStack_98 + UVar14.x * fVar12;
					value.z = UVar13.z + UVar14.z * fVar12;
					pUVar6.position = value;
					__this_00 = this._trail;
					if (__this_00 != null) {
						__this_00.Stop(true, 1);
						return;
					}
				}
			}
			else {
				pUVar6 = this.transform;
				uVar2 = this._angularVelocity.x;
				uVar4 = this._angularVelocity.y;
				UStack_78.z = deltaTime * this._angularVelocity.z * 0.017453292;
				UStack_78.y = (float)uVar4 * deltaTime * 0.017453292;
				UStack_78.x = (float)uVar2 * deltaTime * 0.017453292;
				UVar15 = Quaternion.Internal_FromEulerRad(ref UStack_78);
				__this_01 = this.transform;
				if (__this_01 != null) {
					UVar16 = __this_01.rotation;
					fVar9 = UVar16.z;
					fVar10 = UVar16.w;
					fVar12 = UVar16.x;
					fVar8 = UVar16.y;
					if (pUVar6 != null) {
						fStack_b8 = UVar15.z;
						fStack_b4 = UVar15.w;
						fStack_88 = UVar15.x;
						fStack_84 = UVar15.y;
						UVar15.z = (fStack_b8 * fVar10 + fStack_b4 * fVar9 + fVar8 * fStack_88) - fVar12 * fStack_84;
						UVar15.w =((fStack_b4 * fVar10 - fStack_88 * fVar12) - fStack_84 * fVar8) - fStack_b8 * fVar9;
						UVar15.x = (fStack_b4 * fVar12 + fVar10 * fStack_88 + fStack_84 * fVar9) - fVar8 * fStack_b8;
						UVar15.y = (fStack_b4 * fVar8 + fVar10 * fStack_84 + fStack_b8 * fVar12) - fVar9 * fStack_88;
						UVar14.z = end.z;
						UVar14.x = fVar7;
						UVar14.y = fVar11;
						pUVar6.SetPositionAndRotation(UVar14, UVar15);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045BF")]
	[Address(RVA = "0x5B5F120", Offset = "0x5B5E120", VA = "0x5B5F120")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Characters/TitanNapeChunkEffect.c (Characters.TitanNapeChunkEffect$$OnDestroy): clean
		uint uVar1;
		List<TitanNapeChunkEffect> __this_00;

		if (Il2CppMethodInitialized_07547888 == false) {
			Il2CppMethodInitialized_07547888 = true;
			uVar1 = (typeof(TitanNapeChunkEffect)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanNapeChunkEffect)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = TitanNapeChunkEffect.Pool;
		}
		else {
			__this_00 = *(List<TitanNapeChunkEffect>*)((long)(typeof(TitanNapeChunkEffect)).static_fields + 0x18);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove((object)this);
		return;
	}

	[Token(Token = "0x60045C0")]
	[Address(RVA = "0x5B5F1C0", Offset = "0x5B5E1C0", VA = "0x5B5F1C0")]
	public TitanNapeChunkEffect()
	{
		// Lifted from source/cpp/Characters/TitanNapeChunkEffect.c (Characters.TitanNapeChunkEffect$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/TitanNapeChunkEffect.c.

	// Characters.TitanNapeChunkEffect$$.cctor: 1 lines keep C-only constructs
	static TitanNapeChunkEffect()
	{
		Characters_TitanNapeChunkEffect_StaticFields pCVar1;
		int iVar2;
		List<TitanNapeChunkEffect> __this;

		if (Il2CppMethodInitialized_07547889 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<TitanNapeChunkEffect>)) ;
			Il2CppMethodInitialized_07547889 = true;
		}
		pCVar1 = typeof(TitanNapeChunkEffect).static_fields;
		(pCVar1.NeckOffset).x = 0.0;
		(pCVar1.NeckOffset).y = 0.0357;
		(pCVar1.NeckOffset).z = -0.1214;
		iVar2 = Shader.PropertyToID("_Dissolve");
		TitanNapeChunkEffect.Dissolve = iVar2;
		iVar2 = Shader.PropertyToID("_DissolveSeed");
		TitanNapeChunkEffect.DissolveSeed = iVar2;
		__this = new List<TitanNapeChunkEffect>();
		pCVar1 = typeof(TitanNapeChunkEffect).static_fields;
		pCVar1.Pool = __this;
		return;
	}

	// Characters.TitanNapeChunkEffect.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new TitanNapeChunkEffect.c();
		TitanNapeChunkEffect.c.__9 =(TitanNapeChunkEffect.c)__this;
		return;
	}

	// Characters.TitanNapeChunkEffect.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Characters.TitanNapeChunkEffect.<>c$$<Play>b__20_0: clean
	private bool c__Play_b__20_0(TitanNapeChunkEffect chunk)
	{
		bool bVar1;
		GameObject __this_00;

		if (chunk != null) {
			__this_00 = chunk.gameObject;
			if (__this_00 != null) {
				bVar1 = __this_00.activeSelf;
				return !bVar1;
			}
		}
		throw new NullReferenceException();
	}
}
