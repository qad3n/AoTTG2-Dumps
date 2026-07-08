using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000518")]
internal class TitanProjectileDetection : MonoBehaviour
{
	[Token(Token = "0x4001945")]
	[FieldOffset(Offset = "0x20")]
	public HashSet<GameObject> _entities;

	[Token(Token = "0x4001946")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<Hook> _hooks;

	[Token(Token = "0x4001947")]
	[FieldOffset(Offset = "0x30")]
	public BaseTitan Owner;

	[Token(Token = "0x4001948")]
	[FieldOffset(Offset = "0x38")]
	public bool Detect;

	[Token(Token = "0x60035D9")]
	[Address(RVA = "0x3F142A0", Offset = "0x3F142A0", VA = "0x3F142A0")]
	public static TitanProjectileDetection Create(BaseTitan owner)
	{
		return null;
	}

	[Token(Token = "0x60035DA")]
	[Address(RVA = "0x3F148D0", Offset = "0x3F148D0", VA = "0x3F148D0")]
	public void RegisterHook(Hook hook)
	{
	}

	[Token(Token = "0x60035DB")]
	[Address(RVA = "0x3F14930", Offset = "0x3F14930", VA = "0x3F14930")]
	protected void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60035DC")]
	[Address(RVA = "0x3F14A30", Offset = "0x3F14A30", VA = "0x3F14A30")]
	protected void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60035DD")]
	[Address(RVA = "0x3F14B30", Offset = "0x3F14B30", VA = "0x3F14B30")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x60035DE")]
	[Address(RVA = "0x3F14D00", Offset = "0x3F14D00", VA = "0x3F14D00")]
	public TitanProjectileDetection()
	{
	}
}
