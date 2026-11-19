// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIOperationState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000035")]
public static class GisketchUIOperationState
{
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x5246260", Offset = "0x5245260", VA = "0x5246260")]
	public static string BusyKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x52462A0", Offset = "0x52452A0", VA = "0x52462A0")]
	public static string IdleKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x52462E0", Offset = "0x52452E0", VA = "0x52462E0")]
	public static string MessageKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x5246320", Offset = "0x5245320", VA = "0x5246320")]
	public static bool TryBegin(GisketchUIState state, string operationKey, string message)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x5246620", Offset = "0x5245620", VA = "0x5246620")]
	public static void End(GisketchUIState state, string operationKey)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x5246780", Offset = "0x5245780", VA = "0x5246780")]
	public static bool IsBusy(GisketchUIState state, string operationKey)
	{
		return default(bool);
	}
}
