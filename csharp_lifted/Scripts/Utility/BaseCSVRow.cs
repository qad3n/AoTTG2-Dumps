// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseCSVRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseCSVRow.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVRow.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000912")]
public class BaseCSVRow : BaseCSVObject
{
	[Token(Token = "0x600560C")]
	[Address(RVA = "0x5CE3290", Offset = "0x5CE2290", VA = "0x5CE3290")]
	public BaseCSVRow()
	{
		// Lifted from source/cpp/Utility/BaseCSVRow.c (Utility.BaseCSVRow$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754828f == false) {
			Il2CppMethodInitialized_0754828f = true;
			uVar1 = (typeof(BaseCSVObject)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BaseCSVObject)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}
}
