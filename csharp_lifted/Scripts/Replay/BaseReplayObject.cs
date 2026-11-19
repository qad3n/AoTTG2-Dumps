// ==================== AoTTG2 cross-reference ====================
// Type: Replay.BaseReplayObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/BaseReplayObject.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayObject/BaseReplayObject.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x2000069")]
internal class BaseReplayObject : MonoBehaviour
{
	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x20")]
	public int ObjectId;

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x576E4B0", Offset = "0x576D4B0", VA = "0x576E4B0", Slot = "4")]
	public virtual void SetState(BaseReplayState state)
	{
		// Lifted from source/cpp/Replay/BaseReplayObject.c (Replay.BaseReplayObject$$SetState): clean
		return;
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x576E4C0", Offset = "0x576D4C0", VA = "0x576E4C0")]
	public BaseReplayObject()
	{
		// Lifted from source/cpp/Replay/BaseReplayObject.c (Replay.BaseReplayObject$$.ctor): clean
		base();
		return;
	}
}
