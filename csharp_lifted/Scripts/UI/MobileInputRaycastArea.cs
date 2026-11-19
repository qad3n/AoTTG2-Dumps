// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputRaycastArea
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputRaycastArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000763")]
[RequireComponent(typeof(CanvasRenderer))]
public class MobileInputRaycastArea : Graphic
{
	[Token(Token = "0x600474F")]
	[Address(RVA = "0x5B9C680", Offset = "0x5B9B680", VA = "0x5B9C680", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper vh)
	{
		// Lifted from source/cpp/UI/MobileInputRaycastArea.c (UI.MobileInputRaycastArea$$OnPopulateMesh): clean
		if (vh == null) {
			throw new NullReferenceException();
		}
		vh.Clear();
		return;
	}

	[Token(Token = "0x6004750")]
	[Address(RVA = "0x5B9C6A0", Offset = "0x5B9B6A0", VA = "0x5B9C6A0")]
	public MobileInputRaycastArea()
	{
		// Lifted from source/cpp/UI/MobileInputRaycastArea.c (UI.MobileInputRaycastArea$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547a17 == false) {
			Il2CppMethodInitialized_07547a17 = true;
			uVar1 = (typeof(Graphic)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Graphic)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}
}
