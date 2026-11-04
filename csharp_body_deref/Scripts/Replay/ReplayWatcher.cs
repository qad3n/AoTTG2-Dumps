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

[Token(Token = "0x20000FD")]
internal class ReplayWatcher : MonoBehaviour
{
	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x20")]
	public bool Playing;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x24")]
	public float Speed;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentTime;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxTime;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x30")]
	private ReplayScript _script;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x38")]
	private int _currentEvent;

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x1F255A0", Offset = "0x1F23BA0", VA = "0x181F255A0")]
	public void LoadScript(ReplayScript script)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x1F251E0", Offset = "0x1F237E0", VA = "0x181F251E0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x1F252E0", Offset = "0x1F238E0", VA = "0x181F252E0")]
	private void HandleEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x1F254F0", Offset = "0x1F23AF0", VA = "0x181F254F0")]
	private void HandleMapEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void HandleHumanEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void HandleTitanEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void HandleCameraEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void HandleChatEvent(ReplayScriptEvent currentEvent)
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ReplayWatcher()
	{
	}
}
