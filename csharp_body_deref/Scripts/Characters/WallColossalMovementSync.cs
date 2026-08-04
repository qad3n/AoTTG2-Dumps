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

[Token(Token = "0x2000546")]
internal class WallColossalMovementSync : BaseMovementSync
{
	[Token(Token = "0x40018C5")]
	[FieldOffset(Offset = "0x98")]
	protected WallColossalShifter _wallColossal;

	[Token(Token = "0x60036AC")]
	[Address(RVA = "0x4205130", Offset = "0x4205130", VA = "0x4205130", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60036AD")]
	[Address(RVA = "0x4205190", Offset = "0x4205190", VA = "0x4205190", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60036AE")]
	[Address(RVA = "0x4205220", Offset = "0x4205220", VA = "0x4205220", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60036AF")]
	[Address(RVA = "0x4205A60", Offset = "0x4205A60", VA = "0x4205A60")]
	public WallColossalMovementSync()
	{
	}
}
