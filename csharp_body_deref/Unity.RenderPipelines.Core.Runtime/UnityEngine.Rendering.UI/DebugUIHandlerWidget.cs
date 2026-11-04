// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerWidget
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002F9")]
public class DebugUIHandlerWidget : MonoBehaviour
{
	[Token(Token = "0x4000DBB")]
	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	public Color colorDefault;

	[Token(Token = "0x4000DBC")]
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	public Color colorSelected;

	[Token(Token = "0x4000DC0")]
	[FieldOffset(Offset = "0x58")]
	protected DebugUI.Widget m_Widget;

	[Token(Token = "0x17000273")]
	public DebugUIHandlerWidget parentUIHandler
	{
		[Token(Token = "0x6001510")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001511")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000274")]
	public DebugUIHandlerWidget previousUIHandler
	{
		[Token(Token = "0x6001512")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001513")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000275")]
	public DebugUIHandlerWidget nextUIHandler
	{
		[Token(Token = "0x6001514")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001515")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140", Slot = "5")]
	internal virtual void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001518")]
	[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
	internal DebugUI.Widget GetWidget()
	{
		return null;
	}

	[Token(Token = "0x6001519")]
	protected T CastWidget<T>() where T : DebugUI.Widget
	{
		return null;
	}

	[Token(Token = "0x600151A")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "6")]
	public virtual bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600151B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public virtual void OnDeselection()
	{
	}

	[Token(Token = "0x600151C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void OnAction()
	{
	}

	[Token(Token = "0x600151D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public virtual void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public virtual void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x2BB4AC0", Offset = "0x2BB30C0", VA = "0x182BB4AC0", Slot = "11")]
	public virtual DebugUIHandlerWidget Previous()
	{
		return null;
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x2BB49A0", Offset = "0x2BB2FA0", VA = "0x182BB49A0", Slot = "12")]
	public virtual DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerWidget()
	{
	}
}
