using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000489")]
internal abstract class BaseVisualTreeUpdater : IVisualTreeUpdater, IDisposable
{
	[Token(Token = "0x4000DAC")]
	[FieldOffset(Offset = "0x18")]
	private BaseVisualElementPanel m_Panel;

	[Token(Token = "0x1700075B")]
	public BaseVisualElementPanel panel
	{
		[Token(Token = "0x6001C23")]
		[Address(RVA = "0x4C51E50", Offset = "0x4C51E50", VA = "0x4C51E50", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C24")]
		[Address(RVA = "0x4C56AC0", Offset = "0x4C56AC0", VA = "0x4C56AC0", Slot = "4")]
		set
		{
		}
	}

	[Token(Token = "0x1700075C")]
	public VisualElement visualTree
	{
		[Token(Token = "0x6001C25")]
		[Address(RVA = "0x4C53840", Offset = "0x4C53840", VA = "0x4C53840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075D")]
	public abstract ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6001C26")]
		get;
	}

	[Token(Token = "0x14000023")]
	public event Action<BaseVisualElementPanel> panelChanged
	{
		[Token(Token = "0x6001C21")]
		[Address(RVA = "0x4C56960", Offset = "0x4C56960", VA = "0x4C56960")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C22")]
		[Address(RVA = "0x4C56A10", Offset = "0x4C56A10", VA = "0x4C56A10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001C27")]
	[Address(RVA = "0x4C56B00", Offset = "0x4C56B00", VA = "0x4C56B00", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C28")]
	[Address(RVA = "0x4C56B70", Offset = "0x4C56B70", VA = "0x4C56B70", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001C29")]
	public abstract void Update();

	[Token(Token = "0x6001C2A")]
	public abstract void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType);

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x4C51F40", Offset = "0x4C51F40", VA = "0x4C51F40")]
	protected BaseVisualTreeUpdater()
	{
	}
}
