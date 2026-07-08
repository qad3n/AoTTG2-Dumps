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
	[Address(RVA = "0x48E9D20", Offset = "0x48E9D20", VA = "0x48E9D20")]
	internal DebugUIHandlerWidget GetFirstItem()
	{
		return null;
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x48E9B40", Offset = "0x48E9B40", VA = "0x48E9B40")]
	internal DebugUIHandlerWidget GetLastItem()
	{
		return null;
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x48E9A40", Offset = "0x48E9A40", VA = "0x48E9A40")]
	internal bool IsDirectChild(DebugUIHandlerWidget widget)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x48ED270", Offset = "0x48ED270", VA = "0x48ED270")]
	private List<DebugUIHandlerWidget> GetActiveChildren()
	{
		return null;
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x48ED760", Offset = "0x48ED760", VA = "0x48ED760")]
	public DebugUIHandlerContainer()
	{
	}
}
