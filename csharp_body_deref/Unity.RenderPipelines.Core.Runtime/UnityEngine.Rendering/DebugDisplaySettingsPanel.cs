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
		[Address(RVA = "0x2AD5370", Offset = "0x2AD3970", VA = "0x182AD5370", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	public virtual int Order
	{
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x2AD5360", Offset = "0x2AD3960", VA = "0x182AD5360", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004F")]
	public DebugUI.Widget[] Widgets
	{
		[Token(Token = "0x600059D")]
		[Address(RVA = "0x2AD53A0", Offset = "0x2AD39A0", VA = "0x182AD53A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	public virtual DebugUI.Flags Flags
	{
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return default(DebugUI.Flags);
		}
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x2AD5130", Offset = "0x2AD3730", VA = "0x182AD5130")]
	protected void AddWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x2AD51E0", Offset = "0x2AD37E0", VA = "0x182AD51E0")]
	protected void Clear()
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x2AD51E0", Offset = "0x2AD37E0", VA = "0x182AD51E0", Slot = "11")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x2AD5240", Offset = "0x2AD3840", VA = "0x182AD5240")]
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
