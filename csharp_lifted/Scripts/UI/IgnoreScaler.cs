// ==================== AoTTG2 cross-reference ====================
// Type: UI.IgnoreScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IgnoreScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/IgnoreScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007E3")]
internal class IgnoreScaler : BaseScaler
{
	[Token(Token = "0x4002778")]
	[FieldOffset(Offset = "0x20")]
	public float Scale;

	[Token(Token = "0x6004C03")]
	[Address(RVA = "0x5BEC8B0", Offset = "0x5BEB8B0", VA = "0x5BEC8B0", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/IgnoreScaler.c (UI.IgnoreScaler$$ApplyScale): clean
		UISettings __this_00;
		RectTransform __this_01;
		float fVar1;
		Vector3 value;

		__this_00 = SettingsManager.UISettings;
		if (__this_00 != null) {
			fVar1 = __this_00.AppliedMasterScale;
			__this_01 = this.GetComponent<RectTransform>();
			value.x = 1.0 / fVar1;
			this.Scale = value.x;
			if (__this_01 != null) {
				value.y = value.x;
				value.z = 0.0;
				__this_01.localScale = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C04")]
	[Address(RVA = "0x5BEC960", Offset = "0x5BEB960", VA = "0x5BEC960")]
	public IgnoreScaler()
	{
		// Lifted from source/cpp/UI/IgnoreScaler.c (UI.IgnoreScaler$$.ctor): clean
		this.Scale = 1.0;
		base();
		return;
	}
}
