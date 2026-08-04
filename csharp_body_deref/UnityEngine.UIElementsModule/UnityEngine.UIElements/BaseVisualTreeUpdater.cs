// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseVisualTreeUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F79780", Offset = "0x4F79780", VA = "0x4F79780", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C24")]
		[Address(RVA = "0x4F7E3F0", Offset = "0x4F7E3F0", VA = "0x4F7E3F0", Slot = "4")]
		set
		{
		}
	}

	[Token(Token = "0x1700075C")]
	public VisualElement visualTree
	{
		[Token(Token = "0x6001C25")]
		[Address(RVA = "0x4F7B170", Offset = "0x4F7B170", VA = "0x4F7B170")]
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
		[Address(RVA = "0x4F7E290", Offset = "0x4F7E290", VA = "0x4F7E290")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C22")]
		[Address(RVA = "0x4F7E340", Offset = "0x4F7E340", VA = "0x4F7E340")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001C27")]
	[Address(RVA = "0x4F7E430", Offset = "0x4F7E430", VA = "0x4F7E430", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C28")]
	[Address(RVA = "0x4F7E4A0", Offset = "0x4F7E4A0", VA = "0x4F7E4A0", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001C29")]
	public abstract void Update();

	[Token(Token = "0x6001C2A")]
	public abstract void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType);

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x4F79870", Offset = "0x4F79870", VA = "0x4F79870")]
	protected BaseVisualTreeUpdater()
	{
	}
}
