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

[Token(Token = "0x20000F5")]
internal class BaseReplayObject : MonoBehaviour
{
	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x20")]
	public int ObjectId;

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public virtual void SetState(BaseReplayState state)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public BaseReplayObject()
	{
	}
}
