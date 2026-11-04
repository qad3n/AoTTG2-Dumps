// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.InputEventPartialProvider
// Update status: NEW in this game update
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
	[Address(RVA = "0x2FBC770", Offset = "0x2FBAD70", VA = "0x182FBC770", Slot = "4")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void Shutdown()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x2FBD170", Offset = "0x2FBB770", VA = "0x182FBD170", Slot = "6")]
	public void Update()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2FBC7A0", Offset = "0x2FBADA0", VA = "0x182FBC7A0", Slot = "7")]
	public void OnFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2FBC740", Offset = "0x2FBAD40", VA = "0x182FBC740")]
	private DiscreteTime GetTimestamp(in UnityEngine.Event ev)
	{
		return default(DiscreteTime);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2FBCE60", Offset = "0x2FBB460", VA = "0x182FBCE60")]
	private void UpdateEventModifiers(in UnityEngine.Event ev)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2FBCBF0", Offset = "0x2FBB1F0", VA = "0x182FBCBF0")]
	private KeyEvent ToKeyEvent(in UnityEngine.Event ev)
	{
		return default(KeyEvent);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2FBCDC0", Offset = "0x2FBB3C0", VA = "0x182FBCDC0")]
	private TextInputEvent ToTextInputEvent(in UnityEngine.Event ev)
	{
		return default(TextInputEvent);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x2FBC7D0", Offset = "0x2FBADD0", VA = "0x182FBC7D0")]
	private void SendNextOrPreviousNavigationEventOnTabKeyDownEvent(in UnityEngine.Event ev)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2FBC9E0", Offset = "0x2FBAFE0", VA = "0x182FBC9E0")]
	private CommandEvent ToCommandEvent(in UnityEngine.Event ev)
	{
		return default(CommandEvent);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2FBD4E0", Offset = "0x2FBBAE0", VA = "0x182FBD4E0")]
	public InputEventPartialProvider()
	{
	}
}
