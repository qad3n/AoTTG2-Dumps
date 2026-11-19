// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScript
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapScript.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScript.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;

namespace Map;

[Token(Token = "0x2000412")]
public class MapScript
{
	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0x10")]
	protected string HeaderPrefix;

	[Token(Token = "0x40014FE")]
	[FieldOffset(Offset = "0x18")]
	protected char Delimiter;

	[Token(Token = "0x40014FF")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptOptions Options;

	[Token(Token = "0x4001500")]
	[FieldOffset(Offset = "0x28")]
	public MapScriptCustomAssets CustomAssets;

	[Token(Token = "0x4001501")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptObjects Objects;

	[Token(Token = "0x4001502")]
	[FieldOffset(Offset = "0x38")]
	internal WeatherSet Weather;

	[Token(Token = "0x4001503")]
	[FieldOffset(Offset = "0x40")]
	public string Logic;

	[Token(Token = "0x4001504")]
	[FieldOffset(Offset = "0x48")]
	public string MapHash;

	[Token(Token = "0x4001505")]
	[FieldOffset(Offset = "0x50")]
	public int LogicStart;

	[Token(Token = "0x4001508")]
	[FieldOffset(Offset = "0x68")]
	public readonly List<string> Errors;

	[Token(Token = "0x170002B3")]
	public MapVersionConversionResult LastUpgradeResult
	{
		[Token(Token = "0x60019EB")]
		[Address(RVA = "0x58A1D60", Offset = "0x58A0D60", VA = "0x58A1D60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60019EC")]
		[Address(RVA = "0x58A1D70", Offset = "0x58A0D70", VA = "0x58A1D70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002B4")]
	public string OriginalCSV
	{
		[Token(Token = "0x60019ED")]
		[Address(RVA = "0x58A1D80", Offset = "0x58A0D80", VA = "0x58A1D80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60019EE")]
		[Address(RVA = "0x58A1D90", Offset = "0x58A0D90", VA = "0x58A1D90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x58A0DB0", Offset = "0x589FDB0", VA = "0x58A0DB0")]
	public static MapScript CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x58A2030", Offset = "0x58A1030", VA = "0x58A2030", Slot = "4")]
	public virtual string Serialize()
	{
		return null;
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x58A2570", Offset = "0x58A1570", VA = "0x58A2570")]
	private string CreateHeader(string name)
	{
		return null;
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x58A2580", Offset = "0x58A1580", VA = "0x58A2580", Slot = "5")]
	public virtual void Deserialize(string csv, bool skipErrors = false)
	{
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x58A2C80", Offset = "0x58A1C80", VA = "0x58A2C80")]
	private void DeserializeSection(string currentSection, List<string> currentSectionItems, bool skipErrors)
	{
	}

	[Token(Token = "0x60019F4")]
	[Address(RVA = "0x58A2AC0", Offset = "0x58A1AC0", VA = "0x58A2AC0")]
	private void RunSection(string section, Action action, bool skipErrors)
	{
	}

	[Token(Token = "0x60019F5")]
	[Address(RVA = "0x58A0530", Offset = "0x589F530", VA = "0x58A0530")]
	public MapScript()
	{
	}
}
