using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x200047F")]
internal class BaseAIController : MonoBehaviour
{
	[Token(Token = "0x40013BF")]
	[FieldOffset(Offset = "0x20")]
	protected BaseCharacter _character;

	[Token(Token = "0x6003017")]
	[Address(RVA = "0x3E7E180", Offset = "0x3E7E180", VA = "0x3E7E180", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003018")]
	[Address(RVA = "0x3E7E1D0", Offset = "0x3E7E1D0", VA = "0x3E7E1D0", Slot = "5")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003019")]
	[Address(RVA = "0x3E7E1E0", Offset = "0x3E7E1E0", VA = "0x3E7E1E0", Slot = "6")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x600301A")]
	[Address(RVA = "0x3E7E1F0", Offset = "0x3E7E1F0", VA = "0x3E7E1F0")]
	protected float GetTargetAngle(Vector3 direction)
	{
		return default(float);
	}

	[Token(Token = "0x600301B")]
	[Address(RVA = "0x3E7E430", Offset = "0x3E7E430", VA = "0x3E7E430")]
	protected Quaternion GetTargetRotation(float angle)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x600301C")]
	[Address(RVA = "0x3E7E450", Offset = "0x3E7E450", VA = "0x3E7E450")]
	protected Vector3 GetTargetDirection(float angle)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600301D")]
	[Address(RVA = "0x3E7E5A0", Offset = "0x3E7E5A0", VA = "0x3E7E5A0")]
	public BaseAIController()
	{
	}
}
