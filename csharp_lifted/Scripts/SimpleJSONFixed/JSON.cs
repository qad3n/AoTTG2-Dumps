// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSON
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSON.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000056")]
public static class JSON
{
	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x576B090", Offset = "0x576A090", VA = "0x576B090")]
	public static JSONNode Parse(string aJSON)
	{
		// Lifted from source/cpp/SimpleJSONFixed/JSON.c (SimpleJSONFixed.JSON$$Parse): clean
		uint uVar1;
		JSONNode pSVar2;

		if (Il2CppMethodInitialized_07545147 == false) {
			Il2CppMethodInitialized_07545147 = true;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}
}
