// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.InputEventPartialProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.IntegerTime;

namespace UnityEngine.InputForUI;

[Token(Token = "0x2000023")]
internal class InputEventPartialProvider : IEventProviderImpl
{
	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x10")]
	private UnityEngine.Event _ev;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x18")]
	private OperatingSystemFamily _operatingSystemFamily;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x1C")]
	private KeyEvent.ButtonsState _keyboardButtonsState;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x44")]
	internal EventModifiers _eventModifiers;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x48")]
	internal bool _sendNavigationEventOnTabKey;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x50")]
	private IDictionary<string, CommandEvent.Command> _IMGUICommandToInputForUICommandType;

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x69B8430", Offset = "0x69B7430", VA = "0x69B8430", Slot = "4")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x69B8460", Offset = "0x69B7460", VA = "0x69B8460", Slot = "5")]
	public void Shutdown()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x69B8470", Offset = "0x69B7470", VA = "0x69B8470", Slot = "6")]
	public void Update()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x69B90A0", Offset = "0x69B80A0", VA = "0x69B90A0", Slot = "7")]
	public void OnFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x69B90C0", Offset = "0x69B80C0", VA = "0x69B90C0")]
	private DiscreteTime GetTimestamp(in UnityEngine.Event ev)
	{
		return default(DiscreteTime);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x69B88E0", Offset = "0x69B78E0", VA = "0x69B88E0")]
	private void UpdateEventModifiers(in UnityEngine.Event ev)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x69B8B90", Offset = "0x69B7B90", VA = "0x69B8B90")]
	private KeyEvent ToKeyEvent(in UnityEngine.Event ev)
	{
		return default(KeyEvent);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x69B8E60", Offset = "0x69B7E60", VA = "0x69B8E60")]
	private TextInputEvent ToTextInputEvent(in UnityEngine.Event ev)
	{
		return default(TextInputEvent);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x69B8CF0", Offset = "0x69B7CF0", VA = "0x69B8CF0")]
	private void SendNextOrPreviousNavigationEventOnTabKeyDownEvent(in UnityEngine.Event ev)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x69B8ED0", Offset = "0x69B7ED0", VA = "0x69B8ED0")]
	private CommandEvent ToCommandEvent(in UnityEngine.Event ev)
	{
		return default(CommandEvent);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x69B90E0", Offset = "0x69B80E0", VA = "0x69B90E0")]
	public InputEventPartialProvider()
	{
	}
}
