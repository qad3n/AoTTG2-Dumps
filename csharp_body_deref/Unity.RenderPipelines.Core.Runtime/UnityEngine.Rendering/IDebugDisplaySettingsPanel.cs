using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F9")]
public interface IDebugDisplaySettingsPanel
{
	[Token(Token = "0x170000C3")]
	string PanelName
	{
		[Token(Token = "0x600082C")]
		get;
	}

	[Token(Token = "0x170000C4")]
	DebugUI.Widget[] Widgets
	{
		[Token(Token = "0x600082D")]
		get;
	}

	[Token(Token = "0x170000C5")]
	DebugUI.Flags Flags
	{
		[Token(Token = "0x600082E")]
		get;
	}
}
