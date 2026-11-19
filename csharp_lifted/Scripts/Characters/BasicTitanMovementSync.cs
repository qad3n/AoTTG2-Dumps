// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanMovementSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitanMovementSync.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanMovementSync.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;

namespace Characters;

[Token(Token = "0x2000718")]
internal class BasicTitanMovementSync : BaseMovementSync
{
	[Token(Token = "0x400231C")]
	[FieldOffset(Offset = "0x98")]
	protected BasicTitan _titan;

	[Token(Token = "0x600453B")]
	[Address(RVA = "0x5B41C00", Offset = "0x5B40C00", VA = "0x5B41C00", Slot = "5")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/BasicTitanMovementSync.c (Characters.BasicTitanMovementSync$$Awake): clean
		BasicTitan pCVar1;

		this.Awake();
		pCVar1 = this.GetComponent<BasicTitan>();
		this._titan = pCVar1;
		return;
	}

	[Token(Token = "0x600453C")]
	[Address(RVA = "0x5B41C60", Offset = "0x5B40C60", VA = "0x5B41C60", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
		// Lifted from source/cpp/Characters/BasicTitanMovementSync.c (Characters.BasicTitanMovementSync$$SendCustomStream): 6 lines keep C-only constructs
		BasicTitan pCVar1;
		System_Nullable_Quaternion__o pSVar2;
		object pIVar3;
		uint local_4c;
		System_Nullable_Quaternion__Fields local_48;
		Quaternion local_28;

		pCVar1 = this._titan;
		if (pCVar1 != null) {
			if (pCVar1.AI == false) {
				local_48.hasValue = pCVar1.LateUpdateHeadRotation.hasValue;
				local_48._1_3_ = *(undefined3)&pCVar1.LateUpdateHeadRotation.field_0x1;
				local_48.value.x = pCVar1.LateUpdateHeadRotation.value.x;
				pSVar2 = &pCVar1.LateUpdateHeadRotation;
				local_48.value.y = pSVar2.value.y;
				local_48.value.z = pSVar2.value.z;
				local_48.value.w = pCVar1.LateUpdateHeadRotation.value.w;
				if (local_48.hasValue == false) {
					if (stream != null) {
						stream.SendNext(null);
						return;
					}
				}
				else {
					local_28 = local_48.Value;
					local_4c = il2cpp_runtime_helper_05b8cfd0(&local_28, 0);
					pIVar3 = (object)local_4c;
					if (stream != null) goto label_05c41d97;
				}
			}
			else {
				local_48._0_4_ = pCVar1.TargetViewId;
				pIVar3 = (object)local_48;
				if (stream != null) {
					stream.SendNext(pIVar3);
					pCVar1 = this._titan;
					if (pCVar1 != null) {
						local_28.x._0_1_ = pCVar1.LookAtTarget;
						pIVar3 = (object)local_28;
	label_05c41d97: ;
						stream.SendNext(pIVar3);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600453D")]
	[Address(RVA = "0x5B41DD0", Offset = "0x5B40DD0", VA = "0x5B41DD0", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
		// Lifted from source/cpp/Characters/BasicTitanMovementSync.c (Characters.BasicTitanMovementSync$$ReceiveCustomStream): 17 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		BasicTitan pCVar5;
		Il2CppClass pIVar6;
		Quaternion value;
		System_Nullable_Quaternion__o pSVar8;
		uint uVar9;
		uint uVar10;
		object pIVar11;
		int piVar12;
		byte puVar13;
		float pfVar14;
		float fVar15;
		Nullable<int> local_78;
		Nullable<int> local_60;
		System_Nullable_Quaternion__Fields local_58;
		float local_40;
		float fStack_3c;
		float local_38;
		float fStack_34;

		if (g_data_07547819 == false) {
			g_data_07547819 = true;
		}
		pCVar5 = this._titan;
		if (pCVar5 == null) goto label_05c4217d;
		if (pCVar5.AI != false) {
			if ((stream != null) &&(pIVar11 = stream.ReceiveNext(), pIVar11 != null)) {
				if ((pIVar11.klass._1).element_class == *(Il2CppClass*)(g_data_07556710 + 0x40)) {
					piVar12 = il2cpp_vm_Object_Unbox(pIVar11);
					pCVar5.TargetViewId = *piVar12;
					pCVar5 = this._titan;
					pIVar11 = stream.ReceiveNext();
					if ((pCVar5 == null) || (pIVar11 == null)) goto label_05c4217d;
					if ((pIVar11.klass._1).element_class == *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
						puVar13 = il2cpp_vm_Object_Unbox(pIVar11);
						pCVar5.LookAtTarget = (bool)*puVar13;
						return;
					}
				}
				throw new InvalidCastException();
			}
			goto label_05c4217d;
		}
		if (stream == null) goto label_05c4217d;
		pIVar11 = stream.ReceiveNext();
		if ((pIVar11 != null) &&(pIVar6 = (typeof(Nullable<int>)._1).element_class, pIVar11.klass != pIVar6)) {
			throw new InvalidCastException();
		}
		il2cpp_runtime_helper_031230d0(pIVar11, typeof(Nullable<int>), &local_78);
		local_60 = local_78;
		if (local_78.hasValue == false) {
			pCVar5 = this._titan;
			if (pCVar5 != null) {
				pCVar5.LateUpdateHeadRotationRecv.hasValue = false;
				*(undefined3)&pCVar5.LateUpdateHeadRotationRecv.field_0x1 = 0;
				pCVar5.LateUpdateHeadRotationRecv.value.x = 0.0;
				pSVar8 = &pCVar5.LateUpdateHeadRotationRecv;
				pSVar8.value.y = 0.0;
				pSVar8.value.z = 0.0;
				pCVar5.LateUpdateHeadRotationRecv.value.w = 0.0;
				return;
			}
			goto label_05c4217d;
		}
		uVar1 = (Quaternion.identityQuaternion).x;
		uVar3 = (Quaternion.identityQuaternion).y;
		uVar2 = (Quaternion.identityQuaternion).z;
		uVar4 = (Quaternion.identityQuaternion).w;
		local_40 = (float)uVar1;
		fStack_3c = (float)uVar3;
		local_38 = (float)uVar2;
		fStack_34 = (float)uVar4;
		uVar9 = local_60.Value;
		if ((typeof(QuaternionCompression)._2).cctor_finished_or_no_cctor == 0) {
			if (uVar9 >> 0x1e == 3) goto label_05c41fad;
	label_05c41fee: ;
			fStack_34 = (float)(uVar9 & 0x1ff) * 0.0013837706;
			if ((uVar9 & 0x200) != 0) {
				fStack_34 = -fStack_34;
			}
			fVar15 = fStack_34 * fStack_34 + 0.0;
			uVar10 = uVar9 >> 10;
			if (uVar9 >> 0x1e != 2) goto label_05c42030;
	label_05c4206a: ;
			fStack_3c = (float)(uVar10 & 0x1ff) * 0.0013837706;
			if ((uVar10 & 0x200) != 0) {
				fStack_3c = -fStack_3c;
			}
			fVar15 = fVar15 + fStack_3c * fStack_3c;
			uVar10 = uVar10 >> 10;
		}
		else {
			if (uVar9 >> 0x1e != 3) goto label_05c41fee;
	label_05c41fad: ;
			fVar15 = 0.0;
			uVar10 = uVar9;
	label_05c42030: ;
			local_38 = (float)(uVar10 & 0x1ff) * 0.0013837706;
			if ((uVar10 & 0x200) != 0) {
				local_38 = -local_38;
			}
			fVar15 = fVar15 + local_38 * local_38;
			uVar10 = uVar10 >> 10;
			if (uVar9 >> 0x1e != 1) goto label_05c4206a;
		}
		if (0x3fffffff < uVar9) {
			local_40 = (float)(uVar10 & 0x1ff) * 0.0013837706;
			if ((uVar10 & 0x200) != 0) {
				local_40 = -local_40;
			}
			fVar15 = fVar15 + local_40 * local_40;
		}
		fVar15 = 1.0 - fVar15;
		if (fVar15 < 0.0) {
			fVar15 = sqrtf(fVar15);
		}
		else {
			fVar15 = SQRT(fVar15);
		}
		pfVar14 = &local_40;
		switch(uVar9 >> 0x1e) {
		case 1:
			pfVar14 = &fStack_3c;
			break;
		case 2:
			pfVar14 = &local_38;
			break;
		case 3:
			pfVar14 = &fStack_34;
		}
		*pfVar14 = fVar15;
		pCVar5 = this._titan;
		value.y = fStack_3c;
		value.x = local_40;
		value.z = local_38;
		value.w = fStack_34;
		local_58.hasValue = false;
		local_58._1_3_ = 0;
		local_58.value.x = 0.0;
		local_58.value.y = 0.0;
		local_58.value.z = 0.0;
		local_58.value.w = 0.0;
		local_58 = new Nullable<Quaternion>(value);
		if (pCVar5 != null) {
			pCVar5.LateUpdateHeadRotationRecv.value.w = local_58.value.w;
			pCVar5.LateUpdateHeadRotationRecv.hasValue = local_58.hasValue;
			*(undefined3)&pCVar5.LateUpdateHeadRotationRecv.field_0x1 = local_58._1_3_;
			pCVar5.LateUpdateHeadRotationRecv.value.x = local_58.value.x;
			pSVar8 = &pCVar5.LateUpdateHeadRotationRecv;
			pSVar8.value.y = local_58.value.y;
			pSVar8.value.z = local_58.value.z;
			return;
		}
	label_05c4217d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600453E")]
	[Address(RVA = "0x5B421A0", Offset = "0x5B411A0", VA = "0x5B421A0")]
	public BasicTitanMovementSync()
	{
		// Lifted from source/cpp/Characters/BasicTitanMovementSync.c (Characters.BasicTitanMovementSync$$.ctor): clean
		base();
		return;
	}
}
