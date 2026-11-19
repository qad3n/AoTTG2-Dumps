// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalMovementSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalMovementSync.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x60043AC")]
	[Address(RVA = "0x5B1E4F0", Offset = "0x5B1D4F0", VA = "0x5B1E4F0", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60043AD")]
	[Address(RVA = "0x5B1E580", Offset = "0x5B1D580", VA = "0x5B1E580", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60043AE")]
	[Address(RVA = "0x5B1EE20", Offset = "0x5B1DE20", VA = "0x5B1EE20")]
	public WallColossalMovementSync()
	{
	}
}
