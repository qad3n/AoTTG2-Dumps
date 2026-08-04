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
		[Address(RVA = "0x4C1A8E0", Offset = "0x4C1A8E0", VA = "0x4C1A8E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0x4C1A8F0", Offset = "0x4C1A8F0", VA = "0x4C1A8F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	public DebugUIHandlerWidget previousUIHandler
	{
		[Token(Token = "0x6000F6F")]
		[Address(RVA = "0x4C1A900", Offset = "0x4C1A900", VA = "0x4C1A900")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x4C1A910", Offset = "0x4C1A910", VA = "0x4C1A910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	public DebugUIHandlerWidget nextUIHandler
	{
		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x4C1A920", Offset = "0x4C1A920", VA = "0x4C1A920")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x4C1A930", Offset = "0x4C1A930", VA = "0x4C1A930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4C1A940", Offset = "0x4C1A940", VA = "0x4C1A940", Slot = "4")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4C1A950", Offset = "0x4C1A950", VA = "0x4C1A950", Slot = "5")]
	internal virtual void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4C1A960", Offset = "0x4C1A960", VA = "0x4C1A960")]
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
	[Address(RVA = "0x4C1A970", Offset = "0x4C1A970", VA = "0x4C1A970", Slot = "6")]
	public virtual bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4C1A980", Offset = "0x4C1A980", VA = "0x4C1A980", Slot = "7")]
	public virtual void OnDeselection()
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x4C1A990", Offset = "0x4C1A990", VA = "0x4C1A990", Slot = "8")]
	public virtual void OnAction()
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x4C1A9A0", Offset = "0x4C1A9A0", VA = "0x4C1A9A0", Slot = "9")]
	public virtual void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x4C1A9B0", Offset = "0x4C1A9B0", VA = "0x4C1A9B0", Slot = "10")]
	public virtual void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x4C1A9C0", Offset = "0x4C1A9C0", VA = "0x4C1A9C0", Slot = "11")]
	public virtual DebugUIHandlerWidget Previous()
	{
		return null;
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4C187B0", Offset = "0x4C187B0", VA = "0x4C187B0", Slot = "12")]
	public virtual DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4C14DB0", Offset = "0x4C14DB0", VA = "0x4C14DB0")]
	public DebugUIHandlerWidget()
	{
	}
}
