// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLayoutManager
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLayoutManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000758")]
internal static class MobileInputLayoutManager
{
	[Token(Token = "0x4002503")]
	private const int CurrentLayoutVersion = 2;

	[Token(Token = "0x4002504")]
	private const string SelectionFileName = "MobileLayoutSelections.json";

	[Token(Token = "0x4002505")]
	private const string CustomFolderName = "MobileLayouts";

	[Token(Token = "0x4002506")]
	private const string BuiltinResourcePath = "MobileLayouts";

	[Token(Token = "0x4002507")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> _layouts;

	[Token(Token = "0x4002508")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<MobileInputLayoutRole, string> _selected;

	[Token(Token = "0x4002509")]
	[FieldOffset(Offset = "0x10")]
	private static bool _loaded;

	[Token(Token = "0x400250A")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private static Action m_OnLayoutsChanged;

	[Token(Token = "0x400250B")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static Action m_OnSelectionChanged;

	[Token(Token = "0x14000005")]
	public static event Action OnLayoutsChanged
	{
		[Token(Token = "0x6004713")]
		[Address(RVA = "0x5B63BC0", Offset = "0x5B62BC0", VA = "0x5B63BC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004714")]
		[Address(RVA = "0x5B642A0", Offset = "0x5B632A0", VA = "0x5B642A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public static event Action OnSelectionChanged
	{
		[Token(Token = "0x6004715")]
		[Address(RVA = "0x5B63AE0", Offset = "0x5B62AE0", VA = "0x5B63AE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004716")]
		[Address(RVA = "0x5B641C0", Offset = "0x5B631C0", VA = "0x5B641C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6004717")]
	[Address(RVA = "0x5B789B0", Offset = "0x5B779B0", VA = "0x5B789B0")]
	public static void EnsureLoaded()
	{
	}

	[Token(Token = "0x6004718")]
	[Address(RVA = "0x5B79890", Offset = "0x5B78890", VA = "0x5B79890")]
	public static void MigrateCustomLayouts()
	{
	}

	[Token(Token = "0x6004719")]
	[Address(RVA = "0x5B799A0", Offset = "0x5B789A0", VA = "0x5B799A0")]
	public static void RefreshControls()
	{
	}

	[Token(Token = "0x600471A")]
	[Address(RVA = "0x5B79A20", Offset = "0x5B78A20", VA = "0x5B79A20")]
	public static string[] GetLayoutNames(MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x600471B")]
	[Address(RVA = "0x5B79BD0", Offset = "0x5B78BD0", VA = "0x5B79BD0")]
	public static string GetSelectedLayoutName(MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x600471C")]
	[Address(RVA = "0x5B79C50", Offset = "0x5B78C50", VA = "0x5B79C50")]
	public static bool IsBuiltinLayoutName(MobileInputLayoutRole role, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600471D")]
	[Address(RVA = "0x5B79D80", Offset = "0x5B78D80", VA = "0x5B79D80")]
	public static string GetLayoutDisplayName(MobileInputLayoutRole role, string name)
	{
		return null;
	}

	[Token(Token = "0x600471E")]
	[Address(RVA = "0x5B6D1B0", Offset = "0x5B6C1B0", VA = "0x5B6D1B0")]
	public static string GetControlKindDisplayName(string kind)
	{
		return null;
	}

	[Token(Token = "0x600471F")]
	[Address(RVA = "0x5B79E40", Offset = "0x5B78E40", VA = "0x5B79E40")]
	public static string GetUniqueLayoutName(MobileInputLayoutRole role, string baseName)
	{
		return null;
	}

	[Token(Token = "0x6004720")]
	[Address(RVA = "0x5B7A1A0", Offset = "0x5B791A0", VA = "0x5B7A1A0")]
	public static void SetSelectedLayoutName(MobileInputLayoutRole role, string name)
	{
	}

	[Token(Token = "0x6004721")]
	[Address(RVA = "0x5B66E10", Offset = "0x5B65E10", VA = "0x5B66E10")]
	public static MobileInputLayout GetSelectedLayout(MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x6004722")]
	[Address(RVA = "0x5B7A930", Offset = "0x5B79930", VA = "0x5B7A930")]
	public static List<MobileInputLayout> GetLayouts(MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x6004723")]
	[Address(RVA = "0x5B7A9B0", Offset = "0x5B799B0", VA = "0x5B7A9B0")]
	public static void SaveCustomLayout(MobileInputLayout layout)
	{
	}

	[Token(Token = "0x6004724")]
	[Address(RVA = "0x5B7ADE0", Offset = "0x5B79DE0", VA = "0x5B7ADE0")]
	public static bool DeleteCustomLayout(MobileInputLayout layout)
	{
		return default(bool);
	}

	[Token(Token = "0x6004725")]
	[Address(RVA = "0x5B78E50", Offset = "0x5B77E50", VA = "0x5B78E50")]
	private static void LoadBuiltins()
	{
	}

	[Token(Token = "0x6004726")]
	[Address(RVA = "0x5B78F50", Offset = "0x5B77F50", VA = "0x5B78F50")]
	private static void LoadCustomLayouts()
	{
	}

	[Token(Token = "0x6004727")]
	[Address(RVA = "0x5B7B100", Offset = "0x5B7A100", VA = "0x5B7B100")]
	private static void TryAddLayout(MobileInputLayout layout, bool builtin)
	{
	}

	[Token(Token = "0x6004728")]
	[Address(RVA = "0x5B79170", Offset = "0x5B78170", VA = "0x5B79170")]
	private static void LoadSelections()
	{
	}

	[Token(Token = "0x6004729")]
	[Address(RVA = "0x5B7A410", Offset = "0x5B79410", VA = "0x5B7A410")]
	private static void SaveSelections()
	{
	}

	[Token(Token = "0x600472A")]
	[Address(RVA = "0x5B79910", Offset = "0x5B78910", VA = "0x5B79910")]
	private static string GetCustomFolder()
	{
		return null;
	}

	[Token(Token = "0x600472B")]
	[Address(RVA = "0x5B7ACE0", Offset = "0x5B79CE0", VA = "0x5B7ACE0")]
	private static string GetCustomLayoutPath(MobileInputLayout layout)
	{
		return null;
	}
}
