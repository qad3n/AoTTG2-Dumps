// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSandboxField
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSandboxField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200026D")]
internal sealed class AottgSandboxField
{
	[Token(Token = "0x1700016F")]
	public string Id
	{
		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x57970E0", Offset = "0x57960E0", VA = "0x57970E0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSandboxField.c (Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x17000170")]
	public string Label
	{
		[Token(Token = "0x6000E68")]
		[Address(RVA = "0x57970F0", Offset = "0x57960F0", VA = "0x57970F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSandboxField.c (Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Label): clean
			return this._Label_k__BackingField;
		}
	}

	[Token(Token = "0x17000171")]
	public BaseSetting Setting
	{
		[Token(Token = "0x6000E69")]
		[Address(RVA = "0x5797100", Offset = "0x5796100", VA = "0x5797100")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSandboxField.c (Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Setting): clean
			return this._Setting_k__BackingField;
		}
	}

	[Token(Token = "0x17000172")]
	public string[] Options
	{
		[Token(Token = "0x6000E6A")]
		[Address(RVA = "0x5797110", Offset = "0x5796110", VA = "0x5797110")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSandboxField.c (Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Options): clean
			return this._Options_k__BackingField;
		}
	}

	[Token(Token = "0x17000173")]
	public string Tooltip
	{
		[Token(Token = "0x6000E6B")]
		[Address(RVA = "0x5797120", Offset = "0x5796120", VA = "0x5797120")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSandboxField.c (Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Tooltip): clean
			return this._Tooltip_k__BackingField;
		}
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x5797130", Offset = "0x5796130", VA = "0x5797130")]
	public AottgSandboxField(string id, string label, BaseSetting setting, [Optional] string[] options, [Optional] string tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSandboxField.c (Gisketch.Aottg2UI.Game.AottgSandboxField$$.ctor): 1 lines keep C-only constructs
		base();
		this._Id_k__BackingField = id;
		this._Label_k__BackingField = label;
		this._Setting_k__BackingField = setting;
		if (options == null) {
			options = (String[])new string[0];
		}
		this._Options_k__BackingField = options;
		if (tooltip == null) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			tooltip = AottgGameCreateSession.FieldDescription(id);
		}
		this._Tooltip_k__BackingField = tooltip;
		return;
	}
}
