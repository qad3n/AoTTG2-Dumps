using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000210")]
internal class RuntimePanel : BaseRuntimePanel
{
	[Token(Token = "0x400076B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EventDispatcher s_EventDispatcher;

	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x218")]
	private readonly PanelSettings m_PanelSettings;

	[Token(Token = "0x1700028D")]
	public PanelSettings panelSettings
	{
		[Token(Token = "0x6000D98")]
		[Address(RVA = "0x4D1D080", Offset = "0x4D1D080", VA = "0x4D1D080", Slot = "56")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x4D1D090", Offset = "0x4D1D090", VA = "0x4D1D090")]
	public static RuntimePanel Create(ScriptableObject ownerObject)
	{
		return null;
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x4D1D0E0", Offset = "0x4D1D0E0", VA = "0x4D1D0E0")]
	private RuntimePanel(ScriptableObject ownerObject)
	{
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x4D1D4C0", Offset = "0x4D1D4C0", VA = "0x4D1D4C0", Slot = "53")]
	public override void Update()
	{
	}
}
