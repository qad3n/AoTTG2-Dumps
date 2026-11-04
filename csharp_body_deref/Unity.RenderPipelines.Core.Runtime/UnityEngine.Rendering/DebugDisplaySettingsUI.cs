// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplaySettingsUI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000072")]
public class DebugDisplaySettingsUI : IDebugData
{
	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerable<IDebugDisplaySettingsPanelDisposable> m_DisposablePanels;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x18")]
	private IDebugDisplaySettings m_Settings;

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x2AD57C0", Offset = "0x2AD3DC0", VA = "0x182AD57C0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x2AD5460", Offset = "0x2AD3A60", VA = "0x182AD5460")]
	public void RegisterDebug(IDebugDisplaySettings settings)
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x2AD5860", Offset = "0x2AD3E60", VA = "0x182AD5860")]
	public void UnregisterDebug()
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x2AD53F0", Offset = "0x2AD39F0", VA = "0x182AD53F0", Slot = "4")]
	public Action GetReset()
	{
		return null;
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DebugDisplaySettingsUI()
	{
	}
}
