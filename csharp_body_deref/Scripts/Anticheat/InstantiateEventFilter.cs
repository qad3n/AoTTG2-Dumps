// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.InstantiateEventFilter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/InstantiateEventFilter.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/InstantiateEventFilter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Utility;

namespace Anticheat;

[Token(Token = "0x20009E5")]
internal class InstantiateEventFilter : BaseEventFilter
{
	[Token(Token = "0x6005B3F")]
	[Address(RVA = "0x5D2C3F0", Offset = "0x5D2B3F0", VA = "0x5D2C3F0")]
	public InstantiateEventFilter(Player player, PhotonEventType eventType)
	{
	}

	[Token(Token = "0x6005B40")]
	[Address(RVA = "0x5D38860", Offset = "0x5D37860", VA = "0x5D38860", Slot = "6")]
	public override bool CheckEvent(object[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6005B41")]
	[Address(RVA = "0x5D38B50", Offset = "0x5D37B50", VA = "0x5D38B50")]
	private bool CheckRateLimit(string name, RateLimit limit, int count = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6005B42")]
	[Address(RVA = "0x5D38B40", Offset = "0x5D37B40", VA = "0x5D38B40")]
	private bool CheckInstantiate(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6005B43")]
	[Address(RVA = "0x5D38A70", Offset = "0x5D37A70", VA = "0x5D38A70")]
	private bool CheckViewIds(int senderId, int[] viewIds)
	{
		return default(bool);
	}
}
