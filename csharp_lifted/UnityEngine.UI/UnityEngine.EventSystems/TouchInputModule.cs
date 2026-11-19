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
		[Address(RVA = "0x6D13AB0", Offset = "0x6D12AB0", VA = "0x6D13AB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x6D13AC0", Offset = "0x6D12AC0", VA = "0x6D13AC0")]
		set
		{
		}
	}

	[Token(Token = "0x170001FD")]
	public bool forceModuleActive
	{
		[Token(Token = "0x6000772")]
		[Address(RVA = "0x6D13AD0", Offset = "0x6D12AD0", VA = "0x6D13AD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000773")]
		[Address(RVA = "0x6D13AE0", Offset = "0x6D12AE0", VA = "0x6D13AE0")]
		set
		{
		}
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x6D13AA0", Offset = "0x6D12AA0", VA = "0x6D13AA0")]
	protected TouchInputModule()
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x6D13AF0", Offset = "0x6D12AF0", VA = "0x6D13AF0", Slot = "24")]
	public override void UpdateModule()
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x6D13C90", Offset = "0x6D12C90", VA = "0x6D13C90", Slot = "25")]
	public override bool IsModuleSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x6D13CD0", Offset = "0x6D12CD0", VA = "0x6D13CD0", Slot = "21")]
	public override bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x6D13DD0", Offset = "0x6D12DD0", VA = "0x6D13DD0")]
	private bool UseFakeInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x6D13E00", Offset = "0x6D12E00", VA = "0x6D13E00", Slot = "17")]
	public override void Process()
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x6D13E40", Offset = "0x6D12E40", VA = "0x6D13E40")]
	private void FakeTouches()
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x6D13F60", Offset = "0x6D12F60", VA = "0x6D13F60")]
	private void ProcessTouchEvents()
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x6D14170", Offset = "0x6D13170", VA = "0x6D14170")]
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released)
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x6D14B20", Offset = "0x6D13B20", VA = "0x6D14B20", Slot = "22")]
	public override void DeactivateModule()
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x6D14B30", Offset = "0x6D13B30", VA = "0x6D14B30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
