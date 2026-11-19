// ==================== AoTTG2 cross-reference ====================
// Type: Map.ContentLoadingState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/ContentLoadingState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003DA")]
internal static class ContentLoadingState
{
	[Token(Token = "0x6001874")]
	[Address(RVA = "0x5869560", Offset = "0x5868560", VA = "0x5869560")]
	public static bool IsFinished(bool logicLoaded, bool addonsLoaded, bool mapLoaded)
	{
		// Lifted from source/cpp/Map/ContentLoadingState.c (Map.ContentLoadingState$$IsFinished): clean
		return (logicLoaded && addonsLoaded) && mapLoaded;
	}
}
