// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SandboxGameCreateConfiguration
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/SandboxGameCreateConfiguration.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;

namespace Settings;

[Token(Token = "0x20000BD")]
internal class SandboxGameCreateConfiguration
{
	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x10")]
	private string _cachedLogicSource;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<string, BaseSetting> _cachedModeSettings;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x20")]
	private string _cachedAddonSelectionKey;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, Dictionary<string, BaseSetting>> _cachedAddonSettings;

	[Token(Token = "0x170000AD")]
	public string LastError
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x5A3CD30", Offset = "0x5A3BD30", VA = "0x5A3CD30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x5A3CD40", Offset = "0x5A3BD40", VA = "0x5A3CD40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public string MapDescription
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x5A3CD50", Offset = "0x5A3BD50", VA = "0x5A3CD50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x5A3CD60", Offset = "0x5A3BD60", VA = "0x5A3CD60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public string ModeDescription
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x5A3CD70", Offset = "0x5A3BD70", VA = "0x5A3CD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x5A3CDF0", Offset = "0x5A3BDF0", VA = "0x5A3CDF0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x5A3CE80", Offset = "0x5A3BE80", VA = "0x5A3CE80")]
	public string[] GetMapCategories()
	{
		return null;
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x5A3D1C0", Offset = "0x5A3C1C0", VA = "0x5A3D1C0")]
	public string[] GetMapNames(string category)
	{
		return null;
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x5A3D290", Offset = "0x5A3C290", VA = "0x5A3D290")]
	public string FindMapCategory(string mapName, string preferredCategory)
	{
		return null;
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x5A3D4F0", Offset = "0x5A3C4F0", VA = "0x5A3D4F0")]
	public string[] GetGameModes(InGameSet settings, out int recommendedModeCount)
	{
		return null;
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x5A3DB50", Offset = "0x5A3CB50", VA = "0x5A3DB50")]
	public void ApplyMapChange(InGameSet settings)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x5A3DD90", Offset = "0x5A3CD90", VA = "0x5A3DD90")]
	public string[] GetAddonNames()
	{
		return null;
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x5A3DE00", Offset = "0x5A3CE00", VA = "0x5A3DE00")]
	public void Refresh(InGameSet settings)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x5A3E470", Offset = "0x5A3D470", VA = "0x5A3E470")]
	public Dictionary<string, BaseSetting> SyncModeSettings(InGameSet settings, MapScript script)
	{
		return null;
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x5A3F830", Offset = "0x5A3E830", VA = "0x5A3F830")]
	public void RefreshDescriptions(InGameSet settings)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x5A3F450", Offset = "0x5A3E450", VA = "0x5A3F450")]
	private Dictionary<string, BaseSetting> GetModeDefaults(InGameSet settings, MapScript script)
	{
		return null;
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x5A3E740", Offset = "0x5A3D740", VA = "0x5A3E740")]
	public Dictionary<string, Dictionary<string, BaseSetting>> SyncAddonSettings(InGameSet settings)
	{
		return null;
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x5A3FCE0", Offset = "0x5A3ECE0", VA = "0x5A3FCE0")]
	public static void ApplyMiscDefaults(InGameMiscSettings misc)
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x5A3FF10", Offset = "0x5A3EF10", VA = "0x5A3FF10")]
	public static void CopyInspectorBounds(BaseSetting source, BaseSetting destination)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x5A3DE70", Offset = "0x5A3CE70", VA = "0x5A3DE70")]
	private void NormalizeMap(InGameSet settings)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x5A3E070", Offset = "0x5A3D070", VA = "0x5A3E070")]
	private void NormalizeMode(InGameSet settings, MapScript script)
	{
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x5A3D890", Offset = "0x5A3C890", VA = "0x5A3D890")]
	private MapScript LoadMapScript(InGameSet settings)
	{
		return null;
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x5A3CEF0", Offset = "0x5A3BEF0", VA = "0x5A3CEF0")]
	private string[] SafeOptions(Func<string[]> getter)
	{
		return null;
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x5A3F900", Offset = "0x5A3E900", VA = "0x5A3F900")]
	private string SafeContent(Func<string> getter)
	{
		return null;
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x5A3DAD0", Offset = "0x5A3CAD0", VA = "0x5A3DAD0")]
	private void SetError(Exception exception)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x5A3F7F0", Offset = "0x5A3E7F0", VA = "0x5A3F7F0")]
	private static void PreserveInspectorMetadata(BaseSetting source, BaseSetting destination)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x5A3F9D0", Offset = "0x5A3E9D0", VA = "0x5A3F9D0")]
	private static Dictionary<string, BaseSetting> CloneDictionary(Dictionary<string, BaseSetting> source)
	{
		return null;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x5A3FA60", Offset = "0x5A3EA60", VA = "0x5A3FA60")]
	private static Dictionary<string, Dictionary<string, BaseSetting>> CloneNestedDictionary(Dictionary<string, Dictionary<string, BaseSetting>> source)
	{
		return null;
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x5A40020", Offset = "0x5A3F020", VA = "0x5A40020")]
	public SandboxGameCreateConfiguration()
	{
	}
}
