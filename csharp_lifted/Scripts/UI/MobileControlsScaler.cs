// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileControlsScaler
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileControlsScaler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000739")]
internal class MobileControlsScaler : BaseScaler
{
	[Token(Token = "0x600462E")]
	[Address(RVA = "0x5B6DAA0", Offset = "0x5B6CAA0", VA = "0x5B6DAA0", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/MobileControlsScaler.c (UI.MobileControlsScaler$$ApplyScale): clean
		bool bVar1;
		MobileControlsOverlay __this_00;

		__this_00 = this.GetComponent<MobileControlsOverlay>();
		bVar1 = ((Object)__this_00 != null);
		if (bVar1) {
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.RebuildAllControls();
			return;
		}
		return;
	}

	[Token(Token = "0x600462F")]
	[Address(RVA = "0x5B6DB20", Offset = "0x5B6CB20", VA = "0x5B6DB20")]
	public MobileControlsScaler()
	{
		// Lifted from source/cpp/UI/MobileControlsScaler.c (UI.MobileControlsScaler$$.ctor): clean
		base();
		return;
	}
}
