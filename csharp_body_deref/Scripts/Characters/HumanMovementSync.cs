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

[Token(Token = "0x20006C2")]
internal class HumanMovementSync : BaseMovementSync
{
	[Token(Token = "0x4001F82")]
	[FieldOffset(Offset = "0x98")]
	protected Human _human;

	[Token(Token = "0x60041E0")]
	[Address(RVA = "0x5AF55C0", Offset = "0x5AF45C0", VA = "0x5AF55C0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60041E1")]
	[Address(RVA = "0x5AF5620", Offset = "0x5AF4620", VA = "0x5AF5620", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60041E2")]
	[Address(RVA = "0x5AF5710", Offset = "0x5AF4710", VA = "0x5AF5710", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60041E3")]
	[Address(RVA = "0x5AF5A10", Offset = "0x5AF4A10", VA = "0x5AF5A10", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60041E4")]
	[Address(RVA = "0x5AF5FC0", Offset = "0x5AF4FC0", VA = "0x5AF5FC0")]
	public HumanMovementSync()
	{
	}
}
