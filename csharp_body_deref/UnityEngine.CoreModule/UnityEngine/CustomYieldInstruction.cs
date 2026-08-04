// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CustomYieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000163")]
public abstract class CustomYieldInstruction : IEnumerator
{
	[Token(Token = "0x170001C4")]
	public abstract bool keepWaiting
	{
		[Token(Token = "0x6000A20")]
		get;
	}

	[Token(Token = "0x170001C5")]
	public object Current
	{
		[Token(Token = "0x6000A21")]
		[Address(RVA = "0x4DF9320", Offset = "0x4DF9320", VA = "0x4DF9320", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x4DF9330", Offset = "0x4DF9330", VA = "0x4DF9330", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x4DF9350", Offset = "0x4DF9350", VA = "0x4DF9350", Slot = "8")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x4DF9360", Offset = "0x4DF9360", VA = "0x4DF9360")]
	protected CustomYieldInstruction()
	{
	}
}
