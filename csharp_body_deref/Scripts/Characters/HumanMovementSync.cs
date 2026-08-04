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

[Token(Token = "0x2000509")]
internal class HumanMovementSync : BaseMovementSync
{
	[Token(Token = "0x400174A")]
	[FieldOffset(Offset = "0x98")]
	protected Human _human;

	[Token(Token = "0x600351B")]
	[Address(RVA = "0x41E09F0", Offset = "0x41E09F0", VA = "0x41E09F0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600351C")]
	[Address(RVA = "0x41E0A50", Offset = "0x41E0A50", VA = "0x41E0A50", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600351D")]
	[Address(RVA = "0x41E0B40", Offset = "0x41E0B40", VA = "0x41E0B40", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600351E")]
	[Address(RVA = "0x41E0F00", Offset = "0x41E0F00", VA = "0x41E0F00", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600351F")]
	[Address(RVA = "0x41E14B0", Offset = "0x41E14B0", VA = "0x41E14B0")]
	public HumanMovementSync()
	{
	}
}
