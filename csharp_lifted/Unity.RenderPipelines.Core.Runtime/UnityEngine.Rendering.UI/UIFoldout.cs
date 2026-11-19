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

[Token(Token = "0x20002FA")]
[ExecuteAlways]
public class UIFoldout : Toggle
{
	[Token(Token = "0x4000DC1")]
	[FieldOffset(Offset = "0x128")]
	public GameObject content;

	[Token(Token = "0x4000DC2")]
	[FieldOffset(Offset = "0x130")]
	public GameObject arrowOpened;

	[Token(Token = "0x4000DC3")]
	[FieldOffset(Offset = "0x138")]
	public GameObject arrowClosed;

	[Token(Token = "0x6001522")]
	[Address(RVA = "0x65AFF60", Offset = "0x65AEF60", VA = "0x65AFF60", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6001523")]
	[Address(RVA = "0x65B0020", Offset = "0x65AF020", VA = "0x65B0020")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6001524")]
	[Address(RVA = "0x65B0010", Offset = "0x65AF010", VA = "0x65B0010")]
	public void SetState(bool state)
	{
	}

	[Token(Token = "0x6001525")]
	[Address(RVA = "0x65B0030", Offset = "0x65AF030", VA = "0x65B0030")]
	public void SetState(bool state, bool rebuildLayout)
	{
	}

	[Token(Token = "0x6001526")]
	[Address(RVA = "0x65B0220", Offset = "0x65AF220", VA = "0x65B0220")]
	public UIFoldout()
	{
	}
}
