// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIOperationState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c (Gisketch.Aottg2UI.State.GisketchUIOperationState$$BusyKey): clean
		String pSVar1;

		pSVar1 = String.Concat(operationKey, ".busy");
		return pSVar1;
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x52462A0", Offset = "0x52452A0", VA = "0x52462A0")]
	public static string IdleKey(string operationKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c (Gisketch.Aottg2UI.State.GisketchUIOperationState$$IdleKey): clean
		String pSVar1;

		pSVar1 = String.Concat(operationKey, ".idle");
		return pSVar1;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x52462E0", Offset = "0x52452E0", VA = "0x52462E0")]
	public static string MessageKey(string operationKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c (Gisketch.Aottg2UI.State.GisketchUIOperationState$$MessageKey): clean
		String pSVar1;

		pSVar1 = String.Concat(operationKey, ".message");
		return pSVar1;
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x5246320", Offset = "0x5245320", VA = "0x5246320")]
	public static bool TryBegin(GisketchUIState state, string operationKey, string message)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c (Gisketch.Aottg2UI.State.GisketchUIOperationState$$TryBegin): clean
		bool bVar1;
		String pSVar2;
		bool bVar3;

		if (state != null) {
			bVar1 = String.IsNullOrEmpty(operationKey);
			if (!bVar1) {
				pSVar2 = String.Concat(operationKey, ".busy");
				bVar1 = state.GetBool(pSVar2, false);
				if (!bVar1) {
					pSVar2 = String.Concat(operationKey, ".busy");
					state.Set(pSVar2, "true");
					pSVar2 = String.Concat(operationKey, ".idle");
					state.Set(pSVar2, "false");
					pSVar2 = String.Concat(operationKey, ".message");
					state.Set(pSVar2, message);
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x5246620", Offset = "0x5245620", VA = "0x5246620")]
	public static void End(GisketchUIState state, string operationKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c (Gisketch.Aottg2UI.State.GisketchUIOperationState$$End): clean
		bool bVar1;
		String pSVar2;

		if (state != null) {
			bVar1 = String.IsNullOrEmpty(operationKey);
			if (!bVar1) {
				pSVar2 = String.Concat(operationKey, ".busy");
				state.Set(pSVar2, "false");
				pSVar2 = String.Concat(operationKey, ".idle");
				state.Set(pSVar2, "true");
				pSVar2 = String.Concat(operationKey, ".message");
				state.Set(pSVar2, (String)(*(MethodInfo*)(g_data_07556758 + 0xb8)).methodPointer);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x5246780", Offset = "0x5245780", VA = "0x5246780")]
	public static bool IsBusy(GisketchUIState state, string operationKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIOperationState.c (Gisketch.Aottg2UI.State.GisketchUIOperationState$$IsBusy): clean
		bool bVar1;
		String key;

		if (state != null) {
			bVar1 = String.IsNullOrEmpty(operationKey);
			if (!bVar1) {
				key = String.Concat(operationKey, ".busy");
				bVar1 = state.GetBool(key, false);
				return bVar1;
			}
		}
		return false;
	}
}
