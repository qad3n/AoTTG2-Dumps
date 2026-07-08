using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200023A")]
[ExecuteAlways]
public class UIFoldout : Toggle
{
	[Token(Token = "0x40008EA")]
	[FieldOffset(Offset = "0x128")]
	public GameObject content;

	[Token(Token = "0x40008EB")]
	[FieldOffset(Offset = "0x130")]
	public GameObject arrowOpened;

	[Token(Token = "0x40008EC")]
	[FieldOffset(Offset = "0x138")]
	public GameObject arrowClosed;

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x48F59F0", Offset = "0x48F59F0", VA = "0x48F59F0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x48F5AB0", Offset = "0x48F5AB0", VA = "0x48F5AB0")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x48F5AA0", Offset = "0x48F5AA0", VA = "0x48F5AA0")]
	public void SetState(bool state)
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x48F5AC0", Offset = "0x48F5AC0", VA = "0x48F5AC0")]
	public void SetState(bool state, bool rebuildLayout)
	{
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x48F5CC0", Offset = "0x48F5CC0", VA = "0x48F5CC0")]
	public UIFoldout()
	{
	}
}
