using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000014")]
public class MouseMove : MonoBehaviour
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float _sensitivity;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x24")]
	private Vector3 _originalPos;

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3C69CA0", Offset = "0x3C69CA0", VA = "0x3C69CA0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3C69CD0", Offset = "0x3C69CD0", VA = "0x3C69CD0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3C69DA0", Offset = "0x3C69DA0", VA = "0x3C69DA0")]
	public MouseMove()
	{
	}
}
