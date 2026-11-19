// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgSearchableExtensions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgSearchableExtensions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200008C")]
public static class AottgSearchableExtensions
{
	[Token(Token = "0x600045B")]
	[Address(RVA = "0x526AF30", Offset = "0x5269F30", VA = "0x526AF30")]
	public static GisketchNodeDefinition Searchable(this GisketchNodeDefinition node, [Optional] string title, [Optional] string keywords, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgSearchableExtensions.c (Gisketch.Aottg2UI.Code.AottgSearchableExtensions$$Searchable): clean
		GisketchSearchDefinition pGVar1;

		if (node != null) {
			pGVar1 = AottgUi.Search(title, keywords, false, icon, kind, sectionId, sectionTitle, autoAddKeywords);
			node.search = pGVar1;
		}
		return node;
	}
}
