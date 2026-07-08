using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000226")]
public class DebugUIHandlerObject : DebugUIHandlerWidget
{
	[Token(Token = "0x400089D")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x400089E")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x48EFB90", Offset = "0x48EFB90", VA = "0x48EFB90", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x48EFC60", Offset = "0x48EFC60", VA = "0x48EFC60", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x48EFCC0", Offset = "0x48EFCC0", VA = "0x48EFCC0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x48EFD20", Offset = "0x48EFD20", VA = "0x48EFD20")]
	public DebugUIHandlerObject()
	{
	}
}
