// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CameraDetection
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/CameraDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/CameraDetection.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006A0")]
internal class CameraDetection : BaseDetection
{
	[Token(Token = "0x4001DF2")]
	[FieldOffset(Offset = "0x78")]
	private InGameCamera _camera;

	[Token(Token = "0x4001DF3")]
	[FieldOffset(Offset = "0x80")]
	private BaseCharacter _follow;

	[Token(Token = "0x4001DF4")]
	[FieldOffset(Offset = "0x88")]
	private Vector3 _followPosition;

	[Token(Token = "0x4001DF5")]
	[FieldOffset(Offset = "0x94")]
	private bool _hasFollow;

	[Token(Token = "0x17000B1E")]
	protected override bool RequireValidTarget
	{
		[Token(Token = "0x6004056")]
		[Address(RVA = "0x5AE5EF0", Offset = "0x5AE4EF0", VA = "0x5AE5EF0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$get_RequireValidTarget): clean
			return false;
		}
	}

	[Token(Token = "0x6004055")]
	[Address(RVA = "0x5AE5EC0", Offset = "0x5AE4EC0", VA = "0x5AE5EC0")]
	public CameraDetection(InGameCamera camera)
	{
		// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$.ctor): clean


		base(null, false, false);
		this._camera = camera;
		return;
	}

	[Token(Token = "0x6004057")]
	[Address(RVA = "0x5AE5F00", Offset = "0x5AE4F00", VA = "0x5AE5F00", Slot = "5")]
	public override bool IsNullOrDead()
	{
		// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$IsNullOrDead): clean
		return false;
	}

	[Token(Token = "0x6004058")]
	[Address(RVA = "0x5AE5F10", Offset = "0x5AE4F10", VA = "0x5AE5F10", Slot = "6")]
	public override void OnFixedUpdate()
	{
		// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$OnFixedUpdate): 3 lines keep C-only constructs
		BaseCharacter* targetAddress;
		InGameCamera pCVar1;
		BaseCharacter pCVar2;
		bool bVar3;
		Vector3 UVar4;

		pCVar1 = this._camera;
		if (pCVar1 == null) {
	label_05be5fc4: ;
			throw new NullReferenceException();
		}
		targetAddress = &this._follow;
		this._follow = pCVar1._follow;
		pCVar2 = this._follow;
		bVar3 = ((Object)pCVar2 != null);
		this._hasFollow = bVar3;
		if (bVar3) {
			pCVar2 = *targetAddress;
			if (pCVar2 == null) goto label_05be5fc4;
			UVar4 = (Vector3)pCVar2.GetCenterPosition();
			this._followPosition = UVar4;
		}
		this.OnFixedUpdate();
		return;
	}

	[Token(Token = "0x6004059")]
	[Address(RVA = "0x5AE5FD0", Offset = "0x5AE4FD0", VA = "0x5AE5FD0", Slot = "8")]
	protected override Vector3 GetPosition()
	{
		// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$GetPosition): clean
		InGameCamera pCVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		Vector3 UVar3;

		pCVar1 = this._camera;
		if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar3 = (Vector3)__this_00.position;
		return (Vector3)UVar3;
	}

	[Token(Token = "0x600405A")]
	[Address(RVA = "0x5AE6000", Offset = "0x5AE5000", VA = "0x5AE6000", Slot = "7")]
	protected override float GetSpeed()
	{
		// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$GetSpeed): clean
		BaseCharacter pCVar1;

		if (this._hasFollow == false) {
			return 0.0;
		}
		pCVar1 = this._follow;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1.CurrentSpeed;
	}

	[Token(Token = "0x600405B")]
	[Address(RVA = "0x5AE6030", Offset = "0x5AE5030", VA = "0x5AE6030")]
	public void RefreshFollow()
	{
		// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$RefreshFollow): clean
		InGameCamera pCVar1;
		BaseCharacter pCVar2;
		bool bVar3;

		pCVar1 = this._camera;
		if (pCVar1 != null) {
			pCVar2 = pCVar1._follow;
			bVar3 = ((Object)pCVar2 != null);
			if (!bVar3) {
				return;
			}
			pCVar1 = this._camera;
			if ((pCVar1 != null) &&(pCVar2 = pCVar1._follow, pCVar2 != null)) {
				pCVar2.OnDistanceUpdate(0.0, 0.0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600405C")]
	[Address(RVA = "0x5AE60D0", Offset = "0x5AE50D0", VA = "0x5AE60D0", Slot = "9")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
		// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$OnRecalculate): 6 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseCharacter y;
		bool bVar3;
		_func_179 vtableDispatch;
		MethodInfo pMVar4;
		float fVar5;
		Vector3 UVar9;
		float fVar6;
		float fVar7;
		float fVar8;

		y = this._follow;
		bVar3 = ((Object)character == (Object)y);
		if (bVar3) {
			if (character == null) {
	label_05be627f: ;
				throw new NullReferenceException();
			}
		}
		else {
			if (character == null) goto label_05be627f;
			bVar3 = character.IsMainCharacter();
			if (!bVar3) {
				fVar6 = distance;
				if (this._hasFollow != false) {
					uVar1 = this._followPosition.x;
					uVar2 = this._followPosition.y;
					fVar7 = this._followPosition.z;
					fVar8 = distance;
					UVar9._0_8_ =character.GetCenterPosition();
					fVar5 = (float)uVar2 - UVar9.y;
					fVar7 = fVar7 - fVar8;
					fVar8 = (float)uVar1 - UVar9.x;
					fVar7 = fVar5 * fVar5 + fVar8 * fVar8 + fVar7 * fVar7;
					if (fVar7 < 0.0) {
						fVar7 = sqrtf(fVar7);
					}
					else {
						fVar7 = SQRT(fVar7);
					}
					if (fVar7 <= distance) {
						fVar6 = fVar7;
					}
				}
				vtableDispatch = (character.klass.vtable)._70_OnDistanceUpdate.methodPtr;
				pMVar4 = (character.klass.vtable)._70_OnDistanceUpdate.method;
				goto label_05be6274;
			}
		}
		vtableDispatch = (character.klass.vtable)._70_OnDistanceUpdate.methodPtr;
		pMVar4 = (character.klass.vtable)._70_OnDistanceUpdate.method;
		distance = 0.0;
		fVar6 = 0.0;
	label_05be6274: ;
		(*vtableDispatch)(character,distance,fVar6,pMVar4);
		return;
	}

	[Token(Token = "0x600405D")]
	[Address(RVA = "0x5AE6290", Offset = "0x5AE5290", VA = "0x5AE6290")]
	private float GetSoundDistance(BaseCharacter character, float cameraDistance)
	{
		// Lifted from source/cpp/Characters/CameraDetection.c (Characters.CameraDetection$$GetSoundDistance): 1 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		float fVar4;
		Vector3 UVar7;
		float fVar5;
		float fVar6;

		if (this._hasFollow != false) {
			if (character == null) {
				throw new NullReferenceException();
			}
			uVar1 = this._followPosition.x;
			uVar2 = this._followPosition.y;
			fVar5 = this._followPosition.z;
			fVar6 = cameraDistance;
			UVar7._0_8_ =character.GetCenterPosition();
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			fVar4 = (float)uVar2 - UVar7.y;
			fVar5 = fVar5 - fVar6;
			fVar6 = (float)uVar1 - UVar7.x;
			fVar5 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
			if (fVar5 < 0.0) {
				fVar5 = sqrtf(fVar5);
			}
			else {
				fVar5 = SQRT(fVar5);
			}
			if (fVar5 <= cameraDistance) {
				cameraDistance = fVar5;
			}
		}
		return cameraDistance;
	}
}
