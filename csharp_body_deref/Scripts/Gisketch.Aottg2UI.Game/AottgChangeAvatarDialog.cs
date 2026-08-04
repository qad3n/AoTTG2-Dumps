// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001AF")]
[AottgDialog("profile-change-avatar")]
public sealed class AottgChangeAvatarDialog : AottgDialog
{
	[Token(Token = "0x4000953")]
	public const string Id = "profile-change-avatar";

	[Token(Token = "0x4000954")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000955")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x17000150")]
	protected override string Title
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x441ED40", Offset = "0x441ED40", VA = "0x441ED40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000151")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x441ED70", Offset = "0x441ED70", VA = "0x441ED70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x441EDA0", Offset = "0x441EDA0", VA = "0x441EDA0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000153")]
	protected override string BodyStyle
	{
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x441EDD0", Offset = "0x441EDD0", VA = "0x441EDD0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000154")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x441EE00", Offset = "0x441EE00", VA = "0x441EE00", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000155")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x441EE10", Offset = "0x441EE10", VA = "0x441EE10", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000156")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x441EEF0", Offset = "0x441EEF0", VA = "0x441EEF0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x441F070", Offset = "0x441F070", VA = "0x441F070", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x441F640", Offset = "0x441F640", VA = "0x441F640", Slot = "18")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x441F650", Offset = "0x441F650", VA = "0x441F650")]
	public AottgChangeAvatarDialog()
	{
	}
}
