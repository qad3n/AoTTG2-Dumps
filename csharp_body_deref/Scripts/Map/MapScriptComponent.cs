// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptComponent
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapScriptComponent.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptComponent.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000416")]
public class MapScriptComponent : BaseCSVRowItem
{
	[Token(Token = "0x4001521")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string ComponentName;

	[Token(Token = "0x4001522")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public List<string> Parameters;

	[Token(Token = "0x4001523")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] ReservedParameterChars;

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x58A3BB0", Offset = "0x58A2BB0", VA = "0x58A3BB0")]
	public static string SanitizeParameter(string value)
	{
		return null;
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x58A3C90", Offset = "0x58A2C90", VA = "0x58A3C90")]
	public MapScriptComponent()
	{
	}
}
