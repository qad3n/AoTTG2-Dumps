// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseCSVRowItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseCSVRowItem.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVRowItem.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000913")]
public class BaseCSVRowItem : BaseCSVObject
{
	[Token(Token = "0x17000EF2")]
	public override char Delimiter
	{
		[Token(Token = "0x600560D")]
		[Address(RVA = "0x5CE3300", Offset = "0x5CE2300", VA = "0x5CE3300", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Utility/BaseCSVRowItem.c (Utility.BaseCSVRowItem$$get_Delimiter): clean
			return 0x7c;
		}
	}

	[Token(Token = "0x600560E")]
	[Address(RVA = "0x5CE3310", Offset = "0x5CE2310", VA = "0x5CE3310")]
	public BaseCSVRowItem()
	{
		// Lifted from source/cpp/Utility/BaseCSVRowItem.c (Utility.BaseCSVRowItem$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07548290 == false) {
			Il2CppMethodInitialized_07548290 = true;
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
