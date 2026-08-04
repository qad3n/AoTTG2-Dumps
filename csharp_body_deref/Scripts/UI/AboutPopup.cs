// ==================== AoTTG2 cross-reference ====================
// Type: UI.AboutPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/AboutPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/AboutPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000677")]
internal class AboutPopup : BasePopup
{
	[Token(Token = "0x17000C6C")]
	protected override string Title
	{
		[Token(Token = "0x60040D8")]
		[Address(RVA = "0x42F08E0", Offset = "0x42F08E0", VA = "0x42F08E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C6D")]
	protected override float Width
	{
		[Token(Token = "0x60040D9")]
		[Address(RVA = "0x42F0900", Offset = "0x42F0900", VA = "0x42F0900", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C6E")]
	protected override float Height
	{
		[Token(Token = "0x60040DA")]
		[Address(RVA = "0x42F0910", Offset = "0x42F0910", VA = "0x42F0910", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C6F")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60040DB")]
		[Address(RVA = "0x42F0920", Offset = "0x42F0920", VA = "0x42F0920", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C70")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x60040DC")]
		[Address(RVA = "0x42F0930", Offset = "0x42F0930", VA = "0x42F0930", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C71")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60040DD")]
		[Address(RVA = "0x42F0940", Offset = "0x42F0940", VA = "0x42F0940", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C72")]
	protected override bool UseSound
	{
		[Token(Token = "0x60040DE")]
		[Address(RVA = "0x42F0970", Offset = "0x42F0970", VA = "0x42F0970", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60040DF")]
	[Address(RVA = "0x42F0980", Offset = "0x42F0980", VA = "0x42F0980", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60040E0")]
	[Address(RVA = "0x42F0BE0", Offset = "0x42F0BE0", VA = "0x42F0BE0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x60040E1")]
	[Address(RVA = "0x42F0EB0", Offset = "0x42F0EB0", VA = "0x42F0EB0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60040E2")]
	[Address(RVA = "0x42F09A0", Offset = "0x42F09A0", VA = "0x42F09A0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x60040E3")]
	[Address(RVA = "0x42F0F60", Offset = "0x42F0F60", VA = "0x42F0F60")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60040E4")]
	[Address(RVA = "0x42F0FD0", Offset = "0x42F0FD0", VA = "0x42F0FD0")]
	public AboutPopup()
	{
	}
}
