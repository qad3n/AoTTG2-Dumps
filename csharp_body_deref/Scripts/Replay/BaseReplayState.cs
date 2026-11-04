// ==================== AoTTG2 cross-reference ====================
// Type: Replay.BaseReplayState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/BaseReplayState.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayState/BaseReplayState.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000FB")]
internal class BaseReplayState : MonoBehaviour
{
	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x20")]
	public Vector3 Position;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x2C")]
	public Quaternion Rotation;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x40")]
	public string Animation;

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public BaseReplayState()
	{
	}
}
