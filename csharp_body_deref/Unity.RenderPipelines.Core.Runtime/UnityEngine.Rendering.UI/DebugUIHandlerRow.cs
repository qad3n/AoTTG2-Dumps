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
	[Address(RVA = "0x65ABAD0", Offset = "0x65AAAD0", VA = "0x65ABAD0", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x65ABAE0", Offset = "0x65AAAE0", VA = "0x65ABAE0")]
	private GameObject GetChild(int index)
	{
		return null;
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x65ABC00", Offset = "0x65AAC00", VA = "0x65ABC00")]
	private bool TryGetChild(int index, out GameObject child)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x65ABC70", Offset = "0x65AAC70", VA = "0x65ABC70")]
	private bool IsActive(DebugUI.Table table, int index, GameObject child)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x65ABDA0", Offset = "0x65AADA0", VA = "0x65ABDA0")]
	protected void Update()
	{
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x65AC360", Offset = "0x65AB360", VA = "0x65AC360")]
	public DebugUIHandlerRow()
	{
	}
}
