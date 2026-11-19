// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseVisualTreeUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000564")]
internal abstract class BaseVisualTreeUpdater : IVisualTreeUpdater, IDisposable
{
	[Token(Token = "0x400124F")]
	[FieldOffset(Offset = "0x10")]
	private long frameCount;

	[Token(Token = "0x4001250")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<BaseVisualElementPanel> m_panelChanged;

	[Token(Token = "0x4001251")]
	[FieldOffset(Offset = "0x20")]
	private BaseVisualElementPanel m_Panel;

	[Token(Token = "0x17000A44")]
	private long UnityEngine_002EUIElements_002EIVisualTreeUpdater_002EFrameCount
	{
		[Token(Token = "0x6002895")]
		[Address(RVA = "0x6B76750", Offset = "0x6B75750", VA = "0x6B76750", Slot = "4")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6002896")]
		[Address(RVA = "0x6B76760", Offset = "0x6B75760", VA = "0x6B76760", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000A45")]
	public BaseVisualElementPanel panel
	{
		[Token(Token = "0x6002899")]
		[Address(RVA = "0x6B6FB80", Offset = "0x6B6EB80", VA = "0x6B6FB80", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600289A")]
		[Address(RVA = "0x6B768B0", Offset = "0x6B758B0", VA = "0x6B768B0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000A46")]
	public VisualElement visualTree
	{
		[Token(Token = "0x600289B")]
		[Address(RVA = "0x6B70F80", Offset = "0x6B6FF80", VA = "0x6B70F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A47")]
	public abstract ProfilerMarker profilerMarker
	{
		[Token(Token = "0x600289C")]
		get;
	}

	[Token(Token = "0x1400002E")]
	public event Action<BaseVisualElementPanel> panelChanged
	{
		[Token(Token = "0x6002897")]
		[Address(RVA = "0x6B76770", Offset = "0x6B75770", VA = "0x6B76770")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002898")]
		[Address(RVA = "0x6B76810", Offset = "0x6B75810", VA = "0x6B76810")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600289D")]
	[Address(RVA = "0x6B768F0", Offset = "0x6B758F0", VA = "0x6B768F0", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600289E")]
	[Address(RVA = "0x6B76960", Offset = "0x6B75960", VA = "0x6B76960", Slot = "13")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600289F")]
	public abstract void Update();

	[Token(Token = "0x60028A0")]
	public abstract void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType);

	[Token(Token = "0x60028A1")]
	[Address(RVA = "0x6B6FC70", Offset = "0x6B6EC70", VA = "0x6B6FC70")]
	protected BaseVisualTreeUpdater()
	{
	}
}
