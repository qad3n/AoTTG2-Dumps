// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptOptions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptOptions.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptOptions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x200027B")]
public class MapScriptOptions : BaseCSVRow
{
	[Token(Token = "0x4000D83")]
	[FieldOffset(Offset = "0x10")]
	public string EditorVersion;

	[Token(Token = "0x4000D84")]
	[FieldOffset(Offset = "0x18")]
	public string Description;

	[Token(Token = "0x4000D85")]
	[FieldOffset(Offset = "0x20")]
	public bool HasWeather;

	[Token(Token = "0x170001D0")]
	protected override bool NamedParams
	{
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x3FB5F10", Offset = "0x3FB5F10", VA = "0x3FB5F10", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D1")]
	public override char Delimiter
	{
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x3FB5F20", Offset = "0x3FB5F20", VA = "0x3FB5F20", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x3FB5B20", Offset = "0x3FB5B20", VA = "0x3FB5B20")]
	public MapScriptOptions()
	{
	}
}
