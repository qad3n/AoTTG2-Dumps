using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200072D")]
internal class ApplicationStart : MonoBehaviour
{
	[Token(Token = "0x400228A")]
	[FieldOffset(Offset = "0x0")]
	private static bool _firstLaunch;

	[Token(Token = "0x6004611")]
	[Address(RVA = "0x4093D60", Offset = "0x4093D60", VA = "0x4093D60")]
	public void Awake()
	{
	}

	[Token(Token = "0x6004612")]
	[Address(RVA = "0x4093DF0", Offset = "0x4093DF0", VA = "0x4093DF0")]
	private static void Init()
	{
	}

	[Token(Token = "0x6004613")]
	[Address(RVA = "0x4094420", Offset = "0x4094420", VA = "0x4094420")]
	private static void PrewarmTextMeshPro()
	{
	}

	[Token(Token = "0x6004614")]
	[Address(RVA = "0x4094770", Offset = "0x4094770", VA = "0x4094770")]
	public ApplicationStart()
	{
	}
}
