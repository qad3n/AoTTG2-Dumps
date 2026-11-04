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

[Token(Token = "0x20003BB")]
public class MapScriptOptions : BaseCSVRow
{
	[Token(Token = "0x400138C")]
	[FieldOffset(Offset = "0x10")]
	public string EditorVersion;

	[Token(Token = "0x400138D")]
	[FieldOffset(Offset = "0x18")]
	public string Description;

	[Token(Token = "0x400138E")]
	[FieldOffset(Offset = "0x20")]
	public bool HasWeather;

	[Token(Token = "0x17000275")]
	protected override bool NamedParams
	{
		[Token(Token = "0x600179C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000276")]
	public override char Delimiter
	{
		[Token(Token = "0x600179D")]
		[Address(RVA = "0x1EDA2E0", Offset = "0x1ED88E0", VA = "0x181EDA2E0", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x600179E")]
	[Address(RVA = "0x1EDA270", Offset = "0x1ED8870", VA = "0x181EDA270")]
	public MapScriptOptions()
	{
	}
}
