// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.WaitForSecondsRealtime
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200018F")]
public class WaitForSecondsRealtime : CustomYieldInstruction
{
	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x14")]
	private float m_WaitUntilTime;

	[Token(Token = "0x170001DD")]
	public float waitTime
	{
		[Token(Token = "0x6000B57")]
		[Address(RVA = "0x4E03BE0", Offset = "0x4E03BE0", VA = "0x4E03BE0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000B58")]
		[Address(RVA = "0x4E03BF0", Offset = "0x4E03BF0", VA = "0x4E03BF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001DE")]
	public override bool keepWaiting
	{
		[Token(Token = "0x6000B59")]
		[Address(RVA = "0x4E03C00", Offset = "0x4E03C00", VA = "0x4E03C00", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x4E03CF0", Offset = "0x4E03CF0", VA = "0x4E03CF0")]
	public WaitForSecondsRealtime(float time)
	{
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x4E03D20", Offset = "0x4E03D20", VA = "0x4E03D20", Slot = "8")]
	public override void Reset()
	{
	}
}
