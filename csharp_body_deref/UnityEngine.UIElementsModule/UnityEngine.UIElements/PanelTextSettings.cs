using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003E9")]
public class PanelTextSettings : TextSettings
{
	[Token(Token = "0x4000BCB")]
	[FieldOffset(Offset = "0x0")]
	private static PanelTextSettings s_DefaultPanelTextSettings;

	[Token(Token = "0x17000695")]
	internal static PanelTextSettings defaultPanelTextSettings
	{
		[Token(Token = "0x60018AB")]
		[Address(RVA = "0x4C28A00", Offset = "0x4C28A00", VA = "0x4C28A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x4C28AC0", Offset = "0x4C28AC0", VA = "0x4C28AC0")]
	public PanelTextSettings()
	{
	}
}
