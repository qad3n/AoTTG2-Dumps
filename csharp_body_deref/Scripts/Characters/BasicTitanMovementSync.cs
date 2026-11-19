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
	}

	[Token(Token = "0x600453C")]
	[Address(RVA = "0x5B41C60", Offset = "0x5B40C60", VA = "0x5B41C60", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600453D")]
	[Address(RVA = "0x5B41DD0", Offset = "0x5B40DD0", VA = "0x5B41DD0", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600453E")]
	[Address(RVA = "0x5B421A0", Offset = "0x5B411A0", VA = "0x5B421A0")]
	public BasicTitanMovementSync()
	{
	}
}
