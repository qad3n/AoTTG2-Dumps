using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x20000D3")]
internal class ReplayManager : MonoBehaviour
{
	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x0")]
	private static ReplayManager _instance;

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x3E153D0", Offset = "0x3E153D0", VA = "0x3E153D0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x3E15440", Offset = "0x3E15440", VA = "0x3E15440")]
	public ReplayManager()
	{
	}
}
