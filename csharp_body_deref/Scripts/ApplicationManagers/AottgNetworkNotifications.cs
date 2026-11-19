// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AottgNetworkNotifications
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AottgNetworkNotifications.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200096C")]
public static class AottgNetworkNotifications
{
	[Token(Token = "0x4002F67")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x4002F68")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action<string> m_OnNetworkError;

	[Token(Token = "0x4002F69")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	private static Action<short, bool> m_OnRoomEntryFailed;

	[Token(Token = "0x14000013")]
	public static event Action<string> OnNetworkError
	{
		[Token(Token = "0x6005839")]
		[Address(RVA = "0x5D07C80", Offset = "0x5D06C80", VA = "0x5D07C80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600583A")]
		[Address(RVA = "0x5D07D50", Offset = "0x5D06D50", VA = "0x5D07D50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	public static event Action<short, bool> OnRoomEntryFailed
	{
		[Token(Token = "0x600583B")]
		[Address(RVA = "0x5D07E20", Offset = "0x5D06E20", VA = "0x5D07E20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600583C")]
		[Address(RVA = "0x5D07EF0", Offset = "0x5D06EF0", VA = "0x5D07EF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600583D")]
	[Address(RVA = "0x5D07FC0", Offset = "0x5D06FC0", VA = "0x5D07FC0")]
	public static void ReportRoomEntryFailed(short returnCode, bool creating)
	{
	}

	[Token(Token = "0x600583E")]
	[Address(RVA = "0x5D08020", Offset = "0x5D07020", VA = "0x5D08020")]
	public static bool TryReport(string error)
	{
		return default(bool);
	}
}
