using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000437")]
internal class CustomLogicCollisionHandler : MonoBehaviour
{
	[Token(Token = "0x40011B4")]
	[FieldOffset(Offset = "0x20")]
	private List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x40011B5")]
	[FieldOffset(Offset = "0x28")]
	private float _lastEnterTime;

	[Token(Token = "0x6002D07")]
	[Address(RVA = "0x3E493B0", Offset = "0x3E493B0", VA = "0x3E493B0")]
	public void RegisterInstance(CustomLogicComponentInstance classInstance)
	{
	}

	[Token(Token = "0x6002D08")]
	[Address(RVA = "0x3E49450", Offset = "0x3E49450", VA = "0x3E49450")]
	public void GetHit(BaseCharacter character, string name, int damage, string type, Vector3 position)
	{
	}

	[Token(Token = "0x6002D09")]
	[Address(RVA = "0x3E49B00", Offset = "0x3E49B00", VA = "0x3E49B00")]
	public void GetHooked(Human human, Vector3 position, bool left)
	{
	}

	[Token(Token = "0x6002D0A")]
	[Address(RVA = "0x3E49EC0", Offset = "0x3E49EC0", VA = "0x3E49EC0")]
	protected void OnCollisionEnter(Collision other)
	{
	}

	[Token(Token = "0x6002D0B")]
	[Address(RVA = "0x3E4A690", Offset = "0x3E4A690", VA = "0x3E4A690")]
	protected void OnCollisionStay(Collision other)
	{
	}

	[Token(Token = "0x6002D0C")]
	[Address(RVA = "0x3E4A9B0", Offset = "0x3E4A9B0", VA = "0x3E4A9B0")]
	protected void OnCollisionExit(Collision other)
	{
	}

	[Token(Token = "0x6002D0D")]
	[Address(RVA = "0x3E4ACD0", Offset = "0x3E4ACD0", VA = "0x3E4ACD0")]
	public void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6002D0E")]
	[Address(RVA = "0x3E4AE60", Offset = "0x3E4AE60", VA = "0x3E4AE60")]
	protected void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6002D0F")]
	[Address(RVA = "0x3E4AFD0", Offset = "0x3E4AFD0", VA = "0x3E4AFD0")]
	protected void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6002D10")]
	[Address(RVA = "0x3E4A040", Offset = "0x3E4A040", VA = "0x3E4A040")]
	public static BuiltinClassInstance GetBuiltin(Collider other)
	{
		return null;
	}

	[Token(Token = "0x6002D11")]
	[Address(RVA = "0x3E4B140", Offset = "0x3E4B140", VA = "0x3E4B140")]
	public CustomLogicCollisionHandler()
	{
	}
}
