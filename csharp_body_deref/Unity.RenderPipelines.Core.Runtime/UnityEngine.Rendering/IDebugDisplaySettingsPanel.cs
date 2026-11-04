// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDebugDisplaySettingsPanel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000CF")]
public interface IDebugDisplaySettingsPanel
{
	[Token(Token = "0x170000AC")]
	string PanelName
	{
		[Token(Token = "0x600078D")]
		get;
	}

	[Token(Token = "0x170000AD")]
	DebugUI.Widget[] Widgets
	{
		[Token(Token = "0x600078E")]
		get;
	}

	[Token(Token = "0x170000AE")]
	DebugUI.Flags Flags
	{
		[Token(Token = "0x600078F")]
		get;
	}
}
