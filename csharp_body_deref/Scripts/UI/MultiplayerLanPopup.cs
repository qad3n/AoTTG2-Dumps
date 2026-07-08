using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000654")]
internal class MultiplayerLanPopup : PromptPopup
{
	[Token(Token = "0x17000C39")]
	protected override string Title
	{
		[Token(Token = "0x6003FBA")]
		[Address(RVA = "0x3FF5E10", Offset = "0x3FF5E10", VA = "0x3FF5E10", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C3A")]
	protected override float Width
	{
		[Token(Token = "0x6003FBB")]
		[Address(RVA = "0x3FF5E40", Offset = "0x3FF5E40", VA = "0x3FF5E40", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3B")]
	protected override float Height
	{
		[Token(Token = "0x6003FBC")]
		[Address(RVA = "0x3FF5E50", Offset = "0x3FF5E50", VA = "0x3FF5E50", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3C")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003FBD")]
		[Address(RVA = "0x3FF5E60", Offset = "0x3FF5E60", VA = "0x3FF5E60", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003FBE")]
	[Address(RVA = "0x3FF5E70", Offset = "0x3FF5E70", VA = "0x3FF5E70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003FBF")]
	[Address(RVA = "0x3FF6200", Offset = "0x3FF6200", VA = "0x3FF6200")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003FC0")]
	[Address(RVA = "0x3FF62E0", Offset = "0x3FF62E0", VA = "0x3FF62E0")]
	public MultiplayerLanPopup()
	{
	}
}
