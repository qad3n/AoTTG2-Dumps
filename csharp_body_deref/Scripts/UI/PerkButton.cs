using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200056F")]
internal class PerkButton : Button
{
	[Token(Token = "0x4001AE5")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x4001AE6")]
	[FieldOffset(Offset = "0x110")]
	private float _offset;

	[Token(Token = "0x60038ED")]
	[Address(RVA = "0x3F5F4D0", Offset = "0x3F5F4D0", VA = "0x3F5F4D0")]
	private new void Awake()
	{
	}

	[Token(Token = "0x60038EE")]
	[Address(RVA = "0x3F5F560", Offset = "0x3F5F560", VA = "0x3F5F560", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style, float offset)
	{
	}

	[Token(Token = "0x60038EF")]
	[Address(RVA = "0x3F5F750", Offset = "0x3F5F750", VA = "0x3F5F750", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x60038F0")]
	[Address(RVA = "0x3F5F8D0", Offset = "0x3F5F8D0", VA = "0x3F5F8D0")]
	public PerkButton()
	{
	}
}
