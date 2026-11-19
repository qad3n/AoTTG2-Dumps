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

[Token(Token = "0x2000313")]
[AottgDialog("profile-change-avatar")]
public sealed class AottgChangeAvatarDialog : AottgDialog
{
	[Token(Token = "0x4000F8F")]
	public const string Id = "profile-change-avatar";

	[Token(Token = "0x4000F90")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000F91")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x17000214")]
	protected override string Title
	{
		[Token(Token = "0x6001333")]
		[Address(RVA = "0x57FB550", Offset = "0x57FA550", VA = "0x57FB550", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000215")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001334")]
		[Address(RVA = "0x57FB5B0", Offset = "0x57FA5B0", VA = "0x57FB5B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000216")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001335")]
		[Address(RVA = "0x57FB5E0", Offset = "0x57FA5E0", VA = "0x57FB5E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000217")]
	protected override string BodyStyle
	{
		[Token(Token = "0x6001336")]
		[Address(RVA = "0x57FB610", Offset = "0x57FA610", VA = "0x57FB610", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000218")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6001337")]
		[Address(RVA = "0x57FB640", Offset = "0x57FA640", VA = "0x57FB640", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000219")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x6001338")]
		[Address(RVA = "0x57FB650", Offset = "0x57FA650", VA = "0x57FB650", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x57FB660", Offset = "0x57FA660", VA = "0x57FB660", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x600133A")]
		[Address(RVA = "0x57FB730", Offset = "0x57FA730", VA = "0x57FB730", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x57FB890", Offset = "0x57FA890", VA = "0x57FB890", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x57FC100", Offset = "0x57FB100", VA = "0x57FC100", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x57FC110", Offset = "0x57FB110", VA = "0x57FC110")]
	public AottgChangeAvatarDialog()
	{
	}
}
