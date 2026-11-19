// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseMovementSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseMovementSync.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseMovementSync.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000695")]
internal class BaseMovementSync : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4001DB5")]
	[FieldOffset(Offset = "0x28")]
	public bool Disabled;

	[Token(Token = "0x4001DB6")]
	[FieldOffset(Offset = "0x2C")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x4001DB7")]
	[FieldOffset(Offset = "0x38")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x4001DB8")]
	[FieldOffset(Offset = "0x48")]
	public Vector3 _correctVelocity;

	[Token(Token = "0x4001DB9")]
	[FieldOffset(Offset = "0x54")]
	public Quaternion _correctCamera;

	[Token(Token = "0x4001DBA")]
	[FieldOffset(Offset = "0x64")]
	protected bool _syncVelocity;

	[Token(Token = "0x4001DBB")]
	[FieldOffset(Offset = "0x65")]
	protected bool _syncCamera;

	[Token(Token = "0x4001DBC")]
	[FieldOffset(Offset = "0x68")]
	protected float MaxPredictionTime;

	[Token(Token = "0x4001DBD")]
	[FieldOffset(Offset = "0x70")]
	protected Transform _transform;

	[Token(Token = "0x4001DBE")]
	[FieldOffset(Offset = "0x78")]
	protected Rigidbody _rigidbody;

	[Token(Token = "0x4001DBF")]
	[FieldOffset(Offset = "0x80")]
	protected PhotonView _photonView;

	[Token(Token = "0x4001DC0")]
	[FieldOffset(Offset = "0x88")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001DC1")]
	[FieldOffset(Offset = "0x90")]
	protected float _timeSinceLastMessage;

	[Token(Token = "0x17000B1A")]
	protected float SmoothingDelay
	{
		[Token(Token = "0x6004008")]
		[Address(RVA = "0x5ABBCF0", Offset = "0x5ABACF0", VA = "0x5ABBCF0")]
		get
		{
			// Lifted from source/cpp/Characters/BaseMovementSync.c (Characters.BaseMovementSync$$get_SmoothingDelay): clean
			return 10.0;
		}
	}

	[Token(Token = "0x6004009")]
	[Address(RVA = "0x5ABBD00", Offset = "0x5ABAD00", VA = "0x5ABBD00", Slot = "5")]
	protected virtual void Awake()
	{
		// Lifted from source/cpp/Characters/BaseMovementSync.c (Characters.BaseMovementSync$$Awake): clean
		Object x;
		bool bVar1;
		Transform pUVar2;
		PhotonView pPVar3;
		Rigidbody pUVar4;
		BaseCharacter pCVar5;
		Quaternion UVar6;
		Vector3 UVar7;

		pUVar2 = this.transform;
		this._transform = pUVar2;
		pPVar3 = this.photonView;
		this._photonView = pPVar3;
		pUVar2 = this._transform;
		if (pUVar2 != null) {
			UVar7 = (Vector3)pUVar2.position;
			this._correctPosition = UVar7;
			pUVar2 = this.transform;
			if (pUVar2 != null) {
				UVar6 = (Quaternion)pUVar2.rotation;
				this._correctRotation = UVar6;
				pUVar4 = this.GetComponent<Rigidbody>();
				this._rigidbody = pUVar4;
				pCVar5 = this.GetComponent<BaseCharacter>();
				this._character = pCVar5;
				x = (Object)this._rigidbody;
				bVar1 = (x != null);
				if (bVar1) {
					this._syncVelocity = true;
					pUVar4 = this._rigidbody;
					if (pUVar4 == null) goto label_05bbbe51;
					UVar7 = (Vector3)pUVar4.linearVelocity;
					this._correctVelocity = UVar7;
				}
				return;
			}
		}
	label_05bbbe51: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600400A")]
	[Address(RVA = "0x5ABBE60", Offset = "0x5ABAE60", VA = "0x5ABBE60", Slot = "6")]
	protected virtual void SendCustomStream(PhotonStream stream)
	{
		// Lifted from source/cpp/Characters/BaseMovementSync.c (Characters.BaseMovementSync$$SendCustomStream): clean
		return;
	}

	[Token(Token = "0x600400B")]
	[Address(RVA = "0x5ABBE70", Offset = "0x5ABAE70", VA = "0x5ABBE70", Slot = "7")]
	protected virtual void ReceiveCustomStream(PhotonStream stream)
	{
		// Lifted from source/cpp/Characters/BaseMovementSync.c (Characters.BaseMovementSync$$ReceiveCustomStream): clean
		return;
	}

	[Token(Token = "0x600400C")]
	[Address(RVA = "0x5ABBE80", Offset = "0x5ABAE80", VA = "0x5ABBE80", Slot = "8")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseMovementSync.c (Characters.BaseMovementSync$$OnPhotonSerializeView): 28 lines keep C-only constructs
		float pfVar1;
		float pfVar2;
		float pfVar3;
		byte bVar4;
		sbyte cVar5;
		Transform pUVar6;
		Rigidbody __this_00;
		BaseCharacter pCVar7;
		BaseCamera pCVar8;
		BaseComponentCache pUVar9;
		ulong uVar10;
		bool bVar11;
		float fVar12;
		uint uVar13;
		object pIVar14;
		ulong puVar15;
		uint puVar16;
		BaseMenu pUVar17;
		uint uVar18;
		Quaternion pUVar19;
		BaseMovementSync pCVar20;
		uint uVar21;
		Il2CppClass pIVar22;
		BaseMovementSync pCVar23;
		BaseMovementSync pCVar24;
		float fVar25;
		Vector3 UVar26;
		byte[] local_98 = new byte[8];
		Quaternion local_88;
		Quaternion local_78;
		PhotonStream local_68;
		Nullable<int> local_60;
		float local_54;
		BaseMovementSync local_50;
		BaseMovementSync local_48;
		float[] local_40 = new float[2];

		if (g_data_07547530 == false) {
			g_data_07547530 = true;
		}
		local_78 = (Quaternion)ZEXT816(0);
		local_60.hasValue = false;
		local_60._1_3_ = 0;
		local_60.value = 0;
		if (stream == null) goto label_05bbc68a;
		if (stream._IsWriting_k__BackingField != false) {
			pUVar6 = this._transform;
			if (pUVar6 == null) goto label_05bbc68a;
			UVar26 = pUVar6.position;
			local_40 = UVar26._0_8_;
			pIVar14 = (object)local_40;
			stream.SendNext(pIVar14);
			pUVar6 = this._transform;
			if (pUVar6 == null) goto label_05bbc68a;
			local_88 = pUVar6.rotation;
			local_54 = (float)il2cpp_runtime_helper_05b8cfd0(&local_88, 0);
			pIVar14 = (object)local_54;
			stream.SendNext(pIVar14);
			if (this._syncVelocity != false) {
				__this_00 = this._rigidbody;
				if (__this_00 == null) goto label_05bbc68a;
				UVar26 = __this_00.linearVelocity;
				local_40 = UVar26._0_8_;
				pIVar14 = (object)local_40;
				stream.SendNext(pIVar14);
			}
			pCVar7 = this._character;
			bVar11 = ((Object)pCVar7 != null);
			if (!bVar11) {
	label_05bbc4cf: ;
				this.SendCustomStream(stream);
				return;
			}
			pCVar7 = this._character;
			if (pCVar7 == null) goto label_05bbc68a;
			if (pCVar7.AI != false) goto label_05bbc4cf;
			pUVar17 = UIManager.CurrentMenu;
			if (pUVar17 == null) goto label_05bbc68a;
			bVar4 = (typeof(InGameMenu)._2).typeHierarchyDepth;
			pIVar22 = typeof(InGameMenu);
			if ((bVar4 <= (pUVar17.klass._2).typeHierarchyDepth) &&((pUVar17.klass._2).typeHierarchy[(ulong)bVar4 - 1] == typeof(InGameMenu))) {
				if (*(int)((long)&(*(ulong)((sbyte)pUVar17 + 0x230)) + 4) < 1) {
					pIVar14 = null;
				}
				else {
					pCVar8 = SceneLoader.CurrentCamera;
					if (((pCVar8 == null) ||(pUVar9 = pCVar8.Cache, pUVar9 == null)) ||(pUVar6 = pUVar9.Transform, pUVar6 == null)) goto label_05bbc68a;
					local_78 = pUVar6.rotation;
					fVar12 = (float)il2cpp_runtime_helper_05b8cfd0(&local_78, 0);
					local_40[0] = fVar12;
					pIVar14 = (object)local_40;
				}
				stream.SendNext(pIVar14);
				goto label_05bbc4cf;
			}
			goto label_05bbc6a5;
		}
		pIVar14 = stream.ReceiveNext();
		if (pIVar14 == null) goto label_05bbc68a;
		if ((pIVar14.klass._1).element_class != (typeof(Vector3)._1).element_class) goto label_05bbc68f;
		puVar15 = il2cpp_vm_Object_Unbox(pIVar14);
		uVar10 = *puVar15;
		this._correctPosition.x = (float)(int)uVar10;
		this._correctPosition.y = (float)(int)((ulong)uVar10 >> 0x20);
		this._correctPosition.z = *(float)(puVar15 + 1);
		pIVar14 = stream.ReceiveNext();
		if (pIVar14 == null) goto label_05bbc68a;
		if ((pIVar14.klass._1).element_class != (g_data_07556710._1).element_class) {
			throw new InvalidCastException();
		}
		puVar16 = il2cpp_vm_Object_Unbox(pIVar14);
		uVar13 = *puVar16;
		uVar21 = uVar13 >> 0x1e;
		pfVar1 = &this._correctRotation.w;
		pfVar2 = &this._correctRotation.z;
		pfVar3 = &this._correctRotation.y;
		fVar12 = 0.0;
		uVar18 = uVar13;
		if (uVar21 == 3) {
	label_05bbc253: ;
			fVar25 = (float)(uVar18 & 0x1ff) * 0.0013837706;
			if ((uVar18 & 0x200) != 0) {
				fVar25 = -fVar25;
			}
			*pfVar2 = fVar25;
			fVar12 = fVar12 + fVar25 * fVar25;
			uVar18 = uVar18 >> 10;
			if (uVar21 != 1) goto label_05bbc28d;
		}
		else {
			fVar12 = (float)(uVar13 & 0x1ff) * 0.0013837706;
			if ((uVar13 & 0x200) != 0) {
				fVar12 = -fVar12;
			}
			*pfVar1 = fVar12;
			fVar12 = fVar12 * fVar12 + 0.0;
			uVar18 = uVar13 >> 10;
			if (uVar21 != 2) goto label_05bbc253;
	label_05bbc28d: ;
			fVar25 = (float)(uVar18 & 0x1ff) * 0.0013837706;
			if ((uVar18 & 0x200) != 0) {
				fVar25 = -fVar25;
			}
			*pfVar3 = fVar25;
			fVar12 = fVar12 + fVar25 * fVar25;
			uVar18 = uVar18 >> 10;
		}
		pUVar19 = &this._correctRotation;
		if (0x3fffffff < uVar13) {
			fVar25 = (float)(uVar18 & 0x1ff) * 0.0013837706;
			if ((uVar18 & 0x200) != 0) {
				fVar25 = -fVar25;
			}
			pUVar19.x = fVar25;
			fVar12 = fVar12 + fVar25 * fVar25;
		}
		fVar12 = 1.0 - fVar12;
		if (fVar12 < 0.0) {
			local_68 = stream;
			local_50 = this;
			local_48 = (BaseMovementSync)local_98;
			fVar12 = sqrtf(fVar12);
			this = local_50;
			stream = local_68;
			pCVar24 = local_48;
		}
		else {
			fVar12 = SQRT(fVar12);
			pCVar24 = (BaseMovementSync)local_98;
		}
		switch(uVar21) {
		case 1:
			*pfVar3 = fVar12;
			cVar5 = this._syncVelocity;
			break;
		case 2:
			pUVar19 = (Quaternion)pfVar2;
		case 0:
			pUVar19.x = fVar12;
			cVar5 = this._syncVelocity;
			break;
		case 3:
			*pfVar1 = fVar12;
			cVar5 = this._syncVelocity;
		}
		if (cVar5 != false) {
			pIVar14 = stream.ReceiveNext();
			if (pIVar14 == null) goto label_05bbc68a;
			if ((pIVar14.klass._1).element_class != (typeof(Vector3)._1).element_class) {
	label_05bbc68f: ;
				throw new InvalidCastException();
			}
			puVar15 = il2cpp_vm_Object_Unbox(pIVar14);
			uVar10 = *puVar15;
			this._correctVelocity.x = (float)(int)uVar10;
			this._correctVelocity.y = (float)(int)((ulong)uVar10 >> 0x20);
			this._correctVelocity.z = *(float)(puVar15 + 1);
		}
		pCVar7 = this._character;
		bVar11 = ((Object)pCVar7 != null);
		if (!bVar11) goto label_05bbc658;
		pCVar7 = this._character;
		if (pCVar7 == null) {
	label_05bbc68a: ;
			throw new NullReferenceException();
		}
		if (pCVar7.AI != false) goto label_05bbc658;
		pUVar17 = (BaseMenu)stream.ReceiveNext();
		if ((pUVar17 != null) &&(pIVar22 = (typeof(Nullable<int>)._1).element_class, (Il2CppClass)pUVar17.klass != pIVar22)) {
	label_05bbc6a5: ;
			throw new InvalidCastException();
		}
		il2cpp_runtime_helper_031230d0(pUVar17, typeof(Nullable<int>), pCVar24);
		local_60 = *(Nullable<int>)&pCVar24.klass;
		if (local_60.hasValue == false) goto label_05bbc658;
		uVar13 = local_60.Value;
		uVar18 = uVar13 >> 0x1e;
		pCVar24 = (BaseMovementSync)&this._correctCamera.w;
		pfVar1 = &this._correctCamera.z;
		pCVar23 = (BaseMovementSync)&this._correctCamera.y;
		if (uVar18 == 3) {
			fVar12 = 0.0;
			uVar21 = uVar13;
	label_05bbc535: ;
			fVar25 = (float)(uVar21 & 0x1ff) * 0.0013837706;
			if ((uVar21 & 0x200) != 0) {
				fVar25 = -fVar25;
			}
			*pfVar1 = fVar25;
			fVar12 = fVar12 + fVar25 * fVar25;
			uVar21 = uVar21 >> 10;
			if (uVar18 != 1) goto label_05bbc597;
			if (uVar13 < 0x40000000) goto label_05bbc57e;
	label_05bbc5d9: ;
			fVar25 = (float)(uVar21 & 0x1ff) * 0.0013837706;
			if ((uVar21 & 0x200) != 0) {
				fVar25 = -fVar25;
			}
			this._correctCamera.x = fVar25;
			fVar12 = 1.0 - (fVar12 + fVar25 * fVar25);
			if (fVar12 < 0.0) goto label_05bbc61a;
	label_05bbc58e: ;
			fVar12 = SQRT(fVar12);
		}
		else {
			fVar12 = (float)(uVar13 & 0x1ff) * 0.0013837706;
			if ((uVar13 & 0x200) != 0) {
				fVar12 = -fVar12;
			}
			*(float)pCVar24 = fVar12;
			fVar12 = fVar12 * fVar12 + 0.0;
			uVar21 = uVar13 >> 10;
			if (uVar18 != 2) goto label_05bbc535;
	label_05bbc597: ;
			fVar25 = (float)(uVar21 & 0x1ff) * 0.0013837706;
			if ((uVar21 & 0x200) != 0) {
				fVar25 = -fVar25;
			}
			*(float)pCVar23 = fVar25;
			fVar12 = fVar12 + fVar25 * fVar25;
			uVar21 = uVar21 >> 10;
			if (0x3fffffff < uVar13) goto label_05bbc5d9;
	label_05bbc57e: ;
			fVar12 = 1.0 - fVar12;
			if (0.0 <= fVar12) goto label_05bbc58e;
	label_05bbc61a: ;
			local_50 = pCVar24;
			local_48 = pCVar23;
			fVar12 = sqrtf(fVar12);
			pCVar23 = local_48;
			pCVar24 = local_50;
		}
		pCVar20 = (BaseMovementSync)&this._correctCamera;
		switch(uVar18) {
		case 1:
			pCVar20 = pCVar23;
			break;
		case 2:
			pCVar20 = (BaseMovementSync)pfVar1;
			break;
		case 3:
			pCVar20 = pCVar24;
		}
		((Quaternion)&pCVar20.klass).x = fVar12;
	label_05bbc658: ;
		this.ReceiveCustomStream(stream);
		this._timeSinceLastMessage = 0.0;
		return;
	}

	[Token(Token = "0x600400D")]
	[Address(RVA = "0x5ABC6B0", Offset = "0x5ABB6B0", VA = "0x5ABC6B0", Slot = "9")]
	protected virtual void Update()
	{
		// Lifted from source/cpp/Characters/BaseMovementSync.c (Characters.BaseMovementSync$$Update): 8 lines keep C-only constructs
		float pfVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		PhotonView pPVar8;
		Transform pUVar9;
		ulong uVar10;
		ulong uVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		Quaternion UVar15;
		Vector3 UVar16;
		Vector3 value;
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;
		Quaternion local_30;
		Quaternion local_20;

		if (this.Disabled != false) {
			return;
		}
		pPVar8 = this._photonView;
		if (pPVar8 != null) {
			if (pPVar8._IsMine_k__BackingField != false) {
				return;
			}
			pUVar9 = this._transform;
			if (pUVar9 != null) {
				UVar16 = pUVar9.position;
				uVar2 = this._correctPosition.x;
				uVar5 = this._correctPosition.y;
				fVar13 = this._correctPosition.z;
				fVar12 = Time.deltaTime;
				fVar12 = fVar12 * 10.0;
				fVar14 = 1.0;
				if (fVar12 <= 1.0) {
					fVar14 = fVar12;
				}
				fVar14 = (float)((uint)fVar14 & -(uint)(0.0 <= fVar12));
				local_68 = UVar16.x;
				fStack_64 = UVar16.y;
				value.x = fVar14 * ((float)uVar2 - local_68) + local_68;
				value.y = fVar14 * ((float)uVar5 - fStack_64) + fStack_64;
				value.z = (fVar13 - UVar16.z) * fVar14 + UVar16.z;
				pUVar9.position = value;
				pUVar9 = this._transform;
				if (pUVar9 != null) {
					UVar15 = pUVar9.rotation;
					uVar10._0_4_ = this._correctRotation.x;
					uVar10._4_4_ = this._correctRotation.y;
					uVar11._0_4_ = this._correctRotation.z;
					uVar11._4_4_ = this._correctRotation.w;
					fVar13 = Time.deltaTime;
					local_58 = UVar15.x;
					fStack_54 = UVar15.y;
					local_20.z = UVar15.z;
					local_20.w = UVar15.w;
					local_20.x = local_58;
					local_20.y = fStack_54;
					local_30._0_8_ = uVar10;
					local_30._8_8_ = uVar11;
					UVar15 = Quaternion.Internal_Lerp(ref local_20, ref local_30, fVar13 * 10.0);
					pUVar9.rotation = UVar15;
					if (this._syncVelocity == false) {
						return;
					}
					fVar13 = this.MaxPredictionTime;
					pfVar1 = &this._timeSinceLastMessage;
					if (fVar13 < *pfVar1 || fVar13 == *pfVar1) {
						return;
					}
					uVar3 = this._correctPosition.x;
					uVar6 = this._correctPosition.y;
					fVar13 = this._correctPosition.z;
					uVar4 = this._correctVelocity.x;
					uVar7 = this._correctVelocity.y;
					fVar14 = this._correctVelocity.z;
					fVar12 = Time.deltaTime;
					this._correctPosition.x = fVar12 * (float)uVar4 + (float)uVar3;
					this._correctPosition.y = fVar12 * (float)uVar7 + (float)uVar6;
					this._correctPosition.z = fVar14 * fVar12 + fVar13;
					fVar13 = this._timeSinceLastMessage;
					fVar14 = Time.deltaTime;
					this._timeSinceLastMessage = fVar14 + fVar13;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600400E")]
	[Address(RVA = "0x5ABC890", Offset = "0x5ABB890", VA = "0x5ABC890", Slot = "4")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseMovementSync.c (Characters.BaseMovementSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView): clean
		this.OnPhotonSerializeView(stream, info);
		return;
	}

	[Token(Token = "0x600400F")]
	[Address(RVA = "0x5ABC8B0", Offset = "0x5ABB8B0", VA = "0x5ABC8B0")]
	public BaseMovementSync()
	{
		// Lifted from source/cpp/Characters/BaseMovementSync.c (Characters.BaseMovementSync$$.ctor): clean
		float fVar1;
		UnityEngine_Vector3_StaticFields pUVar2;
		UnityEngine_Quaternion_StaticFields pUVar3;
		float fVar4;
		float fVar5;
		bool bVar6;

		pUVar2 = typeof(Vector3).static_fields;
		fVar4 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._correctPosition.x = (pUVar2.zeroVector).x;
		this._correctPosition.y = fVar4;
		this._correctPosition.z = fVar1;
		if (Il2CppMethodInitialized_0753e72b == false) {
			Il2CppMethodInitialized_0753e72b = true;
			bVar6 = Il2CppMethodInitialized_0753e4b6 == false;
			pUVar3 = typeof(Quaternion).static_fields;
			fVar1 = (pUVar3.identityQuaternion).y;
			fVar4 = (pUVar3.identityQuaternion).z;
			fVar5 = (pUVar3.identityQuaternion).w;
			this._correctRotation.x = (pUVar3.identityQuaternion).x;
			this._correctRotation.y = fVar1;
			this._correctRotation.z = fVar4;
			this._correctRotation.w = fVar5;
			if (bVar6) {
				Il2CppMethodInitialized_0753e4b6 = true;
				bVar6 = Il2CppMethodInitialized_0753e72b == false;
				pUVar2 = typeof(Vector3).static_fields;
				fVar4 = (pUVar2.zeroVector).y;
				fVar1 = (pUVar2.zeroVector).z;
				this._correctVelocity.x = (pUVar2.zeroVector).x;
				this._correctVelocity.y = fVar4;
				this._correctVelocity.z = fVar1;
				if (bVar6) {
					Il2CppMethodInitialized_0753e72b = true;
				}
				goto label_05bbc968;
			}
		}
		else {
			pUVar3 = typeof(Quaternion).static_fields;
			fVar1 = (pUVar3.identityQuaternion).y;
			fVar4 = (pUVar3.identityQuaternion).z;
			fVar5 = (pUVar3.identityQuaternion).w;
			this._correctRotation.x = (pUVar3.identityQuaternion).x;
			this._correctRotation.y = fVar1;
			this._correctRotation.z = fVar4;
			this._correctRotation.w = fVar5;
		}
		pUVar2 = typeof(Vector3).static_fields;
		fVar4 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._correctVelocity.x = (pUVar2.zeroVector).x;
		this._correctVelocity.y = fVar4;
		this._correctVelocity.z = fVar1;
	label_05bbc968: ;
		pUVar3 = typeof(Quaternion).static_fields;
		fVar1 = (pUVar3.identityQuaternion).y;
		fVar4 = (pUVar3.identityQuaternion).z;
		fVar5 = (pUVar3.identityQuaternion).w;
		this._correctCamera.x = (pUVar3.identityQuaternion).x;
		this._correctCamera.y = fVar1;
		this._correctCamera.z = fVar4;
		this._correctCamera.w = fVar5;
		this.MaxPredictionTime = 0.5;
		base();
		return;
	}
}
