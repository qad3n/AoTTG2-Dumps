// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerPersistentCanvas
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002E9")]
internal class DebugUIHandlerPersistentCanvas : MonoBehaviour
{
	[Token(Token = "0x4000D7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public RectTransform panel;

	[Token(Token = "0x4000D7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public RectTransform valuePrefab;

	[Token(Token = "0x4000D7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private List<DebugUIHandlerValue> m_Items;

	[Token(Token = "0x4000D7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<DebugUI.ValueTuple> m_ValueTupleWidgets;

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x2BAF2C0", Offset = "0x2BAD8C0", VA = "0x182BAF2C0")]
	internal void Toggle(DebugUI.Value widget, [Optional] string displayName)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x2BAF5B0", Offset = "0x2BADBB0", VA = "0x182BAF5B0")]
	internal void Toggle(DebugUI.ValueTuple widget, [Optional] int? forceTupleIndex)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x2BAF270", Offset = "0x2BAD870", VA = "0x182BAF270")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x2BAF0D0", Offset = "0x2BAD6D0", VA = "0x182BAF0D0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x2BAF980", Offset = "0x2BADF80", VA = "0x182BAF980")]
	public DebugUIHandlerPersistentCanvas()
	{
	}
}
