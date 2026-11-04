// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using GameProgress;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002CE")]
[AottgDialog("profile-stats-clear-confirm")]
public sealed class AottgProfileStatsClearDialog : AottgDialog
{
	[Token(Token = "0x4000E5A")]
	public const string Id = "profile-stats-clear-confirm";

	[Token(Token = "0x4000E5B")]
	[FieldOffset(Offset = "0x0")]
	private static GameStatRecord? _record;

	[Token(Token = "0x4000E5C")]
	[FieldOffset(Offset = "0x8")]
	private static string _label;

	[Token(Token = "0x170001EF")]
	protected override string Title
	{
		[Token(Token = "0x600118F")]
		[Address(RVA = "0x1E1F4A0", Offset = "0x1E1DAA0", VA = "0x181E1F4A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F0")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6001190")]
		[Address(RVA = "0x868060", Offset = "0x866660", VA = "0x180868060", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001F1")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6001191")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F2")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001192")]
		[Address(RVA = "0x1E1F3A0", Offset = "0x1E1D9A0", VA = "0x181E1F3A0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x1E1F210", Offset = "0x1E1D810", VA = "0x181E1F210")]
	internal static void Open(GisketchActionContext context, GameStatRecord record, string label)
	{
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x1E1F130", Offset = "0x1E1D730", VA = "0x181E1F130")]
	internal static void OpenAll(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6001195")]
	[Address(RVA = "0x1E1EE40", Offset = "0x1E1D440", VA = "0x181E1EE40", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x1E1EF10", Offset = "0x1E1D510", VA = "0x181E1EF10", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x1E1F320", Offset = "0x1E1D920", VA = "0x181E1F320")]
	private static void Show(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x1E1EFF0", Offset = "0x1E1D5F0", VA = "0x181E1EFF0")]
	private static void Confirm(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgProfileStatsClearDialog()
	{
	}
}
