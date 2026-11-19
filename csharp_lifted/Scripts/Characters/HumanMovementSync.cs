// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanMovementSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanMovementSync.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanMovementSync.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;

namespace Characters;

[Token(Token = "0x20006C2")]
internal class HumanMovementSync : BaseMovementSync
{
	[Token(Token = "0x4001F82")]
	[FieldOffset(Offset = "0x98")]
	protected Human _human;

	[Token(Token = "0x60041E0")]
	[Address(RVA = "0x5AF55C0", Offset = "0x5AF45C0", VA = "0x5AF55C0", Slot = "5")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/HumanMovementSync.c (Characters.HumanMovementSync$$Awake): clean
		Human pCVar1;

		this.Awake();
		pCVar1 = this.GetComponent<Human>();
		this._human = pCVar1;
		return;
	}

	[Token(Token = "0x60041E1")]
	[Address(RVA = "0x5AF5620", Offset = "0x5AF4620", VA = "0x5AF5620", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
		// Lifted from source/cpp/Characters/HumanMovementSync.c (Characters.HumanMovementSync$$SendCustomStream): 1 lines keep C-only constructs
		Human pCVar1;
		object obj;
		uint uStack_24;
		Quaternion UStack_20;

		pCVar1 = this._human;
		if (pCVar1 != null) {
			if (pCVar1.LateUpdateHeadRotation.hasValue == false) {
				if (stream != null) {
					stream.SendNext(null);
					return;
				}
			}
			else {
				UStack_20 = (pCVar1.LateUpdateHeadRotation).Value;
				uStack_24 = il2cpp_runtime_helper_05b8cfd0(&UStack_20, 0);
				obj = (object)uStack_24;
				if (stream != null) {
					stream.SendNext(obj);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041E2")]
	[Address(RVA = "0x5AF5710", Offset = "0x5AF4710", VA = "0x5AF5710", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
		// Lifted from source/cpp/Characters/HumanMovementSync.c (Characters.HumanMovementSync$$ReceiveCustomStream): 12 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Il2CppClass pIVar5;
		Human pCVar7;
		Quaternion value;
		System_Nullable_Quaternion__o pSVar8;
		uint uVar9;
		uint uVar10;
		object pIVar11;
		float pfVar12;
		float fVar13;
		Nullable<int> local_68;
		Nullable<int> local_50;
		System_Nullable_Quaternion__Fields local_48;
		float local_30;
		float fStack_2c;
		float local_28;
		float fStack_24;

		if (g_data_07547631 == false) {
			g_data_07547631 = true;
		}
		if (stream == null) goto label_05bf59ff;
		pIVar11 = stream.ReceiveNext();
		if ((pIVar11 != null) &&(pIVar5 = (typeof(Nullable<int>)._1).element_class, pIVar11.klass != pIVar5)) {
			throw new InvalidCastException();
		}
		il2cpp_runtime_helper_031230d0(pIVar11, typeof(Nullable<int>), &local_68);
		local_50 = local_68;
		if (local_68.hasValue == false) {
			pCVar7 = this._human;
			if (pCVar7 != null) {
				pCVar7.LateUpdateHeadRotationRecv.hasValue = false;
				*(undefined3)&pCVar7.LateUpdateHeadRotationRecv.field_0x1 = 0;
				pCVar7.LateUpdateHeadRotationRecv.value.x = 0.0;
				pSVar8 = &pCVar7.LateUpdateHeadRotationRecv;
				pSVar8.value.y = 0.0;
				pSVar8.value.z = 0.0;
				pCVar7.LateUpdateHeadRotationRecv.value.w = 0.0;
				return;
			}
			goto label_05bf59ff;
		}
		uVar1 = (Quaternion.identityQuaternion).x;
		uVar3 = (Quaternion.identityQuaternion).y;
		uVar2 = (Quaternion.identityQuaternion).z;
		uVar4 = (Quaternion.identityQuaternion).w;
		local_30 = (float)uVar1;
		fStack_2c = (float)uVar3;
		local_28 = (float)uVar2;
		fStack_24 = (float)uVar4;
		uVar9 = local_50.Value;
		if ((typeof(QuaternionCompression)._2).cctor_finished_or_no_cctor == 0) {
			if (uVar9 >> 0x1e == 3) goto label_05bf5833;
	label_05bf5875: ;
			fStack_24 = (float)(uVar9 & 0x1ff) * 0.0013837706;
			if ((uVar9 & 0x200) != 0) {
				fStack_24 = -fStack_24;
			}
			fVar13 = fStack_24 * fStack_24 + 0.0;
			uVar10 = uVar9 >> 10;
			if (uVar9 >> 0x1e != 2) goto label_05bf58b5;
	label_05bf58f0: ;
			fStack_2c = (float)(uVar10 & 0x1ff) * 0.0013837706;
			if ((uVar10 & 0x200) != 0) {
				fStack_2c = -fStack_2c;
			}
			fVar13 = fVar13 + fStack_2c * fStack_2c;
			uVar10 = uVar10 >> 10;
		}
		else {
			if (uVar9 >> 0x1e != 3) goto label_05bf5875;
	label_05bf5833: ;
			fVar13 = 0.0;
			uVar10 = uVar9;
	label_05bf58b5: ;
			local_28 = (float)(uVar10 & 0x1ff) * 0.0013837706;
			if ((uVar10 & 0x200) != 0) {
				local_28 = -local_28;
			}
			fVar13 = fVar13 + local_28 * local_28;
			uVar10 = uVar10 >> 10;
			if (uVar9 >> 0x1e != 1) goto label_05bf58f0;
		}
		if (0x3fffffff < uVar9) {
			local_30 = (float)(uVar10 & 0x1ff) * 0.0013837706;
			if ((uVar10 & 0x200) != 0) {
				local_30 = -local_30;
			}
			fVar13 = fVar13 + local_30 * local_30;
		}
		fVar13 = 1.0 - fVar13;
		if (fVar13 < 0.0) {
			fVar13 = sqrtf(fVar13);
		}
		else {
			fVar13 = SQRT(fVar13);
		}
		pfVar12 = &local_30;
		switch(uVar9 >> 0x1e) {
		case 1:
			pfVar12 = &fStack_2c;
			break;
		case 2:
			pfVar12 = &local_28;
			break;
		case 3:
			pfVar12 = &fStack_24;
		}
		*pfVar12 = fVar13;
		pCVar7 = this._human;
		value.y = fStack_2c;
		value.x = local_30;
		value.z = local_28;
		value.w = fStack_24;
		local_48.hasValue = false;
		local_48._1_3_ = 0;
		local_48.value.x = 0.0;
		local_48.value.y = 0.0;
		local_48.value.z = 0.0;
		local_48.value.w = 0.0;
		local_48 = new Nullable<Quaternion>(value);
		if (pCVar7 != null) {
			pCVar7.LateUpdateHeadRotationRecv.value.w = local_48.value.w;
			pCVar7.LateUpdateHeadRotationRecv.hasValue = local_48.hasValue;
			*(undefined3)&pCVar7.LateUpdateHeadRotationRecv.field_0x1 = local_48._1_3_;
			pCVar7.LateUpdateHeadRotationRecv.value.x = local_48.value.x;
			pSVar8 = &pCVar7.LateUpdateHeadRotationRecv;
			pSVar8.value.y = local_48.value.y;
			pSVar8.value.z = local_48.value.z;
			return;
		}
	label_05bf59ff: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041E3")]
	[Address(RVA = "0x5AF5A10", Offset = "0x5AF4A10", VA = "0x5AF5A10", Slot = "9")]
	protected override void Update()
	{
		// Lifted from source/cpp/Characters/HumanMovementSync.c (Characters.HumanMovementSync$$Update): 9 lines keep C-only constructs
		float pfVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		PhotonView pPVar10;
		Transform pUVar11;
		Transform pUVar12;
		BaseComponentCache pUVar13;
		ulong uVar14;
		bool bVar15;
		Human pCVar16;
		float fVar17;
		float fVar18;
		ulong uVar19;
		float fVar20;
		Quaternion UVar21;
		Vector3 UVar22;
		Vector3 UVar23;
		Vector3 UVar24;
		Vector3 value;
		float fStack_68;
		float fStack_64;
		float fStack_58;
		float fStack_54;
		Quaternion UStack_48;
		Quaternion UStack_38;
		float fStack_28;

		if (this.Disabled != false) {
			return;
		}
		pPVar10 = this._photonView;
		if (pPVar10 != null) {
			if (pPVar10._IsMine_k__BackingField != false) {
				return;
			}
			pCVar16 = this._human;
			if (pCVar16 != null) {
				if ((pCVar16.MountState == 2) && (pCVar16.CanMountedAttack == false)) {
					pUVar11 = pCVar16.MountedTransform;
					bVar15 = ((Object)pUVar11 != null);
					if (bVar15) {
						pCVar16 = this._human;
						if ((pCVar16 != null) &&(pUVar11 = pCVar16.MountedTransform, pUVar11 != null)) {
							pUVar12 = this._transform;
							UVar22 = pUVar11.TransformPoint((Vector3)pCVar16.MountedPositionOffset);
							if (pUVar12 != null) {
								pUVar12.position = UVar22;
								pCVar16 = this._human;
								if ((pCVar16 != null) &&(pUVar11 = pCVar16.MountedTransform, pUVar11 != null)) {
									pUVar12 = this._transform;
									UStack_38 = pUVar11.rotation;
									fVar18 = UStack_38.z;
									uVar19 = il2cpp_runtime_helper_05bbd050(&UStack_38);
									pCVar16 = this._human;
									if (pCVar16 != null) {
										uVar2 = pCVar16.MountedRotationOffset.x;
										uVar6 = pCVar16.MountedRotationOffset.y;
										UStack_48.y = ((float)((ulong)uVar19 >> 0x20) + (float)uVar6) * 0.017453292;
										UStack_48.x = ((float)uVar19 + (float)uVar2) * 0.017453292;
										UStack_48.z = (fVar18 + pCVar16.MountedRotationOffset.z) * 0.017453292;
										UVar21 = Quaternion.Internal_FromEulerRad(ref UStack_48);
										if (pUVar12 != null) {
											pUVar12.rotation = UVar21;
											return;
										}
									}
								}
							}
						}
						goto label_05bf5fb0;
					}
					pCVar16 = this._human;
					if (pCVar16 == null) goto label_05bf5fb0;
				}
				if (pCVar16.CarryState == 1) {
					pCVar16 = pCVar16.Carrier;
					bVar15 = ((Object)pCVar16 != null);
					if (bVar15) {
						pCVar16 = this._human;
						if ((((pCVar16 != null) &&(pCVar16 = pCVar16.Carrier, pCVar16 != null)) &&(pUVar13 = pCVar16.Cache, pUVar13 != null)) &&(pUVar11 = pUVar13.Transform, pUVar11 != null)) {
							UVar22 = pUVar11.forward;
							pCVar16 = this._human;
							if (((pCVar16 != null) &&(pCVar16 = pCVar16.Carrier, pCVar16 != null)) &&((pUVar13 = pCVar16.Cache, pUVar13 != null &&(pUVar11 = pUVar13.Transform, pUVar11 != null)))) {
								UVar23 = pUVar11.up;
								pCVar16 = this._human;
								if (((pCVar16 != null) &&(pCVar16 = pCVar16.Carrier, pCVar16 != null)) &&((pUVar13 = pCVar16.Cache, pUVar13 != null &&(pUVar11 = pUVar13.Transform, pUVar11 != null)))) {
									pUVar12 = this._transform;
									UVar24 = pUVar11.position;
									if (pUVar12 != null) {
										fStack_58 = UVar22.x;
										fStack_54 = UVar22.y;
										fStack_68 = UVar23.x;
										fStack_64 = UVar23.y;
										value.y = (fStack_64 * 0.5 - fStack_54 * 0.4) + UVar24.y;
										value.x = (fStack_68 * 0.5 - fStack_58 * 0.4) + UVar24.x;
										value.z = (UVar23.z * 0.5 - UVar22.z * 0.4) + UVar24.z;
										pUVar12.position = value;
										pCVar16 = this._human;
										if ((((pCVar16 != null) &&(pCVar16 = pCVar16.Carrier, pCVar16 != null)) &&(pUVar13 = pCVar16.Cache, pUVar13 != null)) &&(pUVar11 = pUVar13.Transform, pUVar11 != null)) {
											pUVar12 = this._transform;
											UVar21 = pUVar11.rotation;
											if (pUVar12 != null) {
												pUVar12.rotation = UVar21;
												return;
											}
										}
									}
								}
							}
						}
						goto label_05bf5fb0;
					}
				}
				pUVar11 = this._transform;
				if (pUVar11 != null) {
					UVar22 = pUVar11.position;
					uVar3 = this._correctPosition.x;
					uVar7 = this._correctPosition.y;
					fVar18 = this._correctPosition.z;
					fStack_28 = Time.deltaTime;
					fVar17 = this.SmoothingDelay;
					fVar17 = fStack_28 * fVar17;
					fVar20 = 1.0;
					if (fVar17 <= 1.0) {
						fVar20 = fVar17;
					}
					fVar20 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar20);
					fStack_68 = UVar22.x;
					fStack_64 = UVar22.y;
					UVar23.x = fVar20 * ((float)uVar3 - fStack_68) + fStack_68;
					UVar23.y = fVar20 * ((float)uVar7 - fStack_64) + fStack_64;
					UVar23.z = (fVar18 - UVar22.z) * fVar20 + UVar22.z;
					pUVar11.position = UVar23;
					pUVar11 = this._transform;
					if (pUVar11 != null) {
						UVar21 = pUVar11.rotation;
						uVar19._0_4_ = this._correctRotation.x;
						uVar19._4_4_ = this._correctRotation.y;
						uVar14._0_4_ = this._correctRotation.z;
						uVar14._4_4_ = this._correctRotation.w;
						fVar18 = Time.deltaTime;
						fVar20 = this.SmoothingDelay;
						UStack_48._0_8_ = uVar19;
						UStack_48._8_8_ = uVar14;
						UStack_38 = UVar21;
						UVar21 = Quaternion.Internal_Lerp(ref UStack_38, ref UStack_48, fVar20 * fVar18);
						pUVar11.rotation = UVar21;
						pCVar16 = this._human;
						if (pCVar16 != null) {
							pCVar16 = pCVar16.BackHuman;
							bVar15 = ((Object)pCVar16 != null) ;
							if (bVar15) {
								pCVar16 = this._human;
								if (pCVar16 == null) goto label_05bf5fb0;
								fVar18 = this._correctVelocity.x;
								fVar20 = this._correctVelocity.y;
								pCVar16.CarryVelocity.z = this._correctVelocity.z;
								pCVar16.CarryVelocity.x = fVar18;
								pCVar16.CarryVelocity.y = fVar20;
							}
							fVar18 = this.MaxPredictionTime;
							pfVar1 = &this._timeSinceLastMessage;
							if (fVar18 < *pfVar1 || fVar18 == *pfVar1) {
								return;
							}
							uVar4 = this._correctPosition.x;
							uVar8 = this._correctPosition.y;
							fVar18 = this._correctPosition.z;
							uVar5 = this._correctVelocity.x;
							uVar9 = this._correctVelocity.y;
							fVar20 = this._correctVelocity.z;
							fVar17 = Time.deltaTime;
							this._correctPosition.x = fVar17 * (float)uVar5 + (float)uVar4;
							this._correctPosition.y = fVar17 * (float)uVar9 + (float)uVar8;
							this._correctPosition.z = fVar20 * fVar17 + fVar18;
							fVar18 = this._timeSinceLastMessage;
							fVar20 = Time.deltaTime;
							this._timeSinceLastMessage = fVar20 + fVar18;
							return;
						}
					}
				}
			}
		}
	label_05bf5fb0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041E4")]
	[Address(RVA = "0x5AF5FC0", Offset = "0x5AF4FC0", VA = "0x5AF5FC0")]
	public HumanMovementSync()
	{
		// Lifted from source/cpp/Characters/HumanMovementSync.c (Characters.HumanMovementSync$$.ctor): clean
		base();
		return;
	}
}
