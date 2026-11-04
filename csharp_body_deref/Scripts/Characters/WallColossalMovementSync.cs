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

[Token(Token = "0x20006A4")]
internal class WallColossalMovementSync : BaseMovementSync
{
	[Token(Token = "0x4001F8B")]
	[FieldOffset(Offset = "0x98")]
	protected WallColossalShifter _wallColossal;

	[Token(Token = "0x600410B")]
	[Address(RVA = "0x2194160", Offset = "0x2192760", VA = "0x182194160", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600410C")]
	[Address(RVA = "0x2194310", Offset = "0x2192910", VA = "0x182194310", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600410D")]
	[Address(RVA = "0x21941C0", Offset = "0x21927C0", VA = "0x1821941C0", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600410E")]
	[Address(RVA = "0x21531C0", Offset = "0x21517C0", VA = "0x1821531C0")]
	public WallColossalMovementSync()
	{
	}
}
