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
		[Address(RVA = "0x4C507A0", Offset = "0x4C507A0", VA = "0x4C507A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001BBA")]
		[Address(RVA = "0x4C507B0", Offset = "0x4C507B0", VA = "0x4C507B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700074E")]
	public bool isDetaching
	{
		[Token(Token = "0x6001BBB")]
		[Address(RVA = "0x4C507C0", Offset = "0x4C507C0", VA = "0x4C507C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001BBC")]
		[Address(RVA = "0x4C507D0", Offset = "0x4C507D0", VA = "0x4C507D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001BBD")]
	[Address(RVA = "0x4C507E0", Offset = "0x4C507E0", VA = "0x4C507E0")]
	public VisualElementPanelActivator(IVisualElementPanelActivatable activatable)
	{
	}

	[Token(Token = "0x6001BBE")]
	[Address(RVA = "0x4C508C0", Offset = "0x4C508C0", VA = "0x4C508C0")]
	public void SetActive(bool action)
	{
	}

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x4C50B20", Offset = "0x4C50B20", VA = "0x4C50B20")]
	public void SendActivation()
	{
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x4C50C50", Offset = "0x4C50C50", VA = "0x4C50C50")]
	public void SendDeactivation()
	{
	}

	[Token(Token = "0x6001BC1")]
	[Address(RVA = "0x4C50D80", Offset = "0x4C50D80", VA = "0x4C50D80")]
	private void OnEnter(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6001BC2")]
	[Address(RVA = "0x4C50D90", Offset = "0x4C50D90", VA = "0x4C50D90")]
	private void OnLeave(DetachFromPanelEvent evt)
	{
	}
}
