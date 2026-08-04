// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RuntimePanel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50449B0", Offset = "0x50449B0", VA = "0x50449B0", Slot = "56")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x50449C0", Offset = "0x50449C0", VA = "0x50449C0")]
	public static RuntimePanel Create(ScriptableObject ownerObject)
	{
		return null;
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x5044A10", Offset = "0x5044A10", VA = "0x5044A10")]
	private RuntimePanel(ScriptableObject ownerObject)
	{
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x5044DF0", Offset = "0x5044DF0", VA = "0x5044DF0", Slot = "53")]
	public override void Update()
	{
	}
}
