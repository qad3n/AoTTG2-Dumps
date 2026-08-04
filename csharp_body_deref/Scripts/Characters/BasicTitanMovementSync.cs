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

[Token(Token = "0x2000559")]
internal class BasicTitanMovementSync : BaseMovementSync
{
	[Token(Token = "0x4001A45")]
	[FieldOffset(Offset = "0x98")]
	protected BasicTitan _titan;

	[Token(Token = "0x60037D2")]
	[Address(RVA = "0x421EA60", Offset = "0x421EA60", VA = "0x421EA60", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60037D3")]
	[Address(RVA = "0x421EAC0", Offset = "0x421EAC0", VA = "0x421EAC0", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60037D4")]
	[Address(RVA = "0x421EC30", Offset = "0x421EC30", VA = "0x421EC30", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60037D5")]
	[Address(RVA = "0x421F0B0", Offset = "0x421F0B0", VA = "0x421F0B0")]
	public BasicTitanMovementSync()
	{
	}
}
