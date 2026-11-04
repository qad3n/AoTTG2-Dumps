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

[Token(Token = "0x2000902")]
public static class AottgNetworkNotifications
{
	[Token(Token = "0x4002CA7")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x4002CA8")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action<string> m_OnNetworkError;

	[Token(Token = "0x14000010")]
	public static event Action<string> OnNetworkError
	{
		[Token(Token = "0x60054DB")]
		[Address(RVA = "0x23441B0", Offset = "0x23427B0", VA = "0x1823441B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60054DC")]
		[Address(RVA = "0x2344280", Offset = "0x2342880", VA = "0x182344280")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60054DD")]
	[Address(RVA = "0x2344120", Offset = "0x2342720", VA = "0x182344120")]
	public static bool TryReport(string error)
	{
		return default(bool);
	}
}
