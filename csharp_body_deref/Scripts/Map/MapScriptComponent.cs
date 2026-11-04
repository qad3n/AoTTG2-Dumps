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

[Token(Token = "0x20003B7")]
public class MapScriptComponent : BaseCSVRowItem
{
	[Token(Token = "0x4001383")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string ComponentName;

	[Token(Token = "0x4001384")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public List<string> Parameters;

	[Token(Token = "0x600178F")]
	[Address(RVA = "0x1EB5700", Offset = "0x1EB3D00", VA = "0x181EB5700")]
	public MapScriptComponent()
	{
	}
}
