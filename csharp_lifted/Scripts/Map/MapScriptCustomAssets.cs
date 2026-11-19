// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptCustomAssets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptCustomAssets.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptCustomAssets.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000417")]
public class MapScriptCustomAssets : BaseCSVContainer
{
	[Token(Token = "0x4001524")]
	[FieldOffset(Offset = "0x10")]
	public List<string> CustomAssets;

	[Token(Token = "0x6001A06")]
	[Address(RVA = "0x58A2E50", Offset = "0x58A1E50", VA = "0x58A2E50")]
	public MapScriptCustomAssets()
	{
		// Lifted from source/cpp/Map/MapScriptCustomAssets.c (Map.MapScriptCustomAssets$$.ctor): clean
		List<string> __this_00;

		__this_00 = new List<string>();
		this.CustomAssets = __this_00;
		base();
		return;
	}
}
