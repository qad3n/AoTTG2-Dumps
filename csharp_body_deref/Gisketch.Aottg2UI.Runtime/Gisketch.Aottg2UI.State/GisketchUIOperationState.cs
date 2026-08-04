// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIOperationState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000024")]
public static class GisketchUIOperationState
{
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3A46560", Offset = "0x3A46560", VA = "0x3A46560")]
	public static string BusyKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3A465A0", Offset = "0x3A465A0", VA = "0x3A465A0")]
	public static string IdleKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3A465E0", Offset = "0x3A465E0", VA = "0x3A465E0")]
	public static string MessageKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3A46620", Offset = "0x3A46620", VA = "0x3A46620")]
	public static bool TryBegin(GisketchUIState state, string operationKey, string message)
	{
		return default(bool);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3A46920", Offset = "0x3A46920", VA = "0x3A46920")]
	public static void End(GisketchUIState state, string operationKey)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3A46A80", Offset = "0x3A46A80", VA = "0x3A46A80")]
	public static bool IsBusy(GisketchUIState state, string operationKey)
	{
		return default(bool);
	}
}
