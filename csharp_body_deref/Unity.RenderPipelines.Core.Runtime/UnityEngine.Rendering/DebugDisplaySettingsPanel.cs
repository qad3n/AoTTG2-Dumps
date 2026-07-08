using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200009D")]
public abstract class DebugDisplaySettingsPanel : IDebugDisplaySettingsPanelDisposable, IDebugDisplaySettingsPanel, IDisposable
{
	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<DebugUI.Widget> m_Widgets;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x18")]
	private readonly DisplayInfoAttribute m_DisplayInfo;

	[Token(Token = "0x17000076")]
	public virtual string PanelName
	{
		[Token(Token = "0x6000672")]
		[Address(RVA = "0x48748F0", Offset = "0x48748F0", VA = "0x48748F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public virtual int Order
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x4874920", Offset = "0x4874920", VA = "0x4874920", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000078")]
	public DebugUI.Widget[] Widgets
	{
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x4874930", Offset = "0x4874930", VA = "0x4874930", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public virtual DebugUI.Flags Flags
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x4874970", Offset = "0x4874970", VA = "0x4874970", Slot = "10")]
		get
		{
			return default(DebugUI.Flags);
		}
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4874980", Offset = "0x4874980", VA = "0x4874980")]
	protected void AddWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x4874A60", Offset = "0x4874A60", VA = "0x4874A60")]
	protected void Clear()
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4874AB0", Offset = "0x4874AB0", VA = "0x4874AB0", Slot = "11")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x4874B00", Offset = "0x4874B00", VA = "0x4874B00")]
	protected DebugDisplaySettingsPanel()
	{
	}
}
[Token(Token = "0x200009E")]
public abstract class DebugDisplaySettingsPanel<T> : DebugDisplaySettingsPanel where T : IDebugDisplaySettingsData
{
	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x0")]
	internal T m_Data;

	[Token(Token = "0x1700007A")]
	public T data
	{
		[Token(Token = "0x600067A")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x600067B")]
		internal set
		{
		}
	}

	[Token(Token = "0x600067C")]
	protected DebugDisplaySettingsPanel(T data)
	{
	}
}
