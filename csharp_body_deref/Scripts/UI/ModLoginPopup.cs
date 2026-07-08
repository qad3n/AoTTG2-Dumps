using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000652")]
internal class ModLoginPopup : PromptPopup
{
	[Token(Token = "0x17000C2D")]
	protected override string Title
	{
		[Token(Token = "0x6003FA6")]
		[Address(RVA = "0x3FF4500", Offset = "0x3FF4500", VA = "0x3FF4500", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C2E")]
	protected override float Width
	{
		[Token(Token = "0x6003FA7")]
		[Address(RVA = "0x3FF4530", Offset = "0x3FF4530", VA = "0x3FF4530", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C2F")]
	protected override float Height
	{
		[Token(Token = "0x6003FA8")]
		[Address(RVA = "0x3FF4540", Offset = "0x3FF4540", VA = "0x3FF4540", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C30")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003FA9")]
		[Address(RVA = "0x3FF4550", Offset = "0x3FF4550", VA = "0x3FF4550", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C31")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003FAA")]
		[Address(RVA = "0x3FF4560", Offset = "0x3FF4560", VA = "0x3FF4560", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003FAB")]
	[Address(RVA = "0x3FF4570", Offset = "0x3FF4570", VA = "0x3FF4570", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003FAC")]
	[Address(RVA = "0x3FF47F0", Offset = "0x3FF47F0", VA = "0x3FF47F0")]
	protected void OnSaveButtonClick()
	{
	}

	[Token(Token = "0x6003FAD")]
	[Address(RVA = "0x3FF4860", Offset = "0x3FF4860", VA = "0x3FF4860")]
	public ModLoginPopup()
	{
	}
}
