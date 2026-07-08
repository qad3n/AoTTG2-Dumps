using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200022E")]
public class DebugUIHandlerRow : DebugUIHandlerFoldout
{
	[Token(Token = "0x40008B5")]
	[FieldOffset(Offset = "0x80")]
	private float m_Timer;

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x48F1400", Offset = "0x48F1400", VA = "0x48F1400", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x48F1410", Offset = "0x48F1410", VA = "0x48F1410")]
	private GameObject GetChild(int index)
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x48F1530", Offset = "0x48F1530", VA = "0x48F1530")]
	private bool TryGetChild(int index, out GameObject child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x48F15A0", Offset = "0x48F15A0", VA = "0x48F15A0")]
	private bool IsActive(DebugUI.Table table, int index, GameObject child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x48F16D0", Offset = "0x48F16D0", VA = "0x48F16D0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x48F1C90", Offset = "0x48F1C90", VA = "0x48F1C90")]
	public DebugUIHandlerRow()
	{
	}
}
