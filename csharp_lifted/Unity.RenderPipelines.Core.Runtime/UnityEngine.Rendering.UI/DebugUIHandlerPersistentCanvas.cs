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
	[Address(RVA = "0x65AA700", Offset = "0x65A9700", VA = "0x65AA700")]
	internal void Toggle(DebugUI.Value widget, [Optional] string displayName)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x65AAA20", Offset = "0x65A9A20", VA = "0x65AAA20")]
	internal void Toggle(DebugUI.ValueTuple widget, [Optional] int? forceTupleIndex)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x65AADD0", Offset = "0x65A9DD0", VA = "0x65AADD0")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x65AAE10", Offset = "0x65A9E10", VA = "0x65AAE10")]
	internal void Clear()
	{
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x65AAFC0", Offset = "0x65A9FC0", VA = "0x65AAFC0")]
	public DebugUIHandlerPersistentCanvas()
	{
	}
}
