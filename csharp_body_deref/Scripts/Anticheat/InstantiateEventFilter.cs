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

[Token(Token = "0x20007F2")]
internal class InstantiateEventFilter : BaseEventFilter
{
	[Token(Token = "0x6004B6F")]
	[Address(RVA = "0x43DC510", Offset = "0x43DC510", VA = "0x43DC510")]
	public InstantiateEventFilter(Player player, PhotonEventType eventType)
	{
	}

	[Token(Token = "0x6004B70")]
	[Address(RVA = "0x43DC540", Offset = "0x43DC540", VA = "0x43DC540", Slot = "6")]
	public override bool CheckEvent(object[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6004B71")]
	[Address(RVA = "0x43DC7D0", Offset = "0x43DC7D0", VA = "0x43DC7D0")]
	private bool CheckRateLimit(string name, RateLimit limit, int count = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6004B72")]
	[Address(RVA = "0x43DC7C0", Offset = "0x43DC7C0", VA = "0x43DC7C0")]
	private bool CheckInstantiate(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6004B73")]
	[Address(RVA = "0x43DC720", Offset = "0x43DC720", VA = "0x43DC720")]
	private bool CheckViewIds(int senderId, int[] viewIds)
	{
		return default(bool);
	}
}
