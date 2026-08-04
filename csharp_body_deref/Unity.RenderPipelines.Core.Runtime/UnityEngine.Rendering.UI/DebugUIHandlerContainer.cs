// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000218")]
public class DebugUIHandlerContainer : MonoBehaviour
{
	[Token(Token = "0x400086D")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	public RectTransform contentHolder;

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x4C0ED90", Offset = "0x4C0ED90", VA = "0x4C0ED90")]
	internal DebugUIHandlerWidget GetFirstItem()
	{
		return null;
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x4C0EBB0", Offset = "0x4C0EBB0", VA = "0x4C0EBB0")]
	internal DebugUIHandlerWidget GetLastItem()
	{
		return null;
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x4C0EAB0", Offset = "0x4C0EAB0", VA = "0x4C0EAB0")]
	internal bool IsDirectChild(DebugUIHandlerWidget widget)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x4C122E0", Offset = "0x4C122E0", VA = "0x4C122E0")]
	private List<DebugUIHandlerWidget> GetActiveChildren()
	{
		return null;
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x4C127D0", Offset = "0x4C127D0", VA = "0x4C127D0")]
	public DebugUIHandlerContainer()
	{
	}
}
