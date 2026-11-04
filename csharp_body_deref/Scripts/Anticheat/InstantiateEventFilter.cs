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

[Token(Token = "0x200097F")]
internal class InstantiateEventFilter : BaseEventFilter
{
	[Token(Token = "0x60057E8")]
	[Address(RVA = "0x8FB340", Offset = "0x8F9940", VA = "0x1808FB340")]
	public InstantiateEventFilter(Player player, PhotonEventType eventType)
	{
	}

	[Token(Token = "0x60057E9")]
	[Address(RVA = "0x236B4F0", Offset = "0x2369AF0", VA = "0x18236B4F0", Slot = "6")]
	public override bool CheckEvent(object[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x60057EA")]
	[Address(RVA = "0x236B7A0", Offset = "0x2369DA0", VA = "0x18236B7A0")]
	private bool CheckRateLimit(string name, RateLimit limit, int count = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x60057EB")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private bool CheckInstantiate(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60057EC")]
	[Address(RVA = "0x236B850", Offset = "0x2369E50", VA = "0x18236B850")]
	private bool CheckViewIds(int senderId, int[] viewIds)
	{
		return default(bool);
	}
}
