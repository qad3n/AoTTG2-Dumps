// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileInputBindingRegistry
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileInputBindingRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UI;

namespace Settings;

[Token(Token = "0x2000098")]
internal static class MobileInputBindingRegistry
{
	[Token(Token = "0x4000310")]
	public const string NoneId = "None";

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, MobileInputBinding> _bindings;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<MobileInputBinding> _orderedBindings;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x10")]
	private static bool _loaded;

	[Token(Token = "0x170000A0")]
	public static bool IsReady
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x58CCEB0", Offset = "0x58CBEB0", VA = "0x58CCEB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x58CCFB0", Offset = "0x58CBFB0", VA = "0x58CCFB0")]
	public static bool TryGetBinding(string id, out MobileInputBinding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x58CD0A0", Offset = "0x58CC0A0", VA = "0x58CD0A0")]
	public static IEnumerable<MobileInputBinding> GetAll()
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x58CD0F0", Offset = "0x58CC0F0", VA = "0x58CD0F0")]
	public static string[] GetGroups()
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x58CD270", Offset = "0x58CC270", VA = "0x58CD270")]
	public static string[] GetIdsForGroup(string group)
	{
		return null;
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x58CD590", Offset = "0x58CC590", VA = "0x58CD590")]
	public static string GetMovementId(MobileInputLayoutRole role, string name)
	{
		return null;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x58CCF00", Offset = "0x58CBF00", VA = "0x58CCF00")]
	private static void EnsureLoaded()
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x58CD5F0", Offset = "0x58CC5F0", VA = "0x58CD5F0")]
	private static void RegisterInputSettings()
	{
	}
}
