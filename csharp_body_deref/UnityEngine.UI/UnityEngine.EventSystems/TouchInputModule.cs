using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C1")]
[Obsolete("TouchInputModule is no longer required as Touch input is now handled in StandaloneInputModule.")]
[AddComponentMenu("Event/Touch Input Module")]
public class TouchInputModule : PointerInputModule
{
	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x68")]
	private Vector2 m_LastMousePosition;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x70")]
	private Vector2 m_MousePosition;

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x78")]
	private PointerEventData m_InputPointerEvent;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	[FormerlySerializedAs("m_AllowActivationOnStandalone")]
	private bool m_ForceModuleActive;

	[Token(Token = "0x170001EC")]
	[Obsolete("allowActivationOnStandalone has been deprecated. Use forceModuleActive instead (UnityUpgradable) -> forceModuleActive")]
	public bool allowActivationOnStandalone
	{
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x4DD9620", Offset = "0x4DD9620", VA = "0x4DD9620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x4DD9630", Offset = "0x4DD9630", VA = "0x4DD9630")]
		set
		{
		}
	}

	[Token(Token = "0x170001ED")]
	public bool forceModuleActive
	{
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x4DD9640", Offset = "0x4DD9640", VA = "0x4DD9640")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x4DD9650", Offset = "0x4DD9650", VA = "0x4DD9650")]
		set
		{
		}
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x4DD9610", Offset = "0x4DD9610", VA = "0x4DD9610")]
	protected TouchInputModule()
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x4DD9660", Offset = "0x4DD9660", VA = "0x4DD9660", Slot = "24")]
	public override void UpdateModule()
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x4DD9800", Offset = "0x4DD9800", VA = "0x4DD9800", Slot = "25")]
	public override bool IsModuleSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x4DD9840", Offset = "0x4DD9840", VA = "0x4DD9840", Slot = "21")]
	public override bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x4DD9930", Offset = "0x4DD9930", VA = "0x4DD9930")]
	private bool UseFakeInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4DD9960", Offset = "0x4DD9960", VA = "0x4DD9960", Slot = "17")]
	public override void Process()
	{
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x4DD99A0", Offset = "0x4DD99A0", VA = "0x4DD99A0")]
	private void FakeTouches()
	{
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x4DD9AC0", Offset = "0x4DD9AC0", VA = "0x4DD9AC0")]
	private void ProcessTouchEvents()
	{
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x4DD9CD0", Offset = "0x4DD9CD0", VA = "0x4DD9CD0")]
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x4DDA690", Offset = "0x4DDA690", VA = "0x4DDA690", Slot = "22")]
	public override void DeactivateModule()
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x4DDA6A0", Offset = "0x4DDA6A0", VA = "0x4DDA6A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
