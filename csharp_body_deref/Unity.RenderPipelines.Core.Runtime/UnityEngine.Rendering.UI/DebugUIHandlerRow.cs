// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerRow
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002EE")]
public class DebugUIHandlerRow : DebugUIHandlerFoldout
{
	[Token(Token = "0x4000D8C")]
	[FieldOffset(Offset = "0x80")]
	private float m_Timer;

	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x16F6DE0", Offset = "0x16F53E0", VA = "0x1816F6DE0", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x2BB03A0", Offset = "0x2BAE9A0", VA = "0x182BB03A0")]
	private GameObject GetChild(int index)
	{
		return null;
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x2BB0620", Offset = "0x2BAEC20", VA = "0x182BB0620")]
	private bool TryGetChild(int index, out GameObject child)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x2BB04D0", Offset = "0x2BAEAD0", VA = "0x182BB04D0")]
	private bool IsActive(DebugUI.Table table, int index, GameObject child)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x2BB06B0", Offset = "0x2BAECB0", VA = "0x182BB06B0")]
	protected void Update()
	{
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerRow()
	{
	}
}
