using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000002")]
public class Windmill_RandomSpin : MonoBehaviour
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Animator _animator;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x22ED180", Offset = "0x22ED180", VA = "0x22ED180")]
	private void Start()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x22ED1D0", Offset = "0x22ED1D0", VA = "0x22ED1D0")]
	private void RandomSpin()
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x22ED210", Offset = "0x22ED210", VA = "0x22ED210")]
	public Windmill_RandomSpin()
	{
	}
}
