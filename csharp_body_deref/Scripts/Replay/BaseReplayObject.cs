// ==================== AoTTG2 cross-reference ====================
// Type: Replay.BaseReplayObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/BaseReplayObject.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayObject/BaseReplayObject.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000D5")]
internal class BaseReplayObject : MonoBehaviour
{
	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x20")]
	public int ObjectId;

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x4104540", Offset = "0x4104540", VA = "0x4104540", Slot = "4")]
	public virtual void SetState(BaseReplayState state)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x4104550", Offset = "0x4104550", VA = "0x4104550")]
	public BaseReplayObject()
	{
	}
}
