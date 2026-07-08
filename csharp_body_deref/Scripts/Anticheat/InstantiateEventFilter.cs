using Il2CppDummyDll;
using Photon.Realtime;
using Utility;

namespace Anticheat;

[Token(Token = "0x2000790")]
internal class InstantiateEventFilter : BaseEventFilter
{
	[Token(Token = "0x600487C")]
	[Address(RVA = "0x40BEB90", Offset = "0x40BEB90", VA = "0x40BEB90")]
	public InstantiateEventFilter(Player player, PhotonEventType eventType)
	{
	}

	[Token(Token = "0x600487D")]
	[Address(RVA = "0x40BEBC0", Offset = "0x40BEBC0", VA = "0x40BEBC0", Slot = "6")]
	public override bool CheckEvent(object[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x600487E")]
	[Address(RVA = "0x40BEE50", Offset = "0x40BEE50", VA = "0x40BEE50")]
	private bool CheckRateLimit(string name, RateLimit limit, int count = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x600487F")]
	[Address(RVA = "0x40BEE40", Offset = "0x40BEE40", VA = "0x40BEE40")]
	private bool CheckInstantiate(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6004880")]
	[Address(RVA = "0x40BEDA0", Offset = "0x40BEDA0", VA = "0x40BEDA0")]
	private bool CheckViewIds(int senderId, int[] viewIds)
	{
		return default(bool);
	}
}
