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

[Token(Token = "0x20001CA")]
public class WaitForSecondsRealtime : CustomYieldInstruction
{
	[Token(Token = "0x4000664")]
	[FieldOffset(Offset = "0x14")]
	private float m_WaitUntilTime;

	[Token(Token = "0x17000252")]
	public float waitTime
	{
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x6923F90", Offset = "0x6922F90", VA = "0x6923F90")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000EFA")]
		[Address(RVA = "0x6923FA0", Offset = "0x6922FA0", VA = "0x6923FA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public override bool keepWaiting
	{
		[Token(Token = "0x6000EFB")]
		[Address(RVA = "0x6923FB0", Offset = "0x6922FB0", VA = "0x6923FB0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x6924020", Offset = "0x6923020", VA = "0x6924020")]
	public WaitForSecondsRealtime(float time)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x6924050", Offset = "0x6923050", VA = "0x6924050", Slot = "8")]
	public override void Reset()
	{
	}
}
