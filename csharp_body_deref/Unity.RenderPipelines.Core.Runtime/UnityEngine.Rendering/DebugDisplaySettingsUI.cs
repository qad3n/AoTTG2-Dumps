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
	[Address(RVA = "0x4874C30", Offset = "0x4874C30", VA = "0x4874C30")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x48753F0", Offset = "0x48753F0", VA = "0x48753F0")]
	public void RegisterDebug(IDebugDisplaySettings settings)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x4874DA0", Offset = "0x4874DA0", VA = "0x4874DA0")]
	public void UnregisterDebug()
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x48758D0", Offset = "0x48758D0", VA = "0x48758D0", Slot = "4")]
	public Action GetReset()
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x4875940", Offset = "0x4875940", VA = "0x4875940")]
	public DebugDisplaySettingsUI()
	{
	}
}
