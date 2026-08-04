// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementPanelActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000477")]
internal class VisualElementPanelActivator
{
	[Token(Token = "0x4000D61")]
	[FieldOffset(Offset = "0x10")]
	private IVisualElementPanelActivatable m_Activatable;

	[Token(Token = "0x4000D64")]
	[FieldOffset(Offset = "0x20")]
	private EventCallback<AttachToPanelEvent> m_OnAttachToPanelCallback;

	[Token(Token = "0x4000D65")]
	[FieldOffset(Offset = "0x28")]
	private EventCallback<DetachFromPanelEvent> m_OnDetachFromPanelCallback;

	[Token(Token = "0x1700074D")]
	public bool isActive
	{
		[Token(Token = "0x6001BB9")]
		[Address(RVA = "0x4F780D0", Offset = "0x4F780D0", VA = "0x4F780D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001BBA")]
		[Address(RVA = "0x4F780E0", Offset = "0x4F780E0", VA = "0x4F780E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700074E")]
	public bool isDetaching
	{
		[Token(Token = "0x6001BBB")]
		[Address(RVA = "0x4F780F0", Offset = "0x4F780F0", VA = "0x4F780F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001BBC")]
		[Address(RVA = "0x4F78100", Offset = "0x4F78100", VA = "0x4F78100")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001BBD")]
	[Address(RVA = "0x4F78110", Offset = "0x4F78110", VA = "0x4F78110")]
	public VisualElementPanelActivator(IVisualElementPanelActivatable activatable)
	{
	}

	[Token(Token = "0x6001BBE")]
	[Address(RVA = "0x4F781F0", Offset = "0x4F781F0", VA = "0x4F781F0")]
	public void SetActive(bool action)
	{
	}

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x4F78450", Offset = "0x4F78450", VA = "0x4F78450")]
	public void SendActivation()
	{
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x4F78580", Offset = "0x4F78580", VA = "0x4F78580")]
	public void SendDeactivation()
	{
	}

	[Token(Token = "0x6001BC1")]
	[Address(RVA = "0x4F786B0", Offset = "0x4F786B0", VA = "0x4F786B0")]
	private void OnEnter(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6001BC2")]
	[Address(RVA = "0x4F786C0", Offset = "0x4F786C0", VA = "0x4F786C0")]
	private void OnLeave(DetachFromPanelEvent evt)
	{
	}
}
