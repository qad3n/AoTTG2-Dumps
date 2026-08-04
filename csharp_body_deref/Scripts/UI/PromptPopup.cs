// ==================== AoTTG2 cross-reference ====================
// Type: UI.PromptPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PromptPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/PromptPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000582")]
internal class PromptPopup : BasePopup
{
	[Token(Token = "0x17000ADD")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003946")]
		[Address(RVA = "0x4250420", Offset = "0x4250420", VA = "0x4250420", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ADE")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003947")]
		[Address(RVA = "0x4250430", Offset = "0x4250430", VA = "0x4250430", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ADF")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6003948")]
		[Address(RVA = "0x4250440", Offset = "0x4250440", VA = "0x4250440", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AE0")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6003949")]
		[Address(RVA = "0x4250450", Offset = "0x4250450", VA = "0x4250450", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600394A")]
	[Address(RVA = "0x4246E40", Offset = "0x4246E40", VA = "0x4246E40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600394B")]
	[Address(RVA = "0x4250460", Offset = "0x4250460", VA = "0x4250460")]
	public void Update()
	{
	}

	[Token(Token = "0x600394C")]
	[Address(RVA = "0x424AC10", Offset = "0x424AC10", VA = "0x424AC10")]
	public PromptPopup()
	{
	}
}
