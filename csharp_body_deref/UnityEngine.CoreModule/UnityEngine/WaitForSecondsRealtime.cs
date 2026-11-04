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

[Token(Token = "0x20001C9")]
public class WaitForSecondsRealtime : CustomYieldInstruction
{
	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0x14")]
	private float m_WaitUntilTime;

	[Token(Token = "0x1700024D")]
	public float waitTime
	{
		[Token(Token = "0x6000EE7")]
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000EE8")]
		[Address(RVA = "0x5606B0", Offset = "0x55ECB0", VA = "0x1805606B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public override bool keepWaiting
	{
		[Token(Token = "0x6000EE9")]
		[Address(RVA = "0x2F2D5A0", Offset = "0x2F2BBA0", VA = "0x182F2D5A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x2F2D570", Offset = "0x2F2BB70", VA = "0x182F2D570")]
	public WaitForSecondsRealtime(float time)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x2F2D560", Offset = "0x2F2BB60", VA = "0x182F2D560", Slot = "8")]
	public override void Reset()
	{
	}
}
