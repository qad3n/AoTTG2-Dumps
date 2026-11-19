// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptCustomAssets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptCustomAssets.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptCustomAssets.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}
}
