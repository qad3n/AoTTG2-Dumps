// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollisionHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollisionHandler.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicCollisionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20005D2")]
internal class CustomLogicCollisionHandler : MonoBehaviour
{
	[Token(Token = "0x40018FE")]
	[FieldOffset(Offset = "0x20")]
	private List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x40018FF")]
	[FieldOffset(Offset = "0x28")]
	private float _lastEnterTime;

	[Token(Token = "0x6003881")]
	[Address(RVA = "0x209D1C0", Offset = "0x209B7C0", VA = "0x18209D1C0")]
	public void RegisterInstance(CustomLogicComponentInstance classInstance)
	{
	}

	[Token(Token = "0x6003882")]
	[Address(RVA = "0x209C070", Offset = "0x209A670", VA = "0x18209C070")]
	public void GetHit(BaseCharacter character, string name, int damage, string type, Vector3 position)
	{
	}

	[Token(Token = "0x6003883")]
	[Address(RVA = "0x209C260", Offset = "0x209A860", VA = "0x18209C260")]
	public void GetHooked(Human human, Vector3 position, bool left)
	{
	}

	[Token(Token = "0x6003884")]
	[Address(RVA = "0x209C570", Offset = "0x209AB70", VA = "0x18209C570")]
	protected void OnCollisionEnter(Collision other)
	{
	}

	[Token(Token = "0x6003885")]
	[Address(RVA = "0x209C990", Offset = "0x209AF90", VA = "0x18209C990")]
	protected void OnCollisionStay(Collision other)
	{
	}

	[Token(Token = "0x6003886")]
	[Address(RVA = "0x209C780", Offset = "0x209AD80", VA = "0x18209C780")]
	protected void OnCollisionExit(Collision other)
	{
	}

	[Token(Token = "0x6003887")]
	[Address(RVA = "0x209CBA0", Offset = "0x209B1A0", VA = "0x18209CBA0")]
	public void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6003888")]
	[Address(RVA = "0x209CFC0", Offset = "0x209B5C0", VA = "0x18209CFC0")]
	protected void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6003889")]
	[Address(RVA = "0x209CDC0", Offset = "0x209B3C0", VA = "0x18209CDC0")]
	protected void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x600388A")]
	[Address(RVA = "0x209BE70", Offset = "0x209A470", VA = "0x18209BE70")]
	public static BuiltinClassInstance GetBuiltin(Collider other)
	{
		return null;
	}

	[Token(Token = "0x600388B")]
	[Address(RVA = "0x209D270", Offset = "0x209B870", VA = "0x18209D270")]
	public CustomLogicCollisionHandler()
	{
	}
}
