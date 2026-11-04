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

[Token(Token = "0x20002D7")]
public class DebugUIHandlerContainer : MonoBehaviour
{
	[Token(Token = "0x4000D3F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	public RectTransform contentHolder;

	[Token(Token = "0x600141F")]
	[Address(RVA = "0x2BABF30", Offset = "0x2BAA530", VA = "0x182BABF30")]
	internal DebugUIHandlerWidget GetFirstItem()
	{
		return null;
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x2BABFB0", Offset = "0x2BAA5B0", VA = "0x182BABFB0")]
	internal DebugUIHandlerWidget GetLastItem()
	{
		return null;
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x2BAC040", Offset = "0x2BAA640", VA = "0x182BAC040")]
	internal bool IsDirectChild(DebugUIHandlerWidget widget)
	{
		return default(bool);
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x2BABC60", Offset = "0x2BAA260", VA = "0x182BABC60")]
	private List<DebugUIHandlerWidget> GetActiveChildren()
	{
		return null;
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DebugUIHandlerContainer()
	{
	}
}
