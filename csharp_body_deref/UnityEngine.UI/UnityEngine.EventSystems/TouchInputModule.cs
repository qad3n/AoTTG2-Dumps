// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.TouchInputModule
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C3")]
[Obsolete("TouchInputModule is no longer required as Touch input is now handled in StandaloneInputModule.")]
[AddComponentMenu("Event/Touch Input Module")]
[UnityEngine.UGUIHelpURL("TouchInputModule")]
public class TouchInputModule : PointerInputModule
{
	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x68")]
	private Vector2 m_LastMousePosition;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x70")]
	private Vector2 m_MousePosition;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x78")]
	private PointerEventData m_InputPointerEvent;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	[FormerlySerializedAs("m_AllowActivationOnStandalone")]
	private bool m_ForceModuleActive;

	[Token(Token = "0x170001FC")]
	[Obsolete("allowActivationOnStandalone has been deprecated. Use forceModuleActive instead (UnityUpgradable) -> forceModuleActive")]
	public bool allowActivationOnStandalone
	{
		[Token(Token = "0x6000770")]
		[Address(RVA = "0x1720FF0", Offset = "0x171F5F0", VA = "0x181720FF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x1721000", Offset = "0x171F600", VA = "0x181721000")]
		set
		{
		}
	}

	[Token(Token = "0x170001FD")]
	public bool forceModuleActive
	{
		[Token(Token = "0x6000772")]
		[Address(RVA = "0x1720FF0", Offset = "0x171F5F0", VA = "0x181720FF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000773")]
		[Address(RVA = "0x1721000", Offset = "0x171F600", VA = "0x181721000")]
		set
		{
		}
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x33044C0", Offset = "0x3302AC0", VA = "0x1833044C0")]
	protected TouchInputModule()
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x3304320", Offset = "0x3302920", VA = "0x183304320", Slot = "24")]
	public override void UpdateModule()
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x3302EC0", Offset = "0x33014C0", VA = "0x183302EC0", Slot = "25")]
	public override bool IsModuleSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x3303F50", Offset = "0x3302550", VA = "0x183303F50", Slot = "21")]
	public override bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x3304480", Offset = "0x3302A80", VA = "0x183304480")]
	private bool UseFakeInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x3303DA0", Offset = "0x33023A0", VA = "0x183303DA0", Slot = "17")]
	public override void Process()
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x3302D60", Offset = "0x3301360", VA = "0x183302D60")]
	private void FakeTouches()
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x3302F00", Offset = "0x3301500", VA = "0x183302F00")]
	private void ProcessTouchEvents()
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x33036A0", Offset = "0x3301CA0", VA = "0x1833036A0")]
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released)
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x32FFDB0", Offset = "0x32FE3B0", VA = "0x1832FFDB0", Slot = "22")]
	public override void DeactivateModule()
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x3304070", Offset = "0x3302670", VA = "0x183304070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
