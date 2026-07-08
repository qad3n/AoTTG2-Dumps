using Il2CppDummyDll;
using Photon.Pun;

namespace Characters;

[Token(Token = "0x2000501")]
internal class WallColossalMovementSync : BaseMovementSync
{
	[Token(Token = "0x40017B4")]
	[FieldOffset(Offset = "0x98")]
	protected WallColossalShifter _wallColossal;

	[Token(Token = "0x600349E")]
	[Address(RVA = "0x3EF8870", Offset = "0x3EF8870", VA = "0x3EF8870", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600349F")]
	[Address(RVA = "0x3EF88D0", Offset = "0x3EF88D0", VA = "0x3EF88D0", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60034A0")]
	[Address(RVA = "0x3EF8960", Offset = "0x3EF8960", VA = "0x3EF8960", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60034A1")]
	[Address(RVA = "0x3EF91A0", Offset = "0x3EF91A0", VA = "0x3EF91A0")]
	public WallColossalMovementSync()
	{
	}
}
