using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000D6")]
internal class ReplayRecorder : MonoBehaviour
{
	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x20")]
	public bool Recording;

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x3E15480", Offset = "0x3E15480", VA = "0x3E15480")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x3E15490", Offset = "0x3E15490", VA = "0x3E15490")]
	public ReplayRecorder()
	{
	}
}
