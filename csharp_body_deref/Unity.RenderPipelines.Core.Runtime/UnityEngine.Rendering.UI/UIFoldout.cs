// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.UIFoldout
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4C1AA60", Offset = "0x4C1AA60", VA = "0x4C1AA60", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x4C1AB20", Offset = "0x4C1AB20", VA = "0x4C1AB20")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x4C1AB10", Offset = "0x4C1AB10", VA = "0x4C1AB10")]
	public void SetState(bool state)
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4C1AB30", Offset = "0x4C1AB30", VA = "0x4C1AB30")]
	public void SetState(bool state, bool rebuildLayout)
	{
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4C1AD30", Offset = "0x4C1AD30", VA = "0x4C1AD30")]
	public UIFoldout()
	{
	}
}
