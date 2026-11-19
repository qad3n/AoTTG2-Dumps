// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalMovementSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalMovementSync.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;

namespace Characters;

[Token(Token = "0x2000704")]
internal class WallColossalMovementSync : BaseMovementSync
{
	[Token(Token = "0x400213E")]
	[FieldOffset(Offset = "0x98")]
	protected WallColossalShifter _wallColossal;

	[Token(Token = "0x60043AB")]
	[Address(RVA = "0x5B1E490", Offset = "0x5B1D490", VA = "0x5B1E490", Slot = "5")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/WallColossalMovementSync.c (Characters.WallColossalMovementSync$$Awake): clean
		WallColossalShifter pCVar1;

		this.Awake();
		pCVar1 = this.GetComponent<WallColossalShifter>() ;
		this._wallColossal = pCVar1;
		return;
	}

	[Token(Token = "0x60043AC")]
	[Address(RVA = "0x5B1E4F0", Offset = "0x5B1D4F0", VA = "0x5B1E4F0", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
		// Lifted from source/cpp/Characters/WallColossalMovementSync.c (Characters.WallColossalMovementSync$$SendCustomStream): 2 lines keep C-only constructs
		WallColossalShifter pCVar1;
		object pIVar2;
		byte local_1a;
		byte local_19;

		pCVar1 = this._wallColossal;
		if (pCVar1 != null) {
			local_19 = (undefined1)pCVar1._steamState;
			pIVar2 = (object)local_19;
			if (stream != null) {
				stream.SendNext(pIVar2);
				pCVar1 = this._wallColossal;
				if (pCVar1 != null) {
					local_1a = (undefined1)pCVar1._stunState;
					pIVar2 = (object)local_1a;
					stream.SendNext(pIVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043AD")]
	[Address(RVA = "0x5B1E580", Offset = "0x5B1D580", VA = "0x5B1E580", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
		// Lifted from source/cpp/Characters/WallColossalMovementSync.c (Characters.WallColossalMovementSync$$ReceiveCustomStream): 10 lines keep C-only constructs
		WallColossalShifter pCVar1;
		object pIVar2;
		int piVar3;

		if (stream != null) {
			pIVar2 = stream.PeekNext();
			if ((pIVar2 != null) && (pIVar2.klass == g_data_075566e0)) {
				pIVar2 = stream.ReceiveNext();
				if (pIVar2 == null) goto label_05c1e6a6;
				if ((pIVar2.klass._1).element_class != (typeof(ColossalSteamState)._1).element_class) goto label_05c1e6ab;
				piVar3 = il2cpp_vm_Object_Unbox(pIVar2);
				pCVar1 = this._wallColossal;
				if (pCVar1 == null) goto label_05c1e6a6;
				if (pCVar1._steamState != *piVar3) {
					pCVar1.ApplySteamState(*piVar3);
				}
			}
			pIVar2 = stream.PeekNext();
			if ((pIVar2 == null) || (pIVar2.klass != g_data_075566e0)) {
				return;
			}
			pIVar2 = stream.ReceiveNext();
			if (pIVar2 != null) {
				if ((pIVar2.klass._1).element_class != (typeof(ColossalStunState)._1).element_class) {
	label_05c1e6ab: ;
					throw new InvalidCastException();
				}
				piVar3 = il2cpp_vm_Object_Unbox(pIVar2);
				pCVar1 = this._wallColossal;
				if (pCVar1 != null) {
					if (pCVar1._stunState == *piVar3) {
						return;
					}
					pCVar1.ApplyStunState(*piVar3);
					return;
				}
			}
		}
	label_05c1e6a6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043AE")]
	[Address(RVA = "0x5B1EE20", Offset = "0x5B1DE20", VA = "0x5B1EE20")]
	public WallColossalMovementSync()
	{
		// Lifted from source/cpp/Characters/WallColossalMovementSync.c (Characters.WallColossalMovementSync$$.ctor): clean
		base();
		return;
	}
}
