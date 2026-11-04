// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanMovementSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanMovementSync.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanMovementSync.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;

namespace Characters;

[Token(Token = "0x2000663")]
internal class HumanMovementSync : BaseMovementSync
{
	[Token(Token = "0x4001DD4")]
	[FieldOffset(Offset = "0x98")]
	protected Human _human;

	[Token(Token = "0x6003F48")]
	[Address(RVA = "0x21526B0", Offset = "0x2150CB0", VA = "0x1821526B0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003F49")]
	[Address(RVA = "0x21529E0", Offset = "0x2150FE0", VA = "0x1821529E0", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6003F4A")]
	[Address(RVA = "0x2152710", Offset = "0x2150D10", VA = "0x182152710", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6003F4B")]
	[Address(RVA = "0x2152AF0", Offset = "0x21510F0", VA = "0x182152AF0", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6003F4C")]
	[Address(RVA = "0x21531C0", Offset = "0x21517C0", VA = "0x1821531C0")]
	public HumanMovementSync()
	{
	}
}
