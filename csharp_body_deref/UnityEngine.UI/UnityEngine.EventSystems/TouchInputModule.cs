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
		[Address(RVA = "0x5100F70", Offset = "0x5100F70", VA = "0x5100F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x5100F80", Offset = "0x5100F80", VA = "0x5100F80")]
		set
		{
		}
	}

	[Token(Token = "0x170001ED")]
	public bool forceModuleActive
	{
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x5100F90", Offset = "0x5100F90", VA = "0x5100F90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x5100FA0", Offset = "0x5100FA0", VA = "0x5100FA0")]
		set
		{
		}
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x5100F60", Offset = "0x5100F60", VA = "0x5100F60")]
	protected TouchInputModule()
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x5100FB0", Offset = "0x5100FB0", VA = "0x5100FB0", Slot = "24")]
	public override void UpdateModule()
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x5101150", Offset = "0x5101150", VA = "0x5101150", Slot = "25")]
	public override bool IsModuleSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x5101190", Offset = "0x5101190", VA = "0x5101190", Slot = "21")]
	public override bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x5101280", Offset = "0x5101280", VA = "0x5101280")]
	private bool UseFakeInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x51012B0", Offset = "0x51012B0", VA = "0x51012B0", Slot = "17")]
	public override void Process()
	{
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x51012F0", Offset = "0x51012F0", VA = "0x51012F0")]
	private void FakeTouches()
	{
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x5101410", Offset = "0x5101410", VA = "0x5101410")]
	private void ProcessTouchEvents()
	{
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x5101620", Offset = "0x5101620", VA = "0x5101620")]
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x5101FE0", Offset = "0x5101FE0", VA = "0x5101FE0", Slot = "22")]
	public override void DeactivateModule()
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x5101FF0", Offset = "0x5101FF0", VA = "0x5101FF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
