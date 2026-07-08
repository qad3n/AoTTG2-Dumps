using Il2CppDummyDll;
using Photon.Pun;

namespace Characters;

[Token(Token = "0x2000514")]
internal class BasicTitanMovementSync : BaseMovementSync
{
	[Token(Token = "0x4001932")]
	[FieldOffset(Offset = "0x98")]
	protected BasicTitan _titan;

	[Token(Token = "0x60035C4")]
	[Address(RVA = "0x3F12060", Offset = "0x3F12060", VA = "0x3F12060", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60035C5")]
	[Address(RVA = "0x3F120C0", Offset = "0x3F120C0", VA = "0x3F120C0", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60035C6")]
	[Address(RVA = "0x3F12230", Offset = "0x3F12230", VA = "0x3F12230", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60035C7")]
	[Address(RVA = "0x3F126B0", Offset = "0x3F126B0", VA = "0x3F126B0")]
	public BasicTitanMovementSync()
	{
	}
}
