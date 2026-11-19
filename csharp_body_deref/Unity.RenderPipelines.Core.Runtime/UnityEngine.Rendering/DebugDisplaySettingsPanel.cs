// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplaySettingsPanel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200006E")]
public abstract class DebugDisplaySettingsPanel : IDebugDisplaySettingsPanelDisposable, IDebugDisplaySettingsPanel, IDisposable
{
	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<DebugUI.Widget> m_Widgets;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x18")]
	private readonly DisplayInfoAttribute m_DisplayInfo;

	[Token(Token = "0x1700004D")]
	public virtual string PanelName
	{
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x64C1260", Offset = "0x64C0260", VA = "0x64C1260", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	public virtual int Order
	{
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x64C1290", Offset = "0x64C0290", VA = "0x64C1290", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004F")]
	public DebugUI.Widget[] Widgets
	{
		[Token(Token = "0x600059D")]
		[Address(RVA = "0x64C12A0", Offset = "0x64C02A0", VA = "0x64C12A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	public virtual DebugUI.Flags Flags
	{
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x64C12E0", Offset = "0x64C02E0", VA = "0x64C12E0", Slot = "10")]
		get
		{
			return default(DebugUI.Flags);
		}
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x64C12F0", Offset = "0x64C02F0", VA = "0x64C12F0")]
	protected void AddWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x64C13D0", Offset = "0x64C03D0", VA = "0x64C13D0")]
	protected void Clear()
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x64C1420", Offset = "0x64C0420", VA = "0x64C1420", Slot = "11")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x64C1470", Offset = "0x64C0470", VA = "0x64C1470")]
	protected DebugDisplaySettingsPanel()
	{
	}
}
[Token(Token = "0x200006F")]
public abstract class DebugDisplaySettingsPanel<T> : DebugDisplaySettingsPanel where T : IDebugDisplaySettingsData
{
	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x0")]
	internal T m_Data;

	[Token(Token = "0x17000051")]
	public T data
	{
		[Token(Token = "0x60005A3")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60005A4")]
		internal set
		{
		}
	}

	[Token(Token = "0x60005A5")]
	protected DebugDisplaySettingsPanel(T data)
	{
	}
}
