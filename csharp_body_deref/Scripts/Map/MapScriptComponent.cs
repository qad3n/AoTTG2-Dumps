// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptComponent
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptComponent.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptComponent.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000278")]
public class MapScriptComponent : BaseCSVRowItem
{
	[Token(Token = "0x4000D7F")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string ComponentName;

	[Token(Token = "0x4000D80")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public List<string> Parameters;

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x3FB5D70", Offset = "0x3FB5D70", VA = "0x3FB5D70")]
	public MapScriptComponent()
	{
	}
}
