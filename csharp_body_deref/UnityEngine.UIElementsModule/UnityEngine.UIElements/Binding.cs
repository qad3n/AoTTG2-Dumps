// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Binding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200001F")]
[UxmlObject]
public abstract class Binding
{
	[Token(Token = "0x4000042")]
	internal const string k_UpdateTriggerTooltip = "This informs the binding system of whether the binding object should be updated on every frame, when a change occurs in the source or on every frame if change detection is impossible, and when explicitly marked as dirty.";

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x10")]
	private bool m_Dirty;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x14")]
	private BindingUpdateTrigger m_UpdateTrigger;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private string _003Cproperty_003Ek__BackingField;

	[Token(Token = "0x17000022")]
	public bool isDirty
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x6A7E0A0", Offset = "0x6A7D0A0", VA = "0x6A7E0A0")]
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
		[Address(RVA = "0x6A7E0B0", Offset = "0x6A7D0B0", VA = "0x6A7E0B0")]
		get
		{
			return default(BindingUpdateTrigger);
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x6A7E0C0", Offset = "0x6A7D0C0", VA = "0x6A7E0C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x6A7DCD0", Offset = "0x6A7CCD0", VA = "0x6A7DCD0")]
	public static void SetGlobalLogLevel(BindingLogLevel logLevel)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x6A7DD30", Offset = "0x6A7CD30", VA = "0x6A7DD30")]
	public static BindingLogLevel GetGlobalLogLevel()
	{
		return default(BindingLogLevel);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6A7DDA0", Offset = "0x6A7CDA0", VA = "0x6A7DDA0")]
	public static void SetPanelLogLevel(IPanel panel, BindingLogLevel logLevel)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x6A7DEB0", Offset = "0x6A7CEB0", VA = "0x6A7DEB0")]
	public static BindingLogLevel GetPanelLogLevel(IPanel panel)
	{
		return default(BindingLogLevel);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x6A7E010", Offset = "0x6A7D010", VA = "0x6A7E010")]
	public static void ResetPanelLogLevel(IPanel panel)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x6A7E0D0", Offset = "0x6A7D0D0", VA = "0x6A7E0D0")]
	internal Binding()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6A7E0F0", Offset = "0x6A7D0F0", VA = "0x6A7E0F0")]
	public void MarkDirty()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6A7E100", Offset = "0x6A7D100", VA = "0x6A7E100")]
	internal void ClearDirty()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6A7E110", Offset = "0x6A7D110", VA = "0x6A7E110", Slot = "4")]
	protected internal virtual void OnActivated(in BindingActivationContext context)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6A7E120", Offset = "0x6A7D120", VA = "0x6A7E120", Slot = "5")]
	protected internal virtual void OnDeactivated(in BindingActivationContext context)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6A7E130", Offset = "0x6A7D130", VA = "0x6A7E130", Slot = "6")]
	protected internal virtual void OnDataSourceChanged(in DataSourceContextChanged context)
	{
	}
}
