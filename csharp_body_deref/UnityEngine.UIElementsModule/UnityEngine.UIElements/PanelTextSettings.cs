// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelTextSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004A0")]
[HelpURL("UIE-text-setting-asset")]
public class PanelTextSettings : TextSettings
{
	[Token(Token = "0x4000F87")]
	[FieldOffset(Offset = "0x0")]
	private static PanelTextSettings s_DefaultPanelTextSettings;

	[Token(Token = "0x17000949")]
	internal static PanelTextSettings defaultPanelTextSettings
	{
		[Token(Token = "0x60023AA")]
		[Address(RVA = "0x6B34AB0", Offset = "0x6B33AB0", VA = "0x6B34AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60023AB")]
	[Address(RVA = "0x6B34AF0", Offset = "0x6B33AF0", VA = "0x6B34AF0")]
	internal static void InitializeDefaultPanelTextSettingsIfNull()
	{
	}

	[Token(Token = "0x60023AC")]
	[Address(RVA = "0x6B34BB0", Offset = "0x6B33BB0", VA = "0x6B34BB0")]
	public PanelTextSettings()
	{
	}
}
