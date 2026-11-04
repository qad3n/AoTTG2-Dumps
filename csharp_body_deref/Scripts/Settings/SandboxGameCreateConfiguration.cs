// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SandboxGameCreateConfiguration
// Update status: NEW in this game update
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

[Token(Token = "0x2000086")]
internal class SandboxGameCreateConfiguration
{
	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x10")]
	private string _cachedLogicSource;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<string, BaseSetting> _cachedModeSettings;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x20")]
	private string _cachedAddonSelectionKey;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, Dictionary<string, BaseSetting>> _cachedAddonSettings;

	[Token(Token = "0x17000090")]
	public string LastError
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public string MapDescription
	{
		[Token(Token = "0x600036A")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public string ModeDescription
	{
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x1DCD270", Offset = "0x1DCB870", VA = "0x181DCD270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x1DCBF50", Offset = "0x1DCA550", VA = "0x181DCBF50")]
	public void Reset()
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x1DCB0A0", Offset = "0x1DC96A0", VA = "0x181DCB0A0")]
	public string[] GetMapCategories()
	{
		return null;
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x1DCB110", Offset = "0x1DC9710", VA = "0x181DCB110")]
	public string[] GetMapNames(string category)
	{
		return null;
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x1DCAC00", Offset = "0x1DC9200", VA = "0x181DCAC00")]
	public string FindMapCategory(string mapName)
	{
		return null;
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x1DCADB0", Offset = "0x1DC93B0", VA = "0x181DCADB0")]
	public string[] GetGameModes(InGameSet settings, out int recommendedModeCount)
	{
		return null;
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x1DCA390", Offset = "0x1DC8990", VA = "0x181DCA390")]
	public void ApplyMapChange(InGameSet settings)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x1DCAD40", Offset = "0x1DC9340", VA = "0x181DCAD40")]
	public string[] GetAddonNames()
	{
		return null;
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x1DCBD50", Offset = "0x1DCA350", VA = "0x181DCBD50")]
	public void Refresh(InGameSet settings)
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x1DCCEF0", Offset = "0x1DCB4F0", VA = "0x181DCCEF0")]
	public Dictionary<string, BaseSetting> SyncModeSettings(InGameSet settings, MapScript script)
	{
		return null;
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x1DCBC90", Offset = "0x1DCA290", VA = "0x181DCBC90")]
	public void RefreshDescriptions(InGameSet settings)
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x1DCB1D0", Offset = "0x1DC97D0", VA = "0x181DCB1D0")]
	private Dictionary<string, BaseSetting> GetModeDefaults(InGameSet settings, MapScript script)
	{
		return null;
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x1DCC2F0", Offset = "0x1DCA8F0", VA = "0x181DCC2F0")]
	public Dictionary<string, Dictionary<string, BaseSetting>> SyncAddonSettings(InGameSet settings)
	{
		return null;
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x1DCA620", Offset = "0x1DC8C20", VA = "0x181DCA620")]
	public static void ApplyMiscDefaults(InGameMiscSettings misc)
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x1DCAB00", Offset = "0x1DC9100", VA = "0x181DCAB00")]
	public static void CopyInspectorBounds(BaseSetting source, BaseSetting destination)
	{
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x1DCB660", Offset = "0x1DC9C60", VA = "0x181DCB660")]
	private void NormalizeMap(InGameSet settings)
	{
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x1DCB7F0", Offset = "0x1DC9DF0", VA = "0x181DCB7F0")]
	private void NormalizeMode(InGameSet settings, MapScript script)
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x1DCB490", Offset = "0x1DC9A90", VA = "0x181DCB490")]
	private MapScript LoadMapScript(InGameSet settings)
	{
		return null;
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x1DCC050", Offset = "0x1DCA650", VA = "0x181DCC050")]
	private string[] SafeOptions(Func<string[]> getter)
	{
		return null;
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x1DCBFE0", Offset = "0x1DCA5E0", VA = "0x181DCBFE0")]
	private string SafeContent(Func<string> getter)
	{
		return null;
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x1DCC270", Offset = "0x1DCA870", VA = "0x181DCC270")]
	private void SetError(Exception exception)
	{
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x1DCBB70", Offset = "0x1DCA170", VA = "0x181DCBB70")]
	private static void PreserveInspectorMetadata(BaseSetting source, BaseSetting destination)
	{
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x1DCA870", Offset = "0x1DC8E70", VA = "0x181DCA870")]
	private static Dictionary<string, BaseSetting> CloneDictionary(Dictionary<string, BaseSetting> source)
	{
		return null;
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x1DCA900", Offset = "0x1DC8F00", VA = "0x181DCA900")]
	private static Dictionary<string, Dictionary<string, BaseSetting>> CloneNestedDictionary(Dictionary<string, Dictionary<string, BaseSetting>> source)
	{
		return null;
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SandboxGameCreateConfiguration()
	{
	}
}
