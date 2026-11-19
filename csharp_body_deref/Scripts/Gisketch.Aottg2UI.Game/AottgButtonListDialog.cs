// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgButtonListDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F5")]
public abstract class AottgButtonListDialog : AottgDialog
{
	[Token(Token = "0x20001F6")]
	protected readonly struct Entry
	{
		[Token(Token = "0x4000A84")]
		[FieldOffset(Offset = "0x0")]
		public readonly AottgButtonVariant Variant;

		[Token(Token = "0x4000A85")]
		[FieldOffset(Offset = "0x8")]
		public readonly string Key;

		[Token(Token = "0x4000A86")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Icon;

		[Token(Token = "0x4000A87")]
		[FieldOffset(Offset = "0x18")]
		public readonly Action<GisketchActionContext> Action;

		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x5D7D5D0", Offset = "0x5D7C5D0", VA = "0x5D7D5D0")]
		public Entry(AottgButtonVariant variant, string key, string icon, Action<GisketchActionContext> action)
		{
		}
	}

	[Token(Token = "0x4000A83")]
	private const float EntryHeight = 80f;

	[Token(Token = "0x17000150")]
	protected abstract Entry[] Entries
	{
		[Token(Token = "0x6000BA5")]
		get;
	}

	[Token(Token = "0x17000151")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x5D7D1B0", Offset = "0x5D7C1B0", VA = "0x5D7D1B0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000152")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x5D7D1C0", Offset = "0x5D7C1C0", VA = "0x5D7D1C0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000153")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x5D7D1D0", Offset = "0x5D7C1D0", VA = "0x5D7D1D0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x5D7D2B0", Offset = "0x5D7C2B0", VA = "0x5D7D2B0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x5D7D4A0", Offset = "0x5D7C4A0", VA = "0x5D7D4A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x5D7D500", Offset = "0x5D7C500", VA = "0x5D7D500")]
	protected static Action<GisketchActionContext> CloseThen(Action action)
	{
		return null;
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x5D7D5C0", Offset = "0x5D7C5C0", VA = "0x5D7D5C0")]
	protected AottgButtonListDialog()
	{
	}
}
