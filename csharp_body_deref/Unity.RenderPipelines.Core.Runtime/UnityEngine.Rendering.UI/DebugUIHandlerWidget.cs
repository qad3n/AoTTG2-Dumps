using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000239")]
public class DebugUIHandlerWidget : MonoBehaviour
{
	[Token(Token = "0x40008E4")]
	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	public Color colorDefault;

	[Token(Token = "0x40008E5")]
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	public Color colorSelected;

	[Token(Token = "0x40008E9")]
	[FieldOffset(Offset = "0x58")]
	protected DebugUI.Widget m_Widget;

	[Token(Token = "0x170001B5")]
	public DebugUIHandlerWidget parentUIHandler
	{
		[Token(Token = "0x6000F6D")]
		[Address(RVA = "0x48F5870", Offset = "0x48F5870", VA = "0x48F5870")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0x48F5880", Offset = "0x48F5880", VA = "0x48F5880")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	public DebugUIHandlerWidget previousUIHandler
	{
		[Token(Token = "0x6000F6F")]
		[Address(RVA = "0x48F5890", Offset = "0x48F5890", VA = "0x48F5890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x48F58A0", Offset = "0x48F58A0", VA = "0x48F58A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	public DebugUIHandlerWidget nextUIHandler
	{
		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x48F58B0", Offset = "0x48F58B0", VA = "0x48F58B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x48F58C0", Offset = "0x48F58C0", VA = "0x48F58C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x48F58D0", Offset = "0x48F58D0", VA = "0x48F58D0", Slot = "4")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x48F58E0", Offset = "0x48F58E0", VA = "0x48F58E0", Slot = "5")]
	internal virtual void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x48F58F0", Offset = "0x48F58F0", VA = "0x48F58F0")]
	internal DebugUI.Widget GetWidget()
	{
		return null;
	}

	[Token(Token = "0x6000F76")]
	protected T CastWidget<T>() where T : DebugUI.Widget
	{
		return null;
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x48F5900", Offset = "0x48F5900", VA = "0x48F5900", Slot = "6")]
	public virtual bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x48F5910", Offset = "0x48F5910", VA = "0x48F5910", Slot = "7")]
	public virtual void OnDeselection()
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x48F5920", Offset = "0x48F5920", VA = "0x48F5920", Slot = "8")]
	public virtual void OnAction()
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x48F5930", Offset = "0x48F5930", VA = "0x48F5930", Slot = "9")]
	public virtual void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x48F5940", Offset = "0x48F5940", VA = "0x48F5940", Slot = "10")]
	public virtual void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x48F5950", Offset = "0x48F5950", VA = "0x48F5950", Slot = "11")]
	public virtual DebugUIHandlerWidget Previous()
	{
		return null;
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x48F2C70", Offset = "0x48F2C70", VA = "0x48F2C70", Slot = "12")]
	public virtual DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x48EFD40", Offset = "0x48EFD40", VA = "0x48EFD40")]
	public DebugUIHandlerWidget()
	{
	}
}
