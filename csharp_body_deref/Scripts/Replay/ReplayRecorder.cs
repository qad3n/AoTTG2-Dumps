// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayRecorder
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayRecorder.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayRecorder.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000F7")]
internal class ReplayRecorder : MonoBehaviour
{
	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x20")]
	public bool Recording;

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ReplayRecorder()
	{
	}
}
