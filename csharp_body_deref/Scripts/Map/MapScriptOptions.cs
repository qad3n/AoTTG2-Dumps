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

[Token(Token = "0x200041A")]
public class MapScriptOptions : BaseCSVRow
{
	[Token(Token = "0x400152C")]
	[FieldOffset(Offset = "0x10")]
	public string EditorVersion;

	[Token(Token = "0x400152D")]
	[FieldOffset(Offset = "0x18")]
	public string Description;

	[Token(Token = "0x400152E")]
	[FieldOffset(Offset = "0x20")]
	public bool HasWeather;

	[Token(Token = "0x170002B6")]
	protected override bool NamedParams
	{
		[Token(Token = "0x6001A13")]
		[Address(RVA = "0x58A4870", Offset = "0x58A3870", VA = "0x58A4870", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B7")]
	public override char Delimiter
	{
		[Token(Token = "0x6001A14")]
		[Address(RVA = "0x58A4880", Offset = "0x58A3880", VA = "0x58A4880", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x58A2DE0", Offset = "0x58A1DE0", VA = "0x58A2DE0")]
	public MapScriptOptions()
	{
	}
}
