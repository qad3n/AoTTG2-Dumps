// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AottgNetworkNotifications
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AottgNetworkNotifications.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x2000779")]
public static class AottgNetworkNotifications
{
	[Token(Token = "0x40023E2")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x14000010")]
	public static event Action<string> OnNetworkError
	{
		[Token(Token = "0x6004873")]
		[Address(RVA = "0x43ABAA0", Offset = "0x43ABAA0", VA = "0x43ABAA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004874")]
		[Address(RVA = "0x43ABB70", Offset = "0x43ABB70", VA = "0x43ABB70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6004875")]
	[Address(RVA = "0x43AB390", Offset = "0x43AB390", VA = "0x43AB390")]
	public static bool TryReport(string error)
	{
		return default(bool);
	}
}
