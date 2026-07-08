using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000DA")]
internal class BaseReplayState : MonoBehaviour
{
	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x20")]
	public Vector3 Position;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x2C")]
	public Quaternion Rotation;

	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x40")]
	public string Animation;

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x3E15540", Offset = "0x3E15540", VA = "0x3E15540")]
	public BaseReplayState()
	{
	}
}
