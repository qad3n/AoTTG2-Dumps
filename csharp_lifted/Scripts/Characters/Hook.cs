// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Hook
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/Hook.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Hook.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006AA")]
internal class Hook : MonoBehaviour
{
	[Token(Token = "0x4001E09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly RaycastHit[] _raycastHits;

	[Token(Token = "0x4001E0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public HookState State;

	[Token(Token = "0x4001E0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Transform Anchor;

	[Token(Token = "0x4001E0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public BaseCharacter HookCharacter;

	[Token(Token = "0x4001E0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Transform HookParent;

	[Token(Token = "0x4001E0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected bool _hasHookParent;

	[Token(Token = "0x4001E0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public LineRenderer _renderer;

	[Token(Token = "0x4001E10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public bool HasOffset;

	[Token(Token = "0x4001E11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	protected bool _left;

	[Token(Token = "0x4001E12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Human _owner;

	[Token(Token = "0x4001E13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected int _id;

	[Token(Token = "0x4001E14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected List<Vector3> _nodes;

	[Token(Token = "0x4001E15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Vector3 _baseVelocity;

	[Token(Token = "0x4001E16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	protected Vector3 _relativeVelocity;

	[Token(Token = "0x4001E17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected Vector3 _hookPosition;

	[Token(Token = "0x4001E18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	protected Vector3 _lastWorldHookPosition;

	[Token(Token = "0x4001E19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	protected float _currentLiveTime;

	[Token(Token = "0x4001E1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected ParticleSystem _particles;

	[Token(Token = "0x4001E1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected Material _defaultMaterial;

	[Token(Token = "0x4001E1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected GameObject _endSprite;

	[Token(Token = "0x4001E1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static LayerMask HookMask;

	[Token(Token = "0x4001E1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected float _tiling;

	[Token(Token = "0x4001E1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	protected float _lastLength;

	[Token(Token = "0x4001E20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected float _maxLiveTime;

	[Token(Token = "0x600407D")]
	[Address(RVA = "0x5AE9D70", Offset = "0x5AE8D70", VA = "0x5AE9D70")]
	public static Hook CreateHook(Human owner, bool left, int id, float maxLiveTime, bool gun = false)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$CreateHook): clean
		HumanComponentCache pCVar1;
		GameObject __this;
		Transform pUVar2;
		Transform p;
		Hook pCVar3;

		__this = new GameObject();
		if (__this != null) {
			pUVar2 = __this.transform;
			if (owner != null) {
				p = owner.transform;
				if (pUVar2 != null) {
					pUVar2.SetParent(p);
					pCVar3 = __this.AddComponent<Hook>();
					if (pCVar3 != null) {
						pCVar3._left = left;
						pCVar3._owner = owner;
						pCVar3._maxLiveTime = maxLiveTime;
						pCVar3._id = id;
						pCVar1 = owner.HumanCache;
						if (left) {
							if (gun) {
								if (pCVar1 == null) goto label_05be9ec2;
								pUVar2 = pCVar1.HookLeftAnchorGun;
							}
							else {
								if (pCVar1 == null) goto label_05be9ec2;
								pUVar2 = pCVar1.HookLeftAnchorDefault;
							}
						}
						else if (gun) {
							if (pCVar1 == null) goto label_05be9ec2;
							pUVar2 = pCVar1.HookRightAnchorGun;
						}
						else {
							if (pCVar1 == null) goto label_05be9ec2;
							pUVar2 = pCVar1.HookRightAnchorDefault;
						}
						pCVar3.Anchor = pUVar2;
						return pCVar3;
					}
				}
			}
		}
	label_05be9ec2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600407E")]
	[Address(RVA = "0x5AE9ED0", Offset = "0x5AE8ED0", VA = "0x5AE9ED0")]
	protected void Awake()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$Awake): 7 lines keep C-only constructs
		LineRenderer* targetAddress;
		Material* targetAddress_00;
		String path;
		Renderer __this_00;
		GameObject pUVar1;
		LineRenderer pUVar2;
		Material pUVar3;
		ParticleSystem pUVar4;
		Transform pUVar5;

		if (Il2CppMethodInitialized_075475ee == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem) ;
			Il2CppMethodInitialized_075475ee = true;
		}
		pUVar1 = this.gameObject;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.AddComponent<LineRenderer>();
			targetAddress = &this._renderer;
			this._renderer = pUVar2;
			path = ResourcePaths.Characters;
			pUVar3 = ResourceManager.InstantiateAsset<Material>(path, "Human/Particles/Materials/HookMat", true, false);
			targetAddress_00 = &this._defaultMaterial;
			this._defaultMaterial = pUVar3;
			__this_00 = (Renderer)this._renderer;
			if (__this_00 != null) {
				__this_00.material = *targetAddress_00;
				pUVar2 = *targetAddress;
				if (pUVar2 != null) {
					pUVar2.positionCount = 0;
					pUVar1 = ResourceManager.InstantiateAsset<GameObject>(ResourcePaths.Characters, "Human/Particles/Prefabs/HookParticle", true, false);
					if (pUVar1 != null) {
						pUVar4 = pUVar1.GetComponent<ParticleSystem>();
						this._particles = pUVar4;
						pUVar4 = this._particles;
						if (pUVar4 != null) {
							pUVar5 = pUVar4.transform ;
							if (pUVar5 != null) {
								pUVar5 = pUVar5.Find("HookEnd");
								if (pUVar5 != null) {
									pUVar1 = pUVar5.gameObject;
									this._endSprite = pUVar1;
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

	[Token(Token = "0x600407F")]
	[Address(RVA = "0x5AEA110", Offset = "0x5AE9110", VA = "0x5AEA110")]
	public void SetSkin(float tiling)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$SetSkin): clean
		this._tiling = tiling;
		return;
	}

	[Token(Token = "0x6004080")]
	[Address(RVA = "0x5AEA120", Offset = "0x5AE9120", VA = "0x5AEA120")]
	private void UpdateSkin()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$UpdateSkin): 4 lines keep C-only constructs
		float pfVar1;
		Transform __this_00;
		Renderer __this_01;
		Vector2 value;
		Material __this_02;
		float fVar2;
		Vector3 UVar3;
		Vector3 UVar4;
		float local_38;
		float fStack_34;

		if (this._tiling <= 0.0) {
			return;
		}
		UVar3 = this.GetHookPosition();
		__this_00 = this.Anchor;
		if (__this_00 != null) {
			UVar4 = __this_00.position;
			local_38 = UVar3.x;
			fStack_34 = UVar3.y;
			fStack_34 = fStack_34 - UVar4.y;
			fVar2 = UVar3.z - UVar4.z;
			local_38 = local_38 - UVar4.x;
			fVar2 = fStack_34 * fStack_34 + local_38 * local_38 + fVar2 * fVar2;
			if (fVar2 < 0.0) {
				fVar2 = sqrtf(fVar2);
				pfVar1 = &this._lastLength;
				if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
					return;
				}
			}
			else {
				fVar2 = SQRT(fVar2);
				pfVar1 = &this._lastLength;
				if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
					return;
				}
			}
			this._lastLength = fVar2;
			__this_01 = (Renderer)this._renderer;
			if ((__this_01 != null) &&(__this_02 = __this_01.material, __this_02 != null)) {
				value.y = 1.0;
				value.x = fVar2 * this._tiling;
				__this_02.mainTextureScale = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004081")]
	[Address(RVA = "0x5AEA330", Offset = "0x5AE9330", VA = "0x5AEA330")]
	public void OnSetHookState(int state, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$OnSetHookState): 1 lines keep C-only constructs
		uint uVar1;
		Human pCVar2;
		BaseComponentCache pUVar3;
		PhotonView pPVar4;
		SoundSettings pSVar5;
		BoolSetting pSVar6;
		String pSVar7;
		GameObject __this_00;
		PhotonMessageInfo PVar8;
		PhotonMessageInfo PStack_30;

		pCVar2 = this._owner;
		if (((pCVar2 == null) ||(pUVar3 = pCVar2.Cache, pUVar3 == null)) ||(pPVar4 = pUVar3.PhotonView, pPVar4 == null)) {
	label_05bea4e9: ;
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar4._Owner_k__BackingField) {
			this.State = state;
			this._currentLiveTime = 0.0;
			if (state - 3U < 2) {
				pSVar5 = SettingsManager.SoundSettings;
				if ((pSVar5 == null) ||(pSVar6 = pSVar5.HookRetractEffect, pSVar6 == null)) goto label_05bea4e9;
				if (pSVar6._value != false) {
					uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
					if (this._left == false) {
						if (uVar1 == 0) {
						}
						pSVar7 = HumanSounds.HookRetractRight;
						uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (uVar1 == 0) {
						}
						pSVar7 = HumanSounds.HookRetractLeft;
						uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					PStack_30 = Util.CreateLocalPhotonInfo();
					PVar8.Sender = PStack_30.Sender;
					PVar8.timeInt = PStack_30.timeInt;
					PVar8._4_4_ = PStack_30._4_4_;
					PVar8.photonView = PStack_30.photonView;
					pCVar2.PlaySoundRPC(pSVar7, PVar8);
				}
			}
			__this_00 = this._endSprite;
			if (__this_00 == null) goto label_05bea4e9;
			__this_00.SetActive(false);
		}
		return;
	}

	[Token(Token = "0x6004082")]
	[Address(RVA = "0x5AEA4F0", Offset = "0x5AE94F0", VA = "0x5AEA4F0")]
	public void SetHookStateLocal(int state)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$SetHookStateLocal): clean
		GameObject __this_00;

		if (this.State == 0) {
			return;
		}
		this.State = state;
		this._currentLiveTime = 0.0;
		__this_00 = this._endSprite;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(false);
		return;
	}

	[Token(Token = "0x6004083")]
	[Address(RVA = "0x5AEA530", Offset = "0x5AE9530", VA = "0x5AEA530")]
	public void OnSetHooking(Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$OnSetHooking): 31 lines keep C-only constructs
		Vector3 pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar5;
		uint uVar6;
		ulong uVar4;
		int iVar7;
		uint uVar8;
		Human pCVar9;
		BaseComponentCache pUVar10;
		PhotonView pPVar11;
		List<Vector3> __this_00;
		Vector3[] pUVar12;
		LineRenderer __this_01;
		SoundSettings pSVar13;
		BoolSetting pSVar14;
		String pSVar15;
		ParticleSystem pUVar16;
		GameObject __this_02;
		byte[] auVar17 = new byte[16];
		Vector3 item;
		PhotonMessageInfo PVar18;
		float fVar19;
		Transform pUVar20;
		UnityEngine_Vector3_StaticFields pUVar21;
		float fVar23;
		uint extraout_XMM0_Db;
		uint uVar24;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar25;
		byte[] auVar26 = new byte[16];
		Vector3 UVar27;
		PhotonMessageInfo PStack_50;
		byte[] auStack_38 = new byte[24];

		fVar25 = baseVelocity.x;
		fVar23 = baseVelocity.y;
		if (g_data_075475f0 == false) {
			auStack_38._8_4_ = in_XMM0_Dc;
			auStack_38._0_8_ = baseVelocity._0_8_;
			auStack_38._12_4_ = in_XMM0_Dd;
			g_data_075475f0 = true;
			fVar25 = (float)auStack_38._0_4_;
			fVar23 = (float)auStack_38._4_4_;
		}
		pCVar9 = this._owner;
		if (((pCVar9 == null) ||(pUVar10 = pCVar9.Cache, pUVar10 == null)) ||(pPVar11 = pUVar10.PhotonView, pPVar11 == null)) goto label_05beaa6f;
		if (info.Sender != pPVar11._Owner_k__BackingField) {
			return;
		}
		this.State = 1;
		this._baseVelocity.x = fVar25;
		this._baseVelocity.y = fVar23;
		this._baseVelocity.z = baseVelocity.z;
		this._relativeVelocity.x = relativeVelocity.x;
		this._relativeVelocity.y = relativeVelocity.y;
		this._relativeVelocity.z = relativeVelocity.z;
		pUVar20 = this.Anchor;
		if (pUVar20 == null) goto label_05beaa6f;
		UVar27 = pUVar20.position;
		this._hookPosition.x = UVar27.x;
		this._hookPosition.y = UVar27.y;
		this._hookPosition.z = UVar27.z;
		this._hasHookParent = false;
		__this_00 = this._nodes;
		if (__this_00 == null) goto label_05beaa6f;
		iVar7 = __this_00._version;
		__this_00._version = iVar7 + 1;
		__this_00._size = 0;
		this._currentLiveTime = 0.0;
		pUVar1 = &this._hookPosition;
		fVar23 = pUVar1.x;
		fVar19 = pUVar1.y;
		fVar25 = this._hookPosition.z;
		item = pUVar1.fields;
		__this_00._version = iVar7 + 2;
		pUVar12 = __this_00._items;
		if (pUVar12 == null) goto label_05beaa6f;
		if ((int)pUVar12.Length == 0) {
			__this_00.AddWithResize((Vector3)item);
			__this_01 = this._renderer;
		}
		else {
			__this_00._size = 1;
			pUVar12[0].x = fVar23;
			pUVar12[0].y = fVar19;
			pUVar12[0].z = fVar25;
			__this_01 = this._renderer;
		}
		if (__this_01 == null) goto label_05beaa6f;
		__this_01.endWidth = 0.1;
		__this_01.startWidth = 0.1;
		pSVar13 = SettingsManager.SoundSettings;
		if ((pSVar13 == null) ||(pSVar14 = pSVar13.OldHookEffect, pSVar14 == null)) goto label_05beaa6f;
		pCVar9 = this._owner;
		uVar8 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		if (pSVar14._value == false) {
			if (uVar8 == 0) {
			}
			pSVar15 = HumanSounds.HookLaunch;
			uVar8 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (uVar8 == 0) {
			}
			pSVar15 = HumanSounds.OldHookLaunch;
			uVar8 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		if (uVar8 == 0) {
		}
		PStack_50 = Util.CreateLocalPhotonInfo();
		if (pCVar9 == null) goto label_05beaa6f;
		PVar18.Sender = PStack_50.Sender;
		PVar18.timeInt = PStack_50.timeInt;
		PVar18._4_4_ = PStack_50._4_4_;
		PVar18.photonView = PStack_50.photonView;
		pCVar9.PlaySoundRPC(pSVar15, PVar18);
		pUVar16 = this._particles;
		if (pUVar16 == null) goto label_05beaa6f;
		pUVar20 = pUVar16.transform;
		UVar27 = this.GetHookPosition();
		if (pUVar20 == null) goto label_05beaa6f;
		pUVar20.position = UVar27;
		pUVar16 = this._particles;
		if (pUVar16 == null) goto label_05beaa6f;
		pUVar20 = pUVar16.transform;
		uVar2 = this._baseVelocity.x;
		uVar5 = this._baseVelocity.y;
		uVar3 = this._relativeVelocity.x;
		uVar6 = this._relativeVelocity.y;
		fVar25 = this._baseVelocity.z * 50.0 + this._relativeVelocity.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			PStack_50.timeInt = 0;
			PStack_50._4_4_ = 0;
		}
		else {
			PStack_50.timeInt = 0;
			PStack_50._4_4_ = 0;
		}
		PStack_50.timeInt = 0;
		PStack_50._4_4_ = 0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			PStack_50.timeInt = 0;
			PStack_50._4_4_ = 0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar26._0_4_ = (float)uVar2 * 50.0 + (float)uVar3;
		auVar26._4_4_ = (float)uVar5 * 50.0 + (float)uVar6;
		auVar26._8_8_ = 0;
		uVar24 = 0;
		fVar23 = fVar25 * fVar25 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
		if (fVar23 < 0.0) {
			fVar23 = sqrtf(fVar23);
			uVar24 = extraout_XMM0_Db;
			if (1e-05 < fVar23) goto label_05bea91a;
	label_05bea8e5: ;
			pUVar21 = typeof(Vector3).static_fields;
			fVar25 = (pUVar21.zeroVector).z;
		}
		else {
			fVar23 = SQRT(fVar23);
			if (fVar23 <= 1e-05) goto label_05bea8e5;
	label_05bea91a: ;
			fVar25 = fVar25 / fVar23;
			auVar17._4_4_ = fVar23;
			auVar17._0_4_ = fVar23;
			auVar17._8_4_ = uVar24;
			auVar17._12_4_ = uVar24;
			auVar26 = divps(auVar26, auVar17);
			PStack_50.timeInt = auVar26._0_4_;
			PStack_50._4_4_ = auVar26._4_4_;
			pUVar21 = (UnityEngine_Vector3_StaticFields)&PStack_50;
		}
		if (pUVar20 != null) {
			uVar4._0_4_ = (pUVar21.zeroVector).x;
			uVar4._4_4_ = (pUVar21.zeroVector).y;
			UVar27.z = -fVar25;
			UVar27.x = (float)(int)(uVar4 ^ 0x8000000080000000);
			UVar27.y = (float)(int)((uVar4 ^ 0x8000000080000000) >> 0x20);
			pUVar20.forward = UVar27;
			pUVar16 = this._particles;
			if (pUVar16 != null) {
				pUVar16.Stop();
				pCVar9 = this._owner;
				if (pCVar9 != null) {
					if (pCVar9.EffectsEnabled != false) {
						pUVar16 = this._particles;
						if (pUVar16 == null) goto label_05beaa6f;
						pUVar16.Play();
					}
					__this_02 = this._endSprite;
					if (__this_02 != null) {
						__this_02.SetActive(false);
						return;
					}
				}
			}
		}
	label_05beaa6f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004084")]
	[Address(RVA = "0x5AEAA80", Offset = "0x5AE9A80", VA = "0x5AEAA80")]
	public void OnSetHooked(Vector3 position, int photonViewId, int objectId, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$OnSetHooked): 2 lines keep C-only constructs
		sbyte cVar1;
		Human pCVar2;
		BaseComponentCache pUVar3;
		Dictionary<int, object> pSVar4;
		bool bVar5;
		PhotonView pPVar6;
		GameObject pUVar7;
		Transform transform;
		MapObject pMVar8;
		uint in_register_00000014;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT44(in_register_00000014, objectId);
		pCVar2 = this._owner;
		if (((pCVar2 == null) ||(pUVar3 = pCVar2.Cache, pUVar3 == null)) ||(pPVar6 = pUVar3.PhotonView, pPVar6 == null)) goto label_05beac68;
		if (info.Sender != pPVar6._Owner_k__BackingField) {
			return;
		}
		if (photonViewId == -1) {
			transform = null;
		}
		else {
			pPVar6 = PhotonView.Find(photonViewId);
			if ((pPVar6 == null) ||(pUVar7 = pPVar6.gameObject, pUVar7 == null)) goto label_05beac68;
			transform = pUVar7.transform;
		}
		if (objectId != -1) {
			if (((typeof(MapManager))._2).cctor_finished_or_no_cctor == 0) {
				cVar1 = MapManager.MapLoaded;
			}
			else {
				cVar1 = *(sbyte)(typeof(MapManager)).static_fields;
			}
			if (cVar1 != false) {
				if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
				}
				pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar4 == null) {
	label_05beac68: ;
					throw new NullReferenceException();
				}
				bVar5 = pSVar4.ContainsKey(objectId);
				if (bVar5) {
					pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (((pSVar4 == null) ||(pMVar8 = pSVar4.get_Item(objectId), pMVar8 == null)) ||(pUVar7 = pMVar8.GameObject, pUVar7 == null)) goto label_05beac68;
					transform = pUVar7.transform;
				}
			}
		}
		this.OnSetHooked(position, transform);
		return;
	}

	[Token(Token = "0x6004085")]
	[Address(RVA = "0x5AEAC70", Offset = "0x5AE9C70", VA = "0x5AEAC70")]
	private void OnSetHooked(Vector3 position, Transform transform)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$OnSetHooked): 13 lines keep C-only constructs
		Transform* targetAddress;
		BaseCharacter* targetAddress_00;
		float fVar1;
		byte bVar2;
		int iVar3;
		uint uVar4;
		InGameSet pSVar5;
		InGameMiscSettings pSVar6;
		IntSetting pSVar7;
		Human pCVar8;
		InGameMenu __this_00;
		LineRenderer __this_01;
		SoundSettings pSVar9;
		BoolSetting pSVar10;
		BaseCharacter pCVar11;
		String pSVar12;
		GameObject __this_02;
		PhotonMessageInfo PVar13;
		bool bVar14;
		int score;
		Transform __this_03;
		BaseCharacter pCVar15;
		Vector3 UVar16;
		PhotonMessageInfo local_48;

		this.State = 2;
		this._hookPosition.x = position.x;
		this._hookPosition.y = position.y;
		this._hookPosition.z = position.z;
		targetAddress = &this.HookParent;
		this.HookParent = null;
		targetAddress_00 = &this.HookCharacter;
		this.HookCharacter = null;
		this._hasHookParent = false;
		bVar14 = ((Object)transform != null);
		if (bVar14) {
			*targetAddress = transform;
			if (transform == null) goto label_05beb259;
			UVar16 = transform.InverseTransformPoint(position);
			this._hookPosition.x = UVar16.x;
			this._hookPosition.y = UVar16.y;
			this._hookPosition.z = UVar16.z;
			this._hasHookParent = true;
			this._lastWorldHookPosition.x = position.x;
			this._lastWorldHookPosition.y = position.y;
			this._lastWorldHookPosition.z = position.z;
			__this_03 = transform.root;
			if (__this_03 == null) goto label_05beb259;
			pCVar15 = __this_03.GetComponent<BaseCharacter>();
			*targetAddress_00 = pCVar15;
			pSVar5 = SettingsManager.InGameCurrent;
			if (((pSVar5 == null) ||(pSVar6 = pSVar5.Misc, pSVar6 == null)) ||(pSVar7 = pSVar6.HookDamageMultiplier, pSVar7 == null)) goto label_05beb259;
			if (0 < pSVar7._value) {
				pCVar15 = *targetAddress_00;
				bVar14 = ((Object)pCVar15 != null);
				if ((bVar14) && (pCVar15 = *targetAddress_00, pCVar15 != null)) {
					bVar2 = (typeof(Human)._2).typeHierarchyDepth;
					if ((bVar2 <= (pCVar15.klass._2).typeHierarchyDepth) &&((pCVar15.klass._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(Human))) {
						pCVar8 = this._owner;
						bVar14 = TeamInfo.SameTeam(pCVar15, (BaseCharacter)pCVar8);
						if (!bVar14) {
							pCVar8 = this._owner;
							if (pCVar8 == null) goto label_05beb259;
							bVar14 = pCVar8.IsMine();
							if (bVar14) {
								pCVar8 = this._owner;
								if (((pCVar8 == null) ||(pSVar5 = SettingsManager.InGameCurrent, pSVar5 == null)) ||((pSVar6 = pSVar5.Misc, pSVar6 == null ||(pSVar7 = pSVar6.HookDamageMultiplier, pSVar7 == null)))) goto label_05beb259;
								fVar1 = pCVar8.CurrentSpeed;
								iVar3 = pSVar7._value;
								score = Math.Max(10, (int)(fVar1 * (float)iVar3));
								__this_00 = (InGameMenu)UIManager.CurrentMenu;
								if (__this_00 == null) goto label_05beb259;
								bVar2 = (typeof(InGameMenu)._2).typeHierarchyDepth;
								if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameMenu))) {
									throw new InvalidCastException();
								}
								__this_00.ShowKillScore(score, false);
								pCVar15 = *targetAddress_00;
								if (pCVar15 == null) goto label_05beb259;
								pCVar15.GetHit((BaseCharacter)this._owner, score, "Hook", "");
							}
						}
					}
				}
			}
		}
		this._currentLiveTime = 0.0;
		__this_01 = this._renderer;
		if (__this_01 == null) goto label_05beb259;
		__this_01.endWidth = 0.1;
		__this_01.startWidth = 0.1;
		pSVar9 = SettingsManager.SoundSettings;
		if ((pSVar9 == null) ||(pSVar10 = pSVar9.HookImpactEffect, pSVar10 == null)) goto label_05beb259;
		if (pSVar10._value != false) {
			pCVar15 = *targetAddress_00;
			bVar14 = ((Object)pCVar15 != null);
			if ((bVar14) && (*targetAddress_00 != null)) {
				pCVar11 = (*targetAddress_00).klass;
				bVar2 = (typeof(Human)._2).typeHierarchyDepth;
				if (((pCVar11._2).typeHierarchyDepth < bVar2) ||((pCVar11._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) goto label_05beb162;
				pCVar8 = this._owner;
				pSVar12 = HumanSounds.HookImpactLoud;
				uVar4 = (typeof(Util)._2).cctor_finished_or_no_cctor;
			}
			else {
	label_05beb162: ;
				pCVar8 = this._owner;
				pSVar12 = HumanSounds.HookImpact;
				uVar4 = (typeof(Util)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			local_48 = Util.CreateLocalPhotonInfo();
			if (pCVar8 == null) goto label_05beb259;
			PVar13.Sender = local_48.Sender;
			PVar13.timeInt = local_48.timeInt;
			PVar13._4_4_ = local_48._4_4_;
			PVar13.photonView = local_48.photonView;
			pCVar8.PlaySoundRPC(pSVar12, PVar13);
		}
		__this_02 = this._endSprite;
		if (__this_02 != null) {
			__this_02.SetActive(true);
			return;
		}
	label_05beb259: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004086")]
	[Address(RVA = "0x5AEB270", Offset = "0x5AEA270", VA = "0x5AEB270")]
	public void SetHookState(HookState state)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$SetHookState): 3 lines keep C-only constructs
		Human pCVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_39;
		int local_38;
		int local_34;

		pCVar1 = this._owner;
		if ((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) {
	label_05beb411: ;
			throw new NullReferenceException();
		}
		__this_00 = pUVar2.PhotonView;
		parameters = (Object[])new object[3];
		local_39 = this._left;
		pIVar3 = (object)local_39;
		if (parameters == null) goto label_05beb411;
		if (pIVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05beb41b;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = pIVar3;
			local_34 = this._id;
			pIVar3 = (object)local_34;
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05beb41b;
			}
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = pIVar3;
				local_38 = state;
				pIVar3 = (object)local_38;
				if (pIVar3 != null) {
					pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
					if (pIVar4 == null) {
	label_05beb41b: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if (2 < (uint)parameters.Length) {
					parameters[2] = pIVar3;
					if (__this_00 != null) {
						__this_00.RPC("SetHookStateRPC", 0, parameters);
						return;
					}
					goto label_05beb411;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004087")]
	[Address(RVA = "0x5AEB430", Offset = "0x5AEA430", VA = "0x5AEB430")]
	public void SetHooking(Vector3 baseVelocity, Vector3 relativeVelocity)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$SetHooking): 11 lines keep C-only constructs
		Human pCVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		byte local_75;
		int local_6c;
		ulong local_68;
		ulong local_58;
		ulong local_48;
		byte[] local_38 = new byte[16];

		local_48 = relativeVelocity._0_8_;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = baseVelocity._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		pCVar1 = this._owner;
		if ((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) {
	label_05beb66f: ;
			throw new NullReferenceException();
		}
		__this_00 = pUVar2.PhotonView;
		parameters = (Object[])new object[4];
		local_75 = this._left;
		pIVar3 = (object)local_75;
		if (parameters == null) goto label_05beb66f;
		if (pIVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05beb674;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = pIVar3;
			local_6c = this._id;
			pIVar3 = (object)local_6c;
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05beb674;
			}
			if ((parameters.Length & 0xfffffffe) == 0) goto label_05beb66a;
			parameters[1] = pIVar3;
			local_58 = local_38._0_8_;
			pIVar3 = (object)local_58;
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05beb674;
			}
			if (2 < (uint)parameters.Length) {
				parameters[2] = pIVar3;
				local_68 = local_48;
				pIVar3 = (object)local_68;
				if (pIVar3 != null) {
					pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
					if (pIVar4 == null) {
	label_05beb674: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if ((parameters.Length & 0xfffffffc) != 0) {
					parameters[3] = pIVar3;
					if (__this_00 != null) {
						__this_00.RPC("SetHookingRPC", 0, parameters);
						return;
					}
					goto label_05beb66f;
				}
			}
		}
	label_05beb66a: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004088")]
	[Address(RVA = "0x5AEB690", Offset = "0x5AEA690", VA = "0x5AEB690")]
	public void SetHooked(Vector3 position, [Optional] Transform t, int viewId = -1, int objectId = -1)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$SetHooked): 17 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Transform x;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		Human pCVar5;
		Human human;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 position_00;
		Vector3 position_01;
		Vector3 position_02;
		byte local_71;
		float local_70;
		int local_6c;
		int local_68;
		int local_64;
		int local_60;
		int local_5c;
		byte[] local_58 = new byte[16];
		Transform local_48;
		ulong local_40;

		local_70 = position.z;
		local_58._8_4_ = in_XMM0_Dc;
		local_58._0_8_ = position._0_8_;
		local_58._12_4_ = in_XMM0_Dd;
		pCVar5 = this._owner;
		if (pCVar5 == null) goto label_05beba15;
		pUVar1 = pCVar5.Cache;
		local_6c = objectId;
		local_68 = viewId;
		local_48 = t;
		if (pUVar1 == null) goto label_05beba15;
		__this_00 = pUVar1.PhotonView;
		parameters = (Object[])new object[5];
		local_71 = this._left;
		pIVar3 = (object)local_71;
		if (parameters == null) goto label_05beba15;
		if (pIVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05beba1f;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = pIVar3;
			local_5c = this._id;
			pIVar3 = (object)local_5c;
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05beba1f;
			}
			if ((parameters.Length & 0xfffffffe) == 0) goto label_05beba1a;
			parameters[1] = pIVar3;
			local_40 = local_58._0_8_;
			pIVar3 = (object)local_40;
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05beba1f;
			}
			if ((uint)parameters.Length < 3) goto label_05beba1a;
			parameters[2] = pIVar3;
			local_60 = local_68;
			pIVar3 = (object)local_60;
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05beba1f;
			}
			if ((parameters.Length & 0xfffffffc) != 0) {
				parameters[3] = pIVar3;
				local_64 = local_6c;
				pIVar3 = (object)local_64;
				if (pIVar3 != null) {
					pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
					if (pIVar4 == null) {
	label_05beba1f: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if (4 < (uint)parameters.Length) {
					parameters[4] = pIVar3;
					if (__this_00 != null) {
						__this_00.RPC("SetHookedRPC", 1, parameters);
						pCVar5 = this._owner;
						if (pCVar5 != null) {
							position_00.z = local_70;
							position_00.x = (float)local_58._0_4_;
							position_00.y = (float)local_58._4_4_;
							pCVar5.OnHooked(this._left, position_00);
							x = local_48;
							position_01.z = local_70;
							position_01.x = (float)local_58._0_4_;
							position_01.y = (float)local_58._4_4_;
							this.OnSetHooked(position_01, local_48);
							bVar2 = ((Object)x != null);
							if (bVar2) {
								if (x == null) goto label_05beba15;
								pCVar5 = x.GetComponent<Human>();
								bVar2 = ((Object)pCVar5 != null) ;
								if (bVar2) {
									pCVar5 = this._owner;
									bVar2 = this._left;
									human = x.GetComponent<Human>();
									if (pCVar5 == null) goto label_05beba15;
									position_02.z = local_70;
									position_02.x = (float)local_58._0_4_;
									position_02.y = (float)local_58._4_4_;
									pCVar5.OnHookedHuman(bVar2, position_02, human);
								}
							}
							return;
						}
					}
	label_05beba15: ;
					throw new NullReferenceException();
				}
			}
		}
	label_05beba1a: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004089")]
	[Address(RVA = "0x5AEBA30", Offset = "0x5AEAA30", VA = "0x5AEBA30")]
	public void MoveHookParent(Transform from, Transform to)
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$MoveHookParent): 3 lines keep C-only constructs
		Transform* targetAddress;
		Transform pUVar1;
		bool bVar2;
		Vector3 UVar3;

		if (this._hasHookParent != false) {
			pUVar1 = this.HookParent;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				targetAddress = &this.HookParent;
				pUVar1 = *targetAddress;
				if (pUVar1 == null) {
	label_05bebb0f: ;
					throw new NullReferenceException();
				}
				bVar2 = pUVar1.IsChildOf(from);
				if (bVar2) {
					UVar3 = this.GetHookPosition();
					this.HookParent = to;
					if (to == null) goto label_05bebb0f;
					UVar3 = to.InverseTransformPoint(UVar3);
					this._hookPosition.x = UVar3.x;
					this._hookPosition.y = UVar3.y;
					this._hookPosition.z = UVar3.z;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600408A")]
	[Address(RVA = "0x5AEBB20", Offset = "0x5AEAB20", VA = "0x5AEBB20")]
	protected void FinishDisable()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$FinishDisable): clean
		LineRenderer __this_00;
		GameObject __this_01;

		__this_00 = this._renderer;
		if (__this_00 != null) {
			__this_00.positionCount = 0;
			this.State = 0;
			__this_01 = this._endSprite;
			if (__this_01 != null) {
				__this_01.SetActive(false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600408B")]
	[Address(RVA = "0x5AEBB60", Offset = "0x5AEAB60", VA = "0x5AEBB60")]
	protected void UpdateHooking()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$UpdateHooking): 1 lines keep C-only constructs
		int iVar1;
		List<Vector3> pSVar2;
		Transform pUVar3;
		LineRenderer pUVar4;
		uint index;
		MethodInfo method_00;
		CustomLogicMathBuiltin __this_00;
		float fVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		Vector3 position;
		float local_48;
		float fStack_44;
		float local_38;
		float fStack_34;

		pSVar2 = this._nodes;
		if (pSVar2 != null) {
			if (pSVar2._size < 1) {
				return;
			}
			pUVar3 = this.Anchor;
			if (pUVar3 != null) {
				UVar6 = pUVar3.position;
				pSVar2 = this._nodes;
				if (pSVar2 != null) {
					UVar7 = pSVar2.get_Item(0);
					pSVar2 = this._nodes;
					if ((pSVar2 != null) &&(pUVar4 = this._renderer, pUVar4 != null)) {
						index = 0;
						pUVar4.positionCount = pSVar2._size;
						__this_00 = (CustomLogicMathBuiltin)this._nodes;
						if (__this_00 != null) {
							local_48 = UVar6.x;
							fStack_44 = UVar6.y;
							local_38 = UVar7.x;
							fStack_34 = UVar7.y;
							local_48 = local_48 - local_38;
							fStack_44 = fStack_44 - fStack_34;
							do {
								iVar1 = *(int)&__this_00.Variables;
								if (iVar1 <= (int)index) {
									if (iVar1 < 2) {
										return;
									}
									pUVar3 = this.Anchor;
									if (pUVar3 != null) {
										pUVar4 = this._renderer;
										UVar6 = pUVar3.position;
										if (pUVar4 != null) {
											pUVar4.SetPosition(1, UVar6);
											return;
										}
									}
									break;
								}
								pUVar4 = this._renderer;
								method_00 = (MethodInfo)(ulong)index;
								UVar8 = __this_00.get_Item(index);
								fVar5 = powf(__this_00, 0.75, (float)(int)index, method_00);
								if (pUVar4 == null) break;
								position.z = UVar8.z + fVar5 * (UVar6.z - UVar7.z);
								local_38 = UVar8.x;
								fStack_34 = UVar8.y;
								position.y = fStack_34 + fVar5 * fStack_44;
								position.x = local_38 + fVar5 * local_48;
								pUVar4.SetPosition(index, position);
								index = index + 1;
								__this_00 = (CustomLogicMathBuiltin)this._nodes;
							} while (__this_00 != null);
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600408C")]
	[Address(RVA = "0x5AEBD20", Offset = "0x5AEAD20", VA = "0x5AEBD20")]
	protected void UpdateHooked()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$UpdateHooked): 199 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		Human pCVar7;
		BaseComponentCache pUVar8;
		Rigidbody __this_00;
		LineRenderer pUVar9;
		GameObject pUVar10;
		BaseCamera pCVar11;
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		int iVar16;
		Transform pUVar17;
		Transform pUVar18;
		UnityEngine_Vector3_StaticFields pUVar19;
		uint index;
		MethodInfo method_00;
		Math pSVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		float fVar24;
		float extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		uint extraout_XMM0_Db_02;
		uint uVar25;
		uint extraout_XMM0_Db_03;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		float extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dc_05;
		float extraout_XMM0_Dc_06;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		uint extraout_XMM0_Dd_05;
		float extraout_XMM0_Dd_06;
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		byte[] auVar30 = new byte[16];
		byte[] auVar31 = new byte[16];
		float fVar32;
		Quaternion value;
		Vector3 UVar33;
		Vector3 UVar34;
		Vector3 value_00;
		byte[] local_118 = new byte[116];
		ulong uStack_a0;
		float local_98;
		float fStack_94;
		float fStack_90;
		float fStack_8c;
		byte[] local_88 = new byte[8];
		float fStack_80;
		float fStack_7c;
		byte[] local_78 = new byte[8];
		float fStack_70;
		float fStack_6c;
		float local_68;
		Vector3 local_58;
		float local_48;
		float fStack_44;

		UVar33 = this.GetHookPosition();
		local_118._20_4_ = UVar33.z;
		fStack_70 = (float)extraout_XMM0_Dc;
		local_78 = UVar33._0_8_;
		fStack_6c = (float)extraout_XMM0_Dd;
		pUVar17 = this.Anchor;
		if (pUVar17 == null) goto label_05bec893;
		UVar33 = pUVar17.position;
		pCVar7 = this._owner;
		if ((pCVar7 == null) ||(pUVar8 = pCVar7.Cache, pUVar8 == null)) goto label_05bec893;
		local_118._40_4_ = extraout_XMM0_Dc_00;
		local_118._32_8_ = UVar33._0_8_;
		local_118._44_4_ = extraout_XMM0_Dd_00;
		__this_00 = pUVar8.Rigidbody;
		if (__this_00 == null) goto label_05bec893;
		UVar34 = __this_00.linearVelocity;
		fVar24 = UVar34.z;
		fStack_80 = (float)extraout_XMM0_Dc_01;
		local_88 = (byte[])UVar34._0_8_;
		fStack_7c = (float)extraout_XMM0_Dd_01;
		local_98 = (float)local_78._0_4_ - (float)local_118._32_4_;
		fStack_94 = (float)local_78._4_4_ - (float)local_118._36_4_;
		fStack_90 = fStack_70 - (float)local_118._40_4_;
		fStack_8c = fStack_6c - (float)local_118._44_4_;
		fVar27 = (float)local_118._20_4_ - UVar33.z;
		local_118._16_4_ = fVar27 * fVar27 + fStack_94 * fStack_94 + local_98 * local_98;
		if ((float)local_118._16_4_ < 0.0) {
			fVar21 = sqrtf((float)local_118._16_4_);
		}
		else {
			fVar21 = SQRT((float)local_118._16_4_);
		}
		local_118._24_4_ = fVar24 * fVar24 +(float)local_88._4_4_ * (float)local_88._4_4_ + (float)local_88._0_4_ * (float)local_88._0_4_;
		if ((float)local_118._24_4_ < 0.0) {
			fVar22 = sqrtf((float)local_118._24_4_);
		}
		else {
			fVar22 = SQRT((float)local_118._24_4_);
		}
		fVar22 = (float)(int)((fVar21 + fVar22) / 5.0);
		fVar21 = 8.40779e-45;
		if ((int)fVar22 < 6) {
			fVar21 = fVar22;
		}
		fVar22 = 2.8026e-45;
		if (2 < (int)fVar21) {
			fVar22 = fVar21;
		}
		pUVar9 = this._renderer;
		if (pUVar9 == null) goto label_05bec893;
		pUVar9.positionCount = (int32_t)fVar22;
		pUVar17 = this.Anchor;
		if (pUVar17 == null) goto label_05bec893;
		pUVar9 = this._renderer;
		UVar33 = pUVar17.position;
		if (pUVar9 == null) goto label_05bec893;
		method_00 = null;
		pUVar9.SetPosition(0, UVar33);
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05bebf73;
	label_05bebfad: ;
			pSVar20 = typeof(Math);
			if (0.0 <= (float)local_118._16_4_) goto label_05bebf81;
	label_05bebfc0: ;
			fVar21 = sqrtf((float)local_118._16_4_);
		}
		else {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05bebfad;
	label_05bebf73: ;
			pSVar20 = typeof(Math);
			if ((float)local_118._16_4_ < 0.0) goto label_05bebfc0;
	label_05bebf81: ;
			fVar21 = SQRT((float)local_118._16_4_);
		}
		local_118._64_4_ = powf((CustomLogicMathBuiltin)pSVar20, fVar21, 0.3, method_00);
		local_118._28_4_ = fVar22;
		if (2 < (uint)fVar22) {
			local_118._92_4_ = (BADTYPE)((uint)fVar22 >> 1);
			local_118._84_4_ = (BADTYPE)(int)fVar22;
			local_88._4_4_ = (float)local_88._4_4_ * 0.001;
			local_88._0_4_ = (float)local_88._0_4_ * 0.001;
			fStack_80 = fStack_80 * 0.0;
			fStack_7c = fStack_7c * 0.0;
			index = 1;
			local_118._88_4_ = SQRT((float)local_118._24_4_);
			local_48 = (float)local_118._64_4_;
			fStack_44 = (float)local_118._64_4_;
			do {
				iVar1 = index - ((uint)fVar22 >> 1);
				pSVar20 = typeof(Math);
				iVar16 = -iVar1;
				if (iVar16 < 0) {
					iVar16 = iVar1;
				}
				local_118._112_4_ = powf((CustomLogicMathBuiltin)pSVar20, ((float)local_118._92_4_ - (float)iVar16) / (float)local_118._92_4_, 0.5, method_00);
				uStack_a0 = CONCAT44(extraout_XMM0_Dd_02, extraout_XMM0_Dc_02);
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar6 == 0) {
				}
				fVar21 = (float)local_118._88_4_;
				if ((float)local_118._24_4_ < 0.0) {
					fVar21 = sqrtf((float)local_118._24_4_);
				}
				fVar23 = Time.time;
				fVar23 = fVar23 + fVar23;
				local_118._48_4_ = fVar23;
				fVar28 = (float)(int)index;
				local_118._32_16_ = ZEXT416((uint)fVar28);
				local_118._96_4_ = fVar28 * 0.7 + fVar23 * 1.2;
				local_68 = sinf(fVar28 * 0.5 + fVar23);
				local_118._96_4_ = sinf((float)local_118._96_4_);
				local_118._100_4_ = extraout_XMM0_Db_00;
				local_118._104_4_ = extraout_XMM0_Dc_03;
				local_118._108_4_ = extraout_XMM0_Dd_03;
				fVar23 = sinf((float)local_118._32_4_ * 0.3 + (float)local_118._48_4_ * 0.8);
				pUVar17 = this.Anchor;
				if (pUVar17 == null) goto label_05bec893;
				fVar26 = (fVar21 + (float)local_118._64_4_) * 0.0015 * (float)local_118._112_4_;
				local_118._48_4_ = fVar23 * fVar26 * 0.3;
				UVar33 = pUVar17.position;
				fVar29 = fVar26 * local_68;
				fVar26 = fVar26 * (float)local_118._96_4_;
				fVar21 = UVar33.x;
				fVar23 = UVar33.y;
				fVar28 = UVar33.z;
				if (g_data_0753e72c == false) {
					local_118._104_4_ = extraout_XMM0_Dc_04;
					local_118._96_8_ = UVar33._0_8_;
					local_118._108_4_ = extraout_XMM0_Dd_04;
					local_68 = UVar33.z;
					g_data_0753e72c = true;
					fVar21 = (float)local_118._96_4_;
					fVar23 = (float)local_118._100_4_;
					fVar28 = local_68;
				}
				pUVar9 = this._renderer;
				if (pUVar9 == null) goto label_05bec893;
				fVar32 = (float)local_118._32_4_ / (float)local_118._84_4_;
				pUVar19 = typeof(Vector3).static_fields;
				UVar33.z =((pUVar19.upVector).z * (float)local_118._64_4_ * -0.05 * (float)local_118._112_4_ + fVar27 * fVar32 + (float)local_118._48_4_ + fVar28) -(float)local_118._112_4_ * fVar24 * 0.001 * (float)local_118._64_4_;
				uVar2 = (pUVar19.upVector).x;
				uVar4 = (pUVar19.upVector).y;
				UVar33.x =((float)uVar2 * local_48 * -0.05 * (float)local_118._112_4_ + fVar32 * local_98 + fVar29 * 0.3 + fVar21) -(float)local_88._0_4_ * (float)local_118._112_4_ * local_48;
				UVar33.y =((float)uVar4 * fStack_44 * -0.05 * (float)local_118._112_4_ + fVar32 * fStack_94 + fVar26 * 0.3 + fVar23) -(float)local_88._4_4_ * (float)local_118._112_4_ * fStack_44;
				method_00 = (MethodInfo)(ulong)index;
				pUVar9.SetPosition(index, UVar33);
				iVar1 = index - (int)fVar22;
				index = index + 1;
			} while (iVar1 != -2);
		}
		pUVar9 = this._renderer;
		if (pUVar9 == null) goto label_05bec893;
		UVar34.z = (float)local_118._20_4_;
		UVar34.x = (float)local_78._0_4_;
		UVar34.y = (float)local_78._4_4_;
		pUVar9.SetPosition(local_118._28_4_ - 1, UVar34);
		pUVar10 = this._endSprite;
		if (pUVar10 == null) goto label_05bec893;
		pUVar17 = pUVar10.transform;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05bec3e5;
	label_05bec465: ;
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05bec3fc;
	label_05bec48f: ;
			if (0.0 <= (float)local_118._16_4_) goto label_05bec40e;
	label_05bec4a6: ;
			fVar24 = sqrtf((float)local_118._16_4_);
			uVar25 = extraout_XMM0_Db_01;
			if (fVar24 <= 1e-05) goto label_05bec425;
	label_05bec4be: ;
			fVar21 = fVar27 / fVar24;
			auVar14._4_4_ = fStack_94;
			auVar14._0_4_ = local_98;
			auVar14._8_4_ = fStack_90;
			auVar14._12_4_ = fStack_8c;
			auVar31._4_4_ = fVar24;
			auVar31._0_4_ = fVar24;
			auVar31._8_4_ = uVar25;
			auVar31._12_4_ = uVar25;
			auVar31 = divps(auVar14, auVar31);
			local_118._0_4_ = auVar31._0_4_;
			local_118._4_4_ = auVar31._4_4_;
			pUVar19 = (UnityEngine_Vector3_StaticFields)local_118;
		}
		else {
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05bec465;
	label_05bec3e5: ;
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05bec48f;
	label_05bec3fc: ;
			if ((float)local_118._16_4_ < 0.0) goto label_05bec4a6;
	label_05bec40e: ;
			uVar25 = 0;
			fVar24 = SQRT((float)local_118._16_4_);
			if (1e-05 < fVar24) goto label_05bec4be;
	label_05bec425: ;
			pUVar19 = typeof(Vector3).static_fields;
			fVar21 = (pUVar19.zeroVector).z;
		}
		if (pUVar17 == null) goto label_05bec893;
		uVar3 = (pUVar19.zeroVector).x;
		uVar5 = (pUVar19.zeroVector).y;
		value_00.z = (float)local_118._20_4_ + fVar21 * 0.1;
		value_00.x = (float)local_78._0_4_ + (float)uVar3 * 0.1;
		value_00.y = (float)local_78._4_4_ + (float)uVar5 * 0.1;
		pUVar17.position = value_00;
		pUVar10 = this._endSprite;
		if (pUVar10 == null) goto label_05bec893;
		pUVar17 = pUVar10.transform;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05bec551;
	label_05bec5d1: ;
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05bec568;
	label_05bec5fb: ;
			if (0.0 <= (float)local_118._16_4_) goto label_05bec57a;
	label_05bec612: ;
			fVar24 = sqrtf((float)local_118._16_4_);
			uVar25 = extraout_XMM0_Db_02;
			if (fVar24 <= 1e-05) goto label_05bec591;
	label_05bec62a: ;
			fVar27 = fVar27 / fVar24;
			auVar15._4_4_ = fStack_94;
			auVar15._0_4_ = local_98;
			auVar15._8_4_ = fStack_90;
			auVar15._12_4_ = fStack_8c;
			auVar13._4_4_ = fVar24;
			auVar13._0_4_ = fVar24;
			auVar13._8_4_ = uVar25;
			auVar13._12_4_ = uVar25;
			auVar31 = divps(auVar15, auVar13);
			local_118._0_4_ = auVar31._0_4_;
			local_118._4_4_ = auVar31._4_4_;
			pUVar19 = (UnityEngine_Vector3_StaticFields)local_118;
		}
		else {
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05bec5d1;
	label_05bec551: ;
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05bec5fb;
	label_05bec568: ;
			if ((float)local_118._16_4_ < 0.0) goto label_05bec612;
	label_05bec57a: ;
			uVar25 = 0;
			fVar24 = SQRT((float)local_118._16_4_);
			if (1e-05 < fVar24) goto label_05bec62a;
	label_05bec591: ;
			pUVar19 = typeof(Vector3).static_fields;
			fVar27 = (pUVar19.zeroVector).z;
		}
		pCVar11 = SceneLoader.CurrentCamera;
		if (((pCVar11 == null) ||(pUVar8 = pCVar11.Cache, pUVar8 == null)) ||(pUVar18 = pUVar8.Transform, pUVar18 == null)) goto label_05bec893;
		local_118._112_4_ = (pUVar19.zeroVector).x;
		UVar33 = pUVar18.position;
		local_118._40_4_ = extraout_XMM0_Dc_05;
		local_118._32_8_ = UVar33._0_8_;
		local_118._44_4_ = extraout_XMM0_Dd_05;
		pUVar10 = this._endSprite;
		if ((pUVar10 == null) ||(pUVar18 = pUVar10.transform, pUVar18 == null)) goto label_05bec893;
		UVar34 = pUVar18.position;
		fVar24 = UVar34.x;
		fVar21 = UVar34.y;
		if (Il2CppMethodInitialized_0753e72d == false) {
			local_118._56_4_ = extraout_XMM0_Dc_06;
			local_118._48_8_ = UVar34._0_8_;
			local_118._60_4_ = extraout_XMM0_Dd_06;
			local_118._64_4_ = UVar34.z;
			Il2CppMethodInitialized_0753e72d = true;
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			fVar24 = (float)local_118._48_4_;
			fVar21 = (float)local_118._52_4_;
			fVar22 = (float)local_118._56_4_;
			fVar23 = (float)local_118._60_4_;
			fVar26 = (float)local_118._64_4_;
			fVar28 = (float)local_118._64_4_;
		}
		else {
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			fVar22 = extraout_XMM0_Dc_06;
			fVar23 = extraout_XMM0_Dd_06;
			fVar26 = UVar34.z;
			fVar28 = (float)local_118._64_4_;
		}
		local_118._64_4_ = fVar26;
		local_118._0_4_ = 0.0;
		local_118._4_4_ = 0.0;
		fVar26 = (float)local_118._64_4_;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_118._0_4_ = 0.0;
			local_118._4_4_ = 0.0;
			local_118._52_4_ = fVar21;
			local_118._48_4_ = fVar24;
			local_118._56_4_ = fVar22;
			local_118._60_4_ = fVar23;
			Il2CppMethodInitialized_0753e729 = true;
			fVar24 = (float)local_118._48_4_;
			fVar21 = (float)local_118._52_4_;
			fVar22 = (float)local_118._56_4_;
			fVar23 = (float)local_118._60_4_;
			fVar26 = (float)local_118._64_4_;
			fVar28 = (float)local_118._64_4_;
		}
		local_118._64_4_ = fVar28;
		auVar30._0_4_ = (float)local_118._32_4_ - fVar24;
		auVar30._4_4_ = (float)local_118._36_4_ - fVar21;
		auVar30._8_4_ = (float)local_118._40_4_ - fVar22;
		auVar30._12_4_ = (float)local_118._44_4_ - fVar23;
		fVar26 = UVar33.z - fVar26;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_118._32_16_ = auVar30;
			auVar30 = (byte[])local_118._32_16_;
		}
		uVar25 = 0;
		fVar24 = fVar26 * fVar26 + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_;
		if (fVar24 < 0.0) {
			local_118._32_16_ = auVar30;
			fVar24 = sqrtf(fVar24);
			uVar25 = extraout_XMM0_Db_03;
			auVar30 = (byte[])local_118._32_16_;
			if (fVar24 <= 1e-05) goto label_05bec76e;
	label_05bec7b8: ;
			local_58.z = fVar26 / fVar24;
			auVar12._4_4_ = fVar24;
			auVar12._0_4_ = fVar24;
			auVar12._8_4_ = uVar25;
			auVar12._12_4_ = uVar25;
			auVar31 = divps(auVar30, auVar12);
			local_118._0_4_ = auVar31._0_4_;
			local_118._4_4_ = auVar31._4_4_;
			pUVar19 = (UnityEngine_Vector3_StaticFields)local_118;
		}
		else {
			fVar24 = SQRT(fVar24);
			if (1e-05 < fVar24) goto label_05bec7b8;
	label_05bec76e: ;
			pUVar19 = typeof(Vector3).static_fields;
			local_58.z = (pUVar19.zeroVector).z;
		}
		local_58.x = (pUVar19.zeroVector).x;
		local_58.y = (pUVar19.zeroVector).y;
		local_118._0_8_ = stack0xffffffffffffff58;
		local_118._8_4_ = fVar27;
		value = Quaternion.Internal_LookRotation((Vector3)local_118, ref local_58);
		if (pUVar17 != null) {
			pUVar17.rotation = value;
			return;
		}
	label_05bec893: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600408D")]
	[Address(RVA = "0x5AEC8A0", Offset = "0x5AEB8A0", VA = "0x5AEC8A0")]
	protected void UpdateDisablingHooking()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$UpdateDisablingHooking): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		int iVar6;
		List<Vector3> pSVar7;
		Vector3[] pUVar8;
		Transform pUVar9;
		LineRenderer pUVar10;
		GameObject __this_00;
		uint uVar11;
		MethodInfo pMVar12;
		CustomLogicMathBuiltin __this_01;
		float fVar13;
		float fVar14;
		float fVar15;
		Vector3 UVar16;
		Vector3 UVar17;
		Vector3 UVar18;
		Vector3 position;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;

		UVar16 = this.GetHookPosition();
		uVar2 = this._baseVelocity.x;
		uVar4 = this._baseVelocity.y;
		fVar14 = this._baseVelocity.z;
		uVar3 = this._relativeVelocity.x;
		uVar5 = this._relativeVelocity.y;
		fVar15 = this._relativeVelocity.z;
		fVar13 = Time.deltaTime;
		pMVar12 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
		pSVar7 = this._nodes;
		if (pSVar7 != null) {
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pUVar8 = pSVar7._items;
			if (pUVar8 != null) {
				local_48 = UVar16.x;
				fStack_44 = UVar16.y;
				UVar17.x = local_48 + (float)uVar2 + (float)uVar3 * fVar13;
				UVar17.y = fStack_44 + (float)uVar4 + (float)uVar5 * fVar13;
				UVar17.z = UVar16.z + fVar14 + fVar15 * fVar13;
				uVar11 = pSVar7._size;
				if (uVar11 < (uint)pUVar8.Length) {
					pSVar7._size = uVar11 + 1;
					pUVar8[(int)uVar11].x = UVar17.x;
					pUVar8[(int)uVar11].y = UVar17.y;
					pUVar8[(int)uVar11].z = UVar17.z;
				}
				else {
					pSVar7.AddWithResize(UVar17);
				}
				pUVar9 = this.Anchor;
				if (pUVar9 != null) {
					UVar16 = pUVar9.position;
					pSVar7 = this._nodes;
					if (pSVar7 != null) {
						UVar17 = pSVar7.get_Item(0);
						pSVar7 = this._nodes;
						if ((pSVar7 != null) &&(pUVar10 = this._renderer, pUVar10 != null)) {
							uVar11 = 0;
							pUVar10.positionCount = pSVar7._size;
							__this_01 = (CustomLogicMathBuiltin)this._nodes;
							if (__this_01 != null) {
								local_58 = UVar16.x;
								fStack_54 = UVar16.y;
								local_48 = UVar17.x;
								fStack_44 = UVar17.y;
								local_58 = local_58 - local_48;
								fStack_54 = fStack_54 - fStack_44;
								do {
									iVar6 = *(int)&__this_01.Variables;
									if (iVar6 <= (int)uVar11) {
										if (1 < iVar6) {
											pUVar9 = this.Anchor;
											if (pUVar9 == null) break;
											pUVar10 = this._renderer;
											UVar16 = pUVar9.position;
											if (pUVar10 == null) break;
											pUVar10.SetPosition(1, UVar16);
										}
										fVar14 = this._currentLiveTime;
										fVar15 = Time.deltaTime;
										fVar15 = fVar15 + fVar14;
										this._currentLiveTime = fVar15;
										pUVar10 = this._renderer;
										if (pUVar10 != null) {
											fVar14 = fVar15 * -0.2 + 0.1;
											pUVar10.endWidth = fVar14;
											pUVar10.startWidth = fVar14;
											if (this._currentLiveTime <= 0.5) {
												return;
											}
											pUVar10 = this._renderer;
											if (pUVar10 != null) {
												pUVar10.positionCount = 0;
												this.State = 0;
												__this_00 = this._endSprite;
												if (__this_00 != null) {
													__this_00.SetActive(false);
													return;
												}
											}
										}
										break;
									}
									pUVar10 = this._renderer;
									pMVar12 = (MethodInfo)(ulong)uVar11;
									UVar18 = __this_01.get_Item(uVar11);
									fVar14 = powf(__this_01, 0.75, (float)(int)uVar11, pMVar12);
									if (pUVar10 == null) break;
									position.z = UVar18.z + fVar14 * (UVar16.z - UVar17.z);
									local_48 = UVar18.x;
									fStack_44 = UVar18.y;
									position.y = fStack_44 + fVar14 * fStack_54;
									position.x = local_48 + fVar14 * local_58;
									pUVar10.SetPosition(uVar11, position);
									uVar11 = uVar11 + 1;
									__this_01 = (CustomLogicMathBuiltin)this._nodes;
								} while (__this_01 != null);
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600408E")]
	[Address(RVA = "0x5AECBE0", Offset = "0x5AEBBE0", VA = "0x5AECBE0")]
	protected void UpdateDisablingHooked()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$UpdateDisablingHooked): clean
		LineRenderer pUVar1;
		Transform __this_00;
		GameObject __this_01;
		float fVar2;
		float fVar3;
		Vector3 UVar4;

		pUVar1 = this._renderer;
		if (pUVar1 != null) {
			pUVar1.positionCount = 2;
			pUVar1 = this._renderer;
			UVar4 = this.GetHookPosition();
			if (pUVar1 != null) {
				pUVar1.SetPosition(0, UVar4);
				__this_00 = this.Anchor;
				if (__this_00 != null) {
					pUVar1 = this._renderer;
					UVar4 = __this_00.position;
					if (pUVar1 != null) {
						pUVar1.SetPosition(1, UVar4);
						fVar3 = this._currentLiveTime;
						fVar2 = Time.deltaTime;
						fVar2 = fVar2 + fVar3;
						this._currentLiveTime = fVar2;
						pUVar1 = this._renderer;
						if (pUVar1 != null) {
							fVar3 = fVar2 * -0.2 + 0.1;
							pUVar1.endWidth = fVar3;
							pUVar1.startWidth = fVar3;
							if (this._currentLiveTime <= 0.5) {
								return;
							}
							pUVar1 = this._renderer;
							if (pUVar1 != null) {
								pUVar1.positionCount = 0;
								this.State = 0;
								__this_01 = this._endSprite;
								if (__this_01 != null) {
									__this_01.SetActive(false);
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

	[Token(Token = "0x600408F")]
	[Address(RVA = "0x5AECD20", Offset = "0x5AEBD20", VA = "0x5AECD20")]
	protected void FixedUpdateHooking()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$FixedUpdateHooking): 80 lines keep C-only constructs
		int piVar1;
		ulong puVar2;
		Vector3 pUVar3;
		float pfVar4;
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
		uint uVar15;
		uint uVar16;
		uint uVar17;
		uint uVar18;
		uint uVar19;
		uint uVar20;
		int iVar21;
		uint uVar22;
		Human pCVar23;
		List<Vector3> pSVar24;
		ulong uVar26;
		Vector3[] pUVar27;
		MapScriptBaseObject pMVar28;
		byte[] auVar29 = new byte[16];
		Vector3 item;
		float fVar30;
		float fVar31;
		uint uVar32;
		ulong uVar34;
		uint uVar35;
		uint uVar36;
		bool bVar38;
		int iVar39;
		uint uVar40;
		UnityEngine_Vector3_StaticFields pUVar41;
		Collider pUVar42;
		GameObject pUVar43;
		TitanProjectileDetection __this_00;
		Object pUVar44;
		Object pUVar45;
		Transform t;
		Transform pUVar46;
		PhotonView pPVar47;
		CustomLogicCollisionHandler __this_01;
		MapObject pMVar48;
		int objectId;
		ulong uVar49;
		RaycastHit[] pUVar50;
		long lVar51;
		float fVar52;
		float fVar53;
		float fVar54;
		uint uVar55;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar56;
		float fVar57;
		byte[] auVar58 = new byte[16];
		Vector3 UVar59;
		Vector3 origin;
		Vector3 position;
		Vector3 direction;
		ulong local_118;
		byte[] local_f8 = new byte[32];
		byte[] local_b0 = new byte[16];
		ulong uStack_a0;
		Vector3 UStack_98;
		EntityId UStack_80;
		float local_78;
		RaycastHit local_68;

		UStack_80.m_Data = 0;
		UStack_98.x = 0.0;
		UStack_98.y = 0.0;
		UStack_98.z = 0.0;
		local_b0._8_4_ = 0.0;
		local_b0._12_4_ = 0.0;
		uStack_a0._0_4_ = 0.0;
		uStack_a0._4_4_ = 0.0;
		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		pCVar23 = this._owner;
		if (pCVar23 == null) goto label_05bedb4f;
		bVar38 = pCVar23.IsMine();
		if (!bVar38) {
			uVar8 = this._hookPosition.x;
			uVar16 = this._hookPosition.y;
			fVar54 = this._hookPosition.z;
			uVar9 = this._baseVelocity.x;
			uVar17 = this._baseVelocity.y;
			fVar56 = this._baseVelocity.z;
			local_78 = Time.deltaTime;
			fVar56 = fVar56 * local_78;
			uVar10 = this._relativeVelocity.x;
			uVar18 = this._relativeVelocity.y;
			UVar59.z = this._relativeVelocity.z;
			fVar52 = Time.deltaTime;
			UVar59.z = UVar59.z * fVar52 + fVar56 * 50.0 + fVar54;
			UVar59.x = fVar52 * (float)uVar10 + local_78 * (float)uVar9 * 50.0 + (float)uVar8;
			UVar59.y = fVar52 * (float)uVar18 + local_78 * (float)uVar17 * 50.0 + (float)uVar16;
			this._hookPosition.x = UVar59.x;
			this._hookPosition.y = UVar59.y;
			this._hookPosition.z = UVar59.z;
			pSVar24 = this._nodes;
			if (pSVar24 != null) {
				piVar1 = &pSVar24._version;
				*piVar1 = *piVar1 + 1;
				pUVar27 = pSVar24._items;
				if (pUVar27 != null) {
					uVar40 = pSVar24._size;
					if (uVar40 < (uint)pUVar27.Length) {
						pSVar24._size = uVar40 + 1;
						pUVar27[(int)uVar40].x = UVar59.x;
						pUVar27[(int)uVar40].y = UVar59.y;
						pUVar27[(int)uVar40].z = UVar59.z;
						return;
					}
					pSVar24.AddWithResize(UVar59);
					return;
				}
			}
			goto label_05bedb4f;
		}
		this.HasOffset = false;
		uVar5 = this._hookPosition.x;
		uVar13 = this._hookPosition.y;
		fVar54 = this._hookPosition.z;
		uVar6 = this._baseVelocity.x;
		uVar14 = this._baseVelocity.y;
		fVar56 = this._baseVelocity.z;
		local_78 = Time.deltaTime;
		fVar56 = fVar56 * local_78;
		uVar7 = this._relativeVelocity.x;
		uVar15 = this._relativeVelocity.y;
		UVar59.z = this._relativeVelocity.z;
		fVar52 = Time.deltaTime;
		this._hookPosition.x = fVar52 * (float)uVar7 + local_78 * (float)uVar6 * 50.0 + (float)uVar5;
		this._hookPosition.y = fVar52 * (float)uVar15 + local_78 * (float)uVar14 * 50.0 + (float)uVar13;
		this._hookPosition.z = UVar59.z * fVar52 + fVar56 * 50.0 + fVar54;
		pSVar24 = this._nodes;
		if (pSVar24 == null) goto label_05bedb4f;
		UVar59 = pSVar24.get_Item(pSVar24._size + -1);
		UVar59.z = UVar59.z;
		fVar54 = UVar59.x;
		fVar56 = UVar59.y;
		pSVar24 = this._nodes;
		if (pSVar24 == null) goto label_05bedb4f;
		iVar21 = pSVar24._size;
		fVar52 = extraout_XMM0_Dc;
		fVar53 = extraout_XMM0_Dd;
		if (1 < iVar21) {
			UVar59 = pSVar24.get_Item(iVar21 + -2);
			UVar59.z = UVar59.z;
			fVar54 = UVar59.x;
			fVar56 = UVar59.y;
			fVar52 = extraout_XMM0_Dc_00;
			fVar53 = extraout_XMM0_Dd_00;
		}
		pUVar3 = &this._hookPosition;
		fVar30 = pUVar3.x;
		fVar31 = this._hookPosition.y;
		uVar35 = pUVar3.x;
		uVar36 = pUVar3.y;
		fVar57 = this._hookPosition.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_b0._0_4_ = 0.0;
			local_b0._4_4_ = 0.0;
			fVar30 = (float)uVar35;
			fVar31 = (float)uVar36;
		}
		else {
			local_b0._0_4_ = 0.0;
			local_b0._4_4_ = 0.0;
		}
		local_b0._0_4_ = 0.0;
		local_b0._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_b0._0_4_ = 0.0;
			local_b0._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar58._0_4_ = fVar30 - fVar54;
		auVar58._4_4_ = fVar31 - fVar56;
		auVar58._8_4_ = 0.0 - fVar52;
		auVar58._12_4_ = 0.0 - fVar53;
		fVar57 = fVar57 - UVar59.z;
		fVar52 = fVar57 * fVar57 + auVar58._4_4_ * auVar58._4_4_ + auVar58._0_4_ * auVar58._0_4_;
		if (fVar52 < 0.0) {
			fVar53 = sqrtf(fVar52);
			uVar55 = extraout_XMM0_Db;
			if (1e-05 < fVar53) goto label_05bed156;
	label_05becff3: ;
			pUVar41 = typeof(Vector3).static_fields;
			fVar57 = (pUVar41.zeroVector).z;
		}
		else {
			uVar55 = 0;
			fVar53 = SQRT(fVar52);
			if (fVar53 <= 1e-05) goto label_05becff3;
	label_05bed156: ;
			fVar57 = fVar57 / fVar53;
			auVar29._4_4_ = fVar53;
			auVar29._0_4_ = fVar53;
			auVar29._8_4_ = uVar55;
			auVar29._12_4_ = uVar55;
			auVar58 = divps(auVar58, auVar29);
			local_b0._0_4_ = auVar58._0_4_;
			local_b0._4_4_ = auVar58._4_4_;
			pUVar41 = (UnityEngine_Vector3_StaticFields)local_b0;
		}
		uVar11 = (pUVar41.zeroVector).x;
		uVar19 = (pUVar41.zeroVector).y;
		if ((typeof(Hook)._2).cctor_finished_or_no_cctor == 0) {
			pUVar50 = Hook._raycastHits;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05bed739;
	label_05bed1a7: ;
			uVar22 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar50 = Hook._raycastHits;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05bed1a7;
	label_05bed739: ;
			Il2CppMethodInitialized_0753e729 = true;
			uVar22 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar22 == 0) {
		}
		if (fVar52 < 0.0) {
			fVar52 = sqrtf(fVar52);
		}
		else {
			fVar52 = SQRT(fVar52);
		}
		iVar39 = (Hook.HookMask).value;
		origin.z = UVar59.z;
		origin.x = fVar54;
		origin.y = fVar56;
		direction.z = fVar57;
		direction.x = (float)uVar11;
		direction.y = (float)uVar19;
		uVar40 = RaycastHelper.SortedRaycast(origin, direction, pUVar50, fVar52, iVar39);
		if (0 < (int)uVar40) {
			pUVar50 = Hook._raycastHits;
			if (pUVar50 == null) goto label_05bedb4f;
			if ((int)pUVar50.Length == 0) {
	label_05bedb54: ;
				throw new IndexOutOfRangeException();
			}
			local_b0._8_4_ = pUVar50[0].m_Point.x;
			local_b0._12_4_ = pUVar50[0].m_Point.y;
			uStack_a0 = *(ulong)&pUVar50[0].m_Point.z;
			UStack_98.x = pUVar50[0].m_Normal.y;
			UStack_98.y = pUVar50[0].m_Normal.z;
			uVar32 = pUVar50[0].m_FaceID;
			UStack_80.m_Data = pUVar50[0].m_Collider.m_Data;
			lVar51 = 0x20;
			uVar49 = 0;
			UStack_98.z = (float)uVar32;
			do {
				pUVar50 = Hook._raycastHits;
				if (pUVar50 == null) goto label_05bedb4f;
				if ((uint)pUVar50.Length <= uVar49) goto label_05bedb54;
				puVar2 = (ulong)((long)pUVar50.m_Items + lVar51 + -0x20);
				local_68.m_Point._0_8_ = *puVar2;
				local_68._8_8_ = puVar2[1];
				puVar2 = (ulong)((long)pUVar50.m_Items + lVar51 + -0x10);
				local_68.m_Normal._4_8_ = *puVar2;
				uVar34 = puVar2[1];
				uVar26 = *(ulong)((long)&pUVar50[0].m_Point.x + lVar51);
				local_68.m_Collider.m_Data =(EntityId)((EntityId)((long)&pUVar50[0].m_Point.z + lVar51)). m_Data;
				local_68.m_UV.x = (float)uVar26;
				local_68.m_UV.y = (float)((ulong)uVar26 >> 0x20);
				local_68.m_FaceID = (uint32_t)uVar34;
				local_68.m_Distance = (float)((ulong)uVar34 >> 0x20);
				pUVar42 = local_68.collider;
				if ((pUVar42 == null) ||(pUVar43 = pUVar42.gameObject, pUVar43 == null)) goto label_05bedb4f;
				iVar39 = pUVar43.layer;
				iVar21 = PhysicsLayer.ProjectileDetection;
				pUVar42 = local_68.collider;
				if (iVar39 == iVar21) {
					if (((pUVar42 == null) ||(pUVar43 = pUVar42.gameObject, pUVar43 == null)) ||(__this_00 = pUVar43.GetComponent<TitanProjectileDetection>(), __this_00 == null)) goto label_05bedb4f;
					__this_00.RegisterHook(this);
				}
				else {
					if (pUVar42 == null) goto label_05bedb4f;
					pUVar44 = (Object)pUVar42.gameObject;
					pCVar23 = this._owner;
					if (pCVar23 == null) goto label_05bedb4f;
					pUVar45 = (Object)pCVar23.gameObject;
					bVar38 = (pUVar44 == pUVar45);
					if (!bVar38) {
						pCVar23 = this._owner;
						if (pCVar23 == null) goto label_05bedb4f;
						pCVar23 = pCVar23.BackHuman;
						bVar38 = ((Object)pCVar23 != null);
						if (bVar38) {
							pUVar42 = local_68.collider;
							if (pUVar42 == null) goto label_05bedb4f;
							pUVar44 = (Object)pUVar42.gameObject;
							pCVar23 = this._owner;
							if ((pCVar23 == null) ||(pCVar23 = pCVar23.BackHuman, pCVar23 == null)) goto label_05bedb4f;
							pUVar45 = (Object)pCVar23.gameObject;
							bVar38 = (pUVar44 == pUVar45);
							if (bVar38) goto label_05bed2f0;
						}
						pCVar23 = this._owner;
						if (pCVar23 == null) goto label_05bedb4f;
						if (pCVar23.CarryState == 1) {
							pCVar23 = pCVar23.Carrier;
							bVar38 = ((Object)pCVar23 != null) ;
							if (bVar38) {
								pUVar42 = local_68.collider;
								if (pUVar42 == null) goto label_05bedb4f;
								pUVar44 = (Object)pUVar42.gameObject;
								pCVar23 = this._owner;
								if ((pCVar23 == null) ||(pCVar23 = pCVar23.Carrier, pCVar23 == null)) goto label_05bedb4f;
								pUVar45 = (Object)pCVar23.gameObject;
								bVar38 = (pUVar44 == pUVar45);
								if (bVar38) goto label_05bed2f0;
							}
						}
						UStack_80 = local_68.m_Collider.m_Data;
						fVar54 = local_68.m_Normal.y;
						UStack_98.x = local_68.m_Normal.y;
						UStack_98.y = local_68.m_Normal.z;
						UStack_98.z = (float)local_68.m_FaceID;
						local_b0._8_4_ = local_68.m_Point.x;
						local_b0._12_4_ = local_68.m_Point.y;
						uStack_a0._0_4_ = local_68.m_Point.z;
						uStack_a0._4_4_ = local_68.m_Normal.x;
						pUVar42 = ((local_b0 + 8)).collider;
						if ((pUVar42 == null) ||(pUVar43 = pUVar42.gameObject, pUVar43 == null)) goto label_05bedb4f;
						iVar39 = pUVar43.layer;
						if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
							if (iVar39 != PhysicsLayer.Human) goto label_05bed7ff;
	label_05bed82f: ;
							UVar59 = ((local_b0 + 8)).point;
							local_118 = UVar59._0_8_;
							local_f8._4_4_ = uVar19;
							local_f8._0_4_ = UVar59.z;
							local_f8._8_8_ = 0;
							iVar39 = pUVar43.layer;
							if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
								iVar21 = PhysicsLayer.Human;
							}
							else {
								iVar21 = PhysicsLayer.Human;
							}
							if (iVar39 == iVar21) {
								pUVar46 = pUVar43.transform;
								if (pUVar46 == null) goto label_05bedb4f;
								UVar59 = pUVar46.position;
								if (g_data_0753e72c == false) {
									local_f8._0_4_ = UVar59.z;
									local_f8._8_8_ = 0;
									g_data_0753e72c = true;
								}
								pUVar41 = typeof(Vector3).static_fields;
								uVar12 = (pUVar41.upVector).x;
								uVar20 = (pUVar41.upVector).y;
								local_118 = CONCAT44(UVar59.y + (float)uVar20 * 0.8, UVar59.x + (float)uVar12 * 0.8);
								local_f8._0_4_ = UVar59.z + (pUVar41.upVector).z * 0.8;
							}
							t = pUVar43.transform;
							pUVar46 = pUVar43.transform;
							if ((pUVar46 == null) ||(pUVar46 = pUVar46.root, pUVar46 == null)) goto label_05bedb4f;
							pUVar43 = pUVar46.gameObject;
							pPVar47 = PunExtensions.GetPhotonView(pUVar43);
							if (pPVar47 == null) goto label_05bedb4f;
							iVar39 = pPVar47.viewIdField;
							fVar54 = (float)local_118;
							local_f8._4_4_ = local_118._4_4_;
							fVar56 = (float)local_f8._0_4_;
						}
						else {
							if (iVar39 == PhysicsLayer.Human) goto label_05bed82f;
	label_05bed7ff: ;
							iVar39 = pUVar43.layer;
							if (iVar39 == PhysicsLayer.TitanPushbox) goto label_05bed82f;
							__this_01 = pUVar43.GetComponent<CustomLogicCollisionHandler>();
							bVar38 = ((Object)__this_01 != null);
							if (bVar38) {
								pCVar23 = this._owner;
								UVar59 = ((local_b0 + 8)).point;
								fVar54 = UVar59.z;
								if (__this_01 == null) goto label_05bedb4f;
								__this_01.GetHooked(pCVar23, UVar59, this._left);
							}
							pMVar48 = MapLoader.GetMapObject(pUVar43);
							if (pMVar48 == null) {
								UVar59 = ((local_b0 + 8)).point;
								fVar56 = UVar59.z;
								local_f8._0_4_ = UVar59.x;
								local_f8._4_4_ = UVar59.y;
	label_05bedac4: ;
								t = null;
							}
							else {
								pMVar28 = pMVar48.ScriptObject;
								if (pMVar28 == null) goto label_05bedb4f;
								if (pMVar28.Static != false) {
									uVar55 = il2cpp_runtime_helper_05bbcf10(0);
									UVar59 = ((local_b0 + 8)).normal;
									fVar54 = (float)il2cpp_runtime_helper_059d7e70(uVar55, fVar54, UVar59._0_8_, UVar59.z, 0);
									this.HasOffset = fVar54 < 10.0;
									UVar59 = ((local_b0 + 8)).point;
									fVar56 = UVar59.z;
									local_f8._0_4_ = UVar59.x;
									local_f8._4_4_ = UVar59.y;
									if (fVar54 < 10.0) {
										local_f8._0_4_ = (float)local_f8._0_4_ + 0.0;
										local_f8._4_4_ = (float)local_f8._4_4_ + 0.1;
										fVar56 = fVar56 + 0.0;
									}
									goto label_05bedac4;
								}
								bVar38 = pMVar48.RuntimeCreated;
								UVar59 = ((local_b0 + 8)).point;
								fVar56 = UVar59.z;
								local_f8._0_4_ = UVar59.x;
								local_f8._4_4_ = UVar59.y;
								if (bVar38 == false) {
									t = pUVar43.transform;
									pMVar28 = pMVar48.ScriptObject;
									if (pMVar28 != null) {
										objectId = pMVar28.Id;
										iVar39 = -1;
										goto label_05bedad3;
									}
									goto label_05bedb4f;
								}
								t = pUVar43.transform;
							}
							iVar39 = -1;
							fVar54 = (float)local_f8._0_4_;
						}
						local_f8._0_4_ = fVar54;
						objectId = -1;
	label_05bedad3: ;
						position.y = (float)local_f8._4_4_;
						position.x = (float)local_f8._0_4_;
						position.z = fVar56;
						this.SetHooked(position, t, iVar39, objectId);
						return;
					}
				}
	label_05bed2f0: ;
				uVar49 = uVar49 + 1;
				lVar51 = lVar51 + 0x2c;
			} while (uVar40 != uVar49);
		}
		pSVar24 = this._nodes;
		if (pSVar24 != null) {
			pUVar3 = &this._hookPosition;
			fVar56 = pUVar3.x;
			UVar59.z = pUVar3.y;
			fVar54 = this._hookPosition.z;
			item = pUVar3.fields;
			piVar1 = &pSVar24._version;
			*piVar1 = *piVar1 + 1;
			pUVar27 = pSVar24._items;
			if (pUVar27 != null) {
				uVar40 = pSVar24._size;
				if (uVar40 < (uint)pUVar27.Length) {
					pSVar24._size = uVar40 + 1;
					pUVar27[(int)uVar40].x = fVar56;
					pUVar27[(int)uVar40].y = UVar59.z;
					pUVar27[(int)uVar40].z = fVar54;
				}
				else {
					pSVar24.AddWithResize((Vector3)item);
				}
				fVar54 = this._currentLiveTime;
				fVar56 = Time.deltaTime;
				fVar56 = fVar56 + fVar54;
				this._currentLiveTime = fVar56;
				pfVar4 = &this._maxLiveTime;
				if (*pfVar4 <= fVar56 && fVar56 != *pfVar4) {
					this.SetHookState(3);
				}
				return;
			}
		}
	label_05bedb4f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004090")]
	[Address(RVA = "0x5AEDB60", Offset = "0x5AECB60", VA = "0x5AEDB60")]
	protected void FixedUpdateHooked()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$FixedUpdateHooked): 3 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;
		Transform x;
		BaseCharacter pCVar3;
		bool bVar4;
		MethodInfo extraout_RDX;
		MethodInfo method_00;

		pCVar2 = this._owner;
		if (pCVar2 == null) {
	label_05bedc61: ;
			throw new NullReferenceException();
		}
		bVar4 = pCVar2.IsMine();
		if ((bVar4) && (this._hasHookParent != false)) {
			x = this.HookParent;
			bVar4 = ((Object)x == null);
			method_00 = extraout_RDX;
			if (bVar4) {
	label_05bedbeb: ;
				this.SetHookState(4);
				return;
			}
			pCVar3 = this.HookCharacter;
			bVar4 = ((Object)pCVar3 != null);
			if (bVar4) {
				pCVar3 = this.HookCharacter;
				if (pCVar3 == null) goto label_05bedc61;
				if (pCVar3.Dead != false) {
					bVar1 = (typeof(Human)._2).typeHierarchyDepth;
					method_00 = (MethodInfo)(ulong)bVar1;
					if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(long)&method_00[-1].field_0x57] ==typeof(Human))) goto label_05bedbeb;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004091")]
	[Address(RVA = "0x5AEDC70", Offset = "0x5AECC70", VA = "0x5AEDC70")]
	protected void Update()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$Update): clean
		int iVar1;

		iVar1 = this.State;
		switch(iVar1) {
		case 1:
			this.UpdateHooking();
			break;
		case 2:
			this.UpdateHooked();
			break;
		case 3:
			this.UpdateDisablingHooking();
			break;
		case 4:
			this.UpdateDisablingHooked();
			break;
		default: ;
			goto switchD_05bedc8d_default;
		}
		iVar1 = this.State;
	switchD_05bedc8d_default: ;
		if (iVar1 == 0) {
			return;
		}
		this.UpdateSkin();
		return;
	}

	[Token(Token = "0x6004092")]
	[Address(RVA = "0x5AEDCD0", Offset = "0x5AECCD0", VA = "0x5AEDCD0")]
	public void FixedUpdateMock()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$FixedUpdateMock): clean
		ParticleSystem __this_00;
		int iVar1;
		Transform __this_01;
		Vector3 value;

		iVar1 = this.State;
		if (iVar1 == 1) {
			this.FixedUpdateHooking();
			iVar1 = this.State;
			if (iVar1 == 1) goto label_05bedcf4;
		}
		if (iVar1 != 2) {
			return;
		}
	label_05bedcf4: ;
		__this_00 = this._particles;
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			value = this.GetHookPosition();
			if (__this_01 != null) {
				__this_01.position = value;
				if (this.State == 2) {
					this.FixedUpdateHooked();
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004093")]
	[Address(RVA = "0x5AEA270", Offset = "0x5AE9270", VA = "0x5AEA270")]
	public Vector3 GetHookPosition()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$GetHookPosition): 4 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Transform pUVar3;
		Vector3 pUVar4;
		bool bVar5;
		Vector3 pUVar6;
		Vector3 UVar7;
		Vector3 UVar8;

		if (this._hasHookParent == false) {
			pUVar6 = &this._hookPosition;
			pUVar4 = &this._hookPosition;
		}
		else {
			pUVar3 = this.HookParent;
			bVar5 = ((Object)pUVar3 != null);
			if (bVar5) {
				pUVar3 = this.HookParent;
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				UVar7 = (Vector3)pUVar3.TransformPoint((Vector3)this._hookPosition);
				this._lastWorldHookPosition = UVar7;
			}
			pUVar6 = &this._lastWorldHookPosition;
			pUVar4 = &this._lastWorldHookPosition;
		}
		uVar1 = pUVar6.x;
		uVar2 = pUVar6.y;
		UVar8.y = (float)uVar2;
		UVar8.x = (float)uVar1;
		UVar8.z = pUVar4.z;
		return (Vector3)UVar8;
	}

	[Token(Token = "0x6004094")]
	[Address(RVA = "0x5AEDD50", Offset = "0x5AECD50", VA = "0x5AEDD50")]
	protected void OnDestroy()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$OnDestroy): clean
		ParticleSystem pUVar1;
		Material pUVar2;
		bool bVar3;
		Object pUVar4;

		pUVar1 = this._particles;
		bVar3 = ((Object)pUVar1 != null);
		if (bVar3) {
			pUVar1 = this._particles;
			if (pUVar1 == null) {
	label_05bede64: ;
				throw new NullReferenceException();
			}
			pUVar4 = (Object)pUVar1.gameObject;
			bVar3 = (pUVar4 != null);
			if (bVar3) {
				pUVar1 = this._particles;
				if (pUVar1 == null) goto label_05bede64;
				pUVar4 = (Object)pUVar1.gameObject;
				Object.Destroy(pUVar4);
			}
		}
		pUVar2 = this._defaultMaterial;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			pUVar2 = this._defaultMaterial;
			Object.Destroy((Object)pUVar2);
			return;
		}
		return;
	}

	[Token(Token = "0x6004095")]
	[Address(RVA = "0x5AEDE70", Offset = "0x5AECE70", VA = "0x5AEDE70")]
	public Hook()
	{
		// Lifted from source/cpp/Characters/Hook.c (Characters.Hook$$.ctor): clean
		float fVar1;
		UnityEngine_Vector3_StaticFields pUVar2;
		float fVar3;
		Vector3 pUVar4;
		List<Vector3> __this_00;

		__this_00 = new List<Vector3>();
		this._nodes = __this_00;
		pUVar4 = typeof(Vector3);
		pUVar2 = typeof(Vector3).static_fields;
		fVar3 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._baseVelocity.x = (pUVar2.zeroVector).x;
		this._baseVelocity.y = fVar3;
		this._baseVelocity.z = fVar1;
		pUVar2 = pUVar4.static_fields;
		fVar3 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._relativeVelocity.x = (pUVar2.zeroVector).x;
		this._relativeVelocity.y = fVar3;
		this._relativeVelocity.z = fVar1;
		pUVar2 = pUVar4.static_fields;
		fVar3 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._hookPosition.x = (pUVar2.zeroVector).x;
		this._hookPosition.y = fVar3;
		this._hookPosition.z = fVar1;
		pUVar2 = pUVar4.static_fields;
		fVar3 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._lastWorldHookPosition.x = (pUVar2.zeroVector).x;
		this._lastWorldHookPosition.y = fVar3;
		this._lastWorldHookPosition.z = fVar1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/Hook.c.

	// Characters.Hook$$.cctor: clean
	static Hook()
	{
		uint uVar1;
		LayerMask UVar3;
		RaycastHit[] pUVar4;
		Int32[] layers;

		pUVar4 = (RaycastHit[])new RaycastHit[0x40];
		Hook._raycastHits = pUVar4;
		layers = (Int32[])new int[6];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.Human;
			if ((((uVar1 != 1) && (layers[1] = PhysicsLayer.TitanPushbox, 2 < uVar1)) &&(layers[2] = PhysicsLayer.ProjectileDetection, uVar1 != 3)) &&((layers[3] = PhysicsLayer.MapObjectProjectiles, 4 < uVar1 &&(layers[4] = PhysicsLayer.MapObjectEntities, uVar1 != 5)))) {
				layers[5] = PhysicsLayer.MapObjectAll;
				UVar3 = PhysicsLayer.GetMask(layers);
				(Hook.HookMask).m_Mask = (int32_t)UVar3.m_Mask;
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
