using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000013")]
public class LookAtTarget : MonoBehaviour
{
	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Transform _target;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float _speed;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x2C")]
	private Vector3 _lookAtTarget;

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3C69BC0", Offset = "0x3C69BC0", VA = "0x3C69BC0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3C69C90", Offset = "0x3C69C90", VA = "0x3C69C90")]
	public LookAtTarget()
	{
	}
}
