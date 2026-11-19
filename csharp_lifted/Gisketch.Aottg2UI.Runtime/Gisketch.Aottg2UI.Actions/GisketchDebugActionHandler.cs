// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebugActionHandler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x2000102")]
internal sealed class GisketchDebugActionHandler : IGisketchActionHandler
{
	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x52AB4C0", Offset = "0x52AA4C0", VA = "0x52AB4C0", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebugActionHandler.c (Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler$$HandleAction): clean
		String message;

		message = String.Format("Gisketch AoTTG2 UI action: {0} ({1})", (object)actionId, (object)context.ElementId);
		Debug.Log((object)message);
		return;
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x52AB540", Offset = "0x52AA540", VA = "0x52AB540")]
	public GisketchDebugActionHandler()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebugActionHandler.c (Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler$$.ctor): clean
		base();
		return;
	}
}
