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
	[Address(RVA = "0x4C15810", Offset = "0x4C15810", VA = "0x4C15810")]
	internal void Toggle(DebugUI.Value widget, [Optional] string displayName)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x4C15B30", Offset = "0x4C15B30", VA = "0x4C15B30")]
	internal void Toggle(DebugUI.ValueTuple widget, [Optional] int? forceTupleIndex)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x4C15EE0", Offset = "0x4C15EE0", VA = "0x4C15EE0")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x4C15F20", Offset = "0x4C15F20", VA = "0x4C15F20")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x4C160F0", Offset = "0x4C160F0", VA = "0x4C160F0")]
	public DebugUIHandlerPersistentCanvas()
	{
	}
}
