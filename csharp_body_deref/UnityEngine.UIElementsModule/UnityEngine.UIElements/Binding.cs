// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Binding
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000020")]
[UxmlObject]
public abstract class Binding
{
	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x10")]
	private bool m_Dirty;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x14")]
	private BindingUpdateTrigger m_UpdateTrigger;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private string _003Cproperty_003Ek__BackingField;

	[Token(Token = "0x4000049")]
	internal const string k_UpdateTriggerTooltip = "This informs the binding system of whether the binding object should be updated on every frame, when a change occurs in the source or on every frame if change detection is impossible, and when explicitly marked as dirty.";

	[Token(Token = "0x17000022")]
	public bool isDirty
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	[CreateProperty]
	public BindingUpdateTrigger updateTrigger
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(BindingUpdateTrigger);
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		set
		{
		}
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x30885B0", Offset = "0x3086BB0", VA = "0x1830885B0")]
	public static void SetGlobalLogLevel(BindingLogLevel logLevel)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x3088440", Offset = "0x3086A40", VA = "0x183088440")]
	public static BindingLogLevel GetGlobalLogLevel()
	{
		return default(BindingLogLevel);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x3088610", Offset = "0x3086C10", VA = "0x183088610")]
	public static void SetPanelLogLevel(IPanel panel, BindingLogLevel logLevel)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x30884A0", Offset = "0x3086AA0", VA = "0x1830884A0")]
	public static BindingLogLevel GetPanelLogLevel(IPanel panel)
	{
		return default(BindingLogLevel);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3088530", Offset = "0x3086B30", VA = "0x183088530")]
	public static void ResetPanelLogLevel(IPanel panel)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x1C88340", Offset = "0x1C86940", VA = "0x181C88340")]
	internal Binding()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0xB3C020", Offset = "0xB3A620", VA = "0x180B3C020")]
	public void MarkDirty()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x1C6F5D0", Offset = "0x1C6DBD0", VA = "0x181C6F5D0")]
	internal void ClearDirty()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	protected internal virtual void OnActivated(in BindingActivationContext context)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected internal virtual void OnDeactivated(in BindingActivationContext context)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	protected internal virtual void OnDataSourceChanged(in DataSourceContextChanged context)
	{
	}
}
