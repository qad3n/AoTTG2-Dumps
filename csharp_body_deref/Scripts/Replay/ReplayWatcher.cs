// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayWatcher
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayWatcher.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayWatcher.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000DD")]
internal class ReplayWatcher : MonoBehaviour
{
	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x20")]
	public bool Playing;

	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x24")]
	public float Speed;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentTime;

	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxTime;

	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x30")]
	private ReplayScript _script;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x38")]
	private int _currentEvent;

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4104650", Offset = "0x4104650", VA = "0x4104650")]
	public void LoadScript(ReplayScript script)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4104890", Offset = "0x4104890", VA = "0x4104890")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4104710", Offset = "0x4104710", VA = "0x4104710")]
	private void HandleEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x4104980", Offset = "0x4104980", VA = "0x4104980")]
	private void HandleMapEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4104A20", Offset = "0x4104A20", VA = "0x4104A20")]
	private void HandleHumanEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4104A30", Offset = "0x4104A30", VA = "0x4104A30")]
	private void HandleTitanEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4104A40", Offset = "0x4104A40", VA = "0x4104A40")]
	private void HandleCameraEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4104A50", Offset = "0x4104A50", VA = "0x4104A50")]
	private void HandleChatEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4104A60", Offset = "0x4104A60", VA = "0x4104A60")]
	public ReplayWatcher()
	{
	}
}
