using Il2CppDummyDll;
using Photon.Pun;

namespace Characters;

[Token(Token = "0x20004C4")]
internal class HumanMovementSync : BaseMovementSync
{
	[Token(Token = "0x4001639")]
	[FieldOffset(Offset = "0x98")]
	protected Human _human;

	[Token(Token = "0x600330D")]
	[Address(RVA = "0x3ED4130", Offset = "0x3ED4130", VA = "0x3ED4130", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600330E")]
	[Address(RVA = "0x3ED4190", Offset = "0x3ED4190", VA = "0x3ED4190", Slot = "6")]
	protected override void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600330F")]
	[Address(RVA = "0x3ED4280", Offset = "0x3ED4280", VA = "0x3ED4280", Slot = "7")]
	protected override void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6003310")]
	[Address(RVA = "0x3ED4640", Offset = "0x3ED4640", VA = "0x3ED4640", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6003311")]
	[Address(RVA = "0x3ED4BF0", Offset = "0x3ED4BF0", VA = "0x3ED4BF0")]
	public HumanMovementSync()
	{
	}
}
