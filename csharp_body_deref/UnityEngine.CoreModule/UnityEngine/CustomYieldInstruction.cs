using System.Collections;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000160")]
public abstract class CustomYieldInstruction : IEnumerator
{
	[Token(Token = "0x170001C3")]
	public abstract bool keepWaiting
	{
		[Token(Token = "0x6000A1E")]
		get;
	}

	[Token(Token = "0x170001C4")]
	public object Current
	{
		[Token(Token = "0x6000A1F")]
		[Address(RVA = "0x4AD19F0", Offset = "0x4AD19F0", VA = "0x4AD19F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x4AD1A00", Offset = "0x4AD1A00", VA = "0x4AD1A00", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x4AD1A20", Offset = "0x4AD1A20", VA = "0x4AD1A20", Slot = "8")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x4AD1A30", Offset = "0x4AD1A30", VA = "0x4AD1A30")]
	protected CustomYieldInstruction()
	{
	}
}
