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
		[Address(RVA = "0x65AFE20", Offset = "0x65AEE20", VA = "0x65AFE20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001511")]
		[Address(RVA = "0x65AFE30", Offset = "0x65AEE30", VA = "0x65AFE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000274")]
	public DebugUIHandlerWidget previousUIHandler
	{
		[Token(Token = "0x6001512")]
		[Address(RVA = "0x65AFE40", Offset = "0x65AEE40", VA = "0x65AFE40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001513")]
		[Address(RVA = "0x65AFE50", Offset = "0x65AEE50", VA = "0x65AFE50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000275")]
	public DebugUIHandlerWidget nextUIHandler
	{
		[Token(Token = "0x6001514")]
		[Address(RVA = "0x65AFE60", Offset = "0x65AEE60", VA = "0x65AFE60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001515")]
		[Address(RVA = "0x65AFE70", Offset = "0x65AEE70", VA = "0x65AFE70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x65AFE80", Offset = "0x65AEE80", VA = "0x65AFE80", Slot = "4")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x65AFE90", Offset = "0x65AEE90", VA = "0x65AFE90", Slot = "5")]
	internal virtual void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001518")]
	[Address(RVA = "0x65AFEA0", Offset = "0x65AEEA0", VA = "0x65AFEA0")]
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
	[Address(RVA = "0x65AFEB0", Offset = "0x65AEEB0", VA = "0x65AFEB0", Slot = "6")]
	public virtual bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600151B")]
	[Address(RVA = "0x65AFEC0", Offset = "0x65AEEC0", VA = "0x65AFEC0", Slot = "7")]
	public virtual void OnDeselection()
	{
	}

	[Token(Token = "0x600151C")]
	[Address(RVA = "0x65AFED0", Offset = "0x65AEED0", VA = "0x65AFED0", Slot = "8")]
	public virtual void OnAction()
	{
	}

	[Token(Token = "0x600151D")]
	[Address(RVA = "0x65AFEE0", Offset = "0x65AEEE0", VA = "0x65AFEE0", Slot = "9")]
	public virtual void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x65AFEF0", Offset = "0x65AEEF0", VA = "0x65AFEF0", Slot = "10")]
	public virtual void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x65AFF00", Offset = "0x65AEF00", VA = "0x65AFF00", Slot = "11")]
	public virtual DebugUIHandlerWidget Previous()
	{
		return null;
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x65A3AE0", Offset = "0x65A2AE0", VA = "0x65A3AE0", Slot = "12")]
	public virtual DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x65A3C80", Offset = "0x65A2C80", VA = "0x65A3C80")]
	public DebugUIHandlerWidget()
	{
	}
}
