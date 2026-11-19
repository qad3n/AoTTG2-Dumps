// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayRecorder
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayRecorder.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayRecorder.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x200006B")]
internal class ReplayRecorder : MonoBehaviour
{
	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x20")]
	public bool Recording;

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x576E4E0", Offset = "0x576D4E0", VA = "0x576E4E0")]
	private void FixedUpdate()
	{
		// Lifted from source/cpp/Replay/ReplayRecorder.c (Replay.ReplayRecorder$$FixedUpdate): clean
		return;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x576E4F0", Offset = "0x576D4F0", VA = "0x576E4F0")]
	public ReplayRecorder()
	{
		// Lifted from source/cpp/Replay/ReplayRecorder.c (Replay.ReplayRecorder$$.ctor): clean
		base();
		return;
	}
}
