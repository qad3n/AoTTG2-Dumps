// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptObjects
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptObjects.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptObjects.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x20003BA")]
public class MapScriptObjects : BaseCSVContainer
{
	[Token(Token = "0x400138B")]
	[FieldOffset(Offset = "0x10")]
	public List<MapScriptBaseObject> Objects;

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x1ED9F70", Offset = "0x1ED8570", VA = "0x181ED9F70", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x1EDA1F0", Offset = "0x1ED87F0", VA = "0x181EDA1F0")]
	public MapScriptObjects()
	{
	}
}
