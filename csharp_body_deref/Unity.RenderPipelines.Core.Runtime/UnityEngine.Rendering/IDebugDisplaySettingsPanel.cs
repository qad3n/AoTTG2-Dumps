// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDebugDisplaySettingsPanel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
