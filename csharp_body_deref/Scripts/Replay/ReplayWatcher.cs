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

[Token(Token = "0x2000071")]
internal class ReplayWatcher : MonoBehaviour
{
	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x20")]
	public bool Playing;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x24")]
	public float Speed;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentTime;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxTime;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x30")]
	private ReplayScript _script;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x38")]
	private int _currentEvent;

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x576E5C0", Offset = "0x576D5C0", VA = "0x576E5C0")]
	public void LoadScript(ReplayScript script)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x576E810", Offset = "0x576D810", VA = "0x576E810")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x576E690", Offset = "0x576D690", VA = "0x576E690")]
	private void HandleEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x576E8F0", Offset = "0x576D8F0", VA = "0x576E8F0")]
	private void HandleMapEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x576E990", Offset = "0x576D990", VA = "0x576E990")]
	private void HandleHumanEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x576E9A0", Offset = "0x576D9A0", VA = "0x576E9A0")]
	private void HandleTitanEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x576E9B0", Offset = "0x576D9B0", VA = "0x576E9B0")]
	private void HandleCameraEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x576E9C0", Offset = "0x576D9C0", VA = "0x576E9C0")]
	private void HandleChatEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x576E9D0", Offset = "0x576D9D0", VA = "0x576E9D0")]
	public ReplayWatcher()
	{
	}
}
