// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScript
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScript.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScript.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;

namespace Map;

[Token(Token = "0x2000276")]
public class MapScript
{
	[Token(Token = "0x4000D64")]
	[FieldOffset(Offset = "0x10")]
	protected string HeaderPrefix;

	[Token(Token = "0x4000D65")]
	[FieldOffset(Offset = "0x18")]
	protected char Delimiter;

	[Token(Token = "0x4000D66")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptOptions Options;

	[Token(Token = "0x4000D67")]
	[FieldOffset(Offset = "0x28")]
	public MapScriptCustomAssets CustomAssets;

	[Token(Token = "0x4000D68")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptObjects Objects;

	[Token(Token = "0x4000D69")]
	[FieldOffset(Offset = "0x38")]
	internal WeatherSet Weather;

	[Token(Token = "0x4000D6A")]
	[FieldOffset(Offset = "0x40")]
	public string Logic;

	[Token(Token = "0x4000D6B")]
	[FieldOffset(Offset = "0x48")]
	public string MapHash;

	[Token(Token = "0x4000D6C")]
	[FieldOffset(Offset = "0x50")]
	public int LogicStart;

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x3FB3A60", Offset = "0x3FB3A60", VA = "0x3FB3A60")]
	public static MapScript CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x3FB4D20", Offset = "0x3FB4D20", VA = "0x3FB4D20", Slot = "4")]
	public virtual string Serialize()
	{
		return null;
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x3FB5290", Offset = "0x3FB5290", VA = "0x3FB5290")]
	private string CreateHeader(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x3FB52A0", Offset = "0x3FB52A0", VA = "0x3FB52A0", Slot = "5")]
	public virtual void Deserialize(string csv)
	{
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x3FB56F0", Offset = "0x3FB56F0", VA = "0x3FB56F0")]
	private void DeserializeSection(string currentSection, List<string> currentSectionItems)
	{
	}

	[Token(Token = "0x6000F3C")]
	[Address(RVA = "0x3FB3400", Offset = "0x3FB3400", VA = "0x3FB3400")]
	public MapScript()
	{
	}
}
