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

[Token(Token = "0x2000198")]
public abstract class CustomYieldInstruction : IEnumerator
{
	[Token(Token = "0x17000236")]
	public abstract bool keepWaiting
	{
		[Token(Token = "0x6000D78")]
		get;
	}

	[Token(Token = "0x17000237")]
	public object Current
	{
		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x69170F0", Offset = "0x69160F0", VA = "0x69170F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x6917100", Offset = "0x6916100", VA = "0x6917100", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x6917120", Offset = "0x6916120", VA = "0x6917120", Slot = "8")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x6917130", Offset = "0x6916130", VA = "0x6917130")]
	protected CustomYieldInstruction()
	{
	}
}
