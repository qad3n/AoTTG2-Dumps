using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000023")]
public static class GisketchUIOperationState
{
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x39DBEE0", Offset = "0x39DBEE0", VA = "0x39DBEE0")]
	public static string BusyKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x39DBF20", Offset = "0x39DBF20", VA = "0x39DBF20")]
	public static string IdleKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x39DBF60", Offset = "0x39DBF60", VA = "0x39DBF60")]
	public static string MessageKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x39DBFA0", Offset = "0x39DBFA0", VA = "0x39DBFA0")]
	public static bool TryBegin(GisketchUIState state, string operationKey, string message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x39DC2A0", Offset = "0x39DC2A0", VA = "0x39DC2A0")]
	public static void End(GisketchUIState state, string operationKey)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x39DC400", Offset = "0x39DC400", VA = "0x39DC400")]
	public static bool IsBusy(GisketchUIState state, string operationKey)
	{
		return default(bool);
	}
}
