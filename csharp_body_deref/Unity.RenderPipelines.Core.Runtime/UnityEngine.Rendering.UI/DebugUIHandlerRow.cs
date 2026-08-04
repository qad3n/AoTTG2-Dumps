// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerRow
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200022E")]
public class DebugUIHandlerRow : DebugUIHandlerFoldout
{
	[Token(Token = "0x40008B5")]
	[FieldOffset(Offset = "0x80")]
	private float m_Timer;

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x4C16470", Offset = "0x4C16470", VA = "0x4C16470", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x4C16480", Offset = "0x4C16480", VA = "0x4C16480")]
	private GameObject GetChild(int index)
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x4C165A0", Offset = "0x4C165A0", VA = "0x4C165A0")]
	private bool TryGetChild(int index, out GameObject child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x4C16610", Offset = "0x4C16610", VA = "0x4C16610")]
	private bool IsActive(DebugUI.Table table, int index, GameObject child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x4C16740", Offset = "0x4C16740", VA = "0x4C16740")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x4C16D00", Offset = "0x4C16D00", VA = "0x4C16D00")]
	public DebugUIHandlerRow()
	{
	}
}
