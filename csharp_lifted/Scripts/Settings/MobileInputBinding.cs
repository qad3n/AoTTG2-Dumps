// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileInputBinding
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileInputBinding.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000097")]
internal sealed class MobileInputBinding
{
	[Token(Token = "0x1700009C")]
	public string Id
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x58CCE00", Offset = "0x58CBE00", VA = "0x58CCE00")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Settings/MobileInputBinding.c (Settings.MobileInputBinding$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x1700009D")]
	public string Group
	{
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x58CCE10", Offset = "0x58CBE10", VA = "0x58CCE10")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Settings/MobileInputBinding.c (Settings.MobileInputBinding$$get_Group): clean
			return this._Group_k__BackingField;
		}
	}

	[Token(Token = "0x1700009E")]
	public string Name
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x58CCE20", Offset = "0x58CBE20", VA = "0x58CCE20")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Settings/MobileInputBinding.c (Settings.MobileInputBinding$$get_Name): clean
			return this._Name_k__BackingField;
		}
	}

	[Token(Token = "0x1700009F")]
	public KeybindSetting Keybind
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x58CCE30", Offset = "0x58CBE30", VA = "0x58CCE30")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Settings/MobileInputBinding.c (Settings.MobileInputBinding$$get_Keybind): clean
			return this._Keybind_k__BackingField;
		}
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x58CCE40", Offset = "0x58CBE40", VA = "0x58CCE40")]
	public MobileInputBinding(string id, string group, string name, KeybindSetting keybind)
	{
		// Lifted from source/cpp/Settings/MobileInputBinding.c (Settings.MobileInputBinding$$.ctor): clean
		base();
		this._Id_k__BackingField = id;
		this._Group_k__BackingField = group;
		this._Name_k__BackingField = name;
		this._Keybind_k__BackingField = keybind;
		return;
	}
}
