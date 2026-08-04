// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RepeatButton
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000FE")]
public class RepeatButton : TextElement
{
	[Token(Token = "0x20000FF")]
	public new class UxmlFactory : UxmlFactory<RepeatButton, UxmlTraits>
	{
		[Token(Token = "0x60006C9")]
		[Address(RVA = "0x4FF4B80", Offset = "0x4FF4B80", VA = "0x4FF4B80")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000100")]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x400040E")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlLongAttributeDescription m_Delay;

		[Token(Token = "0x400040F")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlLongAttributeDescription m_Interval;

		[Token(Token = "0x60006CA")]
		[Address(RVA = "0x4FF4BC0", Offset = "0x4FF4BC0", VA = "0x4FF4BC0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x4FF4D90", Offset = "0x4FF4D90", VA = "0x4FF4D90")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x4D8")]
	private Clickable m_Clickable;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4FF4930", Offset = "0x4FF4930", VA = "0x4FF4930")]
	public RepeatButton()
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4FF49C0", Offset = "0x4FF49C0", VA = "0x4FF49C0")]
	public RepeatButton(Action clickEvent, long delay, long interval)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4FF4A70", Offset = "0x4FF4A70", VA = "0x4FF4A70")]
	public void SetAction(Action clickEvent, long delay, long interval)
	{
	}
}
