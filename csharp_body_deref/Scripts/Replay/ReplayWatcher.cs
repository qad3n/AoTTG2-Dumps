using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000DC")]
internal class ReplayWatcher : MonoBehaviour
{
	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x20")]
	public bool Playing;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x24")]
	public float Speed;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentTime;

	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxTime;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x30")]
	private ReplayScript _script;

	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x38")]
	private int _currentEvent;

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x3E15560", Offset = "0x3E15560", VA = "0x3E15560")]
	public void LoadScript(ReplayScript script)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x3E157A0", Offset = "0x3E157A0", VA = "0x3E157A0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x3E15620", Offset = "0x3E15620", VA = "0x3E15620")]
	private void HandleEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x3E15890", Offset = "0x3E15890", VA = "0x3E15890")]
	private void HandleMapEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x3E15930", Offset = "0x3E15930", VA = "0x3E15930")]
	private void HandleHumanEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x3E15940", Offset = "0x3E15940", VA = "0x3E15940")]
	private void HandleTitanEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x3E15950", Offset = "0x3E15950", VA = "0x3E15950")]
	private void HandleCameraEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x3E15960", Offset = "0x3E15960", VA = "0x3E15960")]
	private void HandleChatEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x3E15970", Offset = "0x3E15970", VA = "0x3E15970")]
	public ReplayWatcher()
	{
	}
}
