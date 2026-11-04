// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanMovementSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitanMovementSync.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanMovementSync.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;

namespace Characters;

[Token(Token = "0x20006B9")]
internal class BasicTitanMovementSync : BaseMovementSync
{
	[Token(Token = "0x4002155")]
	[FieldOffset(Offset = "0x98")]
	protected BasicTitan _titan;

	[Token(Token = "0x600428E")]
	[Address(RVA = "0x219DF10", Offset = "0x219C510", VA = "0x18219DF10", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600428F")]
	[Address(RVA = "0x219E2E0", Offset = "0x219C8E0", VA = "0x18219E2E0", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6004290")]
	[Address(RVA = "0x219DF70", Offset = "0x219C570", VA = "0x18219DF70", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6004291")]
	[Address(RVA = "0x21531C0", Offset = "0x21517C0", VA = "0x1821531C0")]
	public BasicTitanMovementSync()
	{
	}
}
