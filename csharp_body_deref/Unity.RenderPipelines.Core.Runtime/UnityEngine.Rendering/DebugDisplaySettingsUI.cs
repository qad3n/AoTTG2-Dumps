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

[Token(Token = "0x20000A1")]
public class DebugDisplaySettingsUI : IDebugData
{
	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerable<IDebugDisplaySettingsPanelDisposable> m_DisposablePanels;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x18")]
	private IDebugDisplaySettings m_Settings;

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4B99D20", Offset = "0x4B99D20", VA = "0x4B99D20")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x4B9A4E0", Offset = "0x4B9A4E0", VA = "0x4B9A4E0")]
	public void RegisterDebug(IDebugDisplaySettings settings)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x4B99E90", Offset = "0x4B99E90", VA = "0x4B99E90")]
	public void UnregisterDebug()
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4B9A9C0", Offset = "0x4B9A9C0", VA = "0x4B9A9C0", Slot = "4")]
	public Action GetReset()
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x4B9AA30", Offset = "0x4B9AA30", VA = "0x4B9AA30")]
	public DebugDisplaySettingsUI()
	{
	}
}
