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
		[Address(RVA = "0x4B999E0", Offset = "0x4B999E0", VA = "0x4B999E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public virtual int Order
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x4B99A10", Offset = "0x4B99A10", VA = "0x4B99A10", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000078")]
	public DebugUI.Widget[] Widgets
	{
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x4B99A20", Offset = "0x4B99A20", VA = "0x4B99A20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public virtual DebugUI.Flags Flags
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x4B99A60", Offset = "0x4B99A60", VA = "0x4B99A60", Slot = "10")]
		get
		{
			return default(DebugUI.Flags);
		}
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4B99A70", Offset = "0x4B99A70", VA = "0x4B99A70")]
	protected void AddWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x4B99B50", Offset = "0x4B99B50", VA = "0x4B99B50")]
	protected void Clear()
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4B99BA0", Offset = "0x4B99BA0", VA = "0x4B99BA0", Slot = "11")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x4B99BF0", Offset = "0x4B99BF0", VA = "0x4B99BF0")]
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
