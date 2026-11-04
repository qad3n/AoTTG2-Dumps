// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScript
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapScript.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScript.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;

namespace Map;

[Token(Token = "0x20003B5")]
public class MapScript
{
	[Token(Token = "0x4001366")]
	[FieldOffset(Offset = "0x10")]
	protected string HeaderPrefix;

	[Token(Token = "0x4001367")]
	[FieldOffset(Offset = "0x18")]
	protected char Delimiter;

	[Token(Token = "0x4001368")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptOptions Options;

	[Token(Token = "0x4001369")]
	[FieldOffset(Offset = "0x28")]
	public MapScriptCustomAssets CustomAssets;

	[Token(Token = "0x400136A")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptObjects Objects;

	[Token(Token = "0x400136B")]
	[FieldOffset(Offset = "0x38")]
	internal WeatherSet Weather;

	[Token(Token = "0x400136C")]
	[FieldOffset(Offset = "0x40")]
	public string Logic;

	[Token(Token = "0x400136D")]
	[FieldOffset(Offset = "0x48")]
	public string MapHash;

	[Token(Token = "0x400136E")]
	[FieldOffset(Offset = "0x50")]
	public int LogicStart;

	[Token(Token = "0x17000272")]
	public MapVersionConversionResult LastUpgradeResult
	{
		[Token(Token = "0x600177D")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600177E")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000273")]
	public string OriginalCSV
	{
		[Token(Token = "0x600177F")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001780")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001781")]
	[Address(RVA = "0x1EB5820", Offset = "0x1EB3E20", VA = "0x181EB5820")]
	public static MapScript CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x6001782")]
	[Address(RVA = "0x1EB62E0", Offset = "0x1EB48E0", VA = "0x181EB62E0", Slot = "4")]
	public virtual string Serialize()
	{
		return null;
	}

	[Token(Token = "0x6001783")]
	[Address(RVA = "0x1EB5C80", Offset = "0x1EB4280", VA = "0x181EB5C80")]
	private string CreateHeader(string name)
	{
		return null;
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x1EB5F50", Offset = "0x1EB4550", VA = "0x181EB5F50", Slot = "5")]
	public virtual void Deserialize(string csv)
	{
	}

	[Token(Token = "0x6001785")]
	[Address(RVA = "0x1EB5C90", Offset = "0x1EB4290", VA = "0x181EB5C90")]
	private void DeserializeSection(string currentSection, List<string> currentSectionItems)
	{
	}

	[Token(Token = "0x6001786")]
	[Address(RVA = "0x1EB68A0", Offset = "0x1EB4EA0", VA = "0x181EB68A0")]
	public MapScript()
	{
	}
}
