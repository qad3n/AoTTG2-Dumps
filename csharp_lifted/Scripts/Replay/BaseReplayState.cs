// ==================== AoTTG2 cross-reference ====================
// Type: Replay.BaseReplayState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/BaseReplayState.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayState/BaseReplayState.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x200006F")]
internal class BaseReplayState : MonoBehaviour
{
	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x20")]
	public Vector3 Position;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x2C")]
	public Quaternion Rotation;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x40")]
	public string Animation;

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x576E5A0", Offset = "0x576D5A0", VA = "0x576E5A0")]
	public BaseReplayState()
	{
		// Lifted from source/cpp/Replay/BaseReplayState.c (Replay.BaseReplayState$$.ctor): clean
		base();
		return;
	}
}
