using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000D4")]
internal class BaseReplayObject : MonoBehaviour
{
	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x20")]
	public int ObjectId;

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x3E15450", Offset = "0x3E15450", VA = "0x3E15450", Slot = "4")]
	public virtual void SetState(BaseReplayState state)
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x3E15460", Offset = "0x3E15460", VA = "0x3E15460")]
	public BaseReplayObject()
	{
	}
}
