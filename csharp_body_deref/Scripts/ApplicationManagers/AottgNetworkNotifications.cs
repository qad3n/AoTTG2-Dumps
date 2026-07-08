using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200072B")]
public static class AottgNetworkNotifications
{
	[Token(Token = "0x4002285")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x1400000F")]
	public static event Action<string> OnNetworkError
	{
		[Token(Token = "0x600460B")]
		[Address(RVA = "0x4093A50", Offset = "0x4093A50", VA = "0x4093A50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600460C")]
		[Address(RVA = "0x4093B20", Offset = "0x4093B20", VA = "0x4093B20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600460D")]
	[Address(RVA = "0x4093340", Offset = "0x4093340", VA = "0x4093340")]
	public static bool TryReport(string error)
	{
		return default(bool);
	}
}
