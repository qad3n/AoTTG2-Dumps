// ==================== AoTTG2 cross-reference ====================
// Type: UI.PausePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PausePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PausePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200064A")]
internal class PausePopup : BasePopup
{
	[Token(Token = "0x17000C0F")]
	protected override string Title
	{
		[Token(Token = "0x6003F76")]
		[Address(RVA = "0x42D78F0", Offset = "0x42D78F0", VA = "0x42D78F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C10")]
	protected override float Width
	{
		[Token(Token = "0x6003F77")]
		[Address(RVA = "0x42D7990", Offset = "0x42D7990", VA = "0x42D7990", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C11")]
	protected override float Height
	{
		[Token(Token = "0x6003F78")]
		[Address(RVA = "0x42D79A0", Offset = "0x42D79A0", VA = "0x42D79A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C12")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003F79")]
		[Address(RVA = "0x42D79B0", Offset = "0x42D79B0", VA = "0x42D79B0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C13")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003F7A")]
		[Address(RVA = "0x42D79C0", Offset = "0x42D79C0", VA = "0x42D79C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003F7B")]
	[Address(RVA = "0x42D79D0", Offset = "0x42D79D0", VA = "0x42D79D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F7C")]
	[Address(RVA = "0x42D7C70", Offset = "0x42D7C70", VA = "0x42D7C70")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003F7D")]
	[Address(RVA = "0x42D7E80", Offset = "0x42D7E80", VA = "0x42D7E80")]
	public PausePopup()
	{
	}
}
