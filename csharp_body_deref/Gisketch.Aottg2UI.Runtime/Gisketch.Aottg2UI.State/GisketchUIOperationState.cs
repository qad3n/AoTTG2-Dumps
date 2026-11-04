// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIOperationState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x200002E")]
public static class GisketchUIOperationState
{
	[Token(Token = "0x6000189")]
	[Address(RVA = "0x18BDC50", Offset = "0x18BC250", VA = "0x1818BDC50")]
	public static string BusyKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x18BDE00", Offset = "0x18BC400", VA = "0x1818BDE00")]
	public static string IdleKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x18BDF50", Offset = "0x18BC550", VA = "0x1818BDF50")]
	public static string MessageKey(string operationKey)
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x18BDF90", Offset = "0x18BC590", VA = "0x1818BDF90")]
	public static bool TryBegin(GisketchUIState state, string operationKey, string message)
	{
		return default(bool);
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x18BDC90", Offset = "0x18BC290", VA = "0x1818BDC90")]
	public static void End(GisketchUIState state, string operationKey)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x18BDE40", Offset = "0x18BC440", VA = "0x1818BDE40")]
	public static bool IsBusy(GisketchUIState state, string operationKey)
	{
		return default(bool);
	}
}
