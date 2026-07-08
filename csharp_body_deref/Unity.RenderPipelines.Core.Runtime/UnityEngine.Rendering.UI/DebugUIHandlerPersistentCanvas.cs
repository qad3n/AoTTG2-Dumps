using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200022A")]
internal class DebugUIHandlerPersistentCanvas : MonoBehaviour
{
	[Token(Token = "0x40008AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public RectTransform panel;

	[Token(Token = "0x40008AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public RectTransform valuePrefab;

	[Token(Token = "0x40008AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private List<DebugUIHandlerValue> m_Items;

	[Token(Token = "0x40008AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<DebugUI.ValueTuple> m_ValueTupleWidgets;

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x48F07A0", Offset = "0x48F07A0", VA = "0x48F07A0")]
	internal void Toggle(DebugUI.Value widget, [Optional] string displayName)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x48F0AC0", Offset = "0x48F0AC0", VA = "0x48F0AC0")]
	internal void Toggle(DebugUI.ValueTuple widget, [Optional] int? forceTupleIndex)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x48F0E70", Offset = "0x48F0E70", VA = "0x48F0E70")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x48F0EB0", Offset = "0x48F0EB0", VA = "0x48F0EB0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x48F1080", Offset = "0x48F1080", VA = "0x48F1080")]
	public DebugUIHandlerPersistentCanvas()
	{
	}
}
